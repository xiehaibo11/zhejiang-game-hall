package com.mbridge.msdk.playercommon.exoplayer2.extractor.flv;

final class VideoTagPayloadReader extends com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.TagPayloadReader {
    private static final int AVC_PACKET_TYPE_AVC_NALU = 1;
    private static final int AVC_PACKET_TYPE_SEQUENCE_HEADER = 0;
    private static final int VIDEO_CODEC_AVC = 7;
    private static final int VIDEO_FRAME_KEYFRAME = 1;
    private static final int VIDEO_FRAME_VIDEO_INFO = 5;
    private int frameType;
    private boolean hasOutputFormat;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray nalLength;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray nalStartCode;
    private int nalUnitLengthFieldLength;

    public VideoTagPayloadReader(com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r2) {
            r1 = this;
            r1.<init>(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.NAL_START_CODE
            r2.<init>(r0)
            r1.nalStartCode = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0 = 4
            r2.<init>(r0)
            r1.nalLength = r2
            return
    }

    @Override
    protected final boolean parseHeader(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4) throws com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.TagPayloadReader.UnsupportedFormatException {
            r3 = this;
            int r4 = r4.readUnsignedByte()
            int r0 = r4 >> 4
            r0 = r0 & 15
            r4 = r4 & 15
            r1 = 7
            if (r4 != r1) goto L16
            r3.frameType = r0
            r4 = 5
            if (r0 == r4) goto L14
            r4 = 1
            goto L15
        L14:
            r4 = 0
        L15:
            return r4
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.TagPayloadReader$UnsupportedFormatException r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.TagPayloadReader$UnsupportedFormatException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Video format not supported: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    protected final void parsePayload(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r13, long r14) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r12 = this;
            int r0 = r13.readUnsignedByte()
            int r1 = r13.readInt24()
            long r1 = (long) r1
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 * r3
            long r4 = r14 + r1
            r14 = 1
            r15 = 0
            if (r0 != 0) goto L50
            boolean r1 = r12.hasOutputFormat
            if (r1 != 0) goto L50
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            int r1 = r13.bytesLeft()
            byte[] r1 = new byte[r1]
            r0.<init>(r1)
            byte[] r1 = r0.data
            int r2 = r13.bytesLeft()
            r13.readBytes(r1, r15, r2)
            com.mbridge.msdk.playercommon.exoplayer2.video.AvcConfig r13 = com.mbridge.msdk.playercommon.exoplayer2.video.AvcConfig.parse(r0)
            int r15 = r13.nalUnitLengthFieldLength
            r12.nalUnitLengthFieldLength = r15
            r0 = 0
            r2 = 0
            r3 = -1
            r4 = -1
            int r5 = r13.width
            int r6 = r13.height
            r7 = -1082130432(0xffffffffbf800000, float:-1.0)
            java.util.List<byte[]> r8 = r13.initializationData
            r9 = -1
            float r10 = r13.pixelWidthAspectRatio
            r11 = 0
            java.lang.String r1 = "video/avc"
            com.mbridge.msdk.playercommon.exoplayer2.Format r13 = com.mbridge.msdk.playercommon.exoplayer2.Format.createVideoSampleFormat(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r15 = r12.output
            r15.format(r13)
            r12.hasOutputFormat = r14
            goto La4
        L50:
            if (r0 != r14) goto La4
            boolean r0 = r12.hasOutputFormat
            if (r0 == 0) goto La4
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r12.nalLength
            byte[] r0 = r0.data
            r0[r15] = r15
            r0[r14] = r15
            r1 = 2
            r0[r1] = r15
            int r0 = r12.nalUnitLengthFieldLength
            r1 = 4
            int r0 = 4 - r0
            r7 = r15
        L67:
            int r2 = r13.bytesLeft()
            if (r2 <= 0) goto L96
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r12.nalLength
            byte[] r2 = r2.data
            int r3 = r12.nalUnitLengthFieldLength
            r13.readBytes(r2, r0, r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r12.nalLength
            r2.setPosition(r15)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r12.nalLength
            int r2 = r2.readUnsignedIntToInt()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r12.nalStartCode
            r3.setPosition(r15)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r12.output
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r12.nalStartCode
            r3.sampleData(r6, r1)
            int r7 = r7 + 4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r12.output
            r3.sampleData(r13, r2)
            int r7 = r7 + r2
            goto L67
        L96:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r12.output
            int r13 = r12.frameType
            if (r13 != r14) goto L9e
            r6 = r14
            goto L9f
        L9e:
            r6 = r15
        L9f:
            r8 = 0
            r9 = 0
            r3.sampleMetadata(r4, r6, r7, r8, r9)
        La4:
            return
    }

    @Override
    public final void seek() {
            r0 = this;
            return
    }
}
