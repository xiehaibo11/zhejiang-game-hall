package com.tkay.expressad.exoplayer.b;

public final class t implements com.tkay.expressad.exoplayer.b.f {
    public static final float b = 8.0f;
    public static final float c = 0.1f;
    public static final float d = 8.0f;
    public static final float e = 0.1f;
    public static final int f = -1;
    private static final float g = 0.01f;
    private static final int h = 1024;
    private int i;
    private int j;
    private float k;
    private float l;
    private int m;
    private int n;
    private com.tkay.expressad.exoplayer.b.s o;
    private java.nio.ByteBuffer p;
    private java.nio.ShortBuffer q;
    private java.nio.ByteBuffer r;
    private long s;
    private long t;
    private boolean u;

    public t() {
            r2 = this;
            r2.<init>()
            r0 = 1065353216(0x3f800000, float:1.0)
            r2.k = r0
            r2.l = r0
            r0 = -1
            r2.i = r0
            r2.j = r0
            r2.m = r0
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.t.a
            r2.p = r1
            java.nio.ShortBuffer r1 = r1.asShortBuffer()
            r2.q = r1
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.t.a
            r2.r = r1
            r2.n = r0
            return
    }

    private void a(int r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public final float a(float r2) {
            r1 = this;
            float r2 = com.tkay.expressad.exoplayer.k.af.a(r2)
            float r0 = r1.k
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lf
            r1.k = r2
            r0 = 0
            r1.o = r0
        Lf:
            r1.h()
            return r2
    }

    public final long a(long r16) {
            r15 = this;
            r0 = r15
            long r5 = r0.t
            r1 = 1024(0x400, double:5.06E-321)
            int r1 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r1 < 0) goto L27
            int r1 = r0.m
            int r2 = r0.j
            if (r1 != r2) goto L18
            long r3 = r0.s
            r1 = r16
            long r1 = com.tkay.expressad.exoplayer.k.af.a(r1, r3, r5)
            return r1
        L18:
            long r3 = r0.s
            long r7 = (long) r1
            long r11 = r3 * r7
            long r1 = (long) r2
            long r13 = r5 * r1
            r9 = r16
            long r1 = com.tkay.expressad.exoplayer.k.af.a(r9, r11, r13)
            return r1
        L27:
            float r1 = r0.k
            double r1 = (double) r1
            r3 = r16
            double r3 = (double) r3
            double r1 = r1 * r3
            long r1 = (long) r1
            return r1
    }

    @Override
    public final void a(java.nio.ByteBuffer r7) {
            r6 = this;
            com.tkay.expressad.exoplayer.b.s r0 = r6.o
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            boolean r0 = r7.hasRemaining()
            if (r0 == 0) goto L2b
            java.nio.ShortBuffer r0 = r7.asShortBuffer()
            int r1 = r7.remaining()
            long r2 = r6.s
            long r4 = (long) r1
            long r2 = r2 + r4
            r6.s = r2
            com.tkay.expressad.exoplayer.b.s r2 = r6.o
            r2.a(r0)
            int r0 = r7.position()
            int r0 = r0 + r1
            r7.position(r0)
        L2b:
            com.tkay.expressad.exoplayer.b.s r7 = r6.o
            int r7 = r7.c()
            int r0 = r6.i
            int r7 = r7 * r0
            int r7 = r7 * 2
            if (r7 <= 0) goto L75
            java.nio.ByteBuffer r0 = r6.p
            int r0 = r0.capacity()
            if (r0 >= r7) goto L55
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocateDirect(r7)
            java.nio.ByteOrder r1 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r0 = r0.order(r1)
            r6.p = r0
            java.nio.ShortBuffer r0 = r0.asShortBuffer()
            r6.q = r0
            goto L5f
        L55:
            java.nio.ByteBuffer r0 = r6.p
            r0.clear()
            java.nio.ShortBuffer r0 = r6.q
            r0.clear()
        L5f:
            com.tkay.expressad.exoplayer.b.s r0 = r6.o
            java.nio.ShortBuffer r1 = r6.q
            r0.b(r1)
            long r0 = r6.t
            long r2 = (long) r7
            long r0 = r0 + r2
            r6.t = r0
            java.nio.ByteBuffer r0 = r6.p
            r0.limit(r7)
            java.nio.ByteBuffer r7 = r6.p
            r6.r = r7
        L75:
            return
    }

    @Override
    public final boolean a() {
            r3 = this;
            int r0 = r3.j
            r1 = -1
            if (r0 == r1) goto L28
            float r0 = r3.k
            r1 = 1065353216(0x3f800000, float:1.0)
            float r0 = r0 - r1
            float r0 = java.lang.Math.abs(r0)
            r2 = 1008981770(0x3c23d70a, float:0.01)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L26
            float r0 = r3.l
            float r0 = r0 - r1
            float r0 = java.lang.Math.abs(r0)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L26
            int r0 = r3.m
            int r1 = r3.j
            if (r0 == r1) goto L28
        L26:
            r0 = 1
            return r0
        L28:
            r0 = 0
            return r0
    }

    @Override
    public final boolean a(int r2, int r3, int r4) {
            r1 = this;
            r0 = 2
            if (r4 != r0) goto L22
            int r4 = r1.n
            r0 = -1
            if (r4 != r0) goto L9
            r4 = r2
        L9:
            int r0 = r1.j
            if (r0 != r2) goto L17
            int r0 = r1.i
            if (r0 != r3) goto L17
            int r0 = r1.m
            if (r0 != r4) goto L17
            r2 = 0
            return r2
        L17:
            r1.j = r2
            r1.i = r3
            r1.m = r4
            r2 = 0
            r1.o = r2
            r2 = 1
            return r2
        L22:
            com.tkay.expressad.exoplayer.b.f$a r0 = new com.tkay.expressad.exoplayer.b.f$a
            r0.<init>(r2, r3, r4)
            throw r0
    }

    public final float b(float r2) {
            r1 = this;
            float r2 = com.tkay.expressad.exoplayer.k.af.a(r2)
            float r0 = r1.l
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lf
            r1.l = r2
            r0 = 0
            r1.o = r0
        Lf:
            r1.h()
            return r2
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
            int r0 = r1.m
            return r0
    }

    @Override
    public final void e() {
            r2 = this;
            com.tkay.expressad.exoplayer.b.s r0 = r2.o
            r1 = 1
            if (r0 == 0) goto L7
            r0 = r1
            goto L8
        L7:
            r0 = 0
        L8:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            com.tkay.expressad.exoplayer.b.s r0 = r2.o
            r0.a()
            r2.u = r1
            return
    }

    @Override
    public final java.nio.ByteBuffer f() {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.r
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.t.a
            r2.r = r1
            return r0
    }

    @Override
    public final boolean g() {
            r1 = this;
            boolean r0 = r1.u
            if (r0 == 0) goto L10
            com.tkay.expressad.exoplayer.b.s r0 = r1.o
            if (r0 == 0) goto Le
            int r0 = r0.c()
            if (r0 != 0) goto L10
        Le:
            r0 = 1
            return r0
        L10:
            r0 = 0
            return r0
    }

    @Override
    public final void h() {
            r7 = this;
            boolean r0 = r7.a()
            if (r0 == 0) goto L20
            com.tkay.expressad.exoplayer.b.s r0 = r7.o
            if (r0 != 0) goto L1d
            com.tkay.expressad.exoplayer.b.s r0 = new com.tkay.expressad.exoplayer.b.s
            int r2 = r7.j
            int r3 = r7.i
            float r4 = r7.k
            float r5 = r7.l
            int r6 = r7.m
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6)
            r7.o = r0
            goto L20
        L1d:
            r0.b()
        L20:
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.t.a
            r7.r = r0
            r0 = 0
            r7.s = r0
            r7.t = r0
            r0 = 0
            r7.u = r0
            return
    }

    @Override
    public final void i() {
            r2 = this;
            r0 = 1065353216(0x3f800000, float:1.0)
            r2.k = r0
            r2.l = r0
            r0 = -1
            r2.i = r0
            r2.j = r0
            r2.m = r0
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.t.a
            r2.p = r1
            java.nio.ShortBuffer r1 = r1.asShortBuffer()
            r2.q = r1
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.t.a
            r2.r = r1
            r2.n = r0
            r0 = 0
            r2.o = r0
            r0 = 0
            r2.s = r0
            r2.t = r0
            r0 = 0
            r2.u = r0
            return
    }
}
