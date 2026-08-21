package com.czhj.volley;

public class NetworkDispatcher implements java.lang.Comparable, java.lang.Runnable {
    private final com.czhj.volley.Network a;
    private final com.czhj.volley.ResponseDelivery b;
    private final com.czhj.volley.Request c;
    private volatile boolean d;

    public NetworkDispatcher(com.czhj.volley.Network r2, com.czhj.volley.Request r3, com.czhj.volley.ResponseDelivery r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            r1.c = r3
            r1.a = r2
            r1.b = r4
            return
    }

    private void a(com.czhj.volley.Request<?> r1) {
            r0 = this;
            int r1 = r1.getTrafficStatsTag()
            android.net.TrafficStats.setThreadStatsTag(r1)
            return
    }

    private void a(com.czhj.volley.Request<?> r2, com.czhj.volley.VolleyError r3) {
            r1 = this;
            com.czhj.volley.VolleyError r3 = r2.parseNetworkError(r3)
            com.czhj.volley.ResponseDelivery r0 = r1.b
            r0.postError(r2, r3)
            return
    }

    @Override
    public int compareTo(java.lang.Object r3) {
            r2 = this;
            r0 = 1
            if (r3 == 0) goto L4
            goto L10
        L4:
            int r1 = r2.hashCode()
            int r3 = r3.hashCode()
            if (r1 == r3) goto Lf
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    public void processRequest(com.czhj.volley.Request<?> r7) {
            r6 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            java.lang.String r2 = "network-queue-take"
            r7.addMarker(r2)     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            boolean r2 = r7.isCanceled()     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            if (r2 == 0) goto L18
            java.lang.String r2 = "network-discard-cancelled"
            r7.a(r2)     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            r7.notifyListenerResponseNotUsable()     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            return
        L18:
            r6.a(r7)     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            com.czhj.volley.Network r2 = r6.a     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            com.czhj.volley.NetworkResponse r2 = r2.performRequest(r7)     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            java.lang.String r3 = "network-http-complete"
            r7.addMarker(r3)     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            boolean r3 = r2.notModified     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            if (r3 == 0) goto L39
            boolean r3 = r7.hasHadResponseDelivered()     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            if (r3 == 0) goto L39
            java.lang.String r2 = "not-modified"
            r7.a(r2)     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            r7.notifyListenerResponseNotUsable()     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            return
        L39:
            com.czhj.volley.Response r2 = r7.parseNetworkResponse(r2)     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            java.lang.String r3 = "network-parse-complete"
            r7.addMarker(r3)     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            r7.markDelivered()     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            com.czhj.volley.ResponseDelivery r3 = r6.b     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            r3.postResponse(r7, r2)     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            r7.notifyListenerResponseReceived(r2)     // Catch: java.lang.Throwable -> L4e com.czhj.volley.VolleyError -> L71
            goto L80
        L4e:
            r2 = move-exception
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r4 = 0
            java.lang.String r5 = r2.toString()
            r3[r4] = r5
            java.lang.String r4 = "Unhandled exception %s"
            com.czhj.volley.VolleyLog.e(r2, r4, r3)
            com.czhj.volley.VolleyError r3 = new com.czhj.volley.VolleyError
            r3.<init>(r2)
            long r4 = android.os.SystemClock.elapsedRealtime()
            long r4 = r4 - r0
            r3.a(r4)
            com.czhj.volley.ResponseDelivery r0 = r6.b
            r0.postError(r7, r3)
            goto L7d
        L71:
            r2 = move-exception
            long r3 = android.os.SystemClock.elapsedRealtime()
            long r3 = r3 - r0
            r2.a(r3)
            r6.a(r7, r2)
        L7d:
            r7.notifyListenerResponseNotUsable()
        L80:
            return
    }

    public void quit() {
            r1 = this;
            r0 = 1
            r1.d = r0
            return
    }

    @Override
    public void run() {
            r1 = this;
            com.czhj.volley.Request r0 = r1.c
            r1.processRequest(r0)
            return
    }
}
