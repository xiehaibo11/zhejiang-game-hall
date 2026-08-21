package com.tkay.expressad.exoplayer.c;

public final class h extends com.tkay.expressad.exoplayer.c.f {
    public java.nio.ByteBuffer c;
    private final com.tkay.expressad.exoplayer.c.g<?, com.tkay.expressad.exoplayer.c.h, ?> d;

    private h(com.tkay.expressad.exoplayer.c.g<?, com.tkay.expressad.exoplayer.c.h, ?> r1) {
            r0 = this;
            r0.<init>()
            r0.d = r1
            return
    }

    private java.nio.ByteBuffer a(long r1, int r3) {
            r0 = this;
            r0.a = r1
            java.nio.ByteBuffer r1 = r0.c
            if (r1 == 0) goto Lc
            int r1 = r1.capacity()
            if (r1 >= r3) goto L1a
        Lc:
            java.nio.ByteBuffer r1 = java.nio.ByteBuffer.allocateDirect(r3)
            java.nio.ByteOrder r2 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r1 = r1.order(r2)
            r0.c = r1
        L1a:
            java.nio.ByteBuffer r1 = r0.c
            r2 = 0
            r1.position(r2)
            java.nio.ByteBuffer r1 = r0.c
            r1.limit(r3)
            java.nio.ByteBuffer r1 = r0.c
            return r1
    }

    @Override
    public final void a() {
            r1 = this;
            super.a()
            java.nio.ByteBuffer r0 = r1.c
            if (r0 == 0) goto La
            r0.clear()
        La:
            return
    }

    @Override
    public final void e() {
            r1 = this;
            com.tkay.expressad.exoplayer.c.g<?, com.tkay.expressad.exoplayer.c.h, ?> r0 = r1.d
            r0.a(r1)
            return
    }
}
