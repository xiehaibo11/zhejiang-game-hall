package com.mbridge.msdk.playercommon.exoplayer2.extractor.rawcc;

public final class RawCcExtractor implements com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor {
    private static final int HEADER_ID = 0;
    private static final int HEADER_SIZE = 8;
    private static final int SCRATCH_SIZE = 9;
    private static final int STATE_READING_HEADER = 0;
    private static final int STATE_READING_SAMPLES = 2;
    private static final int STATE_READING_TIMESTAMP_AND_COUNT = 1;
    private static final int TIMESTAMP_SIZE_V0 = 4;
    private static final int TIMESTAMP_SIZE_V1 = 8;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray dataScratch;
    private final com.mbridge.msdk.playercommon.exoplayer2.Format format;
    private int parserState;
    private int remainingSampleCount;
    private int sampleBytesWritten;
    private long timestampUs;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput trackOutput;
    private int version;

    static {
            java.lang.String r0 = "RCC\u0001"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.rawcc.RawCcExtractor.HEADER_ID = r0
            return
    }

    public RawCcExtractor(com.mbridge.msdk.playercommon.exoplayer2.Format r2) {
            r1 = this;
            r1.<init>()
            r1.format = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0 = 9
            r2.<init>(r0)
            r1.dataScratch = r2
            r2 = 0
            r1.parserState = r2
            return
    }

    private boolean parseHeader(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r5) throws java.io.IOException, java.lang.InterruptedException {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r4.dataScratch
            r0.reset()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r4.dataScratch
            byte[] r0 = r0.data
            r1 = 1
            r2 = 0
            r3 = 8
            boolean r5 = r5.readFully(r0, r2, r3, r1)
            if (r5 == 0) goto L2e
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r4.dataScratch
            int r5 = r5.readInt()
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.rawcc.RawCcExtractor.HEADER_ID
            if (r5 != r0) goto L26
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r4.dataScratch
            int r5 = r5.readUnsignedByte()
            r4.version = r5
            return r1
        L26:
            java.io.IOException r5 = new java.io.IOException
            java.lang.String r0 = "Input not RawCC"
            r5.<init>(r0)
            throw r5
        L2e:
            return r2
    }

    private void parseSamples(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r9) throws java.io.IOException, java.lang.InterruptedException {
            r8 = this;
        L0:
            int r0 = r8.remainingSampleCount
            if (r0 <= 0) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.dataScratch
            r0.reset()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.dataScratch
            byte[] r0 = r0.data
            r1 = 0
            r2 = 3
            r9.readFully(r0, r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r8.trackOutput
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r8.dataScratch
            r0.sampleData(r1, r2)
            int r0 = r8.sampleBytesWritten
            int r0 = r0 + r2
            r8.sampleBytesWritten = r0
            int r0 = r8.remainingSampleCount
            int r0 = r0 + (-1)
            r8.remainingSampleCount = r0
            goto L0
        L25:
            int r5 = r8.sampleBytesWritten
            if (r5 <= 0) goto L33
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r8.trackOutput
            long r2 = r8.timestampUs
            r4 = 1
            r6 = 0
            r7 = 0
            r1.sampleMetadata(r2, r4, r5, r6, r7)
        L33:
            return
    }

    private boolean parseTimestampAndSampleCount(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r8) throws java.io.IOException, java.lang.InterruptedException {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r7.dataScratch
            r0.reset()
            int r0 = r7.version
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L26
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r7.dataScratch
            byte[] r0 = r0.data
            r3 = 5
            boolean r8 = r8.readFully(r0, r2, r3, r1)
            if (r8 != 0) goto L17
            return r2
        L17:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8 = r7.dataScratch
            long r3 = r8.readUnsignedInt()
            r5 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 * r5
            r5 = 45
            long r3 = r3 / r5
            r7.timestampUs = r3
            goto L3d
        L26:
            if (r0 != r1) goto L48
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r7.dataScratch
            byte[] r0 = r0.data
            r3 = 9
            boolean r8 = r8.readFully(r0, r2, r3, r1)
            if (r8 != 0) goto L35
            return r2
        L35:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8 = r7.dataScratch
            long r3 = r8.readLong()
            r7.timestampUs = r3
        L3d:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8 = r7.dataScratch
            int r8 = r8.readUnsignedByte()
            r7.remainingSampleCount = r8
            r7.sampleBytesWritten = r2
            return r1
        L48:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r8 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unsupported version number: "
            r0.append(r1)
            int r1 = r7.version
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r8.<init>(r0)
            throw r8
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.<init>(r1)
            r4.seekMap(r0)
            r0 = 0
            r1 = 3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r4.track(r0, r1)
            r3.trackOutput = r0
            r4.endTracks()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r4 = r3.trackOutput
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r3.format
            r4.format(r0)
            return
    }

    @Override
    public final int read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r5, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r6) throws java.io.IOException, java.lang.InterruptedException {
            r4 = this;
        L0:
            int r6 = r4.parserState
            r0 = -1
            r1 = 1
            if (r6 == 0) goto L24
            r2 = 0
            r3 = 2
            if (r6 == r1) goto L18
            if (r6 != r3) goto L12
            r4.parseSamples(r5)
            r4.parserState = r1
            return r2
        L12:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            r5.<init>()
            throw r5
        L18:
            boolean r6 = r4.parseTimestampAndSampleCount(r5)
            if (r6 == 0) goto L21
            r4.parserState = r3
            goto L0
        L21:
            r4.parserState = r2
            return r0
        L24:
            boolean r6 = r4.parseHeader(r5)
            if (r6 == 0) goto L2d
            r4.parserState = r1
            goto L0
        L2d:
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
            r0.parserState = r1
            return
    }

    @Override
    public final boolean sniff(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r4) throws java.io.IOException, java.lang.InterruptedException {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.dataScratch
            r0.reset()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.dataScratch
            byte[] r0 = r0.data
            r1 = 0
            r2 = 8
            r4.peekFully(r0, r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r3.dataScratch
            int r4 = r4.readInt()
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.rawcc.RawCcExtractor.HEADER_ID
            if (r4 != r0) goto L1a
            r1 = 1
        L1a:
            return r1
    }
}
