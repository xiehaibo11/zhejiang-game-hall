package com.bianfeng.ymnsdk.util.security;

public final class Base64 {
    private static final int BASELENGTH = 128;
    private static final int EIGHTBIT = 8;
    private static final int FOURBYTE = 4;
    private static final int LOOKUPLENGTH = 64;
    private static final char PAD = '=';
    private static final int SIGN = -128;
    private static final int SIXTEENBIT = 16;
    private static final int TWENTYFOURBITGROUP = 24;
    private static final byte[] base64Alphabet = null;
    private static final boolean fDebug = false;
    private static final char[] lookUpBase64Alphabet = null;

    static {
            r0 = 128(0x80, float:1.8E-43)
            byte[] r1 = new byte[r0]
            com.bianfeng.ymnsdk.util.security.Base64.base64Alphabet = r1
            r1 = 64
            char[] r1 = new char[r1]
            com.bianfeng.ymnsdk.util.security.Base64.lookUpBase64Alphabet = r1
            r1 = 0
        Ld:
            if (r1 >= r0) goto L17
            byte[] r2 = com.bianfeng.ymnsdk.util.security.Base64.base64Alphabet
            r3 = -1
            r2[r1] = r3
            int r1 = r1 + 1
            goto Ld
        L17:
            r0 = 90
        L19:
            r1 = 65
            if (r0 < r1) goto L27
            byte[] r1 = com.bianfeng.ymnsdk.util.security.Base64.base64Alphabet
            int r2 = r0 + (-65)
            byte r2 = (byte) r2
            r1[r0] = r2
            int r0 = r0 + (-1)
            goto L19
        L27:
            r0 = 122(0x7a, float:1.71E-43)
        L29:
            r1 = 97
            if (r0 < r1) goto L39
            byte[] r1 = com.bianfeng.ymnsdk.util.security.Base64.base64Alphabet
            int r2 = r0 + (-97)
            int r2 = r2 + 26
            byte r2 = (byte) r2
            r1[r0] = r2
            int r0 = r0 + (-1)
            goto L29
        L39:
            r0 = 57
        L3b:
            r1 = 48
            if (r0 < r1) goto L4b
            byte[] r1 = com.bianfeng.ymnsdk.util.security.Base64.base64Alphabet
            int r2 = r0 + (-48)
            int r2 = r2 + 52
            byte r2 = (byte) r2
            r1[r0] = r2
            int r0 = r0 + (-1)
            goto L3b
        L4b:
            byte[] r0 = com.bianfeng.ymnsdk.util.security.Base64.base64Alphabet
            r1 = 62
            r2 = 43
            r0[r2] = r1
            r3 = 63
            r4 = 47
            r0[r4] = r3
            r0 = 0
        L5a:
            r5 = 25
            if (r0 > r5) goto L68
            char[] r5 = com.bianfeng.ymnsdk.util.security.Base64.lookUpBase64Alphabet
            int r6 = r0 + 65
            char r6 = (char) r6
            r5[r0] = r6
            int r0 = r0 + 1
            goto L5a
        L68:
            r0 = 26
            r5 = 0
        L6b:
            r6 = 51
            if (r0 > r6) goto L7b
            char[] r6 = com.bianfeng.ymnsdk.util.security.Base64.lookUpBase64Alphabet
            int r7 = r5 + 97
            char r7 = (char) r7
            r6[r0] = r7
            int r0 = r0 + 1
            int r5 = r5 + 1
            goto L6b
        L7b:
            r0 = 52
            r5 = 0
        L7e:
            r6 = 61
            if (r0 > r6) goto L8e
            char[] r6 = com.bianfeng.ymnsdk.util.security.Base64.lookUpBase64Alphabet
            int r7 = r5 + 48
            char r7 = (char) r7
            r6[r0] = r7
            int r0 = r0 + 1
            int r5 = r5 + 1
            goto L7e
        L8e:
            char[] r0 = com.bianfeng.ymnsdk.util.security.Base64.lookUpBase64Alphabet
            r0[r1] = r2
            r0[r3] = r4
            return
    }

    public Base64() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] decode(java.lang.String r20) {
            r0 = 0
            if (r20 != 0) goto L4
            return r0
        L4:
            char[] r1 = r20.toCharArray()
            int r2 = removeWhiteSpace(r1)
            int r3 = r2 % 4
            if (r3 == 0) goto L11
            return r0
        L11:
            int r3 = r2 / 4
            r4 = 0
            if (r3 != 0) goto L19
            byte[] r0 = new byte[r4]
            return r0
        L19:
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            r11 = 0
            r12 = 0
            r13 = 0
            r14 = 0
            r15 = 0
            r16 = 0
            int r4 = r3 * 3
            byte[] r4 = new byte[r4]
        L2a:
            int r5 = r3 + (-1)
            if (r14 >= r5) goto L94
            int r5 = r16 + 1
            char r16 = r1[r16]
            r10 = r16
            boolean r16 = isData(r16)
            if (r16 == 0) goto L90
            int r16 = r5 + 1
            char r5 = r1[r5]
            r11 = r5
            boolean r5 = isData(r5)
            if (r5 == 0) goto L92
            int r5 = r16 + 1
            char r16 = r1[r16]
            r12 = r16
            boolean r16 = isData(r16)
            if (r16 == 0) goto L8d
            int r16 = r5 + 1
            char r5 = r1[r5]
            r13 = r5
            boolean r5 = isData(r5)
            if (r5 != 0) goto L5d
            goto L92
        L5d:
            byte[] r5 = com.bianfeng.ymnsdk.util.security.Base64.base64Alphabet
            r6 = r5[r10]
            r7 = r5[r11]
            r8 = r5[r12]
            r9 = r5[r13]
            int r5 = r15 + 1
            int r18 = r6 << 2
            int r19 = r7 >> 4
            r0 = r18 | r19
            byte r0 = (byte) r0
            r4[r15] = r0
            int r0 = r5 + 1
            r15 = r7 & 15
            int r15 = r15 << 4
            int r18 = r8 >> 2
            r18 = r18 & 15
            r15 = r15 | r18
            byte r15 = (byte) r15
            r4[r5] = r15
            int r15 = r0 + 1
            int r5 = r8 << 6
            r5 = r5 | r9
            byte r5 = (byte) r5
            r4[r0] = r5
            int r14 = r14 + 1
            r0 = 0
            goto L2a
        L8d:
            r16 = r5
            goto L92
        L90:
            r16 = r5
        L92:
            r0 = 0
            return r0
        L94:
            int r0 = r16 + 1
            char r5 = r1[r16]
            r10 = r5
            boolean r5 = isData(r5)
            if (r5 == 0) goto L163
            int r5 = r0 + 1
            char r0 = r1[r0]
            r11 = r0
            boolean r0 = isData(r0)
            if (r0 != 0) goto Lb2
            r18 = r1
            r16 = r2
            r0 = r5
            r1 = 0
            goto L168
        Lb2:
            byte[] r0 = com.bianfeng.ymnsdk.util.security.Base64.base64Alphabet
            r6 = r0[r10]
            r0 = r0[r11]
            int r7 = r5 + 1
            char r5 = r1[r5]
            int r12 = r7 + 1
            char r7 = r1[r7]
            boolean r13 = isData(r5)
            if (r13 == 0) goto Lfa
            boolean r13 = isData(r7)
            if (r13 != 0) goto Lcf
            r18 = r1
            goto Lfc
        Lcf:
            byte[] r13 = com.bianfeng.ymnsdk.util.security.Base64.base64Alphabet
            r8 = r13[r5]
            r9 = r13[r7]
            int r13 = r15 + 1
            int r16 = r6 << 2
            int r17 = r0 >> 4
            r18 = r1
            r1 = r16 | r17
            byte r1 = (byte) r1
            r4[r15] = r1
            int r1 = r13 + 1
            r15 = r0 & 15
            int r15 = r15 << 4
            int r16 = r8 >> 2
            r16 = r16 & 15
            r15 = r15 | r16
            byte r15 = (byte) r15
            r4[r13] = r15
            int r13 = r1 + 1
            int r15 = r8 << 6
            r15 = r15 | r9
            byte r15 = (byte) r15
            r4[r1] = r15
            return r4
        Lfa:
            r18 = r1
        Lfc:
            boolean r1 = isPad(r5)
            if (r1 == 0) goto L125
            boolean r1 = isPad(r7)
            if (r1 == 0) goto L125
            r1 = r0 & 15
            if (r1 == 0) goto L10e
            r1 = 0
            return r1
        L10e:
            int r1 = r14 * 3
            int r1 = r1 + 1
            byte[] r1 = new byte[r1]
            int r13 = r14 * 3
            r16 = r2
            r2 = 0
            java.lang.System.arraycopy(r4, r2, r1, r2, r13)
            int r2 = r6 << 2
            int r13 = r0 >> 4
            r2 = r2 | r13
            byte r2 = (byte) r2
            r1[r15] = r2
            return r1
        L125:
            r16 = r2
            boolean r1 = isPad(r5)
            if (r1 != 0) goto L161
            boolean r1 = isPad(r7)
            if (r1 == 0) goto L161
            byte[] r1 = com.bianfeng.ymnsdk.util.security.Base64.base64Alphabet
            r1 = r1[r5]
            r2 = r1 & 3
            if (r2 == 0) goto L13d
            r2 = 0
            return r2
        L13d:
            int r2 = r14 * 3
            int r2 = r2 + 2
            byte[] r2 = new byte[r2]
            int r8 = r14 * 3
            r13 = 0
            java.lang.System.arraycopy(r4, r13, r2, r13, r8)
            int r8 = r15 + 1
            int r13 = r6 << 2
            int r17 = r0 >> 4
            r13 = r13 | r17
            byte r13 = (byte) r13
            r2[r15] = r13
            r13 = r0 & 15
            int r13 = r13 << 4
            int r15 = r1 >> 2
            r15 = r15 & 15
            r13 = r13 | r15
            byte r13 = (byte) r13
            r2[r8] = r13
            return r2
        L161:
            r1 = 0
            return r1
        L163:
            r18 = r1
            r16 = r2
            r1 = 0
        L168:
            return r1
    }

    public static java.lang.String encode(byte[] r21) {
            r0 = r21
            if (r0 != 0) goto L6
            r1 = 0
            return r1
        L6:
            int r1 = r0.length
            r2 = 8
            int r1 = r1 * 8
            if (r1 != 0) goto L10
            java.lang.String r2 = ""
            return r2
        L10:
            int r3 = r1 % 24
            int r4 = r1 / 24
            if (r3 == 0) goto L19
            int r5 = r4 + 1
            goto L1a
        L19:
            r5 = r4
        L1a:
            r6 = 0
            int r7 = r5 * 4
            char[] r6 = new char[r7]
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            r11 = 0
            r12 = 0
            r13 = 0
            r14 = 0
        L27:
            if (r14 >= r4) goto L8d
            int r15 = r13 + 1
            r9 = r0[r13]
            int r13 = r15 + 1
            r10 = r0[r15]
            int r15 = r13 + 1
            r11 = r0[r13]
            r13 = r10 & 15
            byte r8 = (byte) r13
            r13 = r9 & 3
            byte r7 = (byte) r13
            r13 = r9 & (-128(0xffffffffffffff80, float:NaN))
            if (r13 != 0) goto L42
            int r13 = r9 >> 2
            goto L46
        L42:
            int r13 = r9 >> 2
            r13 = r13 ^ 192(0xc0, float:2.69E-43)
        L46:
            byte r13 = (byte) r13
            r16 = r10 & (-128(0xffffffffffffff80, float:NaN))
            int r2 = r10 >> 4
            if (r16 != 0) goto L4e
            goto L50
        L4e:
            r2 = r2 ^ 240(0xf0, float:3.36E-43)
        L50:
            byte r2 = (byte) r2
            r17 = r11 & (-128(0xffffffffffffff80, float:NaN))
            if (r17 != 0) goto L5a
            r17 = r1
            int r1 = r11 >> 6
            goto L60
        L5a:
            r17 = r1
            int r1 = r11 >> 6
            r1 = r1 ^ 252(0xfc, float:3.53E-43)
        L60:
            byte r1 = (byte) r1
            int r18 = r12 + 1
            char[] r19 = com.bianfeng.ymnsdk.util.security.Base64.lookUpBase64Alphabet
            char r20 = r19[r13]
            r6[r12] = r20
            int r12 = r18 + 1
            int r20 = r7 << 4
            r20 = r2 | r20
            char r20 = r19[r20]
            r6[r18] = r20
            int r18 = r12 + 1
            int r20 = r8 << 2
            r20 = r20 | r1
            char r20 = r19[r20]
            r6[r12] = r20
            int r12 = r18 + 1
            r20 = r11 & 63
            char r19 = r19[r20]
            r6[r18] = r19
            int r14 = r14 + 1
            r13 = r15
            r1 = r17
            r2 = 8
            goto L27
        L8d:
            r17 = r1
            r1 = 61
            r2 = 8
            if (r3 != r2) goto Lbf
            r9 = r0[r13]
            r2 = r9 & 3
            byte r7 = (byte) r2
            r2 = r9 & (-128(0xffffffffffffff80, float:NaN))
            if (r2 != 0) goto La1
            int r2 = r9 >> 2
            goto La5
        La1:
            int r2 = r9 >> 2
            r2 = r2 ^ 192(0xc0, float:2.69E-43)
        La5:
            byte r2 = (byte) r2
            int r14 = r12 + 1
            char[] r15 = com.bianfeng.ymnsdk.util.security.Base64.lookUpBase64Alphabet
            char r16 = r15[r2]
            r6[r12] = r16
            int r12 = r14 + 1
            int r16 = r7 << 4
            char r15 = r15[r16]
            r6[r14] = r15
            int r14 = r12 + 1
            r6[r12] = r1
            int r12 = r14 + 1
            r6[r14] = r1
            goto L106
        Lbf:
            r2 = 16
            if (r3 != r2) goto L106
            r9 = r0[r13]
            int r2 = r13 + 1
            r10 = r0[r2]
            r2 = r10 & 15
            byte r8 = (byte) r2
            r2 = r9 & 3
            byte r7 = (byte) r2
            r2 = r9 & (-128(0xffffffffffffff80, float:NaN))
            if (r2 != 0) goto Ld6
            int r2 = r9 >> 2
            goto Lda
        Ld6:
            int r2 = r9 >> 2
            r2 = r2 ^ 192(0xc0, float:2.69E-43)
        Lda:
            byte r2 = (byte) r2
            r14 = r10 & (-128(0xffffffffffffff80, float:NaN))
            if (r14 != 0) goto Le2
            int r14 = r10 >> 4
            goto Le6
        Le2:
            int r14 = r10 >> 4
            r14 = r14 ^ 240(0xf0, float:3.36E-43)
        Le6:
            byte r14 = (byte) r14
            int r15 = r12 + 1
            char[] r16 = com.bianfeng.ymnsdk.util.security.Base64.lookUpBase64Alphabet
            char r18 = r16[r2]
            r6[r12] = r18
            int r12 = r15 + 1
            int r18 = r7 << 4
            r18 = r14 | r18
            char r18 = r16[r18]
            r6[r15] = r18
            int r15 = r12 + 1
            int r18 = r8 << 2
            char r16 = r16[r18]
            r6[r12] = r16
            int r12 = r15 + 1
            r6[r15] = r1
            goto L107
        L106:
        L107:
            java.lang.String r1 = new java.lang.String
            r1.<init>(r6)
            return r1
    }

    private static boolean isData(char r2) {
            r0 = 128(0x80, float:1.8E-43)
            if (r2 >= r0) goto Ld
            byte[] r0 = com.bianfeng.ymnsdk.util.security.Base64.base64Alphabet
            r0 = r0[r2]
            r1 = -1
            if (r0 == r1) goto Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    private static boolean isPad(char r1) {
            r0 = 61
            if (r1 != r0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    private static boolean isWhiteSpace(char r1) {
            r0 = 32
            if (r1 == r0) goto L13
            r0 = 13
            if (r1 == r0) goto L13
            r0 = 10
            if (r1 == r0) goto L13
            r0 = 9
            if (r1 != r0) goto L11
            goto L13
        L11:
            r0 = 0
            goto L14
        L13:
            r0 = 1
        L14:
            return r0
    }

    private static int removeWhiteSpace(char[] r5) {
            if (r5 != 0) goto L4
            r0 = 0
            return r0
        L4:
            r0 = 0
            int r1 = r5.length
            r2 = 0
        L7:
            if (r2 >= r1) goto L1b
            char r3 = r5[r2]
            boolean r3 = isWhiteSpace(r3)
            if (r3 != 0) goto L18
            int r3 = r0 + 1
            char r4 = r5[r2]
            r5[r0] = r4
            r0 = r3
        L18:
            int r2 = r2 + 1
            goto L7
        L1b:
            return r0
    }
}
