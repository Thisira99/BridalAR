using System;
using System.Linq;
using NUnit.Framework;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.PerformanceTesting;
using Unity.Serialization.PerformanceTests;
using UnityEngine;

namespace Unity.Serialization.Json.PerformanceTests
{
    [TestFixture]
    [Category("Performance")]
    partial class JsonDeserializationPerformanceTests
    {
        [Test, Performance]
        [TestCase(@"{""Value"":""JarJar""}")]
        public void DeserializeFromString_UsingJsonUtility_BasicData(string json) 
        {
            Measure.Method(() => {
                       var data = UnityEngine.JsonUtility.FromJson<BasicData>(json);
                   })
                   .WarmupCount(1)
                   .MeasurementCount(100)
                   .IterationsPerMeasurement(100)
                   .Run();
            PerformanceTest.Active.CalculateStatisticalValues();
            Debug.Log(PerformanceTest.Active.ToString());
        }
        
        [Test, Performance]
        [TestCase(@"{""Value"":""JarJar""}")]
        public void DeserializeFromString_UsingJsonSerialization_BasicData(string json) 
        {
 
            Measure.Method(() => {
                       var data = JsonSerialization.FromJson<BasicData>(json);
                   })
                   .WarmupCount(1)
                   .MeasurementCount(100)
                   .IterationsPerMeasurement(100)
                   .Run();
            
            PerformanceTest.Active.CalculateStatisticalValues();
            Debug.Log(PerformanceTest.Active.ToString());
        }
        
        [TestCase(@"{""Value"":""Barry""}", 1)]
        [TestCase(@"{""Value"":""Barry""}", 10)]
        [TestCase(@"{""Value"":""Barry""}", 100)]
        [TestCase(@"{""Value"":""Barry""}", 1000)]
        [Test, Performance]
        public unsafe void DeserializeFromString_UsingSerializedObjectReaderWithNoActualization_BasicDataBatch(string json, int batchSize)
        {
            var jsonBatch = $"{{\"batch\":[{string.Join(",", Enumerable.Repeat(json, batchSize))}]}}";
            Measure.Method(() =>
                   {
                       var config = SerializedObjectReaderConfiguration.Default;
                       
                       config.UseReadAsync = false;
                       config.ValidationType = JsonValidationType.None;
                       config.NodeBufferSize = 128;
                       config.TokenBufferSize = Math.Max(jsonBatch.Length / 2, 16);
                       config.BlockBufferSize = jsonBatch.Length;
                       config.OutputBufferSize = jsonBatch.Length;
                       
                       fixed (char* ptr = jsonBatch)
                       {
                           using (var reader = new SerializedObjectReader(new UnsafeBuffer<char>(ptr, jsonBatch.Length), config))
                           {
                               var document = reader.ReadObject().AsUnsafe();
                           }
                       }

                   })
                   .WarmupCount(1)
                   .MeasurementCount(100)
                   .IterationsPerMeasurement(1)
                   .Run();
            PerformanceTest.Active.CalculateStatisticalValues();
        }
        
        [TestCase(@"{""Value"":""Barry""}", 1)]
        [TestCase(@"{""Value"":""Barry""}", 10)]
        [TestCase(@"{""Value"":""Barry""}", 100)]
        [TestCase(@"{""Value"":""Barry""}", 1000)]
        [Test, Performance]
        public unsafe void DeserializeFromString_UsingSerializedObjectReader_BasicDataBatch(string json, int batchSize)
        {
            var jsonBatch = $"{{\"batch\":[{string.Join(",", Enumerable.Repeat(json, batchSize))}]}}";
            Measure.Method(() =>
                   {
                       var config = SerializedObjectReaderConfiguration.Default;
                       
                       config.UseReadAsync = false;
                       config.ValidationType = JsonValidationType.None;
                       config.NodeBufferSize = 128;
                       config.TokenBufferSize = Math.Max(jsonBatch.Length / 2, 16);
                       config.BlockBufferSize = jsonBatch.Length;
                       config.OutputBufferSize = jsonBatch.Length;

                       var data = new BasicDataBatch();

                       fixed (char* ptr = jsonBatch)
                       {
                           using (var reader = new SerializedObjectReader(new UnsafeBuffer<char>(ptr, jsonBatch.Length), config))
                           {
                               var document = reader.ReadObject().AsUnsafe();

                               if (document.TryGetValue("batch", out var batch))
                               {
                                   var array = batch.AsArrayView();

                                   data.batch = new BasicData[array.Count()];

                                   var index = 0;

                                   foreach (var element in array)
                                   {
                                       var obj = element.AsObjectView();

                                       data.batch[index++] = new BasicData
                                       {
                                           Value = obj["Value"].ToString()
                                       };
                                   }
                               }
                           }
                       }

                   })
                   .WarmupCount(1)
                   .MeasurementCount(100)
                   .IterationsPerMeasurement(1)
                   .Run();
            PerformanceTest.Active.CalculateStatisticalValues();
        }
        
        [TestCase(@"{""Value"":""Barry""}", 1)]
        [TestCase(@"{""Value"":""Barry""}", 10)]
        [TestCase(@"{""Value"":""Barry""}", 100)]
        [TestCase(@"{""Value"":""Barry""}", 1000)]
        [Test, Performance]
        public void DeserializeFromString_UsingJsonSerialization_BasicDataBatch(string json, int count) {
            
            var jsonBatch = $"{{\"batch\":[{string.Join(",", Enumerable.Repeat(json, count))}]}}";
            Measure.Method(() => {
                       var data = JsonSerialization.FromJson<BasicDataBatch>(jsonBatch);
                   })
                   .WarmupCount(1)
                   .MeasurementCount(100)
                   .IterationsPerMeasurement(1)
                   .Run();
            PerformanceTest.Active.CalculateStatisticalValues();
        }
        
        [TestCase(@"{""Value"":""Barry""}", 1)]
        [TestCase(@"{""Value"":""Barry""}", 10)]
        [TestCase(@"{""Value"":""Barry""}", 100)]
        [TestCase(@"{""Value"":""Barry""}", 1000)]
        [Test, Performance]
        public void DeserializeFromString_UsingJsonUtility_BasicDataBatch(string json, int count) {
            
            var jsonBatch = $"{{\"batch\":[{string.Join(",", Enumerable.Repeat(json, count))}]}}";
            Measure.Method(() => {
                       var data = UnityEngine.JsonUtility.FromJson<BasicDataBatch>(jsonBatch);
                   })
                   .WarmupCount(1)
                   .MeasurementCount(100)
                   .IterationsPerMeasurement(1)
                   .Run();
            PerformanceTest.Active.CalculateStatisticalValues();
        }
        
        /// <summary>
        /// Fogbugz Test Case 1344974
        /// </summary>
        /// <param name="count"></param>
        [Test, Performance]
        [TestCase(1)]
        [TestCase(32)]
        [TestCase(64)]
        [TestCase(256)]
        [TestCase(512)]
        public unsafe void DeserializeFromString_UsingSerializedObjectReader_LargeDataBatch(int count) 
        {
            const string jsonElement = "{  \"message\": {    \"id\": \"befa7b53-d79d-478f-86b9-120f112b044e\",    \"type\": \"notification\",    \"timestamp\": \"2019-11-16T10:11:12.123Z\"  },  \"subscription\": {    \"id\": \"f1c2a387-161a-49f9-a165-0f21d7a4e1c4\",    \"status\": \"enabled\",    \"type\": \"channel.follow\",    \"version\": \"1\",    \"cost\": 1,    \"condition\": {      \"broadcaster_user_id\": \"12826\"    },    \"transport\": {      \"method\": \"webhook\",      \"callback\": \"https://example.com/webhooks/callback\"    },    \"created_at\": \"2019-11-16T10:11:12.123Z\"  },  \"event\": {    \"user_id\": \"1337\",    \"user_login\": \"awesome_user\",    \"user_name\": \"Awesome_User\",    \"broadcaster_user_id\": \"12826\",    \"broadcaster_user_login\": \"twitch\",    \"broadcaster_user_name\": \"Twitch\"  }}";

            var jsonBatch = $"{{\n    \"batch\":[\n        {string.Join(",\n        ", Enumerable.Repeat(jsonElement, count))}\n    ]\n}}";

            var config = SerializedObjectReaderConfiguration.Default;
            config.UseReadAsync = false;
            config.ValidationType = JsonValidationType.None;
            config.NodeBufferSize = count * 2;
            config.TokenBufferSize = Math.Max(jsonElement.Length / 2, 16);
            config.BlockBufferSize = jsonElement.Length;
            config.OutputBufferSize = jsonElement.Length;
            
            Measure.Method(() => {
                    SerializedObjectReader reader;

                    var views = new NativeArray<SerializedValueView>(count, Allocator.TempJob);
                    var viewMap = new NativeMultiHashMap<FixedString64Bytes, SerializedObjectView>(count, Allocator.TempJob);
                    var viewList = new NativeList<SerializedObjectView>(Allocator.TempJob);

                    fixed (char* ptr = jsonBatch) {
                        reader = new SerializedObjectReader(ptr, jsonBatch.Length, config, Allocator.Temp);
                        if (reader.Step(NodeType.BeginArray) == NodeType.BeginArray)
                            reader.ReadArrayElementBatch((SerializedValueView*) views.GetUnsafePtr(), count);
                    }
                    
                    views.Dispose();
                    viewList.Dispose();
                    viewMap.Dispose();
                    reader.Dispose();
                }).WarmupCount(1)
                .MeasurementCount(1)
                .IterationsPerMeasurement(1)
                .Run();

            PerformanceTest.Active.CalculateStatisticalValues();
            Debug.Log(PerformanceTest.Active.ToString());
        }
    }
}