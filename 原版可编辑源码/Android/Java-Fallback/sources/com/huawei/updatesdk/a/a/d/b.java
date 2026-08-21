package com.huawei.updatesdk.a.a.d;

public class b {
    private byte[] a;
    private int b;
    private int c;

    public b() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r0 = 1024(0x400, float:1.435E-42)
            r2.b = r0
            r1 = 0
            r2.c = r1
            byte[] r0 = new byte[r0]
            r2.a = r0
            return
    }

    public static java.lang.String a(byte[] r8) {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x002e: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70} // fill-array
            int r1 = r8.length
            int r1 = r1 * 2
            char[] r1 = new char[r1]
            int r2 = r8.length
            r3 = 0
            r4 = r3
        Lf:
            if (r3 >= r2) goto L28
            r5 = r8[r3]
            int r6 = r4 + 1
            int r7 = r5 >>> 4
            r7 = r7 & 15
            char r7 = r0[r7]
            r1[r4] = r7
            int r4 = r6 + 1
            r5 = r5 & 15
            char r5 = r0[r5]
            r1[r6] = r5
            int r3 = r3 + 1
            goto Lf
        L28:
            java.lang.String r8 = java.lang.String.valueOf(r1)
            return r8
    }

    public java.lang.String a() {
            r6 = this;
            int r0 = r6.c
            r1 = 0
            if (r0 > 0) goto L6
            return r1
        L6:
            java.lang.String r2 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L11
            byte[] r3 = r6.a     // Catch: java.io.UnsupportedEncodingException -> L11
            r4 = 0
            java.lang.String r5 = "UTF-8"
            r2.<init>(r3, r4, r0, r5)     // Catch: java.io.UnsupportedEncodingException -> L11
            r1 = r2
        L11:
            return r1
    }

    public void a(byte[] r5, int r6) {
            r4 = this;
            if (r6 > 0) goto L3
            return
        L3:
            byte[] r0 = r4.a
            int r1 = r0.length
            int r2 = r4.c
            int r1 = r1 - r2
            r3 = 0
            if (r1 < r6) goto L10
            java.lang.System.arraycopy(r5, r3, r0, r2, r6)
            goto L20
        L10:
            int r1 = r0.length
            int r1 = r1 + r6
            int r1 = r1 << 1
            byte[] r1 = new byte[r1]
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            int r0 = r4.c
            java.lang.System.arraycopy(r5, r3, r1, r0, r6)
            r4.a = r1
        L20:
            int r5 = r4.c
            int r5 = r5 + r6
            r4.c = r5
            return
    }
}
