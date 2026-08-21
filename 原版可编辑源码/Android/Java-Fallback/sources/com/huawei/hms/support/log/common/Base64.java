package com.huawei.hms.support.log.common;

public final class Base64 {
    public static final char[] a = null;
    public static final byte[] b = null;

    static {
            r0 = 65
            char[] r0 = new char[r0]
            r0 = {x0014: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47, 61} // fill-array
            com.huawei.hms.support.log.common.Base64.a = r0
            r0 = 256(0x100, float:3.59E-43)
            byte[] r0 = new byte[r0]
            r0 = {x005a: FILL_ARRAY_DATA , data: [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, -1, 63, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, -1, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1} // fill-array
            com.huawei.hms.support.log.common.Base64.b = r0
            return
    }

    public Base64() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(java.lang.String r4) {
            int r0 = r4.length()
            r1 = 0
        L5:
            int r2 = r4.length()
            if (r1 >= r2) goto L1e
            char r2 = r4.charAt(r1)
            r3 = 255(0xff, float:3.57E-43)
            if (r2 > r3) goto L19
            byte[] r3 = com.huawei.hms.support.log.common.Base64.b
            r2 = r3[r2]
            if (r2 >= 0) goto L1b
        L19:
            int r0 = r0 + (-1)
        L1b:
            int r1 = r1 + 1
            goto L5
        L1e:
            return r0
    }

    public static byte[] decode(java.lang.String r10) {
            int r0 = a(r10)
            int r1 = r0 / 4
            r2 = 3
            int r1 = r1 * r2
            int r0 = r0 % 4
            if (r0 != r2) goto Le
            int r1 = r1 + 2
        Le:
            r2 = 2
            if (r0 != r2) goto L13
            int r1 = r1 + 1
        L13:
            byte[] r0 = new byte[r1]
            r2 = 0
            r3 = r2
            r4 = r3
            r5 = r4
            r6 = r5
        L1a:
            int r7 = r10.length()
            if (r3 >= r7) goto L47
            char r7 = r10.charAt(r3)
            r8 = 255(0xff, float:3.57E-43)
            if (r7 <= r8) goto L2a
            r7 = -1
            goto L2e
        L2a:
            byte[] r9 = com.huawei.hms.support.log.common.Base64.b
            r7 = r9[r7]
        L2e:
            if (r7 < 0) goto L44
            int r5 = r5 << 6
            int r6 = r6 + 6
            r5 = r5 | r7
            r7 = 8
            if (r6 < r7) goto L44
            int r6 = r6 + (-8)
            int r7 = r4 + 1
            int r9 = r5 >> r6
            r8 = r8 & r9
            byte r8 = (byte) r8
            r0[r4] = r8
            r4 = r7
        L44:
            int r3 = r3 + 1
            goto L1a
        L47:
            if (r4 == r1) goto L4c
            byte[] r10 = new byte[r2]
            return r10
        L4c:
            return r0
    }

    public static java.lang.String encode(byte[] r1) {
            int r0 = r1.length
            java.lang.String r1 = encode(r1, r0)
            return r1
    }

    public static java.lang.String encode(byte[] r10, int r11) {
            int r0 = r11 + 2
            int r0 = r0 / 3
            int r0 = r0 * 4
            char[] r0 = new char[r0]
            r1 = 0
            r2 = r1
            r3 = r2
        Lb:
            if (r2 >= r11) goto L66
            r4 = r10[r2]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r4 = r4 << 8
            int r5 = r2 + 1
            r6 = 1
            if (r5 >= r11) goto L1f
            r5 = r10[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r4 = r4 | r5
            r5 = r6
            goto L20
        L1f:
            r5 = r1
        L20:
            int r4 = r4 << 8
            int r7 = r2 + 2
            if (r7 >= r11) goto L2c
            r7 = r10[r7]
            r7 = r7 & 255(0xff, float:3.57E-43)
            r4 = r4 | r7
            goto L2d
        L2c:
            r6 = r1
        L2d:
            int r7 = r3 + 3
            char[] r8 = com.huawei.hms.support.log.common.Base64.a
            r9 = 64
            if (r6 == 0) goto L38
            r6 = r4 & 63
            goto L39
        L38:
            r6 = r9
        L39:
            char r6 = r8[r6]
            r0[r7] = r6
            int r4 = r4 >> 6
            int r6 = r3 + 2
            char[] r7 = com.huawei.hms.support.log.common.Base64.a
            if (r5 == 0) goto L47
            r9 = r4 & 63
        L47:
            char r5 = r7[r9]
            r0[r6] = r5
            int r4 = r4 >> 6
            int r5 = r3 + 1
            char[] r6 = com.huawei.hms.support.log.common.Base64.a
            r7 = r4 & 63
            char r7 = r6[r7]
            r0[r5] = r7
            int r4 = r4 >> 6
            int r5 = r3 + 0
            r4 = r4 & 63
            char r4 = r6[r4]
            r0[r5] = r4
            int r2 = r2 + 3
            int r3 = r3 + 4
            goto Lb
        L66:
            java.lang.String r10 = new java.lang.String
            r10.<init>(r0)
            return r10
    }
}
