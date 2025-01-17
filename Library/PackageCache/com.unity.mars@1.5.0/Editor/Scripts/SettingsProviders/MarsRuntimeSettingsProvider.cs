﻿using System.Linq;
using Unity.MARS.Data.Reasoning;
using Unity.MARS.Providers;
using Unity.MARS.Providers.HoloLens;
using Unity.MARS.Query;
using Unity.MARS.Settings;
using UnityEditor;
using UnityEditor.MARS;
using UnityEngine.UIElements;

namespace Unity.MARS
{
    class MarsRuntimeSettingsProvider : SettingsProvider
    {
        SerializedObject m_EvaluationScheduleModuleObject;
        EvaluationSchedulerModuleDrawer m_EvaluationSchedulerModuleDrawer;

        SerializedObject m_ReasoningModuleObject;
        ReasoningModuleDrawer m_ReasoningModuleDrawer;

        SerializedObject m_GeoLocationModuleObject;
        GeoLocationModuleRuntimeDrawer m_GeoLocationModuleRuntimeDrawer;

        SerializedObject m_HoloLensMeshProviderOptionsObject;
        HoloLensMeshProviderOptionsDrawer m_HoloLensMeshProviderOptionsDrawer;

        [SettingsProvider]
        public static SettingsProvider CreateMARSPreferencesProvider()
        {
            var keywordsList = GetSearchKeywordsFromPath(AssetDatabase.GetAssetPath(EvaluationSchedulerModule.instance)).ToList();
            keywordsList.AddRange(GetSearchKeywordsFromPath(AssetDatabase.GetAssetPath(ReasoningModule.instance)));
            keywordsList.AddRange(GetSearchKeywordsFromPath(AssetDatabase.GetAssetPath(GeoLocationModule.instance)));
            keywordsList.AddRange(GetSearchKeywordsFromPath(AssetDatabase.GetAssetPath(HoloLensMeshProviderOptions.instance)));

            var provider = new MarsRuntimeSettingsProvider{ keywords = keywordsList };

            return provider;
        }

        MarsRuntimeSettingsProvider(string path = MARSCore.ProjectSettingsMarsRoot + "/Runtime",
            SettingsScope scope = SettingsScope.Project)
            : base(path, scope) { }

        public override void OnActivate(string searchContext, VisualElement rootElement)
        {
            base.OnActivate(searchContext, rootElement);

            var evaluationSchedulerModule = EvaluationSchedulerModule.instance;
            m_EvaluationScheduleModuleObject = new SerializedObject(evaluationSchedulerModule);
            m_EvaluationSchedulerModuleDrawer = new EvaluationSchedulerModuleDrawer(m_EvaluationScheduleModuleObject);

            var reasoningModule = ReasoningModule.instance;
            m_ReasoningModuleObject = new SerializedObject(reasoningModule);
            m_ReasoningModuleDrawer = new ReasoningModuleDrawer(m_ReasoningModuleObject);

            var geoLocationModule = GeoLocationModule.instance;
            m_GeoLocationModuleObject = new SerializedObject(geoLocationModule);
            m_GeoLocationModuleRuntimeDrawer = new GeoLocationModuleRuntimeDrawer(m_GeoLocationModuleObject);

            var holoLensMeshProviderOptions = HoloLensMeshProviderOptions.instance;
            m_HoloLensMeshProviderOptionsObject = new SerializedObject(holoLensMeshProviderOptions);
            m_HoloLensMeshProviderOptionsDrawer = new HoloLensMeshProviderOptionsDrawer(m_HoloLensMeshProviderOptionsObject);
        }

        public override void OnGUI(string searchContext)
        {
            base.OnGUI(searchContext);
            EditorGUIUtility.labelWidth = MarsEditorGUI.SettingsLabelWidth;

            EditorGUILayout.LabelField("Query Evaluation", EditorStyles.boldLabel);
            m_EvaluationSchedulerModuleDrawer.InspectorGUI(m_EvaluationScheduleModuleObject);
            EditorGUIUtils.DrawBoxSplitter();
            EditorGUILayout.Space();

            EditorGUILayout.LabelField("Reasoning APIs", EditorStyles.boldLabel);
            m_ReasoningModuleDrawer.InspectorGUI(m_ReasoningModuleObject);
            EditorGUIUtils.DrawBoxSplitter();
            EditorGUILayout.Space();

            EditorGUILayout.LabelField("Geolocation", EditorStyles.boldLabel);
            m_GeoLocationModuleRuntimeDrawer.InspectorGUI(m_GeoLocationModuleObject);
            EditorGUIUtils.DrawBoxSplitter();
            EditorGUILayout.Space();

            EditorGUILayout.LabelField("HoloLens", EditorStyles.boldLabel);
            m_HoloLensMeshProviderOptionsDrawer.InspectorGUI(m_HoloLensMeshProviderOptionsObject);
            EditorGUIUtils.DrawBoxSplitter();
            EditorGUILayout.Space();
        }
    }
}
