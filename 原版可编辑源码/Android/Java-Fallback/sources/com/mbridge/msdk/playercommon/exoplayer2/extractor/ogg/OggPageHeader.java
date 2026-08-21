package com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg;

final class OggPageHeader {
    public static final int EMPTY_PAGE_HEADER_SIZE = 27;
    public static final int MAX_PAGE_PAYLOAD = 65025;
    public static final int MAX_PAGE_SIZE = 65307;
    public static final int MAX_SEGMENT_COUNT = 255;
    private static final int TYPE_OGGS = 0;
    public int bodySize;
    public long granulePosition;
    public int headerSize;
    public final int[] laces;
    public long pageChecksum;
    public int pageSegmentCount;
    public long pageSequenceNumber;
    public int revision;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray scratch;
    public long streamSerialNumber;
    public int type;

    static {
            java.lang.String r0 = "OggS"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader.TYPE_OGGS = r0
            return
    }

    OggPageHeader() {
            r2 = this;
            r2.<init>()
            r0 = 255(0xff, float:3.57E-43)
            int[] r1 = new int[r0]
            r2.laces = r1
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r1.<init>(r0)
            r2.scratch = r1
            return
    }

    public final boolean populate(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r9, boolean r10) throws java.io.IOException, java.lang.InterruptedException {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.scratch
            r0.reset()
            r8.reset()
            long r0 = r9.getLength()
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L26
            long r3 = r9.getLength()
            long r5 = r9.getPeekPosition()
            long r3 = r3 - r5
            r5 = 27
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 < 0) goto L24
            goto L26
        L24:
            r0 = r2
            goto L27
        L26:
            r0 = r1
        L27:
            if (r0 == 0) goto Lc0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.scratch
            byte[] r0 = r0.data
            r3 = 27
            boolean r0 = r9.peekFully(r0, r2, r3, r1)
            if (r0 != 0) goto L37
            goto Lc0
        L37:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.scratch
            long r4 = r0.readUnsignedInt()
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader.TYPE_OGGS
            long r6 = (long) r0
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 == 0) goto L4f
            if (r10 == 0) goto L47
            return r2
        L47:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r9 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r10 = "expected OggS capture pattern at begin of page"
            r9.<init>(r10)
            throw r9
        L4f:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.scratch
            int r0 = r0.readUnsignedByte()
            r8.revision = r0
            if (r0 == 0) goto L64
            if (r10 == 0) goto L5c
            return r2
        L5c:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r9 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r10 = "unsupported bit stream revision"
            r9.<init>(r10)
            throw r9
        L64:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r8.scratch
            int r10 = r10.readUnsignedByte()
            r8.type = r10
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r8.scratch
            long r4 = r10.readLittleEndianLong()
            r8.granulePosition = r4
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r8.scratch
            long r4 = r10.readLittleEndianUnsignedInt()
            r8.streamSerialNumber = r4
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r8.scratch
            long r4 = r10.readLittleEndianUnsignedInt()
            r8.pageSequenceNumber = r4
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r8.scratch
            long r4 = r10.readLittleEndianUnsignedInt()
            r8.pageChecksum = r4
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r8.scratch
            int r10 = r10.readUnsignedByte()
            r8.pageSegmentCount = r10
            int r10 = r10 + r3
            r8.headerSize = r10
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r8.scratch
            r10.reset()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r8.scratch
            byte[] r10 = r10.data
            int r0 = r8.pageSegmentCount
            r9.peekFully(r10, r2, r0)
        La5:
            int r9 = r8.pageSegmentCount
            if (r2 >= r9) goto Lbf
            int[] r9 = r8.laces
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r8.scratch
            int r10 = r10.readUnsignedByte()
            r9[r2] = r10
            int r9 = r8.bodySize
            int[] r10 = r8.laces
            r10 = r10[r2]
            int r9 = r9 + r10
            r8.bodySize = r9
            int r2 = r2 + 1
            goto La5
        Lbf:
            return r1
        Lc0:
            if (r10 == 0) goto Lc3
            return r2
        Lc3:
            java.io.EOFException r9 = new java.io.EOFException
            r9.<init>()
            throw r9
    }

    public final void reset() {
            r3 = this;
            r0 = 0
            r3.revision = r0
            r3.type = r0
            r1 = 0
            r3.granulePosition = r1
            r3.streamSerialNumber = r1
            r3.pageSequenceNumber = r1
            r3.pageChecksum = r1
            r3.pageSegmentCount = r0
            r3.headerSize = r0
            r3.bodySize = r0
            return
    }
}
