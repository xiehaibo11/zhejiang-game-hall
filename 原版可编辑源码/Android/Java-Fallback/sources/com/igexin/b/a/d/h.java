package com.igexin.b.a.d;

final class h implements java.lang.Runnable {
    final java.util.concurrent.BlockingQueue<com.igexin.b.a.d.e> a;
    com.igexin.b.a.d.e b;
    com.igexin.b.a.d.e c;
    volatile int d;
    final com.igexin.b.a.d.g e;

    public h(com.igexin.b.a.d.g r1, com.igexin.b.a.d.e r2) {
            r0 = this;
            r0.e = r1
            r0.<init>()
            r0.b = r2
            java.util.concurrent.LinkedBlockingQueue r1 = new java.util.concurrent.LinkedBlockingQueue
            r1.<init>()
            r0.a = r1
            return
    }

    public final void a() {
            r1 = this;
            java.util.concurrent.BlockingQueue<com.igexin.b.a.d.e> r0 = r1.a
            r0.clear()
            r0 = 0
            r1.c = r0
            return
    }

    public final void a(com.igexin.b.a.d.e r9) {
            r8 = this;
            int r0 = r8.d
            if (r0 != 0) goto L8
            int r0 = r9.z
            r8.d = r0
        L8:
            r0 = 0
            r1 = 1
            r2 = r1
        Lb:
            if (r2 == 0) goto L94
            r3 = 0
            r9.b()     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            r9.g()     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            r9.e_()     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            boolean r5 = r9.t
            if (r5 != 0) goto L1f
            r9.c()
        L1f:
            boolean r5 = r9.k
            if (r5 != 0) goto L79
            boolean r5 = r9.o
            if (r5 == 0) goto L79
            long r5 = r9.u
            int r3 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r3 == 0) goto L79
            goto Lb
        L2e:
            r5 = move-exception
            goto L7c
        L30:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e
            r6.<init>()     // Catch: java.lang.Throwable -> L2e
            java.lang.String r7 = "TaskService"
            r6.append(r7)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r7 = r5.toString()     // Catch: java.lang.Throwable -> L2e
            r6.append(r7)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L2e
            java.lang.Object[] r7 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L2e
            com.igexin.b.a.c.b.a(r6, r7)     // Catch: java.lang.Throwable -> L2e
            r9.t = r1     // Catch: java.lang.Throwable -> L2e
            r9.B = r5     // Catch: java.lang.Throwable -> L2e
            r9.t()     // Catch: java.lang.Throwable -> L2e
            r9.p()     // Catch: java.lang.Throwable -> L2e
            com.igexin.b.a.d.g r5 = r8.e     // Catch: java.lang.Throwable -> L2e
            com.igexin.b.a.d.f r5 = r5.i     // Catch: java.lang.Throwable -> L2e
            r5.a(r9)     // Catch: java.lang.Throwable -> L2e
            com.igexin.b.a.d.g r5 = r8.e     // Catch: java.lang.Throwable -> L2e
            com.igexin.b.a.d.f r5 = r5.i     // Catch: java.lang.Throwable -> L2e
            r5.f()     // Catch: java.lang.Throwable -> L2e
            boolean r5 = r9.t
            if (r5 != 0) goto L6a
            r9.c()
        L6a:
            boolean r5 = r9.k
            if (r5 != 0) goto L79
            boolean r5 = r9.o
            if (r5 == 0) goto L79
            long r5 = r9.u
            int r3 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r3 == 0) goto L79
            goto Lb
        L79:
            r9 = 0
            r2 = r0
            goto Lb
        L7c:
            boolean r6 = r9.t
            if (r6 != 0) goto L83
            r9.c()
        L83:
            boolean r6 = r9.k
            if (r6 != 0) goto L93
            boolean r6 = r9.o
            if (r6 == 0) goto L93
            long r6 = r9.u
            int r3 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r3 == 0) goto L93
            goto Lb
        L93:
            throw r5
        L94:
            return
    }

    final com.igexin.b.a.d.e b() {
            r5 = this;
        L0:
            int r0 = r5.d
            r1 = 0
            if (r0 == 0) goto L4f
            java.util.concurrent.BlockingQueue<com.igexin.b.a.d.e> r0 = r5.a     // Catch: java.lang.InterruptedException -> L0
            com.igexin.b.a.d.g r2 = r5.e     // Catch: java.lang.InterruptedException -> L0
            long r2 = r2.e     // Catch: java.lang.InterruptedException -> L0
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.NANOSECONDS     // Catch: java.lang.InterruptedException -> L0
            java.lang.Object r0 = r0.poll(r2, r4)     // Catch: java.lang.InterruptedException -> L0
            com.igexin.b.a.d.e r0 = (com.igexin.b.a.d.e) r0     // Catch: java.lang.InterruptedException -> L0
            if (r0 == 0) goto L16
            return r0
        L16:
            java.util.concurrent.BlockingQueue<com.igexin.b.a.d.e> r0 = r5.a     // Catch: java.lang.InterruptedException -> L0
            boolean r0 = r0.isEmpty()     // Catch: java.lang.InterruptedException -> L0
            if (r0 == 0) goto L0
            com.igexin.b.a.d.g r0 = r5.e     // Catch: java.lang.InterruptedException -> L0
            java.util.concurrent.locks.ReentrantLock r0 = r0.c     // Catch: java.lang.InterruptedException -> L0
            r0.lock()     // Catch: java.lang.InterruptedException -> L0
            java.util.concurrent.BlockingQueue<com.igexin.b.a.d.e> r2 = r5.a     // Catch: java.lang.Throwable -> L4a
            boolean r2 = r2.isEmpty()     // Catch: java.lang.Throwable -> L4a
            if (r2 != 0) goto L31
            r0.unlock()     // Catch: java.lang.InterruptedException -> L0
            goto L0
        L31:
            com.igexin.b.a.d.g r2 = r5.e     // Catch: java.lang.Throwable -> L4a
            java.util.HashMap<java.lang.Integer, com.igexin.b.a.d.h> r2 = r2.b     // Catch: java.lang.Throwable -> L4a
            int r3 = r5.d     // Catch: java.lang.Throwable -> L4a
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L4a
            r2.remove(r3)     // Catch: java.lang.Throwable -> L4a
            com.igexin.b.a.d.e r2 = r5.c     // Catch: java.lang.Throwable -> L4a
            r2.e()     // Catch: java.lang.Throwable -> L4a
            r2 = 0
            r5.d = r2     // Catch: java.lang.Throwable -> L4a
            r0.unlock()     // Catch: java.lang.InterruptedException -> L0
            return r1
        L4a:
            r1 = move-exception
            r0.unlock()     // Catch: java.lang.InterruptedException -> L0
            throw r1     // Catch: java.lang.InterruptedException -> L0
        L4f:
            return r1
    }

    @Override
    public final void run() {
            r3 = this;
            r0 = 1
        L1:
            if (r0 == 0) goto L61
            com.igexin.b.a.d.e r0 = r3.b     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            r1 = 0
            r3.b = r1     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
        L8:
            if (r0 != 0) goto L25
            com.igexin.b.a.d.e r0 = r3.b()     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            if (r0 != 0) goto L25
            com.igexin.b.a.d.g r0 = r3.e     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            com.igexin.b.a.d.e r0 = r0.a()     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            if (r0 == 0) goto L19
            goto L25
        L19:
            com.igexin.b.a.d.g r0 = r3.e
            boolean r0 = r0.a(r3)
            if (r0 != 0) goto L1
        L21:
            r3.a()
            goto L1
        L25:
            r3.c = r1     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            r3.a(r0)     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            r3.c = r0     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            r0 = r1
            goto L8
        L2e:
            r0 = move-exception
            goto L55
        L30:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e
            r1.<init>()     // Catch: java.lang.Throwable -> L2e
            java.lang.String r2 = "TaskService|Worker|run()|error"
            r1.append(r2)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L2e
            r1.append(r0)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L2e
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L2e
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> L2e
            com.igexin.b.a.d.g r0 = r3.e
            boolean r0 = r0.a(r3)
            if (r0 != 0) goto L1
            goto L21
        L55:
            com.igexin.b.a.d.g r1 = r3.e
            boolean r1 = r1.a(r3)
            if (r1 != 0) goto L60
            r3.a()
        L60:
            throw r0
        L61:
            return
    }
}
