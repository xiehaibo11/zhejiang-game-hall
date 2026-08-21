package com.kwad.sdk.core.threads;

public final class a {
    private static java.util.Map<java.lang.String, java.lang.ref.WeakReference<com.kwad.sdk.core.threads.a.a>> auY;

    public static class a {
        private android.os.HandlerThread auZ;
        private android.os.Handler mHandler;

        public a(java.lang.String r3) {
                r2 = this;
                r2.<init>()
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                if (r0 == 0) goto Lc
                java.lang.String r3 = "ksad-HT"
                goto L1a
            Lc:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "ksad-"
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
            L1a:
                android.os.HandlerThread r0 = new android.os.HandlerThread
                r0.<init>(r3)
                r2.auZ = r0
                r0.start()
                android.os.Handler r3 = new android.os.Handler
                android.os.HandlerThread r0 = r2.auZ
                android.os.Looper r0 = r0.getLooper()
                r3.<init>(r0)
                r2.mHandler = r3
                return
        }

        public final com.kwad.sdk.utils.bn b(com.kwad.sdk.utils.bn.a r3) {
                r2 = this;
                com.kwad.sdk.utils.bn r0 = new com.kwad.sdk.utils.bn
                android.os.HandlerThread r1 = r2.auZ
                android.os.Looper r1 = r1.getLooper()
                r0.<init>(r3, r1)
                return r0
        }

        public final android.os.Handler getHandler() {
                r1 = this;
                android.os.Handler r0 = r1.mHandler
                return r0
        }
    }

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.kwad.sdk.core.threads.a.auY = r0
            return
    }

    public static synchronized android.os.Handler CN() {
            java.lang.Class<com.kwad.sdk.core.threads.a> r0 = com.kwad.sdk.core.threads.a.class
            monitor-enter(r0)
            java.lang.String r1 = "commonHT"
            com.kwad.sdk.core.threads.a$a r1 = dE(r1)     // Catch: java.lang.Throwable -> Lf
            android.os.Handler r1 = r1.getHandler()     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r0)
            return r1
        Lf:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized android.os.Handler CO() {
            java.lang.Class<com.kwad.sdk.core.threads.a> r0 = com.kwad.sdk.core.threads.a.class
            monitor-enter(r0)
            java.lang.String r1 = "reportHT"
            com.kwad.sdk.core.threads.a$a r1 = dE(r1)     // Catch: java.lang.Throwable -> Lf
            android.os.Handler r1 = r1.getHandler()     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r0)
            return r1
        Lf:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized com.kwad.sdk.utils.bn a(com.kwad.sdk.utils.bn.a r2) {
            java.lang.Class<com.kwad.sdk.core.threads.a> r0 = com.kwad.sdk.core.threads.a.class
            monitor-enter(r0)
            java.lang.String r1 = "commonHT"
            com.kwad.sdk.core.threads.a$a r1 = dE(r1)     // Catch: java.lang.Throwable -> Lf
            com.kwad.sdk.utils.bn r2 = r1.b(r2)     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r0)
            return r2
        Lf:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private static com.kwad.sdk.core.threads.a.a dE(java.lang.String r3) {
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<com.kwad.sdk.core.threads.a$a>> r0 = com.kwad.sdk.core.threads.a.auY
            java.lang.Object r0 = r0.get(r3)
            java.lang.ref.WeakReference r0 = (java.lang.ref.WeakReference) r0
            if (r0 == 0) goto L18
            java.lang.Object r1 = r0.get()
            if (r1 != 0) goto L11
            goto L18
        L11:
            java.lang.Object r3 = r0.get()
            com.kwad.sdk.core.threads.a$a r3 = (com.kwad.sdk.core.threads.a.a) r3
            return r3
        L18:
            com.kwad.sdk.core.threads.a$a r0 = new com.kwad.sdk.core.threads.a$a
            r0.<init>(r3)
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<com.kwad.sdk.core.threads.a$a>> r1 = com.kwad.sdk.core.threads.a.auY
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
            r2.<init>(r0)
            r1.put(r3, r2)
            return r0
    }
}
