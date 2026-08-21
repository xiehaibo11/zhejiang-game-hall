package com.tkay.expressad.exoplayer.b;

final class u implements com.tkay.expressad.exoplayer.b.f {
    private boolean b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private java.nio.ByteBuffer h;
    private java.nio.ByteBuffer i;
    private byte[] j;
    private int k;
    private boolean l;

    public u() {
            r1 = this;
            r1.<init>()
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.u.a
            r1.h = r0
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.u.a
            r1.i = r0
            r0 = -1
            r1.e = r0
            r1.f = r0
            r0 = 0
            byte[] r0 = new byte[r0]
            r1.j = r0
            return
    }

    public final void a(int r1, int r2) {
            r0 = this;
            r0.c = r1
            r0.d = r2
            return
    }

    @Override
    public final void a(java.nio.ByteBuffer r8) {
            r7 = this;
            int r0 = r8.position()
            int r1 = r8.limit()
            int r2 = r1 - r0
            int r3 = r7.g
            int r3 = java.lang.Math.min(r2, r3)
            int r4 = r7.g
            int r4 = r4 - r3
            r7.g = r4
            int r0 = r0 + r3
            r8.position(r0)
            int r0 = r7.g
            if (r0 <= 0) goto L1e
            return
        L1e:
            int r2 = r2 - r3
            int r0 = r7.k
            int r0 = r0 + r2
            byte[] r3 = r7.j
            int r3 = r3.length
            int r0 = r0 - r3
            java.nio.ByteBuffer r3 = r7.h
            int r3 = r3.capacity()
            if (r3 >= r0) goto L3d
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.allocateDirect(r0)
            java.nio.ByteOrder r4 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r3 = r3.order(r4)
            r7.h = r3
            goto L42
        L3d:
            java.nio.ByteBuffer r3 = r7.h
            r3.clear()
        L42:
            int r3 = r7.k
            r4 = 0
            int r3 = com.tkay.expressad.exoplayer.k.af.a(r0, r4, r3)
            java.nio.ByteBuffer r5 = r7.h
            byte[] r6 = r7.j
            r5.put(r6, r4, r3)
            int r0 = r0 - r3
            int r0 = com.tkay.expressad.exoplayer.k.af.a(r0, r4, r2)
            int r5 = r8.position()
            int r5 = r5 + r0
            r8.limit(r5)
            java.nio.ByteBuffer r5 = r7.h
            r5.put(r8)
            r8.limit(r1)
            int r2 = r2 - r0
            int r0 = r7.k
            int r0 = r0 - r3
            r7.k = r0
            byte[] r1 = r7.j
            java.lang.System.arraycopy(r1, r3, r1, r4, r0)
            byte[] r0 = r7.j
            int r1 = r7.k
            r8.get(r0, r1, r2)
            int r8 = r7.k
            int r8 = r8 + r2
            r7.k = r8
            java.nio.ByteBuffer r8 = r7.h
            r8.flip()
            java.nio.ByteBuffer r8 = r7.h
            r7.i = r8
            return
    }

    @Override
    public final boolean a() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    @Override
    public final boolean a(int r3, int r4, int r5) {
            r2 = this;
            r0 = 2
            if (r5 != r0) goto L2a
            r2.e = r4
            r2.f = r3
            int r3 = r2.d
            int r5 = r3 * r4
            int r5 = r5 * r0
            byte[] r5 = new byte[r5]
            r2.j = r5
            r5 = 0
            r2.k = r5
            int r1 = r2.c
            int r4 = r4 * r1
            int r4 = r4 * r0
            r2.g = r4
            boolean r4 = r2.b
            r0 = 1
            if (r1 != 0) goto L23
            if (r3 == 0) goto L21
            goto L23
        L21:
            r3 = r5
            goto L24
        L23:
            r3 = r0
        L24:
            r2.b = r3
            if (r4 == r3) goto L29
            return r0
        L29:
            return r5
        L2a:
            com.tkay.expressad.exoplayer.b.f$a r0 = new com.tkay.expressad.exoplayer.b.f$a
            r0.<init>(r3, r4, r5)
            throw r0
    }

    @Override
    public final int b() {
            r1 = this;
            int r0 = r1.e
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
            int r0 = r1.f
            return r0
    }

    @Override
    public final void e() {
            r1 = this;
            r0 = 1
            r1.l = r0
            return
    }

    @Override
    public final java.nio.ByteBuffer f() {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.i
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.u.a
            r2.i = r1
            return r0
    }

    @Override
    public final boolean g() {
            r2 = this;
            boolean r0 = r2.l
            if (r0 == 0) goto Lc
            java.nio.ByteBuffer r0 = r2.i
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.u.a
            if (r0 != r1) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    @Override
    public final void h() {
            r1 = this;
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.u.a
            r1.i = r0
            r0 = 0
            r1.l = r0
            r1.g = r0
            r1.k = r0
            return
    }

    @Override
    public final void i() {
            r1 = this;
            r1.h()
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.u.a
            r1.h = r0
            r0 = -1
            r1.e = r0
            r1.f = r0
            r0 = 0
            byte[] r0 = new byte[r0]
            r1.j = r0
            return
    }
}
