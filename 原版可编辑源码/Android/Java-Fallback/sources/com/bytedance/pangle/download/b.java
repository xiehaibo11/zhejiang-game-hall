package com.bytedance.pangle.download;

public class b {
    private static volatile com.bytedance.pangle.download.b e;
    final java.util.Map<java.lang.String, java.lang.Long> a;
    public final android.os.Handler b;
    public final java.util.Map<java.lang.String, java.lang.Runnable> c;
    final java.util.Map<java.lang.String, java.lang.Runnable> d;


    private b() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.a = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.b = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.c = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.d = r0
            return
    }

    static android.os.Handler a(com.bytedance.pangle.download.b r0) {
            android.os.Handler r0 = r0.b
            return r0
    }

    public static com.bytedance.pangle.download.b a() {
            com.bytedance.pangle.download.b r0 = com.bytedance.pangle.download.b.e
            if (r0 != 0) goto L17
            java.lang.Class<com.bytedance.pangle.download.b> r0 = com.bytedance.pangle.download.b.class
            monitor-enter(r0)
            com.bytedance.pangle.download.b r1 = com.bytedance.pangle.download.b.e     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bytedance.pangle.download.b r1 = new com.bytedance.pangle.download.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bytedance.pangle.download.b.e = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bytedance.pangle.download.b r0 = com.bytedance.pangle.download.b.e
            return r0
    }
}
