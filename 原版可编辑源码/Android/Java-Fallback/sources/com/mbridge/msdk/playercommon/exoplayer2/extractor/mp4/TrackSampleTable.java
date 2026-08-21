package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4;

final class TrackSampleTable {
    public final long durationUs;
    public final int[] flags;
    public final int maximumSize;
    public final long[] offsets;
    public final int sampleCount;
    public final int[] sizes;
    public final long[] timestampsUs;
    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track track;

    public TrackSampleTable(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r5, long[] r6, int[] r7, int r8, long[] r9, int[] r10, long r11) {
            r4 = this;
            r4.<init>()
            int r0 = r7.length
            int r1 = r9.length
            r2 = 1
            r3 = 0
            if (r0 != r1) goto Lb
            r0 = r2
            goto Lc
        Lb:
            r0 = r3
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            int r0 = r6.length
            int r1 = r9.length
            if (r0 != r1) goto L15
            r0 = r2
            goto L16
        L15:
            r0 = r3
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            int r0 = r10.length
            int r1 = r9.length
            if (r0 != r1) goto L1e
            goto L1f
        L1e:
            r2 = r3
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r2)
            r4.track = r5
            r4.offsets = r6
            r4.sizes = r7
            r4.maximumSize = r8
            r4.timestampsUs = r9
            r4.flags = r10
            r4.durationUs = r11
            int r5 = r6.length
            r4.sampleCount = r5
            return
    }

    public final int getIndexOfEarlierOrEqualSynchronizationSample(long r4) {
            r3 = this;
            long[] r0 = r3.timestampsUs
            r1 = 1
            r2 = 0
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchFloor(r0, r4, r1, r2)
        L8:
            if (r4 < 0) goto L15
            int[] r5 = r3.flags
            r5 = r5[r4]
            r5 = r5 & r1
            if (r5 == 0) goto L12
            return r4
        L12:
            int r4 = r4 + (-1)
            goto L8
        L15:
            r4 = -1
            return r4
    }

    public final int getIndexOfLaterOrEqualSynchronizationSample(long r4) {
            r3 = this;
            long[] r0 = r3.timestampsUs
            r1 = 1
            r2 = 0
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchCeil(r0, r4, r1, r2)
        L8:
            long[] r5 = r3.timestampsUs
            int r5 = r5.length
            if (r4 >= r5) goto L18
            int[] r5 = r3.flags
            r5 = r5[r4]
            r5 = r5 & r1
            if (r5 == 0) goto L15
            return r4
        L15:
            int r4 = r4 + 1
            goto L8
        L18:
            r4 = -1
            return r4
    }
}
