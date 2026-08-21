package org.apache.commons.codec.binary;

public class Base64 extends org.apache.commons.codec.binary.BaseNCodec {
    private static final int BITS_PER_ENCODED_BYTE = 6;
    private static final int BYTES_PER_ENCODED_BLOCK = 4;
    private static final int BYTES_PER_UNENCODED_BLOCK = 3;
    static final byte[] CHUNK_SEPARATOR = null;
    private static final byte[] DECODE_TABLE = null;
    private static final int MASK_6BITS = 63;
    private static final byte[] STANDARD_ENCODE_TABLE = null;
    private static final byte[] URL_SAFE_ENCODE_TABLE = null;
    private int bitWorkArea;
    private final int decodeSize;
    private final byte[] decodeTable;
    private final int encodeSize;
    private final byte[] encodeTable;
    private final byte[] lineSeparator;

    static {
            r0 = 2
            byte[] r0 = new byte[r0]
            r0 = {x0022: FILL_ARRAY_DATA , data: [13, 10} // fill-array
            org.apache.commons.codec.binary.Base64.CHUNK_SEPARATOR = r0
            r0 = 64
            byte[] r1 = new byte[r0]
            r1 = {x0028: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47} // fill-array
            org.apache.commons.codec.binary.Base64.STANDARD_ENCODE_TABLE = r1
            byte[] r0 = new byte[r0]
            r0 = {x004c: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 45, 95} // fill-array
            org.apache.commons.codec.binary.Base64.URL_SAFE_ENCODE_TABLE = r0
            r0 = 123(0x7b, float:1.72E-43)
            byte[] r0 = new byte[r0]
            r0 = {x0070: FILL_ARRAY_DATA , data: [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, 62, -1, 63, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, 63, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51} // fill-array
            org.apache.commons.codec.binary.Base64.DECODE_TABLE = r0
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
            byte[] r0 = org.apache.commons.codec.binary.Base64.CHUNK_SEPARATOR
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
            byte[] r1 = org.apache.commons.codec.binary.Base64.DECODE_TABLE
            r4.decodeTable = r1
            r1 = 0
            if (r6 == 0) goto L4d
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
            goto L51
        L28:
            r4.encodeSize = r2
            r4.lineSeparator = r1
            goto L51
        L2d:
            java.lang.String r5 = org.apache.commons.codec.binary.StringUtils.newStringUtf8(r6)
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "lineSeparator must not contain base64 characters: ["
            r7.append(r0)
            r7.append(r5)
            java.lang.String r5 = "]"
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            throw r6
        L4d:
            r4.encodeSize = r2
            r4.lineSeparator = r1
        L51:
            int r5 = r4.encodeSize
            int r5 = r5 + (-1)
            r4.decodeSize = r5
            if (r7 == 0) goto L5c
            byte[] r5 = org.apache.commons.codec.binary.Base64.URL_SAFE_ENCODE_TABLE
            goto L5e
        L5c:
            byte[] r5 = org.apache.commons.codec.binary.Base64.STANDARD_ENCODE_TABLE
        L5e:
            r4.encodeTable = r5
            return
    }

    public Base64(boolean r3) {
            r2 = this;
            byte[] r0 = org.apache.commons.codec.binary.Base64.CHUNK_SEPARATOR
            r1 = 76
            r2.<init>(r1, r0, r3)
            return
    }

    public static byte[] decodeBase64(java.lang.String r1) {
            org.apache.commons.codec.binary.Base64 r0 = new org.apache.commons.codec.binary.Base64
            r0.<init>()
            byte[] r1 = r0.decode(r1)
            return r1
    }

    public static byte[] decodeBase64(byte[] r1) {
            org.apache.commons.codec.binary.Base64 r0 = new org.apache.commons.codec.binary.Base64
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
            if (r4 == 0) goto L43
            int r0 = r4.length
            if (r0 != 0) goto L6
            goto L43
        L6:
            if (r5 == 0) goto Le
            org.apache.commons.codec.binary.Base64 r5 = new org.apache.commons.codec.binary.Base64
            r5.<init>(r6)
            goto L16
        Le:
            org.apache.commons.codec.binary.Base64 r5 = new org.apache.commons.codec.binary.Base64
            r0 = 0
            byte[] r1 = org.apache.commons.codec.binary.Base64.CHUNK_SEPARATOR
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
            r5.<init>()
            java.lang.String r6 = "Input array too big, the output array would be bigger ("
            r5.append(r6)
            r5.append(r0)
            java.lang.String r6 = ") than the specified maximum size of "
            r5.append(r6)
            r5.append(r7)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        L43:
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
            java.lang.String r1 = org.apache.commons.codec.binary.StringUtils.newStringUtf8(r1)
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
            java.lang.String r2 = org.apache.commons.codec.binary.StringUtils.newStringUtf8(r2)
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

    public static boolean isArrayByteBase64(byte[] r0) {
            boolean r0 = isBase64(r0)
            return r0
    }

    public static boolean isBase64(byte r2) {
            r0 = 61
            if (r2 == r0) goto L13
            if (r2 < 0) goto L11
            byte[] r0 = org.apache.commons.codec.binary.Base64.DECODE_TABLE
            int r1 = r0.length
            if (r2 >= r1) goto L11
            r2 = r0[r2]
            r0 = -1
            if (r2 == r0) goto L11
            goto L13
        L11:
            r2 = 0
            goto L14
        L13:
            r2 = 1
        L14:
            return r2
    }

    public static boolean isBase64(java.lang.String r0) {
            byte[] r0 = org.apache.commons.codec.binary.StringUtils.getBytesUtf8(r0)
            boolean r0 = isBase64(r0)
            return r0
    }

    public static boolean isBase64(byte[] r3) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r3.length
            if (r1 >= r2) goto L19
            r2 = r3[r1]
            boolean r2 = isBase64(r2)
            if (r2 != 0) goto L16
            r2 = r3[r1]
            boolean r2 = isWhiteSpace(r2)
            if (r2 != 0) goto L16
            return r0
        L16:
            int r1 = r1 + 1
            goto L2
        L19:
            r3 = 1
            return r3
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
    void decode(byte[] r6, int r7, int r8) {
            r5 = this;
            boolean r0 = r5.eof
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            if (r8 >= 0) goto La
            r5.eof = r0
        La:
            r1 = 0
        Lb:
            if (r1 >= r8) goto L6f
            int r2 = r5.decodeSize
            r5.ensureBufferSize(r2)
            int r2 = r7 + 1
            r7 = r6[r7]
            r3 = 61
            if (r7 != r3) goto L1d
            r5.eof = r0
            goto L6f
        L1d:
            if (r7 < 0) goto L6b
            byte[] r3 = org.apache.commons.codec.binary.Base64.DECODE_TABLE
            int r4 = r3.length
            if (r7 >= r4) goto L6b
            r7 = r3[r7]
            if (r7 < 0) goto L6b
            int r3 = r5.modulus
            int r3 = r3 + r0
            int r3 = r3 % 4
            r5.modulus = r3
            int r3 = r5.bitWorkArea
            int r3 = r3 << 6
            int r3 = r3 + r7
            r5.bitWorkArea = r3
            int r7 = r5.modulus
            if (r7 != 0) goto L6b
            byte[] r7 = r5.buffer
            int r3 = r5.pos
            int r4 = r3 + 1
            r5.pos = r4
            int r4 = r5.bitWorkArea
            int r4 = r4 >> 16
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r7[r3] = r4
            byte[] r7 = r5.buffer
            int r3 = r5.pos
            int r4 = r3 + 1
            r5.pos = r4
            int r4 = r5.bitWorkArea
            int r4 = r4 >> 8
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r7[r3] = r4
            byte[] r7 = r5.buffer
            int r3 = r5.pos
            int r4 = r3 + 1
            r5.pos = r4
            int r4 = r5.bitWorkArea
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r7[r3] = r4
        L6b:
            int r1 = r1 + 1
            r7 = r2
            goto Lb
        L6f:
            boolean r6 = r5.eof
            if (r6 == 0) goto Lc0
            int r6 = r5.modulus
            if (r6 == 0) goto Lc0
            int r6 = r5.decodeSize
            r5.ensureBufferSize(r6)
            int r6 = r5.modulus
            r7 = 2
            if (r6 == r7) goto Lab
            r8 = 3
            if (r6 == r8) goto L85
            goto Lc0
        L85:
            int r6 = r5.bitWorkArea
            int r6 = r6 >> r7
            r5.bitWorkArea = r6
            byte[] r6 = r5.buffer
            int r7 = r5.pos
            int r8 = r7 + 1
            r5.pos = r8
            int r8 = r5.bitWorkArea
            int r8 = r8 >> 8
            r8 = r8 & 255(0xff, float:3.57E-43)
            byte r8 = (byte) r8
            r6[r7] = r8
            byte[] r6 = r5.buffer
            int r7 = r5.pos
            int r8 = r7 + 1
            r5.pos = r8
            int r8 = r5.bitWorkArea
            r8 = r8 & 255(0xff, float:3.57E-43)
            byte r8 = (byte) r8
            r6[r7] = r8
            goto Lc0
        Lab:
            int r6 = r5.bitWorkArea
            int r6 = r6 >> 4
            r5.bitWorkArea = r6
            byte[] r6 = r5.buffer
            int r7 = r5.pos
            int r8 = r7 + 1
            r5.pos = r8
            int r8 = r5.bitWorkArea
            r8 = r8 & 255(0xff, float:3.57E-43)
            byte r8 = (byte) r8
            r6[r7] = r8
        Lc0:
            return
    }

    @Override
    void encode(byte[] r8, int r9, int r10) {
            r7 = this;
            boolean r0 = r7.eof
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 0
            r1 = 1
            if (r10 >= 0) goto Ld7
            r7.eof = r1
            int r8 = r7.modulus
            if (r8 != 0) goto L14
            int r8 = r7.lineLength
            if (r8 != 0) goto L14
            return
        L14:
            int r8 = r7.encodeSize
            r7.ensureBufferSize(r8)
            int r8 = r7.pos
            int r9 = r7.modulus
            r10 = 61
            r2 = 2
            if (r9 == r1) goto L71
            if (r9 == r2) goto L26
            goto Lb1
        L26:
            byte[] r9 = r7.buffer
            int r1 = r7.pos
            int r3 = r1 + 1
            r7.pos = r3
            byte[] r3 = r7.encodeTable
            int r4 = r7.bitWorkArea
            int r4 = r4 >> 10
            r4 = r4 & 63
            r3 = r3[r4]
            r9[r1] = r3
            byte[] r9 = r7.buffer
            int r1 = r7.pos
            int r3 = r1 + 1
            r7.pos = r3
            byte[] r3 = r7.encodeTable
            int r4 = r7.bitWorkArea
            int r4 = r4 >> 4
            r4 = r4 & 63
            r3 = r3[r4]
            r9[r1] = r3
            byte[] r9 = r7.buffer
            int r1 = r7.pos
            int r3 = r1 + 1
            r7.pos = r3
            byte[] r3 = r7.encodeTable
            int r4 = r7.bitWorkArea
            int r2 = r4 << 2
            r2 = r2 & 63
            r2 = r3[r2]
            r9[r1] = r2
            byte[] r9 = org.apache.commons.codec.binary.Base64.STANDARD_ENCODE_TABLE
            if (r3 != r9) goto Lb1
            byte[] r9 = r7.buffer
            int r1 = r7.pos
            int r2 = r1 + 1
            r7.pos = r2
            r9[r1] = r10
            goto Lb1
        L71:
            byte[] r9 = r7.buffer
            int r1 = r7.pos
            int r3 = r1 + 1
            r7.pos = r3
            byte[] r3 = r7.encodeTable
            int r4 = r7.bitWorkArea
            int r2 = r4 >> 2
            r2 = r2 & 63
            r2 = r3[r2]
            r9[r1] = r2
            byte[] r9 = r7.buffer
            int r1 = r7.pos
            int r2 = r1 + 1
            r7.pos = r2
            byte[] r2 = r7.encodeTable
            int r3 = r7.bitWorkArea
            int r3 = r3 << 4
            r3 = r3 & 63
            r3 = r2[r3]
            r9[r1] = r3
            byte[] r9 = org.apache.commons.codec.binary.Base64.STANDARD_ENCODE_TABLE
            if (r2 != r9) goto Lb1
            byte[] r9 = r7.buffer
            int r1 = r7.pos
            int r2 = r1 + 1
            r7.pos = r2
            r9[r1] = r10
            byte[] r9 = r7.buffer
            int r1 = r7.pos
            int r2 = r1 + 1
            r7.pos = r2
            r9[r1] = r10
        Lb1:
            int r9 = r7.currentLinePos
            int r10 = r7.pos
            int r10 = r10 - r8
            int r9 = r9 + r10
            r7.currentLinePos = r9
            int r8 = r7.lineLength
            if (r8 <= 0) goto L172
            int r8 = r7.currentLinePos
            if (r8 <= 0) goto L172
            byte[] r8 = r7.lineSeparator
            byte[] r9 = r7.buffer
            int r10 = r7.pos
            byte[] r1 = r7.lineSeparator
            int r1 = r1.length
            java.lang.System.arraycopy(r8, r0, r9, r10, r1)
            int r8 = r7.pos
            byte[] r9 = r7.lineSeparator
            int r9 = r9.length
            int r8 = r8 + r9
            r7.pos = r8
            goto L172
        Ld7:
            r2 = r0
        Ld8:
            if (r2 >= r10) goto L172
            int r3 = r7.encodeSize
            r7.ensureBufferSize(r3)
            int r3 = r7.modulus
            int r3 = r3 + r1
            int r3 = r3 % 3
            r7.modulus = r3
            int r3 = r9 + 1
            r9 = r8[r9]
            if (r9 >= 0) goto Lee
            int r9 = r9 + 256
        Lee:
            int r4 = r7.bitWorkArea
            int r4 = r4 << 8
            int r4 = r4 + r9
            r7.bitWorkArea = r4
            int r9 = r7.modulus
            if (r9 != 0) goto L16d
            byte[] r9 = r7.buffer
            int r4 = r7.pos
            int r5 = r4 + 1
            r7.pos = r5
            byte[] r5 = r7.encodeTable
            int r6 = r7.bitWorkArea
            int r6 = r6 >> 18
            r6 = r6 & 63
            r5 = r5[r6]
            r9[r4] = r5
            byte[] r9 = r7.buffer
            int r4 = r7.pos
            int r5 = r4 + 1
            r7.pos = r5
            byte[] r5 = r7.encodeTable
            int r6 = r7.bitWorkArea
            int r6 = r6 >> 12
            r6 = r6 & 63
            r5 = r5[r6]
            r9[r4] = r5
            byte[] r9 = r7.buffer
            int r4 = r7.pos
            int r5 = r4 + 1
            r7.pos = r5
            byte[] r5 = r7.encodeTable
            int r6 = r7.bitWorkArea
            int r6 = r6 >> 6
            r6 = r6 & 63
            r5 = r5[r6]
            r9[r4] = r5
            byte[] r9 = r7.buffer
            int r4 = r7.pos
            int r5 = r4 + 1
            r7.pos = r5
            byte[] r5 = r7.encodeTable
            int r6 = r7.bitWorkArea
            r6 = r6 & 63
            r5 = r5[r6]
            r9[r4] = r5
            int r9 = r7.currentLinePos
            int r9 = r9 + 4
            r7.currentLinePos = r9
            int r9 = r7.lineLength
            if (r9 <= 0) goto L16d
            int r9 = r7.lineLength
            int r4 = r7.currentLinePos
            if (r9 > r4) goto L16d
            byte[] r9 = r7.lineSeparator
            byte[] r4 = r7.buffer
            int r5 = r7.pos
            byte[] r6 = r7.lineSeparator
            int r6 = r6.length
            java.lang.System.arraycopy(r9, r0, r4, r5, r6)
            int r9 = r7.pos
            byte[] r4 = r7.lineSeparator
            int r4 = r4.length
            int r9 = r9 + r4
            r7.pos = r9
            r7.currentLinePos = r0
        L16d:
            int r2 = r2 + 1
            r9 = r3
            goto Ld8
        L172:
            return
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
            goto Lf
        Le:
            r3 = 0
        Lf:
            return r3
    }

    public boolean isUrlSafe() {
            r2 = this;
            byte[] r0 = r2.encodeTable
            byte[] r1 = org.apache.commons.codec.binary.Base64.URL_SAFE_ENCODE_TABLE
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }
}
