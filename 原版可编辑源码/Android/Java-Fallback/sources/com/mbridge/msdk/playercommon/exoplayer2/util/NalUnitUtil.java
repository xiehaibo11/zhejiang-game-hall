package com.mbridge.msdk.playercommon.exoplayer2.util;

public final class NalUnitUtil {
    public static final float[] ASPECT_RATIO_IDC_VALUES = null;
    public static final int EXTENDED_SAR = 255;
    private static final int H264_NAL_UNIT_TYPE_SEI = 6;
    private static final int H264_NAL_UNIT_TYPE_SPS = 7;
    private static final int H265_NAL_UNIT_TYPE_PREFIX_SEI = 39;
    public static final byte[] NAL_START_CODE = null;
    private static final java.lang.String TAG = "NalUnitUtil";
    private static int[] scratchEscapePositions;
    private static final java.lang.Object scratchEscapePositionsLock = null;

    public static final class PpsData {
        public final boolean bottomFieldPicOrderInFramePresentFlag;
        public final int picParameterSetId;
        public final int seqParameterSetId;

        public PpsData(int r1, int r2, boolean r3) {
                r0 = this;
                r0.<init>()
                r0.picParameterSetId = r1
                r0.seqParameterSetId = r2
                r0.bottomFieldPicOrderInFramePresentFlag = r3
                return
        }
    }

    public static final class SpsData {
        public final boolean deltaPicOrderAlwaysZeroFlag;
        public final boolean frameMbsOnlyFlag;
        public final int frameNumLength;
        public final int height;
        public final int picOrderCntLsbLength;
        public final int picOrderCountType;
        public final float pixelWidthAspectRatio;
        public final boolean separateColorPlaneFlag;
        public final int seqParameterSetId;
        public final int width;

        public SpsData(int r1, int r2, int r3, float r4, boolean r5, boolean r6, int r7, int r8, int r9, boolean r10) {
                r0 = this;
                r0.<init>()
                r0.seqParameterSetId = r1
                r0.width = r2
                r0.height = r3
                r0.pixelWidthAspectRatio = r4
                r0.separateColorPlaneFlag = r5
                r0.frameMbsOnlyFlag = r6
                r0.frameNumLength = r7
                r0.picOrderCountType = r8
                r0.picOrderCntLsbLength = r9
                r0.deltaPicOrderAlwaysZeroFlag = r10
                return
        }
    }

    static {
            r0 = 4
            byte[] r0 = new byte[r0]
            r0 = {x0020: FILL_ARRAY_DATA , data: [0, 0, 0, 1} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.NAL_START_CODE = r0
            r0 = 17
            float[] r0 = new float[r0]
            r0 = {x0026: FILL_ARRAY_DATA , data: [1065353216, 1065353216, 1066115817, 1063828015, 1069166220, 1067132618, 1074504425, 1072216623, 1077554828, 1075521226, 1070691421, 1068403619, 1073233424, 1070521954, 1068149419, 1069547520, 1073741824} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.ASPECT_RATIO_IDC_VALUES = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.scratchEscapePositionsLock = r0
            r0 = 10
            int[] r0 = new int[r0]
            com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.scratchEscapePositions = r0
            return
    }

    private NalUnitUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void clearPrefixFlags(boolean[] r2) {
            r0 = 0
            r2[r0] = r0
            r1 = 1
            r2[r1] = r0
            r1 = 2
            r2[r1] = r0
            return
    }

    public static void discardToSps(java.nio.ByteBuffer r9) {
            int r0 = r9.position()
            r1 = 0
            r2 = r1
            r3 = r2
        L7:
            int r4 = r2 + 1
            if (r4 >= r0) goto L3b
            byte r5 = r9.get(r2)
            r5 = r5 & 255(0xff, float:3.57E-43)
            r6 = 3
            if (r3 != r6) goto L32
            r7 = 1
            if (r5 != r7) goto L36
            byte r7 = r9.get(r4)
            r7 = r7 & 31
            r8 = 7
            if (r7 != r8) goto L36
            java.nio.ByteBuffer r3 = r9.duplicate()
            int r2 = r2 - r6
            r3.position(r2)
            r3.limit(r0)
            r9.position(r1)
            r9.put(r3)
            return
        L32:
            if (r5 != 0) goto L36
            int r3 = r3 + 1
        L36:
            if (r5 == 0) goto L39
            r3 = r1
        L39:
            r2 = r4
            goto L7
        L3b:
            r9.clear()
            return
    }

    public static int findNalUnit(byte[] r7, int r8, int r9, boolean[] r10) {
            int r0 = r9 - r8
            r1 = 0
            r2 = 1
            if (r0 < 0) goto L8
            r3 = r2
            goto L9
        L8:
            r3 = r1
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r3)
            if (r0 != 0) goto Lf
            return r9
        Lf:
            r3 = 2
            if (r10 == 0) goto L40
            boolean r4 = r10[r1]
            if (r4 == 0) goto L1c
            clearPrefixFlags(r10)
            int r8 = r8 + (-3)
            return r8
        L1c:
            if (r0 <= r2) goto L2b
            boolean r4 = r10[r2]
            if (r4 == 0) goto L2b
            r4 = r7[r8]
            if (r4 != r2) goto L2b
            clearPrefixFlags(r10)
            int r8 = r8 - r3
            return r8
        L2b:
            if (r0 <= r3) goto L40
            boolean r4 = r10[r3]
            if (r4 == 0) goto L40
            r4 = r7[r8]
            if (r4 != 0) goto L40
            int r4 = r8 + 1
            r4 = r7[r4]
            if (r4 != r2) goto L40
            clearPrefixFlags(r10)
            int r8 = r8 - r2
            return r8
        L40:
            int r4 = r9 + (-1)
            int r8 = r8 + r3
        L43:
            if (r8 >= r4) goto L67
            r5 = r7[r8]
            r5 = r5 & 254(0xfe, float:3.56E-43)
            if (r5 == 0) goto L4c
            goto L64
        L4c:
            int r5 = r8 + (-2)
            r6 = r7[r5]
            if (r6 != 0) goto L62
            int r6 = r8 + (-1)
            r6 = r7[r6]
            if (r6 != 0) goto L62
            r6 = r7[r8]
            if (r6 != r2) goto L62
            if (r10 == 0) goto L61
            clearPrefixFlags(r10)
        L61:
            return r5
        L62:
            int r8 = r8 + (-2)
        L64:
            int r8 = r8 + 3
            goto L43
        L67:
            if (r10 == 0) goto Lbb
            if (r0 <= r3) goto L7e
            int r8 = r9 + (-3)
            r8 = r7[r8]
            if (r8 != 0) goto L7c
            int r8 = r9 + (-2)
            r8 = r7[r8]
            if (r8 != 0) goto L7c
            r8 = r7[r4]
            if (r8 != r2) goto L7c
            goto L97
        L7c:
            r8 = r1
            goto L98
        L7e:
            if (r0 != r3) goto L8f
            boolean r8 = r10[r3]
            if (r8 == 0) goto L7c
            int r8 = r9 + (-2)
            r8 = r7[r8]
            if (r8 != 0) goto L7c
            r8 = r7[r4]
            if (r8 != r2) goto L7c
            goto L97
        L8f:
            boolean r8 = r10[r2]
            if (r8 == 0) goto L7c
            r8 = r7[r4]
            if (r8 != r2) goto L7c
        L97:
            r8 = r2
        L98:
            r10[r1] = r8
            if (r0 <= r2) goto La7
            int r8 = r9 + (-2)
            r8 = r7[r8]
            if (r8 != 0) goto Lb1
            r8 = r7[r4]
            if (r8 != 0) goto Lb1
            goto Laf
        La7:
            boolean r8 = r10[r3]
            if (r8 == 0) goto Lb1
            r8 = r7[r4]
            if (r8 != 0) goto Lb1
        Laf:
            r8 = r2
            goto Lb2
        Lb1:
            r8 = r1
        Lb2:
            r10[r2] = r8
            r7 = r7[r4]
            if (r7 != 0) goto Lb9
            r1 = r2
        Lb9:
            r10[r3] = r1
        Lbb:
            return r9
    }

    private static int findNextUnescapeIndex(byte[] r2, int r3, int r4) {
        L0:
            int r0 = r4 + (-2)
            if (r3 >= r0) goto L19
            r0 = r2[r3]
            if (r0 != 0) goto L16
            int r0 = r3 + 1
            r0 = r2[r0]
            if (r0 != 0) goto L16
            int r0 = r3 + 2
            r0 = r2[r0]
            r1 = 3
            if (r0 != r1) goto L16
            return r3
        L16:
            int r3 = r3 + 1
            goto L0
        L19:
            return r4
    }

    public static int getH265NalUnitType(byte[] r0, int r1) {
            int r1 = r1 + 3
            r0 = r0[r1]
            r0 = r0 & 126(0x7e, float:1.77E-43)
            int r0 = r0 >> 1
            return r0
    }

    public static int getNalUnitType(byte[] r0, int r1) {
            int r1 = r1 + 3
            r0 = r0[r1]
            r0 = r0 & 31
            return r0
    }

    public static boolean isNalUnitSei(java.lang.String r3, byte r4) {
            java.lang.String r0 = "video/avc"
            boolean r0 = r0.equals(r3)
            r1 = 1
            if (r0 == 0) goto Le
            r0 = r4 & 31
            r2 = 6
            if (r0 == r2) goto L1f
        Le:
            java.lang.String r0 = "video/hevc"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L1e
            r3 = r4 & 126(0x7e, float:1.77E-43)
            int r3 = r3 >> r1
            r4 = 39
            if (r3 != r4) goto L1e
            goto L1f
        L1e:
            r1 = 0
        L1f:
            return r1
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.PpsData parsePpsNalUnit(byte[] r1, int r2, int r3) {
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray
            r0.<init>(r1, r2, r3)
            r1 = 8
            r0.skipBits(r1)
            int r1 = r0.readUnsignedExpGolombCodedInt()
            int r2 = r0.readUnsignedExpGolombCodedInt()
            r0.skipBit()
            boolean r3 = r0.readBit()
            com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$PpsData r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$PpsData
            r0.<init>(r1, r2, r3)
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.SpsData parseSpsNalUnit(byte[] r18, int r19, int r20) {
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray
            r1 = r18
            r2 = r19
            r3 = r20
            r0.<init>(r1, r2, r3)
            r1 = 8
            r0.skipBits(r1)
            int r2 = r0.readBits(r1)
            r3 = 16
            r0.skipBits(r3)
            int r5 = r0.readUnsignedExpGolombCodedInt()
            r4 = 3
            r6 = 0
            r7 = 1
            r8 = 100
            if (r2 == r8) goto L4c
            r8 = 110(0x6e, float:1.54E-43)
            if (r2 == r8) goto L4c
            r8 = 122(0x7a, float:1.71E-43)
            if (r2 == r8) goto L4c
            r8 = 244(0xf4, float:3.42E-43)
            if (r2 == r8) goto L4c
            r8 = 44
            if (r2 == r8) goto L4c
            r8 = 83
            if (r2 == r8) goto L4c
            r8 = 86
            if (r2 == r8) goto L4c
            r8 = 118(0x76, float:1.65E-43)
            if (r2 == r8) goto L4c
            r8 = 128(0x80, float:1.8E-43)
            if (r2 == r8) goto L4c
            r8 = 138(0x8a, float:1.93E-43)
            if (r2 != r8) goto L49
            goto L4c
        L49:
            r9 = r6
            r2 = r7
            goto L84
        L4c:
            int r2 = r0.readUnsignedExpGolombCodedInt()
            if (r2 != r4) goto L57
            boolean r8 = r0.readBit()
            goto L58
        L57:
            r8 = r6
        L58:
            r0.readUnsignedExpGolombCodedInt()
            r0.readUnsignedExpGolombCodedInt()
            r0.skipBit()
            boolean r9 = r0.readBit()
            if (r9 == 0) goto L83
            if (r2 == r4) goto L6b
            r9 = r1
            goto L6d
        L6b:
            r9 = 12
        L6d:
            r10 = r6
        L6e:
            if (r10 >= r9) goto L83
            boolean r11 = r0.readBit()
            if (r11 == 0) goto L80
            r11 = 6
            if (r10 >= r11) goto L7b
            r11 = r3
            goto L7d
        L7b:
            r11 = 64
        L7d:
            skipScalingList(r0, r11)
        L80:
            int r10 = r10 + 1
            goto L6e
        L83:
            r9 = r8
        L84:
            int r8 = r0.readUnsignedExpGolombCodedInt()
            int r11 = r8 + 4
            int r12 = r0.readUnsignedExpGolombCodedInt()
            if (r12 != 0) goto L9b
            int r8 = r0.readUnsignedExpGolombCodedInt()
            int r8 = r8 + 4
            r18 = r5
            r14 = r6
            r13 = r8
            goto Lc1
        L9b:
            if (r12 != r7) goto Lbd
            boolean r8 = r0.readBit()
            r0.readSignedExpGolombCodedInt()
            r0.readSignedExpGolombCodedInt()
            int r10 = r0.readUnsignedExpGolombCodedInt()
            long r13 = (long) r10
            r18 = r5
            r10 = r6
        Laf:
            long r4 = (long) r10
            int r4 = (r4 > r13 ? 1 : (r4 == r13 ? 0 : -1))
            if (r4 >= 0) goto Lba
            r0.readUnsignedExpGolombCodedInt()
            int r10 = r10 + 1
            goto Laf
        Lba:
            r13 = r6
            r14 = r8
            goto Lc1
        Lbd:
            r18 = r5
            r13 = r6
            r14 = r13
        Lc1:
            r0.readUnsignedExpGolombCodedInt()
            r0.skipBit()
            int r4 = r0.readUnsignedExpGolombCodedInt()
            int r4 = r4 + r7
            int r5 = r0.readUnsignedExpGolombCodedInt()
            int r5 = r5 + r7
            boolean r10 = r0.readBit()
            r6 = 2
            int r8 = 2 - r10
            int r8 = r8 * r5
            if (r10 != 0) goto Lde
            r0.skipBit()
        Lde:
            r0.skipBit()
            int r4 = r4 * r3
            int r8 = r8 * r3
            boolean r5 = r0.readBit()
            if (r5 == 0) goto L112
            int r5 = r0.readUnsignedExpGolombCodedInt()
            int r15 = r0.readUnsignedExpGolombCodedInt()
            int r16 = r0.readUnsignedExpGolombCodedInt()
            int r17 = r0.readUnsignedExpGolombCodedInt()
            if (r2 != 0) goto Lfd
            int r6 = r6 - r10
            goto L109
        Lfd:
            r3 = 3
            if (r2 != r3) goto L102
            r3 = r7
            goto L103
        L102:
            r3 = r6
        L103:
            if (r2 != r7) goto L106
            r7 = r6
        L106:
            int r6 = r6 - r10
            int r6 = r6 * r7
            r7 = r3
        L109:
            int r5 = r5 + r15
            int r5 = r5 * r7
            int r4 = r4 - r5
            int r16 = r16 + r17
            int r16 = r16 * r6
            int r8 = r8 - r16
        L112:
            r6 = r4
            r7 = r8
            r2 = 1065353216(0x3f800000, float:1.0)
            boolean r3 = r0.readBit()
            if (r3 == 0) goto L15c
            boolean r3 = r0.readBit()
            if (r3 == 0) goto L15c
            int r1 = r0.readBits(r1)
            r3 = 255(0xff, float:3.57E-43)
            if (r1 != r3) goto L13d
            r3 = 16
            int r1 = r0.readBits(r3)
            int r0 = r0.readBits(r3)
            if (r1 == 0) goto L15c
            if (r0 == 0) goto L15c
            float r1 = (float) r1
            float r0 = (float) r0
            float r2 = r1 / r0
            goto L15c
        L13d:
            float[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.ASPECT_RATIO_IDC_VALUES
            int r3 = r0.length
            if (r1 >= r3) goto L146
            r0 = r0[r1]
            r8 = r0
            goto L15d
        L146:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "Unexpected aspect_ratio_idc value: "
            r0.append(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "NalUnitUtil"
            android.util.Log.w(r1, r0)
        L15c:
            r8 = r2
        L15d:
            com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$SpsData r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$SpsData
            r4 = r0
            r5 = r18
            r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            return r0
    }

    private static void skipScalingList(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r3, int r4) {
            r0 = 8
            r1 = 0
            r2 = r1
            r1 = r0
        L5:
            if (r2 >= r4) goto L19
            if (r0 == 0) goto L12
            int r0 = r3.readSignedExpGolombCodedInt()
            int r0 = r0 + r1
            int r0 = r0 + 256
            int r0 = r0 % 256
        L12:
            if (r0 != 0) goto L15
            goto L16
        L15:
            r1 = r0
        L16:
            int r2 = r2 + 1
            goto L5
        L19:
            return
    }

    public static int unescapeStream(byte[] r8, int r9) {
            java.lang.Object r0 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.scratchEscapePositionsLock
            monitor-enter(r0)
            r1 = 0
            r2 = r1
            r3 = r2
        L6:
            if (r2 >= r9) goto L2c
            int r2 = findNextUnescapeIndex(r8, r2, r9)     // Catch: java.lang.Throwable -> L2a
            if (r2 >= r9) goto L6
            int[] r4 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.scratchEscapePositions     // Catch: java.lang.Throwable -> L2a
            int r4 = r4.length     // Catch: java.lang.Throwable -> L2a
            if (r4 > r3) goto L20
            int[] r4 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.scratchEscapePositions     // Catch: java.lang.Throwable -> L2a
            int[] r5 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.scratchEscapePositions     // Catch: java.lang.Throwable -> L2a
            int r5 = r5.length     // Catch: java.lang.Throwable -> L2a
            int r5 = r5 * 2
            int[] r4 = java.util.Arrays.copyOf(r4, r5)     // Catch: java.lang.Throwable -> L2a
            com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.scratchEscapePositions = r4     // Catch: java.lang.Throwable -> L2a
        L20:
            int[] r4 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.scratchEscapePositions     // Catch: java.lang.Throwable -> L2a
            int r5 = r3 + 1
            r4[r3] = r2     // Catch: java.lang.Throwable -> L2a
            int r2 = r2 + 3
            r3 = r5
            goto L6
        L2a:
            r8 = move-exception
            goto L50
        L2c:
            int r9 = r9 - r3
            r2 = r1
            r4 = r2
            r5 = r4
        L30:
            if (r2 >= r3) goto L49
            int[] r6 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.scratchEscapePositions     // Catch: java.lang.Throwable -> L2a
            r6 = r6[r2]     // Catch: java.lang.Throwable -> L2a
            int r6 = r6 - r5
            java.lang.System.arraycopy(r8, r5, r8, r4, r6)     // Catch: java.lang.Throwable -> L2a
            int r4 = r4 + r6
            int r7 = r4 + 1
            r8[r4] = r1     // Catch: java.lang.Throwable -> L2a
            int r4 = r7 + 1
            r8[r7] = r1     // Catch: java.lang.Throwable -> L2a
            int r6 = r6 + 3
            int r5 = r5 + r6
            int r2 = r2 + 1
            goto L30
        L49:
            int r1 = r9 - r4
            java.lang.System.arraycopy(r8, r5, r8, r4, r1)     // Catch: java.lang.Throwable -> L2a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2a
            return r9
        L50:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2a
            throw r8
    }
}
