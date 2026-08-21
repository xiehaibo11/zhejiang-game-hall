package com.tkay.expressad.exoplayer.b;

final class p implements com.tkay.expressad.exoplayer.b.f {
    private int b;
    private int c;
    private int d;
    private java.nio.ByteBuffer e;
    private java.nio.ByteBuffer f;
    private boolean g;

    public p() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.b = r0
            r1.c = r0
            r0 = 0
            r1.d = r0
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.p.a
            r1.e = r0
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.p.a
            r1.f = r0
            return
    }

    @Override
    public final void a(java.nio.ByteBuffer r8) {
            r7 = this;
            int r0 = r8.position()
            int r1 = r8.limit()
            int r2 = r1 - r0
            int r3 = r7.d
            r4 = 1073741824(0x40000000, float:2.0)
            r5 = -2147483648(0xffffffff80000000, float:-0.0)
            r6 = 3
            if (r3 == r5) goto L20
            if (r3 == r6) goto L21
            if (r3 != r4) goto L1a
            int r2 = r2 / 2
            goto L23
        L1a:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            r8.<init>()
            throw r8
        L20:
            int r2 = r2 / r6
        L21:
            int r2 = r2 * 2
        L23:
            java.nio.ByteBuffer r3 = r7.e
            int r3 = r3.capacity()
            if (r3 >= r2) goto L3a
            java.nio.ByteBuffer r2 = java.nio.ByteBuffer.allocateDirect(r2)
            java.nio.ByteOrder r3 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r2 = r2.order(r3)
            r7.e = r2
            goto L3f
        L3a:
            java.nio.ByteBuffer r2 = r7.e
            r2.clear()
        L3f:
            int r2 = r7.d
            if (r2 == r5) goto L81
            if (r2 == r6) goto L68
            if (r2 != r4) goto L62
        L47:
            if (r0 >= r1) goto L9c
            java.nio.ByteBuffer r2 = r7.e
            int r3 = r0 + 2
            byte r3 = r8.get(r3)
            r2.put(r3)
            java.nio.ByteBuffer r2 = r7.e
            int r3 = r0 + 3
            byte r3 = r8.get(r3)
            r2.put(r3)
            int r0 = r0 + 4
            goto L47
        L62:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            r8.<init>()
            throw r8
        L68:
            if (r0 >= r1) goto L9c
            java.nio.ByteBuffer r2 = r7.e
            r3 = 0
            r2.put(r3)
            java.nio.ByteBuffer r2 = r7.e
            byte r3 = r8.get(r0)
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 + (-128)
            byte r3 = (byte) r3
            r2.put(r3)
            int r0 = r0 + 1
            goto L68
        L81:
            if (r0 >= r1) goto L9c
            java.nio.ByteBuffer r2 = r7.e
            int r3 = r0 + 1
            byte r3 = r8.get(r3)
            r2.put(r3)
            java.nio.ByteBuffer r2 = r7.e
            int r3 = r0 + 2
            byte r3 = r8.get(r3)
            r2.put(r3)
            int r0 = r0 + 3
            goto L81
        L9c:
            int r0 = r8.limit()
            r8.position(r0)
            java.nio.ByteBuffer r8 = r7.e
            r8.flip()
            java.nio.ByteBuffer r8 = r7.e
            r7.f = r8
            return
    }

    @Override
    public final boolean a() {
            r2 = this;
            int r0 = r2.d
            if (r0 == 0) goto L9
            r1 = 2
            if (r0 == r1) goto L9
            r0 = 1
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final boolean a(int r2, int r3, int r4) {
            r1 = this;
            r0 = 3
            if (r4 == r0) goto L15
            r0 = 2
            if (r4 == r0) goto L15
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r4 == r0) goto L15
            r0 = 1073741824(0x40000000, float:2.0)
            if (r4 != r0) goto Lf
            goto L15
        Lf:
            com.tkay.expressad.exoplayer.b.f$a r0 = new com.tkay.expressad.exoplayer.b.f$a
            r0.<init>(r2, r3, r4)
            throw r0
        L15:
            int r0 = r1.b
            if (r0 != r2) goto L23
            int r0 = r1.c
            if (r0 != r3) goto L23
            int r0 = r1.d
            if (r0 != r4) goto L23
            r2 = 0
            return r2
        L23:
            r1.b = r2
            r1.c = r3
            r1.d = r4
            r2 = 1
            return r2
    }

    @Override
    public final int b() {
            r1 = this;
            int r0 = r1.c
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
            int r0 = r1.b
            return r0
    }

    @Override
    public final void e() {
            r1 = this;
            r0 = 1
            r1.g = r0
            return
    }

    @Override
    public final java.nio.ByteBuffer f() {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.f
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.p.a
            r2.f = r1
            return r0
    }

    @Override
    public final boolean g() {
            r2 = this;
            boolean r0 = r2.g
            if (r0 == 0) goto Lc
            java.nio.ByteBuffer r0 = r2.f
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.p.a
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
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.p.a
            r1.f = r0
            r0 = 0
            r1.g = r0
            return
    }

    @Override
    public final void i() {
            r1 = this;
            r1.h()
            r0 = -1
            r1.b = r0
            r1.c = r0
            r0 = 0
            r1.d = r0
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.p.a
            r1.e = r0
            return
    }
}
