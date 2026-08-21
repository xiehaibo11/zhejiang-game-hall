package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4;

final class TrackFragment {
    public long atomPosition;
    public long auxiliaryDataPosition;
    public long dataPosition;
    public boolean definesEncryptionData;
    public com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues header;
    public long nextFragmentDecodeTime;
    public int[] sampleCompositionTimeOffsetTable;
    public int sampleCount;
    public long[] sampleDecodingTimeTable;
    public com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray sampleEncryptionData;
    public int sampleEncryptionDataLength;
    public boolean sampleEncryptionDataNeedsFill;
    public boolean[] sampleHasSubsampleEncryptionTable;
    public boolean[] sampleIsSyncFrameTable;
    public int[] sampleSizeTable;
    public com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox trackEncryptionBox;
    public int trunCount;
    public long[] trunDataPosition;
    public int[] trunLength;

    TrackFragment() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void fillEncryptionData(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r4) throws java.io.IOException, java.lang.InterruptedException {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.sampleEncryptionData
            byte[] r0 = r0.data
            int r1 = r3.sampleEncryptionDataLength
            r2 = 0
            r4.readFully(r0, r2, r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r3.sampleEncryptionData
            r4.setPosition(r2)
            r3.sampleEncryptionDataNeedsFill = r2
            return
    }

    public final void fillEncryptionData(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.sampleEncryptionData
            byte[] r0 = r0.data
            int r1 = r3.sampleEncryptionDataLength
            r2 = 0
            r4.readBytes(r0, r2, r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r3.sampleEncryptionData
            r4.setPosition(r2)
            r3.sampleEncryptionDataNeedsFill = r2
            return
    }

    public final long getSamplePresentationTime(int r6) {
            r5 = this;
            long[] r0 = r5.sampleDecodingTimeTable
            r1 = r0[r6]
            int[] r0 = r5.sampleCompositionTimeOffsetTable
            r6 = r0[r6]
            long r3 = (long) r6
            long r1 = r1 + r3
            return r1
    }

    public final void initEncryptionData(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r1.sampleEncryptionData
            if (r0 == 0) goto La
            int r0 = r0.limit()
            if (r0 >= r2) goto L11
        La:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0.<init>(r2)
            r1.sampleEncryptionData = r0
        L11:
            r1.sampleEncryptionDataLength = r2
            r2 = 1
            r1.definesEncryptionData = r2
            r1.sampleEncryptionDataNeedsFill = r2
            return
    }

    public final void initTables(int r2, int r3) {
            r1 = this;
            r1.trunCount = r2
            r1.sampleCount = r3
            int[] r0 = r1.trunLength
            if (r0 == 0) goto Lb
            int r0 = r0.length
            if (r0 >= r2) goto L13
        Lb:
            long[] r0 = new long[r2]
            r1.trunDataPosition = r0
            int[] r2 = new int[r2]
            r1.trunLength = r2
        L13:
            int[] r2 = r1.sampleSizeTable
            if (r2 == 0) goto L1a
            int r2 = r2.length
            if (r2 >= r3) goto L32
        L1a:
            int r3 = r3 * 125
            int r3 = r3 / 100
            int[] r2 = new int[r3]
            r1.sampleSizeTable = r2
            int[] r2 = new int[r3]
            r1.sampleCompositionTimeOffsetTable = r2
            long[] r2 = new long[r3]
            r1.sampleDecodingTimeTable = r2
            boolean[] r2 = new boolean[r3]
            r1.sampleIsSyncFrameTable = r2
            boolean[] r2 = new boolean[r3]
            r1.sampleHasSubsampleEncryptionTable = r2
        L32:
            return
    }

    public final void reset() {
            r3 = this;
            r0 = 0
            r3.trunCount = r0
            r1 = 0
            r3.nextFragmentDecodeTime = r1
            r3.definesEncryptionData = r0
            r3.sampleEncryptionDataNeedsFill = r0
            r0 = 0
            r3.trackEncryptionBox = r0
            return
    }
}
