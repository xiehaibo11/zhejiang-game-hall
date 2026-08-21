package com.mbridge.msdk.playercommon.exoplayer2.metadata.id3;

public final class Id3Decoder implements com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoder {
    private static final int FRAME_FLAG_V3_HAS_GROUP_IDENTIFIER = 32;
    private static final int FRAME_FLAG_V3_IS_COMPRESSED = 128;
    private static final int FRAME_FLAG_V3_IS_ENCRYPTED = 64;
    private static final int FRAME_FLAG_V4_HAS_DATA_LENGTH = 1;
    private static final int FRAME_FLAG_V4_HAS_GROUP_IDENTIFIER = 64;
    private static final int FRAME_FLAG_V4_IS_COMPRESSED = 8;
    private static final int FRAME_FLAG_V4_IS_ENCRYPTED = 4;
    private static final int FRAME_FLAG_V4_IS_UNSYNCHRONIZED = 2;
    public static final int ID3_HEADER_LENGTH = 10;
    public static final int ID3_TAG = 0;
    private static final int ID3_TEXT_ENCODING_ISO_8859_1 = 0;
    private static final int ID3_TEXT_ENCODING_UTF_16 = 1;
    private static final int ID3_TEXT_ENCODING_UTF_16BE = 2;
    private static final int ID3_TEXT_ENCODING_UTF_8 = 3;
    public static final com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.FramePredicate NO_FRAMES_PREDICATE = null;
    private static final java.lang.String TAG = "Id3Decoder";
    private final com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.FramePredicate framePredicate;


    public interface FramePredicate {
        boolean evaluate(int r1, int r2, int r3, int r4, int r5);
    }

    private static final class Id3Header {
        private final int framesSize;
        private final boolean isUnsynchronized;
        private final int majorVersion;

        public Id3Header(int r1, boolean r2, int r3) {
                r0 = this;
                r0.<init>()
                r0.majorVersion = r1
                r0.isUnsynchronized = r2
                r0.framesSize = r3
                return
        }

        static int access$000(com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.Id3Header r0) {
                int r0 = r0.majorVersion
                return r0
        }

        static int access$100(com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.Id3Header r0) {
                int r0 = r0.framesSize
                return r0
        }

        static boolean access$200(com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.Id3Header r0) {
                boolean r0 = r0.isUnsynchronized
                return r0
        }
    }

    static {
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.NO_FRAMES_PREDICATE = r0
            java.lang.String r0 = "ID3"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.ID3_TAG = r0
            return
    }

    public Id3Decoder() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public Id3Decoder(com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.FramePredicate r1) {
            r0 = this;
            r0.<init>()
            r0.framePredicate = r1
            return
    }

    private static byte[] copyOfRangeIfValid(byte[] r0, int r1, int r2) {
            if (r2 > r1) goto L6
            r0 = 0
            byte[] r0 = new byte[r0]
            return r0
        L6:
            byte[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            return r0
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ApicFrame decodeApicFrame(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7, int r8, int r9) throws java.io.UnsupportedEncodingException {
            int r0 = r7.readUnsignedByte()
            java.lang.String r1 = getCharsetName(r0)
            int r8 = r8 + (-1)
            byte[] r2 = new byte[r8]
            r3 = 0
            r7.readBytes(r2, r3, r8)
            java.lang.String r7 = "image/"
            java.lang.String r4 = "ISO-8859-1"
            r5 = 2
            if (r9 != r5) goto L3c
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r7)
            java.lang.String r7 = new java.lang.String
            r6 = 3
            r7.<init>(r2, r3, r6, r4)
            java.lang.String r7 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.toLowerInvariant(r7)
            r9.append(r7)
            java.lang.String r7 = r9.toString()
            java.lang.String r9 = "image/jpg"
            boolean r9 = r9.equals(r7)
            if (r9 == 0) goto L3a
            java.lang.String r7 = "image/jpeg"
        L3a:
            r9 = r5
            goto L63
        L3c:
            int r9 = indexOfZeroByte(r2, r3)
            java.lang.String r6 = new java.lang.String
            r6.<init>(r2, r3, r9, r4)
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.toLowerInvariant(r6)
            r4 = 47
            int r4 = r3.indexOf(r4)
            r6 = -1
            if (r4 != r6) goto L62
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r7)
            r4.append(r3)
            java.lang.String r7 = r4.toString()
            goto L63
        L62:
            r7 = r3
        L63:
            int r3 = r9 + 1
            r3 = r2[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r9 = r9 + r5
            int r4 = indexOfEos(r2, r9, r0)
            java.lang.String r5 = new java.lang.String
            int r6 = r4 - r9
            r5.<init>(r2, r9, r6, r1)
            int r9 = delimiterLength(r0)
            int r4 = r4 + r9
            byte[] r8 = copyOfRangeIfValid(r2, r4, r8)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ApicFrame r9 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ApicFrame
            r9.<init>(r7, r5, r3, r8)
            return r9
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.BinaryFrame decodeBinaryFrame(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2, int r3, java.lang.String r4) {
            byte[] r0 = new byte[r3]
            r1 = 0
            r2.readBytes(r0, r1, r3)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.BinaryFrame r2 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.BinaryFrame
            r2.<init>(r4, r0)
            return r2
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterFrame decodeChapterFrame(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r15, int r16, int r17, boolean r18, int r19, com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.FramePredicate r20) throws java.io.UnsupportedEncodingException {
            r0 = r15
            int r1 = r15.getPosition()
            byte[] r2 = r0.data
            int r2 = indexOfZeroByte(r2, r1)
            java.lang.String r4 = new java.lang.String
            byte[] r3 = r0.data
            int r5 = r2 - r1
            java.lang.String r6 = "ISO-8859-1"
            r4.<init>(r3, r1, r5, r6)
            int r2 = r2 + 1
            r15.setPosition(r2)
            int r5 = r15.readInt()
            int r6 = r15.readInt()
            long r2 = r15.readUnsignedInt()
            r7 = 4294967295(0xffffffff, double:2.1219957905E-314)
            int r9 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            r10 = -1
            if (r9 != 0) goto L34
            r12 = r10
            goto L35
        L34:
            r12 = r2
        L35:
            long r2 = r15.readUnsignedInt()
            int r7 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r7 != 0) goto L3f
            r9 = r10
            goto L40
        L3f:
            r9 = r2
        L40:
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            int r1 = r1 + r16
        L47:
            int r3 = r15.getPosition()
            if (r3 >= r1) goto L5f
            r3 = r17
            r7 = r18
            r8 = r19
            r11 = r20
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame r14 = decodeFrame(r3, r15, r7, r8, r11)
            if (r14 == 0) goto L47
            r2.add(r14)
            goto L47
        L5f:
            int r0 = r2.size()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r11 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[r0]
            r2.toArray(r11)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterFrame r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterFrame
            r3 = r0
            r7 = r12
            r3.<init>(r4, r5, r6, r7, r9, r11)
            return r0
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterTocFrame decodeChapterTOCFrame(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r15, int r16, int r17, boolean r18, int r19, com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.FramePredicate r20) throws java.io.UnsupportedEncodingException {
            r0 = r15
            int r1 = r15.getPosition()
            byte[] r2 = r0.data
            int r2 = indexOfZeroByte(r2, r1)
            java.lang.String r3 = new java.lang.String
            byte[] r4 = r0.data
            int r5 = r2 - r1
            java.lang.String r6 = "ISO-8859-1"
            r3.<init>(r4, r1, r5, r6)
            r4 = 1
            int r2 = r2 + r4
            r15.setPosition(r2)
            int r2 = r15.readUnsignedByte()
            r5 = r2 & 2
            r7 = 0
            if (r5 == 0) goto L26
            r5 = r4
            goto L27
        L26:
            r5 = r7
        L27:
            r2 = r2 & r4
            if (r2 == 0) goto L2c
            r2 = r4
            goto L2d
        L2c:
            r2 = r7
        L2d:
            int r8 = r15.readUnsignedByte()
            java.lang.String[] r9 = new java.lang.String[r8]
        L33:
            if (r7 >= r8) goto L51
            int r10 = r15.getPosition()
            byte[] r11 = r0.data
            int r11 = indexOfZeroByte(r11, r10)
            java.lang.String r12 = new java.lang.String
            byte[] r13 = r0.data
            int r14 = r11 - r10
            r12.<init>(r13, r10, r14, r6)
            r9[r7] = r12
            int r11 = r11 + r4
            r15.setPosition(r11)
            int r7 = r7 + 1
            goto L33
        L51:
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            int r1 = r1 + r16
        L58:
            int r6 = r15.getPosition()
            if (r6 >= r1) goto L70
            r6 = r17
            r7 = r18
            r8 = r19
            r10 = r20
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame r11 = decodeFrame(r6, r15, r7, r8, r10)
            if (r11 == 0) goto L58
            r4.add(r11)
            goto L58
        L70:
            int r0 = r4.size()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame[r0]
            r4.toArray(r0)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterTocFrame r1 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterTocFrame
            r15 = r1
            r16 = r3
            r17 = r5
            r18 = r2
            r19 = r9
            r20 = r0
            r15.<init>(r16, r17, r18, r19, r20)
            return r1
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.CommentFrame decodeCommentFrame(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7, int r8) throws java.io.UnsupportedEncodingException {
            r0 = 4
            if (r8 >= r0) goto L5
            r7 = 0
            return r7
        L5:
            int r1 = r7.readUnsignedByte()
            java.lang.String r2 = getCharsetName(r1)
            r3 = 3
            byte[] r4 = new byte[r3]
            r5 = 0
            r7.readBytes(r4, r5, r3)
            java.lang.String r6 = new java.lang.String
            r6.<init>(r4, r5, r3)
            int r8 = r8 - r0
            byte[] r0 = new byte[r8]
            r7.readBytes(r0, r5, r8)
            int r7 = indexOfEos(r0, r5, r1)
            java.lang.String r8 = new java.lang.String
            r8.<init>(r0, r5, r7, r2)
            int r3 = delimiterLength(r1)
            int r7 = r7 + r3
            int r1 = indexOfEos(r0, r7, r1)
            java.lang.String r7 = decodeStringIfValid(r0, r7, r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.CommentFrame r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.CommentFrame
            r0.<init>(r6, r8, r7)
            return r0
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame decodeFrame(int r19, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r20, boolean r21, int r22, com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.FramePredicate r23) {
            r0 = r19
            r7 = r20
            int r8 = r20.readUnsignedByte()
            int r9 = r20.readUnsignedByte()
            int r10 = r20.readUnsignedByte()
            r11 = 3
            if (r0 < r11) goto L19
            int r1 = r20.readUnsignedByte()
            r13 = r1
            goto L1a
        L19:
            r13 = 0
        L1a:
            r14 = 4
            if (r0 != r14) goto L3c
            int r1 = r20.readUnsignedIntToInt()
            if (r21 != 0) goto L3a
            r2 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r1 >> 8
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 7
            r2 = r2 | r3
            int r3 = r1 >> 16
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 14
            r2 = r2 | r3
            int r1 = r1 >> 24
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 21
            r1 = r1 | r2
        L3a:
            r15 = r1
            goto L48
        L3c:
            if (r0 != r11) goto L43
            int r1 = r20.readUnsignedIntToInt()
            goto L3a
        L43:
            int r1 = r20.readUnsignedInt24()
            goto L3a
        L48:
            if (r0 < r11) goto L50
            int r1 = r20.readUnsignedShort()
            r6 = r1
            goto L51
        L50:
            r6 = 0
        L51:
            r16 = 0
            if (r8 != 0) goto L67
            if (r9 != 0) goto L67
            if (r10 != 0) goto L67
            if (r13 != 0) goto L67
            if (r15 != 0) goto L67
            if (r6 != 0) goto L67
            int r0 = r20.limit()
            r7.setPosition(r0)
            return r16
        L67:
            int r1 = r20.getPosition()
            int r5 = r1 + r15
            int r1 = r20.limit()
            java.lang.String r4 = "Id3Decoder"
            if (r5 <= r1) goto L82
            java.lang.String r0 = "Frame size exceeds remaining tag data"
            android.util.Log.w(r4, r0)
            int r0 = r20.limit()
            r7.setPosition(r0)
            return r16
        L82:
            if (r23 == 0) goto L9a
            r1 = r23
            r2 = r19
            r3 = r8
            r12 = r4
            r4 = r9
            r14 = r5
            r5 = r10
            r18 = r6
            r6 = r13
            boolean r1 = r1.evaluate(r2, r3, r4, r5, r6)
            if (r1 != 0) goto L9e
            r7.setPosition(r14)
            return r16
        L9a:
            r12 = r4
            r14 = r5
            r18 = r6
        L9e:
            r1 = 1
            if (r0 != r11) goto Lc0
            r2 = r18
            r3 = r2 & 128(0x80, float:1.8E-43)
            if (r3 == 0) goto La9
            r3 = r1
            goto Laa
        La9:
            r3 = 0
        Laa:
            r4 = r2 & 64
            if (r4 == 0) goto Lb0
            r4 = r1
            goto Lb1
        Lb0:
            r4 = 0
        Lb1:
            r2 = r2 & 32
            if (r2 == 0) goto Lb7
            r2 = r1
            goto Lb8
        Lb7:
            r2 = 0
        Lb8:
            r17 = r3
            r5 = r4
            r6 = 0
            r3 = r2
            r4 = r17
            goto Le9
        Lc0:
            r2 = r18
            r3 = 4
            if (r0 != r3) goto Lee
            r3 = r2 & 64
            if (r3 == 0) goto Lcb
            r3 = r1
            goto Lcc
        Lcb:
            r3 = 0
        Lcc:
            r4 = r2 & 8
            if (r4 == 0) goto Ld2
            r4 = r1
            goto Ld3
        Ld2:
            r4 = 0
        Ld3:
            r5 = r2 & 4
            if (r5 == 0) goto Ld9
            r5 = r1
            goto Lda
        Ld9:
            r5 = 0
        Lda:
            r6 = r2 & 2
            if (r6 == 0) goto Le0
            r6 = r1
            goto Le1
        Le0:
            r6 = 0
        Le1:
            r2 = r2 & r1
            if (r2 == 0) goto Le7
            r17 = r1
            goto Le9
        Le7:
            r17 = 0
        Le9:
            r2 = r17
            r17 = r4
            goto Lf4
        Lee:
            r2 = 0
            r3 = 0
            r5 = 0
            r6 = 0
            r17 = 0
        Lf4:
            if (r17 != 0) goto L217
            if (r5 == 0) goto Lfa
            goto L217
        Lfa:
            if (r3 == 0) goto L101
            int r15 = r15 + (-1)
            r7.skipBytes(r1)
        L101:
            if (r2 == 0) goto L109
            int r15 = r15 + (-4)
            r1 = 4
            r7.skipBytes(r1)
        L109:
            if (r6 == 0) goto L10f
            int r15 = removeUnsynchronization(r7, r15)
        L10f:
            r1 = 84
            r2 = 2
            r3 = 88
            if (r8 != r1) goto L124
            if (r9 != r3) goto L124
            if (r10 != r3) goto L124
            if (r0 == r2) goto L11e
            if (r13 != r3) goto L124
        L11e:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = decodeTxxxFrame(r7, r15)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            goto L1e4
        L124:
            if (r8 != r1) goto L133
            java.lang.String r1 = getFrameId(r0, r8, r9, r10, r13)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = decodeTextInformationFrame(r7, r15, r1)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            goto L1e4
        L130:
            r0 = move-exception
            goto L213
        L133:
            r4 = 87
            if (r8 != r4) goto L145
            if (r9 != r3) goto L145
            if (r10 != r3) goto L145
            if (r0 == r2) goto L13f
            if (r13 != r3) goto L145
        L13f:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.UrlLinkFrame r1 = decodeWxxxFrame(r7, r15)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            goto L1e4
        L145:
            if (r8 != r4) goto L151
            java.lang.String r1 = getFrameId(r0, r8, r9, r10, r13)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.UrlLinkFrame r1 = decodeUrlLinkFrame(r7, r15, r1)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            goto L1e4
        L151:
            r3 = 73
            r4 = 80
            if (r8 != r4) goto L167
            r5 = 82
            if (r9 != r5) goto L167
            if (r10 != r3) goto L167
            r5 = 86
            if (r13 != r5) goto L167
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.PrivFrame r1 = decodePrivFrame(r7, r15)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            goto L1e4
        L167:
            r5 = 71
            r6 = 79
            if (r8 != r5) goto L17f
            r5 = 69
            if (r9 != r5) goto L17f
            if (r10 != r6) goto L17f
            r5 = 66
            if (r13 == r5) goto L179
            if (r0 != r2) goto L17f
        L179:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.GeobFrame r1 = decodeGeobFrame(r7, r15)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            goto L1e4
        L17f:
            r5 = 65
            r11 = 67
            if (r0 != r2) goto L18c
            if (r8 != r4) goto L199
            if (r9 != r3) goto L199
            if (r10 != r11) goto L199
            goto L194
        L18c:
            if (r8 != r5) goto L199
            if (r9 != r4) goto L199
            if (r10 != r3) goto L199
            if (r13 != r11) goto L199
        L194:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ApicFrame r1 = decodeApicFrame(r7, r15, r0)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            goto L1e4
        L199:
            if (r8 != r11) goto L1aa
            if (r9 != r6) goto L1aa
            r3 = 77
            if (r10 != r3) goto L1aa
            if (r13 == r3) goto L1a5
            if (r0 != r2) goto L1aa
        L1a5:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.CommentFrame r1 = decodeCommentFrame(r7, r15)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            goto L1e4
        L1aa:
            if (r8 != r11) goto L1c4
            r2 = 72
            if (r9 != r2) goto L1c4
            if (r10 != r5) goto L1c4
            if (r13 != r4) goto L1c4
            r1 = r20
            r2 = r15
            r3 = r19
            r4 = r21
            r5 = r22
            r6 = r23
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterFrame r1 = decodeChapterFrame(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            goto L1e4
        L1c4:
            if (r8 != r11) goto L1dc
            if (r9 != r1) goto L1dc
            if (r10 != r6) goto L1dc
            if (r13 != r11) goto L1dc
            r1 = r20
            r2 = r15
            r3 = r19
            r4 = r21
            r5 = r22
            r6 = r23
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ChapterTocFrame r1 = decodeChapterTOCFrame(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            goto L1e4
        L1dc:
            java.lang.String r1 = getFrameId(r0, r8, r9, r10, r13)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.BinaryFrame r1 = decodeBinaryFrame(r7, r15, r1)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
        L1e4:
            if (r1 != 0) goto L206
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            r2.<init>()     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            java.lang.String r3 = "Failed to decode frame: id="
            r2.append(r3)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            java.lang.String r0 = getFrameId(r0, r8, r9, r10, r13)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            r2.append(r0)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            java.lang.String r0 = ", frameSize="
            r2.append(r0)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            r2.append(r15)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
            android.util.Log.w(r12, r0)     // Catch: java.lang.Throwable -> L130 java.io.UnsupportedEncodingException -> L20a
        L206:
            r7.setPosition(r14)
            return r1
        L20a:
            java.lang.String r0 = "Unsupported character encoding"
            android.util.Log.w(r12, r0)     // Catch: java.lang.Throwable -> L130
            r7.setPosition(r14)
            return r16
        L213:
            r7.setPosition(r14)
            throw r0
        L217:
            java.lang.String r0 = "Skipping unsupported compressed or encrypted frame"
            android.util.Log.w(r12, r0)
            r7.setPosition(r14)
            return r16
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.GeobFrame decodeGeobFrame(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6, int r7) throws java.io.UnsupportedEncodingException {
            int r0 = r6.readUnsignedByte()
            java.lang.String r1 = getCharsetName(r0)
            int r7 = r7 + (-1)
            byte[] r2 = new byte[r7]
            r3 = 0
            r6.readBytes(r2, r3, r7)
            int r6 = indexOfZeroByte(r2, r3)
            java.lang.String r4 = new java.lang.String
            java.lang.String r5 = "ISO-8859-1"
            r4.<init>(r2, r3, r6, r5)
            int r6 = r6 + 1
            int r3 = indexOfEos(r2, r6, r0)
            java.lang.String r6 = decodeStringIfValid(r2, r6, r3, r1)
            int r5 = delimiterLength(r0)
            int r3 = r3 + r5
            int r5 = indexOfEos(r2, r3, r0)
            java.lang.String r1 = decodeStringIfValid(r2, r3, r5, r1)
            int r0 = delimiterLength(r0)
            int r5 = r5 + r0
            byte[] r7 = copyOfRangeIfValid(r2, r5, r7)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.GeobFrame r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.GeobFrame
            r0.<init>(r4, r6, r1, r7)
            return r0
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.Id3Header decodeHeader(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9) {
            int r0 = r9.bytesLeft()
            r1 = 0
            java.lang.String r2 = "Id3Decoder"
            r3 = 10
            if (r0 >= r3) goto L11
            java.lang.String r9 = "Data too short to be an ID3 tag"
            android.util.Log.w(r2, r9)
            return r1
        L11:
            int r0 = r9.readUnsignedInt24()
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.ID3_TAG
            if (r0 == r3) goto L2e
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r3 = "Unexpected first three bytes of ID3 tag header: "
            r9.append(r3)
            r9.append(r0)
            java.lang.String r9 = r9.toString()
            android.util.Log.w(r2, r9)
            return r1
        L2e:
            int r0 = r9.readUnsignedByte()
            r3 = 1
            r9.skipBytes(r3)
            int r4 = r9.readUnsignedByte()
            int r5 = r9.readSynchSafeInt()
            r6 = 2
            r7 = 4
            r8 = 0
            if (r0 != r6) goto L52
            r9 = r4 & 64
            if (r9 == 0) goto L49
            r9 = r3
            goto L4a
        L49:
            r9 = r8
        L4a:
            if (r9 == 0) goto L88
            java.lang.String r9 = "Skipped ID3 tag with majorVersion=2 and undefined compression scheme"
            android.util.Log.w(r2, r9)
            return r1
        L52:
            r6 = 3
            if (r0 != r6) goto L68
            r1 = r4 & 64
            if (r1 == 0) goto L5b
            r1 = r3
            goto L5c
        L5b:
            r1 = r8
        L5c:
            if (r1 == 0) goto L88
            int r1 = r9.readInt()
            r9.skipBytes(r1)
            int r1 = r1 + r7
            int r5 = r5 - r1
            goto L88
        L68:
            if (r0 != r7) goto L96
            r1 = r4 & 64
            if (r1 == 0) goto L70
            r1 = r3
            goto L71
        L70:
            r1 = r8
        L71:
            if (r1 == 0) goto L7d
            int r1 = r9.readSynchSafeInt()
            int r2 = r1 + (-4)
            r9.skipBytes(r2)
            int r5 = r5 - r1
        L7d:
            r9 = r4 & 16
            if (r9 == 0) goto L83
            r9 = r3
            goto L84
        L83:
            r9 = r8
        L84:
            if (r9 == 0) goto L88
            int r5 = r5 + (-10)
        L88:
            if (r0 >= r7) goto L8f
            r9 = r4 & 128(0x80, float:1.8E-43)
            if (r9 == 0) goto L8f
            goto L90
        L8f:
            r3 = r8
        L90:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder$Id3Header r9 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder$Id3Header
            r9.<init>(r0, r3, r5)
            return r9
        L96:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r3 = "Skipped ID3 tag with unsupported majorVersion="
            r9.append(r3)
            r9.append(r0)
            java.lang.String r9 = r9.toString()
            android.util.Log.w(r2, r9)
            return r1
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.PrivFrame decodePrivFrame(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4, int r5) throws java.io.UnsupportedEncodingException {
            byte[] r0 = new byte[r5]
            r1 = 0
            r4.readBytes(r0, r1, r5)
            int r4 = indexOfZeroByte(r0, r1)
            java.lang.String r2 = new java.lang.String
            java.lang.String r3 = "ISO-8859-1"
            r2.<init>(r0, r1, r4, r3)
            int r4 = r4 + 1
            byte[] r4 = copyOfRangeIfValid(r0, r4, r5)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.PrivFrame r5 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.PrivFrame
            r5.<init>(r2, r4)
            return r5
    }

    private static java.lang.String decodeStringIfValid(byte[] r1, int r2, int r3, java.lang.String r4) throws java.io.UnsupportedEncodingException {
            if (r3 <= r2) goto Ld
            int r0 = r1.length
            if (r3 <= r0) goto L6
            goto Ld
        L6:
            java.lang.String r0 = new java.lang.String
            int r3 = r3 - r2
            r0.<init>(r1, r2, r3, r4)
            return r0
        Ld:
            java.lang.String r1 = ""
            return r1
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame decodeTextInformationFrame(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5, int r6, java.lang.String r7) throws java.io.UnsupportedEncodingException {
            r0 = 0
            r1 = 1
            if (r6 >= r1) goto L5
            return r0
        L5:
            int r2 = r5.readUnsignedByte()
            java.lang.String r3 = getCharsetName(r2)
            int r6 = r6 - r1
            byte[] r1 = new byte[r6]
            r4 = 0
            r5.readBytes(r1, r4, r6)
            int r5 = indexOfEos(r1, r4, r2)
            java.lang.String r6 = new java.lang.String
            r6.<init>(r1, r4, r5, r3)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r5 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame
            r5.<init>(r7, r0, r6)
            return r5
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame decodeTxxxFrame(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4, int r5) throws java.io.UnsupportedEncodingException {
            r0 = 1
            if (r5 >= r0) goto L5
            r4 = 0
            return r4
        L5:
            int r1 = r4.readUnsignedByte()
            java.lang.String r2 = getCharsetName(r1)
            int r5 = r5 - r0
            byte[] r0 = new byte[r5]
            r3 = 0
            r4.readBytes(r0, r3, r5)
            int r4 = indexOfEos(r0, r3, r1)
            java.lang.String r5 = new java.lang.String
            r5.<init>(r0, r3, r4, r2)
            int r3 = delimiterLength(r1)
            int r4 = r4 + r3
            int r1 = indexOfEos(r0, r4, r1)
            java.lang.String r4 = decodeStringIfValid(r0, r4, r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame
            java.lang.String r1 = "TXXX"
            r0.<init>(r1, r5, r4)
            return r0
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.UrlLinkFrame decodeUrlLinkFrame(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3, int r4, java.lang.String r5) throws java.io.UnsupportedEncodingException {
            byte[] r0 = new byte[r4]
            r1 = 0
            r3.readBytes(r0, r1, r4)
            int r3 = indexOfZeroByte(r0, r1)
            java.lang.String r4 = new java.lang.String
            java.lang.String r2 = "ISO-8859-1"
            r4.<init>(r0, r1, r3, r2)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.UrlLinkFrame r3 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.UrlLinkFrame
            r0 = 0
            r3.<init>(r5, r0, r4)
            return r3
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.UrlLinkFrame decodeWxxxFrame(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4, int r5) throws java.io.UnsupportedEncodingException {
            r0 = 1
            if (r5 >= r0) goto L5
            r4 = 0
            return r4
        L5:
            int r1 = r4.readUnsignedByte()
            java.lang.String r2 = getCharsetName(r1)
            int r5 = r5 - r0
            byte[] r0 = new byte[r5]
            r3 = 0
            r4.readBytes(r0, r3, r5)
            int r4 = indexOfEos(r0, r3, r1)
            java.lang.String r5 = new java.lang.String
            r5.<init>(r0, r3, r4, r2)
            int r1 = delimiterLength(r1)
            int r4 = r4 + r1
            int r1 = indexOfZeroByte(r0, r4)
            java.lang.String r2 = "ISO-8859-1"
            java.lang.String r4 = decodeStringIfValid(r0, r4, r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.UrlLinkFrame r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.UrlLinkFrame
            java.lang.String r1 = "WXXX"
            r0.<init>(r1, r5, r4)
            return r0
    }

    private static int delimiterLength(int r1) {
            if (r1 == 0) goto L8
            r0 = 3
            if (r1 != r0) goto L6
            goto L8
        L6:
            r1 = 2
            goto L9
        L8:
            r1 = 1
        L9:
            return r1
    }

    private static java.lang.String getCharsetName(int r1) {
            r0 = 1
            if (r1 == r0) goto L12
            r0 = 2
            if (r1 == r0) goto Lf
            r0 = 3
            if (r1 == r0) goto Lc
            java.lang.String r1 = "ISO-8859-1"
            return r1
        Lc:
            java.lang.String r1 = "UTF-8"
            return r1
        Lf:
            java.lang.String r1 = "UTF-16BE"
            return r1
        L12:
            java.lang.String r1 = "UTF-16"
            return r1
    }

    private static java.lang.String getFrameId(int r5, int r6, int r7, int r8, int r9) {
            r0 = 3
            r1 = 1
            r2 = 0
            r3 = 2
            if (r5 != r3) goto L23
            java.util.Locale r5 = java.util.Locale.US
            java.lang.Object[] r9 = new java.lang.Object[r0]
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r9[r2] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r7)
            r9[r1] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r8)
            r9[r3] = r6
            java.lang.String r6 = "%c%c%c"
            java.lang.String r5 = java.lang.String.format(r5, r6, r9)
            goto L46
        L23:
            java.util.Locale r5 = java.util.Locale.US
            r4 = 4
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r4[r2] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r7)
            r4[r1] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r8)
            r4[r3] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r9)
            r4[r0] = r6
            java.lang.String r6 = "%c%c%c%c"
            java.lang.String r5 = java.lang.String.format(r5, r6, r4)
        L46:
            return r5
    }

    private static int indexOfEos(byte[] r1, int r2, int r3) {
            int r2 = indexOfZeroByte(r1, r2)
            if (r3 == 0) goto L23
            r0 = 3
            if (r3 != r0) goto La
            goto L23
        La:
            int r3 = r1.length
            int r3 = r3 + (-1)
            if (r2 >= r3) goto L21
            int r3 = r2 % 2
            if (r3 != 0) goto L1a
            int r3 = r2 + 1
            r3 = r1[r3]
            if (r3 != 0) goto L1a
            return r2
        L1a:
            int r2 = r2 + 1
            int r2 = indexOfZeroByte(r1, r2)
            goto La
        L21:
            int r1 = r1.length
            return r1
        L23:
            return r2
    }

    private static int indexOfZeroByte(byte[] r1, int r2) {
        L0:
            int r0 = r1.length
            if (r2 >= r0) goto Lb
            r0 = r1[r2]
            if (r0 != 0) goto L8
            return r2
        L8:
            int r2 = r2 + 1
            goto L0
        Lb:
            int r1 = r1.length
            return r1
    }

    private static int removeUnsynchronization(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4, int r5) {
            byte[] r0 = r4.data
            int r4 = r4.getPosition()
        L6:
            int r1 = r4 + 1
            if (r1 >= r5) goto L22
            r2 = r0[r4]
            r3 = 255(0xff, float:3.57E-43)
            r2 = r2 & r3
            if (r2 != r3) goto L20
            r2 = r0[r1]
            if (r2 != 0) goto L20
            int r2 = r4 + 2
            int r4 = r5 - r4
            int r4 = r4 + (-2)
            java.lang.System.arraycopy(r0, r2, r0, r1, r4)
            int r5 = r5 + (-1)
        L20:
            r4 = r1
            goto L6
        L22:
            return r5
    }

    private static boolean validateFrames(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r18, int r19, int r20, boolean r21) {
            r1 = r18
            r0 = r19
            int r2 = r18.getPosition()
        L8:
            int r3 = r18.bytesLeft()     // Catch: java.lang.Throwable -> Lb4
            r4 = 1
            r5 = r20
            if (r3 < r5) goto Lb0
            r3 = 3
            r6 = 0
            if (r0 < r3) goto L22
            int r7 = r18.readInt()     // Catch: java.lang.Throwable -> Lb4
            long r8 = r18.readUnsignedInt()     // Catch: java.lang.Throwable -> Lb4
            int r10 = r18.readUnsignedShort()     // Catch: java.lang.Throwable -> Lb4
            goto L2c
        L22:
            int r7 = r18.readUnsignedInt24()     // Catch: java.lang.Throwable -> Lb4
            int r8 = r18.readUnsignedInt24()     // Catch: java.lang.Throwable -> Lb4
            long r8 = (long) r8
            r10 = r6
        L2c:
            r11 = 0
            if (r7 != 0) goto L3a
            int r7 = (r8 > r11 ? 1 : (r8 == r11 ? 0 : -1))
            if (r7 != 0) goto L3a
            if (r10 != 0) goto L3a
            r1.setPosition(r2)
            return r4
        L3a:
            r7 = 4
            if (r0 != r7) goto L6b
            if (r21 != 0) goto L6b
            r13 = 8421504(0x808080, double:4.160776E-317)
            long r13 = r13 & r8
            int r11 = (r13 > r11 ? 1 : (r13 == r11 ? 0 : -1))
            if (r11 == 0) goto L4b
            r1.setPosition(r2)
            return r6
        L4b:
            r11 = 255(0xff, double:1.26E-321)
            long r13 = r8 & r11
            r15 = 8
            long r15 = r8 >> r15
            long r15 = r15 & r11
            r17 = 7
            long r15 = r15 << r17
            long r13 = r13 | r15
            r15 = 16
            long r15 = r8 >> r15
            long r15 = r15 & r11
            r17 = 14
            long r15 = r15 << r17
            long r13 = r13 | r15
            r15 = 24
            long r8 = r8 >> r15
            long r8 = r8 & r11
            r11 = 21
            long r8 = r8 << r11
            long r8 = r8 | r13
        L6b:
            if (r0 != r7) goto L7c
            r3 = r10 & 64
            if (r3 == 0) goto L73
            r3 = r4
            goto L74
        L73:
            r3 = r6
        L74:
            r7 = r10 & 1
            if (r7 == 0) goto L7a
        L78:
            r7 = r4
            goto L8c
        L7a:
            r7 = r6
            goto L8c
        L7c:
            if (r0 != r3) goto L8a
            r3 = r10 & 32
            if (r3 == 0) goto L84
            r3 = r4
            goto L85
        L84:
            r3 = r6
        L85:
            r7 = r10 & 128(0x80, float:1.8E-43)
            if (r7 == 0) goto L7a
            goto L78
        L8a:
            r3 = r6
            r7 = r3
        L8c:
            if (r3 == 0) goto L8f
            goto L90
        L8f:
            r4 = r6
        L90:
            if (r7 == 0) goto L94
            int r4 = r4 + 4
        L94:
            long r3 = (long) r4
            int r3 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r3 >= 0) goto L9d
            r1.setPosition(r2)
            return r6
        L9d:
            int r3 = r18.bytesLeft()     // Catch: java.lang.Throwable -> Lb4
            long r3 = (long) r3
            int r3 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r3 >= 0) goto Laa
            r1.setPosition(r2)
            return r6
        Laa:
            int r3 = (int) r8
            r1.skipBytes(r3)     // Catch: java.lang.Throwable -> Lb4
            goto L8
        Lb0:
            r1.setPosition(r2)
            return r4
        Lb4:
            r0 = move-exception
            r1.setPosition(r2)
            throw r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata decode(com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataInputBuffer r2) {
            r1 = this;
            java.nio.ByteBuffer r2 = r2.data
            byte[] r0 = r2.array()
            int r2 = r2.limit()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r2 = r1.decode(r0, r2)
            return r2
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata decode(byte[] r7, int r8) {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r1.<init>(r7, r8)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder$Id3Header r7 = decodeHeader(r1)
            r8 = 0
            if (r7 != 0) goto L12
            return r8
        L12:
            int r2 = r1.getPosition()
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.Id3Header.access$000(r7)
            r4 = 2
            if (r3 != r4) goto L1f
            r3 = 6
            goto L21
        L1f:
            r3 = 10
        L21:
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.Id3Header.access$100(r7)
            boolean r5 = com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.Id3Header.access$200(r7)
            if (r5 == 0) goto L33
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.Id3Header.access$100(r7)
            int r4 = removeUnsynchronization(r1, r4)
        L33:
            int r2 = r2 + r4
            r1.setLimit(r2)
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.Id3Header.access$000(r7)
            r4 = 0
            boolean r2 = validateFrames(r1, r2, r3, r4)
            r5 = 1
            if (r2 != 0) goto L6d
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.Id3Header.access$000(r7)
            r4 = 4
            if (r2 != r4) goto L52
            boolean r2 = validateFrames(r1, r4, r3, r5)
            if (r2 == 0) goto L52
            r4 = r5
            goto L6d
        L52:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Failed to validate ID3 tag with majorVersion="
            r0.append(r1)
            int r7 = com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.Id3Header.access$000(r7)
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            java.lang.String r0 = "Id3Decoder"
            android.util.Log.w(r0, r7)
            return r8
        L6d:
            int r8 = r1.bytesLeft()
            if (r8 < r3) goto L83
            int r8 = com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder.Id3Header.access$000(r7)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder$FramePredicate r2 = r6.framePredicate
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame r8 = decodeFrame(r8, r1, r4, r3, r2)
            if (r8 == 0) goto L6d
            r0.add(r8)
            goto L6d
        L83:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r7 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata
            r7.<init>(r0)
            return r7
    }
}
