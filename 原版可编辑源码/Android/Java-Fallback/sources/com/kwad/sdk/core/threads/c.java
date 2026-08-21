package com.kwad.sdk.core.threads;

public class c {
    public static final java.lang.String TAG = null;
    private static int avq;
    private static int avr;
    private static int avs;
    private static final java.util.concurrent.ConcurrentHashMap<java.util.concurrent.ThreadPoolExecutor, java.lang.Long> avt = null;
    private static final java.util.concurrent.ConcurrentHashMap<java.util.concurrent.ThreadPoolExecutor, java.lang.String> avu = null;
    private static long interval;
    private static long startTime;



    static {
            java.lang.Class<com.kwad.sdk.core.threads.c> r0 = com.kwad.sdk.core.threads.c.class
            java.lang.String r0 = r0.getSimpleName()
            com.kwad.sdk.core.threads.c.TAG = r0
            r0 = 0
            com.kwad.sdk.core.threads.c.avq = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.kwad.sdk.core.threads.c.avt = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.kwad.sdk.core.threads.c.avu = r0
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.util.concurrent.ConcurrentHashMap Df() {
            java.util.concurrent.ConcurrentHashMap<java.util.concurrent.ThreadPoolExecutor, java.lang.String> r0 = com.kwad.sdk.core.threads.c.avu
            return r0
    }

    static java.util.concurrent.ConcurrentHashMap Dg() {
            java.util.concurrent.ConcurrentHashMap<java.util.concurrent.ThreadPoolExecutor, java.lang.Long> r0 = com.kwad.sdk.core.threads.c.avt
            return r0
    }

    static int Dh() {
            int r0 = com.kwad.sdk.core.threads.c.avq
            int r1 = r0 + 1
            com.kwad.sdk.core.threads.c.avq = r1
            return r0
    }

    static int Di() {
            int r0 = com.kwad.sdk.core.threads.c.avq
            return r0
    }

    static int Dj() {
            int r0 = com.kwad.sdk.core.threads.c.avs
            return r0
    }

    static long Dk() {
            long r0 = com.kwad.sdk.core.threads.c.interval
            return r0
    }

    private static void a(com.kwad.sdk.core.threads.d r3) {
            r0 = 1
            com.kwad.sdk.core.threads.a.b.avy = r0
            com.kwad.sdk.core.threads.a.a.avy = r0
            long r0 = r3.interval
            com.kwad.sdk.core.threads.c.interval = r0
            int r3 = r3.avx
            com.kwad.sdk.core.threads.c.avs = r3
            android.os.HandlerThread r3 = new android.os.HandlerThread
            java.lang.String r0 = "pollingHT"
            r3.<init>(r0)
            r3.start()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r3 = r3.getLooper()
            r0.<init>(r3)
            long r1 = android.os.SystemClock.elapsedRealtime()
            com.kwad.sdk.core.threads.c.startTime = r1
            com.kwad.sdk.core.threads.c$2 r3 = new com.kwad.sdk.core.threads.c$2
            r3.<init>(r0)
            r0.post(r3)
            return
    }

    public static void a(java.util.concurrent.ThreadPoolExecutor r3, java.lang.String r4) {
            java.util.concurrent.ConcurrentHashMap<java.util.concurrent.ThreadPoolExecutor, java.lang.Long> r0 = com.kwad.sdk.core.threads.c.avt
            long r1 = r3.getCompletedTaskCount()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r0.put(r3, r1)
            java.util.concurrent.ConcurrentHashMap<java.util.concurrent.ThreadPoolExecutor, java.lang.String> r0 = com.kwad.sdk.core.threads.c.avu
            r0.put(r3, r4)
            return
    }

    public static com.kwad.sdk.core.threads.b b(java.util.concurrent.ThreadPoolExecutor r7, java.lang.String r8) {
            if (r7 != 0) goto L4
            r7 = 0
            return r7
        L4:
            com.kwad.sdk.core.threads.b r0 = new com.kwad.sdk.core.threads.b
            r0.<init>()
            r0.avg = r8
            int r8 = r7.getCorePoolSize()
            r0.avh = r8
            int r8 = r7.getMaximumPoolSize()
            r0.avi = r8
            int r8 = r7.getPoolSize()
            r0.avj = r8
            int r8 = r7.getActiveCount()
            r0.avk = r8
            java.util.concurrent.BlockingQueue r8 = r7.getQueue()
            if (r8 != 0) goto L2b
            r8 = 0
            goto L33
        L2b:
            java.util.concurrent.BlockingQueue r8 = r7.getQueue()
            int r8 = r8.size()
        L33:
            r0.avn = r8
            java.util.concurrent.ConcurrentHashMap<java.util.concurrent.ThreadPoolExecutor, java.lang.Long> r8 = com.kwad.sdk.core.threads.c.avt
            boolean r8 = r8.containsKey(r7)
            r1 = 0
            if (r8 == 0) goto L54
            java.util.concurrent.ConcurrentHashMap<java.util.concurrent.ThreadPoolExecutor, java.lang.Long> r8 = com.kwad.sdk.core.threads.c.avt
            java.lang.Object r8 = r8.get(r7)
            if (r8 == 0) goto L54
            java.util.concurrent.ConcurrentHashMap<java.util.concurrent.ThreadPoolExecutor, java.lang.Long> r8 = com.kwad.sdk.core.threads.c.avt
            java.lang.Object r8 = r8.get(r7)
            java.lang.Long r8 = (java.lang.Long) r8
            long r3 = r8.longValue()
            goto L55
        L54:
            r3 = r1
        L55:
            long r5 = r7.getCompletedTaskCount()
            long r3 = r5 - r3
            r0.avm = r3
            java.util.concurrent.ConcurrentHashMap<java.util.concurrent.ThreadPoolExecutor, java.lang.Long> r8 = com.kwad.sdk.core.threads.c.avt
            java.lang.Long r3 = java.lang.Long.valueOf(r5)
            r8.put(r7, r3)
            boolean r8 = r7 instanceof com.kwad.sdk.core.threads.a.c
            if (r8 == 0) goto L73
            com.kwad.sdk.core.threads.a.c r7 = (com.kwad.sdk.core.threads.a.c) r7
            long r7 = r7.Dl()
            r0.avl = r7
            goto L75
        L73:
            r0.avl = r1
        L75:
            long r7 = android.os.SystemClock.elapsedRealtime()
            long r1 = com.kwad.sdk.core.threads.c.startTime
            long r7 = r7 - r1
            r0.avo = r7
            long r7 = com.kwad.sdk.core.threads.c.interval
            r0.interval = r7
            int r7 = com.kwad.sdk.core.threads.c.avr
            r0.avp = r7
            return r0
    }

    static void b(com.kwad.sdk.core.threads.d r0) {
            a(r0)
            return
    }

    static int cx(int r0) {
            com.kwad.sdk.core.threads.c.avr = r0
            return r0
    }

    public static void dG(java.lang.String r1) {
            com.kwad.sdk.core.threads.c$1 r0 = new com.kwad.sdk.core.threads.c$1
            r0.<init>(r1)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    public static com.kwad.sdk.core.threads.d dH(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L16
            r0.<init>(r2)     // Catch: java.lang.Exception -> L16
            com.kwad.sdk.core.threads.d r2 = new com.kwad.sdk.core.threads.d     // Catch: java.lang.Exception -> L16
            r2.<init>()     // Catch: java.lang.Exception -> L16
            r2.parseJson(r0)     // Catch: java.lang.Exception -> L16
            return r2
        L16:
            r2 = move-exception
            java.lang.String r0 = com.kwad.sdk.core.threads.c.TAG
            java.lang.String r2 = r2.toString()
            com.kwad.library.solder.lib.a.w(r0, r2)
            return r1
    }

    static int xS() {
            int r0 = com.kwad.sdk.core.threads.c.avr
            return r0
    }
}
