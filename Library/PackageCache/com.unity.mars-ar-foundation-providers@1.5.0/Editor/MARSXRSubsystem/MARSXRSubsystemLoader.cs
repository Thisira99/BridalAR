#if XRMANAGEMENT_3_2_OR_NEWER && ARSUBSYSTEMS_2_1_OR_NEWER
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.Management;

#if ARFOUNDATION_5_0_0_PRE_12_OR_NEWER
using XRDepthSubsystem = UnityEngine.XR.ARSubsystems.XRPointCloudSubsystem;
using XRDepthSubsystemDescriptor = UnityEngine.XR.ARSubsystems.XRPointCloudSubsystemDescriptor;
#endif

namespace Unity.MARS.XRSubsystem
{
    /// <summary>
    /// Loader for MARS XR Subsystems.
    /// </summary>
    public class MARSXRSubsystemLoader : XRLoaderHelper
    {
        internal const string k_MeshSubsystemId = "MARS Meshing";
        static List<XRSessionSubsystemDescriptor> s_SessionSubsystemDescriptors = new List<XRSessionSubsystemDescriptor>();
        static List<XRPlaneSubsystemDescriptor> s_PlaneSubsystemDescriptors = new List<XRPlaneSubsystemDescriptor>();
        static List<XRDepthSubsystemDescriptor> s_DepthSubsystemDescriptors = new List<XRDepthSubsystemDescriptor>();
        static List<XRRaycastSubsystemDescriptor> s_RaycastSubsystemDescriptors = new List<XRRaycastSubsystemDescriptor>();
        static List<XRFaceSubsystemDescriptor> s_FaceSubsystemDescriptors = new List<XRFaceSubsystemDescriptor>();
        static List<XRCameraSubsystemDescriptor> s_CameraSubsystemDescriptors = new List<XRCameraSubsystemDescriptor>();
        static List<XRInputSubsystemDescriptor> s_InputSubsystemDescriptors = new List<XRInputSubsystemDescriptor>();
        static List<XRImageTrackingSubsystemDescriptor> s_ImageSubsystemDescriptors = new List<XRImageTrackingSubsystemDescriptor>();
        static List<XRMeshSubsystemDescriptor> s_MeshSubsystemDescriptors = new List<XRMeshSubsystemDescriptor>();
#if ARSUBSYSTEMS_4_OR_NEWER
        static List<XRHumanBodySubsystemDescriptor> s_HumanBodySubsystemDescriptors = new List<XRHumanBodySubsystemDescriptor>();
#endif

        public override bool Initialize()
        {
            CreateSubsystem<XRSessionSubsystemDescriptor, XRSessionSubsystem>(s_SessionSubsystemDescriptors, "MARS-Session");
            CreateSubsystem<XRPlaneSubsystemDescriptor, XRPlaneSubsystem>(s_PlaneSubsystemDescriptors, "MARS-Plane");
            CreateSubsystem<XRDepthSubsystemDescriptor, XRDepthSubsystem>(s_DepthSubsystemDescriptors, "MARS-Depth");
            CreateSubsystem<XRRaycastSubsystemDescriptor, XRRaycastSubsystem>(s_RaycastSubsystemDescriptors, "MARS-Raycast");
            CreateSubsystem<XRFaceSubsystemDescriptor, XRFaceSubsystem>(s_FaceSubsystemDescriptors, "MARS-Face");
            CreateSubsystem<XRCameraSubsystemDescriptor, XRCameraSubsystem>(s_CameraSubsystemDescriptors, "MARS-Camera");
            CreateSubsystem<XRInputSubsystemDescriptor, XRInputSubsystem>(s_InputSubsystemDescriptors, "MARS Head Tracking");
            CreateSubsystem<XRImageTrackingSubsystemDescriptor, XRImageTrackingSubsystem>(s_ImageSubsystemDescriptors, ImageMarkerSubsystem.Id);
            CreateSubsystem<XRMeshSubsystemDescriptor, XRMeshSubsystem>(s_MeshSubsystemDescriptors, k_MeshSubsystemId);
#if ARSUBSYSTEMS_4_OR_NEWER
            CreateSubsystem<XRHumanBodySubsystemDescriptor, XRHumanBodySubsystem>(s_HumanBodySubsystemDescriptors, "MARS-Bodies");
#endif

            var sessionSubsystem = GetLoadedSubsystem<XRSessionSubsystem>();
            if (sessionSubsystem == null)
                Debug.LogError("Failed to load session subsystem");

            return sessionSubsystem != null;
        }

        public override bool Deinitialize()
        {
#if ARSUBSYSTEMS_4_OR_NEWER
            SafeDestroySubsystem<XRHumanBodySubsystem>();
#endif
            SafeDestroySubsystem<XRMeshSubsystem>();
            SafeDestroySubsystem<XRImageTrackingSubsystem>();
            SafeDestroySubsystem<XRInputSubsystem>();
            SafeDestroySubsystem<XRCameraSubsystem>();
            SafeDestroySubsystem<XRFaceSubsystem>();
            SafeDestroySubsystem<XRRaycastSubsystem>();
            SafeDestroySubsystem<XRDepthSubsystem>();
            SafeDestroySubsystem<XRPlaneSubsystem>();
            SafeDestroySubsystem<XRSessionSubsystem>();
            return true;
        }

        void SafeDestroySubsystem<T>() where T : class, ISubsystem
        {
            var subsystem = GetLoadedSubsystem<T>();
            if (subsystem == null)
                return;

            if (subsystem.running)
                subsystem.Stop();

            subsystem.Destroy();
        }
    }
}
#endif
