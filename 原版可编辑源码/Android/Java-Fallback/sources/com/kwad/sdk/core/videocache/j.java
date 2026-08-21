package com.kwad.sdk.core.videocache;

class j {
    private final com.kwad.sdk.core.videocache.l awN;
    private final com.kwad.sdk.core.videocache.a awO;
    private final java.lang.Object awP;
    private final java.lang.Object awQ;
    private final java.util.concurrent.atomic.AtomicInteger awR;
    private volatile java.lang.Thread awS;
    private volatile int awT;
    private volatile boolean kU;

    class a implements java.lang.Runnable {
        final com.kwad.sdk.core.videocache.j awU;

        private a(com.kwad.sdk.core.videocache.j r1) {
                r0 = this;
                r0.awU = r1
                r0.<init>()
                return
        }

        a(com.kwad.sdk.core.videocache.j r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void run() {
                r1 = this;
                com.kwad.sdk.core.videocache.j r0 = r1.awU
                com.kwad.sdk.core.videocache.j.a(r0)
                return
        }
    }

    public j(com.kwad.sdk.core.videocache.l r2, com.kwad.sdk.core.videocache.a r3) {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.awP = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.awQ = r0
            r0 = -1
            r1.awT = r0
            java.lang.Object r2 = com.kwad.sdk.utils.ao.checkNotNull(r2)
            com.kwad.sdk.core.videocache.l r2 = (com.kwad.sdk.core.videocache.l) r2
            r1.awN = r2
            java.lang.Object r2 = com.kwad.sdk.utils.ao.checkNotNull(r3)
            com.kwad.sdk.core.videocache.a r2 = (com.kwad.sdk.core.videocache.a) r2
            r1.awO = r2
            java.util.concurrent.atomic.AtomicInteger r2 = new java.util.concurrent.atomic.AtomicInteger
            r2.<init>()
            r1.awR = r2
            return
    }

    private void DL() {
            r4 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r4.awR
            int r0 = r0.get()
            if (r0 > 0) goto L9
            return
        L9:
            java.util.concurrent.atomic.AtomicInteger r1 = r4.awR
            r2 = 0
            r1.set(r2)
            com.kwad.sdk.core.videocache.ProxyCacheException r1 = new com.kwad.sdk.core.videocache.ProxyCacheException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Error reading source "
            r2.<init>(r3)
            r2.append(r0)
            java.lang.String r0 = " times"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    private synchronized void DM() {
            r4 = this;
            monitor-enter(r4)
            java.lang.Thread r0 = r4.awS     // Catch: java.lang.Throwable -> L44
            r1 = 0
            if (r0 == 0) goto L12
            java.lang.Thread r0 = r4.awS     // Catch: java.lang.Throwable -> L44
            java.lang.Thread$State r0 = r0.getState()     // Catch: java.lang.Throwable -> L44
            java.lang.Thread$State r2 = java.lang.Thread.State.TERMINATED     // Catch: java.lang.Throwable -> L44
            if (r0 == r2) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = r1
        L13:
            boolean r2 = r4.kU     // Catch: java.lang.Throwable -> L44
            if (r2 != 0) goto L42
            com.kwad.sdk.core.videocache.a r2 = r4.awO     // Catch: java.lang.Throwable -> L44
            boolean r2 = r2.isCompleted()     // Catch: java.lang.Throwable -> L44
            if (r2 != 0) goto L42
            if (r0 != 0) goto L42
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.Throwable -> L44
            com.kwad.sdk.core.videocache.j$a r2 = new com.kwad.sdk.core.videocache.j$a     // Catch: java.lang.Throwable -> L44
            r2.<init>(r4, r1)     // Catch: java.lang.Throwable -> L44
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L44
            java.lang.String r3 = "Source reader for "
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L44
            com.kwad.sdk.core.videocache.l r3 = r4.awN     // Catch: java.lang.Throwable -> L44
            r1.append(r3)     // Catch: java.lang.Throwable -> L44
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L44
            r0.<init>(r2, r1)     // Catch: java.lang.Throwable -> L44
            r4.awS = r0     // Catch: java.lang.Throwable -> L44
            java.lang.Thread r0 = r4.awS     // Catch: java.lang.Throwable -> L44
            r0.start()     // Catch: java.lang.Throwable -> L44
        L42:
            monitor-exit(r4)
            return
        L44:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    private void DN() {
            r4 = this;
            java.lang.Object r0 = r4.awP
            monitor-enter(r0)
            java.lang.Object r1 = r4.awP     // Catch: java.lang.Throwable -> Lc java.lang.InterruptedException -> Le
            r2 = 1000(0x3e8, double:4.94E-321)
            r1.wait(r2)     // Catch: java.lang.Throwable -> Lc java.lang.InterruptedException -> Le
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            return
        Lc:
            r1 = move-exception
            goto L17
        Le:
            r1 = move-exception
            com.kwad.sdk.core.videocache.ProxyCacheException r2 = new com.kwad.sdk.core.videocache.ProxyCacheException     // Catch: java.lang.Throwable -> Lc
            java.lang.String r3 = "Waiting source data is interrupted!"
            r2.<init>(r3, r1)     // Catch: java.lang.Throwable -> Lc
            throw r2     // Catch: java.lang.Throwable -> Lc
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            throw r1
    }

    private void DO() {
            r8 = this;
            r0 = -1
            r2 = 0
            com.kwad.sdk.core.videocache.a r4 = r8.awO     // Catch: java.lang.Throwable -> L49
            long r2 = r4.DB()     // Catch: java.lang.Throwable -> L49
            com.kwad.sdk.core.videocache.l r4 = r8.awN     // Catch: java.lang.Throwable -> L49
            r4.ai(r2)     // Catch: java.lang.Throwable -> L49
            com.kwad.sdk.core.videocache.l r4 = r8.awN     // Catch: java.lang.Throwable -> L49
            long r0 = r4.length()     // Catch: java.lang.Throwable -> L49
            r4 = 8192(0x2000, float:1.148E-41)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L49
        L19:
            com.kwad.sdk.core.videocache.l r5 = r8.awN     // Catch: java.lang.Throwable -> L49
            int r5 = r5.read(r4)     // Catch: java.lang.Throwable -> L49
            r6 = -1
            if (r5 == r6) goto L42
            java.lang.Object r6 = r8.awQ     // Catch: java.lang.Throwable -> L49
            monitor-enter(r6)     // Catch: java.lang.Throwable -> L49
            boolean r7 = r8.isStopped()     // Catch: java.lang.Throwable -> L3f
            if (r7 == 0) goto L33
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L3f
        L2c:
            r8.DQ()
            r8.h(r2, r0)
            return
        L33:
            com.kwad.sdk.core.videocache.a r7 = r8.awO     // Catch: java.lang.Throwable -> L3f
            r7.d(r4, r5)     // Catch: java.lang.Throwable -> L3f
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L3f
            long r5 = (long) r5
            long r2 = r2 + r5
            r8.h(r2, r0)     // Catch: java.lang.Throwable -> L49
            goto L19
        L3f:
            r4 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L3f
            throw r4     // Catch: java.lang.Throwable -> L49
        L42:
            r8.tryComplete()     // Catch: java.lang.Throwable -> L49
            r8.DP()     // Catch: java.lang.Throwable -> L49
            goto L2c
        L49:
            r4 = move-exception
            java.util.concurrent.atomic.AtomicInteger r5 = r8.awR     // Catch: java.lang.Throwable -> L53
            r5.incrementAndGet()     // Catch: java.lang.Throwable -> L53
            onError(r4)     // Catch: java.lang.Throwable -> L53
            goto L2c
        L53:
            r4 = move-exception
            r8.DQ()
            r8.h(r2, r0)
            throw r4
    }

    private void DP() {
            r1 = this;
            r0 = 100
            r1.awT = r0
            int r0 = r1.awT
            r1.cz(r0)
            return
    }

    private void DQ() {
            r4 = this;
            com.kwad.sdk.core.videocache.l r0 = r4.awN     // Catch: com.kwad.sdk.core.videocache.ProxyCacheException -> L6
            r0.close()     // Catch: com.kwad.sdk.core.videocache.ProxyCacheException -> L6
            return
        L6:
            r0 = move-exception
            com.kwad.sdk.core.videocache.ProxyCacheException r1 = new com.kwad.sdk.core.videocache.ProxyCacheException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Error closing source "
            r2.<init>(r3)
            com.kwad.sdk.core.videocache.l r3 = r4.awN
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            onError(r1)
            return
    }

    static void a(com.kwad.sdk.core.videocache.j r0) {
            r0.DO()
            return
    }

    private void h(long r1, long r3) {
            r0 = this;
            r0.i(r1, r3)
            java.lang.Object r1 = r0.awP
            monitor-enter(r1)
            java.lang.Object r2 = r0.awP     // Catch: java.lang.Throwable -> Ld
            r2.notifyAll()     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Ld
            return
        Ld:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Ld
            throw r2
    }

    private void i(long r5, long r7) {
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
            int r6 = r4.awT
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
            r4.cz(r5)
        L29:
            r4.awT = r5
            return
    }

    private boolean isStopped() {
            r1 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            boolean r0 = r0.isInterrupted()
            if (r0 != 0) goto L11
            boolean r0 = r1.kU
            if (r0 == 0) goto Lf
            goto L11
        Lf:
            r0 = 0
            return r0
        L11:
            r0 = 1
            return r0
    }

    private static void onError(java.lang.Throwable r1) {
            boolean r1 = r1 instanceof com.kwad.sdk.core.videocache.InterruptedProxyCacheException
            java.lang.String r0 = "ProxyCache"
            if (r1 == 0) goto Lc
            java.lang.String r1 = "ProxyCache is interrupted"
            com.kwad.sdk.core.e.c.d(r0, r1)
            return
        Lc:
            java.lang.String r1 = "ProxyCache error"
            com.kwad.sdk.core.e.c.e(r0, r1)
            return
    }

    private void tryComplete() {
            r5 = this;
            java.lang.Object r0 = r5.awQ
            monitor-enter(r0)
            boolean r1 = r5.isStopped()     // Catch: java.lang.Throwable -> L20
            if (r1 != 0) goto L1e
            com.kwad.sdk.core.videocache.a r1 = r5.awO     // Catch: java.lang.Throwable -> L20
            long r1 = r1.DB()     // Catch: java.lang.Throwable -> L20
            com.kwad.sdk.core.videocache.l r3 = r5.awN     // Catch: java.lang.Throwable -> L20
            long r3 = r3.length()     // Catch: java.lang.Throwable -> L20
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L1e
            com.kwad.sdk.core.videocache.a r1 = r5.awO     // Catch: java.lang.Throwable -> L20
            r1.complete()     // Catch: java.lang.Throwable -> L20
        L1e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            return
        L20:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            throw r1
    }

    public final int a(byte[] r5, long r6, int r8) {
            r4 = this;
            r8 = 8192(0x2000, float:1.148E-41)
            com.kwad.sdk.core.videocache.k.b(r5, r6, r8)
        L5:
            com.kwad.sdk.core.videocache.a r0 = r4.awO
            boolean r0 = r0.isCompleted()
            if (r0 != 0) goto L28
            com.kwad.sdk.core.videocache.a r0 = r4.awO
            long r0 = r0.DB()
            r2 = 8192(0x2000, double:4.0474E-320)
            long r2 = r2 + r6
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L28
            boolean r0 = r4.kU
            if (r0 != 0) goto L28
            r4.DM()
            r4.DN()
            r4.DL()
            goto L5
        L28:
            com.kwad.sdk.core.videocache.a r0 = r4.awO
            int r5 = r0.a(r5, r6, r8)
            com.kwad.sdk.core.videocache.a r6 = r4.awO
            boolean r6 = r6.isCompleted()
            if (r6 == 0) goto L41
            int r6 = r4.awT
            r7 = 100
            if (r6 == r7) goto L41
            r4.awT = r7
            r4.cz(r7)
        L41:
            return r5
    }

    protected void cz(int r1) {
            r0 = this;
            return
    }

    public final void shutdown() {
            r4 = this;
            java.lang.Object r0 = r4.awQ
            monitor-enter(r0)
            java.lang.String r1 = "ProxyCache"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L30
            java.lang.String r3 = "Shutdown proxy for "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L30
            com.kwad.sdk.core.videocache.l r3 = r4.awN     // Catch: java.lang.Throwable -> L30
            r2.append(r3)     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L30
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L30
            r1 = 1
            r4.kU = r1     // Catch: com.kwad.sdk.core.videocache.ProxyCacheException -> L2a java.lang.Throwable -> L30
            java.lang.Thread r1 = r4.awS     // Catch: com.kwad.sdk.core.videocache.ProxyCacheException -> L2a java.lang.Throwable -> L30
            if (r1 == 0) goto L24
            java.lang.Thread r1 = r4.awS     // Catch: com.kwad.sdk.core.videocache.ProxyCacheException -> L2a java.lang.Throwable -> L30
            r1.interrupt()     // Catch: com.kwad.sdk.core.videocache.ProxyCacheException -> L2a java.lang.Throwable -> L30
        L24:
            com.kwad.sdk.core.videocache.a r1 = r4.awO     // Catch: com.kwad.sdk.core.videocache.ProxyCacheException -> L2a java.lang.Throwable -> L30
            r1.close()     // Catch: com.kwad.sdk.core.videocache.ProxyCacheException -> L2a java.lang.Throwable -> L30
            goto L2e
        L2a:
            r1 = move-exception
            onError(r1)     // Catch: java.lang.Throwable -> L30
        L2e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return
        L30:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            throw r1
    }
}
