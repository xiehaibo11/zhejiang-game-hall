package org.apache.commons.codec1.binary;

public class Base32 extends org.apache.commons.codec1.binary.BaseNCodec {
    private static final int BITS_PER_ENCODED_BYTE = 5;
    private static final int BYTES_PER_ENCODED_BLOCK = 8;
    private static final int BYTES_PER_UNENCODED_BLOCK = 5;
    private static final byte[] CHUNK_SEPARATOR = null;
    private static final byte[] DECODE_TABLE = null;
    private static final byte[] ENCODE_TABLE = null;
    private static final byte[] HEX_DECODE_TABLE = null;
    private static final byte[] HEX_ENCODE_TABLE = null;
    private static final int MASK_5BITS = 31;
    private final int decodeSize;
    private final byte[] decodeTable;
    private final int encodeSize;
    private final byte[] encodeTable;
    private final byte[] lineSeparator;

    static {
            r0 = 2
            byte[] r1 = new byte[r0]
            r1 = {x02e8: FILL_ARRAY_DATA , data: [13, 10} // fill-array
            org.apache.commons.codec1.binary.Base32.CHUNK_SEPARATOR = r1
            r1 = 91
            byte[] r1 = new byte[r1]
            r2 = -1
            r3 = 0
            r1[r3] = r2
            r3 = 1
            r1[r3] = r2
            r1[r0] = r2
            r4 = 3
            r1[r4] = r2
            r5 = 4
            r1[r5] = r2
            r6 = 5
            r1[r6] = r2
            r7 = 6
            r1[r7] = r2
            r8 = 7
            r1[r8] = r2
            r9 = 8
            r1[r9] = r2
            r10 = 9
            r1[r10] = r2
            r11 = 10
            r1[r11] = r2
            r12 = 11
            r1[r12] = r2
            r13 = 12
            r1[r13] = r2
            r14 = 13
            r1[r14] = r2
            r15 = 14
            r1[r15] = r2
            r16 = 15
            r1[r16] = r2
            r17 = 16
            r1[r17] = r2
            r18 = 17
            r1[r18] = r2
            r19 = 18
            r1[r19] = r2
            r20 = 19
            r1[r20] = r2
            r21 = 20
            r1[r21] = r2
            r22 = 21
            r1[r22] = r2
            r22 = 22
            r1[r22] = r2
            r22 = 23
            r1[r22] = r2
            r22 = 24
            r1[r22] = r2
            r22 = 25
            r1[r22] = r2
            r22 = 26
            r1[r22] = r2
            r22 = 27
            r1[r22] = r2
            r22 = 28
            r1[r22] = r2
            r22 = 29
            r1[r22] = r2
            r22 = 30
            r1[r22] = r2
            r22 = 31
            r1[r22] = r2
            r15 = 32
            r1[r15] = r2
            r23 = 33
            r1[r23] = r2
            r23 = 34
            r1[r23] = r2
            r23 = 35
            r1[r23] = r2
            r23 = 36
            r1[r23] = r2
            r23 = 37
            r1[r23] = r2
            r23 = 38
            r1[r23] = r2
            r23 = 39
            r1[r23] = r2
            r23 = 40
            r1[r23] = r2
            r23 = 41
            r1[r23] = r2
            r23 = 42
            r1[r23] = r2
            r23 = 43
            r1[r23] = r2
            r23 = 44
            r1[r23] = r2
            r23 = 45
            r1[r23] = r2
            r23 = 46
            r1[r23] = r2
            r23 = 47
            r1[r23] = r2
            r23 = 48
            r1[r23] = r2
            r23 = 49
            r1[r23] = r2
            r23 = 50
            r24 = 26
            r1[r23] = r24
            r23 = 51
            r24 = 27
            r1[r23] = r24
            r23 = 52
            r24 = 28
            r1[r23] = r24
            r23 = 53
            r24 = 29
            r1[r23] = r24
            r23 = 54
            r24 = 30
            r1[r23] = r24
            r23 = 55
            r24 = 31
            r1[r23] = r24
            r23 = 56
            r1[r23] = r2
            r23 = 57
            r1[r23] = r2
            r23 = 58
            r1[r23] = r2
            r23 = 59
            r1[r23] = r2
            r23 = 60
            r1[r23] = r2
            r23 = 61
            r1[r23] = r2
            r23 = 62
            r1[r23] = r2
            r23 = 63
            r1[r23] = r2
            r23 = 64
            r1[r23] = r2
            r23 = 66
            r1[r23] = r3
            r23 = 67
            r1[r23] = r0
            r23 = 68
            r1[r23] = r4
            r23 = 69
            r1[r23] = r5
            r23 = 70
            r1[r23] = r6
            r23 = 71
            r1[r23] = r7
            r23 = 72
            r1[r23] = r8
            r23 = 73
            r1[r23] = r9
            r23 = 74
            r1[r23] = r10
            r23 = 75
            r1[r23] = r11
            r23 = 76
            r1[r23] = r12
            r23 = 77
            r1[r23] = r13
            r23 = 78
            r1[r23] = r14
            r23 = 79
            r22 = 14
            r1[r23] = r22
            r23 = 80
            r1[r23] = r16
            r23 = 81
            r1[r23] = r17
            r23 = 82
            r1[r23] = r18
            r23 = 83
            r1[r23] = r19
            r23 = 84
            r1[r23] = r20
            r23 = 85
            r1[r23] = r21
            r23 = 86
            r24 = 21
            r1[r23] = r24
            r23 = 87
            r24 = 22
            r1[r23] = r24
            r23 = 88
            r24 = 23
            r1[r23] = r24
            r23 = 89
            r24 = 24
            r1[r23] = r24
            r23 = 90
            r24 = 25
            r1[r23] = r24
            org.apache.commons.codec1.binary.Base32.DECODE_TABLE = r1
            byte[] r1 = new byte[r15]
            r1 = {x02ee: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 50, 51, 52, 53, 54, 55} // fill-array
            org.apache.commons.codec1.binary.Base32.ENCODE_TABLE = r1
            r1 = 88
            byte[] r1 = new byte[r1]
            r23 = 0
            r1[r23] = r2
            r1[r3] = r2
            r1[r0] = r2
            r1[r4] = r2
            r1[r5] = r2
            r1[r6] = r2
            r1[r7] = r2
            r1[r8] = r2
            r1[r9] = r2
            r1[r10] = r2
            r1[r11] = r2
            r1[r12] = r2
            r1[r13] = r2
            r1[r14] = r2
            r22 = 14
            r1[r22] = r2
            r1[r16] = r2
            r1[r17] = r2
            r1[r18] = r2
            r1[r19] = r2
            r1[r20] = r2
            r1[r21] = r2
            r23 = 21
            r1[r23] = r2
            r23 = 22
            r1[r23] = r2
            r23 = 23
            r1[r23] = r2
            r23 = 24
            r1[r23] = r2
            r23 = 25
            r1[r23] = r2
            r23 = 26
            r1[r23] = r2
            r23 = 27
            r1[r23] = r2
            r23 = 28
            r1[r23] = r2
            r23 = 29
            r1[r23] = r2
            r23 = 30
            r1[r23] = r2
            r23 = 31
            r1[r23] = r2
            r1[r15] = r2
            r23 = 33
            r1[r23] = r2
            r23 = 34
            r1[r23] = r2
            r23 = 35
            r1[r23] = r2
            r23 = 36
            r1[r23] = r2
            r23 = 37
            r1[r23] = r2
            r23 = 38
            r1[r23] = r2
            r23 = 39
            r1[r23] = r2
            r23 = 40
            r1[r23] = r2
            r23 = 41
            r1[r23] = r2
            r23 = 42
            r1[r23] = r2
            r23 = 43
            r1[r23] = r2
            r23 = 44
            r1[r23] = r2
            r23 = 45
            r1[r23] = r2
            r23 = 46
            r1[r23] = r2
            r23 = 47
            r1[r23] = r2
            r23 = 49
            r1[r23] = r3
            r3 = 50
            r1[r3] = r0
            r0 = 51
            r1[r0] = r4
            r0 = 52
            r1[r0] = r5
            r0 = 53
            r1[r0] = r6
            r0 = 54
            r1[r0] = r7
            r0 = 55
            r1[r0] = r8
            r0 = 56
            r1[r0] = r9
            r0 = 57
            r1[r0] = r10
            r0 = 58
            r1[r0] = r2
            r0 = 59
            r1[r0] = r2
            r0 = 60
            r1[r0] = r2
            r0 = 61
            r1[r0] = r2
            r0 = 62
            r1[r0] = r2
            r0 = 63
            r1[r0] = r2
            r0 = 64
            r1[r0] = r2
            r0 = 65
            r1[r0] = r11
            r0 = 66
            r1[r0] = r12
            r0 = 67
            r1[r0] = r13
            r0 = 68
            r1[r0] = r14
            r0 = 69
            r2 = 14
            r1[r0] = r2
            r0 = 70
            r1[r0] = r16
            r0 = 71
            r1[r0] = r17
            r0 = 72
            r1[r0] = r18
            r0 = 73
            r1[r0] = r19
            r0 = 74
            r1[r0] = r20
            r0 = 75
            r1[r0] = r21
            r0 = 76
            r2 = 21
            r1[r0] = r2
            r0 = 77
            r2 = 22
            r1[r0] = r2
            r0 = 78
            r2 = 23
            r1[r0] = r2
            r0 = 79
            r2 = 24
            r1[r0] = r2
            r0 = 80
            r2 = 25
            r1[r0] = r2
            r0 = 81
            r2 = 26
            r1[r0] = r2
            r0 = 82
            r2 = 27
            r1[r0] = r2
            r0 = 83
            r2 = 28
            r1[r0] = r2
            r0 = 84
            r2 = 29
            r1[r0] = r2
            r0 = 85
            r2 = 30
            r1[r0] = r2
            r0 = 86
            r2 = 31
            r1[r0] = r2
            r0 = 87
            r1[r0] = r15
            org.apache.commons.codec1.binary.Base32.HEX_DECODE_TABLE = r1
            byte[] r0 = new byte[r15]
            r0 = {x0302: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86} // fill-array
            org.apache.commons.codec1.binary.Base32.HEX_ENCODE_TABLE = r0
            return
    }

    public Base32() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public Base32(byte r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    public Base32(int r2) {
            r1 = this;
            byte[] r0 = org.apache.commons.codec1.binary.Base32.CHUNK_SEPARATOR
            r1.<init>(r2, r0)
            return
    }

    public Base32(int r3, byte[] r4) {
            r2 = this;
            r0 = 0
            r1 = 61
            r2.<init>(r3, r4, r0, r1)
            return
    }

    public Base32(int r2, byte[] r3, boolean r4) {
            r1 = this;
            r0 = 61
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public Base32(int r9, byte[] r10, boolean r11, byte r12) {
            r8 = this;
            r0 = 0
            if (r10 != 0) goto L5
            r6 = r0
            goto L7
        L5:
            int r1 = r10.length
            r6 = r1
        L7:
            r3 = 5
            r4 = 8
            r2 = r8
            r5 = r9
            r7 = r12
            r2.<init>(r3, r4, r5, r6, r7)
            if (r11 == 0) goto L1b
            byte[] r11 = org.apache.commons.codec1.binary.Base32.HEX_ENCODE_TABLE
            r8.encodeTable = r11
            byte[] r11 = org.apache.commons.codec1.binary.Base32.HEX_DECODE_TABLE
            r8.decodeTable = r11
            goto L23
        L1b:
            byte[] r11 = org.apache.commons.codec1.binary.Base32.ENCODE_TABLE
            r8.encodeTable = r11
            byte[] r11 = org.apache.commons.codec1.binary.Base32.DECODE_TABLE
            r8.decodeTable = r11
        L23:
            r11 = 8
            if (r9 <= 0) goto L73
            if (r10 == 0) goto L5a
            boolean r9 = r8.containsAlphabetOrPad(r10)
            if (r9 != 0) goto L3d
            int r9 = r10.length
            int r9 = r9 + r11
            r8.encodeSize = r9
            int r9 = r10.length
            byte[] r9 = new byte[r9]
            r8.lineSeparator = r9
            int r11 = r10.length
            java.lang.System.arraycopy(r10, r0, r9, r0, r11)
            goto L78
        L3d:
            java.lang.String r9 = org.apache.commons.codec1.binary.StringUtils.newStringUtf8(r10)
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            java.lang.String r12 = "lineSeparator must not contain Base32 characters: ["
            r11.<init>(r12)
            r11.append(r9)
            java.lang.String r9 = "]"
            r11.append(r9)
            java.lang.String r9 = r11.toString()
            r10.<init>(r9)
            throw r10
        L5a:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            java.lang.String r12 = "lineLength "
            r11.<init>(r12)
            r11.append(r9)
            java.lang.String r9 = " > 0, but lineSeparator is null"
            r11.append(r9)
            java.lang.String r9 = r11.toString()
            r10.<init>(r9)
            throw r10
        L73:
            r8.encodeSize = r11
            r9 = 0
            r8.lineSeparator = r9
        L78:
            int r9 = r8.encodeSize
            int r9 = r9 + (-1)
            r8.decodeSize = r9
            boolean r9 = r8.isInAlphabet(r12)
            if (r9 != 0) goto L8b
            boolean r9 = isWhiteSpace(r12)
            if (r9 != 0) goto L8b
            return
        L8b:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.String r10 = "pad must not be in alphabet or whitespace"
            r9.<init>(r10)
            throw r9
    }

    public Base32(boolean r4) {
            r3 = this;
            r0 = 0
            r1 = 0
            r2 = 61
            r3.<init>(r0, r1, r4, r2)
            return
    }

    public Base32(boolean r3, byte r4) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r0, r1, r3, r4)
            return
    }

    @Override
    void decode(byte[] r17, int r18, int r19, org.apache.commons.codec1.binary.BaseNCodec.Context r20) {
            r16 = this;
            r0 = r16
            r1 = r19
            r2 = r20
            boolean r3 = r2.eof
            if (r3 == 0) goto Lb
            return
        Lb:
            r3 = 1
            if (r1 >= 0) goto L10
            r2.eof = r3
        L10:
            r4 = 0
            r5 = r4
            r4 = r18
        L14:
            r6 = 24
            r7 = 16
            r8 = 8
            r9 = 255(0xff, double:1.26E-321)
            if (r5 < r1) goto L1f
            goto L29
        L1f:
            int r11 = r4 + 1
            r4 = r17[r4]
            byte r12 = r0.pad
            if (r4 != r12) goto L134
            r2.eof = r3
        L29:
            boolean r1 = r2.eof
            if (r1 == 0) goto L133
            int r1 = r2.modulus
            r4 = 2
            if (r1 < r4) goto L133
            int r1 = r0.decodeSize
            byte[] r1 = r0.ensureBufferSize(r1, r2)
            int r5 = r2.modulus
            switch(r5) {
                case 2: goto L124;
                case 3: goto L114;
                case 4: goto Lf2;
                case 5: goto Lc2;
                case 6: goto L92;
                case 7: goto L53;
                default: goto L3d;
            }
        L3d:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "Impossible modulus "
            r3.<init>(r4)
            int r2 = r2.modulus
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r1.<init>(r2)
            throw r1
        L53:
            long r3 = r2.lbitWorkArea
            r5 = 3
            long r3 = r3 >> r5
            r2.lbitWorkArea = r3
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r4 = r2.lbitWorkArea
            long r4 = r4 >> r6
            long r4 = r4 & r9
            int r4 = (int) r4
            byte r4 = (byte) r4
            r1[r3] = r4
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r4 = r2.lbitWorkArea
            long r4 = r4 >> r7
            long r4 = r4 & r9
            int r4 = (int) r4
            byte r4 = (byte) r4
            r1[r3] = r4
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r4 = r2.lbitWorkArea
            long r4 = r4 >> r8
            long r4 = r4 & r9
            int r4 = (int) r4
            byte r4 = (byte) r4
            r1[r3] = r4
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r4 = r2.lbitWorkArea
            long r4 = r4 & r9
            int r2 = (int) r4
            byte r2 = (byte) r2
            r1[r3] = r2
            goto L133
        L92:
            long r3 = r2.lbitWorkArea
            r5 = 6
            long r3 = r3 >> r5
            r2.lbitWorkArea = r3
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r4 = r2.lbitWorkArea
            long r4 = r4 >> r7
            long r4 = r4 & r9
            int r4 = (int) r4
            byte r4 = (byte) r4
            r1[r3] = r4
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r4 = r2.lbitWorkArea
            long r4 = r4 >> r8
            long r4 = r4 & r9
            int r4 = (int) r4
            byte r4 = (byte) r4
            r1[r3] = r4
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r4 = r2.lbitWorkArea
            long r4 = r4 & r9
            int r2 = (int) r4
            byte r2 = (byte) r2
            r1[r3] = r2
            goto L133
        Lc2:
            long r4 = r2.lbitWorkArea
            long r3 = r4 >> r3
            r2.lbitWorkArea = r3
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r4 = r2.lbitWorkArea
            long r4 = r4 >> r7
            long r4 = r4 & r9
            int r4 = (int) r4
            byte r4 = (byte) r4
            r1[r3] = r4
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r4 = r2.lbitWorkArea
            long r4 = r4 >> r8
            long r4 = r4 & r9
            int r4 = (int) r4
            byte r4 = (byte) r4
            r1[r3] = r4
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r4 = r2.lbitWorkArea
            long r4 = r4 & r9
            int r2 = (int) r4
            byte r2 = (byte) r2
            r1[r3] = r2
            goto L133
        Lf2:
            long r3 = r2.lbitWorkArea
            r5 = 4
            long r3 = r3 >> r5
            r2.lbitWorkArea = r3
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r4 = r2.lbitWorkArea
            long r4 = r4 >> r8
            long r4 = r4 & r9
            int r4 = (int) r4
            byte r4 = (byte) r4
            r1[r3] = r4
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r4 = r2.lbitWorkArea
            long r4 = r4 & r9
            int r2 = (int) r4
            byte r2 = (byte) r2
            r1[r3] = r2
            goto L133
        L114:
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r4 = r2.lbitWorkArea
            r2 = 7
            long r4 = r4 >> r2
            long r4 = r4 & r9
            int r2 = (int) r4
            byte r2 = (byte) r2
            r1[r3] = r2
            goto L133
        L124:
            int r3 = r2.pos
            int r5 = r3 + 1
            r2.pos = r5
            long r5 = r2.lbitWorkArea
            long r4 = r5 >> r4
            long r4 = r4 & r9
            int r2 = (int) r4
            byte r2 = (byte) r2
            r1[r3] = r2
        L133:
            return
        L134:
            int r12 = r0.decodeSize
            byte[] r12 = r0.ensureBufferSize(r12, r2)
            if (r4 < 0) goto L19f
            byte[] r13 = r0.decodeTable
            int r14 = r13.length
            if (r4 >= r14) goto L19f
            r4 = r13[r4]
            if (r4 < 0) goto L19f
            int r13 = r2.modulus
            int r13 = r13 + r3
            int r13 = r13 % r8
            r2.modulus = r13
            long r13 = r2.lbitWorkArea
            r15 = 5
            long r13 = r13 << r15
            long r3 = (long) r4
            long r13 = r13 + r3
            r2.lbitWorkArea = r13
            int r3 = r2.modulus
            if (r3 != 0) goto L19f
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r13 = r2.lbitWorkArea
            r4 = 32
            long r13 = r13 >> r4
            long r13 = r13 & r9
            int r4 = (int) r13
            byte r4 = (byte) r4
            r12[r3] = r4
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r13 = r2.lbitWorkArea
            long r13 = r13 >> r6
            long r13 = r13 & r9
            int r4 = (int) r13
            byte r4 = (byte) r4
            r12[r3] = r4
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r13 = r2.lbitWorkArea
            long r6 = r13 >> r7
            long r6 = r6 & r9
            int r4 = (int) r6
            byte r4 = (byte) r4
            r12[r3] = r4
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r6 = r2.lbitWorkArea
            long r6 = r6 >> r8
            long r6 = r6 & r9
            int r4 = (int) r6
            byte r4 = (byte) r4
            r12[r3] = r4
            int r3 = r2.pos
            int r4 = r3 + 1
            r2.pos = r4
            long r6 = r2.lbitWorkArea
            long r6 = r6 & r9
            int r4 = (int) r6
            byte r4 = (byte) r4
            r12[r3] = r4
        L19f:
            int r5 = r5 + 1
            r4 = r11
            r3 = 1
            goto L14
    }

    @Override
    void encode(byte[] r12, int r13, int r14, org.apache.commons.codec1.binary.BaseNCodec.Context r15) {
            r11 = this;
            boolean r0 = r15.eof
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 0
            r1 = 1
            if (r14 >= 0) goto L24f
            r15.eof = r1
            int r12 = r15.modulus
            if (r12 != 0) goto L14
            int r12 = r11.lineLength
            if (r12 != 0) goto L14
            return
        L14:
            int r12 = r11.encodeSize
            byte[] r12 = r11.ensureBufferSize(r12, r15)
            int r13 = r15.pos
            int r14 = r15.modulus
            if (r14 == 0) goto L22c
            r2 = 3
            r3 = 2
            if (r14 == r1) goto L1cb
            r4 = 4
            if (r14 == r3) goto L157
            if (r14 == r2) goto Ld6
            if (r14 != r4) goto Lc0
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte[] r1 = r11.encodeTable
            long r4 = r15.lbitWorkArea
            r6 = 27
            long r4 = r4 >> r6
            int r4 = (int) r4
            r4 = r4 & 31
            r1 = r1[r4]
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte[] r1 = r11.encodeTable
            long r4 = r15.lbitWorkArea
            r6 = 22
            long r4 = r4 >> r6
            int r4 = (int) r4
            r4 = r4 & 31
            r1 = r1[r4]
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte[] r1 = r11.encodeTable
            long r4 = r15.lbitWorkArea
            r6 = 17
            long r4 = r4 >> r6
            int r4 = (int) r4
            r4 = r4 & 31
            r1 = r1[r4]
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte[] r1 = r11.encodeTable
            long r4 = r15.lbitWorkArea
            r6 = 12
            long r4 = r4 >> r6
            int r4 = (int) r4
            r4 = r4 & 31
            r1 = r1[r4]
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte[] r1 = r11.encodeTable
            long r4 = r15.lbitWorkArea
            r6 = 7
            long r4 = r4 >> r6
            int r4 = (int) r4
            r4 = r4 & 31
            r1 = r1[r4]
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte[] r1 = r11.encodeTable
            long r4 = r15.lbitWorkArea
            long r3 = r4 >> r3
            int r3 = (int) r3
            r3 = r3 & 31
            r1 = r1[r3]
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte[] r1 = r11.encodeTable
            long r3 = r15.lbitWorkArea
            long r2 = r3 << r2
            int r2 = (int) r2
            r2 = r2 & 31
            r1 = r1[r2]
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte r1 = r11.pad
            r12[r14] = r1
            goto L22c
        Lc0:
            java.lang.IllegalStateException r12 = new java.lang.IllegalStateException
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            java.lang.String r14 = "Impossible modulus "
            r13.<init>(r14)
            int r14 = r15.modulus
            r13.append(r14)
            java.lang.String r13 = r13.toString()
            r12.<init>(r13)
            throw r12
        Ld6:
            int r14 = r15.pos
            int r2 = r14 + 1
            r15.pos = r2
            byte[] r2 = r11.encodeTable
            long r5 = r15.lbitWorkArea
            r3 = 19
            long r5 = r5 >> r3
            int r3 = (int) r5
            r3 = r3 & 31
            r2 = r2[r3]
            r12[r14] = r2
            int r14 = r15.pos
            int r2 = r14 + 1
            r15.pos = r2
            byte[] r2 = r11.encodeTable
            long r5 = r15.lbitWorkArea
            r3 = 14
            long r5 = r5 >> r3
            int r3 = (int) r5
            r3 = r3 & 31
            r2 = r2[r3]
            r12[r14] = r2
            int r14 = r15.pos
            int r2 = r14 + 1
            r15.pos = r2
            byte[] r2 = r11.encodeTable
            long r5 = r15.lbitWorkArea
            r3 = 9
            long r5 = r5 >> r3
            int r3 = (int) r5
            r3 = r3 & 31
            r2 = r2[r3]
            r12[r14] = r2
            int r14 = r15.pos
            int r2 = r14 + 1
            r15.pos = r2
            byte[] r2 = r11.encodeTable
            long r5 = r15.lbitWorkArea
            long r3 = r5 >> r4
            int r3 = (int) r3
            r3 = r3 & 31
            r2 = r2[r3]
            r12[r14] = r2
            int r14 = r15.pos
            int r2 = r14 + 1
            r15.pos = r2
            byte[] r2 = r11.encodeTable
            long r3 = r15.lbitWorkArea
            long r3 = r3 << r1
            int r1 = (int) r3
            r1 = r1 & 31
            r1 = r2[r1]
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte r1 = r11.pad
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte r1 = r11.pad
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte r1 = r11.pad
            r12[r14] = r1
            goto L22c
        L157:
            int r14 = r15.pos
            int r2 = r14 + 1
            r15.pos = r2
            byte[] r2 = r11.encodeTable
            long r5 = r15.lbitWorkArea
            r3 = 11
            long r5 = r5 >> r3
            int r3 = (int) r5
            r3 = r3 & 31
            r2 = r2[r3]
            r12[r14] = r2
            int r14 = r15.pos
            int r2 = r14 + 1
            r15.pos = r2
            byte[] r2 = r11.encodeTable
            long r5 = r15.lbitWorkArea
            r3 = 6
            long r5 = r5 >> r3
            int r3 = (int) r5
            r3 = r3 & 31
            r2 = r2[r3]
            r12[r14] = r2
            int r14 = r15.pos
            int r2 = r14 + 1
            r15.pos = r2
            byte[] r2 = r11.encodeTable
            long r5 = r15.lbitWorkArea
            long r5 = r5 >> r1
            int r1 = (int) r5
            r1 = r1 & 31
            r1 = r2[r1]
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte[] r1 = r11.encodeTable
            long r2 = r15.lbitWorkArea
            long r2 = r2 << r4
            int r2 = (int) r2
            r2 = r2 & 31
            r1 = r1[r2]
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte r1 = r11.pad
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte r1 = r11.pad
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte r1 = r11.pad
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte r1 = r11.pad
            r12[r14] = r1
            goto L22c
        L1cb:
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte[] r1 = r11.encodeTable
            long r4 = r15.lbitWorkArea
            long r4 = r4 >> r2
            int r2 = (int) r4
            r2 = r2 & 31
            r1 = r1[r2]
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte[] r1 = r11.encodeTable
            long r4 = r15.lbitWorkArea
            long r2 = r4 << r3
            int r2 = (int) r2
            r2 = r2 & 31
            r1 = r1[r2]
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte r1 = r11.pad
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte r1 = r11.pad
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte r1 = r11.pad
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte r1 = r11.pad
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte r1 = r11.pad
            r12[r14] = r1
            int r14 = r15.pos
            int r1 = r14 + 1
            r15.pos = r1
            byte r1 = r11.pad
            r12[r14] = r1
        L22c:
            int r14 = r15.currentLinePos
            int r1 = r15.pos
            int r1 = r1 - r13
            int r14 = r14 + r1
            r15.currentLinePos = r14
            int r13 = r11.lineLength
            if (r13 <= 0) goto L252
            int r13 = r15.currentLinePos
            if (r13 <= 0) goto L252
            byte[] r13 = r11.lineSeparator
            int r14 = r15.pos
            byte[] r1 = r11.lineSeparator
            int r1 = r1.length
            java.lang.System.arraycopy(r13, r0, r12, r14, r1)
            int r12 = r15.pos
            byte[] r13 = r11.lineSeparator
            int r13 = r13.length
            int r12 = r12 + r13
            r15.pos = r12
            goto L252
        L24f:
            r2 = r0
        L250:
            if (r2 < r14) goto L253
        L252:
            return
        L253:
            int r3 = r11.encodeSize
            byte[] r3 = r11.ensureBufferSize(r3, r15)
            int r4 = r15.modulus
            int r4 = r4 + r1
            r5 = 5
            int r4 = r4 % r5
            r15.modulus = r4
            int r4 = r13 + 1
            r13 = r12[r13]
            if (r13 >= 0) goto L268
            int r13 = r13 + 256
        L268:
            long r6 = r15.lbitWorkArea
            r8 = 8
            long r6 = r6 << r8
            long r9 = (long) r13
            long r6 = r6 + r9
            r15.lbitWorkArea = r6
            int r13 = r15.modulus
            if (r13 != 0) goto L333
            int r13 = r15.pos
            int r6 = r13 + 1
            r15.pos = r6
            byte[] r6 = r11.encodeTable
            long r9 = r15.lbitWorkArea
            r7 = 35
            long r9 = r9 >> r7
            int r7 = (int) r9
            r7 = r7 & 31
            r6 = r6[r7]
            r3[r13] = r6
            int r13 = r15.pos
            int r6 = r13 + 1
            r15.pos = r6
            byte[] r6 = r11.encodeTable
            long r9 = r15.lbitWorkArea
            r7 = 30
            long r9 = r9 >> r7
            int r7 = (int) r9
            r7 = r7 & 31
            r6 = r6[r7]
            r3[r13] = r6
            int r13 = r15.pos
            int r6 = r13 + 1
            r15.pos = r6
            byte[] r6 = r11.encodeTable
            long r9 = r15.lbitWorkArea
            r7 = 25
            long r9 = r9 >> r7
            int r7 = (int) r9
            r7 = r7 & 31
            r6 = r6[r7]
            r3[r13] = r6
            int r13 = r15.pos
            int r6 = r13 + 1
            r15.pos = r6
            byte[] r6 = r11.encodeTable
            long r9 = r15.lbitWorkArea
            r7 = 20
            long r9 = r9 >> r7
            int r7 = (int) r9
            r7 = r7 & 31
            r6 = r6[r7]
            r3[r13] = r6
            int r13 = r15.pos
            int r6 = r13 + 1
            r15.pos = r6
            byte[] r6 = r11.encodeTable
            long r9 = r15.lbitWorkArea
            r7 = 15
            long r9 = r9 >> r7
            int r7 = (int) r9
            r7 = r7 & 31
            r6 = r6[r7]
            r3[r13] = r6
            int r13 = r15.pos
            int r6 = r13 + 1
            r15.pos = r6
            byte[] r6 = r11.encodeTable
            long r9 = r15.lbitWorkArea
            r7 = 10
            long r9 = r9 >> r7
            int r7 = (int) r9
            r7 = r7 & 31
            r6 = r6[r7]
            r3[r13] = r6
            int r13 = r15.pos
            int r6 = r13 + 1
            r15.pos = r6
            byte[] r6 = r11.encodeTable
            long r9 = r15.lbitWorkArea
            long r9 = r9 >> r5
            int r5 = (int) r9
            r5 = r5 & 31
            r5 = r6[r5]
            r3[r13] = r5
            int r13 = r15.pos
            int r5 = r13 + 1
            r15.pos = r5
            byte[] r5 = r11.encodeTable
            long r6 = r15.lbitWorkArea
            int r6 = (int) r6
            r6 = r6 & 31
            r5 = r5[r6]
            r3[r13] = r5
            int r13 = r15.currentLinePos
            int r13 = r13 + r8
            r15.currentLinePos = r13
            int r13 = r11.lineLength
            if (r13 <= 0) goto L333
            int r13 = r11.lineLength
            int r5 = r15.currentLinePos
            if (r13 > r5) goto L333
            byte[] r13 = r11.lineSeparator
            int r5 = r15.pos
            byte[] r6 = r11.lineSeparator
            int r6 = r6.length
            java.lang.System.arraycopy(r13, r0, r3, r5, r6)
            int r13 = r15.pos
            byte[] r3 = r11.lineSeparator
            int r3 = r3.length
            int r13 = r13 + r3
            r15.pos = r13
            r15.currentLinePos = r0
        L333:
            int r2 = r2 + 1
            r13 = r4
            goto L250
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
            return r3
        Le:
            r3 = 0
            return r3
    }
}
