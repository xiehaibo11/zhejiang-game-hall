package com.tkay.expressad.exoplayer.b;

final class k implements com.tkay.expressad.exoplayer.b.f {
    private int b;
    private int c;
    private int[] d;
    private boolean e;
    private int[] f;
    private java.nio.ByteBuffer g;
    private java.nio.ByteBuffer h;
    private boolean i;

    public k() {
            r1 = this;
            r1.<init>()
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.k.a
            r1.g = r0
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.k.a
            r1.h = r0
            r0 = -1
            r1.b = r0
            r1.c = r0
            return
    }

    @Override
    public final void a(java.nio.ByteBuffer r9) {
            r8 = this;
            int[] r0 = r8.f
            r1 = 0
            if (r0 == 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = r1
        L8:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            int r0 = r9.position()
            int r2 = r9.limit()
            int r3 = r2 - r0
            int r4 = r8.b
            int r4 = r4 * 2
            int r3 = r3 / r4
            int[] r4 = r8.f
            int r4 = r4.length
            int r3 = r3 * r4
            int r3 = r3 * 2
            java.nio.ByteBuffer r4 = r8.g
            int r4 = r4.capacity()
            if (r4 >= r3) goto L37
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.allocateDirect(r3)
            java.nio.ByteOrder r4 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r3 = r3.order(r4)
            r8.g = r3
            goto L3c
        L37:
            java.nio.ByteBuffer r3 = r8.g
            r3.clear()
        L3c:
            if (r0 >= r2) goto L5b
            int[] r3 = r8.f
            int r4 = r3.length
            r5 = r1
        L42:
            if (r5 >= r4) goto L55
            r6 = r3[r5]
            java.nio.ByteBuffer r7 = r8.g
            int r6 = r6 * 2
            int r6 = r6 + r0
            short r6 = r9.getShort(r6)
            r7.putShort(r6)
            int r5 = r5 + 1
            goto L42
        L55:
            int r3 = r8.b
            int r3 = r3 * 2
            int r0 = r0 + r3
            goto L3c
        L5b:
            r9.position(r2)
            java.nio.ByteBuffer r9 = r8.g
            r9.flip()
            java.nio.ByteBuffer r9 = r8.g
            r8.h = r9
            return
    }

    public final void a(int[] r1) {
            r0 = this;
            r0.d = r1
            return
    }

    @Override
    public final boolean a() {
            r1 = this;
            boolean r0 = r1.e
            return r0
    }

    @Override
    public final boolean a(int r6, int r7, int r8) {
            r5 = this;
            int[] r0 = r5.d
            int[] r1 = r5.f
            boolean r0 = java.util.Arrays.equals(r0, r1)
            r1 = 1
            r0 = r0 ^ r1
            int[] r2 = r5.d
            r5.f = r2
            r3 = 0
            if (r2 != 0) goto L14
            r5.e = r3
            return r0
        L14:
            r2 = 2
            if (r8 != r2) goto L4e
            if (r0 != 0) goto L22
            int r0 = r5.c
            if (r0 != r6) goto L22
            int r0 = r5.b
            if (r0 != r7) goto L22
            return r3
        L22:
            r5.c = r6
            r5.b = r7
            int[] r0 = r5.f
            int r0 = r0.length
            if (r7 == r0) goto L2d
            r0 = r1
            goto L2e
        L2d:
            r0 = r3
        L2e:
            r5.e = r0
            r0 = r3
        L31:
            int[] r2 = r5.f
            int r4 = r2.length
            if (r0 >= r4) goto L4d
            r2 = r2[r0]
            if (r2 >= r7) goto L47
            boolean r4 = r5.e
            if (r2 == r0) goto L40
            r2 = r1
            goto L41
        L40:
            r2 = r3
        L41:
            r2 = r2 | r4
            r5.e = r2
            int r0 = r0 + 1
            goto L31
        L47:
            com.tkay.expressad.exoplayer.b.f$a r0 = new com.tkay.expressad.exoplayer.b.f$a
            r0.<init>(r6, r7, r8)
            throw r0
        L4d:
            return r1
        L4e:
            com.tkay.expressad.exoplayer.b.f$a r0 = new com.tkay.expressad.exoplayer.b.f$a
            r0.<init>(r6, r7, r8)
            throw r0
    }

    @Override
    public final int b() {
            r1 = this;
            int[] r0 = r1.f
            if (r0 != 0) goto L7
            int r0 = r1.b
            return r0
        L7:
            int r0 = r0.length
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
            int r0 = r1.c
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
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.k.a
            r2.h = r1
            return r0
    }

    @Override
    public final boolean g() {
            r2 = this;
            boolean r0 = r2.i
            if (r0 == 0) goto Lc
            java.nio.ByteBuffer r0 = r2.h
            java.nio.ByteBuffer r1 = com.tkay.expressad.exoplayer.b.k.a
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
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.k.a
            r1.h = r0
            r0 = 0
            r1.i = r0
            return
    }

    @Override
    public final void i() {
            r1 = this;
            r1.h()
            java.nio.ByteBuffer r0 = com.tkay.expressad.exoplayer.b.k.a
            r1.g = r0
            r0 = -1
            r1.b = r0
            r1.c = r0
            r0 = 0
            r1.f = r0
            r1.d = r0
            r0 = 0
            r1.e = r0
            return
    }
}
