﻿using System.Collections.Generic;

namespace Unity.Properties
{
    /// <summary>
    /// An <see cref="IPropertyBag{T}"/> implementation for a <see cref="Dictionary{TKey, TValue}"/> type.
    /// </summary>
    /// <typeparam name="TKey">The key type.</typeparam>
    /// <typeparam name="TValue">The value type.</typeparam>
    public class DictionaryPropertyBag<TKey, TValue> : KeyValueCollectionPropertyBag<Dictionary<TKey, TValue>, TKey, TValue>
    {
        /// <inheritdoc/>
        protected override InstantiationKind InstantiationKind => InstantiationKind.PropertyBagOverride;

        /// <inheritdoc/>
        protected override Dictionary<TKey, TValue> Instantiate() => new Dictionary<TKey, TValue>();
    }
}
