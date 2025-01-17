﻿using UnityEngine;
using UnityEngine.Scripting.APIUpdating;

namespace Unity.MARS.Simulation.Rendering
{
    /// <summary>
    ///  Defines a region of space that can be cut into dynamically to view the contents
    /// </summary>
    [ExecuteAlways]
    [DisallowMultipleComponent]
    [MovedFrom("Unity.MARS")]
    [HelpURL(DocumentationConstants.XRayRegionDocs)]
    public class XRayRegion : MonoBehaviour
    {
        [SerializeField]
        [Tooltip("The floor in local coordinates")]
        float m_FloorHeight = 0.0f;

        [SerializeField]
        [Tooltip("The ceiling in local coordinates")]
        float m_CeilingHeight = 2.5f;

        [SerializeField]
        [Tooltip("How much the camera clipping plane moves forward from the center of this region")]
        float m_ClipOffset = 0.5f;

        [SerializeField]
        [Tooltip("The active size of the clipping region")]
        Vector3 m_ViewBounds = new Vector3(3.0f, 3.0f, 3.0f);

        /// <summary>
        /// The floor  in local coordinates
        /// </summary>
        public float FloorHeight => m_FloorHeight;

        /// <summary>
        /// The ceiling in local coordinates
        /// </summary>
        public float CeilingHeight => m_CeilingHeight;

        /// <summary>
        /// How much the camera clipping plane moves forward from the center of this region
        /// </summary>
        public float ClipOffset => m_ClipOffset;

        /// <summary>
        /// The active size of the clipping region
        /// </summary>
        public Vector3 ViewBounds => m_ViewBounds;

        void OnEnable()
        {
            XRayRuntimeUtils.AssignXRayRegion(this);
        }

        void OnDisable()
        {
            XRayRuntimeUtils.RemoveXRayRegion(this);
        }

        void OnDrawGizmosSelected()
        {
            var cubePosition = transform.position;

            var drawPosition = cubePosition;
            drawPosition.y += (m_CeilingHeight + m_FloorHeight) * 0.5f;

            var interiorHeight = m_CeilingHeight - m_FloorHeight;

            Gizmos.color = Color.yellow;
            Gizmos.DrawWireCube(drawPosition, new Vector3(m_ViewBounds.x, interiorHeight, m_ViewBounds.z));

            Gizmos.color = Color.yellow;
            Gizmos.DrawWireCube(cubePosition, m_ViewBounds);

            Gizmos.color = Color.blue;
            Gizmos.DrawWireCube(drawPosition, new Vector3(m_ClipOffset*2.0f, interiorHeight, m_ClipOffset*2.0f));
        }
    }
}
