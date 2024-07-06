using NUnit.Framework;
using System.Collections;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.ContentManager.EditorTests
{
    class ContentManagerTests : ScriptableObject
    {
        // This should be set by default references
        [SerializeField]
#pragma warning disable 649
        ContentPack m_TargetContentPack;
#pragma warning restore 649

        bool m_AddComplete;
        bool m_AddSuccess;
        bool m_RemoveComplete;
        bool m_RemoveSuccess;
        bool m_StatusUpdateComplete;
        bool m_StatusUpdateSuccess;

        [OneTimeSetUp]
        public void Setup()
        {
            // Ensure the driver exists as setup can happen at odd points of loading
            var unused = ContentManagerDriver.Instance;
            ContentManagerDriver.SubscribeInstallCallback(ProcessAddResult);
            ContentManagerDriver.SubscribeUninstallCallback(ProcessRemoveResult);
            ContentManagerDriver.SubscribeStatusCallback(ProcessStatusUpdateResult);
        }

        [SetUp]
        public void SetupBeforeEach()
        {
            m_AddComplete = false;
            m_AddSuccess = false;
            m_RemoveComplete = false;
            m_RemoveSuccess = false;
        }

        [OneTimeTearDown]
        public void AfterAll()
        {
            ContentManagerDriver.UnsubscribeInstallCallback(ProcessAddResult);
            ContentManagerDriver.UnsubscribeInstallCallback(ProcessRemoveResult);
            ContentManagerDriver.UnsubscribeStatusCallback(ProcessStatusUpdateResult);
        }

        [TearDown]
        public void AfterEach()
        {
            // Ensure test pack does not auto-install to user's project
            if (m_TargetContentPack != null)
                m_TargetContentPack.InstallByDefault = false;
        }

        [UnityTest]
        public IEnumerator TestAddRemoveContent()
        {
            Assert.True(m_TargetContentPack != null, "Test content pack is not set.");

            // Remove the test pack if it already was installed
            ContentManagerDriver.UninstallContent(m_TargetContentPack);

            while (m_RemoveComplete != true)
            {
                yield return null;
            }

            m_RemoveComplete = false;
            m_RemoveSuccess = false;

            // Add the test pack
            ContentManagerDriver.InstallContent(m_TargetContentPack);

            while (m_AddComplete != true)
            {
                yield return null;
            }

            Assert.True(m_AddSuccess);

            ContentManagerDriver.UninstallContent(m_TargetContentPack);
            while (m_RemoveComplete != true)
            {
                yield return null;
            }

            Assert.True(m_RemoveSuccess);

            yield return null;
        }

        [UnityTest]
        public IEnumerator TestAutoInstallContent()
        {
            Assert.True(m_TargetContentPack != null, "Test content pack is not set.");

            // Remove the test pack if it already was installed
            ContentManagerDriver.UninstallContent(m_TargetContentPack);

            while (m_RemoveComplete != true)
            {
                yield return null;
            }

            m_RemoveComplete = false;
            m_RemoveSuccess = false;

            // Remove flag for test pack from project settings to test discovering default pack for the first time
            ContentManagerDriver.SettingsInstance.DeleteKey<bool>(m_TargetContentPack.DefaultInstalledSettingKey);

            // Temporarily set test pack to install by default, then update status of all content packs
            m_TargetContentPack.InstallByDefault = true;
            m_StatusUpdateComplete = false;
            m_StatusUpdateSuccess = false;
            ContentManagerDriver.UpdateContentStatus();

            while (m_StatusUpdateComplete != true)
            {
                yield return null;
            }

            Assert.True(m_StatusUpdateSuccess, "Content status update failed.");

            // Test pack should be queued for install
            Assert.True(m_TargetContentPack.InstallStatus.HasFlag(InstallationStatus.InstallQueued),
                "Test pack was not queued for install by default.");

            while (m_AddComplete != true)
            {
                yield return null;
            }

            Assert.True(m_AddSuccess);

            // Now try removing and make sure it is not automatically installed again
            ContentManagerDriver.UninstallContent(m_TargetContentPack);
            while (m_RemoveComplete != true)
            {
                yield return null;
            }

            Assert.True(m_RemoveSuccess);

            m_StatusUpdateComplete = false;
            m_StatusUpdateSuccess = false;
            ContentManagerDriver.UpdateContentStatus();

            while (m_StatusUpdateComplete != true)
            {
                yield return null;
            }

            Assert.True(m_StatusUpdateSuccess, "Content status update failed.");
            Assert.False(m_TargetContentPack.InstallStatus.HasFlag(InstallationStatus.InstallQueued),
                "Test pack was queued for install by default even though it was already installed.");

            m_TargetContentPack.InstallByDefault = false;

            // Remove flag from project settings again since it is not needed outside of tests
            ContentManagerDriver.SettingsInstance.DeleteKey<bool>(m_TargetContentPack.DefaultInstalledSettingKey);
        }

        void ProcessAddResult(bool status, string message)
        {
            m_AddSuccess = status;
            m_AddComplete = true;
        }

        void ProcessRemoveResult(bool status, string message)
        {
            m_RemoveSuccess = status;
            m_RemoveComplete = true;
        }

        void ProcessStatusUpdateResult(bool status, string message)
        {
            m_StatusUpdateSuccess = status;
            m_StatusUpdateComplete = true;
        }
    }
}
