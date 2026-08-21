package com.tkay.expressad.foundation.g.a;

public abstract class b<K, V> extends com.tkay.expressad.foundation.g.a.a<K, V> {
    private static final int b = 16;
    private static final int c = 16777216;
    private final int d;
    private final java.util.concurrent.atomic.AtomicInteger e;
    private final java.util.List<V> f;

    private b(int r3) {
            r2 = this;
            r2.<init>()
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r2.f = r0
            r2.d = r3
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>()
            r2.e = r0
            r0 = 16777216(0x1000000, float:2.3509887E-38)
            if (r3 <= r0) goto L32
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r0 = 0
            r1 = 16
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r3[r0] = r1
            java.lang.String r0 = "You set too large memory cache size (more than %1$d Mb)"
            java.lang.String r3 = java.lang.String.format(r0, r3)
            java.lang.String r0 = "cache"
            android.util.Log.w(r0, r3)
        L32:
            return
    }

    private int e() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    @Override
    public final void a(K r3) {
            r2 = this;
            java.lang.Object r0 = super.b(r3)
            if (r0 == 0) goto L18
            java.util.List<V> r1 = r2.f
            boolean r0 = r1.remove(r0)
            if (r0 == 0) goto L18
            java.util.concurrent.atomic.AtomicInteger r0 = r2.e
            int r1 = r2.c()
            int r1 = -r1
            r0.addAndGet(r1)
        L18:
            super.a(r3)
            return
    }

    @Override
    public final boolean a(K r6, V r7) {
            r5 = this;
            int r0 = r5.c()
            int r1 = r5.d
            java.util.concurrent.atomic.AtomicInteger r2 = r5.e
            int r2 = r2.get()
            if (r0 >= r1) goto L36
        Le:
            int r3 = r2 + r0
            if (r3 <= r1) goto L2a
            java.lang.Object r3 = r5.d()
            java.util.List<V> r4 = r5.f
            boolean r3 = r4.remove(r3)
            if (r3 == 0) goto Le
            java.util.concurrent.atomic.AtomicInteger r2 = r5.e
            int r3 = r5.c()
            int r3 = -r3
            int r2 = r2.addAndGet(r3)
            goto Le
        L2a:
            java.util.List<V> r1 = r5.f
            r1.add(r7)
            java.util.concurrent.atomic.AtomicInteger r1 = r5.e
            r1.addAndGet(r0)
            r0 = 1
            goto L37
        L36:
            r0 = 0
        L37:
            super.a(r6, r7)
            return r0
    }

    @Override
    public final void b() {
            r2 = this;
            java.util.List<V> r0 = r2.f
            r0.clear()
            java.util.concurrent.atomic.AtomicInteger r0 = r2.e
            r1 = 0
            r0.set(r1)
            super.b()
            return
    }

    protected abstract int c();

    protected abstract V d();
}
