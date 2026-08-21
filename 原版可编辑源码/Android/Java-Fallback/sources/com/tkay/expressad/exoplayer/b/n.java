package com.tkay.expressad.exoplayer.b;

final class n implements com.tkay.expressad.exoplayer.b.f {
    private static final int b = 0;
    private static final double c = 4.656612875245797E-10d;
    private int d;
    private int e;
    private int f;
    private java.nio.ByteBuffer g;
    private java.nio.ByteBuffer h;
    private boolean i;

    static {
            r0 = 2143289344(0x7fc00000, float:NaN)
            int r0 = java.lang.Float.floatToIntBits(r0)
            com.tkay.expressad.exoplayer.b.n.b = r0
            return
    }

    public n() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.d = r0
            r1.e = r0
            r0 = 0
            r1.f = r0
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.n.a
            r1.g = r0
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.n.a
            r1.h = r0
            return
    }

    private static void a(int r4, java.nio.ByteBuffer r5) {
            double r0 = (double) r4
            r2 = 4467570830353629184(0x3e00000000200000, double:4.656612875245797E-10)
            double r0 = r0 * r2
            float r4 = (float) r0
            int r4 = java.lang.Float.floatToIntBits(r4)
            int r0 = com.tkay.expressad.exoplayer.b.n.b
            if (r4 != r0) goto L15
            r4 = 0
            int r4 = java.lang.Float.floatToIntBits(r4)
        L15:
            r5.putInt(r4)
            return
    }

    @Override
    public final void a(java.nio.ByteBuffer r6) {
            r5 = this;
            int r0 = r5.f
            r1 = 1073741824(0x40000000, float:2.0)
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            int r1 = r6.position()
            int r2 = r6.limit()
            int r3 = r2 - r1
            if (r0 == 0) goto L16
            goto L1a
        L16:
            int r3 = r3 / 3
            int r3 = r3 * 4
        L1a:
            java.nio.ByteBuffer r4 = r5.g
            int r4 = r4.capacity()
            if (r4 >= r3) goto L31
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.allocateDirect(r3)
            java.nio.ByteOrder r4 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r3 = r3.order(r4)
            r5.g = r3
            goto L36
        L31:
            java.nio.ByteBuffer r3 = r5.g
            r3.clear()
        L36:
            if (r0 == 0) goto L69
        L38:
            if (r1 >= r2) goto L91
            byte r0 = r6.get(r1)
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r3 = r1 + 1
            byte r3 = r6.get(r3)
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 8
            r0 = r0 | r3
            int r3 = r1 + 2
            byte r3 = r6.get(r3)
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 16
            r0 = r0 | r3
            int r3 = r1 + 3
            byte r3 = r6.get(r3)
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 24
            r0 = r0 | r3
            java.nio.ByteBuffer r3 = r5.g
            a(r0, r3)
            int r1 = r1 + 4
            goto L38
        L69:
            if (r1 >= r2) goto L91
            byte r0 = r6.get(r1)
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            int r3 = r1 + 1
            byte r3 = r6.get(r3)
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 16
            r0 = r0 | r3
            int r3 = r1 + 2
            byte r3 = r6.get(r3)
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 24
            r0 = r0 | r3
            java.nio.ByteBuffer r3 = r5.g
            a(r0, r3)
            int r1 = r1 + 3
            goto L69
        L91:
            int r0 = r6.limit()
            r6.position(r0)
            java.nio.ByteBuffer r6 = r5.g
            r6.flip()
            java.nio.ByteBuffer r6 = r5.g
            r5.h = r6
            return
    }

    @Override
    public final boolean a() {
            r1 = this;
            int r0 = r1.f
            boolean r0 = com.tkay.expressad.exoplayer.k.af.c(r0)
            return r0
    }

    @Override
    public final boolean a(int r2, int r3, int r4) {
            r1 = this;
            boolean r0 = com.tkay.expressad.exoplayer.k.af.c(r4)
            if (r0 == 0) goto L1c
            int r0 = r1.d
            if (r0 != r2) goto L14
            int r0 = r1.e
            if (r0 != r3) goto L14
            int r0 = r1.f
            if (r0 != r4) goto L14
            r2 = 0
            return r2
        L14:
            r1.d = r2
            r1.e = r3
            r1.f = r4
            r2 = 1
            return r2
        L1c:
            com.tkay.expressad.exoplayer.b.f$a r0 = new com.tkay.expressad.exoplayer.b.f$a
            r0.<init>(r2, r3, r4)
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
            r0 = 4
            return r0
    }

    @Override
    public final int d() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    @Override
    public final void e() {
            r1 = this;
            r0 = 1
            r1.i = r0
            return
    }

    @Override
    public final java.nio.ByteBuffer f() {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.h
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.n.a
            r2.h = r1
            return r0
    }

    @Override
    public final boolean g() {
            r2 = this;
            boolean r0 = r2.i
            if (r0 == 0) goto Lc
            java.nio.ByteBuffer r0 = r2.h
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.n.a
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
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.n.a
            r1.h = r0
            r0 = 0
            r1.i = r0
            return
    }

    @Override
    public final void i() {
            r1 = this;
            r1.h()
            r0 = -1
            r1.d = r0
            r1.e = r0
            r0 = 0
            r1.f = r0
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.n.a
            r1.g = r0
            return
    }
}
