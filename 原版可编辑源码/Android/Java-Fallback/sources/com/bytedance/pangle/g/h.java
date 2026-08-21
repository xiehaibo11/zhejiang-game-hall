package com.bytedance.pangle.g;

final class h implements com.bytedance.pangle.g.k {
    private final java.nio.ByteBuffer a;

    h(java.nio.ByteBuffer r1) {
            r0 = this;
            r0.<init>()
            java.nio.ByteBuffer r1 = r1.slice()
            r0.a = r1
            return
    }

    @Override
    public final long a() {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.a
            int r0 = r0.capacity()
            long r0 = (long) r0
            return r0
    }

    @Override
    public final void a(com.bytedance.pangle.g.j r4, long r5, int r7) {
            r3 = this;
            java.nio.ByteBuffer r0 = r3.a
            monitor-enter(r0)
            java.nio.ByteBuffer r1 = r3.a     // Catch: java.lang.Throwable -> L20
            r2 = 0
            r1.position(r2)     // Catch: java.lang.Throwable -> L20
            java.nio.ByteBuffer r1 = r3.a     // Catch: java.lang.Throwable -> L20
            int r5 = (int) r5     // Catch: java.lang.Throwable -> L20
            int r7 = r7 + r5
            r1.limit(r7)     // Catch: java.lang.Throwable -> L20
            java.nio.ByteBuffer r6 = r3.a     // Catch: java.lang.Throwable -> L20
            r6.position(r5)     // Catch: java.lang.Throwable -> L20
            java.nio.ByteBuffer r5 = r3.a     // Catch: java.lang.Throwable -> L20
            java.nio.ByteBuffer r5 = r5.slice()     // Catch: java.lang.Throwable -> L20
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            r4.a(r5)
            return
        L20:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            throw r4
    }
}
