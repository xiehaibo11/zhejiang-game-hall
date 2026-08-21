package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class SectionReader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader {
    private static final int DEFAULT_SECTION_BUFFER_LENGTH = 32;
    private static final int MAX_SECTION_LENGTH = 4098;
    private static final int SECTION_HEADER_LENGTH = 3;
    private int bytesRead;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SectionPayloadReader reader;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray sectionData;
    private boolean sectionSyntaxIndicator;
    private int totalSectionLength;
    private boolean waitingForPayloadStart;

    public SectionReader(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SectionPayloadReader r2) {
            r1 = this;
            r1.<init>()
            r1.reader = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0 = 32
            r2.<init>(r0)
            r1.sectionData = r2
            return
    }

    @Override
    public final void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8, boolean r9) {
            r7 = this;
            r0 = -1
            if (r9 == 0) goto Ld
            int r1 = r8.readUnsignedByte()
            int r2 = r8.getPosition()
            int r2 = r2 + r1
            goto Le
        Ld:
            r2 = r0
        Le:
            boolean r1 = r7.waitingForPayloadStart
            r3 = 0
            if (r1 == 0) goto L1d
            if (r9 != 0) goto L16
            return
        L16:
            r7.waitingForPayloadStart = r3
            r8.setPosition(r2)
            r7.bytesRead = r3
        L1d:
            int r9 = r8.bytesLeft()
            if (r9 <= 0) goto Lf7
            int r9 = r7.bytesRead
            r1 = 1
            r2 = 3
            if (r9 >= r2) goto Lab
            if (r9 != 0) goto L3e
            int r9 = r8.readUnsignedByte()
            int r4 = r8.getPosition()
            int r4 = r4 - r1
            r8.setPosition(r4)
            r4 = 255(0xff, float:3.57E-43)
            if (r9 != r4) goto L3e
            r7.waitingForPayloadStart = r1
            return
        L3e:
            int r9 = r8.bytesLeft()
            int r4 = r7.bytesRead
            int r4 = 3 - r4
            int r9 = java.lang.Math.min(r9, r4)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r7.sectionData
            byte[] r4 = r4.data
            int r5 = r7.bytesRead
            r8.readBytes(r4, r5, r9)
            int r4 = r7.bytesRead
            int r4 = r4 + r9
            r7.bytesRead = r4
            if (r4 != r2) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9 = r7.sectionData
            r9.reset(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9 = r7.sectionData
            r9.skipBytes(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9 = r7.sectionData
            int r9 = r9.readUnsignedByte()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r7.sectionData
            int r4 = r4.readUnsignedByte()
            r5 = r9 & 128(0x80, float:1.8E-43)
            if (r5 == 0) goto L75
            goto L76
        L75:
            r1 = r3
        L76:
            r7.sectionSyntaxIndicator = r1
            r9 = r9 & 15
            int r9 = r9 << 8
            r9 = r9 | r4
            int r9 = r9 + r2
            r7.totalSectionLength = r9
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9 = r7.sectionData
            int r9 = r9.capacity()
            int r1 = r7.totalSectionLength
            if (r9 >= r1) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9 = r7.sectionData
            byte[] r9 = r9.data
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r7.sectionData
            r4 = 4098(0x1002, float:5.743E-42)
            int r5 = r7.totalSectionLength
            int r6 = r9.length
            int r6 = r6 * 2
            int r5 = java.lang.Math.max(r5, r6)
            int r4 = java.lang.Math.min(r4, r5)
            r1.reset(r4)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r7.sectionData
            byte[] r1 = r1.data
            java.lang.System.arraycopy(r9, r3, r1, r3, r2)
            goto L1d
        Lab:
            int r9 = r8.bytesLeft()
            int r2 = r7.totalSectionLength
            int r4 = r7.bytesRead
            int r2 = r2 - r4
            int r9 = java.lang.Math.min(r9, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r7.sectionData
            byte[] r2 = r2.data
            int r4 = r7.bytesRead
            r8.readBytes(r2, r4, r9)
            int r2 = r7.bytesRead
            int r2 = r2 + r9
            r7.bytesRead = r2
            int r9 = r7.totalSectionLength
            if (r2 != r9) goto L1d
            boolean r2 = r7.sectionSyntaxIndicator
            if (r2 == 0) goto Le7
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9 = r7.sectionData
            byte[] r9 = r9.data
            int r2 = r7.totalSectionLength
            int r9 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.crc(r9, r3, r2, r0)
            if (r9 == 0) goto Ldd
            r7.waitingForPayloadStart = r1
            return
        Ldd:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9 = r7.sectionData
            int r1 = r7.totalSectionLength
            int r1 = r1 + (-4)
            r9.reset(r1)
            goto Lec
        Le7:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r7.sectionData
            r1.reset(r9)
        Lec:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SectionPayloadReader r9 = r7.reader
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r7.sectionData
            r9.consume(r1)
            r7.bytesRead = r3
            goto L1d
        Lf7:
            return
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r3, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SectionPayloadReader r0 = r1.reader
            r0.init(r2, r3, r4)
            r2 = 1
            r1.waitingForPayloadStart = r2
            return
    }

    @Override
    public final void seek() {
            r1 = this;
            r0 = 1
            r1.waitingForPayloadStart = r0
            return
    }
}
