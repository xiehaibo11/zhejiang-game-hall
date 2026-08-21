package com.tkay.expressad.exoplayer;

final class e implements com.tkay.expressad.exoplayer.k.n {
    private final com.tkay.expressad.exoplayer.k.z a;
    private final com.tkay.expressad.exoplayer.e.a b;
    private com.tkay.expressad.exoplayer.y c;
    private com.tkay.expressad.exoplayer.k.n d;

    public interface a {
        void a(com.tkay.expressad.exoplayer.v r1);
    }

    public e(com.tkay.expressad.exoplayer.e.a r1, com.tkay.expressad.exoplayer.k.c r2) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            com.tkay.expressad.exoplayer.k.z r1 = new com.tkay.expressad.exoplayer.k.z
            r1.<init>(r2)
            r0.a = r1
            return
    }

    private void f() {
            r3 = this;
            com.tkay.expressad.exoplayer.k.n r0 = r3.d
            long r0 = r0.d()
            com.tkay.expressad.exoplayer.k.z r2 = r3.a
            r2.a(r0)
            com.tkay.expressad.exoplayer.k.n r0 = r3.d
            com.tkay.expressad.exoplayer.v r0 = r0.e()
            com.tkay.expressad.exoplayer.k.z r1 = r3.a
            com.tkay.expressad.exoplayer.v r1 = r1.e()
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L27
            com.tkay.expressad.exoplayer.k.z r1 = r3.a
            r1.a(r0)
            com.tkay.expressad.exoplayer.e$a r1 = r3.b
            r1.a(r0)
        L27:
            return
    }

    private boolean g() {
            r1 = this;
            com.tkay.expressad.exoplayer.y r0 = r1.c
            if (r0 == 0) goto L1c
            boolean r0 = r0.v()
            if (r0 != 0) goto L1c
            com.tkay.expressad.exoplayer.y r0 = r1.c
            boolean r0 = r0.u()
            if (r0 != 0) goto L1a
            com.tkay.expressad.exoplayer.y r0 = r1.c
            boolean r0 = r0.g()
            if (r0 != 0) goto L1c
        L1a:
            r0 = 1
            return r0
        L1c:
            r0 = 0
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.v a(com.tkay.expressad.exoplayer.v r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.k.n r0 = r1.d
            if (r0 == 0) goto L8
            com.tkay.expressad.exoplayer.v r2 = r0.a(r2)
        L8:
            com.tkay.expressad.exoplayer.k.z r0 = r1.a
            r0.a(r2)
            com.tkay.expressad.exoplayer.e$a r0 = r1.b
            r0.a(r2)
            return r2
    }

    public final void a() {
            r1 = this;
            com.tkay.expressad.exoplayer.k.z r0 = r1.a
            r0.a()
            return
    }

    public final void a(long r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.k.z r0 = r1.a
            r0.a(r2)
            return
    }

    public final void a(com.tkay.expressad.exoplayer.y r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.k.n r0 = r3.c()
            if (r0 == 0) goto L29
            com.tkay.expressad.exoplayer.k.n r1 = r2.d
            if (r0 == r1) goto L29
            if (r1 != 0) goto L1d
            r2.d = r0
            r2.c = r3
            com.tkay.expressad.exoplayer.k.z r3 = r2.a
            com.tkay.expressad.exoplayer.v r3 = r3.e()
            r0.a(r3)
            r2.f()
            goto L29
        L1d:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r0 = "Multiple renderer media clocks enabled."
            r3.<init>(r0)
            com.tkay.expressad.exoplayer.g r3 = com.tkay.expressad.exoplayer.g.a(r3)
            throw r3
        L29:
            return
    }

    public final void b() {
            r1 = this;
            com.tkay.expressad.exoplayer.k.z r0 = r1.a
            r0.b()
            return
    }

    public final void b(com.tkay.expressad.exoplayer.y r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.y r0 = r1.c
            if (r2 != r0) goto L9
            r2 = 0
            r1.d = r2
            r1.c = r2
        L9:
            return
    }

    public final long c() {
            r2 = this;
            boolean r0 = r2.g()
            if (r0 == 0) goto L10
            r2.f()
            com.tkay.expressad.exoplayer.k.n r0 = r2.d
            long r0 = r0.d()
            return r0
        L10:
            com.tkay.expressad.exoplayer.k.z r0 = r2.a
            long r0 = r0.d()
            return r0
    }

    @Override
    public final long d() {
            r2 = this;
            boolean r0 = r2.g()
            if (r0 == 0) goto Ld
            com.tkay.expressad.exoplayer.k.n r0 = r2.d
            long r0 = r0.d()
            return r0
        Ld:
            com.tkay.expressad.exoplayer.k.z r0 = r2.a
            long r0 = r0.d()
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.v e() {
            r1 = this;
            com.tkay.expressad.exoplayer.k.n r0 = r1.d
            if (r0 == 0) goto L9
            com.tkay.expressad.exoplayer.v r0 = r0.e()
            return r0
        L9:
            com.tkay.expressad.exoplayer.k.z r0 = r1.a
            com.tkay.expressad.exoplayer.v r0 = r0.e()
            return r0
    }
}
