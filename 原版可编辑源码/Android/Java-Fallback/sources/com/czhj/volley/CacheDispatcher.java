package com.czhj.volley;

public class CacheDispatcher extends java.lang.Thread {
    private static final boolean a = false;
    private final java.util.concurrent.BlockingQueue<com.czhj.volley.Request<?>> b;
    private final java.util.concurrent.BlockingQueue<com.czhj.volley.Request<?>> c;
    private final com.czhj.volley.Cache d;
    private final com.czhj.volley.ResponseDelivery e;
    private final com.czhj.volley.CacheDispatcher.WaitingRequestManager f;
    private volatile boolean g;


    private static class WaitingRequestManager implements com.czhj.volley.Request.NetworkRequestCompleteListener {
        private final java.util.Map<java.lang.String, java.util.List<com.czhj.volley.Request<?>>> a;
        private final com.czhj.volley.CacheDispatcher b;

        WaitingRequestManager(com.czhj.volley.CacheDispatcher r2) {
                r1 = this;
                r1.<init>()
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r1.a = r0
                r1.b = r2
                return
        }

        static boolean a(com.czhj.volley.CacheDispatcher.WaitingRequestManager r0, com.czhj.volley.Request r1) {
                boolean r0 = r0.a(r1)
                return r0
        }

        private synchronized boolean a(com.czhj.volley.Request<?> r6) {
                r5 = this;
                monitor-enter(r5)
                java.lang.String r0 = r6.getCacheKey()     // Catch: java.lang.Throwable -> L52
                java.util.Map<java.lang.String, java.util.List<com.czhj.volley.Request<?>>> r1 = r5.a     // Catch: java.lang.Throwable -> L52
                boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> L52
                r2 = 1
                r3 = 0
                if (r1 == 0) goto L3a
                java.util.Map<java.lang.String, java.util.List<com.czhj.volley.Request<?>>> r1 = r5.a     // Catch: java.lang.Throwable -> L52
                java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Throwable -> L52
                java.util.List r1 = (java.util.List) r1     // Catch: java.lang.Throwable -> L52
                if (r1 != 0) goto L1e
                java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L52
                r1.<init>()     // Catch: java.lang.Throwable -> L52
            L1e:
                java.lang.String r4 = "waiting-for-response"
                r6.addMarker(r4)     // Catch: java.lang.Throwable -> L52
                r1.add(r6)     // Catch: java.lang.Throwable -> L52
                java.util.Map<java.lang.String, java.util.List<com.czhj.volley.Request<?>>> r6 = r5.a     // Catch: java.lang.Throwable -> L52
                r6.put(r0, r1)     // Catch: java.lang.Throwable -> L52
                boolean r6 = com.czhj.volley.VolleyLog.DEBUG     // Catch: java.lang.Throwable -> L52
                if (r6 == 0) goto L38
                java.lang.String r6 = "Request for cacheKey=%s is in flight, putting on hold."
                java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L52
                r1[r3] = r0     // Catch: java.lang.Throwable -> L52
                com.czhj.volley.VolleyLog.d(r6, r1)     // Catch: java.lang.Throwable -> L52
            L38:
                monitor-exit(r5)
                return r2
            L3a:
                java.util.Map<java.lang.String, java.util.List<com.czhj.volley.Request<?>>> r1 = r5.a     // Catch: java.lang.Throwable -> L52
                r4 = 0
                r1.put(r0, r4)     // Catch: java.lang.Throwable -> L52
                r6.a(r5)     // Catch: java.lang.Throwable -> L52
                boolean r6 = com.czhj.volley.VolleyLog.DEBUG     // Catch: java.lang.Throwable -> L52
                if (r6 == 0) goto L50
                java.lang.String r6 = "new request, sending to network %s"
                java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L52
                r1[r3] = r0     // Catch: java.lang.Throwable -> L52
                com.czhj.volley.VolleyLog.d(r6, r1)     // Catch: java.lang.Throwable -> L52
            L50:
                monitor-exit(r5)
                return r3
            L52:
                r6 = move-exception
                monitor-exit(r5)
                throw r6
        }

        @Override
        public synchronized void onNoUsableResponseReceived(com.czhj.volley.Request<?> r7) {
                r6 = this;
                monitor-enter(r6)
                java.lang.String r7 = r7.getCacheKey()     // Catch: java.lang.Throwable -> L63
                java.util.Map<java.lang.String, java.util.List<com.czhj.volley.Request<?>>> r0 = r6.a     // Catch: java.lang.Throwable -> L63
                java.lang.Object r0 = r0.remove(r7)     // Catch: java.lang.Throwable -> L63
                java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Throwable -> L63
                if (r0 == 0) goto L61
                boolean r1 = r0.isEmpty()     // Catch: java.lang.Throwable -> L63
                if (r1 != 0) goto L61
                boolean r1 = com.czhj.volley.VolleyLog.DEBUG     // Catch: java.lang.Throwable -> L63
                r2 = 1
                r3 = 0
                if (r1 == 0) goto L2f
                java.lang.String r1 = "%d waiting requests for cacheKey=%s; resend to network"
                r4 = 2
                java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L63
                int r5 = r0.size()     // Catch: java.lang.Throwable -> L63
                java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L63
                r4[r3] = r5     // Catch: java.lang.Throwable -> L63
                r4[r2] = r7     // Catch: java.lang.Throwable -> L63
                com.czhj.volley.VolleyLog.v(r1, r4)     // Catch: java.lang.Throwable -> L63
            L2f:
                java.lang.Object r1 = r0.remove(r3)     // Catch: java.lang.Throwable -> L63
                com.czhj.volley.Request r1 = (com.czhj.volley.Request) r1     // Catch: java.lang.Throwable -> L63
                java.util.Map<java.lang.String, java.util.List<com.czhj.volley.Request<?>>> r4 = r6.a     // Catch: java.lang.Throwable -> L63
                r4.put(r7, r0)     // Catch: java.lang.Throwable -> L63
                r1.a(r6)     // Catch: java.lang.Throwable -> L63
                com.czhj.volley.CacheDispatcher r7 = r6.b     // Catch: java.lang.InterruptedException -> L47 java.lang.Throwable -> L63
                java.util.concurrent.BlockingQueue r7 = com.czhj.volley.CacheDispatcher.a(r7)     // Catch: java.lang.InterruptedException -> L47 java.lang.Throwable -> L63
                r7.put(r1)     // Catch: java.lang.InterruptedException -> L47 java.lang.Throwable -> L63
                goto L61
            L47:
                r7 = move-exception
                java.lang.String r0 = "Couldn't add request to queue. %s"
                java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L63
                java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L63
                r1[r3] = r7     // Catch: java.lang.Throwable -> L63
                com.czhj.volley.VolleyLog.e(r0, r1)     // Catch: java.lang.Throwable -> L63
                java.lang.Thread r7 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L63
                r7.interrupt()     // Catch: java.lang.Throwable -> L63
                com.czhj.volley.CacheDispatcher r7 = r6.b     // Catch: java.lang.Throwable -> L63
                r7.quit()     // Catch: java.lang.Throwable -> L63
            L61:
                monitor-exit(r6)
                return
            L63:
                r7 = move-exception
                monitor-exit(r6)
                throw r7
        }

        @Override
        public void onResponseReceived(com.czhj.volley.Request<?> r5, com.czhj.volley.Response<?> r6) {
                r4 = this;
                com.czhj.volley.Cache$Entry r0 = r6.cacheEntry
                if (r0 == 0) goto L55
                com.czhj.volley.Cache$Entry r0 = r6.cacheEntry
                boolean r0 = r0.isExpired()
                if (r0 == 0) goto Ld
                goto L55
            Ld:
                java.lang.String r5 = r5.getCacheKey()
                monitor-enter(r4)
                java.util.Map<java.lang.String, java.util.List<com.czhj.volley.Request<?>>> r0 = r4.a     // Catch: java.lang.Throwable -> L52
                java.lang.Object r0 = r0.remove(r5)     // Catch: java.lang.Throwable -> L52
                java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Throwable -> L52
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L52
                if (r0 == 0) goto L51
                boolean r1 = com.czhj.volley.VolleyLog.DEBUG
                if (r1 == 0) goto L37
                r1 = 2
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r2 = 0
                int r3 = r0.size()
                java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
                r1[r2] = r3
                r2 = 1
                r1[r2] = r5
                java.lang.String r5 = "Releasing %d waiting requests for cacheKey=%s."
                com.czhj.volley.VolleyLog.v(r5, r1)
            L37:
                java.util.Iterator r5 = r0.iterator()
            L3b:
                boolean r0 = r5.hasNext()
                if (r0 == 0) goto L51
                java.lang.Object r0 = r5.next()
                com.czhj.volley.Request r0 = (com.czhj.volley.Request) r0
                com.czhj.volley.CacheDispatcher r1 = r4.b
                com.czhj.volley.ResponseDelivery r1 = com.czhj.volley.CacheDispatcher.b(r1)
                r1.postResponse(r0, r6)
                goto L3b
            L51:
                return
            L52:
                r5 = move-exception
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L52
                throw r5
            L55:
                r4.onNoUsableResponseReceived(r5)
                return
        }
    }

    static {
            boolean r0 = com.czhj.volley.VolleyLog.DEBUG
            com.czhj.volley.CacheDispatcher.a = r0
            return
    }

    public CacheDispatcher(java.util.concurrent.BlockingQueue<com.czhj.volley.Request<?>> r2, java.util.concurrent.BlockingQueue<com.czhj.volley.Request<?>> r3, com.czhj.volley.Cache r4, com.czhj.volley.ResponseDelivery r5) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.g = r0
            r1.b = r2
            r1.c = r3
            r1.d = r4
            r1.e = r5
            com.czhj.volley.CacheDispatcher$WaitingRequestManager r2 = new com.czhj.volley.CacheDispatcher$WaitingRequestManager
            r2.<init>(r1)
            r1.f = r2
            return
    }

    static java.util.concurrent.BlockingQueue a(com.czhj.volley.CacheDispatcher r0) {
            java.util.concurrent.BlockingQueue<com.czhj.volley.Request<?>> r0 = r0.c
            return r0
    }

    private void a() throws java.lang.InterruptedException {
            r1 = this;
            java.util.concurrent.BlockingQueue<com.czhj.volley.Request<?>> r0 = r1.b
            java.lang.Object r0 = r0.take()
            com.czhj.volley.Request r0 = (com.czhj.volley.Request) r0
            r1.processRequest(r0)
            return
    }

    static com.czhj.volley.ResponseDelivery b(com.czhj.volley.CacheDispatcher r0) {
            com.czhj.volley.ResponseDelivery r0 = r0.e
            return r0
    }

    public void processRequest(com.czhj.volley.Request<?> r5) throws java.lang.InterruptedException {
            r4 = this;
            java.lang.String r0 = "cache-queue-take"
            r5.addMarker(r0)
            boolean r0 = r5.isCanceled()
            if (r0 == 0) goto L11
            java.lang.String r0 = "cache-discard-canceled"
            r5.a(r0)
            return
        L11:
            com.czhj.volley.Cache r0 = r4.d
            java.lang.String r1 = r5.getCacheKey()
            com.czhj.volley.Cache$Entry r0 = r0.get(r1)
            if (r0 != 0) goto L30
            java.lang.String r0 = "cache-miss"
            r5.addMarker(r0)
            com.czhj.volley.CacheDispatcher$WaitingRequestManager r0 = r4.f
            boolean r0 = com.czhj.volley.CacheDispatcher.WaitingRequestManager.a(r0, r5)
            if (r0 != 0) goto L2f
            java.util.concurrent.BlockingQueue<com.czhj.volley.Request<?>> r0 = r4.c
            r0.put(r5)
        L2f:
            return
        L30:
            boolean r1 = r0.isExpired()
            if (r1 == 0) goto L4c
            java.lang.String r1 = "cache-hit-expired"
            r5.addMarker(r1)
            r5.setCacheEntry(r0)
            com.czhj.volley.CacheDispatcher$WaitingRequestManager r0 = r4.f
            boolean r0 = com.czhj.volley.CacheDispatcher.WaitingRequestManager.a(r0, r5)
            if (r0 != 0) goto L4b
            java.util.concurrent.BlockingQueue<com.czhj.volley.Request<?>> r0 = r4.c
            r0.put(r5)
        L4b:
            return
        L4c:
            java.lang.String r1 = "cache-hit"
            r5.addMarker(r1)
            com.czhj.volley.NetworkResponse r1 = new com.czhj.volley.NetworkResponse
            byte[] r2 = r0.data
            java.util.Map<java.lang.String, java.lang.String> r3 = r0.responseHeaders
            r1.<init>(r2, r3)
            com.czhj.volley.Response r1 = r5.parseNetworkResponse(r1)
            java.lang.String r2 = "cache-hit-parsed"
            r5.addMarker(r2)
            boolean r2 = r0.refreshNeeded()
            if (r2 != 0) goto L6f
        L69:
            com.czhj.volley.ResponseDelivery r0 = r4.e
            r0.postResponse(r5, r1)
            goto L8c
        L6f:
            java.lang.String r2 = "cache-hit-refresh-needed"
            r5.addMarker(r2)
            r5.setCacheEntry(r0)
            r0 = 1
            r1.intermediate = r0
            com.czhj.volley.CacheDispatcher$WaitingRequestManager r0 = r4.f
            boolean r0 = com.czhj.volley.CacheDispatcher.WaitingRequestManager.a(r0, r5)
            if (r0 != 0) goto L69
            com.czhj.volley.ResponseDelivery r0 = r4.e
            com.czhj.volley.CacheDispatcher$1 r2 = new com.czhj.volley.CacheDispatcher$1
            r2.<init>(r4, r5)
            r0.postResponse(r5, r1, r2)
        L8c:
            return
    }

    public void quit() {
            r1 = this;
            r0 = 1
            r1.g = r0
            r1.interrupt()
            return
    }

    @Override
    public void run() {
            r3 = this;
            boolean r0 = com.czhj.volley.CacheDispatcher.a
            r1 = 0
            if (r0 == 0) goto Lc
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r2 = "start new dispatcher"
            com.czhj.volley.VolleyLog.v(r2, r0)
        Lc:
            r0 = 10
            android.os.Process.setThreadPriority(r0)
            com.czhj.volley.Cache r0 = r3.d
            r0.initialize()
        L16:
            r3.a()     // Catch: java.lang.InterruptedException -> L1a
            goto L16
        L1a:
            boolean r0 = r3.g
            if (r0 == 0) goto L26
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
            return
        L26:
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r2 = "Ignoring spurious interrupt of CacheDispatcher thread; use quit() to terminate it"
            com.czhj.volley.VolleyLog.e(r2, r0)
            goto L16
    }
}
