package com.sigmob.sdk.videocache;

public class h {
    private static final java.lang.String a = "127.0.0.1";
    private final java.lang.Object b;
    private final java.util.concurrent.ExecutorService c;
    private final java.util.Map<java.lang.String, com.sigmob.sdk.videocache.i> d;
    private final java.net.ServerSocket e;
    private final int f;
    private final java.lang.Thread g;
    private final com.sigmob.sdk.videocache.e h;
    private final com.sigmob.sdk.videocache.m i;

    static class 1 {
    }

    public static final class a {
        private static final long a = 536870912;
        private java.io.File b;
        private com.sigmob.sdk.videocache.file.c c;
        private com.sigmob.sdk.videocache.file.a d;
        private com.sigmob.sdk.videocache.sourcestorage.c e;
        private com.sigmob.sdk.videocache.headers.b f;

        public a(android.content.Context r3) {
                r2 = this;
                r2.<init>()
                com.sigmob.sdk.videocache.sourcestorage.c r0 = com.sigmob.sdk.videocache.sourcestorage.d.a(r3)
                r2.e = r0
                java.io.File r3 = com.sigmob.sdk.videocache.u.a(r3)
                r2.b = r3
                com.sigmob.sdk.videocache.file.h r3 = new com.sigmob.sdk.videocache.file.h
                r0 = 536870912(0x20000000, double:2.65249474E-315)
                r3.<init>(r0)
                r2.d = r3
                com.sigmob.sdk.videocache.file.f r3 = new com.sigmob.sdk.videocache.file.f
                r3.<init>()
                r2.c = r3
                com.sigmob.sdk.videocache.headers.a r3 = new com.sigmob.sdk.videocache.headers.a
                r3.<init>()
                r2.f = r3
                return
        }

        static com.sigmob.sdk.videocache.e a(com.sigmob.sdk.videocache.h.a r0) {
                com.sigmob.sdk.videocache.e r0 = r0.b()
                return r0
        }

        private com.sigmob.sdk.videocache.e b() {
                r7 = this;
                com.sigmob.sdk.videocache.e r6 = new com.sigmob.sdk.videocache.e
                java.io.File r1 = r7.b
                com.sigmob.sdk.videocache.file.c r2 = r7.c
                com.sigmob.sdk.videocache.file.a r3 = r7.d
                com.sigmob.sdk.videocache.sourcestorage.c r4 = r7.e
                com.sigmob.sdk.videocache.headers.b r5 = r7.f
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                return r6
        }

        public com.sigmob.sdk.videocache.h.a a(int r2) {
                r1 = this;
                com.sigmob.sdk.videocache.file.g r0 = new com.sigmob.sdk.videocache.file.g
                r0.<init>(r2)
                r1.d = r0
                return r1
        }

        public com.sigmob.sdk.videocache.h.a a(long r2) {
                r1 = this;
                com.sigmob.sdk.videocache.file.h r0 = new com.sigmob.sdk.videocache.file.h
                r0.<init>(r2)
                r1.d = r0
                return r1
        }

        public com.sigmob.sdk.videocache.h.a a(com.sigmob.sdk.videocache.file.a r1) {
                r0 = this;
                java.lang.Object r1 = com.sigmob.sdk.videocache.n.a(r1)
                com.sigmob.sdk.videocache.file.a r1 = (com.sigmob.sdk.videocache.file.a) r1
                r0.d = r1
                return r0
        }

        public com.sigmob.sdk.videocache.h.a a(com.sigmob.sdk.videocache.file.c r1) {
                r0 = this;
                java.lang.Object r1 = com.sigmob.sdk.videocache.n.a(r1)
                com.sigmob.sdk.videocache.file.c r1 = (com.sigmob.sdk.videocache.file.c) r1
                r0.c = r1
                return r0
        }

        public com.sigmob.sdk.videocache.h.a a(com.sigmob.sdk.videocache.headers.b r1) {
                r0 = this;
                java.lang.Object r1 = com.sigmob.sdk.videocache.n.a(r1)
                com.sigmob.sdk.videocache.headers.b r1 = (com.sigmob.sdk.videocache.headers.b) r1
                r0.f = r1
                return r0
        }

        public com.sigmob.sdk.videocache.h.a a(java.io.File r1) {
                r0 = this;
                java.lang.Object r1 = com.sigmob.sdk.videocache.n.a(r1)
                java.io.File r1 = (java.io.File) r1
                r0.b = r1
                return r0
        }

        public com.sigmob.sdk.videocache.h a() {
                r3 = this;
                com.sigmob.sdk.videocache.e r0 = r3.b()
                com.sigmob.sdk.videocache.h r1 = new com.sigmob.sdk.videocache.h
                r2 = 0
                r1.<init>(r0, r2)
                return r1
        }
    }

    private final class b implements java.lang.Runnable {
        final com.sigmob.sdk.videocache.h a;
        private final java.net.Socket b;

        public b(com.sigmob.sdk.videocache.h r1, java.net.Socket r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        @Override
        public void run() {
                r2 = this;
                com.sigmob.sdk.videocache.h r0 = r2.a
                java.net.Socket r1 = r2.b
                com.sigmob.sdk.videocache.h.a(r0, r1)
                return
        }
    }

    private final class c implements java.lang.Runnable {
        final com.sigmob.sdk.videocache.h a;
        private final java.util.concurrent.CountDownLatch b;

        public c(com.sigmob.sdk.videocache.h r1, java.util.concurrent.CountDownLatch r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        @Override
        public void run() {
                r1 = this;
                java.util.concurrent.CountDownLatch r0 = r1.b
                r0.countDown()
                com.sigmob.sdk.videocache.h r0 = r1.a
                com.sigmob.sdk.videocache.h.a(r0)
                return
        }
    }

    public h(android.content.Context r2) {
            r1 = this;
            com.sigmob.sdk.videocache.h$a r0 = new com.sigmob.sdk.videocache.h$a
            r0.<init>(r2)
            com.sigmob.sdk.videocache.e r2 = com.sigmob.sdk.videocache.h.a.a(r0)
            r1.<init>(r2)
            return
    }

    private h(com.sigmob.sdk.videocache.e r5) {
            r4 = this;
            java.lang.String r0 = "127.0.0.1"
            r4.<init>()
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r4.b = r1
            r1 = 8
            java.util.concurrent.ExecutorService r2 = java.util.concurrent.Executors.newFixedThreadPool(r1)
            r4.c = r2
            java.util.concurrent.ConcurrentHashMap r2 = new java.util.concurrent.ConcurrentHashMap
            r2.<init>()
            r4.d = r2
            java.lang.Object r5 = com.sigmob.sdk.videocache.n.a(r5)
            com.sigmob.sdk.videocache.e r5 = (com.sigmob.sdk.videocache.e) r5
            r4.h = r5
            java.net.InetAddress r5 = java.net.InetAddress.getByName(r0)     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            java.net.ServerSocket r2 = new java.net.ServerSocket     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            r3 = 0
            r2.<init>(r3, r1, r5)     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            r4.e = r2     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            int r5 = r2.getLocalPort()     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            r4.f = r5     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            com.sigmob.sdk.videocache.k.a(r0, r5)     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            java.util.concurrent.CountDownLatch r5 = new java.util.concurrent.CountDownLatch     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            r1 = 1
            r5.<init>(r1)     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            java.lang.Thread r1 = new java.lang.Thread     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            com.sigmob.sdk.videocache.h$c r2 = new com.sigmob.sdk.videocache.h$c     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            r2.<init>(r4, r5)     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            r1.<init>(r2)     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            r4.g = r1     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            r1.start()     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            r5.await()     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            com.sigmob.sdk.videocache.m r5 = new com.sigmob.sdk.videocache.m     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            int r1 = r4.f     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            r5.<init>(r0, r1)     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            r4.i = r5     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            r5.<init>()     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            java.lang.String r0 = "Proxy cache server started. Is it alive? "
            r5.append(r0)     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            boolean r0 = r4.b()     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            r5.append(r0)     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            java.lang.String r5 = r5.toString()     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            com.czhj.sdk.logger.SigmobLog.i(r5)     // Catch: java.lang.InterruptedException -> L72 java.io.IOException -> L74
            return
        L72:
            r5 = move-exception
            goto L75
        L74:
            r5 = move-exception
        L75:
            java.util.concurrent.ExecutorService r0 = r4.c
            r0.shutdown()
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Error starting local proxy server"
            r0.<init>(r1, r5)
            throw r0
    }

    h(com.sigmob.sdk.videocache.e r1, com.sigmob.sdk.videocache.h.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static void a(com.sigmob.sdk.videocache.h r0) {
            r0.d()
            return
    }

    static void a(com.sigmob.sdk.videocache.h r0, java.net.Socket r1) {
            r0.a(r1)
            return
    }

    private void a(java.io.File r4) {
            r3 = this;
            com.sigmob.sdk.videocache.e r0 = r3.h     // Catch: java.io.IOException -> L8
            com.sigmob.sdk.videocache.file.a r0 = r0.c     // Catch: java.io.IOException -> L8
            r0.a(r4)     // Catch: java.io.IOException -> L8
            goto L1d
        L8:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Error touching file "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.e(r4, r0)
        L1d:
            return
    }

    private void a(java.lang.Throwable r2) {
            r1 = this;
            java.lang.String r0 = "HttpProxyCacheServer error"
            com.czhj.sdk.logger.SigmobLog.e(r0, r2)
            return
    }

    private void a(java.net.Socket r5) {
            r4 = this;
            java.lang.String r0 = "Opened connections: "
            java.io.InputStream r1 = r5.getInputStream()     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
            com.sigmob.sdk.videocache.f r1 = com.sigmob.sdk.videocache.f.a(r1)     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
            r2.<init>()     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
            java.lang.String r3 = "Request to cache proxy:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
            r2.append(r1)     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
            com.czhj.sdk.logger.SigmobLog.d(r2)     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
            java.lang.String r2 = r1.a     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
            java.lang.String r2 = com.sigmob.sdk.videocache.q.c(r2)     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
            com.sigmob.sdk.videocache.m r3 = r4.i     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
            boolean r3 = r3.a(r2)     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
            if (r3 == 0) goto L32
            com.sigmob.sdk.videocache.m r1 = r4.i     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
            r1.a(r5)     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
            goto L39
        L32:
            com.sigmob.sdk.videocache.i r2 = r4.f(r2)     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
            r2.a(r1, r5)     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44 com.sigmob.sdk.videocache.p -> L46 java.net.SocketException -> L5a
        L39:
            r4.b(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            goto L67
        L42:
            r1 = move-exception
            goto L79
        L44:
            r1 = move-exception
            goto L47
        L46:
            r1 = move-exception
        L47:
            com.sigmob.sdk.videocache.p r2 = new com.sigmob.sdk.videocache.p     // Catch: java.lang.Throwable -> L42
            java.lang.String r3 = "Error processing request"
            r2.<init>(r3, r1)     // Catch: java.lang.Throwable -> L42
            r4.a(r2)     // Catch: java.lang.Throwable -> L42
            r4.b(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            goto L67
        L5a:
            java.lang.String r1 = "Closing socket… Socket is closed by client."
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Throwable -> L42
            r4.b(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
        L67:
            r5.append(r0)
            int r0 = r4.e()
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            com.czhj.sdk.logger.SigmobLog.d(r5)
            return
        L79:
            r4.b(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r0)
            int r0 = r4.e()
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            com.czhj.sdk.logger.SigmobLog.d(r5)
            throw r1
    }

    private void b(java.net.Socket r1) {
            r0 = this;
            r0.c(r1)
            r0.d(r1)
            r0.e(r1)
            return
    }

    private boolean b() {
            r3 = this;
            com.sigmob.sdk.videocache.m r0 = r3.i
            r1 = 3
            r2 = 70
            boolean r0 = r0.a(r1, r2)
            return r0
    }

    private void c() {
            r3 = this;
            java.lang.Object r0 = r3.b
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.sigmob.sdk.videocache.i> r1 = r3.d     // Catch: java.lang.Throwable -> L24
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> L24
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L24
        Ld:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L24
            if (r2 == 0) goto L1d
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L24
            com.sigmob.sdk.videocache.i r2 = (com.sigmob.sdk.videocache.i) r2     // Catch: java.lang.Throwable -> L24
            r2.a()     // Catch: java.lang.Throwable -> L24
            goto Ld
        L1d:
            java.util.Map<java.lang.String, com.sigmob.sdk.videocache.i> r1 = r3.d     // Catch: java.lang.Throwable -> L24
            r1.clear()     // Catch: java.lang.Throwable -> L24
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L24
            return
        L24:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L24
            throw r1
    }

    private void c(java.net.Socket r2) {
            r1 = this;
            boolean r0 = r2.isInputShutdown()     // Catch: java.net.SocketException -> La java.io.IOException -> Lf
            if (r0 != 0) goto Lf
            r2.shutdownInput()     // Catch: java.net.SocketException -> La java.io.IOException -> Lf
            goto Lf
        La:
            java.lang.String r2 = "Releasing input stream… Socket is closed by client."
            com.czhj.sdk.logger.SigmobLog.d(r2)
        Lf:
            return
    }

    private void d() {
            r3 = this;
        L0:
            java.lang.Thread r0 = java.lang.Thread.currentThread()     // Catch: java.io.IOException -> L2f
            boolean r0 = r0.isInterrupted()     // Catch: java.io.IOException -> L2f
            if (r0 != 0) goto L3a
            java.net.ServerSocket r0 = r3.e     // Catch: java.io.IOException -> L2f
            java.net.Socket r0 = r0.accept()     // Catch: java.io.IOException -> L2f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L2f
            r1.<init>()     // Catch: java.io.IOException -> L2f
            java.lang.String r2 = "Accept new socket "
            r1.append(r2)     // Catch: java.io.IOException -> L2f
            r1.append(r0)     // Catch: java.io.IOException -> L2f
            java.lang.String r1 = r1.toString()     // Catch: java.io.IOException -> L2f
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.io.IOException -> L2f
            java.util.concurrent.ExecutorService r1 = r3.c     // Catch: java.io.IOException -> L2f
            com.sigmob.sdk.videocache.h$b r2 = new com.sigmob.sdk.videocache.h$b     // Catch: java.io.IOException -> L2f
            r2.<init>(r3, r0)     // Catch: java.io.IOException -> L2f
            r1.submit(r2)     // Catch: java.io.IOException -> L2f
            goto L0
        L2f:
            r0 = move-exception
            com.sigmob.sdk.videocache.p r1 = new com.sigmob.sdk.videocache.p
            java.lang.String r2 = "Error during waiting connection"
            r1.<init>(r2, r0)
            r3.a(r1)
        L3a:
            return
    }

    private void d(java.net.Socket r2) {
            r1 = this;
            boolean r0 = r2.isOutputShutdown()     // Catch: java.io.IOException -> L9
            if (r0 != 0) goto L9
            r2.shutdownOutput()     // Catch: java.io.IOException -> L9
        L9:
            return
    }

    private int e() {
            r4 = this;
            java.lang.Object r0 = r4.b
            monitor-enter(r0)
            r1 = 0
            java.util.Map<java.lang.String, com.sigmob.sdk.videocache.i> r2 = r4.d     // Catch: java.lang.Throwable -> L22
            java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> L22
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L22
        Le:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L22
            if (r3 == 0) goto L20
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L22
            com.sigmob.sdk.videocache.i r3 = (com.sigmob.sdk.videocache.i) r3     // Catch: java.lang.Throwable -> L22
            int r3 = r3.b()     // Catch: java.lang.Throwable -> L22
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

    private java.lang.String e(java.lang.String r5) {
            r4 = this;
            java.util.Locale r0 = java.util.Locale.US
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r3 = "127.0.0.1"
            r1[r2] = r3
            int r2 = r4.f
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3 = 1
            r1[r3] = r2
            java.lang.String r5 = com.sigmob.sdk.videocache.q.b(r5)
            r2 = 2
            r1[r2] = r5
            java.lang.String r5 = "http://%s:%d/%s"
            java.lang.String r5 = java.lang.String.format(r0, r5, r1)
            return r5
    }

    private void e(java.net.Socket r2) {
            r1 = this;
            boolean r0 = r2.isClosed()     // Catch: java.io.IOException -> L9
            if (r0 != 0) goto L9
            r2.close()     // Catch: java.io.IOException -> L9
        L9:
            return
    }

    private com.sigmob.sdk.videocache.i f(java.lang.String r4) throws com.sigmob.sdk.videocache.p {
            r3 = this;
            java.lang.Object r0 = r3.b
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.sigmob.sdk.videocache.i> r1 = r3.d     // Catch: java.lang.Throwable -> L1b
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L1b
            com.sigmob.sdk.videocache.i r1 = (com.sigmob.sdk.videocache.i) r1     // Catch: java.lang.Throwable -> L1b
            if (r1 != 0) goto L19
            com.sigmob.sdk.videocache.i r1 = new com.sigmob.sdk.videocache.i     // Catch: java.lang.Throwable -> L1b
            com.sigmob.sdk.videocache.e r2 = r3.h     // Catch: java.lang.Throwable -> L1b
            r1.<init>(r4, r2)     // Catch: java.lang.Throwable -> L1b
            java.util.Map<java.lang.String, com.sigmob.sdk.videocache.i> r2 = r3.d     // Catch: java.lang.Throwable -> L1b
            r2.put(r4, r1)     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            return r1
        L1b:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            throw r4
    }

    public java.lang.String a(java.lang.String r2) {
            r1 = this;
            r0 = 1
            java.lang.String r2 = r1.a(r2, r0)
            return r2
    }

    public java.lang.String a(java.lang.String r1, boolean r2) {
            r0 = this;
            if (r2 == 0) goto L18
            boolean r2 = r0.b(r1)
            if (r2 == 0) goto L18
            java.io.File r1 = r0.c(r1)
            r0.a(r1)
            android.net.Uri r1 = android.net.Uri.fromFile(r1)
            java.lang.String r1 = r1.toString()
            return r1
        L18:
            boolean r2 = r0.b()
            if (r2 == 0) goto L22
            java.lang.String r1 = r0.e(r1)
        L22:
            return r1
    }

    public void a() {
            r3 = this;
            java.lang.String r0 = "Shutdown proxy server"
            com.czhj.sdk.logger.SigmobLog.i(r0)
            r3.c()
            com.sigmob.sdk.videocache.e r0 = r3.h
            com.sigmob.sdk.videocache.sourcestorage.c r0 = r0.d
            r0.a()
            java.lang.Thread r0 = r3.g
            r0.interrupt()
            java.net.ServerSocket r0 = r3.e     // Catch: java.io.IOException -> L22
            boolean r0 = r0.isClosed()     // Catch: java.io.IOException -> L22
            if (r0 != 0) goto L2d
            java.net.ServerSocket r0 = r3.e     // Catch: java.io.IOException -> L22
            r0.close()     // Catch: java.io.IOException -> L22
            goto L2d
        L22:
            r0 = move-exception
            com.sigmob.sdk.videocache.p r1 = new com.sigmob.sdk.videocache.p
            java.lang.String r2 = "Error shutting down proxy server"
            r1.<init>(r2, r0)
            r3.a(r1)
        L2d:
            return
    }

    public void a(com.sigmob.sdk.videocache.d r4) {
            r3 = this;
            com.sigmob.sdk.videocache.n.a(r4)
            java.lang.Object r0 = r3.b
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.sigmob.sdk.videocache.i> r1 = r3.d     // Catch: java.lang.Throwable -> L22
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> L22
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L22
        L10:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L22
            if (r2 == 0) goto L20
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L22
            com.sigmob.sdk.videocache.i r2 = (com.sigmob.sdk.videocache.i) r2     // Catch: java.lang.Throwable -> L22
            r2.b(r4)     // Catch: java.lang.Throwable -> L22
            goto L10
        L20:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            return
        L22:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            throw r4
    }

    public void a(com.sigmob.sdk.videocache.d r3, java.lang.String r4) {
            r2 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            r1 = 1
            r0[r1] = r4
            com.sigmob.sdk.videocache.n.a(r0)
            java.lang.Object r0 = r2.b
            monitor-enter(r0)
            com.sigmob.sdk.videocache.i r4 = r2.f(r4)     // Catch: java.lang.Throwable -> L17 com.sigmob.sdk.videocache.p -> L19
            r4.a(r3)     // Catch: java.lang.Throwable -> L17 com.sigmob.sdk.videocache.p -> L19
            goto L1f
        L17:
            r3 = move-exception
            goto L21
        L19:
            r3 = move-exception
            java.lang.String r4 = "Error registering cache listener"
            com.czhj.sdk.logger.SigmobLog.w(r4, r3)     // Catch: java.lang.Throwable -> L17
        L1f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L21:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r3
    }

    public void b(com.sigmob.sdk.videocache.d r3, java.lang.String r4) {
            r2 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            r1 = 1
            r0[r1] = r4
            com.sigmob.sdk.videocache.n.a(r0)
            java.lang.Object r0 = r2.b
            monitor-enter(r0)
            com.sigmob.sdk.videocache.i r4 = r2.f(r4)     // Catch: java.lang.Throwable -> L17 com.sigmob.sdk.videocache.p -> L19
            r4.b(r3)     // Catch: java.lang.Throwable -> L17 com.sigmob.sdk.videocache.p -> L19
            goto L1f
        L17:
            r3 = move-exception
            goto L21
        L19:
            r3 = move-exception
            java.lang.String r4 = "Error registering cache listener"
            com.czhj.sdk.logger.SigmobLog.w(r4, r3)     // Catch: java.lang.Throwable -> L17
        L1f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L21:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r3
    }

    public boolean b(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "Url can't be null!"
            com.sigmob.sdk.videocache.n.a(r2, r0)
            java.io.File r2 = r1.c(r2)
            boolean r2 = r2.exists()
            return r2
    }

    public java.io.File c(java.lang.String r3) {
            r2 = this;
            com.sigmob.sdk.videocache.e r0 = r2.h
            java.io.File r0 = r0.a
            com.sigmob.sdk.videocache.e r1 = r2.h
            com.sigmob.sdk.videocache.file.c r1 = r1.b
            java.lang.String r3 = r1.a(r3)
            java.io.File r1 = new java.io.File
            r1.<init>(r0, r3)
            return r1
    }

    public void d(java.lang.String r3) {
            r2 = this;
            java.lang.Object r0 = r2.b
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.sigmob.sdk.videocache.i> r1 = r2.d     // Catch: java.lang.Throwable -> L12
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L12
            com.sigmob.sdk.videocache.i r3 = (com.sigmob.sdk.videocache.i) r3     // Catch: java.lang.Throwable -> L12
            if (r3 == 0) goto L10
            r3.a()     // Catch: java.lang.Throwable -> L12
        L10:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r3
    }
}
