package com.tkay.expressad.foundation.g.f.c;

public final class b implements java.io.Serializable {
    private byte[] a;
    private java.io.InputStream b;
    private java.io.File c;
    private long d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;

    private b(java.io.InputStream r2, int r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "application/octet-stream"
            r1.g = r0
            r1.e = r4
            r1.f = r5
            r1.b = r2
            long r2 = (long) r3
            r1.d = r2
            r1.g = r6
            return
    }

    public b(java.lang.String r3, java.io.File r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "application/octet-stream"
            r2.g = r0
            r2.e = r3
            r2.f = r5
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.io.FileNotFoundException -> L13
            r3.<init>(r4)     // Catch: java.io.FileNotFoundException -> L13
            r2.b = r3     // Catch: java.io.FileNotFoundException -> L13
            goto L17
        L13:
            r3 = move-exception
            r3.printStackTrace()
        L17:
            long r0 = r4.length()
            r2.d = r0
            if (r6 == 0) goto L21
            r2.g = r6
        L21:
            r2.c = r4
            return
    }

    private b(java.lang.String r2, byte[] r3, long r4, java.lang.String r6, java.lang.String r7) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "application/octet-stream"
            r1.g = r0
            r1.e = r2
            r1.f = r6
            r1.a = r3
            r1.d = r4
            if (r7 == 0) goto L13
            r1.g = r7
        L13:
            return
    }

    private void a(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    private void b(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    private void c(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final long a() {
            r2 = this;
            long r0 = r2.d
            return r0
    }

    public final java.io.File b() {
            r1 = this;
            java.io.File r0 = r1.c
            return r0
    }

    public final java.io.InputStream c() {
            r1 = this;
            java.io.InputStream r0 = r1.b
            return r0
    }

    public final byte[] d() {
            r1 = this;
            byte[] r0 = r1.a
            return r0
    }

    public final java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public final java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public final java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }
}
