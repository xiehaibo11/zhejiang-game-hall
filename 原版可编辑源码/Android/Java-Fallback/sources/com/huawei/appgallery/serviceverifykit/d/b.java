package com.huawei.appgallery.serviceverifykit.d;

public final class b {
    private static final char[] a = null;
    private static final char[] b = null;

    static {
            r0 = 16
            char[] r1 = new char[r0]
            r1 = {x0012: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            com.huawei.appgallery.serviceverifykit.d.b.a = r1
            char[] r0 = new char[r0]
            r0 = {x0026: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70} // fill-array
            com.huawei.appgallery.serviceverifykit.d.b.b = r0
            return
    }

    public static char[] a(byte[] r0, boolean r1) {
            if (r1 == 0) goto L5
            char[] r1 = com.huawei.appgallery.serviceverifykit.d.b.b
            goto L7
        L5:
            char[] r1 = com.huawei.appgallery.serviceverifykit.d.b.a
        L7:
            char[] r0 = a(r0, r1)
            return r0
    }

    private static char[] a(byte[] r6, char[] r7) {
            int r0 = r6.length
            int r1 = r0 << 1
            char[] r1 = new char[r1]
            r2 = 0
            r3 = r2
        L7:
            if (r2 >= r0) goto L22
            int r4 = r3 + 1
            r5 = r6[r2]
            r5 = r5 & 240(0xf0, float:3.36E-43)
            int r5 = r5 >>> 4
            char r5 = r7[r5]
            r1[r3] = r5
            int r3 = r4 + 1
            r5 = r6[r2]
            r5 = r5 & 15
            char r5 = r7[r5]
            r1[r4] = r5
            int r2 = r2 + 1
            goto L7
        L22:
            return r1
    }

    public static java.lang.String b(byte[] r1, boolean r2) {
            java.lang.String r0 = new java.lang.String
            char[] r1 = a(r1, r2)
            r0.<init>(r1)
            return r0
    }
}
