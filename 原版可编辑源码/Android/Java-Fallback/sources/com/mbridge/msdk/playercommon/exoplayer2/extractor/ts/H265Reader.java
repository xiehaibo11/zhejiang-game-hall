package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class H265Reader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader {
    private static final int BLA_W_LP = 16;
    private static final int CRA_NUT = 21;
    private static final int PPS_NUT = 34;
    private static final int PREFIX_SEI_NUT = 39;
    private static final int RASL_R = 9;
    private static final int SPS_NUT = 33;
    private static final int SUFFIX_SEI_NUT = 40;
    private static final java.lang.String TAG = "H265Reader";
    private static final int VPS_NUT = 32;
    private java.lang.String formatId;
    private boolean hasOutputFormat;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput output;
    private long pesTimeUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer pps;
    private final boolean[] prefixFlags;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer prefixSei;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H265Reader.SampleReader sampleReader;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader seiReader;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray seiWrapper;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer sps;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer suffixSei;
    private long totalBytesWritten;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer vps;

    private static final class SampleReader {
        private static final int FIRST_SLICE_FLAG_OFFSET = 2;
        private boolean isFirstParameterSet;
        private boolean isFirstSlice;
        private boolean lookingForFirstSliceFlag;
        private int nalUnitBytesRead;
        private boolean nalUnitHasKeyframeData;
        private long nalUnitStartPosition;
        private long nalUnitTimeUs;
        private final com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput output;
        private boolean readingSample;
        private boolean sampleIsKeyframe;
        private long samplePosition;
        private long sampleTimeUs;
        private boolean writingParameterSets;

        public SampleReader(com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1) {
                r0 = this;
                r0.<init>()
                r0.output = r1
                return
        }

        private void outputSample(int r8) {
                r7 = this;
                boolean r3 = r7.sampleIsKeyframe
                long r0 = r7.nalUnitStartPosition
                long r4 = r7.samplePosition
                long r0 = r0 - r4
                int r4 = (int) r0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r7.output
                long r1 = r7.sampleTimeUs
                r6 = 0
                r5 = r8
                r0.sampleMetadata(r1, r3, r4, r5, r6)
                return
        }

        public final void endNalUnit(long r3, int r5) {
                r2 = this;
                boolean r0 = r2.writingParameterSets
                if (r0 == 0) goto L10
                boolean r0 = r2.isFirstSlice
                if (r0 == 0) goto L10
                boolean r3 = r2.nalUnitHasKeyframeData
                r2.sampleIsKeyframe = r3
                r3 = 0
                r2.writingParameterSets = r3
                goto L33
            L10:
                boolean r0 = r2.isFirstParameterSet
                if (r0 != 0) goto L18
                boolean r0 = r2.isFirstSlice
                if (r0 == 0) goto L33
            L18:
                boolean r0 = r2.readingSample
                if (r0 == 0) goto L24
                long r0 = r2.nalUnitStartPosition
                long r3 = r3 - r0
                int r3 = (int) r3
                int r5 = r5 + r3
                r2.outputSample(r5)
            L24:
                long r3 = r2.nalUnitStartPosition
                r2.samplePosition = r3
                long r3 = r2.nalUnitTimeUs
                r2.sampleTimeUs = r3
                r3 = 1
                r2.readingSample = r3
                boolean r3 = r2.nalUnitHasKeyframeData
                r2.sampleIsKeyframe = r3
            L33:
                return
        }

        public final void readNalUnitData(byte[] r3, int r4, int r5) {
                r2 = this;
                boolean r0 = r2.lookingForFirstSliceFlag
                if (r0 == 0) goto L1e
                int r0 = r4 + 2
                int r1 = r2.nalUnitBytesRead
                int r0 = r0 - r1
                if (r0 >= r5) goto L1a
                r3 = r3[r0]
                r3 = r3 & 128(0x80, float:1.8E-43)
                r4 = 0
                if (r3 == 0) goto L14
                r3 = 1
                goto L15
            L14:
                r3 = r4
            L15:
                r2.isFirstSlice = r3
                r2.lookingForFirstSliceFlag = r4
                goto L1e
            L1a:
                int r5 = r5 - r4
                int r1 = r1 + r5
                r2.nalUnitBytesRead = r1
            L1e:
                return
        }

        public final void reset() {
                r1 = this;
                r0 = 0
                r1.lookingForFirstSliceFlag = r0
                r1.isFirstSlice = r0
                r1.isFirstParameterSet = r0
                r1.readingSample = r0
                r1.writingParameterSets = r0
                return
        }

        public final void startNalUnit(long r2, int r4, int r5, long r6) {
                r1 = this;
                r0 = 0
                r1.isFirstSlice = r0
                r1.isFirstParameterSet = r0
                r1.nalUnitTimeUs = r6
                r1.nalUnitBytesRead = r0
                r1.nalUnitStartPosition = r2
                r2 = 1
                r3 = 32
                if (r5 < r3) goto L28
                boolean r3 = r1.writingParameterSets
                if (r3 != 0) goto L1d
                boolean r3 = r1.readingSample
                if (r3 == 0) goto L1d
                r1.outputSample(r4)
                r1.readingSample = r0
            L1d:
                r3 = 34
                if (r5 > r3) goto L28
                boolean r3 = r1.writingParameterSets
                r3 = r3 ^ r2
                r1.isFirstParameterSet = r3
                r1.writingParameterSets = r2
            L28:
                r3 = 16
                if (r5 < r3) goto L32
                r3 = 21
                if (r5 > r3) goto L32
                r3 = r2
                goto L33
            L32:
                r3 = r0
            L33:
                r1.nalUnitHasKeyframeData = r3
                if (r3 != 0) goto L3b
                r3 = 9
                if (r5 > r3) goto L3c
            L3b:
                r0 = r2
            L3c:
                r1.lookingForFirstSliceFlag = r0
                return
        }
    }

    public H265Reader(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader r3) {
            r2 = this;
            r2.<init>()
            r2.seiReader = r3
            r3 = 3
            boolean[] r3 = new boolean[r3]
            r2.prefixFlags = r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer
            r0 = 128(0x80, float:1.8E-43)
            r1 = 32
            r3.<init>(r1, r0)
            r2.vps = r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer
            r1 = 33
            r3.<init>(r1, r0)
            r2.sps = r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer
            r1 = 34
            r3.<init>(r1, r0)
            r2.pps = r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer
            r1 = 39
            r3.<init>(r1, r0)
            r2.prefixSei = r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer
            r1 = 40
            r3.<init>(r1, r0)
            r2.suffixSei = r3
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r3.<init>()
            r2.seiWrapper = r3
            return
    }

    private void endNalUnit(long r3, int r5, int r6, long r7) {
            r2 = this;
            boolean r0 = r2.hasOutputFormat
            if (r0 == 0) goto La
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H265Reader$SampleReader r0 = r2.sampleReader
            r0.endNalUnit(r3, r5)
            goto L45
        La:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = r2.vps
            r3.endNalUnit(r6)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = r2.sps
            r3.endNalUnit(r6)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = r2.pps
            r3.endNalUnit(r6)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = r2.vps
            boolean r3 = r3.isCompleted()
            if (r3 == 0) goto L45
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = r2.sps
            boolean r3 = r3.isCompleted()
            if (r3 == 0) goto L45
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = r2.pps
            boolean r3 = r3.isCompleted()
            if (r3 == 0) goto L45
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r2.output
            java.lang.String r4 = r2.formatId
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r5 = r2.vps
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r2.sps
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r1 = r2.pps
            com.mbridge.msdk.playercommon.exoplayer2.Format r4 = parseMediaFormat(r4, r5, r0, r1)
            r3.format(r4)
            r3 = 1
            r2.hasOutputFormat = r3
        L45:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = r2.prefixSei
            boolean r3 = r3.endNalUnit(r6)
            r4 = 5
            if (r3 == 0) goto L6f
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = r2.prefixSei
            byte[] r3 = r3.nalData
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r5 = r2.prefixSei
            int r5 = r5.nalLength
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.unescapeStream(r3, r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r2.seiWrapper
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r2.prefixSei
            byte[] r0 = r0.nalData
            r5.reset(r0, r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r2.seiWrapper
            r3.skipBytes(r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader r3 = r2.seiReader
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r2.seiWrapper
            r3.consume(r7, r5)
        L6f:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = r2.suffixSei
            boolean r3 = r3.endNalUnit(r6)
            if (r3 == 0) goto L98
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = r2.suffixSei
            byte[] r3 = r3.nalData
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r5 = r2.suffixSei
            int r5 = r5.nalLength
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.unescapeStream(r3, r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r2.seiWrapper
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r6 = r2.suffixSei
            byte[] r6 = r6.nalData
            r5.reset(r6, r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r2.seiWrapper
            r3.skipBytes(r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader r3 = r2.seiReader
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r2.seiWrapper
            r3.consume(r7, r4)
        L98:
            return
    }

    private void nalUnitData(byte[] r2, int r3, int r4) {
            r1 = this;
            boolean r0 = r1.hasOutputFormat
            if (r0 == 0) goto La
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H265Reader$SampleReader r0 = r1.sampleReader
            r0.readNalUnitData(r2, r3, r4)
            goto L19
        La:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r1.vps
            r0.appendToNalUnit(r2, r3, r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r1.sps
            r0.appendToNalUnit(r2, r3, r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r1.pps
            r0.appendToNalUnit(r2, r3, r4)
        L19:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r1.prefixSei
            r0.appendToNalUnit(r2, r3, r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r1.suffixSei
            r0.appendToNalUnit(r2, r3, r4)
            return
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.Format parseMediaFormat(java.lang.String r23, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r24, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r25, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r26) {
            r0 = r24
            r1 = r25
            r2 = r26
            int r3 = r0.nalLength
            int r4 = r1.nalLength
            int r3 = r3 + r4
            int r4 = r2.nalLength
            int r3 = r3 + r4
            byte[] r3 = new byte[r3]
            byte[] r4 = r0.nalData
            int r5 = r0.nalLength
            r6 = 0
            java.lang.System.arraycopy(r4, r6, r3, r6, r5)
            byte[] r4 = r1.nalData
            int r5 = r0.nalLength
            int r7 = r1.nalLength
            java.lang.System.arraycopy(r4, r6, r3, r5, r7)
            byte[] r4 = r2.nalData
            int r0 = r0.nalLength
            int r5 = r1.nalLength
            int r0 = r0 + r5
            int r2 = r2.nalLength
            java.lang.System.arraycopy(r4, r6, r3, r0, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray
            byte[] r2 = r1.nalData
            int r1 = r1.nalLength
            r0.<init>(r2, r6, r1)
            r1 = 44
            r0.skipBits(r1)
            r1 = 3
            int r2 = r0.readBits(r1)
            r0.skipBit()
            r4 = 88
            r0.skipBits(r4)
            r4 = 8
            r0.skipBits(r4)
            r5 = r6
            r7 = r5
        L4f:
            if (r5 >= r2) goto L64
            boolean r8 = r0.readBit()
            if (r8 == 0) goto L59
            int r7 = r7 + 89
        L59:
            boolean r8 = r0.readBit()
            if (r8 == 0) goto L61
            int r7 = r7 + 8
        L61:
            int r5 = r5 + 1
            goto L4f
        L64:
            r0.skipBits(r7)
            r5 = 2
            if (r2 <= 0) goto L70
            int r7 = 8 - r2
            int r7 = r7 * r5
            r0.skipBits(r7)
        L70:
            r0.readUnsignedExpGolombCodedInt()
            int r7 = r0.readUnsignedExpGolombCodedInt()
            if (r7 != r1) goto L7c
            r0.skipBit()
        L7c:
            int r1 = r0.readUnsignedExpGolombCodedInt()
            int r8 = r0.readUnsignedExpGolombCodedInt()
            boolean r9 = r0.readBit()
            r10 = 1
            if (r9 == 0) goto Lae
            int r9 = r0.readUnsignedExpGolombCodedInt()
            int r11 = r0.readUnsignedExpGolombCodedInt()
            int r12 = r0.readUnsignedExpGolombCodedInt()
            int r13 = r0.readUnsignedExpGolombCodedInt()
            if (r7 == r10) goto La2
            if (r7 != r5) goto La0
            goto La2
        La0:
            r14 = r10
            goto La3
        La2:
            r14 = r5
        La3:
            if (r7 != r10) goto La7
            r7 = r5
            goto La8
        La7:
            r7 = r10
        La8:
            int r9 = r9 + r11
            int r14 = r14 * r9
            int r1 = r1 - r14
            int r12 = r12 + r13
            int r7 = r7 * r12
            int r8 = r8 - r7
        Lae:
            r16 = r1
            r17 = r8
            r0.readUnsignedExpGolombCodedInt()
            r0.readUnsignedExpGolombCodedInt()
            int r1 = r0.readUnsignedExpGolombCodedInt()
            boolean r7 = r0.readBit()
            if (r7 == 0) goto Lc4
            r7 = r6
            goto Lc5
        Lc4:
            r7 = r2
        Lc5:
            if (r7 > r2) goto Ld3
            r0.readUnsignedExpGolombCodedInt()
            r0.readUnsignedExpGolombCodedInt()
            r0.readUnsignedExpGolombCodedInt()
            int r7 = r7 + 1
            goto Lc5
        Ld3:
            r0.readUnsignedExpGolombCodedInt()
            r0.readUnsignedExpGolombCodedInt()
            r0.readUnsignedExpGolombCodedInt()
            r0.readUnsignedExpGolombCodedInt()
            r0.readUnsignedExpGolombCodedInt()
            r0.readUnsignedExpGolombCodedInt()
            boolean r2 = r0.readBit()
            if (r2 == 0) goto Lf4
            boolean r2 = r0.readBit()
            if (r2 == 0) goto Lf4
            skipScalingList(r0)
        Lf4:
            r0.skipBits(r5)
            boolean r2 = r0.readBit()
            if (r2 == 0) goto L109
            r0.skipBits(r4)
            r0.readUnsignedExpGolombCodedInt()
            r0.readUnsignedExpGolombCodedInt()
            r0.skipBit()
        L109:
            skipShortTermRefPicSets(r0)
            boolean r2 = r0.readBit()
            if (r2 == 0) goto L121
        L112:
            int r2 = r0.readUnsignedExpGolombCodedInt()
            if (r6 >= r2) goto L121
            int r2 = r1 + 4
            int r2 = r2 + r10
            r0.skipBits(r2)
            int r6 = r6 + 1
            goto L112
        L121:
            r0.skipBits(r5)
            r1 = 1065353216(0x3f800000, float:1.0)
            boolean r2 = r0.readBit()
            if (r2 == 0) goto L16e
            boolean r2 = r0.readBit()
            if (r2 == 0) goto L16e
            int r2 = r0.readBits(r4)
            r4 = 255(0xff, float:3.57E-43)
            if (r2 != r4) goto L14c
            r2 = 16
            int r4 = r0.readBits(r2)
            int r0 = r0.readBits(r2)
            if (r4 == 0) goto L16e
            if (r0 == 0) goto L16e
            float r1 = (float) r4
            float r0 = (float) r0
            float r1 = r1 / r0
            goto L16e
        L14c:
            float[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.ASPECT_RATIO_IDC_VALUES
            int r0 = r0.length
            if (r2 >= r0) goto L158
            float[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.ASPECT_RATIO_IDC_VALUES
            r0 = r0[r2]
            r21 = r0
            goto L170
        L158:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "Unexpected aspect_ratio_idc value: "
            r0.append(r4)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "H265Reader"
            android.util.Log.w(r2, r0)
        L16e:
            r21 = r1
        L170:
            r13 = 0
            r14 = -1
            r15 = -1
            r18 = -1082130432(0xffffffffbf800000, float:-1.0)
            java.util.List r19 = java.util.Collections.singletonList(r3)
            r20 = -1
            r22 = 0
            java.lang.String r12 = "video/hevc"
            r11 = r23
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = com.mbridge.msdk.playercommon.exoplayer2.Format.createVideoSampleFormat(r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22)
            return r0
    }

    private static void skipScalingList(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r7) {
            r0 = 0
            r1 = r0
        L2:
            r2 = 4
            if (r1 >= r2) goto L36
            r3 = r0
        L6:
            r4 = 6
            if (r3 >= r4) goto L33
            boolean r4 = r7.readBit()
            r5 = 1
            if (r4 != 0) goto L14
            r7.readUnsignedExpGolombCodedInt()
            goto L2d
        L14:
            r4 = 64
            int r6 = r1 << 1
            int r6 = r6 + r2
            int r6 = r5 << r6
            int r4 = java.lang.Math.min(r4, r6)
            if (r1 <= r5) goto L24
            r7.readSignedExpGolombCodedInt()
        L24:
            r6 = r0
        L25:
            if (r6 >= r4) goto L2d
            r7.readSignedExpGolombCodedInt()
            int r6 = r6 + 1
            goto L25
        L2d:
            r4 = 3
            if (r1 != r4) goto L31
            r5 = r4
        L31:
            int r3 = r3 + r5
            goto L6
        L33:
            int r1 = r1 + 1
            goto L2
        L36:
            return
    }

    private static void skipShortTermRefPicSets(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r8) {
            int r0 = r8.readUnsignedExpGolombCodedInt()
            r1 = 0
            r2 = r1
            r3 = r2
            r4 = r3
        L8:
            if (r2 >= r0) goto L4d
            if (r2 == 0) goto L10
            boolean r3 = r8.readBit()
        L10:
            if (r3 == 0) goto L27
            r8.skipBit()
            r8.readUnsignedExpGolombCodedInt()
            r5 = r1
        L19:
            if (r5 > r4) goto L4a
            boolean r6 = r8.readBit()
            if (r6 == 0) goto L24
            r8.skipBit()
        L24:
            int r5 = r5 + 1
            goto L19
        L27:
            int r4 = r8.readUnsignedExpGolombCodedInt()
            int r5 = r8.readUnsignedExpGolombCodedInt()
            int r6 = r4 + r5
            r7 = r1
        L32:
            if (r7 >= r4) goto L3d
            r8.readUnsignedExpGolombCodedInt()
            r8.skipBit()
            int r7 = r7 + 1
            goto L32
        L3d:
            r4 = r1
        L3e:
            if (r4 >= r5) goto L49
            r8.readUnsignedExpGolombCodedInt()
            r8.skipBit()
            int r4 = r4 + 1
            goto L3e
        L49:
            r4 = r6
        L4a:
            int r2 = r2 + 1
            goto L8
        L4d:
            return
    }

    private void startNalUnit(long r9, int r11, int r12, long r13) {
            r8 = this;
            boolean r0 = r8.hasOutputFormat
            if (r0 == 0) goto Le
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H265Reader$SampleReader r1 = r8.sampleReader
            r2 = r9
            r4 = r11
            r5 = r12
            r6 = r13
            r1.startNalUnit(r2, r4, r5, r6)
            goto L1d
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r9 = r8.vps
            r9.startNalUnit(r12)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r9 = r8.sps
            r9.startNalUnit(r12)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r9 = r8.pps
            r9.startNalUnit(r12)
        L1d:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r9 = r8.prefixSei
            r9.startNalUnit(r12)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r9 = r8.suffixSei
            r9.startNalUnit(r12)
            return
    }

    @Override
    public final void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r17) {
            r16 = this;
            r7 = r16
            r8 = r17
        L4:
            int r0 = r17.bytesLeft()
            if (r0 <= 0) goto L5f
            int r0 = r17.getPosition()
            int r9 = r17.limit()
            byte[] r10 = r8.data
            long r1 = r7.totalBytesWritten
            int r3 = r17.bytesLeft()
            long r3 = (long) r3
            long r1 = r1 + r3
            r7.totalBytesWritten = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r7.output
            int r2 = r17.bytesLeft()
            r1.sampleData(r8, r2)
        L27:
            if (r0 >= r9) goto L4
            boolean[] r1 = r7.prefixFlags
            int r11 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.findNalUnit(r10, r0, r9, r1)
            if (r11 != r9) goto L35
            r7.nalUnitData(r10, r0, r9)
            return
        L35:
            int r12 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.getH265NalUnitType(r10, r11)
            int r1 = r11 - r0
            if (r1 <= 0) goto L40
            r7.nalUnitData(r10, r0, r11)
        L40:
            int r13 = r9 - r11
            long r2 = r7.totalBytesWritten
            long r4 = (long) r13
            long r14 = r2 - r4
            if (r1 >= 0) goto L4b
            int r0 = -r1
            goto L4c
        L4b:
            r0 = 0
        L4c:
            r4 = r0
            long r5 = r7.pesTimeUs
            r0 = r16
            r1 = r14
            r3 = r13
            r0.endNalUnit(r1, r3, r4, r5)
            long r5 = r7.pesTimeUs
            r4 = r12
            r0.startNalUnit(r1, r3, r4, r5)
            int r0 = r11 + 3
            goto L27
        L5f:
            return
    }

    @Override
    public final void createTracks(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r3, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r4) {
            r2 = this;
            r4.generateNewId()
            java.lang.String r0 = r4.getFormatId()
            r2.formatId = r0
            int r0 = r4.getTrackId()
            r1 = 2
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r3.track(r0, r1)
            r2.output = r0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H265Reader$SampleReader r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H265Reader$SampleReader
            r1.<init>(r0)
            r2.sampleReader = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader r0 = r2.seiReader
            r0.createTracks(r3, r4)
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
            r0.pesTimeUs = r1
            return
    }

    @Override
    public final void seek() {
            r2 = this;
            boolean[] r0 = r2.prefixFlags
            com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.clearPrefixFlags(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r2.vps
            r0.reset()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r2.sps
            r0.reset()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r2.pps
            r0.reset()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r2.prefixSei
            r0.reset()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r2.suffixSei
            r0.reset()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H265Reader$SampleReader r0 = r2.sampleReader
            r0.reset()
            r0 = 0
            r2.totalBytesWritten = r0
            return
    }
}
