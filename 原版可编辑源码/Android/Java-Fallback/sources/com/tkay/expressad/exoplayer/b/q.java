package com.tkay.expressad.exoplayer.b;

public final class q implements com.tkay.expressad.exoplayer.b.f {
    private static final long b = 150000;
    private static final long c = 20000;
    private static final short d = 1024;
    private static final byte e = 4;
    private static final int f = 0;
    private static final int g = 1;
    private static final int h = 2;
    private int i;
    private int j;
    private int k;
    private boolean l;
    private java.nio.ByteBuffer m;
    private java.nio.ByteBuffer n;
    private boolean o;
    private byte[] p;
    private byte[] q;
    private int r;
    private int s;
    private int t;
    private boolean u;
    private long v;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    private @interface a {
    }

    public q() {
            r2 = this;
            r2.<init>()
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.q.a
            r2.m = r0
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.q.a
            r2.n = r0
            r0 = -1
            r2.i = r0
            r2.j = r0
            r0 = 0
            byte[] r1 = new byte[r0]
            r2.p = r1
            byte[] r0 = new byte[r0]
            r2.q = r0
            return
    }

    private int a(long r3) {
            r2 = this;
            int r0 = r2.j
            long r0 = (long) r0
            long r3 = r3 * r0
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r3 = r3 / r0
            int r3 = (int) r3
            return r3
    }

    private void a(int r3) {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.m
            int r0 = r0.capacity()
            if (r0 >= r3) goto L17
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocateDirect(r3)
            java.nio.ByteOrder r1 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r0 = r0.order(r1)
            r2.m = r0
            goto L1c
        L17:
            java.nio.ByteBuffer r0 = r2.m
            r0.clear()
        L1c:
            if (r3 <= 0) goto L21
            r3 = 1
            r2.u = r3
        L21:
            return
    }

    private void a(java.nio.ByteBuffer r5, byte[] r6, int r7) {
            r4 = this;
            int r0 = r5.remaining()
            int r1 = r4.t
            int r0 = java.lang.Math.min(r0, r1)
            int r1 = r4.t
            int r1 = r1 - r0
            int r7 = r7 - r1
            byte[] r2 = r4.q
            r3 = 0
            java.lang.System.arraycopy(r6, r7, r2, r3, r1)
            int r6 = r5.limit()
            int r6 = r6 - r0
            r5.position(r6)
            byte[] r6 = r4.q
            r5.get(r6, r1, r0)
            return
    }

    private void a(byte[] r3, int r4) {
            r2 = this;
            r2.a(r4)
            java.nio.ByteBuffer r0 = r2.m
            r1 = 0
            r0.put(r3, r1, r4)
            java.nio.ByteBuffer r3 = r2.m
            r3.flip()
            java.nio.ByteBuffer r3 = r2.m
            r2.n = r3
            return
    }

    private void b(java.nio.ByteBuffer r6) {
            r5 = this;
            int r0 = r6.limit()
            int r1 = r6.position()
            byte[] r2 = r5.p
            int r2 = r2.length
            int r1 = r1 + r2
            int r1 = java.lang.Math.min(r0, r1)
            r6.limit(r1)
            int r1 = r6.limit()
            r2 = 1
            int r1 = r1 - r2
        L19:
            int r3 = r6.position()
            if (r1 < r3) goto L33
            byte r3 = r6.get(r1)
            int r3 = java.lang.Math.abs(r3)
            r4 = 4
            if (r3 <= r4) goto L30
            int r3 = r5.k
            int r1 = r1 / r3
            int r1 = r1 * r3
            int r1 = r1 + r3
            goto L37
        L30:
            int r1 = r1 + (-2)
            goto L19
        L33:
            int r1 = r6.position()
        L37:
            int r3 = r6.position()
            if (r1 != r3) goto L40
            r5.r = r2
            goto L58
        L40:
            r6.limit(r1)
            int r1 = r6.remaining()
            r5.a(r1)
            java.nio.ByteBuffer r1 = r5.m
            r1.put(r6)
            java.nio.ByteBuffer r1 = r5.m
            r1.flip()
            java.nio.ByteBuffer r1 = r5.m
            r5.n = r1
        L58:
            r6.limit(r0)
            return
    }

    private void c(java.nio.ByteBuffer r10) {
            r9 = this;
            int r0 = r10.limit()
            int r1 = r9.f(r10)
            int r2 = r10.position()
            int r2 = r1 - r2
            byte[] r3 = r9.p
            int r4 = r3.length
            int r5 = r9.s
            int r4 = r4 - r5
            r6 = 0
            if (r1 >= r0) goto L21
            if (r2 >= r4) goto L21
            r9.a(r3, r5)
            r9.s = r6
            r9.r = r6
            return
        L21:
            int r1 = java.lang.Math.min(r2, r4)
            int r2 = r10.position()
            int r2 = r2 + r1
            r10.limit(r2)
            byte[] r2 = r9.p
            int r3 = r9.s
            r10.get(r2, r3, r1)
            int r2 = r9.s
            int r2 = r2 + r1
            r9.s = r2
            byte[] r1 = r9.p
            int r3 = r1.length
            if (r2 != r3) goto L6f
            boolean r3 = r9.u
            r4 = 2
            if (r3 == 0) goto L58
            int r2 = r9.t
            r9.a(r1, r2)
            long r1 = r9.v
            int r3 = r9.s
            int r5 = r9.t
            int r5 = r5 * r4
            int r3 = r3 - r5
            int r5 = r9.k
            int r3 = r3 / r5
            long r7 = (long) r3
            long r1 = r1 + r7
            r9.v = r1
            goto L64
        L58:
            long r7 = r9.v
            int r1 = r9.t
            int r2 = r2 - r1
            int r1 = r9.k
            int r2 = r2 / r1
            long r1 = (long) r2
            long r7 = r7 + r1
            r9.v = r7
        L64:
            byte[] r1 = r9.p
            int r2 = r9.s
            r9.a(r10, r1, r2)
            r9.s = r6
            r9.r = r4
        L6f:
            r10.limit(r0)
            return
    }

    private void d(java.nio.ByteBuffer r7) {
            r6 = this;
            int r0 = r7.limit()
            int r1 = r6.f(r7)
            r7.limit(r1)
            long r2 = r6.v
            int r4 = r7.remaining()
            int r5 = r6.k
            int r4 = r4 / r5
            long r4 = (long) r4
            long r2 = r2 + r4
            r6.v = r2
            byte[] r2 = r6.q
            int r3 = r6.t
            r6.a(r7, r2, r3)
            if (r1 >= r0) goto L2e
            byte[] r1 = r6.q
            int r2 = r6.t
            r6.a(r1, r2)
            r1 = 0
            r6.r = r1
            r7.limit(r0)
        L2e:
            return
    }

    private void e(java.nio.ByteBuffer r2) {
            r1 = this;
            int r0 = r2.remaining()
            r1.a(r0)
            java.nio.ByteBuffer r0 = r1.m
            r0.put(r2)
            java.nio.ByteBuffer r2 = r1.m
            r2.flip()
            java.nio.ByteBuffer r2 = r1.m
            r1.n = r2
            return
    }

    private int f(java.nio.ByteBuffer r4) {
            r3 = this;
            int r0 = r4.position()
            int r0 = r0 + 1
        L6:
            int r1 = r4.limit()
            if (r0 >= r1) goto L1f
            byte r1 = r4.get(r0)
            int r1 = java.lang.Math.abs(r1)
            r2 = 4
            if (r1 <= r2) goto L1c
            int r4 = r3.k
            int r0 = r0 / r4
            int r4 = r4 * r0
            return r4
        L1c:
            int r0 = r0 + 2
            goto L6
        L1f:
            int r4 = r4.limit()
            return r4
    }

    private int g(java.nio.ByteBuffer r4) {
            r3 = this;
            int r0 = r4.limit()
            int r0 = r0 + (-1)
        L6:
            int r1 = r4.position()
            if (r0 < r1) goto L20
            byte r1 = r4.get(r0)
            int r1 = java.lang.Math.abs(r1)
            r2 = 4
            if (r1 <= r2) goto L1d
            int r4 = r3.k
            int r0 = r0 / r4
            int r0 = r0 * r4
            int r0 = r0 + r4
            return r0
        L1d:
            int r0 = r0 + (-2)
            goto L6
        L20:
            int r4 = r4.position()
            return r4
    }

    @Override
    public final void a(java.nio.ByteBuffer r10) {
            r9 = this;
        L0:
            boolean r0 = r10.hasRemaining()
            if (r0 == 0) goto L11b
            java.nio.ByteBuffer r0 = r9.n
            boolean r0 = r0.hasRemaining()
            if (r0 != 0) goto L11b
            int r0 = r9.r
            r1 = 1
            if (r0 == 0) goto Lbf
            r2 = 2
            r3 = 0
            if (r0 == r1) goto L4d
            if (r0 != r2) goto L47
            int r0 = r10.limit()
            int r1 = r9.f(r10)
            r10.limit(r1)
            long r4 = r9.v
            int r2 = r10.remaining()
            int r6 = r9.k
            int r2 = r2 / r6
            long r6 = (long) r2
            long r4 = r4 + r6
            r9.v = r4
            byte[] r2 = r9.q
            int r4 = r9.t
            r9.a(r10, r2, r4)
            if (r1 >= r0) goto L0
            byte[] r1 = r9.q
            int r2 = r9.t
            r9.a(r1, r2)
            r9.r = r3
            r10.limit(r0)
            goto L0
        L47:
            java.lang.IllegalStateException r10 = new java.lang.IllegalStateException
            r10.<init>()
            throw r10
        L4d:
            int r0 = r10.limit()
            int r1 = r9.f(r10)
            int r4 = r10.position()
            int r4 = r1 - r4
            byte[] r5 = r9.p
            int r6 = r5.length
            int r7 = r9.s
            int r6 = r6 - r7
            if (r1 >= r0) goto L6d
            if (r4 >= r6) goto L6d
            r9.a(r5, r7)
            r9.s = r3
            r9.r = r3
            goto L0
        L6d:
            int r1 = java.lang.Math.min(r4, r6)
            int r4 = r10.position()
            int r4 = r4 + r1
            r10.limit(r4)
            byte[] r4 = r9.p
            int r5 = r9.s
            r10.get(r4, r5, r1)
            int r4 = r9.s
            int r4 = r4 + r1
            r9.s = r4
            byte[] r1 = r9.p
            int r5 = r1.length
            if (r4 != r5) goto Lba
            boolean r5 = r9.u
            if (r5 == 0) goto La3
            int r4 = r9.t
            r9.a(r1, r4)
            long r4 = r9.v
            int r1 = r9.s
            int r6 = r9.t
            int r6 = r6 * r2
            int r1 = r1 - r6
            int r6 = r9.k
            int r1 = r1 / r6
            long r6 = (long) r1
            long r4 = r4 + r6
            r9.v = r4
            goto Laf
        La3:
            long r5 = r9.v
            int r1 = r9.t
            int r4 = r4 - r1
            int r1 = r9.k
            int r4 = r4 / r1
            long r7 = (long) r4
            long r5 = r5 + r7
            r9.v = r5
        Laf:
            byte[] r1 = r9.p
            int r4 = r9.s
            r9.a(r10, r1, r4)
            r9.s = r3
            r9.r = r2
        Lba:
            r10.limit(r0)
            goto L0
        Lbf:
            int r0 = r10.limit()
            int r2 = r10.position()
            byte[] r3 = r9.p
            int r3 = r3.length
            int r2 = r2 + r3
            int r2 = java.lang.Math.min(r0, r2)
            r10.limit(r2)
            int r2 = r10.limit()
            int r2 = r2 - r1
        Ld7:
            int r3 = r10.position()
            if (r2 < r3) goto Lf1
            byte r3 = r10.get(r2)
            int r3 = java.lang.Math.abs(r3)
            r4 = 4
            if (r3 <= r4) goto Lee
            int r3 = r9.k
            int r2 = r2 / r3
            int r2 = r2 * r3
            int r2 = r2 + r3
            goto Lf5
        Lee:
            int r2 = r2 + (-2)
            goto Ld7
        Lf1:
            int r2 = r10.position()
        Lf5:
            int r3 = r10.position()
            if (r2 != r3) goto Lfe
            r9.r = r1
            goto L116
        Lfe:
            r10.limit(r2)
            int r1 = r10.remaining()
            r9.a(r1)
            java.nio.ByteBuffer r1 = r9.m
            r1.put(r10)
            java.nio.ByteBuffer r1 = r9.m
            r1.flip()
            java.nio.ByteBuffer r1 = r9.m
            r9.n = r1
        L116:
            r10.limit(r0)
            goto L0
        L11b:
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.l = r1
            r0.h()
            return
    }

    @Override
    public final boolean a() {
            r2 = this;
            int r0 = r2.j
            r1 = -1
            if (r0 == r1) goto Lb
            boolean r0 = r2.l
            if (r0 == 0) goto Lb
            r0 = 1
            return r0
        Lb:
            r0 = 0
            return r0
    }

    @Override
    public final boolean a(int r2, int r3, int r4) {
            r1 = this;
            r0 = 2
            if (r4 != r0) goto L16
            int r4 = r1.j
            if (r4 != r2) goto Ld
            int r4 = r1.i
            if (r4 != r3) goto Ld
            r2 = 0
            return r2
        Ld:
            r1.j = r2
            r1.i = r3
            int r3 = r3 * r0
            r1.k = r3
            r2 = 1
            return r2
        L16:
            com.tkay.expressad.exoplayer.b.f$a r0 = new com.tkay.expressad.exoplayer.b.f$a
            r0.<init>(r2, r3, r4)
            throw r0
    }

    @Override
    public final int b() {
            r1 = this;
            int r0 = r1.i
            return r0
    }

    @Override
    public final int c() {
            r1 = this;
            r0 = 2
            return r0
    }

    @Override
    public final int d() {
            r1 = this;
            int r0 = r1.j
            return r0
    }

    @Override
    public final void e() {
            r4 = this;
            r0 = 1
            r4.o = r0
            int r0 = r4.s
            if (r0 <= 0) goto Lc
            byte[] r1 = r4.p
            r4.a(r1, r0)
        Lc:
            boolean r0 = r4.u
            if (r0 != 0) goto L1b
            long r0 = r4.v
            int r2 = r4.t
            int r3 = r4.k
            int r2 = r2 / r3
            long r2 = (long) r2
            long r0 = r0 + r2
            r4.v = r0
        L1b:
            return
    }

    @Override
    public final java.nio.ByteBuffer f() {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.n
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.q.a
            r2.n = r1
            return r0
    }

    @Override
    public final boolean g() {
            r2 = this;
            boolean r0 = r2.o
            if (r0 == 0) goto Lc
            java.nio.ByteBuffer r0 = r2.n
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.q.a
            if (r0 != r1) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    @Override
    public final void h() {
            r3 = this;
            boolean r0 = r3.a()
            if (r0 == 0) goto L2d
            r0 = 150000(0x249f0, double:7.411E-319)
            int r0 = r3.a(r0)
            int r1 = r3.k
            int r0 = r0 * r1
            byte[] r1 = r3.p
            int r1 = r1.length
            if (r1 == r0) goto L19
            byte[] r0 = new byte[r0]
            r3.p = r0
        L19:
            r0 = 20000(0x4e20, double:9.8813E-320)
            int r0 = r3.a(r0)
            int r1 = r3.k
            int r0 = r0 * r1
            r3.t = r0
            byte[] r1 = r3.q
            int r1 = r1.length
            if (r1 == r0) goto L2d
            byte[] r0 = new byte[r0]
            r3.q = r0
        L2d:
            r0 = 0
            r3.r = r0
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.q.a
            r3.n = r1
            r3.o = r0
            r1 = 0
            r3.v = r1
            r3.s = r0
            r3.u = r0
            return
    }

    @Override
    public final void i() {
            r2 = this;
            r0 = 0
            r2.l = r0
            r2.h()
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.q.a
            r2.m = r1
            r1 = -1
            r2.i = r1
            r2.j = r1
            r2.t = r0
            byte[] r1 = new byte[r0]
            r2.p = r1
            byte[] r0 = new byte[r0]
            r2.q = r0
            return
    }

    public final long j() {
            r2 = this;
            long r0 = r2.v
            return r0
    }
}
