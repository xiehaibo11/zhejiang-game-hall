package com.xiaomi.push;

public class bm {
    private static final java.lang.String a = null;
    private static byte[] a;
    private static char[] a;

    static {
            java.lang.String r0 = "line.separator"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            com.xiaomi.push.bm.a = r0
            r0 = 64
            char[] r1 = new char[r0]
            com.xiaomi.push.bm.a = r1
            r1 = 0
            r2 = 65
            r3 = r1
        L12:
            r4 = 90
            if (r2 > r4) goto L21
            char[] r4 = com.xiaomi.push.bm.a
            int r5 = r3 + 1
            r4[r3] = r2
            int r2 = r2 + 1
            char r2 = (char) r2
            r3 = r5
            goto L12
        L21:
            r2 = 97
        L23:
            r4 = 122(0x7a, float:1.71E-43)
            if (r2 > r4) goto L32
            char[] r4 = com.xiaomi.push.bm.a
            int r5 = r3 + 1
            r4[r3] = r2
            int r2 = r2 + 1
            char r2 = (char) r2
            r3 = r5
            goto L23
        L32:
            r2 = 48
        L34:
            r4 = 57
            if (r2 > r4) goto L43
            char[] r4 = com.xiaomi.push.bm.a
            int r5 = r3 + 1
            r4[r3] = r2
            int r2 = r2 + 1
            char r2 = (char) r2
            r3 = r5
            goto L34
        L43:
            char[] r2 = com.xiaomi.push.bm.a
            int r4 = r3 + 1
            r5 = 43
            r2[r3] = r5
            r3 = 47
            r2[r4] = r3
            r2 = 128(0x80, float:1.8E-43)
            byte[] r2 = new byte[r2]
            com.xiaomi.push.bm.a = r2
            r2 = r1
        L56:
            byte[] r3 = com.xiaomi.push.bm.a
            int r4 = r3.length
            if (r2 >= r4) goto L61
            r4 = -1
            r3[r2] = r4
            int r2 = r2 + 1
            goto L56
        L61:
            if (r1 >= r0) goto L6f
            byte[] r2 = com.xiaomi.push.bm.a
            char[] r3 = com.xiaomi.push.bm.a
            char r3 = r3[r1]
            byte r4 = (byte) r1
            r2[r3] = r4
            int r1 = r1 + 1
            goto L61
        L6f:
            return
    }

    public static java.lang.String a(java.lang.String r1) {
            java.lang.String r0 = new java.lang.String
            byte[] r1 = r1.getBytes()
            char[] r1 = a(r1)
            r0.<init>(r1)
            return r0
    }

    public static byte[] a(java.lang.String r0) {
            char[] r0 = r0.toCharArray()
            byte[] r0 = a(r0)
            return r0
    }

    public static byte[] a(char[] r2) {
            int r0 = r2.length
            r1 = 0
            byte[] r2 = a(r2, r1, r0)
            return r2
    }

    public static byte[] a(char[] r10, int r11, int r12) {
            int r0 = r12 % 4
            if (r0 != 0) goto L8f
        L4:
            if (r12 <= 0) goto L13
            int r0 = r11 + r12
            int r0 = r0 + (-1)
            char r0 = r10[r0]
            r1 = 61
            if (r0 != r1) goto L13
            int r12 = r12 + (-1)
            goto L4
        L13:
            int r0 = r12 * 3
            int r0 = r0 / 4
            byte[] r1 = new byte[r0]
            int r12 = r12 + r11
            r2 = 0
        L1b:
            if (r11 >= r12) goto L8e
            int r3 = r11 + 1
            char r11 = r10[r11]
            int r4 = r3 + 1
            char r3 = r10[r3]
            r5 = 65
            if (r4 >= r12) goto L2e
            int r6 = r4 + 1
            char r4 = r10[r4]
            goto L30
        L2e:
            r6 = r4
            r4 = r5
        L30:
            if (r6 >= r12) goto L37
            int r5 = r6 + 1
            char r6 = r10[r6]
            goto L3a
        L37:
            r9 = r6
            r6 = r5
            r5 = r9
        L3a:
            java.lang.String r7 = "Illegal character in Base64 encoded data."
            r8 = 127(0x7f, float:1.78E-43)
            if (r11 > r8) goto L88
            if (r3 > r8) goto L88
            if (r4 > r8) goto L88
            if (r6 > r8) goto L88
            byte[] r8 = com.xiaomi.push.bm.a
            r11 = r8[r11]
            r3 = r8[r3]
            r4 = r8[r4]
            r6 = r8[r6]
            if (r11 < 0) goto L82
            if (r3 < 0) goto L82
            if (r4 < 0) goto L82
            if (r6 < 0) goto L82
            int r11 = r11 << 2
            int r7 = r3 >>> 4
            r11 = r11 | r7
            r3 = r3 & 15
            int r3 = r3 << 4
            int r7 = r4 >>> 2
            r3 = r3 | r7
            r4 = r4 & 3
            int r4 = r4 << 6
            r4 = r4 | r6
            int r6 = r2 + 1
            byte r11 = (byte) r11
            r1[r2] = r11
            if (r6 >= r0) goto L76
            int r11 = r6 + 1
            byte r2 = (byte) r3
            r1[r6] = r2
            r6 = r11
        L76:
            if (r6 >= r0) goto L7f
            int r11 = r6 + 1
            byte r2 = (byte) r4
            r1[r6] = r2
            r2 = r11
            goto L80
        L7f:
            r2 = r6
        L80:
            r11 = r5
            goto L1b
        L82:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            r10.<init>(r7)
            throw r10
        L88:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            r10.<init>(r7)
            throw r10
        L8e:
            return r1
        L8f:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r11 = "Length of Base64 encoded input string is not a multiple of 4."
            r10.<init>(r11)
            throw r10
    }

    public static char[] a(byte[] r2) {
            int r0 = r2.length
            r1 = 0
            char[] r2 = a(r2, r1, r0)
            return r2
    }

    public static char[] a(byte[] r11, int r12, int r13) {
            int r0 = r13 * 4
            int r0 = r0 + 2
            int r0 = r0 / 3
            int r1 = r13 + 2
            int r1 = r1 / 3
            int r1 = r1 * 4
            char[] r1 = new char[r1]
            int r13 = r13 + r12
            r2 = 0
            r3 = r2
        L11:
            if (r12 >= r13) goto L69
            int r4 = r12 + 1
            r12 = r11[r12]
            r12 = r12 & 255(0xff, float:3.57E-43)
            if (r4 >= r13) goto L22
            int r5 = r4 + 1
            r4 = r11[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            goto L24
        L22:
            r5 = r4
            r4 = r2
        L24:
            if (r5 >= r13) goto L30
            int r6 = r5 + 1
            r5 = r11[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r10 = r6
            r6 = r5
            r5 = r10
            goto L31
        L30:
            r6 = r2
        L31:
            int r7 = r12 >>> 2
            r12 = r12 & 3
            int r12 = r12 << 4
            int r8 = r4 >>> 4
            r12 = r12 | r8
            r4 = r4 & 15
            int r4 = r4 << 2
            int r8 = r6 >>> 6
            r4 = r4 | r8
            r6 = r6 & 63
            int r8 = r3 + 1
            char[] r9 = com.xiaomi.push.bm.a
            char r7 = r9[r7]
            r1[r3] = r7
            int r3 = r8 + 1
            char r12 = r9[r12]
            r1[r8] = r12
            r12 = 61
            if (r3 >= r0) goto L58
            char r4 = r9[r4]
            goto L59
        L58:
            r4 = r12
        L59:
            r1[r3] = r4
            int r3 = r3 + 1
            if (r3 >= r0) goto L63
            char[] r12 = com.xiaomi.push.bm.a
            char r12 = r12[r6]
        L63:
            r1[r3] = r12
            int r3 = r3 + 1
            r12 = r5
            goto L11
        L69:
            return r1
    }
}
