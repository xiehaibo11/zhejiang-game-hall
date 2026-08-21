package com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg;

final class VorbisUtil {
    private static final java.lang.String TAG = "VorbisUtil";

    public static final class CodeBook {
        public final int dimensions;
        public final int entries;
        public final boolean isOrdered;
        public final long[] lengthMap;
        public final int lookupType;

        public CodeBook(int r1, int r2, long[] r3, int r4, boolean r5) {
                r0 = this;
                r0.<init>()
                r0.dimensions = r1
                r0.entries = r2
                r0.lengthMap = r3
                r0.lookupType = r4
                r0.isOrdered = r5
                return
        }
    }

    public static final class CommentHeader {
        public final java.lang.String[] comments;
        public final int length;
        public final java.lang.String vendor;

        public CommentHeader(java.lang.String r1, java.lang.String[] r2, int r3) {
                r0 = this;
                r0.<init>()
                r0.vendor = r1
                r0.comments = r2
                r0.length = r3
                return
        }
    }

    public static final class Mode {
        public final boolean blockFlag;
        public final int mapping;
        public final int transformType;
        public final int windowType;

        public Mode(boolean r1, int r2, int r3, int r4) {
                r0 = this;
                r0.<init>()
                r0.blockFlag = r1
                r0.windowType = r2
                r0.transformType = r3
                r0.mapping = r4
                return
        }
    }

    public static final class VorbisIdHeader {
        public final int bitrateMax;
        public final int bitrateMin;
        public final int bitrateNominal;
        public final int blockSize0;
        public final int blockSize1;
        public final int channels;
        public final byte[] data;
        public final boolean framingFlag;
        public final long sampleRate;
        public final long version;

        public VorbisIdHeader(long r1, int r3, long r4, int r6, int r7, int r8, int r9, int r10, boolean r11, byte[] r12) {
                r0 = this;
                r0.<init>()
                r0.version = r1
                r0.channels = r3
                r0.sampleRate = r4
                r0.bitrateMax = r6
                r0.bitrateNominal = r7
                r0.bitrateMin = r8
                r0.blockSize0 = r9
                r0.blockSize1 = r10
                r0.framingFlag = r11
                r0.data = r12
                return
        }

        public final int getApproximateBitrate() {
                r2 = this;
                int r0 = r2.bitrateNominal
                if (r0 != 0) goto Lb
                int r0 = r2.bitrateMin
                int r1 = r2.bitrateMax
                int r0 = r0 + r1
                int r0 = r0 / 2
            Lb:
                return r0
        }
    }

    private VorbisUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int iLog(int r1) {
            r0 = 0
        L1:
            if (r1 <= 0) goto L8
            int r0 = r0 + 1
            int r1 = r1 >>> 1
            goto L1
        L8:
            return r0
    }

    private static long mapType1QuantValues(long r2, long r4) {
            double r2 = (double) r2
            double r4 = (double) r4
            r0 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r0 = r0 / r4
            double r2 = java.lang.Math.pow(r2, r0)
            double r2 = java.lang.Math.floor(r2)
            long r2 = (long) r2
            return r2
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.CodeBook readBook(com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisBitArray r14) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = 24
            int r1 = r14.readBits(r0)
            r2 = 5653314(0x564342, float:7.92198E-39)
            if (r1 != r2) goto Laf
            r1 = 16
            int r3 = r14.readBits(r1)
            int r4 = r14.readBits(r0)
            long[] r5 = new long[r4]
            boolean r7 = r14.readBit()
            r0 = 0
            r2 = 5
            r6 = 0
            r8 = 1
            if (r7 != 0) goto L3f
            boolean r9 = r14.readBit()
        L26:
            if (r6 >= r4) goto L61
            if (r9 == 0) goto L34
            boolean r10 = r14.readBit()
            if (r10 == 0) goto L31
            goto L34
        L31:
            r5[r6] = r0
            goto L3c
        L34:
            int r10 = r14.readBits(r2)
            int r10 = r10 + r8
            long r10 = (long) r10
            r5[r6] = r10
        L3c:
            int r6 = r6 + 1
            goto L26
        L3f:
            int r2 = r14.readBits(r2)
            int r2 = r2 + r8
            r9 = r6
        L45:
            if (r9 >= r4) goto L61
            int r10 = r4 - r9
            int r10 = iLog(r10)
            int r10 = r14.readBits(r10)
            r11 = r6
        L52:
            if (r11 >= r10) goto L5e
            if (r9 >= r4) goto L5e
            long r12 = (long) r2
            r5[r9] = r12
            int r9 = r9 + 1
            int r11 = r11 + 1
            goto L52
        L5e:
            int r2 = r2 + 1
            goto L45
        L61:
            r2 = 4
            int r6 = r14.readBits(r2)
            r9 = 2
            if (r6 > r9) goto L98
            if (r6 == r8) goto L6d
            if (r6 != r9) goto L91
        L6d:
            r9 = 32
            r14.skipBits(r9)
            r14.skipBits(r9)
            int r2 = r14.readBits(r2)
            int r2 = r2 + r8
            r14.skipBits(r8)
            if (r6 != r8) goto L88
            if (r3 == 0) goto L8b
            long r0 = (long) r4
            long r8 = (long) r3
            long r0 = mapType1QuantValues(r0, r8)
            goto L8b
        L88:
            long r0 = (long) r4
            long r8 = (long) r3
            long r0 = r0 * r8
        L8b:
            long r8 = (long) r2
            long r0 = r0 * r8
            int r0 = (int) r0
            r14.skipBits(r0)
        L91:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$CodeBook r14 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$CodeBook
            r2 = r14
            r2.<init>(r3, r4, r5, r6, r7)
            return r14
        L98:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r14 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "lookup type greater than 2 not decodable: "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r14.<init>(r0)
            throw r14
        Laf:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r0 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "expected code book to start with [0x56, 0x43, 0x42] at "
            r1.append(r2)
            int r14 = r14.getPosition()
            r1.append(r14)
            java.lang.String r14 = r1.toString()
            r0.<init>(r14)
            throw r0
    }

    private static void readFloors(com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisBitArray r15) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = 6
            int r1 = r15.readBits(r0)
            r2 = 1
            int r1 = r1 + r2
            r3 = 0
            r4 = r3
        L9:
            if (r4 >= r1) goto Lad
            r5 = 16
            int r6 = r15.readBits(r5)
            r7 = 4
            r8 = 8
            if (r6 == 0) goto L8c
            if (r6 != r2) goto L75
            r5 = 5
            int r5 = r15.readBits(r5)
            r6 = -1
            int[] r9 = new int[r5]
            r10 = r3
        L21:
            if (r10 >= r5) goto L32
            int r11 = r15.readBits(r7)
            r9[r10] = r11
            r11 = r9[r10]
            if (r11 <= r6) goto L2f
            r6 = r9[r10]
        L2f:
            int r10 = r10 + 1
            goto L21
        L32:
            int r6 = r6 + 1
            int[] r10 = new int[r6]
            r11 = r3
        L37:
            r12 = 2
            if (r11 >= r6) goto L59
            r13 = 3
            int r13 = r15.readBits(r13)
            int r13 = r13 + r2
            r10[r11] = r13
            int r12 = r15.readBits(r12)
            if (r12 <= 0) goto L4b
            r15.skipBits(r8)
        L4b:
            r13 = r3
        L4c:
            int r14 = r2 << r12
            if (r13 >= r14) goto L56
            r15.skipBits(r8)
            int r13 = r13 + 1
            goto L4c
        L56:
            int r11 = r11 + 1
            goto L37
        L59:
            r15.skipBits(r12)
            int r6 = r15.readBits(r7)
            r7 = r3
            r8 = r7
            r11 = r8
        L63:
            if (r7 >= r5) goto La9
            r12 = r9[r7]
            r12 = r10[r12]
            int r8 = r8 + r12
        L6a:
            if (r11 >= r8) goto L72
            r15.skipBits(r6)
            int r11 = r11 + 1
            goto L6a
        L72:
            int r7 = r7 + 1
            goto L63
        L75:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r15 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "floor type greater than 1 not decodable: "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r15.<init>(r0)
            throw r15
        L8c:
            r15.skipBits(r8)
            r15.skipBits(r5)
            r15.skipBits(r5)
            r15.skipBits(r0)
            r15.skipBits(r8)
            int r5 = r15.readBits(r7)
            int r5 = r5 + r2
            r6 = r3
        La1:
            if (r6 >= r5) goto La9
            r15.skipBits(r8)
            int r6 = r6 + 1
            goto La1
        La9:
            int r4 = r4 + 1
            goto L9
        Lad:
            return
    }

    private static void readMappings(int r11, com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisBitArray r12) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = 6
            int r0 = r12.readBits(r0)
            r1 = 1
            int r0 = r0 + r1
            r2 = 0
            r3 = r2
        L9:
            if (r3 >= r0) goto L87
            r4 = 16
            int r4 = r12.readBits(r4)
            if (r4 == 0) goto L2a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "mapping type other than 0 not supported: "
            r5.append(r6)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            java.lang.String r5 = "VorbisUtil"
            android.util.Log.e(r5, r4)
            goto L7c
        L2a:
            boolean r4 = r12.readBit()
            r5 = 4
            if (r4 == 0) goto L37
            int r4 = r12.readBits(r5)
            int r4 = r4 + r1
            goto L38
        L37:
            r4 = r1
        L38:
            boolean r6 = r12.readBit()
            r7 = 8
            if (r6 == 0) goto L5b
            int r6 = r12.readBits(r7)
            int r6 = r6 + r1
            r8 = r2
        L46:
            if (r8 >= r6) goto L5b
            int r9 = r11 + (-1)
            int r10 = iLog(r9)
            r12.skipBits(r10)
            int r9 = iLog(r9)
            r12.skipBits(r9)
            int r8 = r8 + 1
            goto L46
        L5b:
            r6 = 2
            int r6 = r12.readBits(r6)
            if (r6 != 0) goto L7f
            if (r4 <= r1) goto L6d
            r6 = r2
        L65:
            if (r6 >= r11) goto L6d
            r12.skipBits(r5)
            int r6 = r6 + 1
            goto L65
        L6d:
            r5 = r2
        L6e:
            if (r5 >= r4) goto L7c
            r12.skipBits(r7)
            r12.skipBits(r7)
            r12.skipBits(r7)
            int r5 = r5 + 1
            goto L6e
        L7c:
            int r3 = r3 + 1
            goto L9
        L7f:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r11 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r12 = "to reserved bits must be zero after mapping coupling steps"
            r11.<init>(r12)
            throw r11
        L87:
            return
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.Mode[] readModes(com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisBitArray r8) {
            r0 = 6
            int r0 = r8.readBits(r0)
            int r0 = r0 + 1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$Mode[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.Mode[r0]
            r2 = 0
        La:
            if (r2 >= r0) goto L2a
            boolean r3 = r8.readBit()
            r4 = 16
            int r5 = r8.readBits(r4)
            int r4 = r8.readBits(r4)
            r6 = 8
            int r6 = r8.readBits(r6)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$Mode r7 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$Mode
            r7.<init>(r3, r5, r4, r6)
            r1[r2] = r7
            int r2 = r2 + 1
            goto La
        L2a:
            return r1
    }

    private static void readResidues(com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisBitArray r12) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = 6
            int r1 = r12.readBits(r0)
            r2 = 1
            int r1 = r1 + r2
            r3 = 0
            r4 = r3
        L9:
            if (r4 >= r1) goto L68
            r5 = 16
            int r5 = r12.readBits(r5)
            r6 = 2
            if (r5 > r6) goto L60
            r5 = 24
            r12.skipBits(r5)
            r12.skipBits(r5)
            r12.skipBits(r5)
            int r5 = r12.readBits(r0)
            int r5 = r5 + r2
            r6 = 8
            r12.skipBits(r6)
            int[] r7 = new int[r5]
            r8 = r3
        L2c:
            if (r8 >= r5) goto L47
            r9 = 3
            int r9 = r12.readBits(r9)
            boolean r10 = r12.readBit()
            if (r10 == 0) goto L3f
            r10 = 5
            int r10 = r12.readBits(r10)
            goto L40
        L3f:
            r10 = r3
        L40:
            int r10 = r10 * r6
            int r10 = r10 + r9
            r7[r8] = r10
            int r8 = r8 + 1
            goto L2c
        L47:
            r8 = r3
        L48:
            if (r8 >= r5) goto L5d
            r9 = r3
        L4b:
            if (r9 >= r6) goto L5a
            r10 = r7[r8]
            int r11 = r2 << r9
            r10 = r10 & r11
            if (r10 == 0) goto L57
            r12.skipBits(r6)
        L57:
            int r9 = r9 + 1
            goto L4b
        L5a:
            int r8 = r8 + 1
            goto L48
        L5d:
            int r4 = r4 + 1
            goto L9
        L60:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r12 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r0 = "residueType greater than 2 is not decodable"
            r12.<init>(r0)
            throw r12
        L68:
            return
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.CommentHeader readVorbisCommentHeader(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = 0
            r1 = 3
            verifyVorbisHeaderCapturePattern(r1, r8, r0)
            long r1 = r8.readLittleEndianUnsignedInt()
            int r1 = (int) r1
            java.lang.String r1 = r8.readString(r1)
            int r2 = r1.length()
            r3 = 11
            int r3 = r3 + r2
            long r4 = r8.readLittleEndianUnsignedInt()
            int r2 = (int) r4
            java.lang.String[] r2 = new java.lang.String[r2]
            int r3 = r3 + 4
        L1e:
            long r6 = (long) r0
            int r6 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r6 >= 0) goto L3a
            long r6 = r8.readLittleEndianUnsignedInt()
            int r6 = (int) r6
            int r3 = r3 + 4
            java.lang.String r6 = r8.readString(r6)
            r2[r0] = r6
            r6 = r2[r0]
            int r6 = r6.length()
            int r3 = r3 + r6
            int r0 = r0 + 1
            goto L1e
        L3a:
            int r8 = r8.readUnsignedByte()
            r8 = r8 & 1
            if (r8 == 0) goto L4a
            int r3 = r3 + 1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$CommentHeader r8 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$CommentHeader
            r8.<init>(r1, r2, r3)
            return r8
        L4a:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r8 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r0 = "framing bit expected to be set"
            r8.<init>(r0)
            throw r8
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.VorbisIdHeader readVorbisIdentificationHeader(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r16) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = r16
            r1 = 0
            r2 = 1
            verifyVorbisHeaderCapturePattern(r2, r0, r1)
            long r4 = r16.readLittleEndianUnsignedInt()
            int r6 = r16.readUnsignedByte()
            long r7 = r16.readLittleEndianUnsignedInt()
            int r9 = r16.readLittleEndianInt()
            int r10 = r16.readLittleEndianInt()
            int r11 = r16.readLittleEndianInt()
            int r3 = r16.readUnsignedByte()
            r12 = r3 & 15
            double r12 = (double) r12
            r14 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r12 = java.lang.Math.pow(r14, r12)
            int r12 = (int) r12
            r3 = r3 & 240(0xf0, float:3.36E-43)
            int r3 = r3 >> 4
            double r1 = (double) r3
            double r1 = java.lang.Math.pow(r14, r1)
            int r1 = (int) r1
            int r2 = r16.readUnsignedByte()
            r3 = 1
            r2 = r2 & r3
            if (r2 <= 0) goto L41
            r14 = r3
            goto L42
        L41:
            r14 = 0
        L42:
            byte[] r2 = r0.data
            int r0 = r16.limit()
            byte[] r15 = java.util.Arrays.copyOf(r2, r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$VorbisIdHeader r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$VorbisIdHeader
            r3 = r0
            r13 = r1
            r3.<init>(r4, r6, r7, r9, r10, r11, r12, r13, r14, r15)
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.Mode[] readVorbisModes(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4, int r5) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = 0
            r1 = 5
            verifyVorbisHeaderCapturePattern(r1, r4, r0)
            int r1 = r4.readUnsignedByte()
            int r1 = r1 + 1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisBitArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisBitArray
            byte[] r3 = r4.data
            r2.<init>(r3)
            int r4 = r4.getPosition()
            int r4 = r4 * 8
            r2.skipBits(r4)
            r4 = r0
        L1c:
            if (r4 >= r1) goto L24
            readBook(r2)
            int r4 = r4 + 1
            goto L1c
        L24:
            r4 = 6
            int r4 = r2.readBits(r4)
            int r4 = r4 + 1
        L2b:
            if (r0 >= r4) goto L40
            r1 = 16
            int r1 = r2.readBits(r1)
            if (r1 != 0) goto L38
            int r0 = r0 + 1
            goto L2b
        L38:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r4 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r5 = "placeholder of time domain transforms not zeroed out"
            r4.<init>(r5)
            throw r4
        L40:
            readFloors(r2)
            readResidues(r2)
            readMappings(r5, r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$Mode[] r4 = readModes(r2)
            boolean r5 = r2.readBit()
            if (r5 == 0) goto L54
            return r4
        L54:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r4 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r5 = "framing bit after modes not set as expected"
            r4.<init>(r5)
            throw r4
    }

    public static boolean verifyVorbisHeaderCapturePattern(int r3, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4, boolean r5) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            int r0 = r4.bytesLeft()
            r1 = 0
            r2 = 7
            if (r0 >= r2) goto L26
            if (r5 == 0) goto Lb
            return r1
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r3 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "too short header: "
            r5.append(r0)
            int r4 = r4.bytesLeft()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            r3.<init>(r4)
            throw r3
        L26:
            int r0 = r4.readUnsignedByte()
            if (r0 == r3) goto L4a
            if (r5 == 0) goto L2f
            return r1
        L2f:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r4 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "expected header type "
            r5.append(r0)
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3)
            throw r4
        L4a:
            int r3 = r4.readUnsignedByte()
            r0 = 118(0x76, float:1.65E-43)
            if (r3 != r0) goto L7d
            int r3 = r4.readUnsignedByte()
            r0 = 111(0x6f, float:1.56E-43)
            if (r3 != r0) goto L7d
            int r3 = r4.readUnsignedByte()
            r0 = 114(0x72, float:1.6E-43)
            if (r3 != r0) goto L7d
            int r3 = r4.readUnsignedByte()
            r0 = 98
            if (r3 != r0) goto L7d
            int r3 = r4.readUnsignedByte()
            r0 = 105(0x69, float:1.47E-43)
            if (r3 != r0) goto L7d
            int r3 = r4.readUnsignedByte()
            r4 = 115(0x73, float:1.61E-43)
            if (r3 == r4) goto L7b
            goto L7d
        L7b:
            r3 = 1
            return r3
        L7d:
            if (r5 == 0) goto L80
            return r1
        L80:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r3 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r4 = "expected characters 'vorbis'"
            r3.<init>(r4)
            throw r3
    }
}
