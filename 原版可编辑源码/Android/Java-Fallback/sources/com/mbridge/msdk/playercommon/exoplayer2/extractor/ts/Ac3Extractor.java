package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class Ac3Extractor implements com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor {
    private static final int AC3_SYNC_WORD = 2935;
    public static final com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory FACTORY = null;
    private static final int ID3_TAG = 0;
    private static final int MAX_SNIFF_BYTES = 8192;
    private static final int MAX_SYNC_FRAME_SIZE = 2786;
    private final long firstSampleTimestampUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Reader reader;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray sampleData;
    private boolean startedPacket;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Extractor$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Extractor$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Extractor.FACTORY = r0
            java.lang.String r0 = "ID3"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Extractor.ID3_TAG = r0
            return
    }

    public Ac3Extractor() {
            r2 = this;
            r0 = 0
            r2.<init>(r0)
            return
    }

    public Ac3Extractor(long r1) {
            r0 = this;
            r0.<init>()
            r0.firstSampleTimestampUs = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Reader r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Reader
            r1.<init>()
            r0.reader = r1
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r2 = 2786(0xae2, float:3.904E-42)
            r1.<init>(r2)
            r0.sampleData = r1
            return
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r5) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Reader r0 = r4.reader
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
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r3.sampleData
            byte[] r5 = r5.data
            r0 = 0
            r1 = 2786(0xae2, float:3.904E-42)
            int r4 = r4.read(r5, r0, r1)
            r5 = -1
            if (r4 != r5) goto Lf
            return r5
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r3.sampleData
            r5.setPosition(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r3.sampleData
            r5.setLimit(r4)
            boolean r4 = r3.startedPacket
            if (r4 != 0) goto L27
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Reader r4 = r3.reader
            long r1 = r3.firstSampleTimestampUs
            r5 = 1
            r4.packetStarted(r1, r5)
            r3.startedPacket = r5
        L27:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Reader r4 = r3.reader
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r3.sampleData
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
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Reader r1 = r0.reader
            r1.seek()
            return
    }

    @Override
    public final boolean sniff(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r8) throws java.io.IOException, java.lang.InterruptedException {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r1 = 10
            r0.<init>(r1)
            r2 = 0
            r3 = r2
        L9:
            byte[] r4 = r0.data
            r8.peekFully(r4, r2, r1)
            r0.setPosition(r2)
            int r4 = r0.readUnsignedInt24()
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Extractor.ID3_TAG
            if (r4 == r5) goto L59
            r8.resetPeekPosition()
            r8.advancePeekPosition(r3)
            r1 = r2
            r4 = r3
        L21:
            byte[] r5 = r0.data
            r6 = 5
            r8.peekFully(r5, r2, r6)
            r0.setPosition(r2)
            int r5 = r0.readUnsignedShort()
            r6 = 2935(0xb77, float:4.113E-42)
            if (r5 == r6) goto L43
            r8.resetPeekPosition()
            int r4 = r4 + 1
            int r1 = r4 - r3
            r5 = 8192(0x2000, float:1.148E-41)
            if (r1 < r5) goto L3e
            return r2
        L3e:
            r8.advancePeekPosition(r4)
            r1 = r2
            goto L21
        L43:
            r5 = 1
            int r1 = r1 + r5
            r6 = 4
            if (r1 < r6) goto L49
            return r5
        L49:
            byte[] r5 = r0.data
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.parseAc3SyncframeSize(r5)
            r6 = -1
            if (r5 != r6) goto L53
            return r2
        L53:
            int r5 = r5 + (-5)
            r8.advancePeekPosition(r5)
            goto L21
        L59:
            r4 = 3
            r0.skipBytes(r4)
            int r4 = r0.readSynchSafeInt()
            int r5 = r4 + 10
            int r3 = r3 + r5
            r8.advancePeekPosition(r4)
            goto L9
    }
}
