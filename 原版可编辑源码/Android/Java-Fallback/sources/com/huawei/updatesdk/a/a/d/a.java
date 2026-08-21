package com.huawei.updatesdk.a.a.d;

public class a {
    private static char[] a;

    static {
            r0 = 65
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47, 61} // fill-array
            com.huawei.updatesdk.a.a.d.a.a = r0
            return
    }

    public static java.lang.String a(byte[] r1) {
            int r0 = r1.length
            java.lang.String r1 = a(r1, r0)
            return r1
    }

    public static java.lang.String a(byte[] r10, int r11) {
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
            char[] r8 = com.huawei.updatesdk.a.a.d.a.a
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
            char[] r7 = com.huawei.updatesdk.a.a.d.a.a
            if (r5 == 0) goto L47
            r9 = r4 & 63
        L47:
            char r5 = r7[r9]
            r0[r6] = r5
            int r4 = r4 >> 6
            int r5 = r3 + 1
            char[] r6 = com.huawei.updatesdk.a.a.d.a.a
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
            java.lang.String r10 = java.lang.String.valueOf(r0)
            return r10
    }
}
