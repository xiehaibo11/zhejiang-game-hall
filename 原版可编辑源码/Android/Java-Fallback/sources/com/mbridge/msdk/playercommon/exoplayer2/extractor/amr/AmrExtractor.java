package com.mbridge.msdk.playercommon.exoplayer2.extractor.amr;

public final class AmrExtractor implements com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor {
    public static final com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory FACTORY = null;
    private static final int MAX_FRAME_SIZE_BYTES = 0;
    private static final int SAMPLE_RATE_NB = 8000;
    private static final int SAMPLE_RATE_WB = 16000;
    private static final int SAMPLE_TIME_PER_FRAME_US = 20000;
    private static final byte[] amrSignatureNb = null;
    private static final byte[] amrSignatureWb = null;
    private static final int[] frameSizeBytesByTypeNb = null;
    private static final int[] frameSizeBytesByTypeWb = null;
    private int currentSampleBytesRemaining;
    private long currentSampleTimeUs;
    private int currentSampleTotalBytes;
    private boolean hasOutputFormat;
    private boolean isWideBand;
    private final byte[] scratch;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput trackOutput;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.FACTORY = r0
            r0 = 16
            int[] r1 = new int[r0]
            r1 = {x0030: FILL_ARRAY_DATA , data: [13, 14, 16, 18, 20, 21, 27, 32, 6, 7, 6, 6, 1, 1, 1, 1} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.frameSizeBytesByTypeNb = r1
            int[] r0 = new int[r0]
            r0 = {x0054: FILL_ARRAY_DATA , data: [18, 24, 33, 37, 41, 47, 51, 59, 61, 6, 1, 1, 1, 1, 1, 1} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.frameSizeBytesByTypeWb = r0
            java.lang.String r0 = "#!AMR\n"
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getUtf8Bytes(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.amrSignatureNb = r0
            java.lang.String r0 = "#!AMR-WB\n"
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getUtf8Bytes(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.amrSignatureWb = r0
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.frameSizeBytesByTypeWb
            r1 = 8
            r0 = r0[r1]
            com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.MAX_FRAME_SIZE_BYTES = r0
            return
    }

    public AmrExtractor() {
            r1 = this;
            r1.<init>()
            r0 = 1
            byte[] r0 = new byte[r0]
            r1.scratch = r0
            return
    }

    static byte[] amrSignatureNb() {
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.amrSignatureNb
            int r1 = r0.length
            byte[] r0 = java.util.Arrays.copyOf(r0, r1)
            return r0
    }

    static byte[] amrSignatureWb() {
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.amrSignatureWb
            int r1 = r0.length
            byte[] r0 = java.util.Arrays.copyOf(r0, r1)
            return r0
    }

    static int frameSizeBytesByTypeNb(int r1) {
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.frameSizeBytesByTypeNb
            r1 = r0[r1]
            return r1
    }

    static int frameSizeBytesByTypeWb(int r1) {
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.frameSizeBytesByTypeWb
            r1 = r0[r1]
            return r1
    }

    private int getFrameSizeInBytes(int r4) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r3 = this;
            boolean r0 = r3.isValidFrameType(r4)
            if (r0 != 0) goto L2e
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r0 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Illegal AMR "
            r1.append(r2)
            boolean r2 = r3.isWideBand
            if (r2 == 0) goto L19
            java.lang.String r2 = "WB"
            goto L1b
        L19:
            java.lang.String r2 = "NB"
        L1b:
            r1.append(r2)
            java.lang.String r2 = " frame type "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L2e:
            boolean r0 = r3.isWideBand
            if (r0 == 0) goto L37
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.frameSizeBytesByTypeWb
            r4 = r0[r4]
            goto L3b
        L37:
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.frameSizeBytesByTypeNb
            r4 = r0[r4]
        L3b:
            return r4
    }

    private boolean isNarrowBandValidFrameType(int r2) {
            r1 = this;
            boolean r0 = r1.isWideBand
            if (r0 != 0) goto Le
            r0 = 12
            if (r2 < r0) goto Lc
            r0 = 14
            if (r2 <= r0) goto Le
        Lc:
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }

    private boolean isValidFrameType(int r2) {
            r1 = this;
            if (r2 < 0) goto L14
            r0 = 15
            if (r2 > r0) goto L14
            boolean r0 = r1.isWideBandValidFrameType(r2)
            if (r0 != 0) goto L12
            boolean r2 = r1.isNarrowBandValidFrameType(r2)
            if (r2 == 0) goto L14
        L12:
            r2 = 1
            goto L15
        L14:
            r2 = 0
        L15:
            return r2
    }

    private boolean isWideBandValidFrameType(int r2) {
            r1 = this;
            boolean r0 = r1.isWideBand
            if (r0 == 0) goto Le
            r0 = 10
            if (r2 < r0) goto Lc
            r0 = 13
            if (r2 <= r0) goto Le
        Lc:
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }

    private void maybeOutputFormat() {
            r13 = this;
            boolean r0 = r13.hasOutputFormat
            if (r0 != 0) goto L2f
            r0 = 1
            r13.hasOutputFormat = r0
            boolean r0 = r13.isWideBand
            if (r0 == 0) goto Le
            java.lang.String r0 = "audio/amr-wb"
            goto L10
        Le:
            java.lang.String r0 = "audio/3gpp"
        L10:
            r2 = r0
            boolean r0 = r13.isWideBand
            if (r0 == 0) goto L18
            r0 = 16000(0x3e80, float:2.2421E-41)
            goto L1a
        L18:
            r0 = 8000(0x1f40, float:1.121E-41)
        L1a:
            r7 = r0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r13.trackOutput
            r1 = 0
            r3 = 0
            r4 = -1
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.MAX_FRAME_SIZE_BYTES
            r6 = 1
            r8 = -1
            r9 = 0
            r10 = 0
            r11 = 0
            r12 = 0
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            r0.format(r1)
        L2f:
            return
    }

    private boolean peekAmrSignature(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r4, byte[] r5) throws java.io.IOException, java.lang.InterruptedException {
            r3 = this;
            r4.resetPeekPosition()
            int r0 = r5.length
            byte[] r0 = new byte[r0]
            int r1 = r5.length
            r2 = 0
            r4.peekFully(r0, r2, r1)
            boolean r4 = java.util.Arrays.equals(r0, r5)
            return r4
    }

    private boolean readAmrHeader(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r4) throws java.io.IOException, java.lang.InterruptedException {
            r3 = this;
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.amrSignatureNb
            boolean r0 = r3.peekAmrSignature(r4, r0)
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L13
            r3.isWideBand = r1
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.amrSignatureNb
            int r0 = r0.length
            r4.skipFully(r0)
            return r2
        L13:
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.amrSignatureWb
            boolean r0 = r3.peekAmrSignature(r4, r0)
            if (r0 == 0) goto L24
            r3.isWideBand = r2
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor.amrSignatureWb
            int r0 = r0.length
            r4.skipFully(r0)
            return r2
        L24:
            return r1
    }

    private int readNextSampleSize(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r4) throws java.io.IOException, java.lang.InterruptedException {
            r3 = this;
            r4.resetPeekPosition()
            byte[] r0 = r3.scratch
            r1 = 0
            r2 = 1
            r4.peekFully(r0, r1, r2)
            byte[] r4 = r3.scratch
            r4 = r4[r1]
            r0 = r4 & 131(0x83, float:1.84E-43)
            if (r0 > 0) goto L1b
            int r4 = r4 >> 3
            r4 = r4 & 15
            int r4 = r3.getFrameSizeInBytes(r4)
            return r4
        L1b:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r0 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid padding bits for frame header "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private int readSample(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r9) throws java.io.IOException, java.lang.InterruptedException {
            r8 = this;
            int r0 = r8.currentSampleBytesRemaining
            r1 = -1
            if (r0 != 0) goto Lf
            int r0 = r8.readNextSampleSize(r9)     // Catch: java.io.EOFException -> Le
            r8.currentSampleTotalBytes = r0     // Catch: java.io.EOFException -> Le
            r8.currentSampleBytesRemaining = r0
            goto Lf
        Le:
            return r1
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r8.trackOutput
            int r2 = r8.currentSampleBytesRemaining
            r3 = 1
            int r9 = r0.sampleData(r9, r2, r3)
            if (r9 != r1) goto L1b
            return r1
        L1b:
            int r0 = r8.currentSampleBytesRemaining
            int r0 = r0 - r9
            r8.currentSampleBytesRemaining = r0
            r9 = 0
            if (r0 <= 0) goto L24
            return r9
        L24:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r8.trackOutput
            long r2 = r8.currentSampleTimeUs
            r4 = 1
            int r5 = r8.currentSampleTotalBytes
            r6 = 0
            r7 = 0
            r1.sampleMetadata(r2, r4, r5, r6, r7)
            long r0 = r8.currentSampleTimeUs
            r2 = 20000(0x4e20, double:9.8813E-320)
            long r0 = r0 + r2
            r8.currentSampleTimeUs = r0
            return r9
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.<init>(r1)
            r4.seekMap(r0)
            r0 = 0
            r1 = 1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r4.track(r0, r1)
            r3.trackOutput = r0
            r4.endTracks()
            return
    }

    @Override
    public final int read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r5, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r6) throws java.io.IOException, java.lang.InterruptedException {
            r4 = this;
            long r0 = r5.getPosition()
            r2 = 0
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 != 0) goto L19
            boolean r6 = r4.readAmrHeader(r5)
            if (r6 == 0) goto L11
            goto L19
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r5 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r6 = "Could not find AMR header."
            r5.<init>(r6)
            throw r5
        L19:
            r4.maybeOutputFormat()
            int r5 = r4.readSample(r5)
            return r5
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
            r0.currentSampleTimeUs = r1
            r1 = 0
            r0.currentSampleTotalBytes = r1
            r0.currentSampleBytesRemaining = r1
            return
    }

    @Override
    public final boolean sniff(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r1) throws java.io.IOException, java.lang.InterruptedException {
            r0 = this;
            boolean r1 = r0.readAmrHeader(r1)
            return r1
    }
}
