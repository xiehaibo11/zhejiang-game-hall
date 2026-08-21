package com.kwad.sdk.api.a;

public final class a {
    private static final android.os.Handler VH = null;
    private static final java.util.concurrent.ExecutorService ajz = null;

    static {
            java.util.concurrent.ThreadPoolExecutor r7 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.MILLISECONDS
            java.util.concurrent.LinkedBlockingQueue r6 = new java.util.concurrent.LinkedBlockingQueue
            r6.<init>()
            r1 = 1
            r2 = 1
            r3 = 0
            r0 = r7
            r0.<init>(r1, r2, r3, r5, r6)
            com.kwad.sdk.api.a.a.ajz = r7
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.kwad.sdk.api.a.a.VH = r0
            return
    }

    public static java.util.concurrent.Future<?> submit(java.lang.Runnable r1) {
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.api.a.a.ajz
            java.util.concurrent.Future r1 = r0.submit(r1)
            return r1
    }
}
