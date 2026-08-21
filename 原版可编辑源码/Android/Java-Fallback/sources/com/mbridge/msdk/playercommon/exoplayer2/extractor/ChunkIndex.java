package com.mbridge.msdk.playercommon.exoplayer2.extractor;

public final class ChunkIndex implements com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap {
    private final long durationUs;
    public final long[] durationsUs;
    public final int length;
    public final long[] offsets;
    public final int[] sizes;
    public final long[] timesUs;

    public ChunkIndex(int[] r3, long[] r4, long[] r5, long[] r6) {
            r2 = this;
            r2.<init>()
            r2.sizes = r3
            r2.offsets = r4
            r2.durationsUs = r5
            r2.timesUs = r6
            int r3 = r3.length
            r2.length = r3
            if (r3 <= 0) goto L1c
            int r4 = r3 + (-1)
            r4 = r5[r4]
            int r3 = r3 + (-1)
            r0 = r6[r3]
            long r4 = r4 + r0
            r2.durationUs = r4
            goto L20
        L1c:
            r3 = 0
            r2.durationUs = r3
        L20:
            return
    }

    public final int getChunkIndex(long r3) {
            r2 = this;
            long[] r0 = r2.timesUs
            r1 = 1
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchFloor(r0, r3, r1, r1)
            return r3
    }

    @Override
    public final long getDurationUs() {
            r2 = this;
            long r0 = r2.durationUs
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap.SeekPoints getSeekPoints(long r8) {
            r7 = this;
            int r0 = r7.getChunkIndex(r8)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
            long[] r2 = r7.timesUs
            r3 = r2[r0]
            long[] r2 = r7.offsets
            r5 = r2[r0]
            r1.<init>(r3, r5)
            long r2 = r1.timeUs
            int r8 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r8 >= 0) goto L33
            int r8 = r7.length
            int r8 = r8 + (-1)
            if (r0 != r8) goto L1e
            goto L33
        L1e:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r8 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
            long[] r9 = r7.timesUs
            int r0 = r0 + 1
            r2 = r9[r0]
            long[] r9 = r7.offsets
            r4 = r9[r0]
            r8.<init>(r2, r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r9 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
            r9.<init>(r1, r8)
            return r9
        L33:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r8 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
            r8.<init>(r1)
            return r8
    }

    @Override
    public final boolean isSeekable() {
            r1 = this;
            r0 = 1
            return r0
    }

    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ChunkIndex(length="
            r0.append(r1)
            int r1 = r2.length
            r0.append(r1)
            java.lang.String r1 = ", sizes="
            r0.append(r1)
            int[] r1 = r2.sizes
            java.lang.String r1 = java.util.Arrays.toString(r1)
            r0.append(r1)
            java.lang.String r1 = ", offsets="
            r0.append(r1)
            long[] r1 = r2.offsets
            java.lang.String r1 = java.util.Arrays.toString(r1)
            r0.append(r1)
            java.lang.String r1 = ", timeUs="
            r0.append(r1)
            long[] r1 = r2.timesUs
            java.lang.String r1 = java.util.Arrays.toString(r1)
            r0.append(r1)
            java.lang.String r1 = ", durationsUs="
            r0.append(r1)
            long[] r1 = r2.durationsUs
            java.lang.String r1 = java.util.Arrays.toString(r1)
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
