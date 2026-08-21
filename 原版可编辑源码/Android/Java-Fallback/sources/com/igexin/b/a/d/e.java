package com.igexin.b.a.d;

public abstract class e extends com.igexin.b.a.d.a {
    protected static com.igexin.b.a.d.f E;
    public int A;
    public java.lang.Exception B;
    public java.lang.Object C;
    public com.igexin.b.a.d.a.f D;
    protected final java.util.concurrent.locks.ReentrantLock F;
    protected final java.util.concurrent.locks.Condition G;
    java.lang.Thread H;
    protected volatile boolean I;
    int J;
    protected com.igexin.b.a.d.a.c K;
    private byte a;
    protected volatile boolean k;
    protected volatile boolean m;
    protected volatile boolean n;
    protected volatile boolean o;
    protected volatile boolean p;
    protected volatile boolean q;
    protected volatile boolean r;
    protected volatile boolean s;
    protected volatile boolean t;
    protected volatile long u;
    volatile int v;
    public long w;
    public int x;
    public int y;
    public int z;

    public e(int r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public e(int r1, com.igexin.b.a.d.a.c r2) {
            r0 = this;
            r0.<init>()
            r0.z = r1
            r0.K = r2
            java.util.concurrent.locks.ReentrantLock r1 = new java.util.concurrent.locks.ReentrantLock
            r1.<init>()
            r0.F = r1
            java.util.concurrent.locks.Condition r1 = r1.newCondition()
            r0.G = r1
            return
    }

    public final int a(long r5, java.util.concurrent.TimeUnit r7) {
            r4 = this;
            r0 = 0
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            r1 = 1
            r2 = -1
            r3 = -2
            if (r0 <= 0) goto L29
            com.igexin.b.a.d.f r0 = com.igexin.b.a.d.e.E
            com.igexin.b.a.d.d<com.igexin.b.a.d.e> r0 = r0.k
            int r0 = r0.a(r4, r5, r7)
            if (r0 == r3) goto L27
            if (r0 == r2) goto L18
            if (r0 == r1) goto L2a
            goto L29
        L18:
            long r0 = java.lang.System.currentTimeMillis()
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS
            long r5 = r3.convert(r5, r7)
            long r0 = r0 + r5
            r4.u = r0
            r1 = r2
            goto L2a
        L27:
            r1 = r3
            goto L2a
        L29:
            r1 = 0
        L2a:
            return r1
    }

    public long a(java.util.concurrent.TimeUnit r4) {
            r3 = this;
            long r0 = r3.o()
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            long r0 = r4.convert(r0, r2)
            return r0
    }

    public final void a(int r2) {
            r1 = this;
            byte r0 = r1.a
            r0 = r0 & 15
            byte r0 = (byte) r0
            r1.a = r0
            r2 = r2 & 15
            int r2 = r2 << 4
            r2 = r2 | r0
            byte r2 = (byte) r2
            r1.a = r2
            return
    }

    public final void a(int r1, com.igexin.b.a.d.a.f r2) {
            r0 = this;
            if (r1 < 0) goto L7
            r0.y = r1
            r0.D = r2
            return
        L7:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "second must > 0"
            r1.<init>(r2)
            throw r1
    }

    public final void a(com.igexin.b.a.d.a.c r1) {
            r0 = this;
            r0.K = r1
            return
    }

    public void b() {
            r1 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r1.H = r0
            r0 = 1
            r1.p = r0
            return
    }

    public final void b(long r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public void c() {
            r1 = this;
            boolean r0 = r1.k
            if (r0 != 0) goto L8
            boolean r0 = r1.m
            if (r0 == 0) goto Lb
        L8:
            r1.f()
        Lb:
            return
    }

    public void d() {
            r1 = this;
            r0 = 1
            r1.s = r0
            return
    }

    protected abstract void e();

    protected void e_() {
            r2 = this;
            boolean r0 = r2.o
            r1 = 0
            if (r0 != 0) goto L11
            boolean r0 = r2.q
            if (r0 != 0) goto L11
            boolean r0 = r2.r
            if (r0 != 0) goto L11
            r0 = 1
            r2.k = r0
            goto L19
        L11:
            boolean r0 = r2.q
            if (r0 == 0) goto L1c
            boolean r0 = r2.k
            if (r0 != 0) goto L1c
        L19:
            r2.p = r1
            goto L29
        L1c:
            boolean r0 = r2.o
            if (r0 == 0) goto L29
            boolean r0 = r2.n
            if (r0 != 0) goto L29
            boolean r0 = r2.k
            if (r0 != 0) goto L29
            goto L19
        L29:
            return
    }

    public void f() {
            r1 = this;
            r0 = 0
            r1.C = r0
            r1.B = r0
            r1.H = r0
            return
    }

    protected void g() {
            r0 = this;
            return
    }

    final void n() {
            r2 = this;
            int r0 = r2.J
            int r0 = r0 + 1
            r2.J = r0
            r1 = 1090519038(0x40fffffe, float:7.999999)
            r0 = r0 & r1
            r2.J = r0
            return
    }

    long o() {
            r4 = this;
            long r0 = r4.u
            long r2 = java.lang.System.currentTimeMillis()
            long r0 = r0 - r2
            return r0
    }

    public final void p() {
            r1 = this;
            r0 = 1
            r1.k = r0
            return
    }

    public final boolean q() {
            r1 = this;
            boolean r0 = r1.n
            return r0
    }

    public final boolean r() {
            r1 = this;
            boolean r0 = r1.m
            return r0
    }

    public final java.lang.Thread s() {
            r1 = this;
            java.lang.Thread r0 = r1.H
            return r0
    }

    protected void t() {
            r2 = this;
            com.igexin.b.a.d.a.c r0 = r2.K
            if (r0 == 0) goto L9
            com.igexin.b.a.d.a.d r1 = com.igexin.b.a.d.a.d.a
            r0.a(r1)
        L9:
            return
    }
}
