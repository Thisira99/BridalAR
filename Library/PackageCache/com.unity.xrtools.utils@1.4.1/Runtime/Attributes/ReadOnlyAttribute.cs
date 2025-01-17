﻿using UnityEngine;

namespace Unity.XRTools.Utils
{
    /// <summary>
    /// Serialized fields marked with the ReadOnly attribute will use a CustomPropertyDrawer to disable UI on the property
    /// </summary>
    public class ReadOnlyAttribute : PropertyAttribute
    {}
}
