package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class MpegAudioReader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader {
    private static final int HEADER_SIZE = 4;
    private static final int STATE_FINDING_HEADER = 0;
    private static final int STATE_READING_FRAME = 2;
    private static final int STATE_READING_HEADER = 1;
    private java.lang.String formatId;
    private int frameBytesRead;
    private long frameDurationUs;
    private int frameSize;
    private boolean hasOutputFormat;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader header;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray headerScratch;
    private final java.lang.String language;
    private boolean lastByteWasFF;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput output;
    private int state;
    private long timeUs;

    public MpegAudioReader() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public MpegAudioReader(java.lang.String r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.state = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r2 = 4
            r1.<init>(r2)
            r3.headerScratch = r1
            byte[] r1 = r1.data
            r2 = -1
            r1[r0] = r2
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader
            r0.<init>()
            r3.header = r0
            r3.language = r4
            return
    }

    private void findHeader(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9) {
            r8 = this;
            byte[] r0 = r9.data
            int r1 = r9.getPosition()
            int r2 = r9.limit()
        La:
            if (r1 >= r2) goto L42
            r3 = r0[r1]
            r4 = 255(0xff, float:3.57E-43)
            r3 = r3 & r4
            r5 = 0
            r6 = 1
            if (r3 != r4) goto L17
            r3 = r6
            goto L18
        L17:
            r3 = r5
        L18:
            boolean r4 = r8.lastByteWasFF
            if (r4 == 0) goto L25
            r4 = r0[r1]
            r7 = 224(0xe0, float:3.14E-43)
            r4 = r4 & r7
            if (r4 != r7) goto L25
            r4 = r6
            goto L26
        L25:
            r4 = r5
        L26:
            r8.lastByteWasFF = r3
            if (r4 == 0) goto L3f
            int r2 = r1 + 1
            r9.setPosition(r2)
            r8.lastByteWasFF = r5
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9 = r8.headerScratch
            byte[] r9 = r9.data
            r0 = r0[r1]
            r9[r6] = r0
            r9 = 2
            r8.frameBytesRead = r9
            r8.state = r6
            return
        L3f:
            int r1 = r1 + 1
            goto La
        L42:
            r9.setPosition(r2)
            return
    }

    private void readFrameRemainder(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8) {
            r7 = this;
            int r0 = r8.bytesLeft()
            int r1 = r7.frameSize
            int r2 = r7.frameBytesRead
            int r1 = r1 - r2
            int r0 = java.lang.Math.min(r0, r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r7.output
            r1.sampleData(r8, r0)
            int r8 = r7.frameBytesRead
            int r8 = r8 + r0
            r7.frameBytesRead = r8
            int r4 = r7.frameSize
            if (r8 >= r4) goto L1c
            return
        L1c:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r7.output
            long r1 = r7.timeUs
            r3 = 1
            r5 = 0
            r6 = 0
            r0.sampleMetadata(r1, r3, r4, r5, r6)
            long r0 = r7.timeUs
            long r2 = r7.frameDurationUs
            long r0 = r0 + r2
            r7.timeUs = r0
            r8 = 0
            r7.frameBytesRead = r8
            r7.state = r8
            return
    }

    private void readHeaderRemainder(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r21) {
            r20 = this;
            r0 = r20
            int r1 = r21.bytesLeft()
            int r2 = r0.frameBytesRead
            r3 = 4
            int r2 = 4 - r2
            int r1 = java.lang.Math.min(r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r0.headerScratch
            byte[] r2 = r2.data
            int r4 = r0.frameBytesRead
            r5 = r21
            r5.readBytes(r2, r4, r1)
            int r2 = r0.frameBytesRead
            int r2 = r2 + r1
            r0.frameBytesRead = r2
            if (r2 >= r3) goto L22
            return
        L22:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r0.headerScratch
            r2 = 0
            r1.setPosition(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r0.headerScratch
            int r1 = r1.readInt()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r4 = r0.header
            boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.populateHeader(r1, r4)
            r4 = 1
            if (r1 != 0) goto L3c
            r0.frameBytesRead = r2
            r0.state = r4
            return
        L3c:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r1 = r0.header
            int r1 = r1.frameSize
            r0.frameSize = r1
            boolean r1 = r0.hasOutputFormat
            if (r1 != 0) goto L7e
            r5 = 1000000(0xf4240, double:4.940656E-318)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r1 = r0.header
            int r1 = r1.samplesPerFrame
            long r7 = (long) r1
            long r7 = r7 * r5
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r1 = r0.header
            int r1 = r1.sampleRate
            long r5 = (long) r1
            long r7 = r7 / r5
            r0.frameDurationUs = r7
            java.lang.String r9 = r0.formatId
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r1 = r0.header
            java.lang.String r10 = r1.mimeType
            r11 = 0
            r12 = -1
            r13 = 4096(0x1000, float:5.74E-42)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r1 = r0.header
            int r14 = r1.channels
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r1 = r0.header
            int r15 = r1.sampleRate
            r16 = 0
            r17 = 0
            r18 = 0
            java.lang.String r1 = r0.language
            r19 = r1
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r5 = r0.output
            r5.format(r1)
            r0.hasOutputFormat = r4
        L7e:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r0.headerScratch
            r1.setPosition(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r0.output
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r0.headerScratch
            r1.sampleData(r2, r3)
            r1 = 2
            r0.state = r1
            return
    }

    @Override
    public final void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3) {
            r2 = this;
        L0:
            int r0 = r3.bytesLeft()
            if (r0 <= 0) goto L1d
            int r0 = r2.state
            if (r0 == 0) goto L19
            r1 = 1
            if (r0 == r1) goto L15
            r1 = 2
            if (r0 == r1) goto L11
            goto L0
        L11:
            r2.readFrameRemainder(r3)
            goto L0
        L15:
            r2.readHeaderRemainder(r3)
            goto L0
        L19:
            r2.findHeader(r3)
            goto L0
        L1d:
            return
    }

    @Override
    public final void createTracks(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r3) {
            r1 = this;
            r3.generateNewId()
            java.lang.String r0 = r3.getFormatId()
            r1.formatId = r0
            int r3 = r3.getTrackId()
            r0 = 1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r2 = r2.track(r3, r0)
            r1.output = r2
            return
    }

    @Override
    public final void packetFinished() {
            r0 = this;
            return
    }

    @Override
    public final void packetStarted(long r1, boolean r3) {
            r0 = this;
            r0.timeUs = r1
            return
    }

    @Override
    public final void seek() {
            r1 = this;
            r0 = 0
            r1.state = r0
            r1.frameBytesRead = r0
            r1.lastByteWasFF = r0
            return
    }
}
