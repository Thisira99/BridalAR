#if XRMANAGEMENT_3_2_OR_NEWER
using UnityEngine;
using System;
using UnityEngine.XR.Management;

namespace Unity.MARS.XRSubsystem
{
    /// <summary>
    /// MARS XR Subsystems settings.
    /// </summary>
    [XRConfigurationData("MARS Simulation", SettingsKey)]
    [Serializable]
    public class MARSXRSubsystemSettings : ScriptableObject
    {
        public const string SettingsKey = "com.unity.mars-ar-foundation-providers.xr_subsystem_settings";

        public GameObject m_BodyPrefab;

        public string m_BodyRootName;

        public static MARSXRSubsystemSettings Instance
        {
            get {
                UnityEngine.Object obj;
                UnityEditor.EditorBuildSettings.TryGetConfigObject(SettingsKey, out obj);
                return obj as MARSXRSubsystemSettings;
            }
        }
    }
}
#endif
