package com.loopj.android.http;

class RetryHandler implements cz.msebera.android.httpclient.client.HttpRequestRetryHandler {
    private static final java.util.HashSet<java.lang.Class<?>> exceptionBlacklist = null;
    private static final java.util.HashSet<java.lang.Class<?>> exceptionWhitelist = null;
    private final int maxRetries;
    private final int retrySleepTimeMS;

    static {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.loopj.android.http.RetryHandler.exceptionWhitelist = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.loopj.android.http.RetryHandler.exceptionBlacklist = r0
            java.util.HashSet<java.lang.Class<?>> r0 = com.loopj.android.http.RetryHandler.exceptionWhitelist
            java.lang.Class<cz.msebera.android.httpclient.NoHttpResponseException> r1 = cz.msebera.android.httpclient.NoHttpResponseException.class
            r0.add(r1)
            java.util.HashSet<java.lang.Class<?>> r0 = com.loopj.android.http.RetryHandler.exceptionWhitelist
            java.lang.Class<java.net.UnknownHostException> r1 = java.net.UnknownHostException.class
            r0.add(r1)
            java.util.HashSet<java.lang.Class<?>> r0 = com.loopj.android.http.RetryHandler.exceptionWhitelist
            java.lang.Class<java.net.SocketException> r1 = java.net.SocketException.class
            r0.add(r1)
            java.util.HashSet<java.lang.Class<?>> r0 = com.loopj.android.http.RetryHandler.exceptionBlacklist
            java.lang.Class<java.io.InterruptedIOException> r1 = java.io.InterruptedIOException.class
            r0.add(r1)
            java.util.HashSet<java.lang.Class<?>> r0 = com.loopj.android.http.RetryHandler.exceptionBlacklist
            java.lang.Class<javax.net.ssl.SSLException> r1 = javax.net.ssl.SSLException.class
            r0.add(r1)
            return
    }

    public RetryHandler(int r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.maxRetries = r1
            r0.retrySleepTimeMS = r2
            return
    }

    static void addClassToBlacklist(java.lang.Class<?> r1) {
            java.util.HashSet<java.lang.Class<?>> r0 = com.loopj.android.http.RetryHandler.exceptionBlacklist
            r0.add(r1)
            return
    }

    static void addClassToWhitelist(java.lang.Class<?> r1) {
            java.util.HashSet<java.lang.Class<?>> r0 = com.loopj.android.http.RetryHandler.exceptionWhitelist
            r0.add(r1)
            return
    }

    protected boolean isInList(java.util.HashSet<java.lang.Class<?>> r2, java.lang.Throwable r3) {
            r1 = this;
            java.util.Iterator r2 = r2.iterator()
        L4:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L18
            java.lang.Object r0 = r2.next()
            java.lang.Class r0 = (java.lang.Class) r0
            boolean r0 = r0.isInstance(r3)
            if (r0 == 0) goto L4
            r2 = 1
            return r2
        L18:
            r2 = 0
            return r2
    }

    @Override
    public boolean retryRequest(java.io.IOException r5, int r6, cz.msebera.android.httpclient.protocol.HttpContext r7) {
            r4 = this;
            java.lang.String r0 = "http.request_sent"
            java.lang.Object r0 = r7.getAttribute(r0)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L14
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            int r3 = r4.maxRetries
            if (r6 <= r3) goto L1b
        L19:
            r2 = 0
            goto L2d
        L1b:
            java.util.HashSet<java.lang.Class<?>> r6 = com.loopj.android.http.RetryHandler.exceptionWhitelist
            boolean r6 = r4.isInList(r6, r5)
            if (r6 == 0) goto L24
            goto L2d
        L24:
            java.util.HashSet<java.lang.Class<?>> r6 = com.loopj.android.http.RetryHandler.exceptionBlacklist
            boolean r6 = r4.isInList(r6, r5)
            if (r6 == 0) goto L2d
            goto L19
        L2d:
            if (r2 == 0) goto L3a
            java.lang.String r6 = "http.request"
            java.lang.Object r6 = r7.getAttribute(r6)
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r6 = (cz.msebera.android.httpclient.client.methods.HttpUriRequest) r6
            if (r6 != 0) goto L3a
            return r1
        L3a:
            if (r2 == 0) goto L43
            int r5 = r4.retrySleepTimeMS
            long r5 = (long) r5
            android.os.SystemClock.sleep(r5)
            goto L46
        L43:
            r5.printStackTrace()
        L46:
            return r2
    }
}
