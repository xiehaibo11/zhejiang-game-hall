package com.huawei.appgallery.serviceverifykit.d;

public class a {
    private static byte[] a;

    static {
            r0 = 256(0x100, float:3.59E-43)
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, -1, 63, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, -1, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1} // fill-array
            com.huawei.appgallery.serviceverifykit.d.a.a = r0
            return
    }

    public static byte[] a(java.lang.String r10) {
            int r0 = b(r10)
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
            byte[] r9 = com.huawei.appgallery.serviceverifykit.d.a.a
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

    private static int b(java.lang.String r4) {
            int r0 = r4.length()
            r1 = 0
        L5:
            int r2 = r4.length()
            if (r1 >= r2) goto L1e
            char r2 = r4.charAt(r1)
            r3 = 255(0xff, float:3.57E-43)
            if (r2 > r3) goto L19
            byte[] r3 = com.huawei.appgallery.serviceverifykit.d.a.a
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
}
