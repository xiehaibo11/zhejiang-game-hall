package com.mbridge.msdk.playercommon.exoplayer2.util;

public final class CodecSpecificDataUtil {
    private static final int AUDIO_OBJECT_TYPE_AAC_LC = 2;
    private static final int AUDIO_OBJECT_TYPE_ER_BSAC = 22;
    private static final int AUDIO_OBJECT_TYPE_ESCAPE = 31;
    private static final int AUDIO_OBJECT_TYPE_PS = 29;
    private static final int AUDIO_OBJECT_TYPE_SBR = 5;
    private static final int AUDIO_SPECIFIC_CONFIG_CHANNEL_CONFIGURATION_INVALID = -1;
    private static final int[] AUDIO_SPECIFIC_CONFIG_CHANNEL_COUNT_TABLE = null;
    private static final int AUDIO_SPECIFIC_CONFIG_FREQUENCY_INDEX_ARBITRARY = 15;
    private static final int[] AUDIO_SPECIFIC_CONFIG_SAMPLING_RATE_TABLE = null;
    private static final byte[] NAL_START_CODE = null;

    static {
            r0 = 4
            byte[] r0 = new byte[r0]
            r0 = {x001c: FILL_ARRAY_DATA , data: [0, 0, 0, 1} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.NAL_START_CODE = r0
            r0 = 13
            int[] r0 = new int[r0]
            r0 = {x0022: FILL_ARRAY_DATA , data: [96000, 88200, 64000, 48000, 44100, 32000, 24000, 22050, 16000, 12000, 11025, 8000, 7350} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.AUDIO_SPECIFIC_CONFIG_SAMPLING_RATE_TABLE = r0
            r0 = 16
            int[] r0 = new int[r0]
            r0 = {x0040: FILL_ARRAY_DATA , data: [0, 1, 2, 3, 4, 5, 6, 8, -1, -1, -1, 7, 8, -1, 8, -1} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.AUDIO_SPECIFIC_CONFIG_CHANNEL_COUNT_TABLE = r0
            return
    }

    private CodecSpecificDataUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] buildAacAudioSpecificConfig(int r2, int r3, int r4) {
            r0 = 2
            byte[] r0 = new byte[r0]
            int r2 = r2 << 3
            r2 = r2 & 248(0xf8, float:3.48E-43)
            int r1 = r3 >> 1
            r1 = r1 & 7
            r2 = r2 | r1
            byte r2 = (byte) r2
            r1 = 0
            r0[r1] = r2
            int r2 = r3 << 7
            r2 = r2 & 128(0x80, float:1.8E-43)
            int r3 = r4 << 3
            r3 = r3 & 120(0x78, float:1.68E-43)
            r2 = r2 | r3
            byte r2 = (byte) r2
            r3 = 1
            r0[r3] = r2
            return r0
    }

    public static byte[] buildAacLcAudioSpecificConfig(int r6, int r7) {
            r0 = 0
            r1 = -1
            r2 = r0
            r3 = r1
        L4:
            int[] r4 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.AUDIO_SPECIFIC_CONFIG_SAMPLING_RATE_TABLE
            int r5 = r4.length
            if (r2 >= r5) goto L11
            r4 = r4[r2]
            if (r6 != r4) goto Le
            r3 = r2
        Le:
            int r2 = r2 + 1
            goto L4
        L11:
            r2 = r1
        L12:
            int[] r4 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.AUDIO_SPECIFIC_CONFIG_CHANNEL_COUNT_TABLE
            int r5 = r4.length
            if (r0 >= r5) goto L1f
            r4 = r4[r0]
            if (r7 != r4) goto L1c
            r2 = r0
        L1c:
            int r0 = r0 + 1
            goto L12
        L1f:
            if (r6 == r1) goto L29
            if (r2 == r1) goto L29
            r6 = 2
            byte[] r6 = buildAacAudioSpecificConfig(r6, r3, r2)
            return r6
        L29:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid sample rate or number of channels: "
            r1.append(r2)
            r1.append(r6)
            java.lang.String r6 = ", "
            r1.append(r6)
            r1.append(r7)
            java.lang.String r6 = r1.toString()
            r0.<init>(r6)
            throw r0
    }

    public static byte[] buildNalUnit(byte[] r4, int r5, int r6) {
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.NAL_START_CODE
            int r1 = r0.length
            int r1 = r1 + r6
            byte[] r1 = new byte[r1]
            int r2 = r0.length
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.NAL_START_CODE
            int r0 = r0.length
            java.lang.System.arraycopy(r4, r5, r1, r0, r6)
            return r1
    }

    private static int findNalStartCode(byte[] r2, int r3) {
            int r0 = r2.length
            byte[] r1 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.NAL_START_CODE
            int r1 = r1.length
            int r0 = r0 - r1
        L5:
            if (r3 > r0) goto L11
            boolean r1 = isNalStartCode(r2, r3)
            if (r1 == 0) goto Le
            return r3
        Le:
            int r3 = r3 + 1
            goto L5
        L11:
            r2 = -1
            return r2
    }

    private static int getAacAudioObjectType(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2) {
            r0 = 5
            int r0 = r2.readBits(r0)
            r1 = 31
            if (r0 != r1) goto L10
            r0 = 6
            int r2 = r2.readBits(r0)
            int r0 = r2 + 32
        L10:
            return r0
    }

    private static int getAacSamplingFrequency(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2) {
            r0 = 4
            int r0 = r2.readBits(r0)
            r1 = 15
            if (r0 != r1) goto L10
            r0 = 24
            int r2 = r2.readBits(r0)
            goto L1e
        L10:
            r2 = 13
            if (r0 >= r2) goto L16
            r2 = 1
            goto L17
        L16:
            r2 = 0
        L17:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r2)
            int[] r2 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.AUDIO_SPECIFIC_CONFIG_SAMPLING_RATE_TABLE
            r2 = r2[r0]
        L1e:
            return r2
    }

    private static boolean isNalStartCode(byte[] r4, int r5) {
            int r0 = r4.length
            int r0 = r0 - r5
            byte[] r1 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.NAL_START_CODE
            int r1 = r1.length
            r2 = 0
            if (r0 > r1) goto L9
            return r2
        L9:
            r0 = r2
        La:
            byte[] r1 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.NAL_START_CODE
            int r3 = r1.length
            if (r0 >= r3) goto L1b
            int r3 = r5 + r0
            r3 = r4[r3]
            r1 = r1[r0]
            if (r3 == r1) goto L18
            return r2
        L18:
            int r0 = r0 + 1
            goto La
        L1b:
            r4 = 1
            return r4
    }

    public static android.util.Pair<java.lang.Integer, java.lang.Integer> parseAacAudioSpecificConfig(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r6, boolean r7) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            int r0 = getAacAudioObjectType(r6)
            int r1 = getAacSamplingFrequency(r6)
            r2 = 4
            int r3 = r6.readBits(r2)
            r4 = 5
            if (r0 == r4) goto L14
            r4 = 29
            if (r0 != r4) goto L24
        L14:
            int r1 = getAacSamplingFrequency(r6)
            int r0 = getAacAudioObjectType(r6)
            r4 = 22
            if (r0 != r4) goto L24
            int r3 = r6.readBits(r2)
        L24:
            r4 = 1
            if (r7 == 0) goto L7c
            r7 = 3
            r5 = 2
            if (r0 == r4) goto L55
            if (r0 == r5) goto L55
            if (r0 == r7) goto L55
            if (r0 == r2) goto L55
            r2 = 6
            if (r0 == r2) goto L55
            r2 = 7
            if (r0 == r2) goto L55
            r2 = 17
            if (r0 == r2) goto L55
            switch(r0) {
                case 19: goto L55;
                case 20: goto L55;
                case 21: goto L55;
                case 22: goto L55;
                case 23: goto L55;
                default: goto L3e;
            }
        L3e:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r6 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "Unsupported audio object type: "
            r7.append(r1)
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            throw r6
        L55:
            parseGaSpecificConfig(r6, r0, r3)
            switch(r0) {
                case 17: goto L5c;
                case 18: goto L5b;
                case 19: goto L5c;
                case 20: goto L5c;
                case 21: goto L5c;
                case 22: goto L5c;
                case 23: goto L5c;
                default: goto L5b;
            }
        L5b:
            goto L7c
        L5c:
            int r6 = r6.readBits(r5)
            if (r6 == r5) goto L65
            if (r6 == r7) goto L65
            goto L7c
        L65:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r7 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unsupported epConfig: "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r7.<init>(r6)
            throw r7
        L7c:
            int[] r6 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.AUDIO_SPECIFIC_CONFIG_CHANNEL_COUNT_TABLE
            r6 = r6[r3]
            r7 = -1
            if (r6 == r7) goto L84
            goto L85
        L84:
            r4 = 0
        L85:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r4)
            java.lang.Integer r7 = java.lang.Integer.valueOf(r1)
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            android.util.Pair r6 = android.util.Pair.create(r7, r6)
            return r6
    }

    public static android.util.Pair<java.lang.Integer, java.lang.Integer> parseAacAudioSpecificConfig(byte[] r1) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray
            r0.<init>(r1)
            r1 = 0
            android.util.Pair r1 = parseAacAudioSpecificConfig(r0, r1)
            return r1
    }

    private static void parseGaSpecificConfig(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4, int r5, int r6) {
            r0 = 1
            r4.skipBits(r0)
            boolean r1 = r4.readBit()
            if (r1 == 0) goto Lf
            r1 = 14
            r4.skipBits(r1)
        Lf:
            boolean r1 = r4.readBit()
            if (r6 == 0) goto L40
            r6 = 6
            r2 = 20
            r3 = 3
            if (r5 == r6) goto L1d
            if (r5 != r2) goto L20
        L1d:
            r4.skipBits(r3)
        L20:
            if (r1 == 0) goto L3f
            r6 = 22
            if (r5 != r6) goto L2b
            r6 = 16
            r4.skipBits(r6)
        L2b:
            r6 = 17
            if (r5 == r6) goto L39
            r6 = 19
            if (r5 == r6) goto L39
            if (r5 == r2) goto L39
            r6 = 23
            if (r5 != r6) goto L3c
        L39:
            r4.skipBits(r3)
        L3c:
            r4.skipBits(r0)
        L3f:
            return
        L40:
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            r4.<init>()
            throw r4
    }

    public static byte[][] splitNalUnits(byte[] r7) {
            r0 = 0
            boolean r1 = isNalStartCode(r7, r0)
            if (r1 != 0) goto Lb
            r7 = 0
            byte[][] r7 = (byte[][]) r7
            return r7
        Lb:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = r0
        L11:
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            r1.add(r3)
            byte[] r3 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.NAL_START_CODE
            int r3 = r3.length
            int r2 = r2 + r3
            int r2 = findNalStartCode(r7, r2)
            r3 = -1
            if (r2 != r3) goto L11
            int r2 = r1.size()
            byte[][] r2 = new byte[r2][]
            r3 = r0
        L2a:
            int r4 = r1.size()
            if (r3 >= r4) goto L5b
            java.lang.Object r4 = r1.get(r3)
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r4 = r4.intValue()
            int r5 = r1.size()
            int r5 = r5 + (-1)
            if (r3 >= r5) goto L4f
            int r5 = r3 + 1
            java.lang.Object r5 = r1.get(r5)
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            goto L50
        L4f:
            int r5 = r7.length
        L50:
            int r5 = r5 - r4
            byte[] r6 = new byte[r5]
            java.lang.System.arraycopy(r7, r4, r6, r0, r5)
            r2[r3] = r6
            int r3 = r3 + 1
            goto L2a
        L5b:
            return r2
    }
}
