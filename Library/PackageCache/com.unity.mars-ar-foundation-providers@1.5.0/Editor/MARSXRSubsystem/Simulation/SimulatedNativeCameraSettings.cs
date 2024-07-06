using UnityEditor.XRTools.Utils;
using UnityEngine;

#if MODULE_URP_ENABLED
using UnityEngine.Rendering.Universal;
#if !URP_12_OR_NEWER
using UniversalRendererData = UnityEngine.Rendering.Universal.ForwardRendererData;
#endif // !URP_12_OR_NEWER
#else // MODULE_URP_ENABLED
using UniversalRendererData = UnityEngine.ScriptableObject;
#endif // MODULE_URP_ENABLED



namespace Unity.MARS.XRSubsystem
{
    class SimulatedNativeCameraSettings : EditorScriptableSettings<SimulatedNativeCameraSettings>
    {
        [SerializeField]
        UniversalRendererData m_CompositeForwardRendererData;

        internal ScriptableObject compositeForwardRendererData => m_CompositeForwardRendererData;
    }
}
