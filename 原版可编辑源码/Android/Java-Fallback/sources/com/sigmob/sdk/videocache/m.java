package com.sigmob.sdk.videocache;

class m {
    private static final java.lang.String a = "ping";
    private static final java.lang.String b = "ping ok";
    private final java.util.concurrent.ExecutorService c;
    private final java.lang.String d;
    private final int e;

    static class 1 {
    }

    private class a implements java.util.concurrent.Callable<java.lang.Boolean> {
        final com.sigmob.sdk.videocache.m a;

        private a(com.sigmob.sdk.videocache.m r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        a(com.sigmob.sdk.videocache.m r1, com.sigmob.sdk.videocache.m.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public java.lang.Boolean a() throws java.lang.Exception {
                r1 = this;
                com.sigmob.sdk.videocache.m r0 = r1.a
                boolean r0 = com.sigmob.sdk.videocache.m.a(r0)
                java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
                return r0
        }

        @Override
        public java.lang.Boolean call() throws java.lang.Exception {
                r1 = this;
                java.lang.Boolean r0 = r1.a()
                return r0
        }
    }

    m(java.lang.String r2, int r3) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            r1.c = r0
            java.lang.Object r2 = com.sigmob.sdk.videocache.n.a(r2)
            java.lang.String r2 = (java.lang.String) r2
            r1.d = r2
            r1.e = r3
            return
    }

    private java.util.List<java.net.Proxy> a() {
            r3 = this;
            java.net.ProxySelector r0 = java.net.ProxySelector.getDefault()     // Catch: java.net.URISyntaxException -> L12
            java.net.URI r1 = new java.net.URI     // Catch: java.net.URISyntaxException -> L12
            java.lang.String r2 = r3.c()     // Catch: java.net.URISyntaxException -> L12
            r1.<init>(r2)     // Catch: java.net.URISyntaxException -> L12
            java.util.List r0 = r0.select(r1)     // Catch: java.net.URISyntaxException -> L12
            return r0
        L12:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            r1.<init>(r0)
            throw r1
    }

    static boolean a(com.sigmob.sdk.videocache.m r0) throws com.sigmob.sdk.videocache.p {
            boolean r0 = r0.b()
            return r0
    }

    private boolean b() throws com.sigmob.sdk.videocache.p {
            r5 = this;
            java.lang.String r0 = r5.c()
            com.sigmob.sdk.videocache.j r1 = new com.sigmob.sdk.videocache.j
            r1.<init>(r0)
            java.lang.String r0 = "ping ok"
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            r2 = 0
            r1.a(r2)     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            int r2 = r0.length     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            byte[] r2 = new byte[r2]     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            r1.a(r2)     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            boolean r0 = java.util.Arrays.equals(r0, r2)     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            r3.<init>()     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            java.lang.String r4 = "Ping response: `"
            r3.append(r4)     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            r3.append(r4)     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            java.lang.String r2 = "`, pinged? "
            r3.append(r2)     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            r3.append(r0)     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            com.czhj.sdk.logger.SigmobLog.i(r2)     // Catch: java.lang.Throwable -> L43 com.sigmob.sdk.videocache.p -> L45
            r1.b()
            return r0
        L43:
            r0 = move-exception
            goto L50
        L45:
            r0 = move-exception
            java.lang.String r2 = "Error reading ping response"
            com.czhj.sdk.logger.SigmobLog.e(r2, r0)     // Catch: java.lang.Throwable -> L43
            r0 = 0
            r1.b()
            return r0
        L50:
            r1.b()
            throw r0
    }

    private java.lang.String c() {
            r4 = this;
            java.util.Locale r0 = java.util.Locale.US
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = r4.d
            r3 = 0
            r1[r3] = r2
            int r2 = r4.e
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3 = 1
            r1[r3] = r2
            r2 = 2
            java.lang.String r3 = "ping"
            r1[r2] = r3
            java.lang.String r2 = "http://%s:%d/%s"
            java.lang.String r0 = java.lang.String.format(r0, r2, r1)
            return r0
    }

    void a(java.net.Socket r2) throws java.io.IOException {
            r1 = this;
            java.io.OutputStream r2 = r2.getOutputStream()
            java.lang.String r0 = "HTTP/1.1 200 OK\n\n"
            byte[] r0 = r0.getBytes()
            r2.write(r0)
            java.lang.String r0 = "ping ok"
            byte[] r0 = r0.getBytes()
            r2.write(r0)
            return
    }

    boolean a(int r8, int r9) {
            r7 = this;
            r0 = 0
            r1 = 1
            if (r8 < r1) goto L6
            r2 = r1
            goto L7
        L6:
            r2 = r0
        L7:
            com.sigmob.sdk.videocache.n.a(r2)
            if (r9 <= 0) goto Le
            r2 = r1
            goto Lf
        Le:
            r2 = r0
        Lf:
            com.sigmob.sdk.videocache.n.a(r2)
            r2 = r0
        L13:
            if (r2 >= r8) goto L60
            java.util.concurrent.ExecutorService r3 = r7.c     // Catch: java.util.concurrent.ExecutionException -> L31 java.lang.InterruptedException -> L33 java.util.concurrent.TimeoutException -> L3a
            com.sigmob.sdk.videocache.m$a r4 = new com.sigmob.sdk.videocache.m$a     // Catch: java.util.concurrent.ExecutionException -> L31 java.lang.InterruptedException -> L33 java.util.concurrent.TimeoutException -> L3a
            r5 = 0
            r4.<init>(r7, r5)     // Catch: java.util.concurrent.ExecutionException -> L31 java.lang.InterruptedException -> L33 java.util.concurrent.TimeoutException -> L3a
            java.util.concurrent.Future r3 = r3.submit(r4)     // Catch: java.util.concurrent.ExecutionException -> L31 java.lang.InterruptedException -> L33 java.util.concurrent.TimeoutException -> L3a
            long r4 = (long) r9     // Catch: java.util.concurrent.ExecutionException -> L31 java.lang.InterruptedException -> L33 java.util.concurrent.TimeoutException -> L3a
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.util.concurrent.ExecutionException -> L31 java.lang.InterruptedException -> L33 java.util.concurrent.TimeoutException -> L3a
            java.lang.Object r3 = r3.get(r4, r6)     // Catch: java.util.concurrent.ExecutionException -> L31 java.lang.InterruptedException -> L33 java.util.concurrent.TimeoutException -> L3a
            java.lang.Boolean r3 = (java.lang.Boolean) r3     // Catch: java.util.concurrent.ExecutionException -> L31 java.lang.InterruptedException -> L33 java.util.concurrent.TimeoutException -> L3a
            boolean r3 = r3.booleanValue()     // Catch: java.util.concurrent.ExecutionException -> L31 java.lang.InterruptedException -> L33 java.util.concurrent.TimeoutException -> L3a
            if (r3 == 0) goto L5b
            return r1
        L31:
            r3 = move-exception
            goto L34
        L33:
            r3 = move-exception
        L34:
            java.lang.String r4 = "Error pinging server due to unexpected error"
            com.czhj.sdk.logger.SigmobLog.w(r4, r3)
            goto L5b
        L3a:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Error pinging server (attempt: "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r4 = ", timeout: "
            r3.append(r4)
            r3.append(r9)
            java.lang.String r4 = "). "
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.czhj.sdk.logger.SigmobLog.w(r3)
        L5b:
            int r2 = r2 + 1
            int r9 = r9 * 2
            goto L13
        L60:
            java.util.Locale r8 = java.util.Locale.US
            r3 = 3
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3[r0] = r2
            r2 = 2
            int r9 = r9 / r2
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)
            r3[r1] = r9
            java.util.List r9 = r7.a()
            r3[r2] = r9
            java.lang.String r9 = "Error pinging server (attempts: %d, max timeout: %d). If you see this message, please, report at https://github.com/danikula/AndroidVideoCache/issues/134. Default proxies are: %s"
            java.lang.String r8 = java.lang.String.format(r8, r9, r3)
            com.sigmob.sdk.videocache.p r9 = new com.sigmob.sdk.videocache.p
            r9.<init>(r8)
            com.czhj.sdk.logger.SigmobLog.e(r8, r9)
            return r0
    }

    boolean a(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "ping"
            boolean r2 = r0.equals(r2)
            return r2
    }
}
