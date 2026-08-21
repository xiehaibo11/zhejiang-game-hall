package com.sigmob.sdk.mraid;

public class s {
    static final int a = 50;
    static final long b = 3000000;
    static final com.sigmob.sdk.mraid.s.b c = null;
    private static final long d = 3000000;
    private static final java.util.Map<java.lang.String, com.sigmob.sdk.mraid.s.a> e = null;
    private static android.os.Handler f;

    static class 1 {
    }

    public static class a {
        private final com.sigmob.sdk.base.views.e a;
        private final java.lang.ref.WeakReference<com.sigmob.sdk.base.common.t> b;
        private final com.sigmob.sdk.base.common.r c;
        private final com.sigmob.sdk.mraid.d d;

        a(com.sigmob.sdk.base.views.e r1, com.sigmob.sdk.base.common.t r2, com.sigmob.sdk.base.common.r r3, com.sigmob.sdk.mraid.d r4) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
                r1.<init>(r2)
                r0.b = r1
                r0.c = r3
                r0.d = r4
                return
        }

        public com.sigmob.sdk.base.views.e a() {
                r1 = this;
                com.sigmob.sdk.base.views.e r0 = r1.a
                return r0
        }

        public java.lang.ref.WeakReference<com.sigmob.sdk.base.common.t> b() {
                r1 = this;
                java.lang.ref.WeakReference<com.sigmob.sdk.base.common.t> r0 = r1.b
                return r0
        }

        public com.sigmob.sdk.base.common.r c() {
                r1 = this;
                com.sigmob.sdk.base.common.r r0 = r1.c
                return r0
        }

        public com.sigmob.sdk.mraid.d d() {
                r1 = this;
                com.sigmob.sdk.mraid.d r0 = r1.d
                return r0
        }
    }

    private static class b implements java.lang.Runnable {
        private b() {
                r0 = this;
                r0.<init>()
                return
        }

        b(com.sigmob.sdk.mraid.s.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r0 = this;
                com.sigmob.sdk.mraid.s.a()
                return
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r0 = java.util.Collections.synchronizedMap(r0)
            com.sigmob.sdk.mraid.s.e = r0
            com.sigmob.sdk.mraid.s$b r0 = new com.sigmob.sdk.mraid.s$b
            r1 = 0
            r0.<init>(r1)
            com.sigmob.sdk.mraid.s.c = r0
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            com.sigmob.sdk.mraid.s.f = r0
            return
    }

    private s() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.sigmob.sdk.mraid.s.a a(java.lang.String r1) {
            com.czhj.sdk.common.utils.Preconditions.checkNotNull(r1)
            java.util.Map<java.lang.String, com.sigmob.sdk.mraid.s$a> r0 = com.sigmob.sdk.mraid.s.e
            java.lang.Object r1 = r0.remove(r1)
            com.sigmob.sdk.mraid.s$a r1 = (com.sigmob.sdk.mraid.s.a) r1
            return r1
    }

    static synchronized void a() {
            java.lang.Class<com.sigmob.sdk.mraid.s> r0 = com.sigmob.sdk.mraid.s.class
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.sigmob.sdk.mraid.s$a> r1 = com.sigmob.sdk.mraid.s.e     // Catch: java.lang.Throwable -> L55
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L55
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L55
        Ld:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L55
            if (r2 == 0) goto L3a
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L55
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L55
            java.lang.Object r3 = r2.getValue()     // Catch: java.lang.Throwable -> L55
            com.sigmob.sdk.mraid.s$a r3 = (com.sigmob.sdk.mraid.s.a) r3     // Catch: java.lang.Throwable -> L55
            java.lang.ref.WeakReference r3 = r3.b()     // Catch: java.lang.Throwable -> L55
            java.lang.Object r3 = r3.get()     // Catch: java.lang.Throwable -> L55
            if (r3 != 0) goto Ld
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L55
            com.sigmob.sdk.mraid.s$a r2 = (com.sigmob.sdk.mraid.s.a) r2     // Catch: java.lang.Throwable -> L55
            com.sigmob.sdk.base.common.r r2 = r2.c()     // Catch: java.lang.Throwable -> L55
            r2.a()     // Catch: java.lang.Throwable -> L55
            r1.remove()     // Catch: java.lang.Throwable -> L55
            goto Ld
        L3a:
            java.util.Map<java.lang.String, com.sigmob.sdk.mraid.s$a> r1 = com.sigmob.sdk.mraid.s.e     // Catch: java.lang.Throwable -> L55
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L55
            if (r1 != 0) goto L53
            android.os.Handler r1 = com.sigmob.sdk.mraid.s.f     // Catch: java.lang.Throwable -> L55
            com.sigmob.sdk.mraid.s$b r2 = com.sigmob.sdk.mraid.s.c     // Catch: java.lang.Throwable -> L55
            r1.removeCallbacks(r2)     // Catch: java.lang.Throwable -> L55
            android.os.Handler r1 = com.sigmob.sdk.mraid.s.f     // Catch: java.lang.Throwable -> L55
            com.sigmob.sdk.mraid.s$b r2 = com.sigmob.sdk.mraid.s.c     // Catch: java.lang.Throwable -> L55
            r3 = 3000000(0x2dc6c0, double:1.482197E-317)
            r1.postDelayed(r2, r3)     // Catch: java.lang.Throwable -> L55
        L53:
            monitor-exit(r0)
            return
        L55:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @java.lang.Deprecated
    static void a(android.os.Handler r0) {
            com.sigmob.sdk.mraid.s.f = r0
            return
    }

    public static void a(java.lang.String r2, com.sigmob.sdk.mraid.e r3, com.sigmob.sdk.base.views.e r4, com.sigmob.sdk.base.common.r r5, com.sigmob.sdk.mraid.d r6) {
            com.czhj.sdk.common.utils.Preconditions.checkNotNull(r2)
            com.czhj.sdk.common.utils.Preconditions.checkNotNull(r3)
            com.czhj.sdk.common.utils.Preconditions.checkNotNull(r4)
            a()
            java.util.Map<java.lang.String, com.sigmob.sdk.mraid.s$a> r0 = com.sigmob.sdk.mraid.s.e
            int r0 = r0.size()
            r1 = 50
            if (r0 < r1) goto L1c
            java.lang.String r2 = "Unable to cache web view. Please destroy some via #destroy() and try again."
            com.czhj.sdk.logger.SigmobLog.w(r2)
            return
        L1c:
            java.util.Map<java.lang.String, com.sigmob.sdk.mraid.s$a> r0 = com.sigmob.sdk.mraid.s.e
            com.sigmob.sdk.mraid.s$a r1 = new com.sigmob.sdk.mraid.s$a
            r1.<init>(r4, r3, r5, r6)
            r0.put(r2, r1)
            return
    }

    @java.lang.Deprecated
    public static void b() {
            java.util.Map<java.lang.String, com.sigmob.sdk.mraid.s$a> r0 = com.sigmob.sdk.mraid.s.e
            r0.clear()
            android.os.Handler r0 = com.sigmob.sdk.mraid.s.f
            com.sigmob.sdk.mraid.s$b r1 = com.sigmob.sdk.mraid.s.c
            r0.removeCallbacks(r1)
            return
    }

    @java.lang.Deprecated
    static java.util.Map<java.lang.String, com.sigmob.sdk.mraid.s.a> c() {
            java.util.Map<java.lang.String, com.sigmob.sdk.mraid.s$a> r0 = com.sigmob.sdk.mraid.s.e
            return r0
    }
}
