package com.kwad.sdk.core.videocache;

final class g {
    private final java.util.concurrent.atomic.AtomicInteger awC;
    private volatile com.kwad.sdk.core.videocache.e awD;
    private final java.util.List<com.kwad.sdk.core.videocache.b> awE;
    private final com.kwad.sdk.core.videocache.b awF;
    private final com.kwad.sdk.core.videocache.c awy;
    private final java.lang.String url;

    static final class a extends android.os.Handler implements com.kwad.sdk.core.videocache.b {
        private final java.util.List<com.kwad.sdk.core.videocache.b> awE;
        private final java.lang.String url;

        public a(java.lang.String r2, java.util.List<com.kwad.sdk.core.videocache.b> r3) {
                r1 = this;
                android.os.Looper r0 = android.os.Looper.getMainLooper()
                r1.<init>(r0)
                r1.url = r2
                r1.awE = r3
                return
        }

        @Override
        public final void a(java.io.File r2, int r3) {
                r1 = this;
                android.os.Message r0 = r1.obtainMessage()
                r0.arg1 = r3
                r0.obj = r2
                r1.sendMessage(r0)
                return
        }

        @Override
        public final void handleMessage(android.os.Message r5) {
                r4 = this;
                java.util.List<com.kwad.sdk.core.videocache.b> r0 = r4.awE
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1c
                java.lang.Object r1 = r0.next()
                com.kwad.sdk.core.videocache.b r1 = (com.kwad.sdk.core.videocache.b) r1
                java.lang.Object r2 = r5.obj
                java.io.File r2 = (java.io.File) r2
                int r3 = r5.arg1
                r1.a(r2, r3)
                goto L6
            L1c:
                return
        }
    }

    public g(java.lang.String r3, com.kwad.sdk.core.videocache.c r4) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 0
            r0.<init>(r1)
            r2.awC = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.awE = r0
            java.lang.String r0 = com.kwad.sdk.utils.ao.fE(r3)
            r2.url = r0
            java.lang.Object r4 = com.kwad.sdk.utils.ao.checkNotNull(r4)
            com.kwad.sdk.core.videocache.c r4 = (com.kwad.sdk.core.videocache.c) r4
            r2.awy = r4
            com.kwad.sdk.core.videocache.g$a r4 = new com.kwad.sdk.core.videocache.g$a
            java.util.List<com.kwad.sdk.core.videocache.b> r0 = r2.awE
            r4.<init>(r3, r0)
            r2.awF = r4
            return
    }

    private synchronized void DG() {
            r1 = this;
            monitor-enter(r1)
            com.kwad.sdk.core.videocache.e r0 = r1.awD     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto La
            com.kwad.sdk.core.videocache.e r0 = r1.DI()     // Catch: java.lang.Throwable -> L10
            goto Lc
        La:
            com.kwad.sdk.core.videocache.e r0 = r1.awD     // Catch: java.lang.Throwable -> L10
        Lc:
            r1.awD = r0     // Catch: java.lang.Throwable -> L10
            monitor-exit(r1)
            return
        L10:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    private synchronized void DH() {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.atomic.AtomicInteger r0 = r1.awC     // Catch: java.lang.Throwable -> L13
            int r0 = r0.decrementAndGet()     // Catch: java.lang.Throwable -> L13
            if (r0 > 0) goto L11
            com.kwad.sdk.core.videocache.e r0 = r1.awD     // Catch: java.lang.Throwable -> L13
            r0.shutdown()     // Catch: java.lang.Throwable -> L13
            r0 = 0
            r1.awD = r0     // Catch: java.lang.Throwable -> L13
        L11:
            monitor-exit(r1)
            return
        L13:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    private com.kwad.sdk.core.videocache.e DI() {
            r4 = this;
            com.kwad.sdk.core.videocache.h r0 = new com.kwad.sdk.core.videocache.h
            java.lang.String r1 = r4.url
            com.kwad.sdk.core.videocache.c r2 = r4.awy
            com.kwad.sdk.core.videocache.d.b r2 = r2.awk
            com.kwad.sdk.core.videocache.c r3 = r4.awy
            com.kwad.sdk.core.videocache.b.b r3 = r3.awl
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.core.videocache.a.b r1 = new com.kwad.sdk.core.videocache.a.b
            com.kwad.sdk.core.videocache.c r2 = r4.awy
            java.lang.String r3 = r4.url
            java.io.File r2 = r2.dK(r3)
            com.kwad.sdk.core.videocache.c r3 = r4.awy
            com.kwad.sdk.core.videocache.a.a r3 = r3.awj
            r1.<init>(r2, r3)
            com.kwad.sdk.core.videocache.e r2 = new com.kwad.sdk.core.videocache.e
            r2.<init>(r0, r1)
            com.kwad.sdk.core.videocache.b r0 = r4.awF
            r2.a(r0)
            return r2
    }

    public final int DD() {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.awC
            int r0 = r0.get()
            return r0
    }

    public final void a(com.kwad.sdk.core.videocache.d r2, java.net.Socket r3) {
            r1 = this;
            r1.DG()
            java.util.concurrent.atomic.AtomicInteger r0 = r1.awC     // Catch: java.lang.Throwable -> L11
            r0.incrementAndGet()     // Catch: java.lang.Throwable -> L11
            com.kwad.sdk.core.videocache.e r0 = r1.awD     // Catch: java.lang.Throwable -> L11
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> L11
            r1.DH()
            return
        L11:
            r2 = move-exception
            r1.DH()
            throw r2
    }

    public final void shutdown() {
            r2 = this;
            java.util.List<com.kwad.sdk.core.videocache.b> r0 = r2.awE
            r0.clear()
            com.kwad.sdk.core.videocache.e r0 = r2.awD
            r1 = 0
            if (r0 == 0) goto L10
            r0.a(r1)
            r0.shutdown()
        L10:
            r2.awD = r1
            java.util.concurrent.atomic.AtomicInteger r0 = r2.awC
            r1 = 0
            r0.set(r1)
            return
    }
}
