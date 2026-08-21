package com.czhj.volley;

public class RequestQueue {
    private static final int a = 4;
    private final java.util.concurrent.atomic.AtomicInteger b;
    private final java.util.Set<com.czhj.volley.Request<?>> c;
    private java.util.concurrent.LinkedBlockingDeque<java.lang.Runnable> d;
    private final com.czhj.volley.Network e;
    private final com.czhj.volley.ResponseDelivery f;
    private final java.util.List<com.czhj.volley.RequestQueue.RequestFinishedListener> g;
    private java.util.concurrent.ThreadPoolExecutor h;


    public interface RequestFilter {
        boolean apply(com.czhj.volley.Request<?> r1);
    }

    public interface RequestFinishedListener<T> {
        void onRequestFinished(com.czhj.volley.Request<T> r1);
    }

    public RequestQueue(com.czhj.volley.Network r2) {
            r1 = this;
            r0 = 4
            r1.<init>(r2, r0)
            return
    }

    public RequestQueue(com.czhj.volley.Network r4, int r5) {
            r3 = this;
            com.czhj.volley.ExecutorDelivery r0 = new com.czhj.volley.ExecutorDelivery
            android.os.Handler r1 = new android.os.Handler
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            r1.<init>(r2)
            r0.<init>(r1)
            r3.<init>(r4, r5, r0)
            return
    }

    public RequestQueue(com.czhj.volley.Network r10, int r11, com.czhj.volley.ResponseDelivery r12) {
            r9 = this;
            r9.<init>()
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>()
            r9.b = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r9.c = r0
            java.util.concurrent.LinkedBlockingDeque r0 = new java.util.concurrent.LinkedBlockingDeque
            r1 = 1
            r0.<init>(r1)
            r9.d = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r9.g = r0
            r0 = 0
            r9.h = r0
            r9.e = r10
            r9.f = r12
            if (r0 != 0) goto L3e
            java.util.concurrent.ThreadPoolExecutor r10 = new java.util.concurrent.ThreadPoolExecutor
            r4 = 2147483647(0x7fffffff, float:NaN)
            r5 = 60
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingDeque<java.lang.Runnable> r8 = r9.d
            r2 = r10
            r3 = r11
            r2.<init>(r3, r4, r5, r7, r8)
            r9.h = r10
            r10.allowCoreThreadTimeOut(r1)
        L3e:
            return
    }

    <T> void a(com.czhj.volley.Request<T> r4) {
            r3 = this;
            java.util.Set<com.czhj.volley.Request<?>> r0 = r3.c
            monitor-enter(r0)
            java.util.Set<com.czhj.volley.Request<?>> r1 = r3.c     // Catch: java.lang.Throwable -> L27
            r1.remove(r4)     // Catch: java.lang.Throwable -> L27
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            java.util.List<com.czhj.volley.RequestQueue$RequestFinishedListener> r1 = r3.g
            monitor-enter(r1)
            java.util.List<com.czhj.volley.RequestQueue$RequestFinishedListener> r0 = r3.g     // Catch: java.lang.Throwable -> L24
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L24
        L12:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> L24
            if (r2 == 0) goto L22
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> L24
            com.czhj.volley.RequestQueue$RequestFinishedListener r2 = (com.czhj.volley.RequestQueue.RequestFinishedListener) r2     // Catch: java.lang.Throwable -> L24
            r2.onRequestFinished(r4)     // Catch: java.lang.Throwable -> L24
            goto L12
        L22:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L24
            return
        L24:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L24
            throw r4
        L27:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            throw r4
    }

    public <T> com.czhj.volley.Request<T> add(com.czhj.volley.Request<T> r5) {
            r4 = this;
            if (r5 == 0) goto L1c
            java.lang.String r0 = r5.getUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Ld
            goto L1c
        Ld:
            java.util.concurrent.ThreadPoolExecutor r0 = r4.h
            com.czhj.volley.NetworkDispatcher r1 = new com.czhj.volley.NetworkDispatcher
            com.czhj.volley.Network r2 = r4.e
            com.czhj.volley.ResponseDelivery r3 = r4.f
            r1.<init>(r2, r5, r3)
            r0.submit(r1)
            return r5
        L1c:
            r5 = 0
            return r5
    }

    public <T> void addRequestFinishedListener(com.czhj.volley.RequestQueue.RequestFinishedListener<T> r3) {
            r2 = this;
            java.util.List<com.czhj.volley.RequestQueue$RequestFinishedListener> r0 = r2.g
            monitor-enter(r0)
            java.util.List<com.czhj.volley.RequestQueue$RequestFinishedListener> r1 = r2.g     // Catch: java.lang.Throwable -> La
            r1.add(r3)     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r3
    }

    public void cancelAll(com.czhj.volley.RequestQueue.RequestFilter r5) {
            r4 = this;
            java.util.Set<com.czhj.volley.Request<?>> r0 = r4.c
            monitor-enter(r0)
            java.util.Set<com.czhj.volley.Request<?>> r1 = r4.c     // Catch: java.lang.Throwable -> L21
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L21
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L21
            if (r2 == 0) goto L1f
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L21
            com.czhj.volley.Request r2 = (com.czhj.volley.Request) r2     // Catch: java.lang.Throwable -> L21
            boolean r3 = r5.apply(r2)     // Catch: java.lang.Throwable -> L21
            if (r3 == 0) goto L9
            r2.cancel()     // Catch: java.lang.Throwable -> L21
            goto L9
        L1f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            return
        L21:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            throw r5
    }

    public void cancelAll(java.lang.Object r2) {
            r1 = this;
            if (r2 == 0) goto Lb
            com.czhj.volley.RequestQueue$1 r0 = new com.czhj.volley.RequestQueue$1
            r0.<init>(r1, r2)
            r1.cancelAll(r0)
            return
        Lb:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Cannot cancelAll with a null tag"
            r2.<init>(r0)
            throw r2
    }

    public int getSequenceNumber() {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.b
            int r0 = r0.incrementAndGet()
            return r0
    }

    public <T> void removeRequestFinishedListener(com.czhj.volley.RequestQueue.RequestFinishedListener<T> r3) {
            r2 = this;
            java.util.List<com.czhj.volley.RequestQueue$RequestFinishedListener> r0 = r2.g
            monitor-enter(r0)
            java.util.List<com.czhj.volley.RequestQueue$RequestFinishedListener> r1 = r2.g     // Catch: java.lang.Throwable -> La
            r1.remove(r3)     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r3
    }

    public void start() {
            r0 = this;
            r0.stop()
            return
    }

    public void stop() {
            r0 = this;
            return
    }
}
