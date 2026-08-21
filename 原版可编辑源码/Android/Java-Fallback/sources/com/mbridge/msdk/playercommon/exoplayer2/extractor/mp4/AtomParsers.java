package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4;

final class AtomParsers {
    private static final int MAX_GAPLESS_TRIM_SIZE_SAMPLES = 3;
    private static final java.lang.String TAG = "AtomParsers";
    private static final int TYPE_clcp = 0;
    private static final int TYPE_meta = 0;
    private static final int TYPE_sbtl = 0;
    private static final int TYPE_soun = 0;
    private static final int TYPE_subt = 0;
    private static final int TYPE_text = 0;
    private static final int TYPE_vide = 0;

    private static final class ChunkIterator {
        private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray chunkOffsets;
        private final boolean chunkOffsetsAreLongs;
        public int index;
        public final int length;
        private int nextSamplesPerChunkChangeIndex;
        public int numSamples;
        public long offset;
        private int remainingSamplesPerChunkChanges;
        private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray stsc;

        public ChunkIterator(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2, boolean r3) {
                r0 = this;
                r0.<init>()
                r0.stsc = r1
                r0.chunkOffsets = r2
                r0.chunkOffsetsAreLongs = r3
                r3 = 12
                r2.setPosition(r3)
                int r2 = r2.readUnsignedIntToInt()
                r0.length = r2
                r1.setPosition(r3)
                int r2 = r1.readUnsignedIntToInt()
                r0.remainingSamplesPerChunkChanges = r2
                int r1 = r1.readInt()
                r2 = 1
                if (r1 != r2) goto L25
                goto L26
            L25:
                r2 = 0
            L26:
                java.lang.String r1 = "first_chunk must be 1"
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r2, r1)
                r1 = -1
                r0.index = r1
                return
        }

        public final boolean moveNext() {
                r4 = this;
                int r0 = r4.index
                r1 = 1
                int r0 = r0 + r1
                r4.index = r0
                int r2 = r4.length
                if (r0 != r2) goto Lc
                r0 = 0
                return r0
            Lc:
                boolean r0 = r4.chunkOffsetsAreLongs
                if (r0 == 0) goto L17
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r4.chunkOffsets
                long r2 = r0.readUnsignedLongToLong()
                goto L1d
            L17:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r4.chunkOffsets
                long r2 = r0.readUnsignedInt()
            L1d:
                r4.offset = r2
                int r0 = r4.index
                int r2 = r4.nextSamplesPerChunkChangeIndex
                if (r0 != r2) goto L45
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r4.stsc
                int r0 = r0.readUnsignedIntToInt()
                r4.numSamples = r0
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r4.stsc
                r2 = 4
                r0.skipBytes(r2)
                int r0 = r4.remainingSamplesPerChunkChanges
                int r0 = r0 - r1
                r4.remainingSamplesPerChunkChanges = r0
                if (r0 <= 0) goto L42
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r4.stsc
                int r0 = r0.readUnsignedIntToInt()
                int r0 = r0 - r1
                goto L43
            L42:
                r0 = -1
            L43:
                r4.nextSamplesPerChunkChangeIndex = r0
            L45:
                return r1
        }
    }

    private interface SampleSizeBox {
        int getSampleCount();

        boolean isFixedSampleSize();

        int readNextSampleSize();
    }

    private static final class StsdData {
        public static final int STSD_HEADER_SIZE = 8;
        public com.mbridge.msdk.playercommon.exoplayer2.Format format;
        public int nalUnitLengthFieldLength;
        public int requiredSampleTransformation;
        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox[] trackEncryptionBoxes;

        public StsdData(int r1) {
                r0 = this;
                r0.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox[r1]
                r0.trackEncryptionBoxes = r1
                r1 = 0
                r0.requiredSampleTransformation = r1
                return
        }
    }

    static final class StszSampleSizeBox implements com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.SampleSizeBox {
        private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray data;
        private final int fixedSampleSize;
        private final int sampleCount;

        public StszSampleSizeBox(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom r2) {
                r1 = this;
                r1.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r2.data
                r1.data = r2
                r0 = 12
                r2.setPosition(r0)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r1.data
                int r2 = r2.readUnsignedIntToInt()
                r1.fixedSampleSize = r2
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r1.data
                int r2 = r2.readUnsignedIntToInt()
                r1.sampleCount = r2
                return
        }

        @Override
        public final int getSampleCount() {
                r1 = this;
                int r0 = r1.sampleCount
                return r0
        }

        @Override
        public final boolean isFixedSampleSize() {
                r1 = this;
                int r0 = r1.fixedSampleSize
                if (r0 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                return r0
        }

        @Override
        public final int readNextSampleSize() {
                r1 = this;
                int r0 = r1.fixedSampleSize
                if (r0 != 0) goto La
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r1.data
                int r0 = r0.readUnsignedIntToInt()
            La:
                return r0
        }
    }

    static final class Stz2SampleSizeBox implements com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.SampleSizeBox {
        private int currentByte;
        private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray data;
        private final int fieldSize;
        private final int sampleCount;
        private int sampleIndex;

        public Stz2SampleSizeBox(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom r2) {
                r1 = this;
                r1.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r2.data
                r1.data = r2
                r0 = 12
                r2.setPosition(r0)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r1.data
                int r2 = r2.readUnsignedIntToInt()
                r2 = r2 & 255(0xff, float:3.57E-43)
                r1.fieldSize = r2
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r1.data
                int r2 = r2.readUnsignedIntToInt()
                r1.sampleCount = r2
                return
        }

        @Override
        public final int getSampleCount() {
                r1 = this;
                int r0 = r1.sampleCount
                return r0
        }

        @Override
        public final boolean isFixedSampleSize() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public final int readNextSampleSize() {
                r2 = this;
                int r0 = r2.fieldSize
                r1 = 8
                if (r0 != r1) goto Ld
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r2.data
                int r0 = r0.readUnsignedByte()
                return r0
            Ld:
                r1 = 16
                if (r0 != r1) goto L18
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r2.data
                int r0 = r0.readUnsignedShort()
                return r0
            L18:
                int r0 = r2.sampleIndex
                int r1 = r0 + 1
                r2.sampleIndex = r1
                int r0 = r0 % 2
                if (r0 != 0) goto L2f
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r2.data
                int r0 = r0.readUnsignedByte()
                r2.currentByte = r0
                r0 = r0 & 240(0xf0, float:3.36E-43)
                int r0 = r0 >> 4
                return r0
            L2f:
                int r0 = r2.currentByte
                r0 = r0 & 15
                return r0
        }
    }

    private static final class TkhdData {
        private final long duration;
        private final int id;
        private final int rotationDegrees;

        public TkhdData(int r1, long r2, int r4) {
                r0 = this;
                r0.<init>()
                r0.id = r1
                r0.duration = r2
                r0.rotationDegrees = r4
                return
        }

        static long access$000(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TkhdData r2) {
                long r0 = r2.duration
                return r0
        }

        static int access$100(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TkhdData r0) {
                int r0 = r0.id
                return r0
        }

        static int access$200(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TkhdData r0) {
                int r0 = r0.rotationDegrees
                return r0
        }
    }

    public static final class UnhandledEditListException extends com.mbridge.msdk.playercommon.exoplayer2.ParserException {
        public UnhandledEditListException() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.lang.String r0 = "vide"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TYPE_vide = r0
            java.lang.String r0 = "soun"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TYPE_soun = r0
            java.lang.String r0 = "text"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TYPE_text = r0
            java.lang.String r0 = "sbtl"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TYPE_sbtl = r0
            java.lang.String r0 = "subt"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TYPE_subt = r0
            java.lang.String r0 = "clcp"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TYPE_clcp = r0
            java.lang.String r0 = "meta"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TYPE_meta = r0
            return
    }

    private AtomParsers() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean canApplyEditWithGaplessInfo(long[] r7, long r8, long r10, long r12) {
            int r0 = r7.length
            r1 = 1
            int r0 = r0 - r1
            r2 = 3
            r3 = 0
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r2, r3, r0)
            int r5 = r7.length
            int r5 = r5 - r2
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r5, r3, r0)
            r5 = r7[r3]
            int r2 = (r5 > r10 ? 1 : (r5 == r10 ? 0 : -1))
            if (r2 > 0) goto L26
            r4 = r7[r4]
            int r10 = (r10 > r4 ? 1 : (r10 == r4 ? 0 : -1))
            if (r10 >= 0) goto L26
            r10 = r7[r0]
            int r7 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
            if (r7 >= 0) goto L26
            int r7 = (r12 > r8 ? 1 : (r12 == r8 ? 0 : -1))
            if (r7 > 0) goto L26
            goto L27
        L26:
            r1 = r3
        L27:
            return r1
    }

    private static int findEsdsPosition(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4, int r5, int r6) {
            int r0 = r4.getPosition()
        L4:
            int r1 = r0 - r5
            if (r1 >= r6) goto L24
            r4.setPosition(r0)
            int r1 = r4.readInt()
            if (r1 <= 0) goto L13
            r2 = 1
            goto L14
        L13:
            r2 = 0
        L14:
            java.lang.String r3 = "childAtomSize should be positive"
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r2, r3)
            int r2 = r4.readInt()
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_esds
            if (r2 != r3) goto L22
            return r0
        L22:
            int r0 = r0 + r1
            goto L4
        L24:
            r4 = -1
            return r4
    }

    private static void parseAudioSampleEntry(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r28, int r29, int r30, int r31, int r32, java.lang.String r33, boolean r34, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r35, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.StsdData r36, int r37) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = r28
            r1 = r30
            r2 = r31
            r14 = r33
            r3 = r35
            r15 = r36
            int r4 = r1 + 8
            r5 = 8
            int r4 = r4 + r5
            r0.setPosition(r4)
            r4 = 6
            r13 = 0
            if (r34 == 0) goto L20
            int r5 = r28.readUnsignedShort()
            r0.skipBytes(r4)
            goto L24
        L20:
            r0.skipBytes(r5)
            r5 = r13
        L24:
            r12 = 2
            r6 = 16
            r11 = 1
            if (r5 == 0) goto L46
            if (r5 != r11) goto L2d
            goto L46
        L2d:
            if (r5 != r12) goto L45
            r0.skipBytes(r6)
            double r4 = r28.readDouble()
            long r4 = java.lang.Math.round(r4)
            int r4 = (int) r4
            int r5 = r28.readUnsignedIntToInt()
            r6 = 20
            r0.skipBytes(r6)
            goto L57
        L45:
            return
        L46:
            int r7 = r28.readUnsignedShort()
            r0.skipBytes(r4)
            int r4 = r28.readUnsignedFixedPoint1616()
            if (r5 != r11) goto L56
            r0.skipBytes(r6)
        L56:
            r5 = r7
        L57:
            int r6 = r28.getPosition()
            int r7 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_enca
            r16 = 0
            r8 = r29
            if (r8 != r7) goto L8b
            android.util.Pair r7 = parseSampleEntryEncryptionData(r0, r1, r2)
            if (r7 == 0) goto L88
            java.lang.Object r8 = r7.first
            java.lang.Integer r8 = (java.lang.Integer) r8
            int r8 = r8.intValue()
            if (r3 != 0) goto L76
            r3 = r16
            goto L80
        L76:
            java.lang.Object r9 = r7.second
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r9 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox) r9
            java.lang.String r9 = r9.schemeType
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r3 = r3.copyWithSchemeType(r9)
        L80:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox[] r9 = r15.trackEncryptionBoxes
            java.lang.Object r7 = r7.second
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r7 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox) r7
            r9[r37] = r7
        L88:
            r0.setPosition(r6)
        L8b:
            r10 = r3
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ac_3
            java.lang.String r9 = "audio/raw"
            if (r8 != r3) goto L95
            java.lang.String r3 = "audio/ac3"
            goto Ldf
        L95:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ec_3
            if (r8 != r3) goto L9c
            java.lang.String r3 = "audio/eac3"
            goto Ldf
        L9c:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dtsc
            if (r8 != r3) goto La3
            java.lang.String r3 = "audio/vnd.dts"
            goto Ldf
        La3:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dtsh
            if (r8 == r3) goto Ldd
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dtsl
            if (r8 != r3) goto Lac
            goto Ldd
        Lac:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dtse
            if (r8 != r3) goto Lb3
            java.lang.String r3 = "audio/vnd.dts.hd;profile=lbr"
            goto Ldf
        Lb3:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_samr
            if (r8 != r3) goto Lba
            java.lang.String r3 = "audio/3gpp"
            goto Ldf
        Lba:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sawb
            if (r8 != r3) goto Lc1
            java.lang.String r3 = "audio/amr-wb"
            goto Ldf
        Lc1:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_lpcm
            if (r8 == r3) goto Ldb
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sowt
            if (r8 != r3) goto Lca
            goto Ldb
        Lca:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE__mp3
            if (r8 != r3) goto Ld1
            java.lang.String r3 = "audio/mpeg"
            goto Ldf
        Ld1:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_alac
            if (r8 != r3) goto Ld8
            java.lang.String r3 = "audio/alac"
            goto Ldf
        Ld8:
            r3 = r16
            goto Ldf
        Ldb:
            r3 = r9
            goto Ldf
        Ldd:
            java.lang.String r3 = "audio/vnd.dts.hd"
        Ldf:
            r8 = r3
            r18 = r4
            r17 = r5
            r7 = r6
            r19 = r16
        Le7:
            int r3 = r7 - r1
            r4 = -1
            if (r3 >= r2) goto L1f7
            r0.setPosition(r7)
            int r6 = r28.readInt()
            if (r6 <= 0) goto Lf7
            r3 = r11
            goto Lf8
        Lf7:
            r3 = r13
        Lf8:
            java.lang.String r5 = "childAtomSize should be positive"
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r3, r5)
            int r3 = r28.readInt()
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_esds
            if (r3 == r5) goto L1a4
            if (r34 == 0) goto L10d
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_wave
            if (r3 != r5) goto L10d
            goto L1a4
        L10d:
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dac3
            if (r3 != r4) goto L12f
            int r3 = r7 + 8
            r0.setPosition(r3)
            java.lang.String r3 = java.lang.Integer.toString(r32)
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.parseAc3AnnexFFormat(r0, r3, r14, r10)
            r15.format = r3
        L120:
            r5 = r6
            r6 = r7
            r26 = r8
            r27 = r9
            r20 = r10
            r21 = r11
            r22 = r12
            r1 = r13
            goto L1a1
        L12f:
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dec3
            if (r3 != r4) goto L143
            int r3 = r7 + 8
            r0.setPosition(r3)
            java.lang.String r3 = java.lang.Integer.toString(r32)
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.parseEAc3AnnexFFormat(r0, r3, r14, r10)
            r15.format = r3
            goto L120
        L143:
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ddts
            if (r3 != r4) goto L17d
            java.lang.String r3 = java.lang.Integer.toString(r32)
            r5 = 0
            r20 = -1
            r21 = -1
            r22 = 0
            r23 = 0
            r4 = r8
            r24 = r6
            r6 = r20
            r25 = r7
            r7 = r21
            r26 = r8
            r8 = r17
            r27 = r9
            r9 = r18
            r20 = r10
            r10 = r22
            r21 = r11
            r11 = r20
            r22 = r12
            r12 = r23
            r1 = r13
            r13 = r33
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            r15.format = r3
            r5 = r24
            goto L19f
        L17d:
            r24 = r6
            r25 = r7
            r26 = r8
            r27 = r9
            r20 = r10
            r21 = r11
            r22 = r12
            r1 = r13
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_alac
            r5 = r24
            if (r3 != r4) goto L19f
            byte[] r3 = new byte[r5]
            r6 = r25
            r0.setPosition(r6)
            r0.readBytes(r3, r1, r5)
            r19 = r3
            goto L1a1
        L19f:
            r6 = r25
        L1a1:
            r8 = r26
            goto L1e8
        L1a4:
            r5 = r6
            r6 = r7
            r26 = r8
            r27 = r9
            r20 = r10
            r21 = r11
            r22 = r12
            r1 = r13
            int r7 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_esds
            if (r3 != r7) goto L1b7
            r7 = r6
            goto L1bb
        L1b7:
            int r7 = findEsdsPosition(r0, r6, r5)
        L1bb:
            if (r7 == r4) goto L1a1
            android.util.Pair r3 = parseEsdsFromParent(r0, r7)
            java.lang.Object r4 = r3.first
            r8 = r4
            java.lang.String r8 = (java.lang.String) r8
            java.lang.Object r3 = r3.second
            r19 = r3
            byte[] r19 = (byte[]) r19
            java.lang.String r3 = "audio/mp4a-latm"
            boolean r3 = r3.equals(r8)
            if (r3 == 0) goto L1e8
            android.util.Pair r3 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.parseAacAudioSpecificConfig(r19)
            java.lang.Object r4 = r3.first
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r18 = r4.intValue()
            java.lang.Object r3 = r3.second
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r17 = r3.intValue()
        L1e8:
            int r7 = r6 + r5
            r13 = r1
            r10 = r20
            r11 = r21
            r12 = r22
            r9 = r27
            r1 = r30
            goto Le7
        L1f7:
            r26 = r8
            r27 = r9
            r20 = r10
            r22 = r12
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r15.format
            if (r0 != 0) goto L235
            r8 = r26
            if (r8 == 0) goto L235
            r0 = r27
            boolean r0 = r0.equals(r8)
            if (r0 == 0) goto L212
            r7 = r22
            goto L213
        L212:
            r7 = r4
        L213:
            java.lang.String r0 = java.lang.Integer.toString(r32)
            r2 = 0
            r3 = -1
            r4 = -1
            if (r19 != 0) goto L21d
            goto L223
        L21d:
            java.util.List r1 = java.util.Collections.singletonList(r19)
            r16 = r1
        L223:
            r10 = 0
            r1 = r8
            r5 = r17
            r6 = r18
            r8 = r16
            r9 = r20
            r11 = r33
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            r15.format = r0
        L235:
            return
    }

    static android.util.Pair<java.lang.Integer, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox> parseCommonEncryptionSinfFromParent(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11, int r12, int r13) {
            int r0 = r12 + 8
            r1 = -1
            r2 = 0
            r3 = 0
            r5 = r1
            r4 = r2
            r6 = r4
            r7 = r3
        L9:
            int r8 = r0 - r12
            if (r8 >= r13) goto L3a
            r11.setPosition(r0)
            int r8 = r11.readInt()
            int r9 = r11.readInt()
            int r10 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_frma
            if (r9 != r10) goto L25
            int r6 = r11.readInt()
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            goto L38
        L25:
            int r10 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_schm
            if (r9 != r10) goto L32
            r4 = 4
            r11.skipBytes(r4)
            java.lang.String r4 = r11.readString(r4)
            goto L38
        L32:
            int r10 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_schi
            if (r9 != r10) goto L38
            r5 = r0
            r7 = r8
        L38:
            int r0 = r0 + r8
            goto L9
        L3a:
            java.lang.String r12 = "cenc"
            boolean r12 = r12.equals(r4)
            if (r12 != 0) goto L5c
            java.lang.String r12 = "cbc1"
            boolean r12 = r12.equals(r4)
            if (r12 != 0) goto L5c
            java.lang.String r12 = "cens"
            boolean r12 = r12.equals(r4)
            if (r12 != 0) goto L5c
            java.lang.String r12 = "cbcs"
            boolean r12 = r12.equals(r4)
            if (r12 == 0) goto L5b
            goto L5c
        L5b:
            return r2
        L5c:
            r12 = 1
            if (r6 == 0) goto L61
            r13 = r12
            goto L62
        L61:
            r13 = r3
        L62:
            java.lang.String r0 = "frma atom is mandatory"
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r13, r0)
            if (r5 == r1) goto L6b
            r13 = r12
            goto L6c
        L6b:
            r13 = r3
        L6c:
            java.lang.String r0 = "schi atom is mandatory"
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r13, r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r11 = parseSchiFromParent(r11, r5, r7, r4)
            if (r11 == 0) goto L78
            r3 = r12
        L78:
            java.lang.String r12 = "tenc atom is mandatory"
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r3, r12)
            android.util.Pair r11 = android.util.Pair.create(r6, r11)
            return r11
    }

    private static android.util.Pair<long[], long[]> parseEdts(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom r8) {
            if (r8 == 0) goto L5b
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_elst
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r8 = r8.getLeafAtomOfType(r0)
            if (r8 != 0) goto Lb
            goto L5b
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8 = r8.data
            r0 = 8
            r8.setPosition(r0)
            int r0 = r8.readInt()
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomVersion(r0)
            int r1 = r8.readUnsignedIntToInt()
            long[] r2 = new long[r1]
            long[] r3 = new long[r1]
            r4 = 0
        L23:
            if (r4 >= r1) goto L56
            r5 = 1
            if (r0 != r5) goto L2d
            long r6 = r8.readUnsignedLongToLong()
            goto L31
        L2d:
            long r6 = r8.readUnsignedInt()
        L31:
            r2[r4] = r6
            if (r0 != r5) goto L3a
            long r6 = r8.readLong()
            goto L3f
        L3a:
            int r6 = r8.readInt()
            long r6 = (long) r6
        L3f:
            r3[r4] = r6
            short r6 = r8.readShort()
            if (r6 != r5) goto L4e
            r5 = 2
            r8.skipBytes(r5)
            int r4 = r4 + 1
            goto L23
        L4e:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Unsupported media rate."
            r8.<init>(r0)
            throw r8
        L56:
            android.util.Pair r8 = android.util.Pair.create(r2, r3)
            return r8
        L5b:
            r8 = 0
            android.util.Pair r8 = android.util.Pair.create(r8, r8)
            return r8
    }

    private static android.util.Pair<java.lang.String, byte[]> parseEsdsFromParent(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3, int r4) {
            int r4 = r4 + 8
            int r4 = r4 + 4
            r3.setPosition(r4)
            r4 = 1
            r3.skipBytes(r4)
            parseExpandableClassSize(r3)
            r0 = 2
            r3.skipBytes(r0)
            int r1 = r3.readUnsignedByte()
            r2 = r1 & 128(0x80, float:1.8E-43)
            if (r2 == 0) goto L1d
            r3.skipBytes(r0)
        L1d:
            r2 = r1 & 64
            if (r2 == 0) goto L28
            int r2 = r3.readUnsignedShort()
            r3.skipBytes(r2)
        L28:
            r1 = r1 & 32
            if (r1 == 0) goto L2f
            r3.skipBytes(r0)
        L2f:
            r3.skipBytes(r4)
            parseExpandableClassSize(r3)
            int r0 = r3.readUnsignedByte()
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.getMimeTypeFromMp4ObjectType(r0)
            java.lang.String r1 = "audio/mpeg"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L6d
            java.lang.String r1 = "audio/vnd.dts"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L6d
            java.lang.String r1 = "audio/vnd.dts.hd"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L56
            goto L6d
        L56:
            r1 = 12
            r3.skipBytes(r1)
            r3.skipBytes(r4)
            int r4 = parseExpandableClassSize(r3)
            byte[] r1 = new byte[r4]
            r2 = 0
            r3.readBytes(r1, r2, r4)
            android.util.Pair r3 = android.util.Pair.create(r0, r1)
            return r3
        L6d:
            r3 = 0
            android.util.Pair r3 = android.util.Pair.create(r0, r3)
            return r3
    }

    private static int parseExpandableClassSize(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3) {
            int r0 = r3.readUnsignedByte()
            r1 = r0 & 127(0x7f, float:1.78E-43)
        L6:
            r2 = 128(0x80, float:1.8E-43)
            r0 = r0 & r2
            if (r0 != r2) goto L15
            int r0 = r3.readUnsignedByte()
            int r1 = r1 << 7
            r2 = r0 & 127(0x7f, float:1.78E-43)
            r1 = r1 | r2
            goto L6
        L15:
            return r1
    }

    private static int parseHdlr(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1) {
            r0 = 16
            r1.setPosition(r0)
            int r1 = r1.readInt()
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TYPE_soun
            if (r1 != r0) goto Lf
            r1 = 1
            return r1
        Lf:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TYPE_vide
            if (r1 != r0) goto L15
            r1 = 2
            return r1
        L15:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TYPE_text
            if (r1 == r0) goto L2e
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TYPE_sbtl
            if (r1 == r0) goto L2e
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TYPE_subt
            if (r1 == r0) goto L2e
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TYPE_clcp
            if (r1 != r0) goto L26
            goto L2e
        L26:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TYPE_meta
            if (r1 != r0) goto L2c
            r1 = 4
            return r1
        L2c:
            r1 = -1
            return r1
        L2e:
            r1 = 3
            return r1
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata parseIlst(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2, int r3) {
            r0 = 8
            r2.skipBytes(r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        La:
            int r1 = r2.getPosition()
            if (r1 >= r3) goto L1a
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.parseIlstElement(r2)
            if (r1 == 0) goto La
            r0.add(r1)
            goto La
        L1a:
            boolean r2 = r0.isEmpty()
            if (r2 == 0) goto L22
            r2 = 0
            goto L27
        L22:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r2 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata
            r2.<init>(r0)
        L27:
            return r2
    }

    private static android.util.Pair<java.lang.Long, java.lang.String> parseMdhd(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4) {
            r0 = 8
            r4.setPosition(r0)
            int r1 = r4.readInt()
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomVersion(r1)
            if (r1 != 0) goto L11
            r2 = r0
            goto L13
        L11:
            r2 = 16
        L13:
            r4.skipBytes(r2)
            long r2 = r4.readUnsignedInt()
            if (r1 != 0) goto L1d
            r0 = 4
        L1d:
            r4.skipBytes(r0)
            int r4 = r4.readUnsignedShort()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ""
            r0.append(r1)
            int r1 = r4 >> 10
            r1 = r1 & 31
            int r1 = r1 + 96
            char r1 = (char) r1
            r0.append(r1)
            int r1 = r4 >> 5
            r1 = r1 & 31
            int r1 = r1 + 96
            char r1 = (char) r1
            r0.append(r1)
            r4 = r4 & 31
            int r4 = r4 + 96
            char r4 = (char) r4
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.Long r0 = java.lang.Long.valueOf(r2)
            android.util.Pair r4 = android.util.Pair.create(r0, r4)
            return r4
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata parseMetaAtom(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4, int r5) {
            r0 = 12
            r4.skipBytes(r0)
        L5:
            int r0 = r4.getPosition()
            if (r0 >= r5) goto L2a
            int r0 = r4.getPosition()
            int r1 = r4.readInt()
            int r2 = r4.readInt()
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ilst
            if (r2 != r3) goto L24
            r4.setPosition(r0)
            int r0 = r0 + r1
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r4 = parseIlst(r4, r0)
            return r4
        L24:
            int r1 = r1 + (-8)
            r4.skipBytes(r1)
            goto L5
        L2a:
            r4 = 0
            return r4
    }

    private static long parseMvhd(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2) {
            r0 = 8
            r2.setPosition(r0)
            int r1 = r2.readInt()
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomVersion(r1)
            if (r1 != 0) goto L10
            goto L12
        L10:
            r0 = 16
        L12:
            r2.skipBytes(r0)
            long r0 = r2.readUnsignedInt()
            return r0
    }

    private static float parsePaspFromParent(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0, int r1) {
            int r1 = r1 + 8
            r0.setPosition(r1)
            int r1 = r0.readUnsignedIntToInt()
            int r0 = r0.readUnsignedIntToInt()
            float r1 = (float) r1
            float r0 = (float) r0
            float r1 = r1 / r0
            return r1
    }

    private static byte[] parseProjFromParent(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4, int r5, int r6) {
            int r0 = r5 + 8
        L2:
            int r1 = r0 - r5
            if (r1 >= r6) goto L1f
            r4.setPosition(r0)
            int r1 = r4.readInt()
            int r2 = r4.readInt()
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_proj
            if (r2 != r3) goto L1d
            byte[] r4 = r4.data
            int r1 = r1 + r0
            byte[] r4 = java.util.Arrays.copyOfRange(r4, r0, r1)
            return r4
        L1d:
            int r0 = r0 + r1
            goto L2
        L1f:
            r4 = 0
            return r4
    }

    private static android.util.Pair<java.lang.Integer, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox> parseSampleEntryEncryptionData(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4, int r5, int r6) {
            int r0 = r4.getPosition()
        L4:
            int r1 = r0 - r5
            if (r1 >= r6) goto L2a
            r4.setPosition(r0)
            int r1 = r4.readInt()
            if (r1 <= 0) goto L13
            r2 = 1
            goto L14
        L13:
            r2 = 0
        L14:
            java.lang.String r3 = "childAtomSize should be positive"
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r2, r3)
            int r2 = r4.readInt()
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sinf
            if (r2 != r3) goto L28
            android.util.Pair r2 = parseCommonEncryptionSinfFromParent(r4, r0, r1)
            if (r2 == 0) goto L28
            return r2
        L28:
            int r0 = r0 + r1
            goto L4
        L2a:
            r4 = 0
            return r4
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox parseSchiFromParent(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11, int r12, int r13, java.lang.String r14) {
            int r0 = r12 + 8
        L2:
            int r1 = r0 - r12
            r2 = 0
            if (r1 >= r13) goto L63
            r11.setPosition(r0)
            int r1 = r11.readInt()
            int r3 = r11.readInt()
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tenc
            if (r3 != r4) goto L61
            int r12 = r11.readInt()
            int r12 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomVersion(r12)
            r13 = 1
            r11.skipBytes(r13)
            r0 = 0
            if (r12 != 0) goto L2b
            r11.skipBytes(r13)
            r8 = r0
            r9 = r8
            goto L37
        L2b:
            int r12 = r11.readUnsignedByte()
            r1 = r12 & 240(0xf0, float:3.36E-43)
            int r1 = r1 >> 4
            r12 = r12 & 15
            r9 = r12
            r8 = r1
        L37:
            int r12 = r11.readUnsignedByte()
            if (r12 != r13) goto L3f
            r4 = r13
            goto L40
        L3f:
            r4 = r0
        L40:
            int r6 = r11.readUnsignedByte()
            r12 = 16
            byte[] r7 = new byte[r12]
            r11.readBytes(r7, r0, r12)
            if (r4 == 0) goto L58
            if (r6 != 0) goto L58
            int r12 = r11.readUnsignedByte()
            byte[] r2 = new byte[r12]
            r11.readBytes(r2, r0, r12)
        L58:
            r10 = r2
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r11 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox
            r3 = r11
            r5 = r14
            r3.<init>(r4, r5, r6, r7, r8, r9, r10)
            return r11
        L61:
            int r0 = r0 + r1
            goto L2
        L63:
            return r2
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable parseStbl(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r41, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom r42, com.mbridge.msdk.playercommon.exoplayer2.extractor.GaplessInfoHolder r43) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r1 = r41
            r0 = r42
            r2 = r43
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stsz
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r3 = r0.getLeafAtomOfType(r3)
            if (r3 == 0) goto L14
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers$StszSampleSizeBox r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers$StszSampleSizeBox
            r4.<init>(r3)
            goto L21
        L14:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stz2
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r3 = r0.getLeafAtomOfType(r3)
            if (r3 == 0) goto L4ae
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers$Stz2SampleSizeBox r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers$Stz2SampleSizeBox
            r4.<init>(r3)
        L21:
            int r3 = r4.getSampleCount()
            r5 = 0
            if (r3 != 0) goto L42
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r9 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable
            long[] r2 = new long[r5]
            int[] r3 = new int[r5]
            r4 = 0
            long[] r6 = new long[r5]
            int[] r7 = new int[r5]
            r10 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0 = r9
            r1 = r41
            r5 = r6
            r6 = r7
            r7 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r9
        L42:
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stco
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r6 = r0.getLeafAtomOfType(r6)
            r7 = 1
            if (r6 != 0) goto L53
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_co64
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r6 = r0.getLeafAtomOfType(r6)
            r8 = r7
            goto L54
        L53:
            r8 = r5
        L54:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r6.data
            int r9 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stsc
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r9 = r0.getLeafAtomOfType(r9)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9 = r9.data
            int r10 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stts
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r10 = r0.getLeafAtomOfType(r10)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r10.data
            int r11 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stss
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r11 = r0.getLeafAtomOfType(r11)
            r12 = 0
            if (r11 == 0) goto L72
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r11.data
            goto L73
        L72:
            r11 = r12
        L73:
            int r13 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ctts
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r0 = r0.getLeafAtomOfType(r13)
            if (r0 == 0) goto L7e
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r0.data
            goto L7f
        L7e:
            r0 = r12
        L7f:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers$ChunkIterator r13 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers$ChunkIterator
            r13.<init>(r9, r6, r8)
            r6 = 12
            r10.setPosition(r6)
            int r8 = r10.readUnsignedIntToInt()
            int r8 = r8 - r7
            int r9 = r10.readUnsignedIntToInt()
            int r14 = r10.readUnsignedIntToInt()
            if (r0 == 0) goto La0
            r0.setPosition(r6)
            int r15 = r0.readUnsignedIntToInt()
            goto La1
        La0:
            r15 = r5
        La1:
            r16 = -1
            if (r11 == 0) goto Lb5
            r11.setPosition(r6)
            int r6 = r11.readUnsignedIntToInt()
            if (r6 <= 0) goto Lb7
            int r12 = r11.readUnsignedIntToInt()
            int r16 = r12 + (-1)
            goto Lb6
        Lb5:
            r6 = r5
        Lb6:
            r12 = r11
        Lb7:
            boolean r11 = r4.isFixedSampleSize()
            if (r11 == 0) goto Ld1
            com.mbridge.msdk.playercommon.exoplayer2.Format r11 = r1.format
            java.lang.String r11 = r11.sampleMimeType
            java.lang.String r5 = "audio/raw"
            boolean r5 = r5.equals(r11)
            if (r5 == 0) goto Ld1
            if (r8 != 0) goto Ld1
            if (r15 != 0) goto Ld1
            if (r6 != 0) goto Ld1
            r5 = r7
            goto Ld2
        Ld1:
            r5 = 0
        Ld2:
            java.lang.String r11 = "AtomParsers"
            r18 = 0
            if (r5 != 0) goto L210
            long[] r5 = new long[r3]
            int[] r7 = new int[r3]
            r42 = r6
            long[] r6 = new long[r3]
            r21 = r8
            int[] r8 = new int[r3]
            r24 = r10
            r2 = r14
            r25 = r18
            r27 = r25
            r14 = r21
            r1 = 0
            r10 = 0
            r21 = 0
            r22 = 0
            r23 = 0
            r40 = r9
            r9 = r42
            r42 = r11
            r11 = r16
            r16 = r15
            r15 = r40
        L101:
            if (r1 >= r3) goto L192
        L103:
            if (r23 != 0) goto L11d
            boolean r23 = r13.moveNext()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r23)
            r29 = r14
            r30 = r15
            long r14 = r13.offset
            r27 = r14
            int r14 = r13.numSamples
            r23 = r14
            r14 = r29
            r15 = r30
            goto L103
        L11d:
            r29 = r14
            r30 = r15
            if (r0 == 0) goto L134
        L123:
            if (r21 != 0) goto L132
            if (r16 <= 0) goto L132
            int r21 = r0.readUnsignedIntToInt()
            int r22 = r0.readInt()
            int r16 = r16 + (-1)
            goto L123
        L132:
            int r21 = r21 + (-1)
        L134:
            r14 = r22
            r5[r1] = r27
            int r15 = r4.readNextSampleSize()
            r7[r1] = r15
            r15 = r7[r1]
            if (r15 <= r10) goto L144
            r10 = r7[r1]
        L144:
            r15 = r4
            r22 = r5
            long r4 = (long) r14
            long r4 = r25 + r4
            r6[r1] = r4
            if (r12 != 0) goto L150
            r4 = 1
            goto L151
        L150:
            r4 = 0
        L151:
            r8[r1] = r4
            if (r1 != r11) goto L162
            r4 = 1
            r8[r1] = r4
            int r9 = r9 + (-1)
            if (r9 <= 0) goto L162
            int r5 = r12.readUnsignedIntToInt()
            int r5 = r5 - r4
            r11 = r5
        L162:
            long r4 = (long) r2
            long r25 = r25 + r4
            int r4 = r30 + (-1)
            if (r4 != 0) goto L17c
            if (r29 <= 0) goto L17c
            int r2 = r24.readUnsignedIntToInt()
            int r4 = r24.readInt()
            int r5 = r29 + (-1)
            r29 = r5
            r40 = r4
            r4 = r2
            r2 = r40
        L17c:
            r5 = r7[r1]
            r30 = r4
            long r4 = (long) r5
            long r27 = r27 + r4
            int r23 = r23 + (-1)
            int r1 = r1 + 1
            r4 = r15
            r5 = r22
            r15 = r30
            r22 = r14
            r14 = r29
            goto L101
        L192:
            r29 = r14
            r30 = r15
            r14 = r22
            r22 = r5
            long r1 = (long) r14
            long r25 = r25 + r1
            if (r21 != 0) goto L1a1
            r1 = 1
            goto L1a2
        L1a1:
            r1 = 0
        L1a2:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r1)
        L1a5:
            if (r16 <= 0) goto L1b9
            int r1 = r0.readUnsignedIntToInt()
            if (r1 != 0) goto L1af
            r1 = 1
            goto L1b0
        L1af:
            r1 = 0
        L1b0:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r1)
            r0.readInt()
            int r16 = r16 + (-1)
            goto L1a5
        L1b9:
            if (r9 != 0) goto L1c9
            if (r30 != 0) goto L1c9
            r0 = r23
            if (r0 != 0) goto L1cb
            if (r29 == 0) goto L1c4
            goto L1cb
        L1c4:
            r2 = r41
            r1 = r42
            goto L209
        L1c9:
            r0 = r23
        L1cb:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Inconsistent stbl box for track "
            r1.append(r2)
            r2 = r41
            int r4 = r2.id
            r1.append(r4)
            java.lang.String r4 = ": remainingSynchronizationSamples "
            r1.append(r4)
            r1.append(r9)
            java.lang.String r4 = ", remainingSamplesAtTimestampDelta "
            r1.append(r4)
            r9 = r30
            r1.append(r9)
            java.lang.String r4 = ", remainingSamplesInChunk "
            r1.append(r4)
            r1.append(r0)
            java.lang.String r0 = ", remainingTimestampDeltaChanges "
            r1.append(r0)
            r0 = r29
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r1 = r42
            android.util.Log.w(r1, r0)
        L209:
            r14 = r6
            r5 = r7
            r15 = r8
            r6 = r10
            r4 = r22
            goto L24e
        L210:
            r2 = r1
            r1 = r11
            int r0 = r13.length
            long[] r0 = new long[r0]
            int r4 = r13.length
            int[] r4 = new int[r4]
        L21a:
            boolean r5 = r13.moveNext()
            if (r5 == 0) goto L22d
            int r5 = r13.index
            long r6 = r13.offset
            r0[r5] = r6
            int r5 = r13.index
            int r6 = r13.numSamples
            r4[r5] = r6
            goto L21a
        L22d:
            com.mbridge.msdk.playercommon.exoplayer2.Format r5 = r2.format
            int r5 = r5.pcmEncoding
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r2.format
            int r6 = r6.channelCount
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getPcmFrameSize(r5, r6)
            long r6 = (long) r14
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FixedSampleSizeRechunker$Results r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FixedSampleSizeRechunker.rechunk(r5, r0, r4, r6)
            long[] r4 = r0.offsets
            int[] r5 = r0.sizes
            int r6 = r0.maximumSize
            long[] r7 = r0.timestamps
            int[] r8 = r0.flags
            long r9 = r0.duration
            r14 = r7
            r15 = r8
            r25 = r9
        L24e:
            r9 = 1000000(0xf4240, double:4.940656E-318)
            long r11 = r2.timescale
            r7 = r25
            long r21 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r7, r9, r11)
            long[] r0 = r2.editListDurations
            r12 = 1000000(0xf4240, double:4.940656E-318)
            if (r0 == 0) goto L48f
            boolean r0 = r43.hasGaplessInfo()
            if (r0 == 0) goto L268
            goto L48f
        L268:
            long[] r0 = r2.editListDurations
            int r0 = r0.length
            r7 = 1
            if (r0 != r7) goto L2f6
            int r0 = r2.type
            if (r0 != r7) goto L2f6
            int r0 = r14.length
            r7 = 2
            if (r0 < r7) goto L2f6
            long[] r0 = r2.editListMediaTimes
            r7 = 0
            r23 = r0[r7]
            long[] r0 = r2.editListDurations
            r27 = r0[r7]
            long r7 = r2.timescale
            long r9 = r2.movieTimescale
            r29 = r7
            r31 = r9
            long r7 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r27, r29, r31)
            long r27 = r23 + r7
            r7 = r14
            r8 = r25
            r10 = r23
            r42 = r1
            r0 = r12
            r12 = r27
            boolean r7 = canApplyEditWithGaplessInfo(r7, r8, r10, r12)
            if (r7 == 0) goto L2f8
            long r8 = r25 - r27
            r7 = 0
            r10 = r14[r7]
            long r27 = r23 - r10
            com.mbridge.msdk.playercommon.exoplayer2.Format r7 = r2.format
            int r7 = r7.sampleRate
            long r10 = (long) r7
            long r12 = r2.timescale
            r29 = r10
            r31 = r12
            long r12 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r27, r29, r31)
            com.mbridge.msdk.playercommon.exoplayer2.Format r7 = r2.format
            int r7 = r7.sampleRate
            long r10 = (long) r7
            long r0 = r2.timescale
            r16 = r6
            r6 = r12
            r12 = r0
            long r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r8, r10, r12)
            int r8 = (r6 > r18 ? 1 : (r6 == r18 ? 0 : -1))
            if (r8 != 0) goto L2ca
            int r8 = (r0 > r18 ? 1 : (r0 == r18 ? 0 : -1))
            if (r8 == 0) goto L2fa
        L2ca:
            r8 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r10 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r10 > 0) goto L2fa
            int r8 = (r0 > r8 ? 1 : (r0 == r8 ? 0 : -1))
            if (r8 > 0) goto L2fa
            int r3 = (int) r6
            r6 = r43
            r6.encoderDelay = r3
            int r0 = (int) r0
            r6.encoderPadding = r0
            long r0 = r2.timescale
            r6 = 1000000(0xf4240, double:4.940656E-318)
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestampsInPlace(r14, r6, r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r9 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable
            r0 = r9
            r1 = r41
            r2 = r4
            r3 = r5
            r4 = r16
            r5 = r14
            r6 = r15
            r7 = r21
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r9
        L2f6:
            r42 = r1
        L2f8:
            r16 = r6
        L2fa:
            long[] r0 = r2.editListDurations
            int r0 = r0.length
            r1 = 1
            if (r0 != r1) goto L33f
            long[] r0 = r2.editListDurations
            r1 = 0
            r6 = r0[r1]
            int r0 = (r6 > r18 ? 1 : (r6 == r18 ? 0 : -1))
            if (r0 != 0) goto L33f
            long[] r0 = r2.editListMediaTimes
            r6 = r0[r1]
            r0 = 0
        L30e:
            int r1 = r14.length
            if (r0 >= r1) goto L325
            r8 = r14[r0]
            long r17 = r8 - r6
            r19 = 1000000(0xf4240, double:4.940656E-318)
            long r8 = r2.timescale
            r21 = r8
            long r8 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r17, r19, r21)
            r14[r0] = r8
            int r0 = r0 + 1
            goto L30e
        L325:
            long r8 = r25 - r6
            r10 = 1000000(0xf4240, double:4.940656E-318)
            long r12 = r2.timescale
            long r7 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r8, r10, r12)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r9 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable
            r0 = r9
            r1 = r41
            r2 = r4
            r3 = r5
            r4 = r16
            r5 = r14
            r6 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r9
        L33f:
            int r0 = r2.type
            r1 = 1
            if (r0 != r1) goto L346
            r0 = 1
            goto L347
        L346:
            r0 = 0
        L347:
            r1 = 0
            r6 = 0
            r7 = 0
            r8 = 0
        L34b:
            long[] r9 = r2.editListDurations
            int r9 = r9.length
            r10 = -1
            if (r7 >= r9) goto L38f
            long[] r9 = r2.editListMediaTimes
            r12 = r9[r7]
            int r9 = (r12 > r10 ? 1 : (r12 == r10 ? 0 : -1))
            if (r9 == 0) goto L384
            long[] r9 = r2.editListDurations
            r21 = r9[r7]
            long r9 = r2.timescale
            r27 = r4
            r28 = r5
            long r4 = r2.movieTimescale
            r23 = r9
            r25 = r4
            long r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r21, r23, r25)
            r9 = 1
            int r10 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchCeil(r14, r12, r9, r9)
            long r12 = r12 + r4
            r4 = 0
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchCeil(r14, r12, r0, r4)
            int r4 = r5 - r10
            int r6 = r6 + r4
            if (r8 == r10) goto L380
            r4 = 1
            goto L381
        L380:
            r4 = 0
        L381:
            r1 = r1 | r4
            r8 = r5
            goto L388
        L384:
            r27 = r4
            r28 = r5
        L388:
            int r7 = r7 + 1
            r4 = r27
            r5 = r28
            goto L34b
        L38f:
            r27 = r4
            r28 = r5
            if (r6 == r3) goto L397
            r4 = 1
            goto L398
        L397:
            r4 = 0
        L398:
            r1 = r1 | r4
            if (r1 == 0) goto L39e
            long[] r3 = new long[r6]
            goto L3a0
        L39e:
            r3 = r27
        L3a0:
            if (r1 == 0) goto L3a5
            int[] r4 = new int[r6]
            goto L3a7
        L3a5:
            r4 = r28
        L3a7:
            if (r1 == 0) goto L3ab
            r16 = 0
        L3ab:
            if (r1 == 0) goto L3b1
            int[] r5 = new int[r6]
            r7 = r5
            goto L3b2
        L3b1:
            r7 = r15
        L3b2:
            long[] r5 = new long[r6]
            r6 = 0
            r8 = 0
        L3b6:
            long[] r9 = r2.editListDurations
            int r9 = r9.length
            if (r6 >= r9) goto L472
            long[] r9 = r2.editListMediaTimes
            r12 = r9[r6]
            long[] r9 = r2.editListDurations
            r29 = r9[r6]
            int r9 = (r12 > r10 ? 1 : (r12 == r10 ? 0 : -1))
            if (r9 == 0) goto L458
            long r10 = r2.timescale
            r9 = r5
            r43 = r6
            long r5 = r2.movieTimescale
            r21 = r29
            r23 = r10
            r25 = r5
            long r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r21, r23, r25)
            long r5 = r5 + r12
            r10 = 1
            int r11 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchCeil(r14, r12, r10, r10)
            r10 = 0
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchCeil(r14, r5, r0, r10)
            if (r1 == 0) goto L3f5
            int r6 = r5 - r11
            r10 = r27
            java.lang.System.arraycopy(r10, r11, r3, r8, r6)
            r10 = r28
            java.lang.System.arraycopy(r10, r11, r4, r8, r6)
            java.lang.System.arraycopy(r15, r11, r7, r8, r6)
            goto L3f7
        L3f5:
            r10 = r28
        L3f7:
            if (r11 >= r5) goto L411
            r6 = r7[r8]
            r20 = 1
            r6 = r6 & 1
            if (r6 == 0) goto L404
            r6 = r42
            goto L415
        L404:
            java.lang.String r0 = "Ignoring edit list: edit does not start with a sync sample."
            r6 = r42
            android.util.Log.w(r6, r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers$UnhandledEditListException r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers$UnhandledEditListException
            r0.<init>()
            throw r0
        L411:
            r6 = r42
            r20 = 1
        L415:
            r28 = r0
            r0 = r16
        L419:
            if (r11 >= r5) goto L453
            r23 = 1000000(0xf4240, double:4.940656E-318)
            r42 = r5
            r33 = r6
            long r5 = r2.movieTimescale
            r21 = r18
            r25 = r5
            long r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r21, r23, r25)
            r21 = r14[r11]
            long r34 = r21 - r12
            r36 = 1000000(0xf4240, double:4.940656E-318)
            r21 = r12
            long r12 = r2.timescale
            r38 = r12
            long r12 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r34, r36, r38)
            long r5 = r5 + r12
            r9[r8] = r5
            if (r1 == 0) goto L448
            r5 = r4[r8]
            if (r5 <= r0) goto L448
            r0 = r10[r11]
        L448:
            int r8 = r8 + 1
            int r11 = r11 + 1
            r5 = r42
            r12 = r21
            r6 = r33
            goto L419
        L453:
            r33 = r6
            r16 = r0
            goto L463
        L458:
            r33 = r42
            r9 = r5
            r43 = r6
            r10 = r28
            r20 = 1
            r28 = r0
        L463:
            long r18 = r18 + r29
            int r6 = r43 + 1
            r5 = r9
            r0 = r28
            r42 = r33
            r28 = r10
            r10 = -1
            goto L3b6
        L472:
            r9 = r5
            r23 = 1000000(0xf4240, double:4.940656E-318)
            long r0 = r2.timescale
            r21 = r18
            r25 = r0
            long r10 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r21, r23, r25)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r12 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable
            r0 = r12
            r1 = r41
            r2 = r3
            r3 = r4
            r4 = r16
            r6 = r7
            r7 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r12
        L48f:
            r27 = r4
            r10 = r5
            r16 = r6
            long r0 = r2.timescale
            r3 = 1000000(0xf4240, double:4.940656E-318)
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestampsInPlace(r14, r3, r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r9 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable
            r0 = r9
            r1 = r41
            r2 = r27
            r3 = r10
            r4 = r16
            r5 = r14
            r6 = r15
            r7 = r21
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r9
        L4ae:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r0 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r1 = "Track has no sample table size information"
            r0.<init>(r1)
            throw r0
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.StsdData parseStsd(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r17, int r18, int r19, java.lang.String r20, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r21, boolean r22) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r10 = r17
            r0 = 12
            r10.setPosition(r0)
            int r11 = r17.readInt()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers$StsdData r12 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers$StsdData
            r12.<init>(r11)
            r13 = 0
            r14 = r13
        L12:
            if (r14 >= r11) goto Leb
            int r15 = r17.getPosition()
            int r16 = r17.readInt()
            if (r16 <= 0) goto L20
            r0 = 1
            goto L21
        L20:
            r0 = r13
        L21:
            java.lang.String r1 = "childAtomSize should be positive"
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0, r1)
            int r1 = r17.readInt()
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_avc1
            if (r1 == r0) goto Ld2
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_avc3
            if (r1 == r0) goto Ld2
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_encv
            if (r1 == r0) goto Ld2
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mp4v
            if (r1 == r0) goto Ld2
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_hvc1
            if (r1 == r0) goto Ld2
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_hev1
            if (r1 == r0) goto Ld2
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_s263
            if (r1 == r0) goto Ld2
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_vp08
            if (r1 == r0) goto Ld2
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_vp09
            if (r1 != r0) goto L50
            goto Ld2
        L50:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mp4a
            if (r1 == r0) goto Lbf
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_enca
            if (r1 == r0) goto Lbf
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ac_3
            if (r1 == r0) goto Lbf
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ec_3
            if (r1 == r0) goto Lbf
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dtsc
            if (r1 == r0) goto Lbf
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dtse
            if (r1 == r0) goto Lbf
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dtsh
            if (r1 == r0) goto Lbf
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dtsl
            if (r1 == r0) goto Lbf
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_samr
            if (r1 == r0) goto Lbf
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sawb
            if (r1 == r0) goto Lbf
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_lpcm
            if (r1 == r0) goto Lbf
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sowt
            if (r1 == r0) goto Lbf
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE__mp3
            if (r1 == r0) goto Lbf
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_alac
            if (r1 != r0) goto L89
            goto Lbf
        L89:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_TTML
            if (r1 == r0) goto Lb1
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tx3g
            if (r1 == r0) goto Lb1
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_wvtt
            if (r1 == r0) goto Lb1
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stpp
            if (r1 == r0) goto Lb1
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_c608
            if (r1 != r0) goto L9e
            goto Lb1
        L9e:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_camm
            if (r1 != r0) goto Le2
            java.lang.String r0 = java.lang.Integer.toString(r18)
            r1 = -1
            r2 = 0
            java.lang.String r3 = "application/x-camera-motion"
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = com.mbridge.msdk.playercommon.exoplayer2.Format.createSampleFormat(r0, r3, r2, r1, r2)
            r12.format = r0
            goto Le2
        Lb1:
            r0 = r17
            r2 = r15
            r3 = r16
            r4 = r18
            r5 = r20
            r6 = r12
            parseTextSampleEntry(r0, r1, r2, r3, r4, r5, r6)
            goto Le2
        Lbf:
            r0 = r17
            r2 = r15
            r3 = r16
            r4 = r18
            r5 = r20
            r6 = r22
            r7 = r21
            r8 = r12
            r9 = r14
            parseAudioSampleEntry(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9)
            goto Le2
        Ld2:
            r0 = r17
            r2 = r15
            r3 = r16
            r4 = r18
            r5 = r19
            r6 = r21
            r7 = r12
            r8 = r14
            parseVideoSampleEntry(r0, r1, r2, r3, r4, r5, r6, r7, r8)
        Le2:
            int r15 = r15 + r16
            r10.setPosition(r15)
            int r14 = r14 + 1
            goto L12
        Leb:
            return r12
    }

    private static void parseTextSampleEntry(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r19, int r20, int r21, int r22, int r23, java.lang.String r24, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.StsdData r25) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = r19
            r1 = r20
            r2 = r25
            int r3 = r21 + 8
            int r3 = r3 + 8
            r0.setPosition(r3)
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_TTML
            java.lang.String r4 = "application/ttml+xml"
            r5 = 0
            r6 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            if (r1 != r3) goto L1f
        L19:
            r9 = r4
            r18 = r5
            r16 = r6
            goto L4c
        L1f:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tx3g
            if (r1 != r3) goto L34
            int r1 = r22 + (-8)
            int r1 = r1 + (-8)
            byte[] r3 = new byte[r1]
            r4 = 0
            r0.readBytes(r3, r4, r1)
            java.util.List r5 = java.util.Collections.singletonList(r3)
            java.lang.String r4 = "application/x-quicktime-tx3g"
            goto L19
        L34:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_wvtt
            if (r1 != r0) goto L3b
            java.lang.String r4 = "application/x-mp4-vtt"
            goto L19
        L3b:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stpp
            if (r1 != r0) goto L42
            r6 = 0
            goto L19
        L42:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_c608
            if (r1 != r0) goto L5e
            r0 = 1
            r2.requiredSampleTransformation = r0
            java.lang.String r4 = "application/x-mp4-cea-608"
            goto L19
        L4c:
            java.lang.String r8 = java.lang.Integer.toString(r23)
            r10 = 0
            r11 = -1
            r12 = 0
            r14 = -1
            r15 = 0
            r13 = r24
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = com.mbridge.msdk.playercommon.exoplayer2.Format.createTextSampleFormat(r8, r9, r10, r11, r12, r13, r14, r15, r16, r18)
            r2.format = r0
            return
        L5e:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>()
            throw r0
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TkhdData parseTkhd(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11) {
            r0 = 8
            r11.setPosition(r0)
            int r1 = r11.readInt()
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomVersion(r1)
            r2 = 16
            if (r1 != 0) goto L13
            r3 = r0
            goto L14
        L13:
            r3 = r2
        L14:
            r11.skipBytes(r3)
            int r3 = r11.readInt()
            r4 = 4
            r11.skipBytes(r4)
            int r5 = r11.getPosition()
            if (r1 != 0) goto L26
            r0 = r4
        L26:
            r6 = 0
            r7 = r6
        L28:
            if (r7 >= r0) goto L38
            byte[] r8 = r11.data
            int r9 = r5 + r7
            r8 = r8[r9]
            r9 = -1
            if (r8 == r9) goto L35
            r5 = r6
            goto L39
        L35:
            int r7 = r7 + 1
            goto L28
        L38:
            r5 = 1
        L39:
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r5 == 0) goto L44
            r11.skipBytes(r0)
            goto L57
        L44:
            if (r1 != 0) goto L4b
            long r0 = r11.readUnsignedInt()
            goto L4f
        L4b:
            long r0 = r11.readUnsignedLongToLong()
        L4f:
            r9 = 0
            int r5 = (r0 > r9 ? 1 : (r0 == r9 ? 0 : -1))
            if (r5 != 0) goto L56
            goto L57
        L56:
            r7 = r0
        L57:
            r11.skipBytes(r2)
            int r0 = r11.readInt()
            int r1 = r11.readInt()
            r11.skipBytes(r4)
            int r2 = r11.readInt()
            int r11 = r11.readInt()
            r4 = 65536(0x10000, float:9.1835E-41)
            r5 = -65536(0xffffffffffff0000, float:NaN)
            if (r0 != 0) goto L7c
            if (r1 != r4) goto L7c
            if (r2 != r5) goto L7c
            if (r11 != 0) goto L7c
            r6 = 90
            goto L91
        L7c:
            if (r0 != 0) goto L87
            if (r1 != r5) goto L87
            if (r2 != r4) goto L87
            if (r11 != 0) goto L87
            r6 = 270(0x10e, float:3.78E-43)
            goto L91
        L87:
            if (r0 != r5) goto L91
            if (r1 != 0) goto L91
            if (r2 != 0) goto L91
            if (r11 != r5) goto L91
            r6 = 180(0xb4, float:2.52E-43)
        L91:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers$TkhdData r11 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers$TkhdData
            r11.<init>(r3, r7, r6)
            return r11
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track parseTrak(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom r18, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom r19, long r20, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r22, boolean r23, boolean r24) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = r18
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mdia
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r1 = r0.getContainerAtomOfType(r1)
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_hdlr
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r2 = r1.getLeafAtomOfType(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r2.data
            int r5 = parseHdlr(r2)
            r2 = 0
            r3 = -1
            if (r5 != r3) goto L19
            return r2
        L19:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tkhd
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r3 = r0.getLeafAtomOfType(r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r3.data
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers$TkhdData r3 = parseTkhd(r3)
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r4 = (r20 > r6 ? 1 : (r20 == r6 ? 0 : -1))
            if (r4 != 0) goto L36
            long r8 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TkhdData.access$000(r3)
            r4 = r19
            r10 = r8
            goto L3a
        L36:
            r4 = r19
            r10 = r20
        L3a:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r4.data
            long r8 = parseMvhd(r4)
            int r4 = (r10 > r6 ? 1 : (r10 == r6 ? 0 : -1))
            if (r4 != 0) goto L45
            goto L4d
        L45:
            r12 = 1000000(0xf4240, double:4.940656E-318)
            r14 = r8
            long r6 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r10, r12, r14)
        L4d:
            r10 = r6
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_minf
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r4 = r1.getContainerAtomOfType(r4)
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stbl
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r4 = r4.getContainerAtomOfType(r6)
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mdhd
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r1 = r1.getLeafAtomOfType(r6)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r1.data
            android.util.Pair r1 = parseMdhd(r1)
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stsd
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r4 = r4.getLeafAtomOfType(r6)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r12 = r4.data
            int r13 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TkhdData.access$100(r3)
            int r14 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TkhdData.access$200(r3)
            java.lang.Object r4 = r1.second
            r15 = r4
            java.lang.String r15 = (java.lang.String) r15
            r16 = r22
            r17 = r24
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers$StsdData r4 = parseStsd(r12, r13, r14, r15, r16, r17)
            if (r23 != 0) goto L9c
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_edts
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r0 = r0.getContainerAtomOfType(r6)
            android.util.Pair r0 = parseEdts(r0)
            java.lang.Object r6 = r0.first
            long[] r6 = (long[]) r6
            java.lang.Object r0 = r0.second
            long[] r0 = (long[]) r0
            r17 = r0
            r16 = r6
            goto La0
        L9c:
            r16 = r2
            r17 = r16
        La0:
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r4.format
            if (r0 != 0) goto La5
            goto Lc0
        La5:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r2 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.TkhdData.access$100(r3)
            java.lang.Object r1 = r1.first
            java.lang.Long r1 = (java.lang.Long) r1
            long r6 = r1.longValue()
            com.mbridge.msdk.playercommon.exoplayer2.Format r12 = r4.format
            int r13 = r4.requiredSampleTransformation
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox[] r14 = r4.trackEncryptionBoxes
            int r15 = r4.nalUnitLengthFieldLength
            r3 = r2
            r4 = r0
            r3.<init>(r4, r5, r6, r8, r10, r12, r13, r14, r15, r16, r17)
        Lc0:
            return r2
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata parseUdta(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom r5, boolean r6) {
            r0 = 0
            if (r6 == 0) goto L4
            return r0
        L4:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r5.data
            r6 = 8
            r5.setPosition(r6)
        Lb:
            int r1 = r5.bytesLeft()
            if (r1 < r6) goto L30
            int r1 = r5.getPosition()
            int r2 = r5.readInt()
            int r3 = r5.readInt()
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_meta
            if (r3 != r4) goto L2a
            r5.setPosition(r1)
            int r1 = r1 + r2
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r5 = parseMetaAtom(r5, r1)
            return r5
        L2a:
            int r2 = r2 + (-8)
            r5.skipBytes(r2)
            goto Lb
        L30:
            return r0
    }

    private static void parseVideoSampleEntry(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r21, int r22, int r23, int r24, int r25, int r26, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r27, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.StsdData r28, int r29) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = r21
            r1 = r23
            r2 = r24
            r3 = r27
            r4 = r28
            int r5 = r1 + 8
            int r5 = r5 + 8
            r0.setPosition(r5)
            r5 = 16
            r0.skipBytes(r5)
            int r11 = r21.readUnsignedShort()
            int r12 = r21.readUnsignedShort()
            r5 = 50
            r0.skipBytes(r5)
            int r5 = r21.getPosition()
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_encv
            r7 = 0
            r8 = r22
            if (r8 != r6) goto L55
            android.util.Pair r6 = parseSampleEntryEncryptionData(r0, r1, r2)
            if (r6 == 0) goto L52
            java.lang.Object r8 = r6.first
            java.lang.Integer r8 = (java.lang.Integer) r8
            int r8 = r8.intValue()
            if (r3 != 0) goto L40
            r3 = r7
            goto L4a
        L40:
            java.lang.Object r9 = r6.second
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r9 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox) r9
            java.lang.String r9 = r9.schemeType
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r3 = r3.copyWithSchemeType(r9)
        L4a:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox[] r9 = r4.trackEncryptionBoxes
            java.lang.Object r6 = r6.second
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r6 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox) r6
            r9[r29] = r6
        L52:
            r0.setPosition(r5)
        L55:
            r20 = r3
            r3 = -1
            r9 = 1065353216(0x3f800000, float:1.0)
            r18 = r3
            r14 = r7
            r17 = r14
            r16 = r9
            r3 = 0
        L62:
            int r9 = r5 - r1
            if (r9 >= r2) goto L14e
            r0.setPosition(r5)
            int r9 = r21.getPosition()
            int r10 = r21.readInt()
            if (r10 != 0) goto L7c
            int r13 = r21.getPosition()
            int r13 = r13 - r1
            if (r13 != r2) goto L7c
            goto L14e
        L7c:
            if (r10 <= 0) goto L80
            r15 = 1
            goto L81
        L80:
            r15 = 0
        L81:
            java.lang.String r6 = "childAtomSize should be positive"
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r15, r6)
            int r6 = r21.readInt()
            int r15 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_avcC
            r13 = 3
            if (r6 != r15) goto Lb0
            if (r7 != 0) goto L93
            r13 = 1
            goto L94
        L93:
            r13 = 0
        L94:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r13)
            int r9 = r9 + 8
            r0.setPosition(r9)
            com.mbridge.msdk.playercommon.exoplayer2.video.AvcConfig r6 = com.mbridge.msdk.playercommon.exoplayer2.video.AvcConfig.parse(r21)
            java.util.List<byte[]> r14 = r6.initializationData
            int r7 = r6.nalUnitLengthFieldLength
            r4.nalUnitLengthFieldLength = r7
            if (r3 != 0) goto Lac
            float r6 = r6.pixelWidthAspectRatio
            r16 = r6
        Lac:
            java.lang.String r7 = "video/avc"
            goto L14b
        Lb0:
            int r15 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_hvcC
            if (r6 != r15) goto Lcf
            if (r7 != 0) goto Lb8
            r13 = 1
            goto Lb9
        Lb8:
            r13 = 0
        Lb9:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r13)
            int r9 = r9 + 8
            r0.setPosition(r9)
            com.mbridge.msdk.playercommon.exoplayer2.video.HevcConfig r6 = com.mbridge.msdk.playercommon.exoplayer2.video.HevcConfig.parse(r21)
            java.util.List<byte[]> r14 = r6.initializationData
            int r6 = r6.nalUnitLengthFieldLength
            r4.nalUnitLengthFieldLength = r6
            java.lang.String r7 = "video/hevc"
            goto L14b
        Lcf:
            int r15 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_vpcC
            if (r6 != r15) goto Le7
            if (r7 != 0) goto Ld7
            r13 = 1
            goto Ld8
        Ld7:
            r13 = 0
        Ld8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r13)
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_vp08
            if (r8 != r6) goto Le2
            java.lang.String r6 = "video/x-vnd.on2.vp8"
            goto Le4
        Le2:
            java.lang.String r6 = "video/x-vnd.on2.vp9"
        Le4:
            r7 = r6
            goto L14b
        Le7:
            int r15 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_d263
            if (r6 != r15) goto Lf6
            if (r7 != 0) goto Lef
            r13 = 1
            goto Lf0
        Lef:
            r13 = 0
        Lf0:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r13)
            java.lang.String r7 = "video/3gpp"
            goto L14b
        Lf6:
            int r15 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_esds
            if (r6 != r15) goto L111
            if (r7 != 0) goto Lfe
            r13 = 1
            goto Lff
        Lfe:
            r13 = 0
        Lff:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r13)
            android.util.Pair r6 = parseEsdsFromParent(r0, r9)
            java.lang.Object r7 = r6.first
            java.lang.String r7 = (java.lang.String) r7
            java.lang.Object r6 = r6.second
            java.util.List r14 = java.util.Collections.singletonList(r6)
            goto L14b
        L111:
            int r15 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_pasp
            if (r6 != r15) goto L11b
            float r16 = parsePaspFromParent(r0, r9)
            r3 = 1
            goto L14b
        L11b:
            int r15 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sv3d
            if (r6 != r15) goto L124
            byte[] r17 = parseProjFromParent(r0, r9, r10)
            goto L14b
        L124:
            int r9 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_st3d
            if (r6 != r9) goto L14b
            int r6 = r21.readUnsignedByte()
            r0.skipBytes(r13)
            if (r6 != 0) goto L14b
            int r6 = r21.readUnsignedByte()
            if (r6 == 0) goto L149
            r9 = 1
            if (r6 == r9) goto L146
            r15 = 2
            if (r6 == r15) goto L143
            if (r6 == r13) goto L140
            goto L14b
        L140:
            r18 = r13
            goto L14b
        L143:
            r18 = r15
            goto L14b
        L146:
            r18 = r9
            goto L14b
        L149:
            r18 = 0
        L14b:
            int r5 = r5 + r10
            goto L62
        L14e:
            if (r7 != 0) goto L151
            return
        L151:
            java.lang.String r6 = java.lang.Integer.toString(r25)
            r8 = 0
            r9 = -1
            r10 = -1
            r13 = -1082130432(0xffffffffbf800000, float:-1.0)
            r19 = 0
            r15 = r26
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = com.mbridge.msdk.playercommon.exoplayer2.Format.createVideoSampleFormat(r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20)
            r4.format = r0
            return
    }
}
