package com.mbridge.msdk.playercommon.exoplayer2.extractor;

public final class MpegAudioHeader {
    private static final int[] BITRATE_V1_L1 = null;
    private static final int[] BITRATE_V1_L2 = null;
    private static final int[] BITRATE_V1_L3 = null;
    private static final int[] BITRATE_V2 = null;
    private static final int[] BITRATE_V2_L1 = null;
    public static final int MAX_FRAME_SIZE_BYTES = 4096;
    private static final java.lang.String[] MIME_TYPE_BY_LAYER = null;
    private static final int[] SAMPLING_RATE_V1 = null;
    public int bitrate;
    public int channels;
    public int frameSize;
    public java.lang.String mimeType;
    public int sampleRate;
    public int samplesPerFrame;
    public int version;

    static {
            java.lang.String r0 = "audio/mpeg-L1"
            java.lang.String r1 = "audio/mpeg-L2"
            java.lang.String r2 = "audio/mpeg"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.MIME_TYPE_BY_LAYER = r0
            r0 = 3
            int[] r0 = new int[r0]
            r0 = {x003a: FILL_ARRAY_DATA , data: [44100, 48000, 32000} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.SAMPLING_RATE_V1 = r0
            r0 = 14
            int[] r1 = new int[r0]
            r1 = {x0044: FILL_ARRAY_DATA , data: [32, 64, 96, 128, 160, 192, 224, 256, 288, 320, 352, 384, 416, 448} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.BITRATE_V1_L1 = r1
            int[] r1 = new int[r0]
            r1 = {x0064: FILL_ARRAY_DATA , data: [32, 48, 56, 64, 80, 96, 112, 128, 144, 160, 176, 192, 224, 256} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.BITRATE_V2_L1 = r1
            int[] r1 = new int[r0]
            r1 = {x0084: FILL_ARRAY_DATA , data: [32, 48, 56, 64, 80, 96, 112, 128, 160, 192, 224, 256, 320, 384} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.BITRATE_V1_L2 = r1
            int[] r1 = new int[r0]
            r1 = {x00a4: FILL_ARRAY_DATA , data: [32, 40, 48, 56, 64, 80, 96, 112, 128, 160, 192, 224, 256, 320} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.BITRATE_V1_L3 = r1
            int[] r0 = new int[r0]
            r0 = {x00c4: FILL_ARRAY_DATA , data: [8, 16, 24, 32, 40, 48, 56, 64, 80, 96, 112, 128, 144, 160} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.BITRATE_V2 = r0
            return
    }

    public MpegAudioHeader() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getFrameSize(int r7) {
            r0 = -2097152(0xffffffffffe00000, float:NaN)
            r1 = r7 & r0
            r2 = -1
            if (r1 == r0) goto L8
            return r2
        L8:
            int r0 = r7 >>> 19
            r1 = 3
            r0 = r0 & r1
            r3 = 1
            if (r0 != r3) goto L10
            return r2
        L10:
            int r4 = r7 >>> 17
            r4 = r4 & r1
            if (r4 != 0) goto L16
            return r2
        L16:
            int r5 = r7 >>> 12
            r6 = 15
            r5 = r5 & r6
            if (r5 == 0) goto L74
            if (r5 != r6) goto L20
            goto L74
        L20:
            int r6 = r7 >>> 10
            r6 = r6 & r1
            if (r6 != r1) goto L26
            return r2
        L26:
            int[] r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.SAMPLING_RATE_V1
            r2 = r2[r6]
            r6 = 2
            if (r0 != r6) goto L30
            int r2 = r2 / 2
            goto L34
        L30:
            if (r0 != 0) goto L34
            int r2 = r2 / 4
        L34:
            int r7 = r7 >>> 9
            r7 = r7 & r3
            if (r4 != r1) goto L4d
            if (r0 != r1) goto L41
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.BITRATE_V1_L1
            int r5 = r5 - r3
            r0 = r0[r5]
            goto L46
        L41:
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.BITRATE_V2_L1
            int r5 = r5 - r3
            r0 = r0[r5]
        L46:
            int r0 = r0 * 12000
            int r0 = r0 / r2
            int r0 = r0 + r7
            int r0 = r0 * 4
            return r0
        L4d:
            if (r0 != r1) goto L5d
            if (r4 != r6) goto L57
            int[] r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.BITRATE_V1_L2
            int r5 = r5 - r3
            r5 = r6[r5]
            goto L62
        L57:
            int[] r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.BITRATE_V1_L3
            int r5 = r5 - r3
            r5 = r6[r5]
            goto L62
        L5d:
            int[] r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.BITRATE_V2
            int r5 = r5 - r3
            r5 = r6[r5]
        L62:
            r6 = 144000(0x23280, float:2.01787E-40)
            if (r0 != r1) goto L6b
            int r5 = r5 * r6
            int r5 = r5 / r2
            int r5 = r5 + r7
            return r5
        L6b:
            if (r4 != r3) goto L70
            r6 = 72000(0x11940, float:1.00893E-40)
        L70:
            int r6 = r6 * r5
            int r6 = r6 / r2
            int r6 = r6 + r7
            return r6
        L74:
            return r2
    }

    public static boolean populateHeader(int r11, com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r12) {
            r0 = -2097152(0xffffffffffe00000, float:NaN)
            r1 = r11 & r0
            r2 = 0
            if (r1 == r0) goto L8
            return r2
        L8:
            int r0 = r11 >>> 19
            r1 = 3
            r4 = r0 & 3
            r0 = 1
            if (r4 != r0) goto L11
            return r2
        L11:
            int r3 = r11 >>> 17
            r3 = r3 & r1
            if (r3 != 0) goto L17
            return r2
        L17:
            int r5 = r11 >>> 12
            r6 = 15
            r5 = r5 & r6
            if (r5 == 0) goto L94
            if (r5 != r6) goto L22
            goto L94
        L22:
            int r6 = r11 >>> 10
            r6 = r6 & r1
            if (r6 != r1) goto L28
            return r2
        L28:
            int[] r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.SAMPLING_RATE_V1
            r2 = r2[r6]
            r6 = 2
            if (r4 != r6) goto L32
            int r2 = r2 / 2
            goto L36
        L32:
            if (r4 != 0) goto L36
            int r2 = r2 / 4
        L36:
            r7 = r2
            int r2 = r11 >>> 9
            r2 = r2 & r0
            if (r3 != r1) goto L53
            if (r4 != r1) goto L44
            int[] r8 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.BITRATE_V1_L1
            int r5 = r5 - r0
            r5 = r8[r5]
            goto L49
        L44:
            int[] r8 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.BITRATE_V2_L1
            int r5 = r5 - r0
            r5 = r8[r5]
        L49:
            int r8 = r5 * 12000
            int r8 = r8 / r7
            int r8 = r8 + r2
            int r8 = r8 * 4
            r2 = 384(0x180, float:5.38E-43)
            r10 = r2
            goto L7c
        L53:
            r8 = 1152(0x480, float:1.614E-42)
            if (r4 != r1) goto L65
            if (r3 != r6) goto L5f
            int[] r9 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.BITRATE_V1_L2
            int r5 = r5 - r0
            r5 = r9[r5]
            goto L74
        L5f:
            int[] r9 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.BITRATE_V1_L3
            int r5 = r5 - r0
            r5 = r9[r5]
            goto L74
        L65:
            int[] r9 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.BITRATE_V2
            int r5 = r5 - r0
            r5 = r9[r5]
            if (r3 != r0) goto L6e
            r8 = 576(0x240, float:8.07E-43)
        L6e:
            if (r3 != r0) goto L74
            r9 = 72000(0x11940, float:1.00893E-40)
            goto L77
        L74:
            r9 = 144000(0x23280, float:2.01787E-40)
        L77:
            int r9 = r9 * r5
            int r9 = r9 / r7
            int r9 = r9 + r2
            r10 = r8
            r8 = r9
        L7c:
            java.lang.String[] r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.MIME_TYPE_BY_LAYER
            int r3 = 3 - r3
            r2 = r2[r3]
            int r11 = r11 >> 6
            r11 = r11 & r1
            if (r11 != r1) goto L89
            r11 = r0
            goto L8a
        L89:
            r11 = r6
        L8a:
            int r9 = r5 * 1000
            r3 = r12
            r5 = r2
            r6 = r8
            r8 = r11
            r3.setValues(r4, r5, r6, r7, r8, r9, r10)
            return r0
        L94:
            return r2
    }

    private void setValues(int r1, java.lang.String r2, int r3, int r4, int r5, int r6, int r7) {
            r0 = this;
            r0.version = r1
            r0.mimeType = r2
            r0.frameSize = r3
            r0.sampleRate = r4
            r0.channels = r5
            r0.bitrate = r6
            r0.samplesPerFrame = r7
            return
    }
}
