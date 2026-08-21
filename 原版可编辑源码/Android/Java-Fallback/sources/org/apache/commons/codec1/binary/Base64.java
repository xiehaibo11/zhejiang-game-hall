package org.apache.commons.codec1.binary;

public class Base64 extends org.apache.commons.codec1.binary.BaseNCodec {
    private static final int BITS_PER_ENCODED_BYTE = 6;
    private static final int BYTES_PER_ENCODED_BLOCK = 4;
    private static final int BYTES_PER_UNENCODED_BLOCK = 3;
    static final byte[] CHUNK_SEPARATOR = null;
    private static final byte[] DECODE_TABLE = null;
    private static final int MASK_6BITS = 63;
    private static final byte[] STANDARD_ENCODE_TABLE = null;
    private static final byte[] URL_SAFE_ENCODE_TABLE = null;
    private final int decodeSize;
    private final byte[] decodeTable;
    private final int encodeSize;
    private final byte[] encodeTable;
    private final byte[] lineSeparator;

    static {
            r0 = 2
            byte[] r1 = new byte[r0]
            r1 = {x0254: FILL_ARRAY_DATA , data: [13, 10} // fill-array
            org.apache.commons.codec1.binary.Base64.CHUNK_SEPARATOR = r1
            r1 = 64
            byte[] r2 = new byte[r1]
            r2 = {x025a: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47} // fill-array
            org.apache.commons.codec1.binary.Base64.STANDARD_ENCODE_TABLE = r2
            byte[] r2 = new byte[r1]
            r2 = {x027e: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 45, 95} // fill-array
            org.apache.commons.codec1.binary.Base64.URL_SAFE_ENCODE_TABLE = r2
            r2 = 123(0x7b, float:1.72E-43)
            byte[] r2 = new byte[r2]
            r3 = -1
            r4 = 0
            r2[r4] = r3
            r4 = 1
            r2[r4] = r3
            r2[r0] = r3
            r5 = 3
            r2[r5] = r3
            r6 = 4
            r2[r6] = r3
            r7 = 5
            r2[r7] = r3
            r8 = 6
            r2[r8] = r3
            r9 = 7
            r2[r9] = r3
            r10 = 8
            r2[r10] = r3
            r11 = 9
            r2[r11] = r3
            r12 = 10
            r2[r12] = r3
            r13 = 11
            r2[r13] = r3
            r14 = 12
            r2[r14] = r3
            r15 = 13
            r2[r15] = r3
            r16 = 14
            r2[r16] = r3
            r17 = 15
            r2[r17] = r3
            r18 = 16
            r2[r18] = r3
            r19 = 17
            r2[r19] = r3
            r20 = 18
            r2[r20] = r3
            r21 = 19
            r2[r21] = r3
            r21 = 20
            r2[r21] = r3
            r21 = 21
            r2[r21] = r3
            r21 = 22
            r2[r21] = r3
            r21 = 23
            r2[r21] = r3
            r21 = 24
            r2[r21] = r3
            r21 = 25
            r2[r21] = r3
            r21 = 26
            r2[r21] = r3
            r21 = 27
            r2[r21] = r3
            r21 = 28
            r2[r21] = r3
            r21 = 29
            r2[r21] = r3
            r21 = 30
            r2[r21] = r3
            r21 = 31
            r2[r21] = r3
            r21 = 32
            r2[r21] = r3
            r21 = 33
            r2[r21] = r3
            r21 = 34
            r2[r21] = r3
            r21 = 35
            r2[r21] = r3
            r21 = 36
            r2[r21] = r3
            r21 = 37
            r2[r21] = r3
            r21 = 38
            r2[r21] = r3
            r21 = 39
            r2[r21] = r3
            r21 = 40
            r2[r21] = r3
            r21 = 41
            r2[r21] = r3
            r21 = 42
            r2[r21] = r3
            r21 = 62
            r22 = 43
            r2[r22] = r21
            r22 = 44
            r2[r22] = r3
            r22 = 45
            r2[r22] = r21
            r22 = 46
            r2[r22] = r3
            r22 = 63
            r23 = 47
            r2[r23] = r22
            r23 = 48
            r24 = 52
            r2[r23] = r24
            r23 = 49
            r24 = 53
            r2[r23] = r24
            r23 = 50
            r24 = 54
            r2[r23] = r24
            r23 = 51
            r24 = 55
            r2[r23] = r24
            r23 = 52
            r24 = 56
            r2[r23] = r24
            r23 = 53
            r24 = 57
            r2[r23] = r24
            r23 = 54
            r24 = 58
            r2[r23] = r24
            r23 = 55
            r24 = 59
            r2[r23] = r24
            r23 = 56
            r24 = 60
            r2[r23] = r24
            r23 = 57
            r24 = 61
            r2[r23] = r24
            r23 = 58
            r2[r23] = r3
            r23 = 59
            r2[r23] = r3
            r23 = 60
            r2[r23] = r3
            r23 = 61
            r2[r23] = r3
            r2[r21] = r3
            r2[r22] = r3
            r2[r1] = r3
            r1 = 66
            r2[r1] = r4
            r1 = 67
            r2[r1] = r0
            r0 = 68
            r2[r0] = r5
            r0 = 69
            r2[r0] = r6
            r0 = 70
            r2[r0] = r7
            r0 = 71
            r2[r0] = r8
            r0 = 72
            r2[r0] = r9
            r0 = 73
            r2[r0] = r10
            r0 = 74
            r2[r0] = r11
            r0 = 75
            r2[r0] = r12
            r0 = 76
            r2[r0] = r13
            r0 = 77
            r2[r0] = r14
            r0 = 78
            r2[r0] = r15
            r0 = 79
            r2[r0] = r16
            r0 = 80
            r2[r0] = r17
            r0 = 81
            r2[r0] = r18
            r0 = 82
            r2[r0] = r19
            r0 = 83
            r2[r0] = r20
            r0 = 84
            r1 = 19
            r2[r0] = r1
            r0 = 85
            r1 = 20
            r2[r0] = r1
            r0 = 86
            r1 = 21
            r2[r0] = r1
            r0 = 87
            r1 = 22
            r2[r0] = r1
            r0 = 88
            r1 = 23
            r2[r0] = r1
            r0 = 89
            r1 = 24
            r2[r0] = r1
            r0 = 90
            r1 = 25
            r2[r0] = r1
            r0 = 91
            r2[r0] = r3
            r0 = 92
            r2[r0] = r3
            r0 = 93
            r2[r0] = r3
            r0 = 94
            r2[r0] = r3
            r0 = 95
            r2[r0] = r22
            r0 = 96
            r2[r0] = r3
            r0 = 97
            r1 = 26
            r2[r0] = r1
            r0 = 98
            r1 = 27
            r2[r0] = r1
            r0 = 99
            r1 = 28
            r2[r0] = r1
            r0 = 100
            r1 = 29
            r2[r0] = r1
            r0 = 101(0x65, float:1.42E-43)
            r1 = 30
            r2[r0] = r1
            r0 = 102(0x66, float:1.43E-43)
            r1 = 31
            r2[r0] = r1
            r0 = 103(0x67, float:1.44E-43)
            r1 = 32
            r2[r0] = r1
            r0 = 104(0x68, float:1.46E-43)
            r1 = 33
            r2[r0] = r1
            r0 = 105(0x69, float:1.47E-43)
            r1 = 34
            r2[r0] = r1
            r0 = 106(0x6a, float:1.49E-43)
            r1 = 35
            r2[r0] = r1
            r0 = 107(0x6b, float:1.5E-43)
            r1 = 36
            r2[r0] = r1
            r0 = 108(0x6c, float:1.51E-43)
            r1 = 37
            r2[r0] = r1
            r0 = 109(0x6d, float:1.53E-43)
            r1 = 38
            r2[r0] = r1
            r0 = 110(0x6e, float:1.54E-43)
            r1 = 39
            r2[r0] = r1
            r0 = 111(0x6f, float:1.56E-43)
            r1 = 40
            r2[r0] = r1
            r0 = 112(0x70, float:1.57E-43)
            r1 = 41
            r2[r0] = r1
            r0 = 113(0x71, float:1.58E-43)
            r1 = 42
            r2[r0] = r1
            r0 = 114(0x72, float:1.6E-43)
            r1 = 43
            r2[r0] = r1
            r0 = 115(0x73, float:1.61E-43)
            r1 = 44
            r2[r0] = r1
            r0 = 116(0x74, float:1.63E-43)
            r1 = 45
            r2[r0] = r1
            r0 = 117(0x75, float:1.64E-43)
            r1 = 46
            r2[r0] = r1
            r0 = 118(0x76, float:1.65E-43)
            r1 = 47
            r2[r0] = r1
            r0 = 119(0x77, float:1.67E-43)
            r1 = 48
            r2[r0] = r1
            r0 = 120(0x78, float:1.68E-43)
            r1 = 49
            r2[r0] = r1
            r0 = 121(0x79, float:1.7E-43)
            r1 = 50
            r2[r0] = r1
            r0 = 122(0x7a, float:1.71E-43)
            r1 = 51
            r2[r0] = r1
            org.apache.commons.codec1.binary.Base64.DECODE_TABLE = r2
            return
    }

    public Base64() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public Base64(int r2) {
            r1 = this;
            byte[] r0 = org.apache.commons.codec1.binary.Base64.CHUNK_SEPARATOR
            r1.<init>(r2, r0)
            return
    }

    public Base64(int r2, byte[] r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public Base64(int r5, byte[] r6, boolean r7) {
            r4 = this;
            r0 = 0
            if (r6 != 0) goto L5
            r1 = r0
            goto L6
        L5:
            int r1 = r6.length
        L6:
            r2 = 4
            r3 = 3
            r4.<init>(r3, r2, r5, r1)
            byte[] r1 = org.apache.commons.codec1.binary.Base64.DECODE_TABLE
            r4.decodeTable = r1
            r1 = 0
            if (r6 == 0) goto L4a
            boolean r3 = r4.containsAlphabetOrPad(r6)
            if (r3 != 0) goto L2d
            if (r5 <= 0) goto L28
            int r5 = r6.length
            int r5 = r5 + r2
            r4.encodeSize = r5
            int r5 = r6.length
            byte[] r5 = new byte[r5]
            r4.lineSeparator = r5
            int r1 = r6.length
            java.lang.System.arraycopy(r6, r0, r5, r0, r1)
            goto L4e
        L28:
            r4.encodeSize = r2
            r4.lineSeparator = r1
            goto L4e
        L2d:
            java.lang.String r5 = org.apache.commons.codec1.binary.StringUtils.newStringUtf8(r6)
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            java.lang.String r0 = "lineSeparator must not contain base64 characters: ["
            r7.<init>(r0)
            r7.append(r5)
            java.lang.String r5 = "]"
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            throw r6
        L4a:
            r4.encodeSize = r2
            r4.lineSeparator = r1
        L4e:
            int r5 = r4.encodeSize
            int r5 = r5 + (-1)
            r4.decodeSize = r5
            if (r7 == 0) goto L59
            byte[] r5 = org.apache.commons.codec1.binary.Base64.URL_SAFE_ENCODE_TABLE
            goto L5b
        L59:
            byte[] r5 = org.apache.commons.codec1.binary.Base64.STANDARD_ENCODE_TABLE
        L5b:
            r4.encodeTable = r5
            return
    }

    public Base64(boolean r3) {
            r2 = this;
            byte[] r0 = org.apache.commons.codec1.binary.Base64.CHUNK_SEPARATOR
            r1 = 76
            r2.<init>(r1, r0, r3)
            return
    }

    public static byte[] decodeBase64(java.lang.String r1) {
            org.apache.commons.codec1.binary.Base64 r0 = new org.apache.commons.codec1.binary.Base64
            r0.<init>()
            byte[] r1 = r0.decode(r1)
            return r1
    }

    public static byte[] decodeBase64(byte[] r1) {
            org.apache.commons.codec1.binary.Base64 r0 = new org.apache.commons.codec1.binary.Base64
            r0.<init>()
            byte[] r1 = r0.decode(r1)
            return r1
    }

    public static java.math.BigInteger decodeInteger(byte[] r2) {
            java.math.BigInteger r0 = new java.math.BigInteger
            byte[] r2 = decodeBase64(r2)
            r1 = 1
            r0.<init>(r1, r2)
            return r0
    }

    public static byte[] encodeBase64(byte[] r1) {
            r0 = 0
            byte[] r1 = encodeBase64(r1, r0)
            return r1
    }

    public static byte[] encodeBase64(byte[] r1, boolean r2) {
            r0 = 0
            byte[] r1 = encodeBase64(r1, r2, r0)
            return r1
    }

    public static byte[] encodeBase64(byte[] r1, boolean r2, boolean r3) {
            r0 = 2147483647(0x7fffffff, float:NaN)
            byte[] r1 = encodeBase64(r1, r2, r3, r0)
            return r1
    }

    public static byte[] encodeBase64(byte[] r4, boolean r5, boolean r6, int r7) {
            if (r4 == 0) goto L40
            int r0 = r4.length
            if (r0 != 0) goto L6
            goto L40
        L6:
            if (r5 == 0) goto Le
            org.apache.commons.codec1.binary.Base64 r5 = new org.apache.commons.codec1.binary.Base64
            r5.<init>(r6)
            goto L16
        Le:
            org.apache.commons.codec1.binary.Base64 r5 = new org.apache.commons.codec1.binary.Base64
            r0 = 0
            byte[] r1 = org.apache.commons.codec1.binary.Base64.CHUNK_SEPARATOR
            r5.<init>(r0, r1, r6)
        L16:
            long r0 = r5.getEncodedLength(r4)
            long r2 = (long) r7
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 > 0) goto L24
            byte[] r4 = r5.encode(r4)
            return r4
        L24:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "Input array too big, the output array would be bigger ("
            r5.<init>(r6)
            r5.append(r0)
            java.lang.String r6 = ") than the specified maximum size of "
            r5.append(r6)
            r5.append(r7)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        L40:
            return r4
    }

    public static byte[] encodeBase64Chunked(byte[] r1) {
            r0 = 1
            byte[] r1 = encodeBase64(r1, r0)
            return r1
    }

    public static java.lang.String encodeBase64String(byte[] r1) {
            r0 = 0
            byte[] r1 = encodeBase64(r1, r0)
            java.lang.String r1 = org.apache.commons.codec1.binary.StringUtils.newStringUtf8(r1)
            return r1
    }

    public static byte[] encodeBase64URLSafe(byte[] r2) {
            r0 = 0
            r1 = 1
            byte[] r2 = encodeBase64(r2, r0, r1)
            return r2
    }

    public static java.lang.String encodeBase64URLSafeString(byte[] r2) {
            r0 = 0
            r1 = 1
            byte[] r2 = encodeBase64(r2, r0, r1)
            java.lang.String r2 = org.apache.commons.codec1.binary.StringUtils.newStringUtf8(r2)
            return r2
    }

    public static byte[] encodeInteger(java.math.BigInteger r1) {
            if (r1 == 0) goto Lc
            byte[] r1 = toIntegerBytes(r1)
            r0 = 0
            byte[] r1 = encodeBase64(r1, r0)
            return r1
        Lc:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r0 = "encodeInteger called with null parameter"
            r1.<init>(r0)
            throw r1
    }

    @java.lang.Deprecated
    public static boolean isArrayByteBase64(byte[] r0) {
            boolean r0 = isBase64(r0)
            return r0
    }

    public static boolean isBase64(byte r2) {
            r0 = 61
            if (r2 == r0) goto L12
            if (r2 < 0) goto L10
            byte[] r0 = org.apache.commons.codec1.binary.Base64.DECODE_TABLE
            int r1 = r0.length
            if (r2 >= r1) goto L10
            r2 = r0[r2]
            r0 = -1
            if (r2 != r0) goto L12
        L10:
            r2 = 0
            return r2
        L12:
            r2 = 1
            return r2
    }

    public static boolean isBase64(java.lang.String r0) {
            byte[] r0 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r0)
            boolean r0 = isBase64(r0)
            return r0
    }

    public static boolean isBase64(byte[] r3) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r3.length
            if (r1 < r2) goto L7
            r3 = 1
            return r3
        L7:
            r2 = r3[r1]
            boolean r2 = isBase64(r2)
            if (r2 != 0) goto L18
            r2 = r3[r1]
            boolean r2 = isWhiteSpace(r2)
            if (r2 != 0) goto L18
            return r0
        L18:
            int r1 = r1 + 1
            goto L2
    }

    static byte[] toIntegerBytes(java.math.BigInteger r5) {
            int r0 = r5.bitLength()
            int r0 = r0 + 7
            int r0 = r0 >> 3
            int r0 = r0 << 3
            byte[] r1 = r5.toByteArray()
            int r2 = r5.bitLength()
            int r2 = r2 % 8
            r3 = 1
            if (r2 == 0) goto L23
            int r2 = r5.bitLength()
            int r2 = r2 / 8
            int r2 = r2 + r3
            int r4 = r0 / 8
            if (r2 != r4) goto L23
            return r1
        L23:
            r2 = 0
            int r4 = r1.length
            int r5 = r5.bitLength()
            int r5 = r5 % 8
            if (r5 != 0) goto L30
            int r4 = r4 + (-1)
            goto L31
        L30:
            r3 = r2
        L31:
            int r0 = r0 / 8
            int r5 = r0 - r4
            byte[] r0 = new byte[r0]
            java.lang.System.arraycopy(r1, r3, r0, r5, r4)
            return r0
    }

    @Override
    void decode(byte[] r7, int r8, int r9, org.apache.commons.codec1.binary.BaseNCodec.Context r10) {
            r6 = this;
            boolean r0 = r10.eof
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            if (r9 >= 0) goto La
            r10.eof = r0
        La:
            r1 = 0
        Lb:
            if (r1 < r9) goto Le
            goto L1e
        Le:
            int r2 = r6.decodeSize
            byte[] r2 = r6.ensureBufferSize(r2, r10)
            int r3 = r8 + 1
            r8 = r7[r8]
            byte r4 = r6.pad
            if (r8 != r4) goto L82
            r10.eof = r0
        L1e:
            boolean r7 = r10.eof
            if (r7 == 0) goto L81
            int r7 = r10.modulus
            if (r7 == 0) goto L81
            int r7 = r6.decodeSize
            byte[] r7 = r6.ensureBufferSize(r7, r10)
            int r8 = r10.modulus
            if (r8 == r0) goto L81
            r9 = 2
            if (r8 == r9) goto L6e
            r0 = 3
            if (r8 != r0) goto L58
            int r8 = r10.ibitWorkArea
            int r8 = r8 >> r9
            r10.ibitWorkArea = r8
            int r8 = r10.pos
            int r9 = r8 + 1
            r10.pos = r9
            int r9 = r10.ibitWorkArea
            int r9 = r9 >> 8
            r9 = r9 & 255(0xff, float:3.57E-43)
            byte r9 = (byte) r9
            r7[r8] = r9
            int r8 = r10.pos
            int r9 = r8 + 1
            r10.pos = r9
            int r9 = r10.ibitWorkArea
            r9 = r9 & 255(0xff, float:3.57E-43)
            byte r9 = (byte) r9
            r7[r8] = r9
            goto L81
        L58:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r9 = "Impossible modulus "
            r8.<init>(r9)
            int r9 = r10.modulus
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
        L6e:
            int r8 = r10.ibitWorkArea
            int r8 = r8 >> 4
            r10.ibitWorkArea = r8
            int r8 = r10.pos
            int r9 = r8 + 1
            r10.pos = r9
            int r9 = r10.ibitWorkArea
            r9 = r9 & 255(0xff, float:3.57E-43)
            byte r9 = (byte) r9
            r7[r8] = r9
        L81:
            return
        L82:
            if (r8 < 0) goto Lca
            byte[] r4 = org.apache.commons.codec1.binary.Base64.DECODE_TABLE
            int r5 = r4.length
            if (r8 >= r5) goto Lca
            r8 = r4[r8]
            if (r8 < 0) goto Lca
            int r4 = r10.modulus
            int r4 = r4 + r0
            int r4 = r4 % 4
            r10.modulus = r4
            int r4 = r10.ibitWorkArea
            int r4 = r4 << 6
            int r4 = r4 + r8
            r10.ibitWorkArea = r4
            int r8 = r10.modulus
            if (r8 != 0) goto Lca
            int r8 = r10.pos
            int r4 = r8 + 1
            r10.pos = r4
            int r4 = r10.ibitWorkArea
            int r4 = r4 >> 16
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r2[r8] = r4
            int r8 = r10.pos
            int r4 = r8 + 1
            r10.pos = r4
            int r4 = r10.ibitWorkArea
            int r4 = r4 >> 8
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r2[r8] = r4
            int r8 = r10.pos
            int r4 = r8 + 1
            r10.pos = r4
            int r4 = r10.ibitWorkArea
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r2[r8] = r4
        Lca:
            int r1 = r1 + 1
            r8 = r3
            goto Lb
    }

    @Override
    void encode(byte[] r8, int r9, int r10, org.apache.commons.codec1.binary.BaseNCodec.Context r11) {
            r7 = this;
            boolean r0 = r11.eof
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 0
            r1 = 1
            if (r10 >= 0) goto Le3
            r11.eof = r1
            int r8 = r11.modulus
            if (r8 != 0) goto L14
            int r8 = r7.lineLength
            if (r8 != 0) goto L14
            return
        L14:
            int r8 = r7.encodeSize
            byte[] r8 = r7.ensureBufferSize(r8, r11)
            int r9 = r11.pos
            int r10 = r11.modulus
            if (r10 == 0) goto Lc0
            r2 = 2
            if (r10 == r1) goto L82
            if (r10 != r2) goto L6c
            int r10 = r11.pos
            int r1 = r10 + 1
            r11.pos = r1
            byte[] r1 = r7.encodeTable
            int r3 = r11.ibitWorkArea
            int r3 = r3 >> 10
            r3 = r3 & 63
            r1 = r1[r3]
            r8[r10] = r1
            int r10 = r11.pos
            int r1 = r10 + 1
            r11.pos = r1
            byte[] r1 = r7.encodeTable
            int r3 = r11.ibitWorkArea
            int r3 = r3 >> 4
            r3 = r3 & 63
            r1 = r1[r3]
            r8[r10] = r1
            int r10 = r11.pos
            int r1 = r10 + 1
            r11.pos = r1
            byte[] r1 = r7.encodeTable
            int r3 = r11.ibitWorkArea
            int r2 = r3 << 2
            r2 = r2 & 63
            r1 = r1[r2]
            r8[r10] = r1
            byte[] r10 = r7.encodeTable
            byte[] r1 = org.apache.commons.codec1.binary.Base64.STANDARD_ENCODE_TABLE
            if (r10 != r1) goto Lc0
            int r10 = r11.pos
            int r1 = r10 + 1
            r11.pos = r1
            byte r1 = r7.pad
            r8[r10] = r1
            goto Lc0
        L6c:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            java.lang.String r10 = "Impossible modulus "
            r9.<init>(r10)
            int r10 = r11.modulus
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            throw r8
        L82:
            int r10 = r11.pos
            int r1 = r10 + 1
            r11.pos = r1
            byte[] r1 = r7.encodeTable
            int r3 = r11.ibitWorkArea
            int r2 = r3 >> 2
            r2 = r2 & 63
            r1 = r1[r2]
            r8[r10] = r1
            int r10 = r11.pos
            int r1 = r10 + 1
            r11.pos = r1
            byte[] r1 = r7.encodeTable
            int r2 = r11.ibitWorkArea
            int r2 = r2 << 4
            r2 = r2 & 63
            r1 = r1[r2]
            r8[r10] = r1
            byte[] r10 = r7.encodeTable
            byte[] r1 = org.apache.commons.codec1.binary.Base64.STANDARD_ENCODE_TABLE
            if (r10 != r1) goto Lc0
            int r10 = r11.pos
            int r1 = r10 + 1
            r11.pos = r1
            byte r1 = r7.pad
            r8[r10] = r1
            int r10 = r11.pos
            int r1 = r10 + 1
            r11.pos = r1
            byte r1 = r7.pad
            r8[r10] = r1
        Lc0:
            int r10 = r11.currentLinePos
            int r1 = r11.pos
            int r1 = r1 - r9
            int r10 = r10 + r1
            r11.currentLinePos = r10
            int r9 = r7.lineLength
            if (r9 <= 0) goto Le6
            int r9 = r11.currentLinePos
            if (r9 <= 0) goto Le6
            byte[] r9 = r7.lineSeparator
            int r10 = r11.pos
            byte[] r1 = r7.lineSeparator
            int r1 = r1.length
            java.lang.System.arraycopy(r9, r0, r8, r10, r1)
            int r8 = r11.pos
            byte[] r9 = r7.lineSeparator
            int r9 = r9.length
            int r8 = r8 + r9
            r11.pos = r8
            goto Le6
        Le3:
            r2 = r0
        Le4:
            if (r2 < r10) goto Le7
        Le6:
            return
        Le7:
            int r3 = r7.encodeSize
            byte[] r3 = r7.ensureBufferSize(r3, r11)
            int r4 = r11.modulus
            int r4 = r4 + r1
            int r4 = r4 % 3
            r11.modulus = r4
            int r4 = r9 + 1
            r9 = r8[r9]
            if (r9 >= 0) goto Lfc
            int r9 = r9 + 256
        Lfc:
            int r5 = r11.ibitWorkArea
            int r5 = r5 << 8
            int r5 = r5 + r9
            r11.ibitWorkArea = r5
            int r9 = r11.modulus
            if (r9 != 0) goto L171
            int r9 = r11.pos
            int r5 = r9 + 1
            r11.pos = r5
            byte[] r5 = r7.encodeTable
            int r6 = r11.ibitWorkArea
            int r6 = r6 >> 18
            r6 = r6 & 63
            r5 = r5[r6]
            r3[r9] = r5
            int r9 = r11.pos
            int r5 = r9 + 1
            r11.pos = r5
            byte[] r5 = r7.encodeTable
            int r6 = r11.ibitWorkArea
            int r6 = r6 >> 12
            r6 = r6 & 63
            r5 = r5[r6]
            r3[r9] = r5
            int r9 = r11.pos
            int r5 = r9 + 1
            r11.pos = r5
            byte[] r5 = r7.encodeTable
            int r6 = r11.ibitWorkArea
            int r6 = r6 >> 6
            r6 = r6 & 63
            r5 = r5[r6]
            r3[r9] = r5
            int r9 = r11.pos
            int r5 = r9 + 1
            r11.pos = r5
            byte[] r5 = r7.encodeTable
            int r6 = r11.ibitWorkArea
            r6 = r6 & 63
            r5 = r5[r6]
            r3[r9] = r5
            int r9 = r11.currentLinePos
            int r9 = r9 + 4
            r11.currentLinePos = r9
            int r9 = r7.lineLength
            if (r9 <= 0) goto L171
            int r9 = r7.lineLength
            int r5 = r11.currentLinePos
            if (r9 > r5) goto L171
            byte[] r9 = r7.lineSeparator
            int r5 = r11.pos
            byte[] r6 = r7.lineSeparator
            int r6 = r6.length
            java.lang.System.arraycopy(r9, r0, r3, r5, r6)
            int r9 = r11.pos
            byte[] r3 = r7.lineSeparator
            int r3 = r3.length
            int r9 = r9 + r3
            r11.pos = r9
            r11.currentLinePos = r0
        L171:
            int r2 = r2 + 1
            r9 = r4
            goto Le4
    }

    @Override
    protected boolean isInAlphabet(byte r3) {
            r2 = this;
            if (r3 < 0) goto Le
            byte[] r0 = r2.decodeTable
            int r1 = r0.length
            if (r3 >= r1) goto Le
            r3 = r0[r3]
            r0 = -1
            if (r3 == r0) goto Le
            r3 = 1
            return r3
        Le:
            r3 = 0
            return r3
    }

    public boolean isUrlSafe() {
            r2 = this;
            byte[] r0 = r2.encodeTable
            byte[] r1 = org.apache.commons.codec1.binary.Base64.URL_SAFE_ENCODE_TABLE
            if (r0 != r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }
}
