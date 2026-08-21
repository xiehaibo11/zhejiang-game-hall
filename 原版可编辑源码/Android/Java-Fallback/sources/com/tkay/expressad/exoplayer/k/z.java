package com.tkay.expressad.exoplayer.k;

public final class z implements com.tkay.expressad.exoplayer.k.n {
    private final com.tkay.expressad.exoplayer.k.c a;
    private boolean b;
    private long c;
    private long d;
    private com.tkay.expressad.exoplayer.v e;

    public z(com.tkay.expressad.exoplayer.k.c r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            com.tkay.expressad.exoplayer.v r1 = com.tkay.expressad.exoplayer.v.a
            r0.e = r1
            return
    }

    @Override
    public final com.tkay.expressad.exoplayer.v a(com.tkay.expressad.exoplayer.v r3) {
            r2 = this;
            boolean r0 = r2.b
            if (r0 == 0) goto Lb
            long r0 = r2.d()
            r2.a(r0)
        Lb:
            r2.e = r3
            return r3
    }

    public final void a() {
            r2 = this;
            boolean r0 = r2.b
            if (r0 != 0) goto Lf
            com.tkay.expressad.exoplayer.k.c r0 = r2.a
            long r0 = r0.a()
            r2.d = r0
            r0 = 1
            r2.b = r0
        Lf:
            return
    }

    public final void a(long r1) {
            r0 = this;
            r0.c = r1
            boolean r1 = r0.b
            if (r1 == 0) goto Le
            com.tkay.expressad.exoplayer.k.c r1 = r0.a
            long r1 = r1.a()
            r0.d = r1
        Le:
            return
    }

    public final void b() {
            r2 = this;
            boolean r0 = r2.b
            if (r0 == 0) goto Le
            long r0 = r2.d()
            r2.a(r0)
            r0 = 0
            r2.b = r0
        Le:
            return
    }

    @Override
    public final long d() {
            r6 = this;
            long r0 = r6.c
            boolean r2 = r6.b
            if (r2 == 0) goto L25
            com.tkay.expressad.exoplayer.k.c r2 = r6.a
            long r2 = r2.a()
            long r4 = r6.d
            long r2 = r2 - r4
            com.tkay.expressad.exoplayer.v r4 = r6.e
            float r4 = r4.b
            r5 = 1065353216(0x3f800000, float:1.0)
            int r4 = (r4 > r5 ? 1 : (r4 == r5 ? 0 : -1))
            if (r4 != 0) goto L1e
            long r2 = com.tkay.expressad.exoplayer.b.b(r2)
            goto L24
        L1e:
            com.tkay.expressad.exoplayer.v r4 = r6.e
            long r2 = r4.a(r2)
        L24:
            long r0 = r0 + r2
        L25:
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.v e() {
            r1 = this;
            com.tkay.expressad.exoplayer.v r0 = r1.e
            return r0
    }
}
