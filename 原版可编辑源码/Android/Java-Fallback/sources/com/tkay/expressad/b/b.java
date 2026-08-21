package com.tkay.expressad.b;

public final class b extends com.tkay.core.common.res.image.b {
    java.lang.String a;

    private b(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1)
            r0.a = r2
            return
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.String> a() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final void a(com.tkay.core.common.l.b.b r3) {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            r1 = 2
            r0.a(r3, r1)
            return
    }

    @Override
    protected final void a(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    protected final boolean a(java.io.InputStream r6) {
            r5 = this;
            r0 = 0
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L1c
            java.lang.String r2 = r5.a     // Catch: java.lang.Throwable -> L1c
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1c
            r2 = 2048(0x800, float:2.87E-42)
            byte[] r2 = new byte[r2]     // Catch: java.lang.Throwable -> L1c
        Lc:
            int r3 = r6.read(r2)     // Catch: java.lang.Throwable -> L1c
            r4 = -1
            if (r3 == r4) goto L17
            r1.write(r2, r0, r3)     // Catch: java.lang.Throwable -> L1c
            goto Lc
        L17:
            r1.close()     // Catch: java.lang.Throwable -> L1c
            r6 = 1
            return r6
        L1c:
            return r0
    }

    @Override
    protected final void b() {
            r0 = this;
            return
    }

    @Override
    protected final void c() {
            r0 = this;
            return
    }
}
