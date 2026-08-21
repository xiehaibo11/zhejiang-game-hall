package com.bianfeng.ymnsdk.sysfunc.utils;

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
            com.bianfeng.ymnsdk.sysfunc.utils.Base64.base64Alphabet = r1
            r1 = 64
            char[] r1 = new char[r1]
            com.bianfeng.ymnsdk.sysfunc.utils.Base64.lookUpBase64Alphabet = r1
            r1 = 0
            r2 = 0
        Le:
            if (r2 >= r0) goto L18
            byte[] r3 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.base64Alphabet
            r4 = -1
            r3[r2] = r4
            int r2 = r2 + 1
            goto Le
        L18:
            r0 = 90
        L1a:
            r2 = 65
            if (r0 < r2) goto L28
            byte[] r2 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.base64Alphabet
            int r3 = r0 + (-65)
            byte r3 = (byte) r3
            r2[r0] = r3
            int r0 = r0 + (-1)
            goto L1a
        L28:
            r0 = 122(0x7a, float:1.71E-43)
        L2a:
            r2 = 26
            r3 = 97
            if (r0 < r3) goto L3b
            byte[] r3 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.base64Alphabet
            int r4 = r0 + (-97)
            int r4 = r4 + r2
            byte r2 = (byte) r4
            r3[r0] = r2
            int r0 = r0 + (-1)
            goto L2a
        L3b:
            r0 = 57
        L3d:
            r3 = 52
            r4 = 48
            if (r0 < r4) goto L4e
            byte[] r4 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.base64Alphabet
            int r5 = r0 + (-48)
            int r5 = r5 + r3
            byte r3 = (byte) r5
            r4[r0] = r3
            int r0 = r0 + (-1)
            goto L3d
        L4e:
            byte[] r0 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.base64Alphabet
            r4 = 62
            r5 = 43
            r0[r5] = r4
            r6 = 63
            r7 = 47
            r0[r7] = r6
            r0 = 0
        L5d:
            r8 = 25
            if (r0 > r8) goto L6b
            char[] r8 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.lookUpBase64Alphabet
            int r9 = r0 + 65
            char r9 = (char) r9
            r8[r0] = r9
            int r0 = r0 + 1
            goto L5d
        L6b:
            r0 = 0
        L6c:
            r8 = 51
            if (r2 > r8) goto L7c
            char[] r8 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.lookUpBase64Alphabet
            int r9 = r0 + 97
            char r9 = (char) r9
            r8[r2] = r9
            int r2 = r2 + 1
            int r0 = r0 + 1
            goto L6c
        L7c:
            r0 = 61
            if (r3 > r0) goto L8c
            char[] r0 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.lookUpBase64Alphabet
            int r2 = r1 + 48
            char r2 = (char) r2
            r0[r3] = r2
            int r3 = r3 + 1
            int r1 = r1 + 1
            goto L7c
        L8c:
            char[] r0 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.lookUpBase64Alphabet
            r0[r4] = r5
            r0[r6] = r7
            return
    }

    public Base64() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String AESencode(java.lang.String r2, java.lang.String r3) throws java.security.GeneralSecurityException {
            byte[] r2 = r2.getBytes()
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            byte[] r3 = decode(r3)
            java.lang.String r1 = "AES"
            r0.<init>(r3, r1)
            java.lang.String r3 = "AES/ECB/PKCS5Padding"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)
            r1 = 1
            r3.init(r1, r0)
            byte[] r2 = r3.doFinal(r2)
            java.lang.String r2 = encode(r2)
            java.lang.String r3 = ""
            java.lang.String r0 = "\r"
            java.lang.String r2 = r2.replaceAll(r0, r3)
            java.lang.String r0 = "\n"
            java.lang.String r2 = r2.replaceAll(r0, r3)
            return r2
    }

    public static byte[] decode(java.lang.String r13) {
            r0 = 0
            if (r13 != 0) goto L4
            return r0
        L4:
            char[] r13 = r13.toCharArray()
            int r1 = removeWhiteSpace(r13)
            int r2 = r1 % 4
            if (r2 == 0) goto L11
            return r0
        L11:
            int r1 = r1 / 4
            r2 = 0
            if (r1 != 0) goto L19
            byte[] r13 = new byte[r2]
            return r13
        L19:
            int r3 = r1 * 3
            byte[] r3 = new byte[r3]
            r4 = 0
            r5 = 0
            r6 = 0
        L20:
            int r7 = r1 + (-1)
            if (r4 >= r7) goto L7c
            int r7 = r5 + 1
            char r5 = r13[r5]
            boolean r8 = isData(r5)
            if (r8 == 0) goto L7b
            int r8 = r7 + 1
            char r7 = r13[r7]
            boolean r9 = isData(r7)
            if (r9 == 0) goto L7b
            int r9 = r8 + 1
            char r8 = r13[r8]
            boolean r10 = isData(r8)
            if (r10 == 0) goto L7b
            int r10 = r9 + 1
            char r9 = r13[r9]
            boolean r11 = isData(r9)
            if (r11 != 0) goto L4d
            goto L7b
        L4d:
            byte[] r11 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.base64Alphabet
            r5 = r11[r5]
            r7 = r11[r7]
            r8 = r11[r8]
            r9 = r11[r9]
            int r11 = r6 + 1
            int r5 = r5 << 2
            int r12 = r7 >> 4
            r5 = r5 | r12
            byte r5 = (byte) r5
            r3[r6] = r5
            int r5 = r11 + 1
            r6 = r7 & 15
            int r6 = r6 << 4
            int r7 = r8 >> 2
            r7 = r7 & 15
            r6 = r6 | r7
            byte r6 = (byte) r6
            r3[r11] = r6
            int r6 = r5 + 1
            int r7 = r8 << 6
            r7 = r7 | r9
            byte r7 = (byte) r7
            r3[r5] = r7
            int r4 = r4 + 1
            r5 = r10
            goto L20
        L7b:
            return r0
        L7c:
            int r1 = r5 + 1
            char r5 = r13[r5]
            boolean r7 = isData(r5)
            if (r7 == 0) goto L127
            int r7 = r1 + 1
            char r1 = r13[r1]
            boolean r8 = isData(r1)
            if (r8 != 0) goto L92
            goto L127
        L92:
            byte[] r8 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.base64Alphabet
            r5 = r8[r5]
            r1 = r8[r1]
            int r8 = r7 + 1
            char r7 = r13[r7]
            char r13 = r13[r8]
            boolean r8 = isData(r7)
            if (r8 == 0) goto Ld0
            boolean r8 = isData(r13)
            if (r8 != 0) goto Lab
            goto Ld0
        Lab:
            byte[] r0 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.base64Alphabet
            r2 = r0[r7]
            r13 = r0[r13]
            int r0 = r6 + 1
            int r4 = r5 << 2
            int r5 = r1 >> 4
            r4 = r4 | r5
            byte r4 = (byte) r4
            r3[r6] = r4
            int r4 = r0 + 1
            r1 = r1 & 15
            int r1 = r1 << 4
            int r5 = r2 >> 2
            r5 = r5 & 15
            r1 = r1 | r5
            byte r1 = (byte) r1
            r3[r0] = r1
            int r0 = r2 << 6
            r13 = r13 | r0
            byte r13 = (byte) r13
            r3[r4] = r13
            return r3
        Ld0:
            boolean r8 = isPad(r7)
            if (r8 == 0) goto Lf3
            boolean r8 = isPad(r13)
            if (r8 == 0) goto Lf3
            r13 = r1 & 15
            if (r13 == 0) goto Le1
            return r0
        Le1:
            int r4 = r4 * 3
            int r13 = r4 + 1
            byte[] r13 = new byte[r13]
            java.lang.System.arraycopy(r3, r2, r13, r2, r4)
            int r0 = r5 << 2
            int r1 = r1 >> 4
            r0 = r0 | r1
            byte r0 = (byte) r0
            r13[r6] = r0
            return r13
        Lf3:
            boolean r8 = isPad(r7)
            if (r8 != 0) goto L127
            boolean r13 = isPad(r13)
            if (r13 == 0) goto L127
            byte[] r13 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.base64Alphabet
            r13 = r13[r7]
            r7 = r13 & 3
            if (r7 == 0) goto L108
            return r0
        L108:
            int r4 = r4 * 3
            int r0 = r4 + 2
            byte[] r0 = new byte[r0]
            java.lang.System.arraycopy(r3, r2, r0, r2, r4)
            int r2 = r6 + 1
            int r3 = r5 << 2
            int r4 = r1 >> 4
            r3 = r3 | r4
            byte r3 = (byte) r3
            r0[r6] = r3
            r1 = r1 & 15
            int r1 = r1 << 4
            int r13 = r13 >> 2
            r13 = r13 & 15
            r13 = r13 | r1
            byte r13 = (byte) r13
            r0[r2] = r13
        L127:
            return r0
    }

    public static java.lang.String encode(byte[] r15) {
            if (r15 != 0) goto L4
            r15 = 0
            return r15
        L4:
            int r0 = r15.length
            r1 = 8
            int r0 = r0 * 8
            if (r0 != 0) goto Le
            java.lang.String r15 = ""
            return r15
        Le:
            int r2 = r0 % 24
            int r0 = r0 / 24
            if (r2 == 0) goto L17
            int r3 = r0 + 1
            goto L18
        L17:
            r3 = r0
        L18:
            int r3 = r3 * 4
            char[] r3 = new char[r3]
            r4 = 0
            r5 = 0
            r6 = 0
        L1f:
            if (r4 >= r0) goto L7a
            int r7 = r5 + 1
            r5 = r15[r5]
            int r8 = r7 + 1
            r7 = r15[r7]
            int r9 = r8 + 1
            r8 = r15[r8]
            r10 = r7 & 15
            byte r10 = (byte) r10
            r11 = r5 & 3
            byte r11 = (byte) r11
            r12 = r5 & (-128(0xffffffffffffff80, float:NaN))
            int r5 = r5 >> 2
            if (r12 != 0) goto L3a
            goto L3c
        L3a:
            r5 = r5 ^ 192(0xc0, float:2.69E-43)
        L3c:
            byte r5 = (byte) r5
            r12 = r7 & (-128(0xffffffffffffff80, float:NaN))
            int r7 = r7 >> 4
            if (r12 != 0) goto L44
            goto L46
        L44:
            r7 = r7 ^ 240(0xf0, float:3.36E-43)
        L46:
            byte r7 = (byte) r7
            r12 = r8 & (-128(0xffffffffffffff80, float:NaN))
            if (r12 != 0) goto L4e
            int r12 = r8 >> 6
            goto L52
        L4e:
            int r12 = r8 >> 6
            r12 = r12 ^ 252(0xfc, float:3.53E-43)
        L52:
            byte r12 = (byte) r12
            int r13 = r6 + 1
            char[] r14 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.lookUpBase64Alphabet
            char r5 = r14[r5]
            r3[r6] = r5
            int r5 = r13 + 1
            int r6 = r11 << 4
            r6 = r6 | r7
            char r6 = r14[r6]
            r3[r13] = r6
            int r6 = r5 + 1
            int r7 = r10 << 2
            r7 = r7 | r12
            char r7 = r14[r7]
            r3[r5] = r7
            int r5 = r6 + 1
            r7 = r8 & 63
            char r7 = r14[r7]
            r3[r6] = r7
            int r4 = r4 + 1
            r6 = r5
            r5 = r9
            goto L1f
        L7a:
            r0 = 61
            if (r2 != r1) goto La4
            r15 = r15[r5]
            r1 = r15 & 3
            byte r1 = (byte) r1
            r2 = r15 & (-128(0xffffffffffffff80, float:NaN))
            int r15 = r15 >> 2
            if (r2 != 0) goto L8a
            goto L8c
        L8a:
            r15 = r15 ^ 192(0xc0, float:2.69E-43)
        L8c:
            byte r15 = (byte) r15
            int r2 = r6 + 1
            char[] r4 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.lookUpBase64Alphabet
            char r15 = r4[r15]
            r3[r6] = r15
            int r15 = r2 + 1
            int r1 = r1 << 4
            char r1 = r4[r1]
            r3[r2] = r1
            int r1 = r15 + 1
            r3[r15] = r0
            r3[r1] = r0
            goto Le3
        La4:
            r1 = 16
            if (r2 != r1) goto Le3
            r1 = r15[r5]
            int r5 = r5 + 1
            r15 = r15[r5]
            r2 = r15 & 15
            byte r2 = (byte) r2
            r4 = r1 & 3
            byte r4 = (byte) r4
            r5 = r1 & (-128(0xffffffffffffff80, float:NaN))
            int r1 = r1 >> 2
            if (r5 != 0) goto Lbb
            goto Lbd
        Lbb:
            r1 = r1 ^ 192(0xc0, float:2.69E-43)
        Lbd:
            byte r1 = (byte) r1
            r5 = r15 & (-128(0xffffffffffffff80, float:NaN))
            int r15 = r15 >> 4
            if (r5 != 0) goto Lc5
            goto Lc7
        Lc5:
            r15 = r15 ^ 240(0xf0, float:3.36E-43)
        Lc7:
            byte r15 = (byte) r15
            int r5 = r6 + 1
            char[] r7 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.lookUpBase64Alphabet
            char r1 = r7[r1]
            r3[r6] = r1
            int r1 = r5 + 1
            int r4 = r4 << 4
            r15 = r15 | r4
            char r15 = r7[r15]
            r3[r5] = r15
            int r15 = r1 + 1
            int r2 = r2 << 2
            char r2 = r7[r2]
            r3[r1] = r2
            r3[r15] = r0
        Le3:
            java.lang.String r15 = new java.lang.String
            r15.<init>(r3)
            return r15
    }

    private static boolean isData(char r1) {
            r0 = 128(0x80, float:1.8E-43)
            if (r1 >= r0) goto Ld
            byte[] r0 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.base64Alphabet
            r1 = r0[r1]
            r0 = -1
            if (r1 == r0) goto Ld
            r1 = 1
            goto Le
        Ld:
            r1 = 0
        Le:
            return r1
    }

    private static boolean isPad(char r1) {
            r0 = 61
            if (r1 != r0) goto L6
            r1 = 1
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
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
            r1 = 0
            goto L14
        L13:
            r1 = 1
        L14:
            return r1
    }

    private static int removeWhiteSpace(char[] r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            int r1 = r5.length
            r2 = 0
        L6:
            if (r0 >= r1) goto L1a
            char r3 = r5[r0]
            boolean r3 = isWhiteSpace(r3)
            if (r3 != 0) goto L17
            int r3 = r2 + 1
            char r4 = r5[r0]
            r5[r2] = r4
            r2 = r3
        L17:
            int r0 = r0 + 1
            goto L6
        L1a:
            return r2
    }
}
