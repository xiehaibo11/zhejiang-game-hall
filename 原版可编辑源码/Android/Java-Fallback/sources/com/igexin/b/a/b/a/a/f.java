package com.igexin.b.a.b.a.a;

public final class f {
    private static final java.lang.Object m = null;
    public java.util.concurrent.locks.Lock a;
    public java.util.concurrent.locks.Condition b;
    java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.b.a.a.m> c;
    private com.igexin.b.a.b.b d;
    private com.igexin.b.a.b.d e;
    private java.net.Socket f;
    private com.igexin.b.a.b.a.a.l g;
    private com.igexin.b.a.b.a.a.n h;
    private com.igexin.b.a.b.a.a.c i;
    private java.util.concurrent.atomic.AtomicBoolean j;
    private boolean k;
    private java.util.List<com.igexin.b.a.b.a.a.m> l;
    private android.os.Handler n;
    private long o;
    private final java.util.Comparator<com.igexin.b.a.b.a.a.m> p;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.igexin.b.a.b.a.a.f.m = r0
            return
    }

    private f() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.j = r0
            java.util.concurrent.locks.ReentrantLock r0 = new java.util.concurrent.locks.ReentrantLock
            r0.<init>()
            r2.a = r0
            java.util.concurrent.locks.Condition r0 = r0.newCondition()
            r2.b = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.l = r0
            java.util.concurrent.ConcurrentLinkedQueue r0 = new java.util.concurrent.ConcurrentLinkedQueue
            r0.<init>()
            r2.c = r0
            com.igexin.b.a.b.a.a.j r0 = new com.igexin.b.a.b.a.a.j
            r0.<init>(r2)
            r2.p = r0
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            android.os.Handler r0 = r0.b()
            r2.n = r0
            return
    }

    f(com.igexin.b.a.b.a.a.g r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static android.os.Handler a(com.igexin.b.a.b.a.a.f r0) {
            android.os.Handler r0 = r0.n
            return r0
    }

    public static com.igexin.b.a.b.a.a.f a() {
            com.igexin.b.a.b.a.a.f r0 = com.igexin.b.a.b.a.a.k.a()
            return r0
    }

    static void a(com.igexin.b.a.b.a.a.f r0, com.igexin.b.a.b.a.a.m r1) {
            r0.b(r1)
            return
    }

    static void b(com.igexin.b.a.b.a.a.f r0) {
            r0.i()
            return
    }

    private void b(com.igexin.b.a.b.a.a.m r11) {
            r10 = this;
            int r0 = r11.y
            if (r0 <= 0) goto L93
            com.igexin.b.a.d.a.f r0 = r11.D
            if (r0 != 0) goto La
            goto L93
        La:
            long r0 = java.lang.System.currentTimeMillis()
            r11.b(r0)
            java.lang.Object r2 = com.igexin.b.a.b.a.a.f.m
            monitor-enter(r2)
            java.util.List<com.igexin.b.a.b.a.a.m> r3 = r10.l     // Catch: java.lang.Throwable -> L90
            r3.add(r11)     // Catch: java.lang.Throwable -> L90
            java.util.List<com.igexin.b.a.b.a.a.m> r3 = r10.l     // Catch: java.lang.Throwable -> L90
            java.util.Comparator<com.igexin.b.a.b.a.a.m> r4 = r10.p     // Catch: java.lang.Throwable -> L90
            java.util.Collections.sort(r3, r4)     // Catch: java.lang.Throwable -> L90
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L90
            java.util.List<com.igexin.b.a.b.a.a.m> r4 = r10.l     // Catch: java.lang.Throwable -> L90
            r5 = 0
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> L90
            com.igexin.b.a.b.a.a.m r4 = (com.igexin.b.a.b.a.a.m) r4     // Catch: java.lang.Throwable -> L90
            int r4 = r4.y     // Catch: java.lang.Throwable -> L90
            long r6 = (long) r4     // Catch: java.lang.Throwable -> L90
            long r3 = r3.toMillis(r6)     // Catch: java.lang.Throwable -> L90
            r10.o = r3     // Catch: java.lang.Throwable -> L90
            r6 = 0
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 <= 0) goto L8e
            java.util.List<com.igexin.b.a.b.a.a.m> r3 = r10.l     // Catch: java.lang.Throwable -> L90
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L90
            r4 = 1
            if (r3 != r4) goto L8e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L90
            r3.<init>()     // Catch: java.lang.Throwable -> L90
            java.lang.String r4 = "GS-M|add : "
            r3.append(r4)     // Catch: java.lang.Throwable -> L90
            java.lang.String r4 = r11.toString()     // Catch: java.lang.Throwable -> L90
            r3.append(r4)     // Catch: java.lang.Throwable -> L90
            java.lang.String r4 = " --- "
            r3.append(r4)     // Catch: java.lang.Throwable -> L90
            java.lang.Object r11 = r11.c     // Catch: java.lang.Throwable -> L90
            java.lang.Class r11 = r11.getClass()     // Catch: java.lang.Throwable -> L90
            java.lang.String r11 = r11.getName()     // Catch: java.lang.Throwable -> L90
            r3.append(r11)     // Catch: java.lang.Throwable -> L90
            java.lang.String r11 = " set alarm "
            r3.append(r11)     // Catch: java.lang.Throwable -> L90
            java.lang.String r11 = "delay = "
            r3.append(r11)     // Catch: java.lang.Throwable -> L90
            long r6 = r10.o     // Catch: java.lang.Throwable -> L90
            long r8 = com.igexin.b.a.d.f.u     // Catch: java.lang.Throwable -> L90
            long r6 = r6 + r8
            r3.append(r6)     // Catch: java.lang.Throwable -> L90
            java.lang.String r11 = r3.toString()     // Catch: java.lang.Throwable -> L90
            java.lang.Object[] r3 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L90
            com.igexin.b.a.c.b.a(r11, r3)     // Catch: java.lang.Throwable -> L90
            com.igexin.b.a.b.c r11 = com.igexin.b.a.b.c.b()     // Catch: java.lang.Throwable -> L90
            long r3 = r10.o     // Catch: java.lang.Throwable -> L90
            long r0 = r0 + r3
            long r3 = com.igexin.b.a.d.f.u     // Catch: java.lang.Throwable -> L90
            long r0 = r0 + r3
            r11.b(r0)     // Catch: java.lang.Throwable -> L90
        L8e:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L90
            return
        L90:
            r11 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L90
            throw r11
        L93:
            r11.p()
            return
    }

    private void b(java.net.Socket r4) {
            r3 = this;
            com.igexin.b.a.b.a.a.l r0 = new com.igexin.b.a.b.a.a.l
            com.igexin.b.a.b.a.a.o r1 = new com.igexin.b.a.b.a.a.o
            java.io.InputStream r4 = r4.getInputStream()
            r1.<init>(r4)
            com.igexin.b.a.b.b r4 = r3.d
            com.igexin.b.a.b.d r2 = r3.e
            r0.<init>(r1, r4, r2)
            r3.g = r0
            com.igexin.b.a.b.a.a.h r4 = new com.igexin.b.a.b.a.a.h
            r4.<init>(r3)
            r0.a(r4)
            com.igexin.b.a.b.c r4 = com.igexin.b.a.b.c.b()
            com.igexin.b.a.b.a.a.l r0 = r3.g
            r1 = 1
            r4.a(r0, r1)
            return
    }

    private void c(java.net.Socket r4) {
            r3 = this;
            com.igexin.b.a.b.a.a.n r0 = new com.igexin.b.a.b.a.a.n
            com.igexin.b.a.b.a.a.p r1 = new com.igexin.b.a.b.a.a.p
            java.io.OutputStream r4 = r4.getOutputStream()
            r1.<init>(r4)
            com.igexin.b.a.b.b r4 = r3.d
            com.igexin.b.a.b.d r2 = r3.e
            r0.<init>(r1, r4, r2)
            r3.h = r0
            com.igexin.b.a.b.a.a.i r4 = new com.igexin.b.a.b.a.a.i
            r4.<init>(r3)
            r0.a(r4)
            com.igexin.b.a.b.c r4 = com.igexin.b.a.b.c.b()
            com.igexin.b.a.b.a.a.n r0 = r3.h
            r1 = 1
            r4.a(r0, r1)
            return
    }

    private void i() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.j
            r1 = 1
            boolean r0 = r0.getAndSet(r1)
            if (r0 != 0) goto L14
            android.os.Handler r0 = r2.n
            com.igexin.b.a.b.a.a.q r1 = com.igexin.b.a.b.a.a.q.a
            int r1 = r1.ordinal()
            r0.sendEmptyMessage(r1)
        L14:
            return
    }

    private void j() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.j
            r1 = 0
            r0.set(r1)
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r0 = r0.i()
            com.igexin.b.a.b.a.a.q r1 = com.igexin.b.a.b.a.a.q.b
            r0.a(r1)
            return
    }

    private void k() {
            r2 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "GS-M|disconnect"
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.b.a.b.a.a.c r0 = r2.i
            if (r0 == 0) goto Lf
            r0.j()
        Lf:
            com.igexin.b.a.b.a.a.n r0 = r2.h
            if (r0 == 0) goto L16
            r0.j()
        L16:
            com.igexin.b.a.b.a.a.l r0 = r2.g
            if (r0 == 0) goto L1d
            r0.j()
        L1d:
            java.net.Socket r0 = r2.f
            if (r0 == 0) goto L2c
            boolean r0 = r0.isClosed()     // Catch: java.lang.Exception -> L2c
            if (r0 != 0) goto L2c
            java.net.Socket r0 = r2.f     // Catch: java.lang.Exception -> L2c
            r0.close()     // Catch: java.lang.Exception -> L2c
        L2c:
            return
    }

    private void l() {
            r2 = this;
            com.igexin.b.a.b.a.a.n r0 = r2.h
            r1 = 0
            if (r0 == 0) goto L9
            r0.j = r1
            r2.h = r1
        L9:
            com.igexin.b.a.b.a.a.l r0 = r2.g
            if (r0 == 0) goto L11
            r0.i = r1
            r2.g = r1
        L11:
            r2.i = r1
            r2.f = r1
            r2.e = r1
            return
    }

    private boolean m() {
            r1 = this;
            com.igexin.b.a.b.a.a.c r0 = r1.i
            if (r0 == 0) goto L8
            boolean r0 = r0.e
            if (r0 == 0) goto L18
        L8:
            com.igexin.b.a.b.a.a.l r0 = r1.g
            if (r0 == 0) goto L10
            boolean r0 = r0.e
            if (r0 == 0) goto L18
        L10:
            com.igexin.b.a.b.a.a.n r0 = r1.h
            if (r0 == 0) goto L1a
            boolean r0 = r0.e
            if (r0 != 0) goto L1a
        L18:
            r0 = 0
            return r0
        L1a:
            r1.l()
            r0 = 1
            return r0
    }

    private boolean n() {
            r1 = this;
            java.net.Socket r0 = r1.f
            if (r0 == 0) goto Lc
            boolean r0 = r0.isClosed()
            if (r0 != 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    private void o() {
            r3 = this;
            boolean r0 = com.igexin.push.util.j.b()
            if (r0 != 0) goto L40
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            r0.e()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "GS-M|cancel alrm"
            com.igexin.b.a.c.b.a(r1, r0)
            java.lang.Object r0 = com.igexin.b.a.b.a.a.f.m
            monitor-enter(r0)
            java.util.List<com.igexin.b.a.b.a.a.m> r1 = r3.l     // Catch: java.lang.Throwable -> L3d
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L3d
            if (r1 != 0) goto L3b
            java.util.List<com.igexin.b.a.b.a.a.m> r1 = r3.l     // Catch: java.lang.Throwable -> L3d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L3d
        L26:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L3d
            if (r2 == 0) goto L36
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L3d
            com.igexin.b.a.b.a.a.m r2 = (com.igexin.b.a.b.a.a.m) r2     // Catch: java.lang.Throwable -> L3d
            r2.p()     // Catch: java.lang.Throwable -> L3d
            goto L26
        L36:
            java.util.List<com.igexin.b.a.b.a.a.m> r1 = r3.l     // Catch: java.lang.Throwable -> L3d
            r1.clear()     // Catch: java.lang.Throwable -> L3d
        L3b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            goto L40
        L3d:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            throw r1
        L40:
            java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.b.a.a.m> r0 = r3.c
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L63
            java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.b.a.a.m> r0 = r3.c
            java.util.Iterator r0 = r0.iterator()
        L4e:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L5e
            java.lang.Object r1 = r0.next()
            com.igexin.b.a.b.a.a.m r1 = (com.igexin.b.a.b.a.a.m) r1
            r1.p()
            goto L4e
        L5e:
            java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.b.a.a.m> r0 = r3.c
            r0.clear()
        L63:
            return
    }

    void a(com.igexin.b.a.b.a.a.m r2) {
            r1 = this;
            java.util.concurrent.locks.Lock r0 = r1.a     // Catch: java.lang.Exception -> Lf java.lang.Throwable -> L15
            r0.lock()     // Catch: java.lang.Exception -> Lf java.lang.Throwable -> L15
            java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.b.a.a.m> r0 = r1.c     // Catch: java.lang.Exception -> Lf java.lang.Throwable -> L15
            r0.offer(r2)     // Catch: java.lang.Exception -> Lf java.lang.Throwable -> L15
            java.util.concurrent.locks.Condition r2 = r1.b     // Catch: java.lang.Exception -> Lf java.lang.Throwable -> L15
            r2.signalAll()     // Catch: java.lang.Exception -> Lf java.lang.Throwable -> L15
        Lf:
            java.util.concurrent.locks.Lock r2 = r1.a     // Catch: java.lang.Exception -> L1c
            r2.unlock()     // Catch: java.lang.Exception -> L1c
            goto L1c
        L15:
            r2 = move-exception
            java.util.concurrent.locks.Lock r0 = r1.a     // Catch: java.lang.Exception -> L1b
            r0.unlock()     // Catch: java.lang.Exception -> L1b
        L1b:
            throw r2
        L1c:
            return
    }

    public void a(com.igexin.b.a.b.b r2) {
            r1 = this;
            r1.d = r2
            com.igexin.b.a.b.a.a.l r0 = r1.g
            if (r0 == 0) goto L8
            r0.j = r2
        L8:
            com.igexin.b.a.b.a.a.n r0 = r1.h
            if (r0 == 0) goto Le
            r0.i = r2
        Le:
            return
    }

    public void a(java.lang.String r12) {
            r11 = this;
            boolean r0 = com.igexin.push.util.j.b()
            if (r0 == 0) goto L7
            return
        L7:
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.Object r2 = com.igexin.b.a.b.a.a.f.m
            monitor-enter(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld2
            r3.<init>()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r4 = "GS-M|receive: "
            r3.append(r4)     // Catch: java.lang.Throwable -> Ld2
            r3.append(r12)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r12 = " -- resp -----"
            r3.append(r12)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r12 = r3.toString()     // Catch: java.lang.Throwable -> Ld2
            r3 = 0
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> Ld2
            com.igexin.b.a.c.b.a(r12, r4)     // Catch: java.lang.Throwable -> Ld2
            java.util.List<com.igexin.b.a.b.a.a.m> r12 = r11.l     // Catch: java.lang.Throwable -> Ld2
            java.util.Iterator r12 = r12.iterator()     // Catch: java.lang.Throwable -> Ld2
        L30:
            boolean r4 = r12.hasNext()     // Catch: java.lang.Throwable -> Ld2
            r5 = 0
            if (r4 == 0) goto L68
            java.lang.Object r4 = r12.next()     // Catch: java.lang.Throwable -> Ld2
            com.igexin.b.a.b.a.a.m r4 = (com.igexin.b.a.b.a.a.m) r4     // Catch: java.lang.Throwable -> Ld2
            com.igexin.b.a.d.a.f r7 = r4.D     // Catch: java.lang.Throwable -> Ld2
            boolean r7 = r7.a(r0, r4)     // Catch: java.lang.Throwable -> Ld2
            if (r7 == 0) goto L53
            r4.p()     // Catch: java.lang.Throwable -> Ld2
            com.igexin.b.a.d.a.f r7 = r4.D     // Catch: java.lang.Throwable -> Ld2
            r7.a(r4)     // Catch: java.lang.Throwable -> Ld2
            r4 = 1
            r12.remove()     // Catch: java.lang.Throwable -> Ld2
            goto L69
        L53:
            com.igexin.b.a.d.a.f r7 = r4.D     // Catch: java.lang.Throwable -> Ld2
            long r7 = r7.b(r0, r4)     // Catch: java.lang.Throwable -> Ld2
            long r9 = r11.o     // Catch: java.lang.Throwable -> Ld2
            int r4 = (r9 > r5 ? 1 : (r9 == r5 ? 0 : -1))
            if (r4 < 0) goto L65
            long r4 = r11.o     // Catch: java.lang.Throwable -> Ld2
            int r4 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r4 <= 0) goto L30
        L65:
            r11.o = r7     // Catch: java.lang.Throwable -> Ld2
            goto L30
        L68:
            r4 = r3
        L69:
            com.igexin.b.a.b.c r12 = com.igexin.b.a.b.c.b()     // Catch: java.lang.Throwable -> Ld2
            r12.e()     // Catch: java.lang.Throwable -> Ld2
            if (r4 == 0) goto L7e
            java.lang.String r12 = "GS-M|time out"
            java.lang.Object[] r0 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> Ld2
            com.igexin.b.a.c.b.a(r12, r0)     // Catch: java.lang.Throwable -> Ld2
            r11.e()     // Catch: java.lang.Throwable -> Ld2
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Ld2
            return
        L7e:
            java.util.List<com.igexin.b.a.b.a.a.m> r12 = r11.l     // Catch: java.lang.Throwable -> Ld2
            int r12 = r12.size()     // Catch: java.lang.Throwable -> Ld2
            if (r12 <= 0) goto L9d
            java.util.List<com.igexin.b.a.b.a.a.m> r12 = r11.l     // Catch: java.lang.Throwable -> Ld2
            java.lang.Object r12 = r12.get(r3)     // Catch: java.lang.Throwable -> Ld2
            com.igexin.b.a.b.a.a.m r12 = (com.igexin.b.a.b.a.a.m) r12     // Catch: java.lang.Throwable -> Ld2
            r12.p()     // Catch: java.lang.Throwable -> Ld2
            com.igexin.b.a.b.c r4 = com.igexin.b.a.b.c.b()     // Catch: java.lang.Throwable -> Ld2
            r4.a(r12)     // Catch: java.lang.Throwable -> Ld2
            java.util.List<com.igexin.b.a.b.a.a.m> r4 = r11.l     // Catch: java.lang.Throwable -> Ld2
            r4.remove(r12)     // Catch: java.lang.Throwable -> Ld2
        L9d:
            java.util.List<com.igexin.b.a.b.a.a.m> r12 = r11.l     // Catch: java.lang.Throwable -> Ld2
            int r12 = r12.size()     // Catch: java.lang.Throwable -> Ld2
            if (r12 <= 0) goto Ld0
            long r7 = r11.o     // Catch: java.lang.Throwable -> Ld2
            int r12 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r12 <= 0) goto Ld0
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld2
            r12.<init>()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r4 = "GS-M|set alarm = "
            r12.append(r4)     // Catch: java.lang.Throwable -> Ld2
            long r4 = r11.o     // Catch: java.lang.Throwable -> Ld2
            r12.append(r4)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> Ld2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> Ld2
            com.igexin.b.a.c.b.a(r12, r3)     // Catch: java.lang.Throwable -> Ld2
            com.igexin.b.a.b.c r12 = com.igexin.b.a.b.c.b()     // Catch: java.lang.Throwable -> Ld2
            long r3 = r11.o     // Catch: java.lang.Throwable -> Ld2
            long r0 = r0 + r3
            long r3 = com.igexin.b.a.d.f.u     // Catch: java.lang.Throwable -> Ld2
            long r0 = r0 + r3
            r12.b(r0)     // Catch: java.lang.Throwable -> Ld2
        Ld0:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Ld2
            return
        Ld2:
            r12 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Ld2
            throw r12
    }

    void a(java.net.Socket r3) {
            r2 = this;
            com.igexin.b.a.b.a.a.c r0 = r2.i     // Catch: java.lang.Exception -> L1d
            if (r0 == 0) goto Ld
            com.igexin.b.a.b.a.a.c r0 = r2.i     // Catch: java.lang.Exception -> L1d
            boolean r0 = r0.i()     // Catch: java.lang.Exception -> L1d
            if (r0 == 0) goto Ld
            return
        Ld:
            r2.f = r3     // Catch: java.lang.Exception -> L1d
            com.igexin.b.a.b.d r0 = new com.igexin.b.a.b.d     // Catch: java.lang.Exception -> L1d
            r0.<init>()     // Catch: java.lang.Exception -> L1d
            r2.e = r0     // Catch: java.lang.Exception -> L1d
            r2.b(r3)     // Catch: java.lang.Exception -> L1d
            r2.c(r3)     // Catch: java.lang.Exception -> L1d
            goto L3c
        L1d:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "GS-M|"
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r3, r0)
            r2.i()
        L3c:
            return
    }

    void b() {
            r2 = this;
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r0 = r0.i()
            com.igexin.b.a.b.a.a.q r1 = com.igexin.b.a.b.a.a.q.a
            r0.a(r1)
            return
    }

    public synchronized void c() {
            r2 = this;
            monitor-enter(r2)
            android.os.Handler r0 = r2.n     // Catch: java.lang.Throwable -> Le
            com.igexin.b.a.b.a.a.q r1 = com.igexin.b.a.b.a.a.q.g     // Catch: java.lang.Throwable -> Le
            int r1 = r1.ordinal()     // Catch: java.lang.Throwable -> Le
            r0.sendEmptyMessage(r1)     // Catch: java.lang.Throwable -> Le
            monitor-exit(r2)
            return
        Le:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    void d() {
            r2 = this;
            android.os.Handler r0 = r2.n
            com.igexin.b.a.b.a.a.q r1 = com.igexin.b.a.b.a.a.q.d
            int r1 = r1.ordinal()
            r0.sendEmptyMessage(r1)
            r0 = 0
            r2.k = r0
            return
    }

    public void e() {
            r2 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "GS-M|alarm timeout~~"
            com.igexin.b.a.c.b.a(r1, r0)
            r2.i()
            return
    }

    public void f() {
            r1 = this;
            r1.o()
            com.igexin.b.a.b.a.a.c r0 = r1.i
            if (r0 != 0) goto Lf
            com.igexin.b.a.b.a.a.n r0 = r1.h
            if (r0 != 0) goto Lf
            com.igexin.b.a.b.a.a.l r0 = r1.g
            if (r0 == 0) goto L15
        Lf:
            boolean r0 = r1.m()
            if (r0 == 0) goto L19
        L15:
            r1.j()
            goto L1c
        L19:
            r1.k()
        L1c:
            return
    }

    void g() {
            r4 = this;
            boolean r0 = r4.n()
            r1 = 0
            if (r0 != 0) goto L2a
            com.igexin.b.a.b.a.a.c r2 = r4.i
            if (r2 == 0) goto Lc
            goto L2a
        Lc:
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r1 = "GS-M|disconnect = true, reconnect"
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.b.a.b.a.a.c r0 = new com.igexin.b.a.b.a.a.c
            com.igexin.b.a.b.a.a.g r1 = new com.igexin.b.a.b.a.a.g
            r1.<init>(r4)
            r0.<init>(r1)
            r4.i = r0
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.b.a.b.a.a.c r1 = r4.i
            r2 = 1
            r0.a(r1, r2)
            return
        L2a:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "GS-Mstart connect, isConnected = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = ", ctask = "
            r2.append(r0)
            com.igexin.b.a.b.a.a.c r0 = r4.i
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            return
    }

    void h() {
            r1 = this;
            boolean r0 = r1.m()
            if (r0 == 0) goto L10
            boolean r0 = r1.k
            if (r0 != 0) goto L10
            r1.j()
            r0 = 1
            r1.k = r0
        L10:
            return
    }
}
