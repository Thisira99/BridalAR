#if !UNITY_2020_3_OR_NEWER || UNITY_2021_1
#define MARS_POPUP_USE_REFLECTION
#endif

using System.Collections.Generic;

#if MARS_POPUP_USE_REFLECTION
using System.Reflection;
#endif

#if UNITY_2022_1_OR_NEWER
using UnityEngine.UIElements;
#else
using UnityEditor.UIElements;
#endif

namespace UnityEditor.MARS.UIElements
{
    // From `UnityEditor.UIElements.PopupField<T>.cs`
    /// <summary>
    /// Popup selection field.
    /// </summary>
    class MarsPopupField<T> : PopupField<T>
    {
#if MARS_POPUP_USE_REFLECTION
        PropertyInfo m_ChoicesGetProperty;
        PropertyInfo m_ChoicesSetProperty;
#endif

        public MarsPopupField()
            : this(null)
        { }

        internal MarsPopupField(string label = null)
            : base(label)
        { }

        internal MarsPopupField(List<T> choices, T defaultValue)
            : this(null, choices, defaultValue)
        { }

        internal MarsPopupField(string label, List<T> choices, T defaultValue)
            : base(label, choices, defaultValue)
        { }

#if MARS_POPUP_USE_REFLECTION
        internal List<T> choices
        {
            get
            {
                if (m_ChoicesGetProperty == null)
                {
                    var targetType = typeof(BasePopupField<T,T>);
                    m_ChoicesGetProperty = targetType.GetProperty("choices",
                        BindingFlags.Instance | BindingFlags.NonPublic | BindingFlags.Public | BindingFlags.GetProperty);
                }

                return m_ChoicesGetProperty?.GetValue(this) as List<T>;
            }

            set
            {
                if (m_ChoicesSetProperty == null)
                {
                    var targetType = typeof(BasePopupField<T,T>);
                    m_ChoicesSetProperty = targetType.GetProperty("choices",
                        BindingFlags.Instance | BindingFlags.NonPublic |  BindingFlags.Public | BindingFlags.SetProperty);
                }

                m_ChoicesSetProperty?.SetValue(this, value);
            }
        }
#endif

        internal void SetIndexWithoutNotify(int index)
        {
            var choice = choices[index];
            SetValueWithoutNotify(choice);
        }
    }
}
