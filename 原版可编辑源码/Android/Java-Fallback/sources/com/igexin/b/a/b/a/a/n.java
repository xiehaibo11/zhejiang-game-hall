package com.igexin.b.a.b.a.a;

public final class n extends com.igexin.b.a.b.a.a.a {
    private com.igexin.b.a.b.a.a.a.c L;
    private com.igexin.b.a.b.d M;
    public com.igexin.b.a.b.b i;
    com.igexin.b.a.b.a.a.p j;

    public n(com.igexin.b.a.b.a.a.p r3, com.igexin.b.a.b.b r4, com.igexin.b.a.b.d r5) {
            r2 = this;
            r0 = -2036(0xfffffffffffff80c, float:NaN)
            r1 = 0
            r2.<init>(r0, r1, r4)
            r2.i = r4
            r2.M = r5
            r2.j = r3
            return
    }

    public void a(com.igexin.b.a.b.a.a.a.c r1) {
            r0 = this;
            r0.L = r1
            return
    }

    @Override
    public void b() {
            r10 = this;
            super.b()
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "GS-W|"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r3 = " running"
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r3 = 0
            java.lang.Object[] r4 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r1, r4)
            com.igexin.b.a.b.a.a.f r1 = com.igexin.b.a.b.a.a.f.a()
        L27:
            boolean r4 = r10.h
            if (r4 == 0) goto Ldf
            boolean r4 = r0.isInterrupted()
            if (r4 != 0) goto Ldf
            boolean r4 = r10.e
            if (r4 != 0) goto Ldf
            java.util.concurrent.locks.Lock r4 = r1.a     // Catch: java.lang.Throwable -> Lc4
            r4.lock()     // Catch: java.lang.Throwable -> Lc4
            java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.b.a.a.m> r4 = r1.c     // Catch: java.lang.Throwable -> Lc4
            boolean r4 = r4.isEmpty()     // Catch: java.lang.Throwable -> Lc4
            if (r4 == 0) goto L4b
            boolean r4 = r10.h     // Catch: java.lang.Throwable -> Lc4
            if (r4 == 0) goto L4b
            java.util.concurrent.locks.Condition r4 = r1.b     // Catch: java.lang.Throwable -> Lc4
            r4.await()     // Catch: java.lang.Throwable -> Lc4
        L4b:
            java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.b.a.a.m> r4 = r1.c     // Catch: java.lang.Throwable -> Lc4
            java.lang.Object r4 = r4.poll()     // Catch: java.lang.Throwable -> Lc4
            com.igexin.b.a.b.a.a.m r4 = (com.igexin.b.a.b.a.a.m) r4     // Catch: java.lang.Throwable -> Lc4
            if (r4 == 0) goto Lbd
            boolean r5 = r10.h     // Catch: java.lang.Throwable -> Lc4
            if (r5 == 0) goto Lbd
            com.igexin.b.a.b.d r5 = r10.M     // Catch: java.lang.Throwable -> Lc4
            r4.d = r5     // Catch: java.lang.Throwable -> Lc4
            com.igexin.b.a.b.d r5 = r10.M     // Catch: java.lang.Throwable -> Lc4
            if (r5 == 0) goto Lbd
            com.igexin.b.a.b.a.a.p r5 = r10.j     // Catch: java.lang.Throwable -> Lc4
            if (r5 == 0) goto Lbd
            boolean r5 = r10.h     // Catch: java.lang.Throwable -> Lc4
            if (r5 == 0) goto Lbd
            com.igexin.b.a.b.a.a.b r5 = com.igexin.b.a.b.a.a.b.a     // Catch: java.lang.Throwable -> Lc4
            r10.f = r5     // Catch: java.lang.Throwable -> Lc4
            com.igexin.b.a.b.a.a.a.c r5 = r10.L     // Catch: java.lang.Throwable -> Lc4
            if (r5 == 0) goto L7a
            boolean r5 = r10.h     // Catch: java.lang.Throwable -> Lc4
            if (r5 == 0) goto L7a
            com.igexin.b.a.b.a.a.a.c r5 = r10.L     // Catch: java.lang.Throwable -> Lc4
            r5.a(r4)     // Catch: java.lang.Throwable -> Lc4
        L7a:
            com.igexin.b.a.b.a.a.p r5 = r10.j     // Catch: java.lang.Throwable -> Lc4
            com.igexin.b.a.b.b r6 = r10.i     // Catch: java.lang.Throwable -> Lc4
            r7 = 0
            com.igexin.b.a.b.d r8 = r10.M     // Catch: java.lang.Throwable -> Lc4
            java.lang.Object r9 = r4.c     // Catch: java.lang.Throwable -> Lc4
            java.lang.Object r6 = r6.d(r7, r8, r9)     // Catch: java.lang.Throwable -> Lc4
            byte[] r6 = (byte[]) r6     // Catch: java.lang.Throwable -> Lc4
            byte[] r6 = (byte[]) r6     // Catch: java.lang.Throwable -> Lc4
            r5.a(r6)     // Catch: java.lang.Throwable -> Lc4
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc4
            r5.<init>()     // Catch: java.lang.Throwable -> Lc4
            r5.append(r2)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r6 = r4.toString()     // Catch: java.lang.Throwable -> Lc4
            r5.append(r6)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r6 = " --> "
            r5.append(r6)     // Catch: java.lang.Throwable -> Lc4
            java.lang.Object r4 = r4.c     // Catch: java.lang.Throwable -> Lc4
            java.lang.Class r4 = r4.getClass()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> Lc4
            r5.append(r4)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r4 = "-- send success"
            r5.append(r4)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> Lc4
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> Lc4
            com.igexin.b.a.c.b.a(r4, r5)     // Catch: java.lang.Throwable -> Lc4
        Lbd:
            java.util.concurrent.locks.Lock r4 = r1.a     // Catch: java.lang.Exception -> L27
            r4.unlock()     // Catch: java.lang.Exception -> L27
            goto L27
        Lc4:
            r4 = move-exception
            r10.h = r3     // Catch: java.lang.Throwable -> Ld8
            com.igexin.b.a.b.a.a.b r5 = r10.f     // Catch: java.lang.Throwable -> Ld8
            com.igexin.b.a.b.a.a.b r6 = com.igexin.b.a.b.a.a.b.c     // Catch: java.lang.Throwable -> Ld8
            if (r5 == r6) goto Lbd
            com.igexin.b.a.b.a.a.b r5 = com.igexin.b.a.b.a.a.b.b     // Catch: java.lang.Throwable -> Ld8
            r10.f = r5     // Catch: java.lang.Throwable -> Ld8
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Ld8
            r10.g = r4     // Catch: java.lang.Throwable -> Ld8
            goto Lbd
        Ld8:
            r0 = move-exception
            java.util.concurrent.locks.Lock r1 = r1.a     // Catch: java.lang.Exception -> Lde
            r1.unlock()     // Catch: java.lang.Exception -> Lde
        Lde:
            throw r0
        Ldf:
            r0 = 1
            r10.e = r0
            java.lang.Object[] r0 = new java.lang.Object[r3]
            java.lang.String r1 = "GS-W|finish ~~~~~~"
            com.igexin.b.a.c.b.a(r1, r0)
            return
    }

    @Override
    public final int b_() {
            r1 = this;
            r0 = -2036(0xfffffffffffff80c, float:NaN)
            return r0
    }

    @Override
    public void f() {
            r3 = this;
            super.f()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "GS-W|wt dispose"
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.b.a.b.a.a.a.c r0 = r3.L
            if (r0 == 0) goto L2f
            com.igexin.b.a.b.a.a.b r0 = r3.f
            com.igexin.b.a.b.a.a.b r1 = com.igexin.b.a.b.a.a.b.b
            if (r0 != r1) goto L2a
            java.lang.String r0 = r3.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2f
            com.igexin.b.a.b.a.a.a.c r0 = r3.L
            java.lang.Exception r1 = new java.lang.Exception
            java.lang.String r2 = r3.g
            r1.<init>(r2)
            r0.a(r1)
            goto L2f
        L2a:
            com.igexin.b.a.b.a.a.a.c r0 = r3.L
            r0.a(r3)
        L2f:
            r0 = 0
            r3.L = r0
            return
    }

    public void j() {
            r2 = this;
            r0 = 0
            r2.h = r0
            com.igexin.b.a.b.a.a.b r0 = com.igexin.b.a.b.a.a.b.c
            r2.f = r0
            com.igexin.b.a.b.a.a.f r0 = com.igexin.b.a.b.a.a.f.a()
            boolean r1 = r2.e     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> L1f
            if (r1 != 0) goto L19
            java.util.concurrent.locks.Lock r1 = r0.a     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> L1f
            r1.lock()     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> L1f
            java.util.concurrent.locks.Condition r1 = r0.b     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> L1f
            r1.signalAll()     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> L1f
        L19:
            java.util.concurrent.locks.Lock r0 = r0.a     // Catch: java.lang.Exception -> L26
            r0.unlock()     // Catch: java.lang.Exception -> L26
            goto L26
        L1f:
            r1 = move-exception
            java.util.concurrent.locks.Lock r0 = r0.a     // Catch: java.lang.Exception -> L25
            r0.unlock()     // Catch: java.lang.Exception -> L25
        L25:
            throw r1
        L26:
            return
    }
}
