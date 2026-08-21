package com.kwad.sdk.core.videocache;

public final class f {
    private final java.lang.Object awt;
    private final java.util.concurrent.ExecutorService awu;
    private final java.util.Map<java.lang.String, com.kwad.sdk.core.videocache.g> awv;
    private final java.net.ServerSocket aww;
    private final java.lang.Thread awx;
    private final com.kwad.sdk.core.videocache.c awy;
    private final int port;

    public static final class a {
        private java.io.File awh;
        private com.kwad.sdk.core.videocache.a.c awi;
        private com.kwad.sdk.core.videocache.a.a awj;
        private com.kwad.sdk.core.videocache.d.b awk;
        private com.kwad.sdk.core.videocache.b.b awl;

        public a(android.content.Context r3) {
                r2 = this;
                r2.<init>()
                com.kwad.sdk.core.videocache.d.b r0 = com.kwad.sdk.core.videocache.d.c.bl(r3)
                r2.awk = r0
                java.io.File r3 = com.kwad.sdk.core.videocache.n.bi(r3)
                r2.awh = r3
                com.kwad.sdk.core.videocache.a.g r3 = new com.kwad.sdk.core.videocache.a.g
                r0 = 536870912(0x20000000, double:2.65249474E-315)
                r3.<init>(r0)
                r2.awj = r3
                com.kwad.sdk.core.videocache.a.f r3 = new com.kwad.sdk.core.videocache.a.f
                r3.<init>()
                r2.awi = r3
                com.kwad.sdk.core.videocache.b.a r3 = new com.kwad.sdk.core.videocache.b.a
                r3.<init>()
                r2.awl = r3
                return
        }

        private com.kwad.sdk.core.videocache.c DF() {
                r7 = this;
                com.kwad.sdk.core.videocache.c r6 = new com.kwad.sdk.core.videocache.c
                java.io.File r1 = r7.awh
                com.kwad.sdk.core.videocache.a.c r2 = r7.awi
                com.kwad.sdk.core.videocache.a.a r3 = r7.awj
                com.kwad.sdk.core.videocache.d.b r4 = r7.awk
                com.kwad.sdk.core.videocache.b.b r5 = r7.awl
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                return r6
        }

        public final com.kwad.sdk.core.videocache.f DE() {
                r3 = this;
                com.kwad.sdk.core.videocache.c r0 = r3.DF()
                com.kwad.sdk.core.videocache.f r1 = new com.kwad.sdk.core.videocache.f
                r2 = 0
                r1.<init>(r0, r2)
                return r1
        }

        public final com.kwad.sdk.core.videocache.f.a ah(long r3) {
                r2 = this;
                com.kwad.sdk.core.videocache.a.g r3 = new com.kwad.sdk.core.videocache.a.g
                r0 = 104857600(0x6400000, double:5.1806538E-316)
                r3.<init>(r0)
                r2.awj = r3
                return r2
        }
    }

    final class b implements java.lang.Runnable {
        final com.kwad.sdk.core.videocache.f awA;
        private final java.net.Socket awz;

        public b(com.kwad.sdk.core.videocache.f r1, java.net.Socket r2) {
                r0 = this;
                r0.awA = r1
                r0.<init>()
                r0.awz = r2
                return
        }

        @Override
        public final void run() {
                r2 = this;
                java.lang.String r0 = "HttpProxyCacheServer"
                java.lang.String r1 = "schedule SocketProcessorRunnable run"
                com.kwad.sdk.core.e.c.d(r0, r1)
                com.kwad.sdk.core.videocache.f r0 = r2.awA
                java.net.Socket r1 = r2.awz
                com.kwad.sdk.core.videocache.f.a(r0, r1)
                return
        }
    }

    final class c implements java.lang.Runnable {
        final com.kwad.sdk.core.videocache.f awA;
        private final java.util.concurrent.CountDownLatch awB;

        public c(com.kwad.sdk.core.videocache.f r1, java.util.concurrent.CountDownLatch r2) {
                r0 = this;
                r0.awA = r1
                r0.<init>()
                r0.awB = r2
                return
        }

        @Override
        public final void run() {
                r1 = this;
                java.util.concurrent.CountDownLatch r0 = r1.awB     // Catch: java.lang.Throwable -> Lb
                r0.countDown()     // Catch: java.lang.Throwable -> Lb
                com.kwad.sdk.core.videocache.f r0 = r1.awA     // Catch: java.lang.Throwable -> Lb
                com.kwad.sdk.core.videocache.f.a(r0)     // Catch: java.lang.Throwable -> Lb
                return
            Lb:
                r0 = move-exception
                com.kwad.sdk.core.e.c.printStackTrace(r0)
                return
        }
    }

    private f(com.kwad.sdk.core.videocache.c r5) {
            r4 = this;
            java.lang.String r0 = "127.0.0.1"
            r4.<init>()
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r4.awt = r1
            java.util.concurrent.ExecutorService r1 = com.kwad.sdk.core.threads.GlobalThreadPools.CX()
            r4.awu = r1
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r1.<init>()
            r4.awv = r1
            java.lang.Object r5 = com.kwad.sdk.utils.ao.checkNotNull(r5)
            com.kwad.sdk.core.videocache.c r5 = (com.kwad.sdk.core.videocache.c) r5
            r4.awy = r5
            java.net.InetAddress r5 = java.net.InetAddress.getByName(r0)     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            java.net.ServerSocket r1 = new java.net.ServerSocket     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            r2 = 0
            r3 = 8
            r1.<init>(r2, r3, r5)     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            r4.aww = r1     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            int r5 = r1.getLocalPort()     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            r4.port = r5     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            com.kwad.sdk.core.videocache.i.install(r0, r5)     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            java.util.concurrent.CountDownLatch r5 = new java.util.concurrent.CountDownLatch     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            r0 = 1
            r5.<init>(r0)     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            com.kwad.sdk.core.videocache.f$c r1 = new com.kwad.sdk.core.videocache.f$c     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            r1.<init>(r4, r5)     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            r0.<init>(r1)     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            r4.awx = r0     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            r0.start()     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            r5.await()     // Catch: java.lang.InterruptedException -> L51 java.io.IOException -> L53
            return
        L51:
            r5 = move-exception
            goto L54
        L53:
            r5 = move-exception
        L54:
            java.util.concurrent.ExecutorService r0 = r4.awu
            r0.shutdown()
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Error starting local proxy server"
            r0.<init>(r1, r5)
            throw r0
    }

    f(com.kwad.sdk.core.videocache.c r1, byte r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private void DC() {
            r4 = this;
        L0:
            java.lang.Thread r0 = java.lang.Thread.currentThread()     // Catch: java.io.IOException -> L2f
            boolean r0 = r0.isInterrupted()     // Catch: java.io.IOException -> L2f
            if (r0 != 0) goto L2e
            java.net.ServerSocket r0 = r4.aww     // Catch: java.io.IOException -> L2f
            java.net.Socket r0 = r0.accept()     // Catch: java.io.IOException -> L2f
            java.lang.String r1 = "HttpProxyCacheServer"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L2f
            java.lang.String r3 = "Accept new socket "
            r2.<init>(r3)     // Catch: java.io.IOException -> L2f
            r2.append(r0)     // Catch: java.io.IOException -> L2f
            java.lang.String r2 = r2.toString()     // Catch: java.io.IOException -> L2f
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.io.IOException -> L2f
            java.util.concurrent.ExecutorService r1 = r4.awu     // Catch: java.io.IOException -> L2f
            com.kwad.sdk.core.videocache.f$b r2 = new com.kwad.sdk.core.videocache.f$b     // Catch: java.io.IOException -> L2f
            r2.<init>(r4, r0)     // Catch: java.io.IOException -> L2f
            r1.submit(r2)     // Catch: java.io.IOException -> L2f
            goto L0
        L2e:
            return
        L2f:
            r0 = move-exception
            com.kwad.sdk.core.videocache.ProxyCacheException r1 = new com.kwad.sdk.core.videocache.ProxyCacheException
            java.lang.String r2 = "Error during waiting connection"
            r1.<init>(r2, r0)
            onError(r1)
            return
    }

    private int DD() {
            r4 = this;
            java.lang.Object r0 = r4.awt
            monitor-enter(r0)
            r1 = 0
            java.util.Map<java.lang.String, com.kwad.sdk.core.videocache.g> r2 = r4.awv     // Catch: java.lang.Throwable -> L22
            java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> L22
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L22
        Le:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L22
            if (r3 == 0) goto L20
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L22
            com.kwad.sdk.core.videocache.g r3 = (com.kwad.sdk.core.videocache.g) r3     // Catch: java.lang.Throwable -> L22
            int r3 = r3.DD()     // Catch: java.lang.Throwable -> L22
            int r1 = r1 + r3
            goto Le
        L20:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            return r1
        L22:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            throw r1
    }

    private java.io.File X(java.lang.String r3) {
            r2 = this;
            com.kwad.sdk.core.videocache.c r0 = r2.awy
            java.io.File r0 = r0.awh
            com.kwad.sdk.core.videocache.c r1 = r2.awy
            com.kwad.sdk.core.videocache.a.c r1 = r1.awi
            java.lang.String r3 = r1.generate(r3)
            java.io.File r1 = new java.io.File
            r1.<init>(r0, r3)
            return r1
    }

    static void a(com.kwad.sdk.core.videocache.f r0) {
            r0.DC()
            return
    }

    static void a(com.kwad.sdk.core.videocache.f r0, java.net.Socket r1) {
            r0.a(r1)
            return
    }

    private void a(java.net.Socket r6) {
            r5 = this;
            java.lang.String r0 = "Opened connections: "
            java.lang.String r1 = "HttpProxyCacheServer"
            java.io.InputStream r2 = r6.getInputStream()     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43 com.kwad.sdk.core.videocache.ProxyCacheException -> L45 java.net.SocketException -> L59
            com.kwad.sdk.core.videocache.d r2 = com.kwad.sdk.core.videocache.d.b(r2)     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43 com.kwad.sdk.core.videocache.ProxyCacheException -> L45 java.net.SocketException -> L59
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43 com.kwad.sdk.core.videocache.ProxyCacheException -> L45 java.net.SocketException -> L59
            java.lang.String r4 = "Request to cache proxy:"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43 com.kwad.sdk.core.videocache.ProxyCacheException -> L45 java.net.SocketException -> L59
            r3.append(r2)     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43 com.kwad.sdk.core.videocache.ProxyCacheException -> L45 java.net.SocketException -> L59
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43 com.kwad.sdk.core.videocache.ProxyCacheException -> L45 java.net.SocketException -> L59
            com.kwad.sdk.core.e.c.d(r1, r3)     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43 com.kwad.sdk.core.videocache.ProxyCacheException -> L45 java.net.SocketException -> L59
            java.lang.String r3 = r2.uri     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43 com.kwad.sdk.core.videocache.ProxyCacheException -> L45 java.net.SocketException -> L59
            java.lang.String r3 = com.kwad.sdk.core.videocache.k.decode(r3)     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43 com.kwad.sdk.core.videocache.ProxyCacheException -> L45 java.net.SocketException -> L59
            com.kwad.sdk.core.videocache.g r3 = r5.dT(r3)     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43 com.kwad.sdk.core.videocache.ProxyCacheException -> L45 java.net.SocketException -> L59
            r3.a(r2, r6)     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43 com.kwad.sdk.core.videocache.ProxyCacheException -> L45 java.net.SocketException -> L59
            r5.b(r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>(r0)
        L32:
            int r0 = r5.DD()
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            com.kwad.sdk.core.e.c.d(r1, r6)
            return
        L41:
            r2 = move-exception
            goto L6b
        L43:
            r2 = move-exception
            goto L46
        L45:
            r2 = move-exception
        L46:
            com.kwad.sdk.core.videocache.ProxyCacheException r3 = new com.kwad.sdk.core.videocache.ProxyCacheException     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = "Error processing request"
            r3.<init>(r4, r2)     // Catch: java.lang.Throwable -> L41
            onError(r3)     // Catch: java.lang.Throwable -> L41
            r5.b(r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>(r0)
            goto L32
        L59:
            r2 = move-exception
            java.lang.String r3 = "Closing socket… Socket is closed by client."
            com.kwad.sdk.core.e.c.d(r1, r3)     // Catch: java.lang.Throwable -> L41
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L41
            r5.b(r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>(r0)
            goto L32
        L6b:
            r5.b(r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>(r0)
            int r0 = r5.DD()
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            com.kwad.sdk.core.e.c.d(r1, r6)
            throw r2
    }

    private void b(java.net.Socket r1) {
            r0 = this;
            r0.c(r1)
            d(r1)
            r0.e(r1)
            return
    }

    private void c(java.net.Socket r3) {
            r2 = this;
            boolean r0 = r3.isInputShutdown()     // Catch: java.io.IOException -> La java.net.SocketException -> L16
            if (r0 != 0) goto L9
            r3.shutdownInput()     // Catch: java.io.IOException -> La java.net.SocketException -> L16
        L9:
            return
        La:
            r3 = move-exception
            com.kwad.sdk.core.videocache.ProxyCacheException r0 = new com.kwad.sdk.core.videocache.ProxyCacheException
            java.lang.String r1 = "Error closing socket input stream"
            r0.<init>(r1, r3)
            onError(r0)
            return
        L16:
            java.lang.String r3 = "HttpProxyCacheServer"
            java.lang.String r0 = "Releasing input stream… Socket is closed by client."
            com.kwad.sdk.core.e.c.d(r3, r0)
            return
    }

    private static void d(java.net.Socket r1) {
            boolean r0 = r1.isOutputShutdown()     // Catch: java.io.IOException -> La
            if (r0 != 0) goto L9
            r1.shutdownOutput()     // Catch: java.io.IOException -> La
        L9:
            return
        La:
            java.lang.String r1 = "HttpProxyCacheServer"
            java.lang.String r0 = "Failed to close socket on proxy side: {}. It seems client have already closed connection."
            com.kwad.sdk.core.e.c.w(r1, r0)
            return
    }

    private boolean dO(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "Url can't be null!"
            com.kwad.sdk.utils.ao.au(r2, r0)
            java.io.File r2 = r1.X(r2)
            boolean r2 = r2.exists()
            return r2
    }

    private java.lang.String dR(java.lang.String r5) {
            r4 = this;
            java.util.Locale r0 = java.util.Locale.US
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r3 = "127.0.0.1"
            r1[r2] = r3
            int r2 = r4.port
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3 = 1
            r1[r3] = r2
            java.lang.String r5 = com.kwad.sdk.core.videocache.k.encode(r5)
            r2 = 2
            r1[r2] = r5
            java.lang.String r5 = "http://%s:%d/%s"
            java.lang.String r5 = java.lang.String.format(r0, r5, r1)
            return r5
    }

    private java.io.File dS(java.lang.String r4) {
            r3 = this;
            com.kwad.sdk.core.videocache.c r0 = r3.awy
            java.io.File r0 = r0.awh
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.kwad.sdk.core.videocache.c r2 = r3.awy
            com.kwad.sdk.core.videocache.a.c r2 = r2.awi
            java.lang.String r4 = r2.generate(r4)
            r1.append(r4)
            java.lang.String r4 = ".download"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.io.File r1 = new java.io.File
            r1.<init>(r0, r4)
            return r1
    }

    private com.kwad.sdk.core.videocache.g dT(java.lang.String r4) {
            r3 = this;
            java.lang.Object r0 = r3.awt
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.kwad.sdk.core.videocache.g> r1 = r3.awv     // Catch: java.lang.Throwable -> L1b
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L1b
            com.kwad.sdk.core.videocache.g r1 = (com.kwad.sdk.core.videocache.g) r1     // Catch: java.lang.Throwable -> L1b
            if (r1 != 0) goto L19
            com.kwad.sdk.core.videocache.g r1 = new com.kwad.sdk.core.videocache.g     // Catch: java.lang.Throwable -> L1b
            com.kwad.sdk.core.videocache.c r2 = r3.awy     // Catch: java.lang.Throwable -> L1b
            r1.<init>(r4, r2)     // Catch: java.lang.Throwable -> L1b
            java.util.Map<java.lang.String, com.kwad.sdk.core.videocache.g> r2 = r3.awv     // Catch: java.lang.Throwable -> L1b
            r2.put(r4, r1)     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            return r1
        L1b:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            throw r4
    }

    private java.lang.String e(java.lang.String r1, boolean r2) {
            r0 = this;
            java.io.File r2 = r0.X(r1)
            boolean r2 = r2.exists()
            if (r2 == 0) goto L1a
            java.io.File r1 = r0.X(r1)
            r0.r(r1)
            android.net.Uri r1 = android.net.Uri.fromFile(r1)
            java.lang.String r1 = r1.toString()
            return r1
        L1a:
            java.lang.String r1 = r0.dR(r1)
            return r1
    }

    private void e(java.net.Socket r3) {
            r2 = this;
            boolean r0 = r3.isClosed()     // Catch: java.io.IOException -> La
            if (r0 != 0) goto L9
            r3.close()     // Catch: java.io.IOException -> La
        L9:
            return
        La:
            r3 = move-exception
            com.kwad.sdk.core.videocache.ProxyCacheException r0 = new com.kwad.sdk.core.videocache.ProxyCacheException
            java.lang.String r1 = "Error closing socket"
            r0.<init>(r1, r3)
            onError(r0)
            return
    }

    private static void onError(java.lang.Throwable r0) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            return
    }

    private void r(java.io.File r3) {
            r2 = this;
            com.kwad.sdk.core.videocache.c r0 = r2.awy     // Catch: java.io.IOException -> L8
            com.kwad.sdk.core.videocache.a.a r0 = r0.awj     // Catch: java.io.IOException -> L8
            r0.s(r3)     // Catch: java.io.IOException -> L8
            return
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Error touching file "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "HttpProxyCacheServer"
            com.kwad.sdk.core.e.c.e(r0, r3)
            return
    }

    public final boolean a(java.lang.String r3, int r4, com.kwad.sdk.core.network.a.a.a r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "preloadSync preloadUrl "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HttpProxyCacheServer"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = r2.dO(r3)
            if (r0 == 0) goto L1b
            r3 = 1
            return r3
        L1b:
            java.lang.String r3 = r2.dR(r3)
            r0 = 0
            boolean r3 = com.kwad.sdk.core.network.a.a.a(r3, r0, r5, r4)
            return r3
    }

    public final java.lang.String dN(java.lang.String r2) {
            r1 = this;
            r0 = 1
            java.lang.String r2 = r1.e(r2, r0)
            return r2
    }

    public final boolean dP(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "Url can't be null!"
            com.kwad.sdk.utils.ao.au(r2, r0)
            java.io.File r0 = r1.dS(r2)
            boolean r0 = r0.exists()
            if (r0 != 0) goto L1c
            java.io.File r2 = r1.X(r2)
            boolean r2 = r2.exists()
            if (r2 == 0) goto L1a
            goto L1c
        L1a:
            r2 = 0
            return r2
        L1c:
            r2 = 1
            return r2
    }

    public final boolean dQ(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.kwad.sdk.core.videocache.g> r0 = r1.awv
            java.lang.Object r0 = r0.get(r2)
            com.kwad.sdk.core.videocache.g r0 = (com.kwad.sdk.core.videocache.g) r0
            if (r0 == 0) goto L14
            r0.shutdown()
            java.util.Map<java.lang.String, com.kwad.sdk.core.videocache.g> r0 = r1.awv
            r0.remove(r2)
            r2 = 1
            return r2
        L14:
            r2 = 0
            return r2
    }
}
