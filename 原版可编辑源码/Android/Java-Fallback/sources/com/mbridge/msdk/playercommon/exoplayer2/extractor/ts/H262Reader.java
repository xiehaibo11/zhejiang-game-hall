package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class H262Reader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader {
    private static final double[] FRAME_RATE_VALUES = null;
    private static final int START_EXTENSION = 181;
    private static final int START_GROUP = 184;
    private static final int START_PICTURE = 0;
    private static final int START_SEQUENCE_HEADER = 179;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader.CsdBuffer csdBuffer;
    private java.lang.String formatId;
    private long frameDurationUs;
    private boolean hasOutputFormat;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput output;
    private long pesTimeUs;
    private final boolean[] prefixFlags;
    private boolean sampleHasPicture;
    private boolean sampleIsKeyframe;
    private long samplePosition;
    private long sampleTimeUs;
    private boolean startedFirstSample;
    private long totalBytesWritten;

    private static final class CsdBuffer {
        private static final byte[] START_CODE = null;
        public byte[] data;
        private boolean isFilling;
        public int length;
        public int sequenceExtensionPosition;

        static {
                r0 = 3
                byte[] r0 = new byte[r0]
                r0 = {x000a: FILL_ARRAY_DATA , data: [0, 0, 1} // fill-array
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader.CsdBuffer.START_CODE = r0
                return
        }

        public CsdBuffer(int r1) {
                r0 = this;
                r0.<init>()
                byte[] r1 = new byte[r1]
                r0.data = r1
                return
        }

        public final void onData(byte[] r5, int r6, int r7) {
                r4 = this;
                boolean r0 = r4.isFilling
                if (r0 != 0) goto L5
                return
            L5:
                int r7 = r7 - r6
                byte[] r0 = r4.data
                int r1 = r0.length
                int r2 = r4.length
                int r3 = r2 + r7
                if (r1 >= r3) goto L18
                int r2 = r2 + r7
                int r2 = r2 * 2
                byte[] r0 = java.util.Arrays.copyOf(r0, r2)
                r4.data = r0
            L18:
                byte[] r0 = r4.data
                int r1 = r4.length
                java.lang.System.arraycopy(r5, r6, r0, r1, r7)
                int r5 = r4.length
                int r5 = r5 + r7
                r4.length = r5
                return
        }

        public final boolean onStartCode(int r4, int r5) {
                r3 = this;
                boolean r0 = r3.isFilling
                r1 = 1
                r2 = 0
                if (r0 == 0) goto L19
                int r0 = r3.length
                int r0 = r0 - r5
                r3.length = r0
                int r5 = r3.sequenceExtensionPosition
                if (r5 != 0) goto L16
                r5 = 181(0xb5, float:2.54E-43)
                if (r4 != r5) goto L16
                r3.sequenceExtensionPosition = r0
                goto L1f
            L16:
                r3.isFilling = r2
                return r1
            L19:
                r5 = 179(0xb3, float:2.51E-43)
                if (r4 != r5) goto L1f
                r3.isFilling = r1
            L1f:
                byte[] r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader.CsdBuffer.START_CODE
                int r5 = r4.length
                r3.onData(r4, r2, r5)
                return r2
        }

        public final void reset() {
                r1 = this;
                r0 = 0
                r1.isFilling = r0
                r1.length = r0
                r1.sequenceExtensionPosition = r0
                return
        }
    }

    static {
            r0 = 8
            double[] r0 = new double[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [4627441868472394375, 4627448617123184640, 4627730092099895296, 4629129031169960744, 4629137466983448576, 4632233691727265792, 4633632630797331240, 4633641066610819072} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader.FRAME_RATE_VALUES = r0
            return
    }

    public H262Reader() {
            r2 = this;
            r2.<init>()
            r0 = 4
            boolean[] r0 = new boolean[r0]
            r2.prefixFlags = r0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader$CsdBuffer r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader$CsdBuffer
            r1 = 128(0x80, float:1.8E-43)
            r0.<init>(r1)
            r2.csdBuffer = r0
            return
    }

    private static android.util.Pair<com.mbridge.msdk.playercommon.exoplayer2.Format, java.lang.Long> parseCsdBuffer(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader.CsdBuffer r20, java.lang.String r21) {
            r0 = r20
            byte[] r1 = r0.data
            int r2 = r0.length
            byte[] r1 = java.util.Arrays.copyOf(r1, r2)
            r2 = 4
            r3 = r1[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r4 = 5
            r5 = r1[r4]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r6 = 6
            r6 = r1[r6]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r3 = r3 << r2
            int r7 = r5 >> 4
            r13 = r3 | r7
            r3 = r5 & 15
            int r3 = r3 << 8
            r14 = r3 | r6
            r3 = 7
            r5 = r1[r3]
            r5 = r5 & 240(0xf0, float:3.36E-43)
            int r5 = r5 >> r2
            r6 = 2
            if (r5 == r6) goto L43
            r6 = 3
            if (r5 == r6) goto L3d
            if (r5 == r2) goto L37
            r2 = 1065353216(0x3f800000, float:1.0)
        L34:
            r18 = r2
            goto L4b
        L37:
            int r2 = r14 * 121
            float r2 = (float) r2
            int r5 = r13 * 100
            goto L48
        L3d:
            int r2 = r14 * 16
            float r2 = (float) r2
            int r5 = r13 * 9
            goto L48
        L43:
            int r2 = r14 * 4
            float r2 = (float) r2
            int r5 = r13 * 3
        L48:
            float r5 = (float) r5
            float r2 = r2 / r5
            goto L34
        L4b:
            r10 = 0
            r11 = -1
            r12 = -1
            r15 = -1082130432(0xffffffffbf800000, float:-1.0)
            java.util.List r16 = java.util.Collections.singletonList(r1)
            r17 = -1
            r19 = 0
            java.lang.String r9 = "video/mpeg2"
            r8 = r21
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = com.mbridge.msdk.playercommon.exoplayer2.Format.createVideoSampleFormat(r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19)
            r5 = 0
            r3 = r1[r3]
            r3 = r3 & 15
            int r3 = r3 + (-1)
            if (r3 < 0) goto L90
            double[] r7 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader.FRAME_RATE_VALUES
            int r8 = r7.length
            if (r3 >= r8) goto L90
            r5 = r7[r3]
            int r0 = r0.sequenceExtensionPosition
            int r0 = r0 + 9
            r3 = r1[r0]
            r3 = r3 & 96
            int r3 = r3 >> r4
            r0 = r1[r0]
            r0 = r0 & 31
            if (r3 == r0) goto L89
            double r3 = (double) r3
            r7 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r3 = r3 + r7
            int r0 = r0 + 1
            double r0 = (double) r0
            double r3 = r3 / r0
            double r5 = r5 * r3
        L89:
            r0 = 4696837146684686336(0x412e848000000000, double:1000000.0)
            double r0 = r0 / r5
            long r5 = (long) r0
        L90:
            java.lang.Long r0 = java.lang.Long.valueOf(r5)
            android.util.Pair r0 = android.util.Pair.create(r2, r0)
            return r0
    }

    @Override
    public final void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r19) {
            r18 = this;
            r0 = r18
            r1 = r19
            int r2 = r19.getPosition()
            int r3 = r19.limit()
            byte[] r4 = r1.data
            long r5 = r0.totalBytesWritten
            int r7 = r19.bytesLeft()
            long r7 = (long) r7
            long r5 = r5 + r7
            r0.totalBytesWritten = r5
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r5 = r0.output
            int r6 = r19.bytesLeft()
            r5.sampleData(r1, r6)
        L21:
            boolean[] r5 = r0.prefixFlags
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.findNalUnit(r4, r2, r3, r5)
            if (r5 != r3) goto L33
            boolean r1 = r0.hasOutputFormat
            if (r1 != 0) goto L32
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader$CsdBuffer r1 = r0.csdBuffer
            r1.onData(r4, r2, r3)
        L32:
            return
        L33:
            byte[] r6 = r1.data
            int r7 = r5 + 3
            r6 = r6[r7]
            r6 = r6 & 255(0xff, float:3.57E-43)
            boolean r8 = r0.hasOutputFormat
            r10 = 1
            if (r8 != 0) goto L73
            int r8 = r5 - r2
            if (r8 <= 0) goto L49
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader$CsdBuffer r11 = r0.csdBuffer
            r11.onData(r4, r2, r5)
        L49:
            if (r8 >= 0) goto L4d
            int r2 = -r8
            goto L4e
        L4d:
            r2 = 0
        L4e:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader$CsdBuffer r8 = r0.csdBuffer
            boolean r2 = r8.onStartCode(r6, r2)
            if (r2 == 0) goto L73
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader$CsdBuffer r2 = r0.csdBuffer
            java.lang.String r8 = r0.formatId
            android.util.Pair r2 = parseCsdBuffer(r2, r8)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r8 = r0.output
            java.lang.Object r11 = r2.first
            com.mbridge.msdk.playercommon.exoplayer2.Format r11 = (com.mbridge.msdk.playercommon.exoplayer2.Format) r11
            r8.format(r11)
            java.lang.Object r2 = r2.second
            java.lang.Long r2 = (java.lang.Long) r2
            long r11 = r2.longValue()
            r0.frameDurationUs = r11
            r0.hasOutputFormat = r10
        L73:
            if (r6 == 0) goto L81
            r2 = 179(0xb3, float:2.51E-43)
            if (r6 != r2) goto L7a
            goto L81
        L7a:
            r2 = 184(0xb8, float:2.58E-43)
            if (r6 != r2) goto Ldf
            r0.sampleIsKeyframe = r10
            goto Ldf
        L81:
            int r2 = r3 - r5
            boolean r5 = r0.startedFirstSample
            if (r5 == 0) goto La4
            boolean r5 = r0.sampleHasPicture
            if (r5 == 0) goto La4
            boolean r5 = r0.hasOutputFormat
            if (r5 == 0) goto La4
            boolean r14 = r0.sampleIsKeyframe
            long r11 = r0.totalBytesWritten
            long r9 = r0.samplePosition
            long r11 = r11 - r9
            int r9 = (int) r11
            int r15 = r9 - r2
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r11 = r0.output
            long r12 = r0.sampleTimeUs
            r17 = 0
            r16 = r2
            r11.sampleMetadata(r12, r14, r15, r16, r17)
        La4:
            boolean r9 = r0.startedFirstSample
            if (r9 == 0) goto Lb0
            boolean r9 = r0.sampleHasPicture
            if (r9 == 0) goto Lad
            goto Lb0
        Lad:
            r2 = 0
            r5 = 1
            goto Ld8
        Lb0:
            long r9 = r0.totalBytesWritten
            long r11 = (long) r2
            long r9 = r9 - r11
            r0.samplePosition = r9
            long r9 = r0.pesTimeUs
            r11 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r2 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            if (r2 == 0) goto Lc2
            goto Lce
        Lc2:
            boolean r2 = r0.startedFirstSample
            if (r2 == 0) goto Lcc
            long r9 = r0.sampleTimeUs
            long r13 = r0.frameDurationUs
            long r9 = r9 + r13
            goto Lce
        Lcc:
            r9 = 0
        Lce:
            r0.sampleTimeUs = r9
            r2 = 0
            r0.sampleIsKeyframe = r2
            r0.pesTimeUs = r11
            r5 = 1
            r0.startedFirstSample = r5
        Ld8:
            if (r6 != 0) goto Ldc
            r9 = r5
            goto Ldd
        Ldc:
            r9 = r2
        Ldd:
            r0.sampleHasPicture = r9
        Ldf:
            r2 = r7
            goto L21
    }

    @Override
    public final void createTracks(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r3) {
            r1 = this;
            r3.generateNewId()
            java.lang.String r0 = r3.getFormatId()
            r1.formatId = r0
            int r3 = r3.getTrackId()
            r0 = 2
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
            r0.pesTimeUs = r1
            return
    }

    @Override
    public final void seek() {
            r2 = this;
            boolean[] r0 = r2.prefixFlags
            com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.clearPrefixFlags(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader$CsdBuffer r0 = r2.csdBuffer
            r0.reset()
            r0 = 0
            r2.totalBytesWritten = r0
            r0 = 0
            r2.startedFirstSample = r0
            return
    }
}
