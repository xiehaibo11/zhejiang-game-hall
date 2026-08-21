package com.igexin.b.a.d;

final class g {
    final java.util.concurrent.BlockingQueue<com.igexin.b.a.d.e> a;
    final java.util.HashMap<java.lang.Integer, com.igexin.b.a.d.h> b;
    final java.util.concurrent.locks.ReentrantLock c;
    java.util.concurrent.ThreadFactory d;
    volatile long e;
    volatile int f;
    volatile int g;
    volatile int h;
    final com.igexin.b.a.d.f i;

    public g(com.igexin.b.a.d.f r3) {
            r2 = this;
            r2.i = r3
            r2.<init>()
            java.util.concurrent.locks.ReentrantLock r3 = new java.util.concurrent.locks.ReentrantLock
            r3.<init>()
            r2.c = r3
            java.util.concurrent.SynchronousQueue r3 = new java.util.concurrent.SynchronousQueue
            r3.<init>()
            r2.a = r3
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            r2.b = r3
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.SECONDS
            r0 = 60
            long r0 = r3.toNanos(r0)
            r2.e = r0
            r3 = 0
            r2.f = r3
            com.igexin.b.a.d.i r3 = new com.igexin.b.a.d.i
            r3.<init>(r2)
            r2.d = r3
            r3 = 2147483647(0x7fffffff, float:NaN)
            r2.h = r3
            return
    }

    final com.igexin.b.a.d.e a() {
            r4 = this;
        L0:
            int r0 = r4.g     // Catch: java.lang.InterruptedException -> L0
            int r1 = r4.f     // Catch: java.lang.InterruptedException -> L0
            if (r0 <= r1) goto L13
            java.util.concurrent.BlockingQueue<com.igexin.b.a.d.e> r0 = r4.a     // Catch: java.lang.InterruptedException -> L0
            long r1 = r4.e     // Catch: java.lang.InterruptedException -> L0
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.NANOSECONDS     // Catch: java.lang.InterruptedException -> L0
            java.lang.Object r0 = r0.poll(r1, r3)     // Catch: java.lang.InterruptedException -> L0
        L10:
            com.igexin.b.a.d.e r0 = (com.igexin.b.a.d.e) r0     // Catch: java.lang.InterruptedException -> L0
            goto L1a
        L13:
            java.util.concurrent.BlockingQueue<com.igexin.b.a.d.e> r0 = r4.a     // Catch: java.lang.InterruptedException -> L0
            java.lang.Object r0 = r0.take()     // Catch: java.lang.InterruptedException -> L0
            goto L10
        L1a:
            if (r0 == 0) goto L1d
            return r0
        L1d:
            java.util.concurrent.BlockingQueue<com.igexin.b.a.d.e> r0 = r4.a     // Catch: java.lang.InterruptedException -> L0
            boolean r0 = r0.isEmpty()     // Catch: java.lang.InterruptedException -> L0
            if (r0 == 0) goto L0
            r0 = 0
            return r0
    }

    final void a(com.igexin.b.a.d.e r4) {
            r3 = this;
            if (r4 == 0) goto L31
            int r0 = r4.z
            if (r0 == 0) goto L2d
            java.util.concurrent.locks.ReentrantLock r0 = r3.c
            r0.lock()
            java.util.HashMap<java.lang.Integer, com.igexin.b.a.d.h> r1 = r3.b     // Catch: java.lang.Throwable -> L28
            int r2 = r4.z     // Catch: java.lang.Throwable -> L28
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L28
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L28
            com.igexin.b.a.d.h r1 = (com.igexin.b.a.d.h) r1     // Catch: java.lang.Throwable -> L28
            if (r1 == 0) goto L24
            java.util.concurrent.BlockingQueue<com.igexin.b.a.d.e> r1 = r1.a     // Catch: java.lang.Throwable -> L28
            r1.offer(r4)     // Catch: java.lang.Throwable -> L28
            r0.unlock()
            return
        L24:
            r0.unlock()
            goto L2d
        L28:
            r4 = move-exception
            r0.unlock()
            throw r4
        L2d:
            r3.b(r4)
            return
        L31:
            r4 = 0
            throw r4
    }

    final boolean a(com.igexin.b.a.d.h r4) {
            r3 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r3.c
            r0.lock()
            int r1 = r3.g     // Catch: java.lang.Throwable -> L3c
            r2 = 1
            int r1 = r1 - r2
            r3.g = r1     // Catch: java.lang.Throwable -> L3c
            if (r1 != 0) goto L20
            java.util.concurrent.BlockingQueue<com.igexin.b.a.d.e> r1 = r3.a     // Catch: java.lang.Throwable -> L3c
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L3c
            if (r1 != 0) goto L20
            r1 = 0
            java.lang.Thread r1 = r3.f(r1)     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L2c
            r1.start()     // Catch: java.lang.Throwable -> L3c
            goto L2c
        L20:
            java.util.concurrent.BlockingQueue<com.igexin.b.a.d.e> r1 = r4.a     // Catch: java.lang.Throwable -> L3c
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L3c
            if (r1 != 0) goto L2c
            r0.unlock()
            return r2
        L2c:
            java.util.HashMap<java.lang.Integer, com.igexin.b.a.d.h> r1 = r3.b     // Catch: java.lang.Throwable -> L3c
            int r4 = r4.d     // Catch: java.lang.Throwable -> L3c
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L3c
            r1.remove(r4)     // Catch: java.lang.Throwable -> L3c
            r4 = 0
            r0.unlock()
            return r4
        L3c:
            r4 = move-exception
            r0.unlock()
            throw r4
    }

    final void b(com.igexin.b.a.d.e r3) {
            r2 = this;
            int r0 = r2.g
            int r1 = r2.f
            if (r0 >= r1) goto Lc
            boolean r0 = r2.c(r3)
            if (r0 != 0) goto L22
        Lc:
            java.util.concurrent.BlockingQueue<com.igexin.b.a.d.e> r0 = r2.a
            boolean r0 = r0.offer(r3)
            if (r0 == 0) goto L1c
            int r0 = r2.g
            if (r0 != 0) goto L22
            r2.e(r3)
            goto L22
        L1c:
            boolean r3 = r2.d(r3)
            if (r3 != 0) goto L22
        L22:
            return
    }

    final boolean c(com.igexin.b.a.d.e r4) {
            r3 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r3.c
            r0.lock()
            int r1 = r3.g     // Catch: java.lang.Throwable -> L1d
            int r2 = r3.f     // Catch: java.lang.Throwable -> L1d
            if (r1 >= r2) goto L10
            java.lang.Thread r4 = r3.f(r4)     // Catch: java.lang.Throwable -> L1d
            goto L11
        L10:
            r4 = 0
        L11:
            r0.unlock()
            if (r4 != 0) goto L18
            r4 = 0
            return r4
        L18:
            r4.start()
            r4 = 1
            return r4
        L1d:
            r4 = move-exception
            r0.unlock()
            throw r4
    }

    final boolean d(com.igexin.b.a.d.e r4) {
            r3 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r3.c
            r0.lock()
            int r1 = r3.g     // Catch: java.lang.Throwable -> L1d
            int r2 = r3.h     // Catch: java.lang.Throwable -> L1d
            if (r1 >= r2) goto L10
            java.lang.Thread r4 = r3.f(r4)     // Catch: java.lang.Throwable -> L1d
            goto L11
        L10:
            r4 = 0
        L11:
            r0.unlock()
            if (r4 != 0) goto L18
            r4 = 0
            return r4
        L18:
            r4.start()
            r4 = 1
            return r4
        L1d:
            r4 = move-exception
            r0.unlock()
            throw r4
    }

    final void e(com.igexin.b.a.d.e r4) {
            r3 = this;
            java.util.concurrent.locks.ReentrantLock r4 = r3.c
            r4.lock()
            int r0 = r3.g     // Catch: java.lang.Throwable -> L26
            int r1 = r3.f     // Catch: java.lang.Throwable -> L26
            r2 = 1
            int r1 = java.lang.Math.max(r1, r2)     // Catch: java.lang.Throwable -> L26
            r2 = 0
            if (r0 >= r1) goto L1d
            java.util.concurrent.BlockingQueue<com.igexin.b.a.d.e> r0 = r3.a     // Catch: java.lang.Throwable -> L26
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L26
            if (r0 != 0) goto L1d
            java.lang.Thread r2 = r3.f(r2)     // Catch: java.lang.Throwable -> L26
        L1d:
            r4.unlock()
            if (r2 == 0) goto L25
            r2.start()
        L25:
            return
        L26:
            r0 = move-exception
            r4.unlock()
            throw r0
    }

    final java.lang.Thread f(com.igexin.b.a.d.e r3) {
            r2 = this;
            com.igexin.b.a.d.h r0 = new com.igexin.b.a.d.h
            r0.<init>(r2, r3)
            if (r3 == 0) goto L16
            int r1 = r3.z
            if (r1 == 0) goto L16
            java.util.HashMap<java.lang.Integer, com.igexin.b.a.d.h> r1 = r2.b
            int r3 = r3.z
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1.put(r3, r0)
        L16:
            java.util.concurrent.ThreadFactory r3 = r2.d
            java.lang.Thread r3 = r3.newThread(r0)
            if (r3 == 0) goto L24
            int r0 = r2.g
            int r0 = r0 + 1
            r2.g = r0
        L24:
            return r3
    }
}
