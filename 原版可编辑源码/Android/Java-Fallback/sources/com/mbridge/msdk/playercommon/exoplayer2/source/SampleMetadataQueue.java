package com.mbridge.msdk.playercommon.exoplayer2.source;

final class SampleMetadataQueue {
    private static final int SAMPLE_CAPACITY_INCREMENT = 1000;
    private int absoluteFirstIndex;
    private int capacity;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput.CryptoData[] cryptoDatas;
    private int[] flags;
    private com.mbridge.msdk.playercommon.exoplayer2.Format[] formats;
    private long largestDiscardedTimestampUs;
    private long largestQueuedTimestampUs;
    private int length;
    private long[] offsets;
    private int readPosition;
    private int relativeFirstIndex;
    private int[] sizes;
    private int[] sourceIds;
    private long[] timesUs;
    private com.mbridge.msdk.playercommon.exoplayer2.Format upstreamFormat;
    private boolean upstreamFormatRequired;
    private boolean upstreamKeyframeRequired;
    private int upstreamSourceId;

    public static final class SampleExtrasHolder {
        public com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput.CryptoData cryptoData;
        public long offset;
        public int size;

        public SampleExtrasHolder() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public SampleMetadataQueue() {
            r2 = this;
            r2.<init>()
            r0 = 1000(0x3e8, float:1.401E-42)
            r2.capacity = r0
            int[] r1 = new int[r0]
            r2.sourceIds = r1
            long[] r1 = new long[r0]
            r2.offsets = r1
            long[] r1 = new long[r0]
            r2.timesUs = r1
            int[] r1 = new int[r0]
            r2.flags = r1
            int[] r1 = new int[r0]
            r2.sizes = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput.CryptoData[r0]
            r2.cryptoDatas = r1
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.Format[r0]
            r2.formats = r0
            r0 = -9223372036854775808
            r2.largestDiscardedTimestampUs = r0
            r2.largestQueuedTimestampUs = r0
            r0 = 1
            r2.upstreamFormatRequired = r0
            r2.upstreamKeyframeRequired = r0
            return
    }

    private long discardSamples(int r6) {
            r5 = this;
            long r0 = r5.largestDiscardedTimestampUs
            long r2 = r5.getLargestTimestamp(r6)
            long r0 = java.lang.Math.max(r0, r2)
            r5.largestDiscardedTimestampUs = r0
            int r0 = r5.length
            int r0 = r0 - r6
            r5.length = r0
            int r0 = r5.absoluteFirstIndex
            int r0 = r0 + r6
            r5.absoluteFirstIndex = r0
            int r0 = r5.relativeFirstIndex
            int r0 = r0 + r6
            r5.relativeFirstIndex = r0
            int r1 = r5.capacity
            if (r0 < r1) goto L22
            int r0 = r0 - r1
            r5.relativeFirstIndex = r0
        L22:
            int r0 = r5.readPosition
            int r0 = r0 - r6
            r5.readPosition = r0
            if (r0 >= 0) goto L2c
            r6 = 0
            r5.readPosition = r6
        L2c:
            int r6 = r5.length
            if (r6 != 0) goto L43
            int r6 = r5.relativeFirstIndex
            if (r6 != 0) goto L36
            int r6 = r5.capacity
        L36:
            int r6 = r6 + (-1)
            long[] r0 = r5.offsets
            r1 = r0[r6]
            int[] r0 = r5.sizes
            r6 = r0[r6]
            long r3 = (long) r6
            long r1 = r1 + r3
            return r1
        L43:
            long[] r6 = r5.offsets
            int r0 = r5.relativeFirstIndex
            r0 = r6[r0]
            return r0
    }

    private int findSampleBefore(int r7, int r8, long r9, boolean r11) {
            r6 = this;
            r0 = 0
            r1 = -1
            r2 = r0
        L3:
            if (r2 >= r8) goto L22
            long[] r3 = r6.timesUs
            r4 = r3[r7]
            int r3 = (r4 > r9 ? 1 : (r4 == r9 ? 0 : -1))
            if (r3 > 0) goto L22
            if (r11 == 0) goto L17
            int[] r3 = r6.flags
            r3 = r3[r7]
            r3 = r3 & 1
            if (r3 == 0) goto L18
        L17:
            r1 = r2
        L18:
            int r7 = r7 + 1
            int r3 = r6.capacity
            if (r7 != r3) goto L1f
            r7 = r0
        L1f:
            int r2 = r2 + 1
            goto L3
        L22:
            return r1
    }

    private long getLargestTimestamp(int r8) {
            r7 = this;
            r0 = -9223372036854775808
            if (r8 != 0) goto L5
            return r0
        L5:
            int r2 = r8 + (-1)
            int r2 = r7.getRelativeIndex(r2)
            r3 = 0
        Lc:
            if (r3 >= r8) goto L2b
            long[] r4 = r7.timesUs
            r5 = r4[r2]
            long r0 = java.lang.Math.max(r0, r5)
            int[] r4 = r7.flags
            r4 = r4[r2]
            r4 = r4 & 1
            if (r4 == 0) goto L1f
            goto L2b
        L1f:
            int r2 = r2 + (-1)
            r4 = -1
            if (r2 != r4) goto L28
            int r2 = r7.capacity
            int r2 = r2 + (-1)
        L28:
            int r3 = r3 + 1
            goto Lc
        L2b:
            return r0
    }

    private int getRelativeIndex(int r2) {
            r1 = this;
            int r0 = r1.relativeFirstIndex
            int r0 = r0 + r2
            int r2 = r1.capacity
            if (r0 >= r2) goto L8
            goto L9
        L8:
            int r0 = r0 - r2
        L9:
            return r0
    }

    public final synchronized int advanceTo(long r9, boolean r11, boolean r12) {
            r8 = this;
            monitor-enter(r8)
            int r0 = r8.readPosition     // Catch: java.lang.Throwable -> L39
            int r2 = r8.getRelativeIndex(r0)     // Catch: java.lang.Throwable -> L39
            boolean r0 = r8.hasNextSample()     // Catch: java.lang.Throwable -> L39
            r7 = -1
            if (r0 == 0) goto L37
            long[] r0 = r8.timesUs     // Catch: java.lang.Throwable -> L39
            r3 = r0[r2]     // Catch: java.lang.Throwable -> L39
            int r0 = (r9 > r3 ? 1 : (r9 == r3 ? 0 : -1))
            if (r0 < 0) goto L37
            long r0 = r8.largestQueuedTimestampUs     // Catch: java.lang.Throwable -> L39
            int r0 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r0 <= 0) goto L1f
            if (r12 != 0) goto L1f
            goto L37
        L1f:
            int r12 = r8.length     // Catch: java.lang.Throwable -> L39
            int r0 = r8.readPosition     // Catch: java.lang.Throwable -> L39
            int r3 = r12 - r0
            r1 = r8
            r4 = r9
            r6 = r11
            int r9 = r1.findSampleBefore(r2, r3, r4, r6)     // Catch: java.lang.Throwable -> L39
            if (r9 != r7) goto L30
            monitor-exit(r8)
            return r7
        L30:
            int r10 = r8.readPosition     // Catch: java.lang.Throwable -> L39
            int r10 = r10 + r9
            r8.readPosition = r10     // Catch: java.lang.Throwable -> L39
            monitor-exit(r8)
            return r9
        L37:
            monitor-exit(r8)
            return r7
        L39:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    public final synchronized int advanceToEnd() {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.length     // Catch: java.lang.Throwable -> Lc
            int r1 = r2.readPosition     // Catch: java.lang.Throwable -> Lc
            int r0 = r0 - r1
            int r1 = r2.length     // Catch: java.lang.Throwable -> Lc
            r2.readPosition = r1     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r2)
            return r0
        Lc:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final synchronized boolean attemptSplice(long r8) {
            r7 = this;
            monitor-enter(r7)
            int r0 = r7.length     // Catch: java.lang.Throwable -> L4a
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L10
            long r3 = r7.largestDiscardedTimestampUs     // Catch: java.lang.Throwable -> L4a
            int r8 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r8 <= 0) goto Le
            r1 = r2
        Le:
            monitor-exit(r7)
            return r1
        L10:
            long r3 = r7.largestDiscardedTimestampUs     // Catch: java.lang.Throwable -> L4a
            int r0 = r7.readPosition     // Catch: java.lang.Throwable -> L4a
            long r5 = r7.getLargestTimestamp(r0)     // Catch: java.lang.Throwable -> L4a
            long r3 = java.lang.Math.max(r3, r5)     // Catch: java.lang.Throwable -> L4a
            int r0 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r0 < 0) goto L22
            monitor-exit(r7)
            return r1
        L22:
            int r0 = r7.length     // Catch: java.lang.Throwable -> L4a
            int r1 = r7.length     // Catch: java.lang.Throwable -> L4a
            int r1 = r1 - r2
            int r1 = r7.getRelativeIndex(r1)     // Catch: java.lang.Throwable -> L4a
        L2b:
            int r3 = r7.readPosition     // Catch: java.lang.Throwable -> L4a
            if (r0 <= r3) goto L42
            long[] r3 = r7.timesUs     // Catch: java.lang.Throwable -> L4a
            r4 = r3[r1]     // Catch: java.lang.Throwable -> L4a
            int r3 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r3 < 0) goto L42
            int r0 = r0 + (-1)
            int r1 = r1 + (-1)
            r3 = -1
            if (r1 != r3) goto L2b
            int r1 = r7.capacity     // Catch: java.lang.Throwable -> L4a
            int r1 = r1 - r2
            goto L2b
        L42:
            int r8 = r7.absoluteFirstIndex     // Catch: java.lang.Throwable -> L4a
            int r8 = r8 + r0
            r7.discardUpstreamSamples(r8)     // Catch: java.lang.Throwable -> L4a
            monitor-exit(r7)
            return r2
        L4a:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    public final synchronized void commitSample(long r6, int r8, long r9, int r11, com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput.CryptoData r12) {
            r5 = this;
            monitor-enter(r5)
            boolean r0 = r5.upstreamKeyframeRequired     // Catch: java.lang.Throwable -> Ld0
            r1 = 0
            if (r0 == 0) goto Le
            r0 = r8 & 1
            if (r0 != 0) goto Lc
            monitor-exit(r5)
            return
        Lc:
            r5.upstreamKeyframeRequired = r1     // Catch: java.lang.Throwable -> Ld0
        Le:
            boolean r0 = r5.upstreamFormatRequired     // Catch: java.lang.Throwable -> Ld0
            r2 = 1
            if (r0 != 0) goto L15
            r0 = r2
            goto L16
        L15:
            r0 = r1
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> Ld0
            r5.commitSampleTimestamp(r6)     // Catch: java.lang.Throwable -> Ld0
            int r0 = r5.length     // Catch: java.lang.Throwable -> Ld0
            int r0 = r5.getRelativeIndex(r0)     // Catch: java.lang.Throwable -> Ld0
            long[] r3 = r5.timesUs     // Catch: java.lang.Throwable -> Ld0
            r3[r0] = r6     // Catch: java.lang.Throwable -> Ld0
            long[] r6 = r5.offsets     // Catch: java.lang.Throwable -> Ld0
            r6[r0] = r9     // Catch: java.lang.Throwable -> Ld0
            int[] r6 = r5.sizes     // Catch: java.lang.Throwable -> Ld0
            r6[r0] = r11     // Catch: java.lang.Throwable -> Ld0
            int[] r6 = r5.flags     // Catch: java.lang.Throwable -> Ld0
            r6[r0] = r8     // Catch: java.lang.Throwable -> Ld0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData[] r6 = r5.cryptoDatas     // Catch: java.lang.Throwable -> Ld0
            r6[r0] = r12     // Catch: java.lang.Throwable -> Ld0
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r6 = r5.formats     // Catch: java.lang.Throwable -> Ld0
            com.mbridge.msdk.playercommon.exoplayer2.Format r7 = r5.upstreamFormat     // Catch: java.lang.Throwable -> Ld0
            r6[r0] = r7     // Catch: java.lang.Throwable -> Ld0
            int[] r6 = r5.sourceIds     // Catch: java.lang.Throwable -> Ld0
            int r7 = r5.upstreamSourceId     // Catch: java.lang.Throwable -> Ld0
            r6[r0] = r7     // Catch: java.lang.Throwable -> Ld0
            int r6 = r5.length     // Catch: java.lang.Throwable -> Ld0
            int r6 = r6 + r2
            r5.length = r6     // Catch: java.lang.Throwable -> Ld0
            int r7 = r5.capacity     // Catch: java.lang.Throwable -> Ld0
            if (r6 != r7) goto Lce
            int r6 = r5.capacity     // Catch: java.lang.Throwable -> Ld0
            int r6 = r6 + 1000
            int[] r7 = new int[r6]     // Catch: java.lang.Throwable -> Ld0
            long[] r8 = new long[r6]     // Catch: java.lang.Throwable -> Ld0
            long[] r9 = new long[r6]     // Catch: java.lang.Throwable -> Ld0
            int[] r10 = new int[r6]     // Catch: java.lang.Throwable -> Ld0
            int[] r11 = new int[r6]     // Catch: java.lang.Throwable -> Ld0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData[] r12 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput.CryptoData[r6]     // Catch: java.lang.Throwable -> Ld0
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.Format[r6]     // Catch: java.lang.Throwable -> Ld0
            int r2 = r5.capacity     // Catch: java.lang.Throwable -> Ld0
            int r3 = r5.relativeFirstIndex     // Catch: java.lang.Throwable -> Ld0
            int r2 = r2 - r3
            long[] r3 = r5.offsets     // Catch: java.lang.Throwable -> Ld0
            int r4 = r5.relativeFirstIndex     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r3, r4, r8, r1, r2)     // Catch: java.lang.Throwable -> Ld0
            long[] r3 = r5.timesUs     // Catch: java.lang.Throwable -> Ld0
            int r4 = r5.relativeFirstIndex     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r3, r4, r9, r1, r2)     // Catch: java.lang.Throwable -> Ld0
            int[] r3 = r5.flags     // Catch: java.lang.Throwable -> Ld0
            int r4 = r5.relativeFirstIndex     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r3, r4, r10, r1, r2)     // Catch: java.lang.Throwable -> Ld0
            int[] r3 = r5.sizes     // Catch: java.lang.Throwable -> Ld0
            int r4 = r5.relativeFirstIndex     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r3, r4, r11, r1, r2)     // Catch: java.lang.Throwable -> Ld0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData[] r3 = r5.cryptoDatas     // Catch: java.lang.Throwable -> Ld0
            int r4 = r5.relativeFirstIndex     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r3, r4, r12, r1, r2)     // Catch: java.lang.Throwable -> Ld0
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r3 = r5.formats     // Catch: java.lang.Throwable -> Ld0
            int r4 = r5.relativeFirstIndex     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r3, r4, r0, r1, r2)     // Catch: java.lang.Throwable -> Ld0
            int[] r3 = r5.sourceIds     // Catch: java.lang.Throwable -> Ld0
            int r4 = r5.relativeFirstIndex     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r3, r4, r7, r1, r2)     // Catch: java.lang.Throwable -> Ld0
            int r3 = r5.relativeFirstIndex     // Catch: java.lang.Throwable -> Ld0
            long[] r4 = r5.offsets     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r4, r1, r8, r2, r3)     // Catch: java.lang.Throwable -> Ld0
            long[] r4 = r5.timesUs     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r4, r1, r9, r2, r3)     // Catch: java.lang.Throwable -> Ld0
            int[] r4 = r5.flags     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r4, r1, r10, r2, r3)     // Catch: java.lang.Throwable -> Ld0
            int[] r4 = r5.sizes     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r4, r1, r11, r2, r3)     // Catch: java.lang.Throwable -> Ld0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData[] r4 = r5.cryptoDatas     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r4, r1, r12, r2, r3)     // Catch: java.lang.Throwable -> Ld0
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r4 = r5.formats     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r4, r1, r0, r2, r3)     // Catch: java.lang.Throwable -> Ld0
            int[] r4 = r5.sourceIds     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r4, r1, r7, r2, r3)     // Catch: java.lang.Throwable -> Ld0
            r5.offsets = r8     // Catch: java.lang.Throwable -> Ld0
            r5.timesUs = r9     // Catch: java.lang.Throwable -> Ld0
            r5.flags = r10     // Catch: java.lang.Throwable -> Ld0
            r5.sizes = r11     // Catch: java.lang.Throwable -> Ld0
            r5.cryptoDatas = r12     // Catch: java.lang.Throwable -> Ld0
            r5.formats = r0     // Catch: java.lang.Throwable -> Ld0
            r5.sourceIds = r7     // Catch: java.lang.Throwable -> Ld0
            r5.relativeFirstIndex = r1     // Catch: java.lang.Throwable -> Ld0
            int r7 = r5.capacity     // Catch: java.lang.Throwable -> Ld0
            r5.length = r7     // Catch: java.lang.Throwable -> Ld0
            r5.capacity = r6     // Catch: java.lang.Throwable -> Ld0
        Lce:
            monitor-exit(r5)
            return
        Ld0:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final synchronized void commitSampleTimestamp(long r3) {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.largestQueuedTimestampUs     // Catch: java.lang.Throwable -> Lb
            long r3 = java.lang.Math.max(r0, r3)     // Catch: java.lang.Throwable -> Lb
            r2.largestQueuedTimestampUs = r3     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r2)
            return
        Lb:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized long discardTo(long r10, boolean r12, boolean r13) {
            r9 = this;
            monitor-enter(r9)
            int r0 = r9.length     // Catch: java.lang.Throwable -> L38
            r1 = -1
            if (r0 == 0) goto L36
            long[] r0 = r9.timesUs     // Catch: java.lang.Throwable -> L38
            int r3 = r9.relativeFirstIndex     // Catch: java.lang.Throwable -> L38
            r3 = r0[r3]     // Catch: java.lang.Throwable -> L38
            int r0 = (r10 > r3 ? 1 : (r10 == r3 ? 0 : -1))
            if (r0 >= 0) goto L12
            goto L36
        L12:
            if (r13 == 0) goto L1f
            int r13 = r9.readPosition     // Catch: java.lang.Throwable -> L38
            int r0 = r9.length     // Catch: java.lang.Throwable -> L38
            if (r13 == r0) goto L1f
            int r13 = r9.readPosition     // Catch: java.lang.Throwable -> L38
            int r13 = r13 + 1
            goto L21
        L1f:
            int r13 = r9.length     // Catch: java.lang.Throwable -> L38
        L21:
            r5 = r13
            int r4 = r9.relativeFirstIndex     // Catch: java.lang.Throwable -> L38
            r3 = r9
            r6 = r10
            r8 = r12
            int r10 = r3.findSampleBefore(r4, r5, r6, r8)     // Catch: java.lang.Throwable -> L38
            r11 = -1
            if (r10 != r11) goto L30
            monitor-exit(r9)
            return r1
        L30:
            long r10 = r9.discardSamples(r10)     // Catch: java.lang.Throwable -> L38
            monitor-exit(r9)
            return r10
        L36:
            monitor-exit(r9)
            return r1
        L38:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    public final synchronized long discardToEnd() {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.length     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto L9
            r0 = -1
            monitor-exit(r2)
            return r0
        L9:
            int r0 = r2.length     // Catch: java.lang.Throwable -> L11
            long r0 = r2.discardSamples(r0)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r2)
            return r0
        L11:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final synchronized long discardToRead() {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.readPosition     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto L9
            r0 = -1
            monitor-exit(r2)
            return r0
        L9:
            int r0 = r2.readPosition     // Catch: java.lang.Throwable -> L11
            long r0 = r2.discardSamples(r0)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r2)
            return r0
        L11:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final long discardUpstreamSamples(int r6) {
            r5 = this;
            int r0 = r5.getWriteIndex()
            int r0 = r0 - r6
            r6 = 1
            if (r0 < 0) goto L11
            int r1 = r5.length
            int r2 = r5.readPosition
            int r1 = r1 - r2
            if (r0 > r1) goto L11
            r1 = r6
            goto L12
        L11:
            r1 = 0
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r1)
            int r1 = r5.length
            int r1 = r1 - r0
            r5.length = r1
            long r2 = r5.largestDiscardedTimestampUs
            long r0 = r5.getLargestTimestamp(r1)
            long r0 = java.lang.Math.max(r2, r0)
            r5.largestQueuedTimestampUs = r0
            int r0 = r5.length
            if (r0 != 0) goto L2d
            r0 = 0
            return r0
        L2d:
            int r0 = r0 - r6
            int r6 = r5.getRelativeIndex(r0)
            long[] r0 = r5.offsets
            r1 = r0[r6]
            int[] r0 = r5.sizes
            r6 = r0[r6]
            long r3 = (long) r6
            long r1 = r1 + r3
            return r1
    }

    public final synchronized boolean format(com.mbridge.msdk.playercommon.exoplayer2.Format r4) {
            r3 = this;
            monitor-enter(r3)
            r0 = 1
            r1 = 0
            if (r4 != 0) goto L9
            r3.upstreamFormatRequired = r0     // Catch: java.lang.Throwable -> L19
            monitor-exit(r3)
            return r1
        L9:
            r3.upstreamFormatRequired = r1     // Catch: java.lang.Throwable -> L19
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r3.upstreamFormat     // Catch: java.lang.Throwable -> L19
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r4, r2)     // Catch: java.lang.Throwable -> L19
            if (r2 == 0) goto L15
            monitor-exit(r3)
            return r1
        L15:
            r3.upstreamFormat = r4     // Catch: java.lang.Throwable -> L19
            monitor-exit(r3)
            return r0
        L19:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final int getFirstIndex() {
            r1 = this;
            int r0 = r1.absoluteFirstIndex
            return r0
    }

    public final synchronized long getFirstTimestampUs() {
            r3 = this;
            monitor-enter(r3)
            int r0 = r3.length     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto L8
            r0 = -9223372036854775808
            goto Lf
        L8:
            long[] r0 = r3.timesUs     // Catch: java.lang.Throwable -> L11
            int r1 = r3.relativeFirstIndex     // Catch: java.lang.Throwable -> L11
            r1 = r0[r1]     // Catch: java.lang.Throwable -> L11
            r0 = r1
        Lf:
            monitor-exit(r3)
            return r0
        L11:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public final synchronized long getLargestQueuedTimestampUs() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.largestQueuedTimestampUs     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final int getReadIndex() {
            r2 = this;
            int r0 = r2.absoluteFirstIndex
            int r1 = r2.readPosition
            int r0 = r0 + r1
            return r0
    }

    public final synchronized com.mbridge.msdk.playercommon.exoplayer2.Format getUpstreamFormat() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.upstreamFormatRequired     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto L7
            r0 = 0
            goto L9
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r1.upstreamFormat     // Catch: java.lang.Throwable -> Lb
        L9:
            monitor-exit(r1)
            return r0
        Lb:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final int getWriteIndex() {
            r2 = this;
            int r0 = r2.absoluteFirstIndex
            int r1 = r2.length
            int r0 = r0 + r1
            return r0
    }

    public final synchronized boolean hasNextSample() {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.readPosition     // Catch: java.lang.Throwable -> Lc
            int r1 = r2.length     // Catch: java.lang.Throwable -> Lc
            if (r0 == r1) goto L9
            r0 = 1
            goto La
        L9:
            r0 = 0
        La:
            monitor-exit(r2)
            return r0
        Lc:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final int peekSourceId() {
            r2 = this;
            int r0 = r2.readPosition
            int r0 = r2.getRelativeIndex(r0)
            boolean r1 = r2.hasNextSample()
            if (r1 == 0) goto L11
            int[] r1 = r2.sourceIds
            r0 = r1[r0]
            goto L13
        L11:
            int r0 = r2.upstreamSourceId
        L13:
            return r0
    }

    public final synchronized int read(com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r5, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r6, boolean r7, boolean r8, com.mbridge.msdk.playercommon.exoplayer2.Format r9, com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue.SampleExtrasHolder r10) {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.hasNextSample()     // Catch: java.lang.Throwable -> L6a
            r1 = -5
            r2 = -3
            r3 = -4
            if (r0 != 0) goto L24
            if (r8 == 0) goto L12
            r5 = 4
            r6.setFlags(r5)     // Catch: java.lang.Throwable -> L6a
            monitor-exit(r4)
            return r3
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r4.upstreamFormat     // Catch: java.lang.Throwable -> L6a
            if (r6 == 0) goto L22
            if (r7 != 0) goto L1c
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r4.upstreamFormat     // Catch: java.lang.Throwable -> L6a
            if (r6 == r9) goto L22
        L1c:
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r4.upstreamFormat     // Catch: java.lang.Throwable -> L6a
            r5.format = r6     // Catch: java.lang.Throwable -> L6a
            monitor-exit(r4)
            return r1
        L22:
            monitor-exit(r4)
            return r2
        L24:
            int r8 = r4.readPosition     // Catch: java.lang.Throwable -> L6a
            int r8 = r4.getRelativeIndex(r8)     // Catch: java.lang.Throwable -> L6a
            if (r7 != 0) goto L62
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r7 = r4.formats     // Catch: java.lang.Throwable -> L6a
            r7 = r7[r8]     // Catch: java.lang.Throwable -> L6a
            if (r7 == r9) goto L33
            goto L62
        L33:
            boolean r5 = r6.isFlagsOnly()     // Catch: java.lang.Throwable -> L6a
            if (r5 == 0) goto L3b
            monitor-exit(r4)
            return r2
        L3b:
            long[] r5 = r4.timesUs     // Catch: java.lang.Throwable -> L6a
            r0 = r5[r8]     // Catch: java.lang.Throwable -> L6a
            r6.timeUs = r0     // Catch: java.lang.Throwable -> L6a
            int[] r5 = r4.flags     // Catch: java.lang.Throwable -> L6a
            r5 = r5[r8]     // Catch: java.lang.Throwable -> L6a
            r6.setFlags(r5)     // Catch: java.lang.Throwable -> L6a
            int[] r5 = r4.sizes     // Catch: java.lang.Throwable -> L6a
            r5 = r5[r8]     // Catch: java.lang.Throwable -> L6a
            r10.size = r5     // Catch: java.lang.Throwable -> L6a
            long[] r5 = r4.offsets     // Catch: java.lang.Throwable -> L6a
            r6 = r5[r8]     // Catch: java.lang.Throwable -> L6a
            r10.offset = r6     // Catch: java.lang.Throwable -> L6a
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData[] r5 = r4.cryptoDatas     // Catch: java.lang.Throwable -> L6a
            r5 = r5[r8]     // Catch: java.lang.Throwable -> L6a
            r10.cryptoData = r5     // Catch: java.lang.Throwable -> L6a
            int r5 = r4.readPosition     // Catch: java.lang.Throwable -> L6a
            int r5 = r5 + 1
            r4.readPosition = r5     // Catch: java.lang.Throwable -> L6a
            monitor-exit(r4)
            return r3
        L62:
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r6 = r4.formats     // Catch: java.lang.Throwable -> L6a
            r6 = r6[r8]     // Catch: java.lang.Throwable -> L6a
            r5.format = r6     // Catch: java.lang.Throwable -> L6a
            monitor-exit(r4)
            return r1
        L6a:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final void reset(boolean r4) {
            r3 = this;
            r0 = 0
            r3.length = r0
            r3.absoluteFirstIndex = r0
            r3.relativeFirstIndex = r0
            r3.readPosition = r0
            r0 = 1
            r3.upstreamKeyframeRequired = r0
            r1 = -9223372036854775808
            r3.largestDiscardedTimestampUs = r1
            r3.largestQueuedTimestampUs = r1
            if (r4 == 0) goto L19
            r4 = 0
            r3.upstreamFormat = r4
            r3.upstreamFormatRequired = r0
        L19:
            return
    }

    public final synchronized void rewind() {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.readPosition = r0     // Catch: java.lang.Throwable -> L6
            monitor-exit(r1)
            return
        L6:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized boolean setReadPosition(int r3) {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.absoluteFirstIndex     // Catch: java.lang.Throwable -> L17
            if (r0 > r3) goto L14
            int r0 = r2.absoluteFirstIndex     // Catch: java.lang.Throwable -> L17
            int r1 = r2.length     // Catch: java.lang.Throwable -> L17
            int r0 = r0 + r1
            if (r3 > r0) goto L14
            int r0 = r2.absoluteFirstIndex     // Catch: java.lang.Throwable -> L17
            int r3 = r3 - r0
            r2.readPosition = r3     // Catch: java.lang.Throwable -> L17
            r3 = 1
            monitor-exit(r2)
            return r3
        L14:
            r3 = 0
            monitor-exit(r2)
            return r3
        L17:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final void sourceId(int r1) {
            r0 = this;
            r0.upstreamSourceId = r1
            return
    }
}
