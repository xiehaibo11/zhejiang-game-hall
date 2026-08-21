package com.loc;

public final class fn extends com.loc.bp {
    java.util.Map<java.lang.String, java.lang.String> d;
    java.lang.String e;
    java.lang.String f;
    byte[] g;
    byte[] h;
    boolean i;
    java.lang.String j;
    java.util.Map<java.lang.String, java.lang.String> k;
    boolean p;
    private java.lang.String q;

    public fn(android.content.Context r1, com.loc.w r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.d = r1
            java.lang.String r2 = ""
            r0.q = r2
            r0.e = r2
            r0.f = r2
            r0.g = r1
            r0.h = r1
            r2 = 0
            r0.i = r2
            r0.j = r1
            r0.k = r1
            r0.p = r2
            return
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> a() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.d
            return r0
    }

    public final void a(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.k = r1
            return
    }

    @Override
    public final byte[] a_() {
            r1 = this;
            byte[] r0 = r1.g
            return r0
    }

    @Override
    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public final void b(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void b(boolean r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public final void b(byte[] r3) {
            r2 = this;
            r0 = 0
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L24
            r1.<init>()     // Catch: java.lang.Throwable -> L24
            if (r3 == 0) goto L12
            byte[] r0 = a(r3)     // Catch: java.lang.Throwable -> L21
            r1.write(r0)     // Catch: java.lang.Throwable -> L21
            r1.write(r3)     // Catch: java.lang.Throwable -> L21
        L12:
            byte[] r3 = r1.toByteArray()     // Catch: java.lang.Throwable -> L21
            r2.h = r3     // Catch: java.lang.Throwable -> L21
            r1.close()     // Catch: java.io.IOException -> L1c
            return
        L1c:
            r3 = move-exception
            r3.printStackTrace()
            return
        L21:
            r3 = move-exception
            r0 = r1
            goto L25
        L24:
            r3 = move-exception
        L25:
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L33
            if (r0 == 0) goto L32
            r0.close()     // Catch: java.io.IOException -> L2e
            goto L32
        L2e:
            r3 = move-exception
            r3.printStackTrace()
        L32:
            return
        L33:
            r3 = move-exception
            if (r0 == 0) goto L3e
            r0.close()     // Catch: java.io.IOException -> L3a
            goto L3e
        L3a:
            r0 = move-exception
            r0.printStackTrace()
        L3e:
            throw r3
    }

    @Override
    public final byte[] b_() {
            r1 = this;
            byte[] r0 = r1.h
            return r0
    }

    @Override
    public final java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public final void c(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void c(boolean r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public final void c(byte[] r1) {
            r0 = this;
            r0.g = r1
            return
    }

    @Override
    public final java.lang.String c_() {
            r1 = this;
            java.lang.String r0 = "loc"
            return r0
    }

    public final void d(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> e() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.k
            return r0
    }

    public final void e(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L9
            r1.q = r2
            return
        L9:
            java.lang.String r2 = ""
            r1.q = r2
            return
    }

    @Override
    public final java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.q
            return r0
    }

    @Override
    public final boolean i() {
            r1 = this;
            boolean r0 = r1.i
            return r0
    }

    @Override
    public final java.lang.String j() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    @Override
    protected final boolean k() {
            r1 = this;
            boolean r0 = r1.p
            return r0
    }
}
