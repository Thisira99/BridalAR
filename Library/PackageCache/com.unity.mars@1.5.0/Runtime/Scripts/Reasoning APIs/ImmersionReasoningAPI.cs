﻿using System.Collections.Generic;
using Unity.MARS.Authoring;
using Unity.MARS.Query;
using UnityEngine;
using UnityEngine.Scripting.APIUpdating;
using UnityEngine.XR;

namespace Unity.MARS.Data.Reasoning
{
    /// <summary>
    /// Attaches the level of immersion a user has to their entry in the MARS Database.
    /// 0 is flat device, such as a phone or tablet, while 1 includes immersive displays like HMDs
    /// </summary>
    [CreateAssetMenu(menuName = AuthoringConstants.DeveloperAssetMenuPath + "Immersion Level ReasoningAPI")]
    [MovedFrom("Unity.MARS")]
    public class ImmersionReasoningAPI : ScriptableObject, IReasoningAPI, IProvidesTraits<bool>, IRequiresTraits
    {
        const float k_ProcessSceneTime = 5f;
        static readonly TraitRequirement[] k_RequiredTraits = { TraitDefinitions.User };
        static readonly TraitDefinition[] k_ProvidedTraits = { TraitDefinitions.DisplayFlat, TraitDefinitions.DisplaySpatial };

#pragma warning disable 649
        [SerializeField]
        [Tooltip("If the simulated user should be flat or spatial")]
        bool m_SimulateSpatialDevice;
#pragma warning restore 649

        bool m_LastDeviceSpatial = true;
#pragma warning disable 649
        bool m_ImmersionSet;
#pragma warning restore 649

        /// <inheritdoc />
        public float processSceneInterval => k_ProcessSceneTime;

        /// <inheritdoc />
        public TraitDefinition[] GetProvidedTraits() { return k_ProvidedTraits; }

        /// <inheritdoc />
        public TraitRequirement[] GetRequiredTraits() { return k_RequiredTraits; }

        /// <inheritdoc />
        public void Setup()
        {
            m_ImmersionSet = false;
            UpdateImmersionLevel();
        }

        /// <inheritdoc />
        public void TearDown()
        {
            this.RemoveTrait((int)ReservedDataIDs.LocalUser, TraitNames.DisplayFlat);
            this.RemoveTrait((int)ReservedDataIDs.LocalUser, TraitNames.DisplaySpatial);
            m_ImmersionSet = false;
        }

        /// <inheritdoc />
        public void ProcessScene()
        {
            // A user's immersion-level won't change at runtime - we only perform this check periodically in the editor
#if UNITY_EDITOR
            UpdateImmersionLevel();
#endif
        }

        /// <inheritdoc />
        public void UpdateData() { }

        void UpdateImmersionLevel()
        {
            // Editor path - just check if the user has changed the simulated mode
            if (Application.isEditor)
            {
                if (!m_ImmersionSet || m_SimulateSpatialDevice != m_LastDeviceSpatial)
                {
                    this.RemoveTrait((int)ReservedDataIDs.LocalUser, m_SimulateSpatialDevice ? TraitNames.DisplayFlat : TraitNames.DisplaySpatial);
                    this.AddOrUpdateTrait((int)ReservedDataIDs.LocalUser, m_SimulateSpatialDevice ? TraitNames.DisplaySpatial : TraitNames.DisplayFlat, true);
                    m_LastDeviceSpatial = m_SimulateSpatialDevice;
                    m_ImmersionSet = true;
                }
                return;
            }

            // Application path - look up platform specific data and then dive deeper into SDK specific data if needed
            if (m_ImmersionSet)
                return;

#if INCLUDE_XR_MODULE
            var targetDeviceSpatial = false;
            var stereoRendererList = new List<XRDisplaySubsystem>();
            SubsystemManager.GetInstances(stereoRendererList);
            if (stereoRendererList.Count > 0)
                targetDeviceSpatial = true;
#else
            const bool targetDeviceSpatial = false;
#endif

            this.RemoveTrait((int)ReservedDataIDs.LocalUser, m_SimulateSpatialDevice ? TraitNames.DisplayFlat : TraitNames.DisplaySpatial);
            this.AddOrUpdateTrait((int)ReservedDataIDs.LocalUser, m_SimulateSpatialDevice ? TraitNames.DisplaySpatial : TraitNames.DisplayFlat, true);
            m_LastDeviceSpatial = targetDeviceSpatial;
            m_ImmersionSet = true;
        }
    }
}
