using System;
using System.Collections.Generic;
using Unity.MARS.Providers;
using Unity.MARS.Query;
using UnityEngine;
using Unity.XRTools.ModuleLoader;

namespace Unity.MARS.Data
{
    /// <summary>
    /// Trivial example of a Unity MARS face tracking provider
    /// Provides a pose which follows the path of a circle and rotates in-place
    /// </summary>
    class SampleFaceProvider : MonoBehaviour, IProvidesFaceTracking, IUsesMARSTrackableData<IMRFace>,
        IProvidesTraits<bool>, IProvidesTraits<Pose>, IProvidesTraits<int>
    {
        /// <summary>
        /// Provider-specific implementation of IMRFace
        /// </summary>
        class SampleFace : IMRFace
        {
            readonly Dictionary<MRFaceLandmark, Pose> m_LandmarkPoses = new Dictionary<MRFaceLandmark, Pose>();
            readonly Dictionary<MRFaceExpression, float> m_Expressions = new Dictionary<MRFaceExpression, float>();

            /// <summary>
            /// The id of this face as determined by the provider
            /// </summary>
            public MarsTrackableId id { get; set; }

            /// <summary>
            /// The pose of this face
            /// </summary>
            public Pose pose { get; internal set; }

            /// <summary>
            /// A mesh for this face, if one exists
            /// </summary>
            public Mesh Mesh { get { return null; } }

            /// <summary>
            /// World poses of available face landmarks
            /// </summary>
            public Dictionary<MRFaceLandmark, Pose> LandmarkPoses { get { return m_LandmarkPoses; } }

            public Dictionary<MRFaceExpression, float> Expressions { get { return m_Expressions; } }

            public SampleFace()
            {
                pose = new Pose {rotation = Quaternion.identity};
            }
        }

        static readonly TraitDefinition[] k_ProvidedTraits =
        {
            TraitDefinitions.Face,
            TraitDefinitions.Pose,
            TraitDefinitions.TrackingState,
        };

        [SerializeField]
        float m_RotationSpeed = 2;

        [SerializeField]
        float m_OscillationSpeed = 1;

        SampleFace m_Face;

        /// <summary>
        /// The absolute maximum number of faces that can be supported by the provider.
        /// -1 if unlimited.
        /// </summary>
        public int SupportedFaceCount { get { return 1; } }

        /// <summary>
        /// Gets the current maximum face count.
        /// If RequestedMaximumFaceCount set is supported, will reflect that value once the provider has been updated.
        /// </summary>
        public int CurrentMaximumFaceCount { get { return 1; } }

        /// <summary>
        /// Get and set how many faces to track simultaneously.
        /// Set may not work for all platforms/providers.
        /// </summary>
        public int RequestedMaximumFaceCount { get; set; }

        /// <summary>
        /// Called when a face become tracked for the first time
        /// </summary>
        public event Action<IMRFace> FaceAdded;

        /// <summary>
        /// Called when a tracked face has updated data
        /// </summary>
        public event Action<IMRFace> FaceUpdated;

        /// <summary>
        /// Called when a tracked face is removed (lost)
        /// </summary>
        public event Action<IMRFace> FaceRemoved;

        /// <summary>
        /// Returns the traits that can always be provided
        /// </summary>
        /// <returns></returns>
        // ReSharper disable once UnusedMember.Local
        static TraitDefinition[] GetStaticProvidedTraits() { return k_ProvidedTraits; }

        /// <summary>
        /// Returns the currently provided traits
        /// </summary>
        /// <returns></returns>
        public TraitDefinition[] GetProvidedTraits() { return k_ProvidedTraits; }

        /// <summary>
        /// Get the total number of faces that can be tracked by this provider simultaneously
        /// </summary>
        /// <returns>The maximum possible number of simultaneously tracked faces, -1 if there is no theoretical limit</returns>
        public int GetMaxFaceCount() { return 1; }

        /// <summary>
        /// Get the currently tracked faces
        /// </summary>
        /// <param name="faces">A list of MRFace objects to which the currently tracked faces will be added</param>
        public void GetFaces(List<IMRFace> faces) { faces.Add(m_Face); }

        void Start()
        {
            m_Face = new SampleFace();
            m_Face.id = MarsTrackableId.Create();

            var id = this.AddOrUpdateData(m_Face);
            this.AddOrUpdateTrait(id, TraitNames.Face, true);
            this.AddOrUpdateTrait(id, TraitNames.Pose, m_Face.pose);
            this.AddOrUpdateTrait(id, TraitNames.TrackingState, (int) MARSTrackingState.Tracking);

            if (FaceAdded != null)
                FaceAdded(m_Face);
        }

        void Update()
        {
            var pose = m_Face.pose;
            pose.rotation = pose.rotation * Quaternion.AngleAxis(m_RotationSpeed, Vector3.up);
            var time = Time.time * m_OscillationSpeed;
            pose.position = new Vector3(Mathf.Sin(time), Mathf.Cos(time), 10f) * 0.1f;

            m_Face.pose = pose;

            var id = this.AddOrUpdateData(m_Face);
            this.AddOrUpdateTrait(id, TraitNames.Pose, m_Face.pose);

            if (FaceUpdated != null)
                FaceUpdated(m_Face);
        }

        void OnDestroy()
        {
            var id = this.RemoveData(m_Face);
            this.RemoveTrait<bool>(id, TraitNames.Face);
            this.RemoveTrait<Pose>(id, TraitNames.Pose);
            this.RemoveTrait<int>(id, TraitNames.TrackingState);

            if (FaceRemoved != null)
                FaceRemoved(m_Face);
        }

        void IFunctionalityProvider.ConnectSubscriber(object obj) { this.TryConnectSubscriber<IProvidesFaceTracking>(obj); }
        void IFunctionalityProvider.LoadProvider() { }
        void IFunctionalityProvider.UnloadProvider() { }
    }
}
