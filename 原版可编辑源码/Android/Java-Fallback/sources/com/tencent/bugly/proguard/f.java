package com.tencent.bugly.proguard;

public final class f {
    public static final byte[] a = null;
    private static final char[] b = null;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x0010: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70} // fill-array
            com.tencent.bugly.proguard.f.b = r0
            r0 = 0
            byte[] r0 = new byte[r0]
            com.tencent.bugly.proguard.f.a = r0
            return
    }

    public static java.lang.String a(byte[] r8) {
            if (r8 == 0) goto L31
            int r0 = r8.length
            if (r0 != 0) goto L6
            goto L31
        L6:
            int r0 = r8.length
            int r0 = r0 * 2
            char[] r0 = new char[r0]
            r1 = 0
            r2 = 0
        Ld:
            int r3 = r8.length
            if (r2 >= r3) goto L2b
            r3 = r8[r2]
            int r4 = r2 * 2
            int r5 = r4 + 1
            char[] r6 = com.tencent.bugly.proguard.f.b
            r7 = r3 & 15
            char r7 = r6[r7]
            r0[r5] = r7
            int r3 = r3 >>> 4
            byte r3 = (byte) r3
            int r4 = r4 + r1
            r3 = r3 & 15
            char r3 = r6[r3]
            r0[r4] = r3
            int r2 = r2 + 1
            goto Ld
        L2b:
            java.lang.String r8 = new java.lang.String
            r8.<init>(r0)
            return r8
        L31:
            r8 = 0
            return r8
    }
}
