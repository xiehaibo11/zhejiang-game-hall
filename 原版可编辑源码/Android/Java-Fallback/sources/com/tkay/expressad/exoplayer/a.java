package com.tkay.expressad.exoplayer;

public abstract class a implements com.tkay.expressad.exoplayer.y, com.tkay.expressad.exoplayer.z {
    private final int n;
    private com.tkay.expressad.exoplayer.aa o;
    private int p;
    private int q;
    private com.tkay.expressad.exoplayer.h.y r;
    private com.tkay.expressad.exoplayer.m[] s;
    private long t;
    private boolean u;
    private boolean v;

    public a(int r1) {
            r0 = this;
            r0.<init>()
            r0.n = r1
            r1 = 1
            r0.u = r1
            return
    }

    protected static boolean a(com.tkay.expressad.exoplayer.d.g<?> r0, com.tkay.expressad.exoplayer.d.e r1) {
            if (r1 != 0) goto L4
            r0 = 1
            return r0
        L4:
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            boolean r0 = r0.a(r1)
            return r0
    }

    @Override
    public final int a() {
            r1 = this;
            int r0 = r1.n
            return r0
    }

    protected final int a(com.tkay.expressad.exoplayer.n r5, com.tkay.expressad.exoplayer.c.e r6, boolean r7) {
            r4 = this;
            com.tkay.expressad.exoplayer.h.y r0 = r4.r
            int r7 = r0.a(r5, r6, r7)
            r0 = -4
            if (r7 != r0) goto L21
            boolean r5 = r6.c()
            if (r5 == 0) goto L19
            r5 = 1
            r4.u = r5
            boolean r5 = r4.v
            if (r5 == 0) goto L17
            return r0
        L17:
            r5 = -3
            return r5
        L19:
            long r0 = r6.f
            long r2 = r4.t
            long r0 = r0 + r2
            r6.f = r0
            goto L3c
        L21:
            r6 = -5
            if (r7 != r6) goto L3c
            com.tkay.expressad.exoplayer.m r6 = r5.a
            long r0 = r6.l
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L3c
            long r0 = r6.l
            long r2 = r4.t
            long r0 = r0 + r2
            com.tkay.expressad.exoplayer.m r6 = r6.a(r0)
            r5.a = r6
        L3c:
            return r7
    }

    @Override
    public final void a(int r1) {
            r0 = this;
            r0.p = r1
            return
    }

    @Override
    public void a(int r1, java.lang.Object r2) {
            r0 = this;
            return
    }

    @Override
    public final void a(long r2) {
            r1 = this;
            r0 = 0
            r1.v = r0
            r1.u = r0
            r1.a(r2, r0)
            return
    }

    protected void a(long r1, boolean r3) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.aa r3, com.tkay.expressad.exoplayer.m[] r4, com.tkay.expressad.exoplayer.h.y r5, long r6, boolean r8, long r9) {
            r2 = this;
            int r0 = r2.q
            r1 = 1
            if (r0 != 0) goto L7
            r0 = r1
            goto L8
        L7:
            r0 = 0
        L8:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            r2.o = r3
            r2.q = r1
            r2.a(r8)
            r2.a(r4, r5, r9)
            r2.a(r6, r8)
            return
    }

    protected void a(boolean r1) {
            r0 = this;
            return
    }

    protected void a(com.tkay.expressad.exoplayer.m[] r1, long r2) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.m[] r2, com.tkay.expressad.exoplayer.h.y r3, long r4) {
            r1 = this;
            boolean r0 = r1.v
            r0 = r0 ^ 1
            com.tkay.expressad.exoplayer.k.a.b(r0)
            r1.r = r3
            r3 = 0
            r1.u = r3
            r1.s = r2
            r1.t = r4
            r1.a(r2, r4)
            return
    }

    @Override
    public final int a_() {
            r1 = this;
            int r0 = r1.q
            return r0
    }

    protected final int b(long r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.h.y r0 = r3.r
            long r1 = r3.t
            long r4 = r4 - r1
            int r4 = r0.a(r4)
            return r4
    }

    @Override
    public final com.tkay.expressad.exoplayer.z b() {
            r0 = this;
            return r0
    }

    @Override
    public final void b_() {
            r2 = this;
            int r0 = r2.q
            r1 = 1
            if (r0 != r1) goto L6
            goto L7
        L6:
            r1 = 0
        L7:
            com.tkay.expressad.exoplayer.k.a.b(r1)
            r0 = 2
            r2.q = r0
            r2.n()
            return
    }

    @Override
    public com.tkay.expressad.exoplayer.k.n c() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.y f() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.y r0 = r1.r
            return r0
    }

    @Override
    public final boolean g() {
            r1 = this;
            boolean r0 = r1.u
            return r0
    }

    @Override
    public final void h() {
            r1 = this;
            r0 = 1
            r1.v = r0
            return
    }

    @Override
    public final boolean i() {
            r1 = this;
            boolean r0 = r1.v
            return r0
    }

    @Override
    public final void j() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.y r0 = r1.r
            r0.c()
            return
    }

    @Override
    public final void k() {
            r3 = this;
            int r0 = r3.q
            r1 = 1
            r2 = 2
            if (r0 != r2) goto L8
            r0 = r1
            goto L9
        L8:
            r0 = 0
        L9:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            r3.q = r1
            r3.o()
            return
    }

    @Override
    public final void l() {
            r3 = this;
            int r0 = r3.q
            r1 = 1
            r2 = 0
            if (r0 != r1) goto L7
            goto L8
        L7:
            r1 = r2
        L8:
            com.tkay.expressad.exoplayer.k.a.b(r1)
            r3.q = r2
            r0 = 0
            r3.r = r0
            r3.s = r0
            r3.v = r2
            r3.p()
            return
    }

    @Override
    public int m() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected void n() {
            r0 = this;
            return
    }

    protected void o() {
            r0 = this;
            return
    }

    protected void p() {
            r0 = this;
            return
    }

    protected final com.tkay.expressad.exoplayer.m[] q() {
            r1 = this;
            com.tkay.expressad.exoplayer.m[] r0 = r1.s
            return r0
    }

    protected final com.tkay.expressad.exoplayer.aa r() {
            r1 = this;
            com.tkay.expressad.exoplayer.aa r0 = r1.o
            return r0
    }

    protected final int s() {
            r1 = this;
            int r0 = r1.p
            return r0
    }

    protected final boolean t() {
            r1 = this;
            boolean r0 = r1.u
            if (r0 == 0) goto L7
            boolean r0 = r1.v
            return r0
        L7:
            com.tkay.expressad.exoplayer.h.y r0 = r1.r
            boolean r0 = r0.b()
            return r0
    }
}
