package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class LatmReader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader {
    private static final int INITIAL_BUFFER_SIZE = 1024;
    private static final int STATE_FINDING_SYNC_1 = 0;
    private static final int STATE_FINDING_SYNC_2 = 1;
    private static final int STATE_READING_HEADER = 2;
    private static final int STATE_READING_SAMPLE = 3;
    private static final int SYNC_BYTE_FIRST = 86;
    private static final int SYNC_BYTE_SECOND = 224;
    private int audioMuxVersionA;
    private int bytesRead;
    private int channelCount;
    private com.mbridge.msdk.playercommon.exoplayer2.Format format;
    private java.lang.String formatId;
    private int frameLengthType;
    private final java.lang.String language;
    private int numSubframes;
    private long otherDataLenBits;
    private boolean otherDataPresent;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput output;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray sampleBitArray;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray sampleDataBuffer;
    private long sampleDurationUs;
    private int sampleRateHz;
    private int sampleSize;
    private int secondHeaderByte;
    private int state;
    private boolean streamMuxRead;
    private long timeUs;

    public LatmReader(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r1.language = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0 = 1024(0x400, float:1.435E-42)
            r2.<init>(r0)
            r1.sampleDataBuffer = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray
            byte[] r2 = r2.data
            r0.<init>(r2)
            r1.sampleBitArray = r0
            return
    }

    private static long latmGetValue(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2) {
            r0 = 2
            int r0 = r2.readBits(r0)
            int r0 = r0 + 1
            int r0 = r0 * 8
            int r2 = r2.readBits(r0)
            long r0 = (long) r2
            return r0
    }

    private void parseAudioMuxElement(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r3) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r2 = this;
            boolean r0 = r3.readBit()
            if (r0 != 0) goto Ld
            r0 = 1
            r2.streamMuxRead = r0
            r2.parseStreamMuxConfig(r3)
            goto L12
        Ld:
            boolean r0 = r2.streamMuxRead
            if (r0 != 0) goto L12
            return
        L12:
            int r0 = r2.audioMuxVersionA
            if (r0 != 0) goto L32
            int r0 = r2.numSubframes
            if (r0 != 0) goto L2c
            int r0 = r2.parsePayloadLengthInfo(r3)
            r2.parsePayloadMux(r3, r0)
            boolean r0 = r2.otherDataPresent
            if (r0 == 0) goto L2b
            long r0 = r2.otherDataLenBits
            int r0 = (int) r0
            r3.skipBits(r0)
        L2b:
            return
        L2c:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r3 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            r3.<init>()
            throw r3
        L32:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r3 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            r3.<init>()
            throw r3
    }

    private int parseAudioSpecificConfig(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r3 = this;
            int r0 = r4.bitsLeft()
            r1 = 1
            android.util.Pair r1 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.parseAacAudioSpecificConfig(r4, r1)
            java.lang.Object r2 = r1.first
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            r3.sampleRateHz = r2
            java.lang.Object r1 = r1.second
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            r3.channelCount = r1
            int r4 = r4.bitsLeft()
            int r0 = r0 - r4
            return r0
    }

    private void parseFrameLength(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5) {
            r4 = this;
            r0 = 3
            int r1 = r5.readBits(r0)
            r4.frameLengthType = r1
            if (r1 == 0) goto L29
            r2 = 1
            if (r1 == r2) goto L23
            r3 = 6
            if (r1 == r0) goto L1f
            r0 = 4
            if (r1 == r0) goto L1f
            r0 = 5
            if (r1 == r0) goto L1f
            if (r1 == r3) goto L1b
            r0 = 7
            if (r1 == r0) goto L1b
            goto L2e
        L1b:
            r5.skipBits(r2)
            goto L2e
        L1f:
            r5.skipBits(r3)
            goto L2e
        L23:
            r0 = 9
            r5.skipBits(r0)
            goto L2e
        L29:
            r0 = 8
            r5.skipBits(r0)
        L2e:
            return
    }

    private int parsePayloadLengthInfo(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r3 = this;
            int r0 = r3.frameLengthType
            if (r0 != 0) goto L11
            r0 = 0
        L5:
            r1 = 8
            int r1 = r4.readBits(r1)
            int r0 = r0 + r1
            r2 = 255(0xff, float:3.57E-43)
            if (r1 == r2) goto L5
            return r0
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r4 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            r4.<init>()
            throw r4
    }

    private void parsePayloadMux(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r9, int r10) {
            r8 = this;
            int r0 = r9.getPosition()
            r1 = r0 & 7
            if (r1 != 0) goto L10
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9 = r8.sampleDataBuffer
            int r0 = r0 >> 3
            r9.setPosition(r0)
            goto L1f
        L10:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.sampleDataBuffer
            byte[] r0 = r0.data
            int r1 = r10 * 8
            r2 = 0
            r9.readBits(r0, r2, r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9 = r8.sampleDataBuffer
            r9.setPosition(r2)
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r9 = r8.output
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.sampleDataBuffer
            r9.sampleData(r0, r10)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r8.output
            long r2 = r8.timeUs
            r4 = 1
            r6 = 0
            r7 = 0
            r5 = r10
            r1.sampleMetadata(r2, r4, r5, r6, r7)
            long r9 = r8.timeUs
            long r0 = r8.sampleDurationUs
            long r9 = r9 + r0
            r8.timeUs = r9
            return
    }

    private void parseStreamMuxConfig(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r20) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r19 = this;
            r0 = r19
            r1 = r20
            r2 = 1
            int r3 = r1.readBits(r2)
            r4 = 0
            if (r3 != r2) goto L11
            int r5 = r1.readBits(r2)
            goto L12
        L11:
            r5 = r4
        L12:
            r0.audioMuxVersionA = r5
            if (r5 != 0) goto Lcd
            if (r3 != r2) goto L1b
            latmGetValue(r20)
        L1b:
            boolean r5 = r20.readBit()
            if (r5 == 0) goto Lc7
            r5 = 6
            int r5 = r1.readBits(r5)
            r0.numSubframes = r5
            r5 = 4
            int r5 = r1.readBits(r5)
            r6 = 3
            int r6 = r1.readBits(r6)
            if (r5 != 0) goto Lc1
            if (r6 != 0) goto Lc1
            r5 = 8
            if (r3 != 0) goto L81
            int r6 = r20.getPosition()
            int r7 = r19.parseAudioSpecificConfig(r20)
            r1.setPosition(r6)
            int r6 = r7 + 7
            int r6 = r6 / r5
            byte[] r6 = new byte[r6]
            r1.readBits(r6, r4, r7)
            java.lang.String r8 = r0.formatId
            r10 = 0
            r11 = -1
            r12 = -1
            int r13 = r0.channelCount
            int r14 = r0.sampleRateHz
            java.util.List r15 = java.util.Collections.singletonList(r6)
            r16 = 0
            r17 = 0
            java.lang.String r4 = r0.language
            java.lang.String r9 = "audio/mp4a-latm"
            r18 = r4
            com.mbridge.msdk.playercommon.exoplayer2.Format r4 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18)
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r0.format
            boolean r6 = r4.equals(r6)
            if (r6 != 0) goto L8e
            r0.format = r4
            r6 = 1024000000(0x3d090000, double:5.059232213E-315)
            int r8 = r4.sampleRate
            long r8 = (long) r8
            long r6 = r6 / r8
            r0.sampleDurationUs = r6
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r6 = r0.output
            r6.format(r4)
            goto L8e
        L81:
            long r6 = latmGetValue(r20)
            int r4 = (int) r6
            int r6 = r19.parseAudioSpecificConfig(r20)
            int r4 = r4 - r6
            r1.skipBits(r4)
        L8e:
            r19.parseFrameLength(r20)
            boolean r4 = r20.readBit()
            r0.otherDataPresent = r4
            r6 = 0
            r0.otherDataLenBits = r6
            if (r4 == 0) goto Lb7
            if (r3 != r2) goto La6
            long r2 = latmGetValue(r20)
            r0.otherDataLenBits = r2
            goto Lb7
        La6:
            boolean r2 = r20.readBit()
            long r3 = r0.otherDataLenBits
            long r3 = r3 << r5
            int r6 = r1.readBits(r5)
            long r6 = (long) r6
            long r3 = r3 + r6
            r0.otherDataLenBits = r3
            if (r2 != 0) goto La6
        Lb7:
            boolean r2 = r20.readBit()
            if (r2 == 0) goto Lc0
            r1.skipBits(r5)
        Lc0:
            return
        Lc1:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r1 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            r1.<init>()
            throw r1
        Lc7:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r1 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            r1.<init>()
            throw r1
        Lcd:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r1 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            r1.<init>()
            throw r1
    }

    private void resetBufferForSize(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r1.sampleDataBuffer
            r0.reset(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r1.sampleBitArray
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r1.sampleDataBuffer
            byte[] r0 = r0.data
            r2.reset(r0)
            return
    }

    @Override
    public final void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r6 = this;
        L0:
            int r0 = r7.bytesLeft()
            if (r0 <= 0) goto L7e
            int r0 = r6.state
            r1 = 86
            r2 = 1
            if (r0 == 0) goto L75
            r3 = 2
            r4 = 0
            if (r0 == r2) goto L61
            r1 = 3
            if (r0 == r3) goto L43
            if (r0 == r1) goto L17
            goto L0
        L17:
            int r0 = r7.bytesLeft()
            int r1 = r6.sampleSize
            int r2 = r6.bytesRead
            int r1 = r1 - r2
            int r0 = java.lang.Math.min(r0, r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r1 = r6.sampleBitArray
            byte[] r1 = r1.data
            int r2 = r6.bytesRead
            r7.readBytes(r1, r2, r0)
            int r1 = r6.bytesRead
            int r1 = r1 + r0
            r6.bytesRead = r1
            int r0 = r6.sampleSize
            if (r1 != r0) goto L0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r6.sampleBitArray
            r0.setPosition(r4)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r6.sampleBitArray
            r6.parseAudioMuxElement(r0)
            r6.state = r4
            goto L0
        L43:
            int r0 = r6.secondHeaderByte
            r0 = r0 & (-225(0xffffffffffffff1f, float:NaN))
            int r0 = r0 << 8
            int r2 = r7.readUnsignedByte()
            r0 = r0 | r2
            r6.sampleSize = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r6.sampleDataBuffer
            byte[] r2 = r2.data
            int r2 = r2.length
            if (r0 <= r2) goto L5c
            int r0 = r6.sampleSize
            r6.resetBufferForSize(r0)
        L5c:
            r6.bytesRead = r4
            r6.state = r1
            goto L0
        L61:
            int r0 = r7.readUnsignedByte()
            r2 = r0 & 224(0xe0, float:3.14E-43)
            r5 = 224(0xe0, float:3.14E-43)
            if (r2 != r5) goto L70
            r6.secondHeaderByte = r0
            r6.state = r3
            goto L0
        L70:
            if (r0 == r1) goto L0
            r6.state = r4
            goto L0
        L75:
            int r0 = r7.readUnsignedByte()
            if (r0 != r1) goto L0
            r6.state = r2
            goto L0
        L7e:
            return
    }

    @Override
    public final void createTracks(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r3, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r4) {
            r2 = this;
            r4.generateNewId()
            int r0 = r4.getTrackId()
            r1 = 1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r3.track(r0, r1)
            r2.output = r3
            java.lang.String r3 = r4.getFormatId()
            r2.formatId = r3
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
            r1.streamMuxRead = r0
            return
    }
}
