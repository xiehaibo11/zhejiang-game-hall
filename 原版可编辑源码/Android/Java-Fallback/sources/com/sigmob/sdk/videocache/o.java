package com.sigmob.sdk.videocache;

class o {
    private static final int a = 3;
    private final com.sigmob.sdk.videocache.s b;
    private final com.sigmob.sdk.videocache.c c;
    private final java.lang.Object d;
    private final java.lang.Object e;
    private final java.util.concurrent.atomic.AtomicInteger f;
    private volatile java.lang.Thread g;
    private volatile boolean h;
    private volatile int i;

    static class 1 {
    }

    private class a implements java.lang.Runnable {
        final com.sigmob.sdk.videocache.o a;

        private a(com.sigmob.sdk.videocache.o r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        a(com.sigmob.sdk.videocache.o r1, com.sigmob.sdk.videocache.o.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.sigmob.sdk.videocache.o r0 = r1.a
                com.sigmob.sdk.videocache.o.a(r0)
                return
        }
    }

    public o(com.sigmob.sdk.videocache.s r2, com.sigmob.sdk.videocache.c r3) {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.d = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.e = r0
            r0 = -1
            r1.i = r0
            java.lang.Object r2 = com.sigmob.sdk.videocache.n.a(r2)
            com.sigmob.sdk.videocache.s r2 = (com.sigmob.sdk.videocache.s) r2
            r1.b = r2
            java.lang.Object r2 = com.sigmob.sdk.videocache.n.a(r3)
            com.sigmob.sdk.videocache.c r2 = (com.sigmob.sdk.videocache.c) r2
            r1.c = r2
            java.util.concurrent.atomic.AtomicInteger r2 = new java.util.concurrent.atomic.AtomicInteger
            r2.<init>()
            r1.f = r2
            return
    }

    static void a(com.sigmob.sdk.videocache.o r0) {
            r0.e()
            return
    }

    private void b() throws com.sigmob.sdk.videocache.p {
            r4 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r4.f
            int r0 = r0.get()
            r1 = 3
            if (r0 >= r1) goto La
            return
        La:
            java.util.concurrent.atomic.AtomicInteger r1 = r4.f
            r2 = 0
            r1.set(r2)
            com.sigmob.sdk.videocache.p r1 = new com.sigmob.sdk.videocache.p
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Error reading source "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = " times"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    private void b(long r1, long r3) {
            r0 = this;
            r0.a(r1, r3)
            java.lang.Object r1 = r0.d
            monitor-enter(r1)
            java.lang.Object r2 = r0.d     // Catch: java.lang.Throwable -> Ld
            r2.notifyAll()     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Ld
            return
        Ld:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Ld
            throw r2
    }

    private synchronized void c() throws com.sigmob.sdk.videocache.p {
            r4 = this;
            monitor-enter(r4)
            java.lang.Thread r0 = r4.g     // Catch: java.lang.Throwable -> L47
            if (r0 == 0) goto L11
            java.lang.Thread r0 = r4.g     // Catch: java.lang.Throwable -> L47
            java.lang.Thread$State r0 = r0.getState()     // Catch: java.lang.Throwable -> L47
            java.lang.Thread$State r1 = java.lang.Thread.State.TERMINATED     // Catch: java.lang.Throwable -> L47
            if (r0 == r1) goto L11
            r0 = 1
            goto L12
        L11:
            r0 = 0
        L12:
            boolean r1 = r4.h     // Catch: java.lang.Throwable -> L47
            if (r1 != 0) goto L45
            com.sigmob.sdk.videocache.c r1 = r4.c     // Catch: java.lang.Throwable -> L47
            boolean r1 = r1.d()     // Catch: java.lang.Throwable -> L47
            if (r1 != 0) goto L45
            if (r0 != 0) goto L45
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.Throwable -> L47
            com.sigmob.sdk.videocache.o$a r1 = new com.sigmob.sdk.videocache.o$a     // Catch: java.lang.Throwable -> L47
            r2 = 0
            r1.<init>(r4, r2)     // Catch: java.lang.Throwable -> L47
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L47
            r2.<init>()     // Catch: java.lang.Throwable -> L47
            java.lang.String r3 = "Source reader for "
            r2.append(r3)     // Catch: java.lang.Throwable -> L47
            com.sigmob.sdk.videocache.s r3 = r4.b     // Catch: java.lang.Throwable -> L47
            r2.append(r3)     // Catch: java.lang.Throwable -> L47
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L47
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L47
            r4.g = r0     // Catch: java.lang.Throwable -> L47
            java.lang.Thread r0 = r4.g     // Catch: java.lang.Throwable -> L47
            r0.start()     // Catch: java.lang.Throwable -> L47
        L45:
            monitor-exit(r4)
            return
        L47:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    private void d() throws com.sigmob.sdk.videocache.p {
            r4 = this;
            java.lang.Object r0 = r4.d
            monitor-enter(r0)
            java.lang.Object r1 = r4.d     // Catch: java.lang.Throwable -> Lc java.lang.InterruptedException -> Le
            r2 = 1000(0x3e8, double:4.94E-321)
            r1.wait(r2)     // Catch: java.lang.Throwable -> Lc java.lang.InterruptedException -> Le
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            return
        Lc:
            r1 = move-exception
            goto L17
        Le:
            r1 = move-exception
            com.sigmob.sdk.videocache.p r2 = new com.sigmob.sdk.videocache.p     // Catch: java.lang.Throwable -> Lc
            java.lang.String r3 = "Waiting source data is interrupted!"
            r2.<init>(r3, r1)     // Catch: java.lang.Throwable -> Lc
            throw r2     // Catch: java.lang.Throwable -> Lc
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            throw r1
    }

    private void e() {
            r8 = this;
            r0 = -1
            r2 = 0
            com.sigmob.sdk.videocache.c r4 = r8.c     // Catch: java.lang.Throwable -> L4e
            long r2 = r4.a()     // Catch: java.lang.Throwable -> L4e
            com.sigmob.sdk.videocache.s r4 = r8.b     // Catch: java.lang.Throwable -> L4e
            r4.a(r2)     // Catch: java.lang.Throwable -> L4e
            com.sigmob.sdk.videocache.s r4 = r8.b     // Catch: java.lang.Throwable -> L4e
            long r0 = r4.a()     // Catch: java.lang.Throwable -> L4e
            r4 = 8192(0x2000, float:1.148E-41)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L4e
        L19:
            com.sigmob.sdk.videocache.s r5 = r8.b     // Catch: java.lang.Throwable -> L4e
            int r5 = r5.a(r4)     // Catch: java.lang.Throwable -> L4e
            r6 = -1
            if (r5 == r6) goto L47
            java.lang.Object r6 = r8.e     // Catch: java.lang.Throwable -> L4e
            monitor-enter(r6)     // Catch: java.lang.Throwable -> L4e
            boolean r7 = r8.h()     // Catch: java.lang.Throwable -> L44
            if (r7 == 0) goto L38
            java.lang.String r4 = "SourceReaderRunnable停止从服务器下载视频数据"
            com.czhj.sdk.logger.SigmobLog.d(r4)     // Catch: java.lang.Throwable -> L44
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L44
            r8.i()
            r8.b(r2, r0)
            return
        L38:
            com.sigmob.sdk.videocache.c r7 = r8.c     // Catch: java.lang.Throwable -> L44
            r7.a(r4, r5)     // Catch: java.lang.Throwable -> L44
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L44
            long r5 = (long) r5
            long r2 = r2 + r5
            r8.b(r2, r0)     // Catch: java.lang.Throwable -> L4e
            goto L19
        L44:
            r4 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L44
            throw r4     // Catch: java.lang.Throwable -> L4e
        L47:
            r8.g()     // Catch: java.lang.Throwable -> L4e
            r8.f()     // Catch: java.lang.Throwable -> L4e
            goto L57
        L4e:
            r4 = move-exception
            java.util.concurrent.atomic.AtomicInteger r5 = r8.f     // Catch: java.lang.Throwable -> L5e
            r5.incrementAndGet()     // Catch: java.lang.Throwable -> L5e
            r8.a(r4)     // Catch: java.lang.Throwable -> L5e
        L57:
            r8.i()
            r8.b(r2, r0)
            return
        L5e:
            r4 = move-exception
            r8.i()
            r8.b(r2, r0)
            throw r4
    }

    private void f() {
            r1 = this;
            r0 = 100
            r1.i = r0
            int r0 = r1.i
            r1.a(r0)
            return
    }

    private void g() throws com.sigmob.sdk.videocache.p {
            r5 = this;
            java.lang.Object r0 = r5.e
            monitor-enter(r0)
            boolean r1 = r5.h()     // Catch: java.lang.Throwable -> L20
            if (r1 != 0) goto L1e
            com.sigmob.sdk.videocache.c r1 = r5.c     // Catch: java.lang.Throwable -> L20
            long r1 = r1.a()     // Catch: java.lang.Throwable -> L20
            com.sigmob.sdk.videocache.s r3 = r5.b     // Catch: java.lang.Throwable -> L20
            long r3 = r3.a()     // Catch: java.lang.Throwable -> L20
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L1e
            com.sigmob.sdk.videocache.c r1 = r5.c     // Catch: java.lang.Throwable -> L20
            r1.c()     // Catch: java.lang.Throwable -> L20
        L1e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            return
        L20:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            throw r1
    }

    private boolean h() {
            r1 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            boolean r0 = r0.isInterrupted()
            if (r0 != 0) goto L11
            boolean r0 = r1.h
            if (r0 == 0) goto Lf
            goto L11
        Lf:
            r0 = 0
            goto L12
        L11:
            r0 = 1
        L12:
            return r0
    }

    private void i() {
            r4 = this;
            com.sigmob.sdk.videocache.s r0 = r4.b     // Catch: com.sigmob.sdk.videocache.p -> L6
            r0.b()     // Catch: com.sigmob.sdk.videocache.p -> L6
            goto L22
        L6:
            r0 = move-exception
            com.sigmob.sdk.videocache.p r1 = new com.sigmob.sdk.videocache.p
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Error closing source "
            r2.append(r3)
            com.sigmob.sdk.videocache.s r3 = r4.b
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            r4.a(r1)
        L22:
            return
    }

    public int a(byte[] r5, long r6, int r8) throws com.sigmob.sdk.videocache.p {
            r4 = this;
            com.sigmob.sdk.videocache.q.a(r5, r6, r8)
        L3:
            com.sigmob.sdk.videocache.c r0 = r4.c
            boolean r0 = r0.d()
            if (r0 != 0) goto L25
            com.sigmob.sdk.videocache.c r0 = r4.c
            long r0 = r0.a()
            long r2 = (long) r8
            long r2 = r2 + r6
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L25
            boolean r0 = r4.h
            if (r0 != 0) goto L25
            r4.c()
            r4.d()
            r4.b()
            goto L3
        L25:
            com.sigmob.sdk.videocache.c r0 = r4.c
            int r5 = r0.a(r5, r6, r8)
            com.sigmob.sdk.videocache.c r6 = r4.c
            boolean r6 = r6.d()
            if (r6 == 0) goto L3e
            int r6 = r4.i
            r7 = 100
            if (r6 == r7) goto L3e
            r4.i = r7
            r4.a(r7)
        L3e:
            return r5
    }

    public void a() {
            r3 = this;
            java.lang.Object r0 = r3.e
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L31
            r1.<init>()     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = "Shutdown proxy for "
            r1.append(r2)     // Catch: java.lang.Throwable -> L31
            com.sigmob.sdk.videocache.s r2 = r3.b     // Catch: java.lang.Throwable -> L31
            r1.append(r2)     // Catch: java.lang.Throwable -> L31
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L31
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Throwable -> L31
            r1 = 1
            r3.h = r1     // Catch: com.sigmob.sdk.videocache.p -> L2b java.lang.Throwable -> L31
            java.lang.Thread r1 = r3.g     // Catch: com.sigmob.sdk.videocache.p -> L2b java.lang.Throwable -> L31
            if (r1 == 0) goto L25
            java.lang.Thread r1 = r3.g     // Catch: com.sigmob.sdk.videocache.p -> L2b java.lang.Throwable -> L31
            r1.interrupt()     // Catch: com.sigmob.sdk.videocache.p -> L2b java.lang.Throwable -> L31
        L25:
            com.sigmob.sdk.videocache.c r1 = r3.c     // Catch: com.sigmob.sdk.videocache.p -> L2b java.lang.Throwable -> L31
            r1.b()     // Catch: com.sigmob.sdk.videocache.p -> L2b java.lang.Throwable -> L31
            goto L2f
        L2b:
            r1 = move-exception
            r3.a(r1)     // Catch: java.lang.Throwable -> L31
        L2f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L31
            return
        L31:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L31
            throw r1
    }

    protected void a(int r1) {
            r0 = this;
            return
    }

    protected void a(long r5, long r7) {
            r4 = this;
            r0 = 0
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            r1 = 1
            r2 = 0
            if (r0 != 0) goto La
            r3 = r1
            goto Lb
        La:
            r3 = r2
        Lb:
            if (r3 == 0) goto L10
            r5 = 100
            goto L17
        L10:
            float r5 = (float) r5
            float r6 = (float) r7
            float r5 = r5 / r6
            r6 = 1120403456(0x42c80000, float:100.0)
            float r5 = r5 * r6
            int r5 = (int) r5
        L17:
            int r6 = r4.i
            if (r5 == r6) goto L1d
            r6 = r1
            goto L1e
        L1d:
            r6 = r2
        L1e:
            if (r0 < 0) goto L21
            goto L22
        L21:
            r1 = r2
        L22:
            if (r1 == 0) goto L29
            if (r6 == 0) goto L29
            r4.a(r5)
        L29:
            r4.i = r5
            return
    }

    protected final void a(java.lang.Throwable r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.sigmob.sdk.videocache.l
            if (r0 == 0) goto La
            java.lang.String r2 = "ProxyCache is interrupted"
            com.czhj.sdk.logger.SigmobLog.d(r2)
            goto Lf
        La:
            java.lang.String r0 = "ProxyCache error"
            com.czhj.sdk.logger.SigmobLog.e(r0, r2)
        Lf:
            return
    }
}
