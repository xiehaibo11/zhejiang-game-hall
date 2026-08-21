package com.mbridge.msdk.playercommon.exoplayer2.extractor.flv;

final class AudioTagPayloadReader extends com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.TagPayloadReader {
    private static final int AAC_PACKET_TYPE_AAC_RAW = 1;
    private static final int AAC_PACKET_TYPE_SEQUENCE_HEADER = 0;
    private static final int AUDIO_FORMAT_AAC = 10;
    private static final int AUDIO_FORMAT_ALAW = 7;
    private static final int AUDIO_FORMAT_MP3 = 2;
    private static final int AUDIO_FORMAT_ULAW = 8;
    private static final int[] AUDIO_SAMPLING_RATE_TABLE = null;
    private int audioFormat;
    private boolean hasOutputFormat;
    private boolean hasParsedAudioDataHeader;

    static {
            r0 = 4
            int[] r0 = new int[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [5512, 11025, 22050, 44100} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.AudioTagPayloadReader.AUDIO_SAMPLING_RATE_TABLE = r0
            return
    }

    public AudioTagPayloadReader(com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    protected final boolean parseHeader(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r19) throws com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.TagPayloadReader.UnsupportedFormatException {
            r18 = this;
            r0 = r18
            boolean r1 = r0.hasParsedAudioDataHeader
            r2 = 1
            if (r1 != 0) goto L83
            int r1 = r19.readUnsignedByte()
            int r3 = r1 >> 4
            r3 = r3 & 15
            r0.audioFormat = r3
            r4 = 3
            r5 = 2
            if (r3 != r5) goto L32
            int r1 = r1 >> r5
            r1 = r1 & r4
            int[] r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.AudioTagPayloadReader.AUDIO_SAMPLING_RATE_TABLE
            r10 = r3[r1]
            r4 = 0
            r6 = 0
            r7 = -1
            r8 = -1
            r9 = 1
            r11 = 0
            r12 = 0
            r13 = 0
            r14 = 0
            java.lang.String r5 = "audio/mpeg"
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r0.output
            r3.format(r1)
            r0.hasOutputFormat = r2
            goto L80
        L32:
            r6 = 7
            if (r3 == r6) goto L58
            r7 = 8
            if (r3 != r7) goto L3a
            goto L58
        L3a:
            r1 = 10
            if (r3 != r1) goto L3f
            goto L80
        L3f:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.TagPayloadReader$UnsupportedFormatException r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.TagPayloadReader$UnsupportedFormatException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Audio format not supported: "
            r2.append(r3)
            int r3 = r0.audioFormat
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L58:
            int r3 = r0.audioFormat
            if (r3 != r6) goto L5f
            java.lang.String r3 = "audio/g711-alaw"
            goto L61
        L5f:
            java.lang.String r3 = "audio/g711-mlaw"
        L61:
            r7 = r3
            r1 = r1 & r2
            if (r1 != r2) goto L67
            r13 = r5
            goto L68
        L67:
            r13 = r4
        L68:
            r6 = 0
            r8 = 0
            r9 = -1
            r10 = -1
            r11 = 1
            r12 = 8000(0x1f40, float:1.121E-41)
            r14 = 0
            r15 = 0
            r16 = 0
            r17 = 0
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r0.output
            r3.format(r1)
            r0.hasOutputFormat = r2
        L80:
            r0.hasParsedAudioDataHeader = r2
            goto L88
        L83:
            r1 = r19
            r1.skipBytes(r2)
        L88:
            return r2
    }

    @Override
    protected final void parsePayload(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r17, long r18) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r16 = this;
            r0 = r16
            r1 = r17
            int r2 = r0.audioFormat
            r3 = 2
            if (r2 != r3) goto L1d
            int r8 = r17.bytesLeft()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r2 = r0.output
            r2.sampleData(r1, r8)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r4 = r0.output
            r7 = 1
            r9 = 0
            r10 = 0
            r5 = r18
            r4.sampleMetadata(r5, r7, r8, r9, r10)
            goto L7a
        L1d:
            int r2 = r17.readUnsignedByte()
            r3 = 1
            if (r2 != 0) goto L5f
            boolean r4 = r0.hasOutputFormat
            if (r4 != 0) goto L5f
            int r2 = r17.bytesLeft()
            byte[] r4 = new byte[r2]
            r5 = 0
            r1.readBytes(r4, r5, r2)
            android.util.Pair r1 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.parseAacAudioSpecificConfig(r4)
            r5 = 0
            r7 = 0
            r8 = -1
            r9 = -1
            java.lang.Object r2 = r1.second
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r10 = r2.intValue()
            java.lang.Object r1 = r1.first
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r11 = r1.intValue()
            java.util.List r12 = java.util.Collections.singletonList(r4)
            r13 = 0
            r14 = 0
            r15 = 0
            java.lang.String r6 = "audio/mp4a-latm"
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r2 = r0.output
            r2.format(r1)
            r0.hasOutputFormat = r3
            goto L7a
        L5f:
            int r4 = r0.audioFormat
            r5 = 10
            if (r4 != r5) goto L67
            if (r2 != r3) goto L7a
        L67:
            int r10 = r17.bytesLeft()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r2 = r0.output
            r2.sampleData(r1, r10)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r6 = r0.output
            r9 = 1
            r11 = 0
            r12 = 0
            r7 = r18
            r6.sampleMetadata(r7, r9, r10, r11, r12)
        L7a:
            return
    }

    @Override
    public final void seek() {
            r0 = this;
            return
    }
}
