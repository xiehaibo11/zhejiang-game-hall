package com.mbridge.msdk.playercommon.exoplayer2.extractor.wav;

public final class WavExtractor implements com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor {
    public static final com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory FACTORY = null;
    private static final int MAX_INPUT_SIZE = 32768;
    private int bytesPerFrame;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput extractorOutput;
    private int pendingBytes;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput trackOutput;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader wavHeader;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavExtractor$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavExtractor$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavExtractor.FACTORY = r0
            return
    }

    public WavExtractor() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r3) {
            r2 = this;
            r2.extractorOutput = r3
            r0 = 0
            r1 = 1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r3.track(r0, r1)
            r2.trackOutput = r0
            r0 = 0
            r2.wavHeader = r0
            r3.endTracks()
            return
    }

    @Override
    public final int read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r13, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r14) throws java.io.IOException, java.lang.InterruptedException {
            r12 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader r14 = r12.wavHeader
            if (r14 != 0) goto L47
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader r14 = com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeaderReader.peek(r13)
            r12.wavHeader = r14
            if (r14 == 0) goto L3f
            r0 = 0
            r2 = 0
            int r3 = r14.getBitrate()
            r4 = 32768(0x8000, float:4.5918E-41)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader r14 = r12.wavHeader
            int r5 = r14.getNumChannels()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader r14 = r12.wavHeader
            int r6 = r14.getSampleRateHz()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader r14 = r12.wavHeader
            int r7 = r14.getEncoding()
            r8 = 0
            r9 = 0
            r10 = 0
            r11 = 0
            java.lang.String r1 = "audio/raw"
            com.mbridge.msdk.playercommon.exoplayer2.Format r14 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r12.trackOutput
            r0.format(r14)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader r14 = r12.wavHeader
            int r14 = r14.getBytesPerFrame()
            r12.bytesPerFrame = r14
            goto L47
        L3f:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r13 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r14 = "Unsupported or unrecognized wav header."
            r13.<init>(r14)
            throw r13
        L47:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader r14 = r12.wavHeader
            boolean r14 = r14.hasDataBounds()
            if (r14 != 0) goto L5b
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader r14 = r12.wavHeader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeaderReader.skipToData(r13, r14)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r14 = r12.extractorOutput
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader r0 = r12.wavHeader
            r14.seekMap(r0)
        L5b:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r14 = r12.trackOutput
            r0 = 32768(0x8000, float:4.5918E-41)
            int r1 = r12.pendingBytes
            int r0 = r0 - r1
            r1 = 1
            int r14 = r14.sampleData(r13, r0, r1)
            r0 = -1
            if (r14 == r0) goto L70
            int r1 = r12.pendingBytes
            int r1 = r1 + r14
            r12.pendingBytes = r1
        L70:
            int r1 = r12.pendingBytes
            int r2 = r12.bytesPerFrame
            int r1 = r1 / r2
            if (r1 <= 0) goto L96
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader r2 = r12.wavHeader
            long r3 = r13.getPosition()
            int r13 = r12.pendingBytes
            long r5 = (long) r13
            long r3 = r3 - r5
            long r6 = r2.getTimeUs(r3)
            int r13 = r12.bytesPerFrame
            int r9 = r1 * r13
            int r13 = r12.pendingBytes
            int r10 = r13 - r9
            r12.pendingBytes = r10
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r5 = r12.trackOutput
            r8 = 1
            r11 = 0
            r5.sampleMetadata(r6, r8, r9, r10, r11)
        L96:
            if (r14 != r0) goto L99
            goto L9a
        L99:
            r0 = 0
        L9a:
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
            r0.pendingBytes = r1
            return
    }

    @Override
    public final boolean sniff(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r1) throws java.io.IOException, java.lang.InterruptedException {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeaderReader.peek(r1)
            if (r1 == 0) goto L8
            r1 = 1
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }
}
