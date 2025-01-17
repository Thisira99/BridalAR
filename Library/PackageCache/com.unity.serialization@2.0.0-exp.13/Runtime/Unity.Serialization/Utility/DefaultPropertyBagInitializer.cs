﻿using Unity.Properties;
using UnityEngine;

namespace Unity.Serialization
{
    [UnityEngine.Scripting.Preserve]
    class DefaultPropertyBagInitializer
    {
        [RuntimeInitializeOnLoadMethod]
        internal static void Initialize()
        {
            PropertyBag.Register(new Json.SerializedObjectViewPropertyBag());
            PropertyBag.Register(new Json.SerializedArrayViewPropertyBag());
        }
    }
}
