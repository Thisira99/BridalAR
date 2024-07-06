#if ARSUBSYSTEMS_4_OR_NEWER
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Unity.Collections;
using Unity.MARS.Data;
using Unity.MARS.Providers;
using Unity.XRTools.ModuleLoader;
using Unity.XRTools.Utils;
using UnityEngine;
using UnityEngine.XR.ARSubsystems;

namespace Unity.MARS.XRSubsystem
{
    // The subsystem needs to convert the HumanPose from IUsesMarsBodyTracking into a joint hierarchy that will go
    // to AR Foundation.  Although AR Foundation does not specify this hierarchy currently users (and the
    // arfoundation-samples example) will expect ARKit's human rig hierarchy as it is the only existing implmentation.

    // This is done with Unity's humanoid animation retargetting.  A HumanPoseHandler is created targetting a reference
    // transform hierarchy with an Animator and Avatar, which come from a prefab specified in the settings.  To get the
    // correct ordering of joints in the returned array we look them up by name from the ARKitJointIndices enum which
    // unfortunately bakes the ARKit ordering into the code, but is the same approach taken both in the MARS body tracking
    // provider and the arfoundation-samples example scene.

    /// <summary>
    /// Human body tracking subsystem for MARS XR Subsystem
    /// </summary>
    public sealed class BodiesSubsystem : XRHumanBodySubsystem, IMarsXRSubsystem
    {
        // Mirror memory layout of UnityEngine.XR.ARSubsystems.XRHumanBody
#pragma warning disable 649
        [StructLayout(LayoutKind.Sequential)]
        internal struct XRHumanBody
        {
            public TrackableId m_TrackableId;
            public Pose m_Pose;
            public float m_EstimatedHeightScaleFactor;
            public TrackingState m_TrackingState;
            public IntPtr m_NativePtr;
        }
#pragma warning restore 649

        IMarsXRSubscriber m_FunctionalitySubscriber;

        public IMarsXRSubscriber FunctionalitySubscriber
        {
            get
            {
#if UNITY_2020_2_OR_NEWER
                if (m_FunctionalitySubscriber == null)
                    m_FunctionalitySubscriber = provider as IMarsXRSubscriber;
#endif
                return m_FunctionalitySubscriber;
            }
        }

#if !UNITY_2020_2_OR_NEWER
        protected override Provider CreateProvider() => CreateMarsProvider();
#endif

        MARSXRProvider CreateMarsProvider()
        {
            var marsProvider = new MARSXRProvider();
            m_FunctionalitySubscriber = marsProvider;
            return marsProvider;
        }

        class MARSXRProvider : Provider, IMarsXRSubscriber, IUsesMarsBodyTracking
        {
            class Rig
            {
                public Transform root;
                public HumanPoseHandler poseHandler;
                public XRHumanBodyJoint[] joints;

                public Transform[] jointMap;
            }

            readonly Dictionary<MarsTrackableId, IMarsBody> m_AddedBodies = new Dictionary<MarsTrackableId, IMarsBody>();
            readonly Dictionary<MarsTrackableId, IMarsBody> m_UpdatedBodies = new Dictionary<MarsTrackableId, IMarsBody>();
            readonly HashSet<MarsTrackableId> m_RemovedBodies = new HashSet<MarsTrackableId>();
            readonly Dictionary<TrackableId, IMarsBody> m_Bodies = new Dictionary<TrackableId, IMarsBody>();

            readonly Dictionary<TrackableId, Rig> m_Rigs = new Dictionary<TrackableId, Rig>();

            Avatar m_Avatar;
            Animator m_Animator;
            HumanPoseHandler m_PoseHandler;
            GameObject m_SkeletonRoot;

            const int k_DefaultConversionBufferCapacity = 1;
            XRHumanBody[] m_ConversionBuffer = new XRHumanBody[k_DefaultConversionBufferCapacity];
            TrackableId[] m_IdConversionBuffer = new TrackableId[k_DefaultConversionBufferCapacity];

            IProvidesMarsBodyTracking IFunctionalitySubscriber<IProvidesMarsBodyTracking>.provider { get; set; }

            public override bool pose3DRequested { get; set; }
            public override bool pose2DEnabled => false;
            public override bool pose3DScaleEstimationEnabled => true;

            void BodyAdded(IMarsBody body)
            {
                m_AddedBodies.Add(body.id, body);
                m_Bodies.Add(body.id.ToTrackableId(), body);
            }

            void BodyUpdated(IMarsBody body)
            {
                if (m_AddedBodies.ContainsKey(body.id))
                    m_AddedBodies[body.id] = body;
                else
                    m_UpdatedBodies[body.id] = body;

                m_Bodies[body.id.ToTrackableId()] = body;
            }

            void BodyRemoved(IMarsBody body)
            {
                if (!m_AddedBodies.Remove(body.id))
                {
                    m_UpdatedBodies.Remove(body.id);
                    m_RemovedBodies.Add(body.id);
                }
            }

            public void SubscribeToEvents()
            {
                this.SubscribeBodyAdded(BodyAdded);
                this.SubscribeBodyUpdated(BodyUpdated);
                this.SubscribeBodyRemoved(BodyRemoved);
            }

            public void UnsubscribeFromEvents()
            {
                this.UnsubscribeBodyAdded(BodyAdded);
                this.UnsubscribeBodyUpdated(BodyUpdated);
                this.UnsubscribeBodyRemoved(BodyRemoved);
            }

            public override void Start() { }

            public override void Stop() { }

            public override void Destroy() { }

            public override TrackableChanges<UnityEngine.XR.ARSubsystems.XRHumanBody> GetChanges(UnityEngine.XR.ARSubsystems.XRHumanBody defaultBody, Allocator allocator)
            {
                var changes = new TrackableChanges<UnityEngine.XR.ARSubsystems.XRHumanBody>(m_AddedBodies.Count, m_UpdatedBodies.Count, m_RemovedBodies.Count, allocator);
                var numAddedBodies = m_AddedBodies.Count;
                if (numAddedBodies > 0)
                {
                    Utils.EnsureCapacity(ref m_ConversionBuffer, numAddedBodies);
                    var i = 0;
                    foreach (var body in m_AddedBodies.Values)
                        m_ConversionBuffer[i++] = XRHumanBodyFromMarsBody(body);

                    NativeArray<XRHumanBody>.Copy(m_ConversionBuffer, changes.added.Reinterpret<XRHumanBody>(), numAddedBodies);
                    m_AddedBodies.Clear();
                }

                var numUpdatedBodies = m_UpdatedBodies.Count;
                if (numUpdatedBodies > 0)
                {
                    Utils.EnsureCapacity(ref m_ConversionBuffer, numUpdatedBodies);
                    var i = 0;
                    foreach (var body in m_UpdatedBodies.Values)
                        m_ConversionBuffer[i++] = XRHumanBodyFromMarsBody(body);

                    NativeArray<XRHumanBody>.Copy(m_ConversionBuffer, changes.updated.Reinterpret<XRHumanBody>(), numUpdatedBodies);
                    m_UpdatedBodies.Clear();
                }

                var numRemovedBodies = m_RemovedBodies.Count;
                if (numRemovedBodies > 0)
                {
                    Utils.EnsureCapacity(ref m_IdConversionBuffer, numRemovedBodies);
                    var i = 0;
                    foreach (var id in m_RemovedBodies)
                        m_IdConversionBuffer[i++] = new TrackableId(id.subId1, id.subId2);

                    NativeArray<TrackableId>.Copy(m_IdConversionBuffer, changes.removed, numRemovedBodies);
                    m_RemovedBodies.Clear();
                }

                return changes;
            }

            public override NativeArray<XRHumanBodyPose2DJoint> GetHumanBodyPose2DJoints(XRHumanBodyPose2DJoint defaultJoint,
                Int32 screenWidth, Int32 screenHeight, ScreenOrientation screenOrientation, Allocator allocator)
            {
                return base.GetHumanBodyPose2DJoints(defaultJoint, screenWidth, screenHeight, screenOrientation, allocator);
            }

            public override void GetSkeleton(TrackableId trackableId, Allocator allocator, ref NativeArray<XRHumanBodyJoint> skeleton)
            {
                if (!m_Rigs.TryGetValue(trackableId, out var rig))
                {
                    rig = SetupRig(trackableId);
                    m_Rigs[trackableId] = rig;
                }

                var numJoints = rig.joints.Length;
                if (!skeleton.IsCreated || (skeleton.Length != numJoints))
                {
                    if (skeleton.IsCreated)
                        skeleton.Dispose();

                    skeleton = new NativeArray<XRHumanBodyJoint>(numJoints, allocator);
                }

                var body = m_Bodies[trackableId];
                var pose = body.BodyPose;
                rig.poseHandler.SetHumanPose(ref pose);

                UpdateRig(rig);

                skeleton.CopyFrom(rig.joints);
            }

            Rig SetupRig(TrackableId trackableId)
            {
                var prefabRoot = UnityEngine.Object.Instantiate(MARSXRSubsystemSettings.Instance.m_BodyPrefab);
                prefabRoot.hideFlags = HideFlags.HideAndDontSave;
                prefabRoot.name = $"MARS Body Rig {trackableId}";
                var animator = prefabRoot.GetComponentInChildren<Animator>();

                return MapJoints(animator);
            }

            Rig MapJoints(Animator animator)
            {
                var rootName = MARSXRSubsystemSettings.Instance.m_BodyRootName;
                Transform root = animator.gameObject.GetNamedChild(rootName).transform;
                
                var joints = new XRHumanBodyJoint[ARKitJointIndices.Total];
                var transforms = new Transform[ARKitJointIndices.Total];
                var transformToId = new Dictionary<Transform, int>();

                var stack = new Stack<Transform>();
                stack.Push(root);
                while (stack.Count > 0)
                {
                    var t = stack.Pop();
                    var id = t == root ? 0 : GetJointIndex(t.name);
                    if (id >= 0)
                    {
                        transforms[id] = t;
                        transformToId.Add(t, id);
                        var parentId = transformToId.TryGetValue(t.parent, out var tmp) ? tmp : -1;
                        joints[id] = new XRHumanBodyJoint(
                            id,
                            parentId,
                            Vector3.one,
                            Pose.identity,
                            Vector3.one,
                            Pose.identity,
                            true);
                    }

                    for (var i = 0; i < t.childCount; i++)
                    {
                        stack.Push(t.GetChild(i));
                    }
                }

                return new Rig {
                    root = root,
                    poseHandler = new HumanPoseHandler(animator.avatar, animator.transform),
                    joints = joints,
                    jointMap = transforms,
                };
            }

            static int GetJointIndex(string name)
            {
                if (Enum.TryParse(name, out ARKitJointIndices.NameToIndex i))
                    return (int)i;

                return -1;
            }

            void UpdateRig(Rig rig)
            {
                var anchor = rig.jointMap[1];
                for (var id = 0; id < rig.joints.Length; id++)
                {
                    var t = rig.jointMap[id];
                    var oldJoint = rig.joints[id];

                    Vector3 localScale;
                    Pose localPose;
                    Vector3 anchorScale;
                    Pose anchorPose;
                    if (id <= 1)
                    {
                        localScale = anchorScale = t.lossyScale;
                        localPose = anchorPose = new Pose(Vector3.zero, t.localRotation);
                    }
                    else
                    {
                        localScale = t.localScale;
                        localPose = new Pose(t.localPosition, t.localRotation);
                        var anchorMatrix = anchor.worldToLocalMatrix * t.localToWorldMatrix;
                        anchorScale = anchorMatrix.lossyScale;
                        anchorPose = new Pose(anchor.InverseTransformPoint(t.position), anchorMatrix.rotation);
                    }

                    rig.joints[id] = new XRHumanBodyJoint(
                        id,
                        oldJoint.parentIndex,
                        localScale,
                        localPose,
                        anchorScale,
                        anchorPose,
                        true);
                }
            }
        }

        static XRHumanBody XRHumanBodyFromMarsBody(IMarsBody marsBody)
        {
            return new XRHumanBody {
                m_TrackableId = new TrackableId(marsBody.id.subId1, marsBody.id.subId2),
                m_Pose = marsBody.pose,
                m_EstimatedHeightScaleFactor = marsBody.Height,
                m_TrackingState = TrackingState.Tracking,
                m_NativePtr = IntPtr.Zero,
            };
        }

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        static void RegisterDescriptor()
        {
            XRHumanBodySubsystem.Register(new XRHumanBodySubsystemCinfo
            {
                id = "MARS-Bodies",
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(BodiesSubsystem.MARSXRProvider),
                subsystemTypeOverride = typeof(BodiesSubsystem),
#else
                implementationType = typeof(BodiesSubsystem),
#endif
                supportsHumanBody2D = false,
                supportsHumanBody3D = true,
                supportsHumanBody3DScaleEstimation = true,
            });
        }
    }
}
#endif
