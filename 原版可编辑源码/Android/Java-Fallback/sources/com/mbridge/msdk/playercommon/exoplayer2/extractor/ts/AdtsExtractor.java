package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class AdtsExtractor implements com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor {
    public static final com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory FACTORY = null;
    private static final int ID3_TAG = 0;
    private static final int MAX_PACKET_SIZE = 200;
    private static final int MAX_SNIFF_BYTES = 8192;
    private final long firstSampleTimestampUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray packetBuffer;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsReader reader;
    private boolean startedPacket;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsExtractor$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsExtractor$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsExtractor.FACTORY = r0
            java.lang.String r0 = "ID3"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsExtractor.ID3_TAG = r0
            return
    }

    public AdtsExtractor() {
            r2 = this;
            r0 = 0
            r2.<init>(r0)
            return
    }

    public AdtsExtractor(long r1) {
            r0 = this;
            r0.<init>()
            r0.firstSampleTimestampUs = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsReader r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsReader
            r2 = 1
            r1.<init>(r2)
            r0.reader = r1
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r2 = 200(0xc8, float:2.8E-43)
            r1.<init>(r2)
            r0.packetBuffer = r1
            return
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r5) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsReader r0 = r4.reader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$TrackIdGenerator r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$TrackIdGenerator
            r2 = 0
            r3 = 1
            r1.<init>(r2, r3)
            r0.createTracks(r5, r1)
            r5.endTracks()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.<init>(r1)
            r5.seekMap(r0)
            return
    }

    @Override
    public final int read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r4, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r5) throws java.io.IOException, java.lang.InterruptedException {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r3.packetBuffer
            byte[] r5 = r5.data
            r0 = 0
            r1 = 200(0xc8, float:2.8E-43)
            int r4 = r4.read(r5, r0, r1)
            r5 = -1
            if (r4 != r5) goto Lf
            return r5
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r3.packetBuffer
            r5.setPosition(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r3.packetBuffer
            r5.setLimit(r4)
            boolean r4 = r3.startedPacket
            if (r4 != 0) goto L27
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsReader r4 = r3.reader
            long r1 = r3.firstSampleTimestampUs
            r5 = 1
            r4.packetStarted(r1, r5)
            r3.startedPacket = r5
        L27:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsReader r4 = r3.reader
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r3.packetBuffer
            r4.consume(r5)
            return r0
    }

    @Override
    public final void release() {
            r0 = this;
            return
    }

    @Override
    public final void seek(long r1, long r3) {
            r0 = this;
            r1 = 0
            r0.startedPacket = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsReader r1 = r0.reader
            r1.seek()
            return
    }

    @Override
    public final boolean sniff(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r11) throws java.io.IOException, java.lang.InterruptedException {
            r10 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r1 = 10
            r0.<init>(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray
            byte[] r3 = r0.data
            r2.<init>(r3)
            r3 = 0
            r4 = r3
        L10:
            byte[] r5 = r0.data
            r11.peekFully(r5, r3, r1)
            r0.setPosition(r3)
            int r5 = r0.readUnsignedInt24()
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsExtractor.ID3_TAG
            if (r5 == r6) goto L76
            r11.resetPeekPosition()
            r11.advancePeekPosition(r4)
            r1 = r3
            r6 = r1
            r5 = r4
        L29:
            byte[] r7 = r0.data
            r8 = 2
            r11.peekFully(r7, r3, r8)
            r0.setPosition(r3)
            int r7 = r0.readUnsignedShort()
            r8 = 65526(0xfff6, float:9.1821E-41)
            r7 = r7 & r8
            r8 = 65520(0xfff0, float:9.1813E-41)
            if (r7 == r8) goto L51
            r11.resetPeekPosition()
            int r5 = r5 + 1
            int r1 = r5 - r4
            r6 = 8192(0x2000, float:1.148E-41)
            if (r1 < r6) goto L4b
            return r3
        L4b:
            r11.advancePeekPosition(r5)
            r1 = r3
            r6 = r1
            goto L29
        L51:
            r7 = 1
            int r1 = r1 + r7
            r8 = 4
            if (r1 < r8) goto L5b
            r9 = 188(0xbc, float:2.63E-43)
            if (r6 <= r9) goto L5b
            return r7
        L5b:
            byte[] r7 = r0.data
            r11.peekFully(r7, r3, r8)
            r7 = 14
            r2.setPosition(r7)
            r7 = 13
            int r7 = r2.readBits(r7)
            r8 = 6
            if (r7 > r8) goto L6f
            return r3
        L6f:
            int r8 = r7 + (-6)
            r11.advancePeekPosition(r8)
            int r6 = r6 + r7
            goto L29
        L76:
            r5 = 3
            r0.skipBytes(r5)
            int r5 = r0.readSynchSafeInt()
            int r6 = r5 + 10
            int r4 = r4 + r6
            r11.advancePeekPosition(r5)
            goto L10
    }
}
