package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class H264Reader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader {
    private static final int NAL_UNIT_TYPE_PPS = 8;
    private static final int NAL_UNIT_TYPE_SEI = 6;
    private static final int NAL_UNIT_TYPE_SPS = 7;
    private final boolean allowNonIdrKeyframes;
    private final boolean detectAccessUnits;
    private java.lang.String formatId;
    private boolean hasOutputFormat;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput output;
    private long pesTimeUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer pps;
    private final boolean[] prefixFlags;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader.SampleReader sampleReader;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer sei;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader seiReader;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray seiWrapper;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer sps;
    private long totalBytesWritten;

    static class 1 {
    }

    private static final class SampleReader {
        private static final int DEFAULT_BUFFER_SIZE = 128;
        private static final int NAL_UNIT_TYPE_AUD = 9;
        private static final int NAL_UNIT_TYPE_IDR = 5;
        private static final int NAL_UNIT_TYPE_NON_IDR = 1;
        private static final int NAL_UNIT_TYPE_PARTITION_A = 2;
        private final boolean allowNonIdrKeyframes;
        private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray bitArray;
        private byte[] buffer;
        private int bufferLength;
        private final boolean detectAccessUnits;
        private boolean isFilling;
        private long nalUnitStartPosition;
        private long nalUnitTimeUs;
        private int nalUnitType;
        private final com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput output;
        private final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.PpsData> pps;
        private com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader.SampleReader.SliceHeaderData previousSliceHeader;
        private boolean readingSample;
        private boolean sampleIsKeyframe;
        private long samplePosition;
        private long sampleTimeUs;
        private com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader.SampleReader.SliceHeaderData sliceHeader;
        private final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.SpsData> sps;

        private static final class SliceHeaderData {
            private static final int SLICE_TYPE_ALL_I = 7;
            private static final int SLICE_TYPE_I = 2;
            private boolean bottomFieldFlag;
            private boolean bottomFieldFlagPresent;
            private int deltaPicOrderCnt0;
            private int deltaPicOrderCnt1;
            private int deltaPicOrderCntBottom;
            private boolean fieldPicFlag;
            private int frameNum;
            private boolean hasSliceType;
            private boolean idrPicFlag;
            private int idrPicId;
            private boolean isComplete;
            private int nalRefIdc;
            private int picOrderCntLsb;
            private int picParameterSetId;
            private int sliceType;
            private com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.SpsData spsData;

            private SliceHeaderData() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            SliceHeaderData(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader.1 r1) {
                    r0 = this;
                    r0.<init>()
                    return
            }

            static boolean access$100(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader.SampleReader.SliceHeaderData r0, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader.SampleReader.SliceHeaderData r1) {
                    boolean r0 = r0.isFirstVclNalUnitOfPicture(r1)
                    return r0
            }

            private boolean isFirstVclNalUnitOfPicture(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader.SampleReader.SliceHeaderData r4) {
                    r3 = this;
                    boolean r0 = r3.isComplete
                    r1 = 1
                    if (r0 == 0) goto L74
                    boolean r0 = r4.isComplete
                    if (r0 == 0) goto L75
                    int r0 = r3.frameNum
                    int r2 = r4.frameNum
                    if (r0 != r2) goto L75
                    int r0 = r3.picParameterSetId
                    int r2 = r4.picParameterSetId
                    if (r0 != r2) goto L75
                    boolean r0 = r3.fieldPicFlag
                    boolean r2 = r4.fieldPicFlag
                    if (r0 != r2) goto L75
                    boolean r0 = r3.bottomFieldFlagPresent
                    if (r0 == 0) goto L29
                    boolean r0 = r4.bottomFieldFlagPresent
                    if (r0 == 0) goto L29
                    boolean r0 = r3.bottomFieldFlag
                    boolean r2 = r4.bottomFieldFlag
                    if (r0 != r2) goto L75
                L29:
                    int r0 = r3.nalRefIdc
                    int r2 = r4.nalRefIdc
                    if (r0 == r2) goto L33
                    if (r0 == 0) goto L75
                    if (r2 == 0) goto L75
                L33:
                    com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$SpsData r0 = r3.spsData
                    int r0 = r0.picOrderCountType
                    if (r0 != 0) goto L4b
                    com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$SpsData r0 = r4.spsData
                    int r0 = r0.picOrderCountType
                    if (r0 != 0) goto L4b
                    int r0 = r3.picOrderCntLsb
                    int r2 = r4.picOrderCntLsb
                    if (r0 != r2) goto L75
                    int r0 = r3.deltaPicOrderCntBottom
                    int r2 = r4.deltaPicOrderCntBottom
                    if (r0 != r2) goto L75
                L4b:
                    com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$SpsData r0 = r3.spsData
                    int r0 = r0.picOrderCountType
                    if (r0 != r1) goto L63
                    com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$SpsData r0 = r4.spsData
                    int r0 = r0.picOrderCountType
                    if (r0 != r1) goto L63
                    int r0 = r3.deltaPicOrderCnt0
                    int r2 = r4.deltaPicOrderCnt0
                    if (r0 != r2) goto L75
                    int r0 = r3.deltaPicOrderCnt1
                    int r2 = r4.deltaPicOrderCnt1
                    if (r0 != r2) goto L75
                L63:
                    boolean r0 = r3.idrPicFlag
                    boolean r2 = r4.idrPicFlag
                    if (r0 != r2) goto L75
                    if (r0 == 0) goto L74
                    if (r2 == 0) goto L74
                    int r0 = r3.idrPicId
                    int r4 = r4.idrPicId
                    if (r0 == r4) goto L74
                    goto L75
                L74:
                    r1 = 0
                L75:
                    return r1
            }

            public final void clear() {
                    r1 = this;
                    r0 = 0
                    r1.hasSliceType = r0
                    r1.isComplete = r0
                    return
            }

            public final boolean isISlice() {
                    r2 = this;
                    boolean r0 = r2.hasSliceType
                    if (r0 == 0) goto Le
                    int r0 = r2.sliceType
                    r1 = 7
                    if (r0 == r1) goto Lc
                    r1 = 2
                    if (r0 != r1) goto Le
                Lc:
                    r0 = 1
                    goto Lf
                Le:
                    r0 = 0
                Lf:
                    return r0
            }

            public final void setAll(com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.SpsData r1, int r2, int r3, int r4, int r5, boolean r6, boolean r7, boolean r8, boolean r9, int r10, int r11, int r12, int r13, int r14) {
                    r0 = this;
                    r0.spsData = r1
                    r0.nalRefIdc = r2
                    r0.sliceType = r3
                    r0.frameNum = r4
                    r0.picParameterSetId = r5
                    r0.fieldPicFlag = r6
                    r0.bottomFieldFlagPresent = r7
                    r0.bottomFieldFlag = r8
                    r0.idrPicFlag = r9
                    r0.idrPicId = r10
                    r0.picOrderCntLsb = r11
                    r0.deltaPicOrderCntBottom = r12
                    r0.deltaPicOrderCnt0 = r13
                    r0.deltaPicOrderCnt1 = r14
                    r1 = 1
                    r0.isComplete = r1
                    r0.hasSliceType = r1
                    return
            }

            public final void setSliceType(int r1) {
                    r0 = this;
                    r0.sliceType = r1
                    r1 = 1
                    r0.hasSliceType = r1
                    return
            }
        }

        public SampleReader(com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1, boolean r2, boolean r3) {
                r0 = this;
                r0.<init>()
                r0.output = r1
                r0.allowNonIdrKeyframes = r2
                r0.detectAccessUnits = r3
                android.util.SparseArray r1 = new android.util.SparseArray
                r1.<init>()
                r0.sps = r1
                android.util.SparseArray r1 = new android.util.SparseArray
                r1.<init>()
                r0.pps = r1
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader$SliceHeaderData r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader$SliceHeaderData
                r2 = 0
                r1.<init>(r2)
                r0.previousSliceHeader = r1
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader$SliceHeaderData r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader$SliceHeaderData
                r1.<init>(r2)
                r0.sliceHeader = r1
                r1 = 128(0x80, float:1.8E-43)
                byte[] r1 = new byte[r1]
                r0.buffer = r1
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray
                r3 = 0
                r2.<init>(r1, r3, r3)
                r0.bitArray = r2
                r0.reset()
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

        public final void appendToNalUnit(byte[] r24, int r25, int r26) {
                r23 = this;
                r0 = r23
                r1 = r25
                boolean r2 = r0.isFilling
                if (r2 != 0) goto L9
                return
            L9:
                int r2 = r26 - r1
                byte[] r3 = r0.buffer
                int r4 = r3.length
                int r5 = r0.bufferLength
                int r6 = r5 + r2
                r7 = 2
                if (r4 >= r6) goto L1d
                int r5 = r5 + r2
                int r5 = r5 * r7
                byte[] r3 = java.util.Arrays.copyOf(r3, r5)
                r0.buffer = r3
            L1d:
                byte[] r3 = r0.buffer
                int r4 = r0.bufferLength
                r5 = r24
                java.lang.System.arraycopy(r5, r1, r3, r4, r2)
                int r1 = r0.bufferLength
                int r1 = r1 + r2
                r0.bufferLength = r1
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r2 = r0.bitArray
                byte[] r3 = r0.buffer
                r4 = 0
                r2.reset(r3, r4, r1)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r1 = r0.bitArray
                r2 = 8
                boolean r1 = r1.canReadBits(r2)
                if (r1 != 0) goto L3e
                return
            L3e:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r1 = r0.bitArray
                r1.skipBit()
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r1 = r0.bitArray
                int r10 = r1.readBits(r7)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r1 = r0.bitArray
                r2 = 5
                r1.skipBits(r2)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r1 = r0.bitArray
                boolean r1 = r1.canReadExpGolombCodedNum()
                if (r1 != 0) goto L58
                return
            L58:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r1 = r0.bitArray
                r1.readUnsignedExpGolombCodedInt()
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r1 = r0.bitArray
                boolean r1 = r1.canReadExpGolombCodedNum()
                if (r1 != 0) goto L66
                return
            L66:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r1 = r0.bitArray
                int r11 = r1.readUnsignedExpGolombCodedInt()
                boolean r1 = r0.detectAccessUnits
                if (r1 != 0) goto L78
                r0.isFilling = r4
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader$SliceHeaderData r1 = r0.sliceHeader
                r1.setSliceType(r11)
                return
            L78:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r1 = r0.bitArray
                boolean r1 = r1.canReadExpGolombCodedNum()
                if (r1 != 0) goto L81
                return
            L81:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r1 = r0.bitArray
                int r13 = r1.readUnsignedExpGolombCodedInt()
                android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$PpsData> r1 = r0.pps
                int r1 = r1.indexOfKey(r13)
                if (r1 >= 0) goto L92
                r0.isFilling = r4
                return
            L92:
                android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$PpsData> r1 = r0.pps
                java.lang.Object r1 = r1.get(r13)
                com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$PpsData r1 = (com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.PpsData) r1
                android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$SpsData> r3 = r0.sps
                int r5 = r1.seqParameterSetId
                java.lang.Object r3 = r3.get(r5)
                r9 = r3
                com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$SpsData r9 = (com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.SpsData) r9
                boolean r3 = r9.separateColorPlaneFlag
                if (r3 == 0) goto Lb7
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r3 = r0.bitArray
                boolean r3 = r3.canReadBits(r7)
                if (r3 != 0) goto Lb2
                return
            Lb2:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r3 = r0.bitArray
                r3.skipBits(r7)
            Lb7:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r3 = r0.bitArray
                int r5 = r9.frameNumLength
                boolean r3 = r3.canReadBits(r5)
                if (r3 != 0) goto Lc2
                return
            Lc2:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r3 = r0.bitArray
                int r5 = r9.frameNumLength
                int r12 = r3.readBits(r5)
                boolean r3 = r9.frameMbsOnlyFlag
                r5 = 1
                if (r3 != 0) goto Lf7
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r3 = r0.bitArray
                boolean r3 = r3.canReadBits(r5)
                if (r3 != 0) goto Ld8
                return
            Ld8:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r3 = r0.bitArray
                boolean r3 = r3.readBit()
                if (r3 == 0) goto Lf4
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r6 = r0.bitArray
                boolean r6 = r6.canReadBits(r5)
                if (r6 != 0) goto Le9
                return
            Le9:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r6 = r0.bitArray
                boolean r6 = r6.readBit()
                r14 = r3
                r15 = r5
                r16 = r6
                goto Lfb
            Lf4:
                r14 = r3
                r15 = r4
                goto Lf9
            Lf7:
                r14 = r4
                r15 = r14
            Lf9:
                r16 = r15
            Lfb:
                int r3 = r0.nalUnitType
                if (r3 != r2) goto L102
                r17 = r5
                goto L104
            L102:
                r17 = r4
            L104:
                if (r17 == 0) goto L118
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r2 = r0.bitArray
                boolean r2 = r2.canReadExpGolombCodedNum()
                if (r2 != 0) goto L10f
                return
            L10f:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r2 = r0.bitArray
                int r2 = r2.readUnsignedExpGolombCodedInt()
                r18 = r2
                goto L11a
            L118:
                r18 = r4
            L11a:
                int r2 = r9.picOrderCountType
                if (r2 != 0) goto L152
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r2 = r0.bitArray
                int r3 = r9.picOrderCntLsbLength
                boolean r2 = r2.canReadBits(r3)
                if (r2 != 0) goto L129
                return
            L129:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r2 = r0.bitArray
                int r3 = r9.picOrderCntLsbLength
                int r2 = r2.readBits(r3)
                boolean r1 = r1.bottomFieldPicOrderInFramePresentFlag
                if (r1 == 0) goto L14d
                if (r14 != 0) goto L14d
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r1 = r0.bitArray
                boolean r1 = r1.canReadExpGolombCodedNum()
                if (r1 != 0) goto L140
                return
            L140:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r1 = r0.bitArray
                int r1 = r1.readSignedExpGolombCodedInt()
                r20 = r1
                r19 = r2
                r21 = r4
                goto L196
            L14d:
                r19 = r2
                r20 = r4
                goto L194
            L152:
                int r2 = r9.picOrderCountType
                if (r2 != r5) goto L190
                boolean r2 = r9.deltaPicOrderAlwaysZeroFlag
                if (r2 != 0) goto L190
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r2 = r0.bitArray
                boolean r2 = r2.canReadExpGolombCodedNum()
                if (r2 != 0) goto L163
                return
            L163:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r2 = r0.bitArray
                int r2 = r2.readSignedExpGolombCodedInt()
                boolean r1 = r1.bottomFieldPicOrderInFramePresentFlag
                if (r1 == 0) goto L187
                if (r14 != 0) goto L187
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r1 = r0.bitArray
                boolean r1 = r1.canReadExpGolombCodedNum()
                if (r1 != 0) goto L178
                return
            L178:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableNalUnitBitArray r1 = r0.bitArray
                int r1 = r1.readSignedExpGolombCodedInt()
                r22 = r1
                r21 = r2
                r19 = r4
                r20 = r19
                goto L198
            L187:
                r21 = r2
                r19 = r4
                r20 = r19
                r22 = r20
                goto L198
            L190:
                r19 = r4
                r20 = r19
            L194:
                r21 = r20
            L196:
                r22 = r21
            L198:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader$SliceHeaderData r8 = r0.sliceHeader
                r8.setAll(r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22)
                r0.isFilling = r4
                return
        }

        public final void endNalUnit(long r6, int r8) {
                r5 = this;
                int r0 = r5.nalUnitType
                r1 = 0
                r2 = 1
                r3 = 9
                if (r0 == r3) goto L16
                boolean r0 = r5.detectAccessUnits
                if (r0 == 0) goto L2e
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader$SliceHeaderData r0 = r5.sliceHeader
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader$SliceHeaderData r3 = r5.previousSliceHeader
                boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader.SampleReader.SliceHeaderData.access$100(r0, r3)
                if (r0 == 0) goto L2e
            L16:
                boolean r0 = r5.readingSample
                if (r0 == 0) goto L22
                long r3 = r5.nalUnitStartPosition
                long r6 = r6 - r3
                int r6 = (int) r6
                int r8 = r8 + r6
                r5.outputSample(r8)
            L22:
                long r6 = r5.nalUnitStartPosition
                r5.samplePosition = r6
                long r6 = r5.nalUnitTimeUs
                r5.sampleTimeUs = r6
                r5.sampleIsKeyframe = r1
                r5.readingSample = r2
            L2e:
                boolean r6 = r5.sampleIsKeyframe
                int r7 = r5.nalUnitType
                r8 = 5
                if (r7 == r8) goto L43
                boolean r8 = r5.allowNonIdrKeyframes
                if (r8 == 0) goto L44
                if (r7 != r2) goto L44
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader$SliceHeaderData r7 = r5.sliceHeader
                boolean r7 = r7.isISlice()
                if (r7 == 0) goto L44
            L43:
                r1 = r2
            L44:
                r6 = r6 | r1
                r5.sampleIsKeyframe = r6
                return
        }

        public final boolean needsSpsPps() {
                r1 = this;
                boolean r0 = r1.detectAccessUnits
                return r0
        }

        public final void putPps(com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.PpsData r3) {
                r2 = this;
                android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$PpsData> r0 = r2.pps
                int r1 = r3.picParameterSetId
                r0.append(r1, r3)
                return
        }

        public final void putSps(com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.SpsData r3) {
                r2 = this;
                android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$SpsData> r0 = r2.sps
                int r1 = r3.seqParameterSetId
                r0.append(r1, r3)
                return
        }

        public final void reset() {
                r1 = this;
                r0 = 0
                r1.isFilling = r0
                r1.readingSample = r0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader$SliceHeaderData r0 = r1.sliceHeader
                r0.clear()
                return
        }

        public final void startNalUnit(long r1, int r3, long r4) {
                r0 = this;
                r0.nalUnitType = r3
                r0.nalUnitTimeUs = r4
                r0.nalUnitStartPosition = r1
                boolean r1 = r0.allowNonIdrKeyframes
                r2 = 1
                if (r1 == 0) goto Ld
                if (r3 == r2) goto L1b
            Ld:
                boolean r1 = r0.detectAccessUnits
                if (r1 == 0) goto L2b
                int r1 = r0.nalUnitType
                r3 = 5
                if (r1 == r3) goto L1b
                if (r1 == r2) goto L1b
                r3 = 2
                if (r1 != r3) goto L2b
            L1b:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader$SliceHeaderData r1 = r0.previousSliceHeader
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader$SliceHeaderData r3 = r0.sliceHeader
                r0.previousSliceHeader = r3
                r0.sliceHeader = r1
                r1.clear()
                r1 = 0
                r0.bufferLength = r1
                r0.isFilling = r2
            L2b:
                return
        }
    }

    public H264Reader(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader r1, boolean r2, boolean r3) {
            r0 = this;
            r0.<init>()
            r0.seiReader = r1
            r0.allowNonIdrKeyframes = r2
            r0.detectAccessUnits = r3
            r1 = 3
            boolean[] r1 = new boolean[r1]
            r0.prefixFlags = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer
            r2 = 128(0x80, float:1.8E-43)
            r3 = 7
            r1.<init>(r3, r2)
            r0.sps = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer
            r3 = 8
            r1.<init>(r3, r2)
            r0.pps = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer
            r3 = 6
            r1.<init>(r3, r2)
            r0.sei = r1
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r1.<init>()
            r0.seiWrapper = r1
            return
    }

    private void endNalUnit(long r18, int r20, int r21, long r22) {
            r17 = this;
            r0 = r17
            r1 = r21
            boolean r2 = r0.hasOutputFormat
            if (r2 == 0) goto L10
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader r2 = r0.sampleReader
            boolean r2 = r2.needsSpsPps()
            if (r2 == 0) goto Ldd
        L10:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r2 = r0.sps
            r2.endNalUnit(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r2 = r0.pps
            r2.endNalUnit(r1)
            boolean r2 = r0.hasOutputFormat
            r3 = 3
            if (r2 != 0) goto La0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r2 = r0.sps
            boolean r2 = r2.isCompleted()
            if (r2 == 0) goto Ldd
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r2 = r0.pps
            boolean r2 = r2.isCompleted()
            if (r2 == 0) goto Ldd
            java.util.ArrayList r12 = new java.util.ArrayList
            r12.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r2 = r0.sps
            byte[] r2 = r2.nalData
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r4 = r0.sps
            int r4 = r4.nalLength
            byte[] r2 = java.util.Arrays.copyOf(r2, r4)
            r12.add(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r2 = r0.pps
            byte[] r2 = r2.nalData
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r4 = r0.pps
            int r4 = r4.nalLength
            byte[] r2 = java.util.Arrays.copyOf(r2, r4)
            r12.add(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r2 = r0.sps
            byte[] r2 = r2.nalData
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r4 = r0.sps
            int r4 = r4.nalLength
            com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$SpsData r2 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.parseSpsNalUnit(r2, r3, r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r4 = r0.pps
            byte[] r4 = r4.nalData
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r5 = r0.pps
            int r5 = r5.nalLength
            com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$PpsData r3 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.parsePpsNalUnit(r4, r3, r5)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r15 = r0.output
            java.lang.String r4 = r0.formatId
            r6 = 0
            r7 = -1
            r8 = -1
            int r9 = r2.width
            int r10 = r2.height
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r13 = -1
            float r14 = r2.pixelWidthAspectRatio
            r16 = 0
            java.lang.String r5 = "video/avc"
            r1 = r15
            r15 = r16
            com.mbridge.msdk.playercommon.exoplayer2.Format r4 = com.mbridge.msdk.playercommon.exoplayer2.Format.createVideoSampleFormat(r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15)
            r1.format(r4)
            r1 = 1
            r0.hasOutputFormat = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader r1 = r0.sampleReader
            r1.putSps(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader r1 = r0.sampleReader
            r1.putPps(r3)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r1 = r0.sps
            r1.reset()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r1 = r0.pps
            r1.reset()
            goto Ldd
        La0:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r1 = r0.sps
            boolean r1 = r1.isCompleted()
            if (r1 == 0) goto Lbf
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r1 = r0.sps
            byte[] r1 = r1.nalData
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r2 = r0.sps
            int r2 = r2.nalLength
            com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$SpsData r1 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.parseSpsNalUnit(r1, r3, r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader r2 = r0.sampleReader
            r2.putSps(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r1 = r0.sps
            r1.reset()
            goto Ldd
        Lbf:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r1 = r0.pps
            boolean r1 = r1.isCompleted()
            if (r1 == 0) goto Ldd
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r1 = r0.pps
            byte[] r1 = r1.nalData
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r2 = r0.pps
            int r2 = r2.nalLength
            com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$PpsData r1 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.parsePpsNalUnit(r1, r3, r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader r2 = r0.sampleReader
            r2.putPps(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r1 = r0.pps
            r1.reset()
        Ldd:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r1 = r0.sei
            r2 = r21
            boolean r1 = r1.endNalUnit(r2)
            if (r1 == 0) goto L10b
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r1 = r0.sei
            byte[] r1 = r1.nalData
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r2 = r0.sei
            int r2 = r2.nalLength
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.unescapeStream(r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r0.seiWrapper
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r3 = r0.sei
            byte[] r3 = r3.nalData
            r2.reset(r3, r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r0.seiWrapper
            r2 = 4
            r1.setPosition(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader r1 = r0.seiReader
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r0.seiWrapper
            r3 = r22
            r1.consume(r3, r2)
        L10b:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader r1 = r0.sampleReader
            r2 = r18
            r4 = r20
            r1.endNalUnit(r2, r4)
            return
    }

    private void nalUnitData(byte[] r2, int r3, int r4) {
            r1 = this;
            boolean r0 = r1.hasOutputFormat
            if (r0 == 0) goto Lc
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader r0 = r1.sampleReader
            boolean r0 = r0.needsSpsPps()
            if (r0 == 0) goto L16
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r1.sps
            r0.appendToNalUnit(r2, r3, r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r1.pps
            r0.appendToNalUnit(r2, r3, r4)
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r1.sei
            r0.appendToNalUnit(r2, r3, r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader r0 = r1.sampleReader
            r0.appendToNalUnit(r2, r3, r4)
            return
    }

    private void startNalUnit(long r8, int r10, long r11) {
            r7 = this;
            boolean r0 = r7.hasOutputFormat
            if (r0 == 0) goto Lc
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader r0 = r7.sampleReader
            boolean r0 = r0.needsSpsPps()
            if (r0 == 0) goto L16
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r7.sps
            r0.startNalUnit(r10)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r7.pps
            r0.startNalUnit(r10)
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r7.sei
            r0.startNalUnit(r10)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader r1 = r7.sampleReader
            r2 = r8
            r4 = r10
            r5 = r11
            r1.startNalUnit(r2, r4, r5)
            return
    }

    @Override
    public final void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r15) {
            r14 = this;
            int r0 = r15.getPosition()
            int r1 = r15.limit()
            byte[] r2 = r15.data
            long r3 = r14.totalBytesWritten
            int r5 = r15.bytesLeft()
            long r5 = (long) r5
            long r3 = r3 + r5
            r14.totalBytesWritten = r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r14.output
            int r4 = r15.bytesLeft()
            r3.sampleData(r15, r4)
        L1d:
            boolean[] r15 = r14.prefixFlags
            int r15 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.findNalUnit(r2, r0, r1, r15)
            if (r15 != r1) goto L29
            r14.nalUnitData(r2, r0, r1)
            return
        L29:
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.getNalUnitType(r2, r15)
            int r3 = r15 - r0
            if (r3 <= 0) goto L34
            r14.nalUnitData(r2, r0, r15)
        L34:
            int r10 = r1 - r15
            long r4 = r14.totalBytesWritten
            long r7 = (long) r10
            long r4 = r4 - r7
            if (r3 >= 0) goto L3e
            int r0 = -r3
            goto L3f
        L3e:
            r0 = 0
        L3f:
            r11 = r0
            long r12 = r14.pesTimeUs
            r7 = r14
            r8 = r4
            r7.endNalUnit(r8, r10, r11, r12)
            long r7 = r14.pesTimeUs
            r3 = r14
            r3.startNalUnit(r4, r6, r7)
            int r0 = r15 + 3
            goto L1d
    }

    @Override
    public final void createTracks(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r5, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r6) {
            r4 = this;
            r6.generateNewId()
            java.lang.String r0 = r6.getFormatId()
            r4.formatId = r0
            int r0 = r6.getTrackId()
            r1 = 2
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r5.track(r0, r1)
            r4.output = r0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader
            boolean r2 = r4.allowNonIdrKeyframes
            boolean r3 = r4.detectAccessUnits
            r1.<init>(r0, r2, r3)
            r4.sampleReader = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader r0 = r4.seiReader
            r0.createTracks(r5, r6)
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
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r2.sps
            r0.reset()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r2.pps
            r0.reset()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.NalUnitTargetBuffer r0 = r2.sei
            r0.reset()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader$SampleReader r0 = r2.sampleReader
            r0.reset()
            r0 = 0
            r2.totalBytesWritten = r0
            return
    }
}
