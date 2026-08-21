package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class DtsReader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader {
    private static final int HEADER_SIZE = 18;
    private static final int STATE_FINDING_SYNC = 0;
    private static final int STATE_READING_HEADER = 1;
    private static final int STATE_READING_SAMPLE = 2;
    private int bytesRead;
    private com.mbridge.msdk.playercommon.exoplayer2.Format format;
    private java.lang.String formatId;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray headerScratchBytes;
    private final java.lang.String language;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput output;
    private long sampleDurationUs;
    private int sampleSize;
    private int state;
    private int syncBytes;
    private long timeUs;

    public DtsReader(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r1 = 18
            byte[] r1 = new byte[r1]
            r0.<init>(r1)
            r2.headerScratchBytes = r0
            r0 = 0
            r2.state = r0
            r2.language = r3
            return
    }

    private boolean continueRead(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3, byte[] r4, int r5) {
            r2 = this;
            int r0 = r3.bytesLeft()
            int r1 = r2.bytesRead
            int r1 = r5 - r1
            int r0 = java.lang.Math.min(r0, r1)
            int r1 = r2.bytesRead
            r3.readBytes(r4, r1, r0)
            int r3 = r2.bytesRead
            int r3 = r3 + r0
            r2.bytesRead = r3
            if (r3 != r5) goto L1a
            r3 = 1
            goto L1b
        L1a:
            r3 = 0
        L1b:
            return r3
    }

    private void parseHeader() {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r5.headerScratchBytes
            byte[] r0 = r0.data
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = r5.format
            if (r1 != 0) goto L18
            java.lang.String r1 = r5.formatId
            java.lang.String r2 = r5.language
            r3 = 0
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.DtsUtil.parseDtsFormat(r0, r1, r2, r3)
            r5.format = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r2 = r5.output
            r2.format(r1)
        L18:
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.DtsUtil.getDtsFrameSize(r0)
            r5.sampleSize = r1
            r1 = 1000000(0xf4240, double:4.940656E-318)
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.DtsUtil.parseDtsAudioSampleCount(r0)
            long r3 = (long) r0
            long r3 = r3 * r1
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r5.format
            int r0 = r0.sampleRate
            long r0 = (long) r0
            long r3 = r3 / r0
            int r0 = (int) r3
            long r0 = (long) r0
            r5.sampleDurationUs = r0
            return
    }

    private boolean skipToNextSync(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5) {
            r4 = this;
        L0:
            int r0 = r5.bytesLeft()
            r1 = 0
            if (r0 <= 0) goto L55
            int r0 = r4.syncBytes
            int r0 = r0 << 8
            r4.syncBytes = r0
            int r2 = r5.readUnsignedByte()
            r0 = r0 | r2
            r4.syncBytes = r0
            boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.DtsUtil.isSyncWord(r0)
            if (r0 == 0) goto L0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r4.headerScratchBytes
            byte[] r5 = r5.data
            int r0 = r4.syncBytes
            int r0 = r0 >> 24
            r0 = r0 & 255(0xff, float:3.57E-43)
            byte r0 = (byte) r0
            r5[r1] = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r4.headerScratchBytes
            byte[] r5 = r5.data
            int r0 = r4.syncBytes
            int r0 = r0 >> 16
            r0 = r0 & 255(0xff, float:3.57E-43)
            byte r0 = (byte) r0
            r2 = 1
            r5[r2] = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r4.headerScratchBytes
            byte[] r5 = r5.data
            r0 = 2
            int r3 = r4.syncBytes
            int r3 = r3 >> 8
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3
            r5[r0] = r3
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r4.headerScratchBytes
            byte[] r5 = r5.data
            r0 = 3
            int r3 = r4.syncBytes
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3
            r5[r0] = r3
            r5 = 4
            r4.bytesRead = r5
            r4.syncBytes = r1
            return r2
        L55:
            return r1
    }

    @Override
    public final void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11) {
            r10 = this;
        L0:
            int r0 = r11.bytesLeft()
            if (r0 <= 0) goto L68
            int r0 = r10.state
            r1 = 1
            if (r0 == 0) goto L5f
            r2 = 0
            r3 = 2
            if (r0 == r1) goto L41
            if (r0 == r3) goto L12
            goto L0
        L12:
            int r0 = r11.bytesLeft()
            int r1 = r10.sampleSize
            int r3 = r10.bytesRead
            int r1 = r1 - r3
            int r0 = java.lang.Math.min(r0, r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r10.output
            r1.sampleData(r11, r0)
            int r1 = r10.bytesRead
            int r1 = r1 + r0
            r10.bytesRead = r1
            int r7 = r10.sampleSize
            if (r1 != r7) goto L0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r10.output
            long r4 = r10.timeUs
            r6 = 1
            r8 = 0
            r9 = 0
            r3.sampleMetadata(r4, r6, r7, r8, r9)
            long r0 = r10.timeUs
            long r3 = r10.sampleDurationUs
            long r0 = r0 + r3
            r10.timeUs = r0
            r10.state = r2
            goto L0
        L41:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r10.headerScratchBytes
            byte[] r0 = r0.data
            r1 = 18
            boolean r0 = r10.continueRead(r11, r0, r1)
            if (r0 == 0) goto L0
            r10.parseHeader()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r10.headerScratchBytes
            r0.setPosition(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r10.output
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r10.headerScratchBytes
            r0.sampleData(r2, r1)
            r10.state = r3
            goto L0
        L5f:
            boolean r0 = r10.skipToNextSync(r11)
            if (r0 == 0) goto L0
            r10.state = r1
            goto L0
        L68:
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
            r1.bytesRead = r0
            r1.syncBytes = r0
            return
    }
}
