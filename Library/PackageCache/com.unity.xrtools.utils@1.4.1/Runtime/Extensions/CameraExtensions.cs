﻿using UnityEngine;

namespace Unity.XRTools.Utils
{
    /// <summary>
    /// Extension methods for Camera components
    /// </summary>
    public static class CameraExtensions
    {
        const float k_OneOverSqrt2 = 0.707106781f;

        /// <summary>
        /// Calculates the vertical field of view from an aspect neutral (diagonal) field of view and the camera's aspect ratio.
        /// Unity cameras' field of view properties are storing the vertical field of view.
        /// </summary>
        /// <param name="camera">The camera to get the aspect ratio from</param>
        /// <param name="aspectNeutralFOV"> The "aspect neutral" field of view, which is the diagonal field of view</param>
        /// <returns>The vertical field of view calculated</returns>
        public static float GetVerticalFOV(this Camera camera, float aspectNeutralFOV)
        {
            var verticalHalfFovTangent = Mathf.Tan(aspectNeutralFOV * 0.5f * Mathf.Deg2Rad) *
                k_OneOverSqrt2 / Mathf.Sqrt(camera.aspect);
            return Mathf.Atan(verticalHalfFovTangent) * 2 * Mathf.Rad2Deg;
        }

        /// <summary>
        /// Calculates the horizontal field of view of the camera
        /// </summary>
        /// <param name="camera">The camera to get the aspect ratio and vertical field of view from</param>
        /// <returns>The horizontal field of view of the camera</returns>
        public static float GetHorizontalFOV(this Camera camera)
        {
            var halfFov = camera.fieldOfView * 0.5f;
            return Mathf.Rad2Deg * Mathf.Atan(Mathf.Tan(halfFov * Mathf.Deg2Rad) * camera.aspect);
        }

        /// <summary>
        /// Calculates the vertical orthographic size for a camera and a given diagonal size
        /// </summary>
        /// <param name="camera">The camera to get the aspect ratio from</param>
        /// <param name="size">The diagonal orthographic size</param>
        /// <returns>The vertical orthographic size calculated </returns>
        public static float GetVerticalOrthoSize(this Camera camera, float size)
        {
            return size * k_OneOverSqrt2 / Mathf.Sqrt(camera.aspect);
        }
    }
}
