#if INCLUDE_INPUT_SYSTEM_PACKAGE && ENABLE_INPUT_SYSTEM
#define USE_NEW_INPUT
#endif

using Unity.XRTools.Utils;
using UnityEngine;
using UnityEngine.Scripting.APIUpdating;

#if USE_NEW_INPUT
using UnityEngine.InputSystem;
#endif

namespace Unity.MARS.Data.Synthetic
{
    /// <summary>
    /// Input handler for movement in the device view and game view when using <c>SimulatedCameraProvider</c>.
    /// </summary>
    [MovedFrom("Unity.MARS")]
    public class CameraFPSModeHandler
    {
        /// <summary>
        /// The active camera fps mode handler.
        /// </summary>
        public static CameraFPSModeHandler activeHandler;
        const float k_MoveSpeed = 1f;
        const float k_PitchClamp = 85f;

        bool m_NeedsUpdateMouse;
        bool m_ShiftSpeed;
        bool m_HadMouseButtonEvent; // Mouse down event is being consumed before the handler gets the event
        bool m_MouseButtonOneDown; // Used for mouse button one held
        Vector2 m_MouseDelta;
        Vector3 m_CurrentInputVector;
        bool m_Dragging;

#if !USE_NEW_INPUT
        Vector2 m_CurrentMousePosition;
        Vector2 m_LastMousePosition;
#endif

        /// <summary>
        /// Is there active movement.
        /// </summary>
        public bool MoveActive { get; private set; }

        /// <summary>
        /// Use <c>MovementBounds</c> bounds to restrict movement.
        /// </summary>
        public bool UseMovementBounds { get; set; }

        /// <summary>
        /// The bounds of the movement area.
        /// </summary>
        public Bounds MovementBounds { get; set; }

        /// <summary>
        /// Handle the fps movement input in the given rect.
        /// </summary>
        /// <param name="rect">The rect the the input handling is masked to.</param>
        /// <param name="currentEvent">Current unity event to process.</param>
        /// <param name="type">The event type, cached from the beginning of OnGUI</param>
        /// <param name="eventDelta">Mouse delta from current event, cached at the beginning of OnGUI</param>
        public void HandleGUIInput(Rect rect, Event currentEvent, EventType type, Vector2 eventDelta = default)
        {
            if (Application.isPlaying)
                return;

            m_Dragging = type == EventType.MouseDrag;
            activeHandler = this;

            var inRect = rect.Contains(Event.current.mousePosition);

            if (currentEvent.button == 1)
            {
                switch (type)
                {
                    // Prevents view from getting locking in slow spin without input after last mouse move
                    case EventType.MouseUp:
                        StopMoveInput();
                        return;
                    case EventType.Layout:
                        // handle case EventType.MouseDown when not inRect since down is getting consumed before handler
                        if (m_NeedsUpdateMouse && !m_HadMouseButtonEvent && !inRect)
                        {
                            m_HadMouseButtonEvent = true;
                            m_NeedsUpdateMouse = false;
                            StopMoveInput();
                            return;
                        }

                        // handle case EventType.MouseDown when inRect since down is getting consumed before handler
                        if (m_NeedsUpdateMouse && !m_HadMouseButtonEvent)
                        {
                            m_HadMouseButtonEvent = true;
                            m_NeedsUpdateMouse = false;
                            m_MouseDelta = Vector2.zero;
                            MoveActive = true;
                        }
                        else if (m_NeedsUpdateMouse && MoveActive)
                        {
                            m_MouseDelta = eventDelta;
                            m_NeedsUpdateMouse = false;
                            MoveActive = true;
                        }

                        break;
                    case EventType.Repaint:
#if UNITY_EDITOR_OSX // MouseDrag event feels sluggish on Win
                    case EventType.MouseDrag:
#endif
                        m_NeedsUpdateMouse = true;
                        m_MouseButtonOneDown = true;
                        break;
                }
            }
            else if (currentEvent.isMouse && currentEvent.button != 1)
            {
                StopMoveInput();
                return;
            }

            // handles the case for mouse button one being held but mouse is still
            else if (m_NeedsUpdateMouse && MoveActive && m_MouseButtonOneDown)
            {
                m_MouseDelta = eventDelta;
                m_NeedsUpdateMouse = false;
                MoveActive = true;
            }

            if (MoveActive || inRect)
            {
                m_ShiftSpeed = currentEvent.shift;

                if (currentEvent.type == EventType.KeyDown)
                {
                    var eatInput = false;
                    switch (currentEvent.keyCode)
                    {
                        case KeyCode.W:
                            m_CurrentInputVector.z = m_CurrentInputVector.z < 0f ? 0f : 1f;
                            eatInput = true;
                            break;
                        case KeyCode.S:
                            m_CurrentInputVector.z = m_CurrentInputVector.z > 0f ? 0f : -1f;
                            eatInput = true;
                            break;
                        case KeyCode.A:
                            m_CurrentInputVector.x = m_CurrentInputVector.x > 0f ? 0f : -1f;
                            eatInput = true;
                            break;
                        case KeyCode.D:
                            m_CurrentInputVector.x = m_CurrentInputVector.x < 0f ? 0f : 1f;
                            eatInput = true;
                            break;
                        case KeyCode.E:
                            m_CurrentInputVector.y = m_CurrentInputVector.y < 0f ? 0f : 1f;
                            eatInput = true;
                            break;
                        case KeyCode.Q:
                            m_CurrentInputVector.y = m_CurrentInputVector.y > 0f ? 0f : -1f;
                            eatInput = true;
                            break;
                    }

                    if (eatInput)
                        currentEvent.Use();
                }

                if (currentEvent.type == EventType.KeyUp)
                {
                    switch (currentEvent.keyCode)
                    {
                        case KeyCode.W:
                            m_CurrentInputVector.z = m_CurrentInputVector.z > 0f ? 0f : m_CurrentInputVector.z;
                            break;
                        case KeyCode.S:
                            m_CurrentInputVector.z = m_CurrentInputVector.z < 0f ? 0f : m_CurrentInputVector.z;
                            break;
                        case KeyCode.A:
                            m_CurrentInputVector.x = m_CurrentInputVector.x < 0f ? 0f : m_CurrentInputVector.x;
                            break;
                        case KeyCode.D:
                            m_CurrentInputVector.x = m_CurrentInputVector.x > 0f ? 0f : m_CurrentInputVector.x;
                            break;
                        case KeyCode.E:
                            m_CurrentInputVector.y = m_CurrentInputVector.y > 0f ? 0f : m_CurrentInputVector.y;
                            break;
                        case KeyCode.Q:
                            m_CurrentInputVector.y = m_CurrentInputVector.y < 0f ? 0f : m_CurrentInputVector.y;
                            break;
                    }
                }
            }
            else
            {
                m_CurrentInputVector = Vector3.zero;
            }
        }

        /// <summary>
        /// Handle the FPS mode movement from a game view.
        /// </summary>
        public void HandleGameInput()
        {
#if USE_NEW_INPUT
            var mouse = Mouse.current;
            var keyboard = Keyboard.current;
            if (mouse == null || keyboard == null)
                return;

            if (!mouse.enabled)
                InputSystem.EnableDevice(mouse);

            if (!keyboard.enabled)
                InputSystem.EnableDevice(keyboard);

            m_CurrentInputVector.z = keyboard.wKey.isPressed ? 1f : m_CurrentInputVector.z > 0f ? 0f : m_CurrentInputVector.z;
            m_CurrentInputVector.z = keyboard.sKey.isPressed ? -1f : m_CurrentInputVector.z < 0f ? 0f : m_CurrentInputVector.z;
            m_CurrentInputVector.x = keyboard.aKey.isPressed ? -1f : m_CurrentInputVector.x < 0f ? 0f : m_CurrentInputVector.x;
            m_CurrentInputVector.x = keyboard.dKey.isPressed ? 1f : m_CurrentInputVector.x > 0f ? 0f : m_CurrentInputVector.x;
            m_CurrentInputVector.y = keyboard.eKey.isPressed ? 1f : m_CurrentInputVector.y > 0f ? 0f : m_CurrentInputVector.y;
            m_CurrentInputVector.y = keyboard.qKey.isPressed ? -1f : m_CurrentInputVector.y < 0f ? 0f : m_CurrentInputVector.y;

            m_ShiftSpeed = keyboard.shiftKey.isPressed;
            m_Dragging = true;

            var rightButton = mouse.rightButton;
            if (rightButton.wasPressedThisFrame)
            {
                MoveActive = true;
            }
            else if (rightButton.wasReleasedThisFrame)
            {
                StopMoveInput();
            }
            else if (rightButton.isPressed)
            {
                m_MouseDelta = mouse.delta.ReadValue();
            }
#else // USE_NEW_INPUT
            m_CurrentInputVector.z = Input.GetKey(KeyCode.W) ? 1f : m_CurrentInputVector.z > 0f ? 0f : m_CurrentInputVector.z;
            m_CurrentInputVector.z = Input.GetKey(KeyCode.S) ? -1f : m_CurrentInputVector.z < 0f ? 0f : m_CurrentInputVector.z;
            m_CurrentInputVector.x = Input.GetKey(KeyCode.A) ? -1f : m_CurrentInputVector.x < 0f ? 0f : m_CurrentInputVector.x;
            m_CurrentInputVector.x = Input.GetKey(KeyCode.D) ? 1f : m_CurrentInputVector.x > 0f ? 0f : m_CurrentInputVector.x;
            m_CurrentInputVector.y = Input.GetKey(KeyCode.E) ? 1f : m_CurrentInputVector.y > 0f ? 0f : m_CurrentInputVector.y;
            m_CurrentInputVector.y = Input.GetKey(KeyCode.Q) ? -1f : m_CurrentInputVector.y < 0f ? 0f : m_CurrentInputVector.y;
            m_ShiftSpeed = Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift);

            m_CurrentMousePosition = Input.mousePosition;
            m_Dragging = true;

            if (Input.GetMouseButtonDown(1))
            {
                m_LastMousePosition = m_CurrentMousePosition;
                MoveActive = true;
            }
            else if (Input.GetMouseButtonUp(1))
            {
                StopMoveInput();
            }
            else if (Input.GetMouseButton(1))
            {
                m_MouseDelta = m_CurrentMousePosition - m_LastMousePosition;
                m_LastMousePosition = m_CurrentMousePosition;
            }
#endif // USE_NEW_INPUT
        }

        /// <summary>
        /// End all movement.
        /// </summary>
        /// <param name="mousePosition">The current mouse position.</param>
        public void StopMoveInput(Vector2 mousePosition = default)
        {
            if (activeHandler == this)
                activeHandler = null;

            MoveActive = false;
            m_MouseDelta = Vector2.zero;
            m_CurrentInputVector = Vector3.zero;
            m_ShiftSpeed = false;
            m_HadMouseButtonEvent = false;
            m_MouseButtonOneDown = false;
        }

        Vector3 GetMovementDirection()
        {
            if (m_CurrentInputVector.sqrMagnitude < float.Epsilon)
                return Vector3.zero;

            var speedModifier = k_MoveSpeed;

            if (m_ShiftSpeed)
                speedModifier *= 5f;

            return Time.deltaTime * speedModifier * m_CurrentInputVector.normalized;
        }

        /// <summary>
        /// Calculate the new pose for the camera based on the fps mode movement.
        /// </summary>
        /// <param name="pose">Current Pose of the transform we are going to move.</param>
        /// <param name="invertY">Invert the Y axis of the mouse position.</param>
        /// <returns></returns>
        public Pose CalculateMovement(Pose pose, bool invertY = false)
        {
            var rotation = CalculateMouseRotation(pose.rotation, invertY);
            var position = pose.position + rotation.ConstrainYaw() * GetMovementDirection();
            if (UseMovementBounds && MovementBounds != default && !MovementBounds.Contains(position))
                position = MovementBounds.ClosestPoint(position);

            return new Pose(position, rotation);
        }

        Quaternion CalculateMouseRotation(Quaternion rotation, bool invertY = false)
        {
            if (!m_Dragging)
                return rotation;

            var eulerAngles = rotation.eulerAngles;
            var yaw = eulerAngles.y;
            var pitch = eulerAngles.x;
            if (pitch > 180)
                pitch = pitch - 360;

            const float pixelsToDegrees = 0.003f * Mathf.Rad2Deg;

            var deltaY = m_MouseDelta.y;
            if (invertY)
                deltaY *= -1;

            yaw += m_MouseDelta.x * pixelsToDegrees;
            pitch += deltaY * pixelsToDegrees;

            pitch = Mathf.Clamp(pitch, -k_PitchClamp, k_PitchClamp);

            return Quaternion.AngleAxis(yaw, Vector3.up) * Quaternion.AngleAxis(pitch, Vector3.right);
        }
    }
}
