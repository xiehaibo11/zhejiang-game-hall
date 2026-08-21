package com.reyun.tracking.sdk;

public class a {
    private static java.util.concurrent.ConcurrentHashMap a;
    private java.lang.Thread b;
    private android.os.Handler c;

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.reyun.tracking.sdk.a.a = r0
            return
    }

    public a() {
            r1 = this;
            r1.<init>()
            com.reyun.tracking.sdk.b r0 = new com.reyun.tracking.sdk.b
            r0.<init>(r1)
            r1.b = r0
            r0.start()
            return
    }

    static android.os.Handler a(com.reyun.tracking.sdk.a r0, android.os.Handler r1) {
            r0.c = r1
            return r1
    }

    public static com.reyun.tracking.sdk.a a() {
            java.lang.String r0 = "TrackingIO"
            com.reyun.tracking.sdk.a r0 = a(r0)
            return r0
    }

    public static com.reyun.tracking.sdk.a a(java.lang.String r2) {
            java.lang.Class<com.reyun.tracking.sdk.a> r0 = com.reyun.tracking.sdk.a.class
            monitor-enter(r0)
            java.util.concurrent.ConcurrentHashMap r1 = com.reyun.tracking.sdk.a.a     // Catch: java.lang.Throwable -> L2a
            if (r1 != 0) goto Le
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L2a
            r1.<init>()     // Catch: java.lang.Throwable -> L2a
            com.reyun.tracking.sdk.a.a = r1     // Catch: java.lang.Throwable -> L2a
        Le:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2a
            java.util.concurrent.ConcurrentHashMap r0 = com.reyun.tracking.sdk.a.a
            boolean r0 = r0.containsKey(r2)
            if (r0 != 0) goto L21
            java.util.concurrent.ConcurrentHashMap r0 = com.reyun.tracking.sdk.a.a
            com.reyun.tracking.sdk.a r1 = new com.reyun.tracking.sdk.a
            r1.<init>()
            r0.put(r2, r1)
        L21:
            java.util.concurrent.ConcurrentHashMap r0 = com.reyun.tracking.sdk.a.a
            java.lang.Object r2 = r0.get(r2)
            com.reyun.tracking.sdk.a r2 = (com.reyun.tracking.sdk.a) r2
            return r2
        L2a:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2a
            throw r2
    }

    public void a(java.lang.Runnable r2) {
            r1 = this;
            android.os.Handler r0 = r1.c
            if (r0 != 0) goto Ld
            java.lang.Thread r0 = new java.lang.Thread
            r0.<init>(r2)
            r0.start()
            goto L10
        Ld:
            r0.post(r2)
        L10:
            return
    }

    public void a(java.lang.Runnable r2, long r3) {
            r1 = this;
            android.os.Handler r0 = r1.c
            if (r0 != 0) goto Ld
            com.reyun.tracking.sdk.c r0 = new com.reyun.tracking.sdk.c
            r0.<init>(r1, r3, r2)
            r0.start()
            goto L10
        Ld:
            r0.postDelayed(r2, r3)
        L10:
            return
    }

    public void b() {
            r3 = this;
            android.os.Handler r0 = r3.c
            if (r0 == 0) goto L36
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            java.util.concurrent.ConcurrentHashMap r0 = com.reyun.tracking.sdk.a.a     // Catch: java.lang.Exception -> L36
            if (r0 == 0) goto L2d
            java.util.concurrent.ConcurrentHashMap r0 = com.reyun.tracking.sdk.a.a     // Catch: java.lang.Exception -> L36
            java.util.Enumeration r0 = r0.keys()     // Catch: java.lang.Exception -> L36
        L12:
            boolean r1 = r0.hasMoreElements()     // Catch: java.lang.Exception -> L36
            if (r1 == 0) goto L2d
            java.lang.Object r1 = r0.nextElement()     // Catch: java.lang.Exception -> L36
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L36
            java.util.concurrent.ConcurrentHashMap r2 = com.reyun.tracking.sdk.a.a     // Catch: java.lang.Exception -> L36
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Exception -> L36
            com.reyun.tracking.sdk.a r2 = (com.reyun.tracking.sdk.a) r2     // Catch: java.lang.Exception -> L36
            if (r2 != r3) goto L12
            java.util.concurrent.ConcurrentHashMap r0 = com.reyun.tracking.sdk.a.a     // Catch: java.lang.Exception -> L36
            r0.remove(r1)     // Catch: java.lang.Exception -> L36
        L2d:
            android.os.Handler r0 = r3.c     // Catch: java.lang.Exception -> L36
            android.os.Looper r0 = r0.getLooper()     // Catch: java.lang.Exception -> L36
            r0.quit()     // Catch: java.lang.Exception -> L36
        L36:
            return
    }

    public void b(java.lang.Runnable r2) {
            r1 = this;
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.Throwable -> L9
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L9
            r0.start()     // Catch: java.lang.Throwable -> L9
            goto Ld
        L9:
            r2 = move-exception
            r2.printStackTrace()
        Ld:
            return
    }
}
