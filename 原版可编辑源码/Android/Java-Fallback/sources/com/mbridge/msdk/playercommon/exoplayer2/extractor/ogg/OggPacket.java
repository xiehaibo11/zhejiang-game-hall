package com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg;

final class OggPacket {
    private int currentSegmentIndex;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray packetArray;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader pageHeader;
    private boolean populated;
    private int segmentCount;

    OggPacket() {
            r3 = this;
            r3.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader
            r0.<init>()
            r3.pageHeader = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r1 = 65025(0xfe01, float:9.112E-41)
            byte[] r1 = new byte[r1]
            r2 = 0
            r0.<init>(r1, r2)
            r3.packetArray = r0
            r0 = -1
            r3.currentSegmentIndex = r0
            return
    }

    private int calculatePacketSize(int r5) {
            r4 = this;
            r0 = 0
            r4.segmentCount = r0
        L3:
            int r1 = r4.segmentCount
            int r1 = r1 + r5
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r2 = r4.pageHeader
            int r2 = r2.pageSegmentCount
            if (r1 >= r2) goto L1e
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r1 = r4.pageHeader
            int[] r1 = r1.laces
            int r2 = r4.segmentCount
            int r3 = r2 + 1
            r4.segmentCount = r3
            int r2 = r2 + r5
            r1 = r1[r2]
            int r0 = r0 + r1
            r2 = 255(0xff, float:3.57E-43)
            if (r1 == r2) goto L3
        L1e:
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader getPageHeader() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = r1.pageHeader
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray getPayload() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r1.packetArray
            return r0
    }

    public final boolean populate(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r8) throws java.io.IOException, java.lang.InterruptedException {
            r7 = this;
            r0 = 0
            r1 = 1
            if (r8 == 0) goto L6
            r2 = r1
            goto L7
        L6:
            r2 = r0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r2)
            boolean r2 = r7.populated
            if (r2 == 0) goto L15
            r7.populated = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r7.packetArray
            r2.reset()
        L15:
            boolean r2 = r7.populated
            if (r2 != 0) goto La8
            int r2 = r7.currentSegmentIndex
            if (r2 >= 0) goto L48
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r2 = r7.pageHeader
            boolean r2 = r2.populate(r8, r1)
            if (r2 != 0) goto L26
            return r0
        L26:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r2 = r7.pageHeader
            int r2 = r2.headerSize
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r3 = r7.pageHeader
            int r3 = r3.type
            r3 = r3 & r1
            if (r3 != r1) goto L42
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r7.packetArray
            int r3 = r3.limit()
            if (r3 != 0) goto L42
            int r3 = r7.calculatePacketSize(r0)
            int r2 = r2 + r3
            int r3 = r7.segmentCount
            int r3 = r3 + r0
            goto L43
        L42:
            r3 = r0
        L43:
            r8.skipFully(r2)
            r7.currentSegmentIndex = r3
        L48:
            int r2 = r7.currentSegmentIndex
            int r2 = r7.calculatePacketSize(r2)
            int r3 = r7.currentSegmentIndex
            int r4 = r7.segmentCount
            int r3 = r3 + r4
            if (r2 <= 0) goto L9d
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r7.packetArray
            int r4 = r4.capacity()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r7.packetArray
            int r5 = r5.limit()
            int r5 = r5 + r2
            if (r4 >= r5) goto L75
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r7.packetArray
            byte[] r5 = r4.data
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r7.packetArray
            int r6 = r6.limit()
            int r6 = r6 + r2
            byte[] r5 = java.util.Arrays.copyOf(r5, r6)
            r4.data = r5
        L75:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r7.packetArray
            byte[] r4 = r4.data
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r7.packetArray
            int r5 = r5.limit()
            r8.readFully(r4, r5, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r7.packetArray
            int r5 = r4.limit()
            int r5 = r5 + r2
            r4.setLimit(r5)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r2 = r7.pageHeader
            int[] r2 = r2.laces
            int r4 = r3 + (-1)
            r2 = r2[r4]
            r4 = 255(0xff, float:3.57E-43)
            if (r2 == r4) goto L9a
            r2 = r1
            goto L9b
        L9a:
            r2 = r0
        L9b:
            r7.populated = r2
        L9d:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r2 = r7.pageHeader
            int r2 = r2.pageSegmentCount
            if (r3 != r2) goto La4
            r3 = -1
        La4:
            r7.currentSegmentIndex = r3
            goto L15
        La8:
            return r1
    }

    public final void reset() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = r1.pageHeader
            r0.reset()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r1.packetArray
            r0.reset()
            r0 = -1
            r1.currentSegmentIndex = r0
            r0 = 0
            r1.populated = r0
            return
    }

    public final void trimPayload() {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r4.packetArray
            byte[] r0 = r0.data
            int r0 = r0.length
            r1 = 65025(0xfe01, float:9.112E-41)
            if (r0 != r1) goto Lb
            return
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r4.packetArray
            byte[] r2 = r0.data
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r4.packetArray
            int r3 = r3.limit()
            int r1 = java.lang.Math.max(r1, r3)
            byte[] r1 = java.util.Arrays.copyOf(r2, r1)
            r0.data = r1
            return
    }
}
