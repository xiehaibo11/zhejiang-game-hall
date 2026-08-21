package com.sigmob.sdk.videocache;

final class i {
    private final java.util.concurrent.atomic.AtomicInteger a;
    private final java.lang.String b;
    private volatile com.sigmob.sdk.videocache.g c;
    private final java.util.List<com.sigmob.sdk.videocache.d> d;
    private final com.sigmob.sdk.videocache.d e;
    private final com.sigmob.sdk.videocache.e f;

    private static final class a extends android.os.Handler implements com.sigmob.sdk.videocache.d {
        private final java.lang.String a;
        private final java.util.List<com.sigmob.sdk.videocache.d> b;

        public a(java.lang.String r2, java.util.List<com.sigmob.sdk.videocache.d> r3) {
                r1 = this;
                android.os.Looper r0 = android.os.Looper.getMainLooper()
                r1.<init>(r0)
                r1.a = r2
                r1.b = r3
                return
        }

        @Override
        public void a(java.io.File r1, java.lang.String r2, int r3) {
                r0 = this;
                android.os.Message r2 = r0.obtainMessage()
                r2.arg1 = r3
                r2.obj = r1
                r0.sendMessage(r2)
                return
        }

        @Override
        public void handleMessage(android.os.Message r6) {
                r5 = this;
                java.util.List<com.sigmob.sdk.videocache.d> r0 = r5.b
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1e
                java.lang.Object r1 = r0.next()
                com.sigmob.sdk.videocache.d r1 = (com.sigmob.sdk.videocache.d) r1
                java.lang.Object r2 = r6.obj
                java.io.File r2 = (java.io.File) r2
                java.lang.String r3 = r5.a
                int r4 = r6.arg1
                r1.a(r2, r3, r4)
                goto L6
            L1e:
                return
        }
    }

    public i(java.lang.String r3, com.sigmob.sdk.videocache.e r4) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 0
            r0.<init>(r1)
            r2.a = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.d = r0
            java.lang.Object r0 = com.sigmob.sdk.videocache.n.a(r3)
            java.lang.String r0 = (java.lang.String) r0
            r2.b = r0
            java.lang.Object r4 = com.sigmob.sdk.videocache.n.a(r4)
            com.sigmob.sdk.videocache.e r4 = (com.sigmob.sdk.videocache.e) r4
            r2.f = r4
            com.sigmob.sdk.videocache.i$a r4 = new com.sigmob.sdk.videocache.i$a
            java.util.List<com.sigmob.sdk.videocache.d> r0 = r2.d
            r4.<init>(r3, r0)
            r2.e = r4
            return
    }

    private synchronized void c() throws com.sigmob.sdk.videocache.p {
            r1 = this;
            monitor-enter(r1)
            com.sigmob.sdk.videocache.g r0 = r1.c     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto La
            com.sigmob.sdk.videocache.g r0 = r1.e()     // Catch: java.lang.Throwable -> L10
            goto Lc
        La:
            com.sigmob.sdk.videocache.g r0 = r1.c     // Catch: java.lang.Throwable -> L10
        Lc:
            r1.c = r0     // Catch: java.lang.Throwable -> L10
            monitor-exit(r1)
            return
        L10:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    private synchronized void d() {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.atomic.AtomicInteger r0 = r1.a     // Catch: java.lang.Throwable -> L13
            int r0 = r0.decrementAndGet()     // Catch: java.lang.Throwable -> L13
            if (r0 > 0) goto L11
            com.sigmob.sdk.videocache.g r0 = r1.c     // Catch: java.lang.Throwable -> L13
            r0.a()     // Catch: java.lang.Throwable -> L13
            r0 = 0
            r1.c = r0     // Catch: java.lang.Throwable -> L13
        L11:
            monitor-exit(r1)
            return
        L13:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    private com.sigmob.sdk.videocache.g e() throws com.sigmob.sdk.videocache.p {
            r4 = this;
            com.sigmob.sdk.videocache.j r0 = new com.sigmob.sdk.videocache.j
            java.lang.String r1 = r4.b
            com.sigmob.sdk.videocache.e r2 = r4.f
            com.sigmob.sdk.videocache.sourcestorage.c r2 = r2.d
            com.sigmob.sdk.videocache.e r3 = r4.f
            com.sigmob.sdk.videocache.headers.b r3 = r3.e
            r0.<init>(r1, r2, r3)
            com.sigmob.sdk.videocache.file.b r1 = new com.sigmob.sdk.videocache.file.b
            com.sigmob.sdk.videocache.e r2 = r4.f
            java.lang.String r3 = r4.b
            java.io.File r2 = r2.a(r3)
            com.sigmob.sdk.videocache.e r3 = r4.f
            com.sigmob.sdk.videocache.file.a r3 = r3.c
            r1.<init>(r2, r3)
            com.sigmob.sdk.videocache.g r2 = new com.sigmob.sdk.videocache.g
            r2.<init>(r0, r1)
            com.sigmob.sdk.videocache.d r0 = r4.e
            r2.a(r0)
            return r2
    }

    public void a() {
            r2 = this;
            java.util.List<com.sigmob.sdk.videocache.d> r0 = r2.d
            r0.clear()
            com.sigmob.sdk.videocache.g r0 = r2.c
            if (r0 == 0) goto L16
            com.sigmob.sdk.videocache.g r0 = r2.c
            r1 = 0
            r0.a(r1)
            com.sigmob.sdk.videocache.g r0 = r2.c
            r0.a()
            r2.c = r1
        L16:
            java.util.concurrent.atomic.AtomicInteger r0 = r2.a
            r1 = 0
            r0.set(r1)
            return
    }

    public void a(com.sigmob.sdk.videocache.d r2) {
            r1 = this;
            java.util.List<com.sigmob.sdk.videocache.d> r0 = r1.d
            r0.add(r2)
            return
    }

    public void a(com.sigmob.sdk.videocache.f r2, java.net.Socket r3) throws com.sigmob.sdk.videocache.p, java.io.IOException {
            r1 = this;
            r1.c()
            java.util.concurrent.atomic.AtomicInteger r0 = r1.a     // Catch: java.lang.Throwable -> Le
            r0.incrementAndGet()     // Catch: java.lang.Throwable -> Le
            com.sigmob.sdk.videocache.g r0 = r1.c     // Catch: java.lang.Throwable -> Le
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> Le
            goto L14
        Le:
            r2 = move-exception
            java.lang.String r3 = "processRequest error:"
            com.czhj.sdk.logger.SigmobLog.e(r3, r2)     // Catch: java.lang.Throwable -> L18
        L14:
            r1.d()
            return
        L18:
            r2 = move-exception
            r1.d()
            throw r2
    }

    public int b() {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.a
            int r0 = r0.get()
            return r0
    }

    public void b(com.sigmob.sdk.videocache.d r2) {
            r1 = this;
            java.util.List<com.sigmob.sdk.videocache.d> r0 = r1.d
            r0.remove(r2)
            return
    }
}
