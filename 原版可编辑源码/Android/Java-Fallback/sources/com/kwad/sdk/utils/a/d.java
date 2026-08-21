package com.kwad.sdk.utils.a;

public final class d {
    static com.kwad.sdk.utils.a.c.d aLr;
    static volatile java.util.concurrent.Executor aLs;
    static java.util.concurrent.ExecutorService aLt;

    static {
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            com.kwad.sdk.utils.a.d.aLt = r0
            return
    }

    private d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(com.kwad.sdk.utils.a.c.d r0) {
            com.kwad.sdk.utils.a.d.aLr = r0
            return
    }

    static java.util.concurrent.Executor getExecutor() {
            java.util.concurrent.Executor r0 = com.kwad.sdk.utils.a.d.aLs
            if (r0 != 0) goto L27
            java.lang.Class<com.kwad.sdk.utils.a.d> r0 = com.kwad.sdk.utils.a.d.class
            monitor-enter(r0)
            java.util.concurrent.Executor r1 = com.kwad.sdk.utils.a.d.aLs     // Catch: java.lang.Throwable -> L24
            if (r1 != 0) goto L22
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Throwable -> L24
            r3 = 4
            r4 = 4
            r5 = 10
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L24
            java.util.concurrent.LinkedBlockingQueue r8 = new java.util.concurrent.LinkedBlockingQueue     // Catch: java.lang.Throwable -> L24
            r8.<init>()     // Catch: java.lang.Throwable -> L24
            r2 = r1
            r2.<init>(r3, r4, r5, r7, r8)     // Catch: java.lang.Throwable -> L24
            r2 = 1
            r1.allowCoreThreadTimeOut(r2)     // Catch: java.lang.Throwable -> L24
            com.kwad.sdk.utils.a.d.aLs = r1     // Catch: java.lang.Throwable -> L24
        L22:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L24
            goto L27
        L24:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L24
            throw r1
        L27:
            java.util.concurrent.Executor r0 = com.kwad.sdk.utils.a.d.aLs
            return r0
    }

    public static void setExecutor(java.util.concurrent.Executor r0) {
            if (r0 == 0) goto L4
            com.kwad.sdk.utils.a.d.aLs = r0
        L4:
            return
    }
}
