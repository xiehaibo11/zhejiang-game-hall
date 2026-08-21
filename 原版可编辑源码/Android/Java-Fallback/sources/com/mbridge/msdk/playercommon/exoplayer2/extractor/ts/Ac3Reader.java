package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class Ac3Reader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader {
    private static final int HEADER_SIZE = 128;
    private static final int STATE_FINDING_SYNC = 0;
    private static final int STATE_READING_HEADER = 1;
    private static final int STATE_READING_SAMPLE = 2;
    private int bytesRead;
    private com.mbridge.msdk.playercommon.exoplayer2.Format format;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray headerScratchBits;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray headerScratchBytes;
    private final java.lang.String language;
    private boolean lastByteWas0B;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput output;
    private long sampleDurationUs;
    private int sampleSize;
    private int state;
    private long timeUs;
    private java.lang.String trackFormatId;

    private @interface State {
    }

    public Ac3Reader() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public Ac3Reader(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray
            r1 = 128(0x80, float:1.8E-43)
            byte[] r1 = new byte[r1]
            r0.<init>(r1)
            r2.headerScratchBits = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            byte[] r0 = r0.data
            r1.<init>(r0)
            r2.headerScratchBytes = r1
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
            r14 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r14.headerScratchBits
            r1 = 0
            r0.setPosition(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r14.headerScratchBits
            com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util$SyncFrameInfo r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.parseAc3SyncframeInfo(r0)
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = r14.format
            if (r1 == 0) goto L28
            int r1 = r0.channelCount
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r14.format
            int r2 = r2.channelCount
            if (r1 != r2) goto L28
            int r1 = r0.sampleRate
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r14.format
            int r2 = r2.sampleRate
            if (r1 != r2) goto L28
            java.lang.String r1 = r0.mimeType
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r14.format
            java.lang.String r2 = r2.sampleMimeType
            if (r1 == r2) goto L43
        L28:
            java.lang.String r3 = r14.trackFormatId
            java.lang.String r4 = r0.mimeType
            r5 = 0
            r6 = -1
            r7 = -1
            int r8 = r0.channelCount
            int r9 = r0.sampleRate
            r10 = 0
            r11 = 0
            r12 = 0
            java.lang.String r13 = r14.language
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            r14.format = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r2 = r14.output
            r2.format(r1)
        L43:
            int r1 = r0.frameSize
            r14.sampleSize = r1
            r1 = 1000000(0xf4240, double:4.940656E-318)
            int r0 = r0.sampleCount
            long r3 = (long) r0
            long r3 = r3 * r1
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r14.format
            int r0 = r0.sampleRate
            long r0 = (long) r0
            long r3 = r3 / r0
            r14.sampleDurationUs = r3
            return
    }

    private boolean skipToNextSync(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6) {
            r5 = this;
        L0:
            int r0 = r6.bytesLeft()
            r1 = 0
            if (r0 <= 0) goto L29
            boolean r0 = r5.lastByteWas0B
            r2 = 11
            r3 = 1
            if (r0 != 0) goto L18
            int r0 = r6.readUnsignedByte()
            if (r0 != r2) goto L15
            r1 = r3
        L15:
            r5.lastByteWas0B = r1
            goto L0
        L18:
            int r0 = r6.readUnsignedByte()
            r4 = 119(0x77, float:1.67E-43)
            if (r0 != r4) goto L23
            r5.lastByteWas0B = r1
            return r3
        L23:
            if (r0 != r2) goto L26
            r1 = r3
        L26:
            r5.lastByteWas0B = r1
            goto L0
        L29:
            return r1
    }

    @Override
    public final void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11) {
            r10 = this;
        L0:
            int r0 = r11.bytesLeft()
            if (r0 <= 0) goto L7a
            int r0 = r10.state
            r1 = 0
            r2 = 2
            r3 = 1
            if (r0 == 0) goto L5f
            if (r0 == r3) goto L41
            if (r0 == r2) goto L12
            goto L0
        L12:
            int r0 = r11.bytesLeft()
            int r2 = r10.sampleSize
            int r3 = r10.bytesRead
            int r2 = r2 - r3
            int r0 = java.lang.Math.min(r0, r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r2 = r10.output
            r2.sampleData(r11, r0)
            int r2 = r10.bytesRead
            int r2 = r2 + r0
            r10.bytesRead = r2
            int r7 = r10.sampleSize
            if (r2 != r7) goto L0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r10.output
            long r4 = r10.timeUs
            r6 = 1
            r8 = 0
            r9 = 0
            r3.sampleMetadata(r4, r6, r7, r8, r9)
            long r2 = r10.timeUs
            long r4 = r10.sampleDurationUs
            long r2 = r2 + r4
            r10.timeUs = r2
            r10.state = r1
            goto L0
        L41:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r10.headerScratchBytes
            byte[] r0 = r0.data
            r3 = 128(0x80, float:1.8E-43)
            boolean r0 = r10.continueRead(r11, r0, r3)
            if (r0 == 0) goto L0
            r10.parseHeader()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r10.headerScratchBytes
            r0.setPosition(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r10.output
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r10.headerScratchBytes
            r0.sampleData(r1, r3)
            r10.state = r2
            goto L0
        L5f:
            boolean r0 = r10.skipToNextSync(r11)
            if (r0 == 0) goto L0
            r10.state = r3
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r10.headerScratchBytes
            byte[] r0 = r0.data
            r4 = 11
            r0[r1] = r4
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r10.headerScratchBytes
            byte[] r0 = r0.data
            r1 = 119(0x77, float:1.67E-43)
            r0[r3] = r1
            r10.bytesRead = r2
            goto L0
        L7a:
            return
    }

    @Override
    public final void createTracks(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r3) {
            r1 = this;
            r3.generateNewId()
            java.lang.String r0 = r3.getFormatId()
            r1.trackFormatId = r0
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
            r1.lastByteWas0B = r0
            return
    }
}
