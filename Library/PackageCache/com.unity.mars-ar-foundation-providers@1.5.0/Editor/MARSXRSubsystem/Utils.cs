using System;
using Unity.MARS.Data;
#if ARSUBSYSTEMS_4_OR_NEWER
using UnityEngine.XR.ARSubsystems;
#endif

namespace Unity.MARS.XRSubsystem
{
    static class Utils
    {
        internal static void EnsureCapacity<T>(ref T[] buffer, int neededCapacity)
        {
            if(buffer.Length < neededCapacity)
                Array.Resize(ref buffer, neededCapacity);
        }

#if ARSUBSYSTEMS_4_OR_NEWER
        internal static MarsTrackableId ToMarsTrackableId(this TrackableId id)
        {
            return new MarsTrackableId(id.subId1, id.subId2);
        }

        internal static TrackableId ToTrackableId(this MarsTrackableId id)
        {
            return new TrackableId(id.subId1, id.subId2);
        }
#endif
    }
}
