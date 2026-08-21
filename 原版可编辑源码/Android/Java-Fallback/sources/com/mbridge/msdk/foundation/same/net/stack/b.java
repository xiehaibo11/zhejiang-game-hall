package com.mbridge.msdk.foundation.same.net.stack;

public final class b {
    private com.mbridge.msdk.thrid.okhttp.OkHttpClient a;
    private com.mbridge.msdk.c.a b;
    private java.lang.String c;




    private static final class a {
        private static final com.mbridge.msdk.foundation.same.net.stack.b a = null;

        static {
                com.mbridge.msdk.foundation.same.net.stack.b r0 = new com.mbridge.msdk.foundation.same.net.stack.b
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.same.net.stack.b.a.a = r0
                return
        }

        static com.mbridge.msdk.foundation.same.net.stack.b a() {
                com.mbridge.msdk.foundation.same.net.stack.b r0 = com.mbridge.msdk.foundation.same.net.stack.b.a.a
                return r0
        }
    }

    public static class b implements java.io.Serializable {
        public int a;
        public long b;
        public java.lang.String c;
        public java.lang.String d;
        public java.lang.String e;
        public java.lang.String f;
        public long g;
        public java.lang.String h;
        public long i;
        public java.lang.String j;
        public long k;

        public b() {
                r3 = this;
                r3.<init>()
                r0 = 0
                r3.b = r0
                java.lang.String r2 = ""
                r3.c = r2
                r3.d = r2
                r3.e = r2
                r3.f = r2
                r3.g = r0
                r3.h = r2
                r3.i = r0
                r3.j = r2
                r3.k = r0
                return
        }

        public static com.mbridge.msdk.foundation.same.net.stack.b.b a(com.mbridge.msdk.foundation.same.net.stack.b.b r3) {
                com.mbridge.msdk.foundation.same.net.stack.b$b r0 = new com.mbridge.msdk.foundation.same.net.stack.b$b
                r0.<init>()
                int r1 = r3.a
                r0.a = r1
                java.lang.String r1 = r3.d
                r0.d = r1
                java.lang.String r1 = r3.f
                r0.f = r1
                long r1 = r3.b
                r0.b = r1
                long r1 = r3.i
                r0.i = r1
                java.lang.String r1 = r3.c
                r0.c = r1
                java.lang.String r1 = r3.h
                r0.h = r1
                long r1 = r3.g
                r0.g = r1
                java.lang.String r1 = r3.e
                r0.e = r1
                java.lang.String r1 = r3.j
                r0.j = r1
                long r1 = r3.k
                r0.k = r1
                return r0
        }
    }

    private b() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            java.lang.String r0 = ""
            r1.c = r0
            return
    }

    b(com.mbridge.msdk.foundation.same.net.stack.b.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.same.net.stack.b a() {
            com.mbridge.msdk.foundation.same.net.stack.b r0 = com.mbridge.msdk.foundation.same.net.stack.b.a.a()
            return r0
    }

    public final void a(com.mbridge.msdk.foundation.same.net.stack.b.b r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.mbridge.msdk.foundation.same.net.stack.b$b r2 = com.mbridge.msdk.foundation.same.net.stack.b.b.a(r2)
            com.mbridge.msdk.foundation.same.net.stack.b$2 r0 = new com.mbridge.msdk.foundation.same.net.stack.b$2
            r0.<init>(r1, r2)
            java.util.concurrent.ThreadPoolExecutor r2 = com.mbridge.msdk.foundation.same.f.b.a()
            r2.execute(r0)
            return
    }

    public final boolean a(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 != 0) goto L43
            com.mbridge.msdk.c.a r0 = r4.b     // Catch: java.lang.Exception -> L43
            if (r0 != 0) goto L1d
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L43
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = r2.k()     // Catch: java.lang.Exception -> L43
            com.mbridge.msdk.c.a r0 = r0.g(r2)     // Catch: java.lang.Exception -> L43
            r4.b = r0     // Catch: java.lang.Exception -> L43
        L1d:
            com.mbridge.msdk.c.a r0 = r4.b     // Catch: java.lang.Exception -> L43
            if (r0 == 0) goto L43
            com.mbridge.msdk.c.a r0 = r4.b     // Catch: java.lang.Exception -> L43
            java.lang.String r0 = r0.v()     // Catch: java.lang.Exception -> L43
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = r2.a     // Catch: java.lang.Exception -> L43
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L43
            if (r3 != 0) goto L43
            boolean r5 = r5.startsWith(r0)     // Catch: java.lang.Exception -> L43
            if (r5 == 0) goto L43
            boolean r5 = android.text.TextUtils.equals(r0, r2)     // Catch: java.lang.Exception -> L43
            if (r5 != 0) goto L43
            r4.c = r0     // Catch: java.lang.Exception -> L43
            r5 = 1
            r1 = r5
        L43:
            return r1
    }

    public final synchronized com.mbridge.msdk.thrid.okhttp.OkHttpClient b() {
            r7 = this;
            monitor-enter(r7)
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r7.a     // Catch: java.lang.Throwable -> L4a
            if (r0 != 0) goto L46
            com.mbridge.msdk.thrid.okhttp.Dispatcher r0 = new com.mbridge.msdk.thrid.okhttp.Dispatcher     // Catch: java.lang.Throwable -> L4a
            r0.<init>()     // Catch: java.lang.Throwable -> L4a
            r1 = 10
            r0.setMaxRequestsPerHost(r1)     // Catch: java.lang.Throwable -> L4a
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r1 = new com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder     // Catch: java.lang.Throwable -> L4a
            r1.<init>()     // Catch: java.lang.Throwable -> L4a
            r2 = 100
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L4a
            r1.readTimeout(r2, r4)     // Catch: java.lang.Throwable -> L4a
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L4a
            r3 = 60
            r1.connectTimeout(r3, r2)     // Catch: java.lang.Throwable -> L4a
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L4a
            r1.writeTimeout(r3, r2)     // Catch: java.lang.Throwable -> L4a
            com.mbridge.msdk.thrid.okhttp.ConnectionPool r2 = new com.mbridge.msdk.thrid.okhttp.ConnectionPool     // Catch: java.lang.Throwable -> L4a
            r3 = 32
            r4 = 5
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MINUTES     // Catch: java.lang.Throwable -> L4a
            r2.<init>(r3, r4, r6)     // Catch: java.lang.Throwable -> L4a
            r1.connectionPool(r2)     // Catch: java.lang.Throwable -> L4a
            r1.dispatcher(r0)     // Catch: java.lang.Throwable -> L4a
            com.mbridge.msdk.foundation.same.net.stack.b$1 r0 = new com.mbridge.msdk.foundation.same.net.stack.b$1     // Catch: java.lang.Throwable -> L4a
            r0.<init>(r7)     // Catch: java.lang.Throwable -> L4a
            r1.eventListener(r0)     // Catch: java.lang.Throwable -> L4a
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r1.build()     // Catch: java.lang.Throwable -> L4a
            r7.a = r0     // Catch: java.lang.Throwable -> L4a
        L46:
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r7.a     // Catch: java.lang.Throwable -> L4a
            monitor-exit(r7)
            return r0
        L4a:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }

    public final com.mbridge.msdk.foundation.same.net.stack.b.b c() {
            r2 = this;
            com.mbridge.msdk.foundation.same.net.stack.b$b r0 = new com.mbridge.msdk.foundation.same.net.stack.b$b
            r0.<init>()
            java.lang.String r1 = r2.c
            r0.f = r1
            return r0
    }
}
