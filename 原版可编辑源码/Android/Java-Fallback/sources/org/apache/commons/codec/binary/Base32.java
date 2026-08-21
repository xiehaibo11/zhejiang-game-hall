package org.apache.commons.codec.binary;

public class Base32 extends org.apache.commons.codec.binary.BaseNCodec {
    private static final int BITS_PER_ENCODED_BYTE = 5;
    private static final int BYTES_PER_ENCODED_BLOCK = 8;
    private static final int BYTES_PER_UNENCODED_BLOCK = 5;
    private static final byte[] CHUNK_SEPARATOR = null;
    private static final byte[] DECODE_TABLE = null;
    private static final byte[] ENCODE_TABLE = null;
    private static final byte[] HEX_DECODE_TABLE = null;
    private static final byte[] HEX_ENCODE_TABLE = null;
    private static final int MASK_5BITS = 31;
    private long bitWorkArea;
    private final int decodeSize;
    private final byte[] decodeTable;
    private final int encodeSize;
    private final byte[] encodeTable;
    private final byte[] lineSeparator;

    static {
            r0 = 2
            byte[] r0 = new byte[r0]
            r0 = {x002c: FILL_ARRAY_DATA , data: [13, 10} // fill-array
            org.apache.commons.codec.binary.Base32.CHUNK_SEPARATOR = r0
            r0 = 91
            byte[] r0 = new byte[r0]
            r0 = {x0032: FILL_ARRAY_DATA , data: [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 63, -1, -1, 26, 27, 28, 29, 30, 31, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25} // fill-array
            org.apache.commons.codec.binary.Base32.DECODE_TABLE = r0
            r0 = 32
            byte[] r1 = new byte[r0]
            r1 = {x0064: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 50, 51, 52, 53, 54, 55} // fill-array
            org.apache.commons.codec.binary.Base32.ENCODE_TABLE = r1
            r1 = 88
            byte[] r1 = new byte[r1]
            r1 = {x0078: FILL_ARRAY_DATA , data: [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 63, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -1, -1, -1, -1, -1, -1, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32} // fill-array
            org.apache.commons.codec.binary.Base32.HEX_DECODE_TABLE = r1
            byte[] r0 = new byte[r0]
            r0 = {x00a8: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86} // fill-array
            org.apache.commons.codec.binary.Base32.HEX_ENCODE_TABLE = r0
            return
    }

    public Base32() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public Base32(int r2) {
            r1 = this;
            byte[] r0 = org.apache.commons.codec.binary.Base32.CHUNK_SEPARATOR
            r1.<init>(r2, r0)
            return
    }

    public Base32(int r2, byte[] r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public Base32(int r5, byte[] r6, boolean r7) {
            r4 = this;
            r0 = 0
            if (r6 != 0) goto L5
            r1 = r0
            goto L6
        L5:
            int r1 = r6.length
        L6:
            r2 = 8
            r3 = 5
            r4.<init>(r3, r2, r5, r1)
            if (r7 == 0) goto L17
            byte[] r7 = org.apache.commons.codec.binary.Base32.HEX_ENCODE_TABLE
            r4.encodeTable = r7
            byte[] r7 = org.apache.commons.codec.binary.Base32.HEX_DECODE_TABLE
            r4.decodeTable = r7
            goto L1f
        L17:
            byte[] r7 = org.apache.commons.codec.binary.Base32.ENCODE_TABLE
            r4.encodeTable = r7
            byte[] r7 = org.apache.commons.codec.binary.Base32.DECODE_TABLE
            r4.decodeTable = r7
        L1f:
            if (r5 <= 0) goto L73
            if (r6 == 0) goto L57
            boolean r5 = r4.containsAlphabetOrPad(r6)
            if (r5 != 0) goto L37
            int r5 = r6.length
            int r5 = r5 + r2
            r4.encodeSize = r5
            int r5 = r6.length
            byte[] r5 = new byte[r5]
            r4.lineSeparator = r5
            int r7 = r6.length
            java.lang.System.arraycopy(r6, r0, r5, r0, r7)
            goto L78
        L37:
            java.lang.String r5 = org.apache.commons.codec.binary.StringUtils.newStringUtf8(r6)
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "lineSeparator must not contain Base32 characters: ["
            r7.append(r0)
            r7.append(r5)
            java.lang.String r5 = "]"
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            throw r6
        L57:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "lineLength "
            r7.append(r0)
            r7.append(r5)
            java.lang.String r5 = " > 0, but lineSeparator is null"
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            throw r6
        L73:
            r4.encodeSize = r2
            r5 = 0
            r4.lineSeparator = r5
        L78:
            int r5 = r4.encodeSize
            int r5 = r5 + (-1)
            r4.decodeSize = r5
            return
    }

    public Base32(boolean r3) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r0, r1, r3)
            return
    }

    @Override
    void decode(byte[] r13, int r14, int r15) {
            r12 = this;
            boolean r0 = r12.eof
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            if (r15 >= 0) goto La
            r12.eof = r0
        La:
            r1 = 0
        Lb:
            r2 = 24
            r3 = 16
            r4 = 8
            r5 = 255(0xff, double:1.26E-321)
            if (r1 >= r15) goto L9a
            int r7 = r14 + 1
            r14 = r13[r14]
            r8 = 61
            if (r14 != r8) goto L21
            r12.eof = r0
            goto L9a
        L21:
            int r8 = r12.decodeSize
            r12.ensureBufferSize(r8)
            if (r14 < 0) goto L95
            byte[] r8 = r12.decodeTable
            int r9 = r8.length
            if (r14 >= r9) goto L95
            r14 = r8[r14]
            if (r14 < 0) goto L95
            int r8 = r12.modulus
            int r8 = r8 + r0
            int r8 = r8 % r4
            r12.modulus = r8
            long r8 = r12.bitWorkArea
            r10 = 5
            long r8 = r8 << r10
            long r10 = (long) r14
            long r8 = r8 + r10
            r12.bitWorkArea = r8
            int r14 = r12.modulus
            if (r14 != 0) goto L95
            byte[] r14 = r12.buffer
            int r8 = r12.pos
            int r9 = r8 + 1
            r12.pos = r9
            long r9 = r12.bitWorkArea
            r11 = 32
            long r9 = r9 >> r11
            long r9 = r9 & r5
            int r9 = (int) r9
            byte r9 = (byte) r9
            r14[r8] = r9
            byte[] r14 = r12.buffer
            int r8 = r12.pos
            int r9 = r8 + 1
            r12.pos = r9
            long r9 = r12.bitWorkArea
            long r9 = r9 >> r2
            long r9 = r9 & r5
            int r2 = (int) r9
            byte r2 = (byte) r2
            r14[r8] = r2
            byte[] r14 = r12.buffer
            int r2 = r12.pos
            int r8 = r2 + 1
            r12.pos = r8
            long r8 = r12.bitWorkArea
            long r8 = r8 >> r3
            long r8 = r8 & r5
            int r3 = (int) r8
            byte r3 = (byte) r3
            r14[r2] = r3
            byte[] r14 = r12.buffer
            int r2 = r12.pos
            int r3 = r2 + 1
            r12.pos = r3
            long r8 = r12.bitWorkArea
            long r3 = r8 >> r4
            long r3 = r3 & r5
            int r3 = (int) r3
            byte r3 = (byte) r3
            r14[r2] = r3
            byte[] r14 = r12.buffer
            int r2 = r12.pos
            int r3 = r2 + 1
            r12.pos = r3
            long r3 = r12.bitWorkArea
            long r3 = r3 & r5
            int r3 = (int) r3
            byte r3 = (byte) r3
            r14[r2] = r3
        L95:
            int r1 = r1 + 1
            r14 = r7
            goto Lb
        L9a:
            boolean r13 = r12.eof
            if (r13 == 0) goto L1aa
            int r13 = r12.modulus
            r14 = 2
            if (r13 < r14) goto L1aa
            int r13 = r12.decodeSize
            r12.ensureBufferSize(r13)
            int r13 = r12.modulus
            switch(r13) {
                case 2: goto L19a;
                case 3: goto L188;
                case 4: goto L162;
                case 5: goto L12d;
                case 6: goto Lf6;
                case 7: goto Laf;
                default: goto Lad;
            }
        Lad:
            goto L1aa
        Laf:
            long r13 = r12.bitWorkArea
            r15 = 3
            long r13 = r13 >> r15
            r12.bitWorkArea = r13
            byte[] r13 = r12.buffer
            int r14 = r12.pos
            int r15 = r14 + 1
            r12.pos = r15
            long r0 = r12.bitWorkArea
            long r0 = r0 >> r2
            long r0 = r0 & r5
            int r15 = (int) r0
            byte r15 = (byte) r15
            r13[r14] = r15
            byte[] r13 = r12.buffer
            int r14 = r12.pos
            int r15 = r14 + 1
            r12.pos = r15
            long r0 = r12.bitWorkArea
            long r0 = r0 >> r3
            long r0 = r0 & r5
            int r15 = (int) r0
            byte r15 = (byte) r15
            r13[r14] = r15
            byte[] r13 = r12.buffer
            int r14 = r12.pos
            int r15 = r14 + 1
            r12.pos = r15
            long r0 = r12.bitWorkArea
            long r0 = r0 >> r4
            long r0 = r0 & r5
            int r15 = (int) r0
            byte r15 = (byte) r15
            r13[r14] = r15
            byte[] r13 = r12.buffer
            int r14 = r12.pos
            int r15 = r14 + 1
            r12.pos = r15
            long r0 = r12.bitWorkArea
            long r0 = r0 & r5
            int r15 = (int) r0
            byte r15 = (byte) r15
            r13[r14] = r15
            goto L1aa
        Lf6:
            long r13 = r12.bitWorkArea
            r15 = 6
            long r13 = r13 >> r15
            r12.bitWorkArea = r13
            byte[] r13 = r12.buffer
            int r14 = r12.pos
            int r15 = r14 + 1
            r12.pos = r15
            long r0 = r12.bitWorkArea
            long r0 = r0 >> r3
            long r0 = r0 & r5
            int r15 = (int) r0
            byte r15 = (byte) r15
            r13[r14] = r15
            byte[] r13 = r12.buffer
            int r14 = r12.pos
            int r15 = r14 + 1
            r12.pos = r15
            long r0 = r12.bitWorkArea
            long r0 = r0 >> r4
            long r0 = r0 & r5
            int r15 = (int) r0
            byte r15 = (byte) r15
            r13[r14] = r15
            byte[] r13 = r12.buffer
            int r14 = r12.pos
            int r15 = r14 + 1
            r12.pos = r15
            long r0 = r12.bitWorkArea
            long r0 = r0 & r5
            int r15 = (int) r0
            byte r15 = (byte) r15
            r13[r14] = r15
            goto L1aa
        L12d:
            long r13 = r12.bitWorkArea
            long r13 = r13 >> r0
            r12.bitWorkArea = r13
            byte[] r13 = r12.buffer
            int r14 = r12.pos
            int r15 = r14 + 1
            r12.pos = r15
            long r0 = r12.bitWorkArea
            long r0 = r0 >> r3
            long r0 = r0 & r5
            int r15 = (int) r0
            byte r15 = (byte) r15
            r13[r14] = r15
            byte[] r13 = r12.buffer
            int r14 = r12.pos
            int r15 = r14 + 1
            r12.pos = r15
            long r0 = r12.bitWorkArea
            long r0 = r0 >> r4
            long r0 = r0 & r5
            int r15 = (int) r0
            byte r15 = (byte) r15
            r13[r14] = r15
            byte[] r13 = r12.buffer
            int r14 = r12.pos
            int r15 = r14 + 1
            r12.pos = r15
            long r0 = r12.bitWorkArea
            long r0 = r0 & r5
            int r15 = (int) r0
            byte r15 = (byte) r15
            r13[r14] = r15
            goto L1aa
        L162:
            long r13 = r12.bitWorkArea
            r15 = 4
            long r13 = r13 >> r15
            r12.bitWorkArea = r13
            byte[] r13 = r12.buffer
            int r14 = r12.pos
            int r15 = r14 + 1
            r12.pos = r15
            long r0 = r12.bitWorkArea
            long r0 = r0 >> r4
            long r0 = r0 & r5
            int r15 = (int) r0
            byte r15 = (byte) r15
            r13[r14] = r15
            byte[] r13 = r12.buffer
            int r14 = r12.pos
            int r15 = r14 + 1
            r12.pos = r15
            long r0 = r12.bitWorkArea
            long r0 = r0 & r5
            int r15 = (int) r0
            byte r15 = (byte) r15
            r13[r14] = r15
            goto L1aa
        L188:
            byte[] r13 = r12.buffer
            int r14 = r12.pos
            int r15 = r14 + 1
            r12.pos = r15
            long r0 = r12.bitWorkArea
            r15 = 7
            long r0 = r0 >> r15
            long r0 = r0 & r5
            int r15 = (int) r0
            byte r15 = (byte) r15
            r13[r14] = r15
            goto L1aa
        L19a:
            byte[] r13 = r12.buffer
            int r15 = r12.pos
            int r0 = r15 + 1
            r12.pos = r0
            long r0 = r12.bitWorkArea
            long r0 = r0 >> r14
            long r0 = r0 & r5
            int r14 = (int) r0
            byte r14 = (byte) r14
            r13[r15] = r14
        L1aa:
            return
    }

    @Override
    void encode(byte[] r12, int r13, int r14) {
            r11 = this;
            boolean r0 = r11.eof
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 0
            r1 = 1
            if (r14 >= 0) goto L25f
            r11.eof = r1
            int r12 = r11.modulus
            if (r12 != 0) goto L14
            int r12 = r11.lineLength
            if (r12 != 0) goto L14
            return
        L14:
            int r12 = r11.encodeSize
            r11.ensureBufferSize(r12)
            int r12 = r11.pos
            int r13 = r11.modulus
            r14 = 3
            r2 = 2
            r3 = 61
            if (r13 == r1) goto L1d5
            r4 = 4
            if (r13 == r2) goto L158
            if (r13 == r14) goto Lcd
            if (r13 == r4) goto L2c
            goto L239
        L2c:
            byte[] r13 = r11.buffer
            int r1 = r11.pos
            int r4 = r1 + 1
            r11.pos = r4
            byte[] r4 = r11.encodeTable
            long r5 = r11.bitWorkArea
            r7 = 27
            long r5 = r5 >> r7
            int r5 = (int) r5
            r5 = r5 & 31
            r4 = r4[r5]
            r13[r1] = r4
            byte[] r13 = r11.buffer
            int r1 = r11.pos
            int r4 = r1 + 1
            r11.pos = r4
            byte[] r4 = r11.encodeTable
            long r5 = r11.bitWorkArea
            r7 = 22
            long r5 = r5 >> r7
            int r5 = (int) r5
            r5 = r5 & 31
            r4 = r4[r5]
            r13[r1] = r4
            byte[] r13 = r11.buffer
            int r1 = r11.pos
            int r4 = r1 + 1
            r11.pos = r4
            byte[] r4 = r11.encodeTable
            long r5 = r11.bitWorkArea
            r7 = 17
            long r5 = r5 >> r7
            int r5 = (int) r5
            r5 = r5 & 31
            r4 = r4[r5]
            r13[r1] = r4
            byte[] r13 = r11.buffer
            int r1 = r11.pos
            int r4 = r1 + 1
            r11.pos = r4
            byte[] r4 = r11.encodeTable
            long r5 = r11.bitWorkArea
            r7 = 12
            long r5 = r5 >> r7
            int r5 = (int) r5
            r5 = r5 & 31
            r4 = r4[r5]
            r13[r1] = r4
            byte[] r13 = r11.buffer
            int r1 = r11.pos
            int r4 = r1 + 1
            r11.pos = r4
            byte[] r4 = r11.encodeTable
            long r5 = r11.bitWorkArea
            r7 = 7
            long r5 = r5 >> r7
            int r5 = (int) r5
            r5 = r5 & 31
            r4 = r4[r5]
            r13[r1] = r4
            byte[] r13 = r11.buffer
            int r1 = r11.pos
            int r4 = r1 + 1
            r11.pos = r4
            byte[] r4 = r11.encodeTable
            long r5 = r11.bitWorkArea
            long r5 = r5 >> r2
            int r2 = (int) r5
            r2 = r2 & 31
            r2 = r4[r2]
            r13[r1] = r2
            byte[] r13 = r11.buffer
            int r1 = r11.pos
            int r2 = r1 + 1
            r11.pos = r2
            byte[] r2 = r11.encodeTable
            long r4 = r11.bitWorkArea
            long r4 = r4 << r14
            int r14 = (int) r4
            r14 = r14 & 31
            r14 = r2[r14]
            r13[r1] = r14
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            r13[r14] = r3
            goto L239
        Lcd:
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r2 = r14 + 1
            r11.pos = r2
            byte[] r2 = r11.encodeTable
            long r5 = r11.bitWorkArea
            r7 = 19
            long r5 = r5 >> r7
            int r5 = (int) r5
            r5 = r5 & 31
            r2 = r2[r5]
            r13[r14] = r2
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r2 = r14 + 1
            r11.pos = r2
            byte[] r2 = r11.encodeTable
            long r5 = r11.bitWorkArea
            r7 = 14
            long r5 = r5 >> r7
            int r5 = (int) r5
            r5 = r5 & 31
            r2 = r2[r5]
            r13[r14] = r2
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r2 = r14 + 1
            r11.pos = r2
            byte[] r2 = r11.encodeTable
            long r5 = r11.bitWorkArea
            r7 = 9
            long r5 = r5 >> r7
            int r5 = (int) r5
            r5 = r5 & 31
            r2 = r2[r5]
            r13[r14] = r2
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r2 = r14 + 1
            r11.pos = r2
            byte[] r2 = r11.encodeTable
            long r5 = r11.bitWorkArea
            long r4 = r5 >> r4
            int r4 = (int) r4
            r4 = r4 & 31
            r2 = r2[r4]
            r13[r14] = r2
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r2 = r14 + 1
            r11.pos = r2
            byte[] r2 = r11.encodeTable
            long r4 = r11.bitWorkArea
            long r4 = r4 << r1
            int r1 = (int) r4
            r1 = r1 & 31
            r1 = r2[r1]
            r13[r14] = r1
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            r13[r14] = r3
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            r13[r14] = r3
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            r13[r14] = r3
            goto L239
        L158:
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r2 = r14 + 1
            r11.pos = r2
            byte[] r2 = r11.encodeTable
            long r5 = r11.bitWorkArea
            r7 = 11
            long r5 = r5 >> r7
            int r5 = (int) r5
            r5 = r5 & 31
            r2 = r2[r5]
            r13[r14] = r2
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r2 = r14 + 1
            r11.pos = r2
            byte[] r2 = r11.encodeTable
            long r5 = r11.bitWorkArea
            r7 = 6
            long r5 = r5 >> r7
            int r5 = (int) r5
            r5 = r5 & 31
            r2 = r2[r5]
            r13[r14] = r2
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r2 = r14 + 1
            r11.pos = r2
            byte[] r2 = r11.encodeTable
            long r5 = r11.bitWorkArea
            long r5 = r5 >> r1
            int r1 = (int) r5
            r1 = r1 & 31
            r1 = r2[r1]
            r13[r14] = r1
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            byte[] r1 = r11.encodeTable
            long r5 = r11.bitWorkArea
            long r4 = r5 << r4
            int r2 = (int) r4
            r2 = r2 & 31
            r1 = r1[r2]
            r13[r14] = r1
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            r13[r14] = r3
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            r13[r14] = r3
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            r13[r14] = r3
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            r13[r14] = r3
            goto L239
        L1d5:
            byte[] r13 = r11.buffer
            int r1 = r11.pos
            int r4 = r1 + 1
            r11.pos = r4
            byte[] r4 = r11.encodeTable
            long r5 = r11.bitWorkArea
            long r5 = r5 >> r14
            int r14 = (int) r5
            r14 = r14 & 31
            r14 = r4[r14]
            r13[r1] = r14
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            byte[] r1 = r11.encodeTable
            long r4 = r11.bitWorkArea
            long r4 = r4 << r2
            int r2 = (int) r4
            r2 = r2 & 31
            r1 = r1[r2]
            r13[r14] = r1
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            r13[r14] = r3
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            r13[r14] = r3
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            r13[r14] = r3
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            r13[r14] = r3
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            r13[r14] = r3
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            int r1 = r14 + 1
            r11.pos = r1
            r13[r14] = r3
        L239:
            int r13 = r11.currentLinePos
            int r14 = r11.pos
            int r14 = r14 - r12
            int r13 = r13 + r14
            r11.currentLinePos = r13
            int r12 = r11.lineLength
            if (r12 <= 0) goto L358
            int r12 = r11.currentLinePos
            if (r12 <= 0) goto L358
            byte[] r12 = r11.lineSeparator
            byte[] r13 = r11.buffer
            int r14 = r11.pos
            byte[] r1 = r11.lineSeparator
            int r1 = r1.length
            java.lang.System.arraycopy(r12, r0, r13, r14, r1)
            int r12 = r11.pos
            byte[] r13 = r11.lineSeparator
            int r13 = r13.length
            int r12 = r12 + r13
            r11.pos = r12
            goto L358
        L25f:
            r2 = r0
        L260:
            if (r2 >= r14) goto L358
            int r3 = r11.encodeSize
            r11.ensureBufferSize(r3)
            int r3 = r11.modulus
            int r3 = r3 + r1
            r4 = 5
            int r3 = r3 % r4
            r11.modulus = r3
            int r3 = r13 + 1
            r13 = r12[r13]
            if (r13 >= 0) goto L276
            int r13 = r13 + 256
        L276:
            long r5 = r11.bitWorkArea
            r7 = 8
            long r5 = r5 << r7
            long r8 = (long) r13
            long r5 = r5 + r8
            r11.bitWorkArea = r5
            int r13 = r11.modulus
            if (r13 != 0) goto L353
            byte[] r13 = r11.buffer
            int r5 = r11.pos
            int r6 = r5 + 1
            r11.pos = r6
            byte[] r6 = r11.encodeTable
            long r8 = r11.bitWorkArea
            r10 = 35
            long r8 = r8 >> r10
            int r8 = (int) r8
            r8 = r8 & 31
            r6 = r6[r8]
            r13[r5] = r6
            byte[] r13 = r11.buffer
            int r5 = r11.pos
            int r6 = r5 + 1
            r11.pos = r6
            byte[] r6 = r11.encodeTable
            long r8 = r11.bitWorkArea
            r10 = 30
            long r8 = r8 >> r10
            int r8 = (int) r8
            r8 = r8 & 31
            r6 = r6[r8]
            r13[r5] = r6
            byte[] r13 = r11.buffer
            int r5 = r11.pos
            int r6 = r5 + 1
            r11.pos = r6
            byte[] r6 = r11.encodeTable
            long r8 = r11.bitWorkArea
            r10 = 25
            long r8 = r8 >> r10
            int r8 = (int) r8
            r8 = r8 & 31
            r6 = r6[r8]
            r13[r5] = r6
            byte[] r13 = r11.buffer
            int r5 = r11.pos
            int r6 = r5 + 1
            r11.pos = r6
            byte[] r6 = r11.encodeTable
            long r8 = r11.bitWorkArea
            r10 = 20
            long r8 = r8 >> r10
            int r8 = (int) r8
            r8 = r8 & 31
            r6 = r6[r8]
            r13[r5] = r6
            byte[] r13 = r11.buffer
            int r5 = r11.pos
            int r6 = r5 + 1
            r11.pos = r6
            byte[] r6 = r11.encodeTable
            long r8 = r11.bitWorkArea
            r10 = 15
            long r8 = r8 >> r10
            int r8 = (int) r8
            r8 = r8 & 31
            r6 = r6[r8]
            r13[r5] = r6
            byte[] r13 = r11.buffer
            int r5 = r11.pos
            int r6 = r5 + 1
            r11.pos = r6
            byte[] r6 = r11.encodeTable
            long r8 = r11.bitWorkArea
            r10 = 10
            long r8 = r8 >> r10
            int r8 = (int) r8
            r8 = r8 & 31
            r6 = r6[r8]
            r13[r5] = r6
            byte[] r13 = r11.buffer
            int r5 = r11.pos
            int r6 = r5 + 1
            r11.pos = r6
            byte[] r6 = r11.encodeTable
            long r8 = r11.bitWorkArea
            long r8 = r8 >> r4
            int r4 = (int) r8
            r4 = r4 & 31
            r4 = r6[r4]
            r13[r5] = r4
            byte[] r13 = r11.buffer
            int r4 = r11.pos
            int r5 = r4 + 1
            r11.pos = r5
            byte[] r5 = r11.encodeTable
            long r8 = r11.bitWorkArea
            int r6 = (int) r8
            r6 = r6 & 31
            r5 = r5[r6]
            r13[r4] = r5
            int r13 = r11.currentLinePos
            int r13 = r13 + r7
            r11.currentLinePos = r13
            int r13 = r11.lineLength
            if (r13 <= 0) goto L353
            int r13 = r11.lineLength
            int r4 = r11.currentLinePos
            if (r13 > r4) goto L353
            byte[] r13 = r11.lineSeparator
            byte[] r4 = r11.buffer
            int r5 = r11.pos
            byte[] r6 = r11.lineSeparator
            int r6 = r6.length
            java.lang.System.arraycopy(r13, r0, r4, r5, r6)
            int r13 = r11.pos
            byte[] r4 = r11.lineSeparator
            int r4 = r4.length
            int r13 = r13 + r4
            r11.pos = r13
            r11.currentLinePos = r0
        L353:
            int r2 = r2 + 1
            r13 = r3
            goto L260
        L358:
            return
    }

    @Override
    public boolean isInAlphabet(byte r3) {
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
}
