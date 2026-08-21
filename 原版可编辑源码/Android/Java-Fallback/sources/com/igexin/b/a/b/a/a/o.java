package com.igexin.b.a.b.a.a;

public class o {
    java.io.BufferedInputStream a;

    public o(java.io.InputStream r2) {
            r1 = this;
            r1.<init>()
            java.io.BufferedInputStream r0 = new java.io.BufferedInputStream
            r0.<init>(r2)
            r1.a = r0
            return
    }

    public int a(byte[] r5) {
            r4 = this;
            int r0 = r5.length
            r1 = 0
            r2 = r1
        L3:
            if (r1 >= r0) goto L19
            java.io.BufferedInputStream r2 = r4.a
            int r3 = r0 - r1
            int r2 = r2.read(r5, r1, r3)
            if (r2 <= 0) goto L11
            int r1 = r1 + r2
            goto L3
        L11:
            java.io.IOException r5 = new java.io.IOException
            java.lang.String r0 = "read = -1, end of stream !"
            r5.<init>(r0)
            throw r5
        L19:
            return r2
    }
}
