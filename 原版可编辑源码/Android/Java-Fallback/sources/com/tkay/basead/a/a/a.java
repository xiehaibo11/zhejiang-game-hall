package com.tkay.basead.a.a;

public abstract class a<R, E> implements com.tkay.basead.a.a.c<R, E> {
    private final java.util.concurrent.atomic.AtomicBoolean a;
    private final java.util.concurrent.atomic.AtomicInteger b;
    private com.tkay.basead.a.a.b<R, E> c;

    public a() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.a = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 1
            r0.<init>(r1)
            r2.b = r0
            return
    }

    @Override
    public final void a() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.a
            boolean r0 = r0.get()
            if (r0 == 0) goto L9
            return
        L9:
            java.util.concurrent.atomic.AtomicInteger r0 = r2.b
            int r0 = r0.decrementAndGet()
            if (r0 != 0) goto L1e
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.a
            r1 = 1
            r0.set(r1)
            com.tkay.basead.a.a.b<R, E> r0 = r2.c
            if (r0 == 0) goto L1e
            r0.a()
        L1e:
            return
    }

    @Override
    public final void a(int r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.b
            r0.set(r2)
            return
    }

    @Override
    public final void a(com.tkay.basead.a.a.b<R, E> r1) {
            r0 = this;
            r0.c = r1
            return
    }

    @Override
    public final void a(E r3) {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.a
            boolean r0 = r0.get()
            if (r0 == 0) goto L9
            return
        L9:
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.a
            r1 = 1
            r0.set(r1)
            com.tkay.basead.a.a.b<R, E> r0 = r2.c
            if (r0 == 0) goto L16
            r0.a(r3)
        L16:
            return
    }
}
