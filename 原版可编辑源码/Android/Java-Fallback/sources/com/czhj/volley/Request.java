package com.czhj.volley;

public abstract class Request<T> implements java.lang.Comparable<com.czhj.volley.Request<T>> {
    private static final java.lang.String a = "UTF-8";
    private final com.czhj.volley.VolleyLog.MarkerLog b;
    private final int c;
    private final java.lang.String d;
    private final int e;
    private com.czhj.volley.Response.ErrorListener f;
    private java.lang.Integer g;
    private com.czhj.volley.RequestQueue h;
    private boolean i;
    private boolean j;
    private boolean k;
    private boolean l;
    private com.czhj.volley.RetryPolicy m;
    protected final java.lang.Object mLock;
    private com.czhj.volley.Cache.Entry n;
    private java.lang.Object o;
    private com.czhj.volley.Request.NetworkRequestCompleteListener p;
    private java.lang.String q;


    public interface Method {
        public static final int DELETE = 3;
        public static final int DEPRECATED_GET_OR_POST = -1;
        public static final int GET = 0;
        public static final int HEAD = 4;
        public static final int OPTIONS = 5;
        public static final int PATCH = 7;
        public static final int POST = 1;
        public static final int PUT = 2;
        public static final int TRACE = 6;
    }

    interface NetworkRequestCompleteListener {
        void onNoUsableResponseReceived(com.czhj.volley.Request<?> r1);

        void onResponseReceived(com.czhj.volley.Request<?> r1, com.czhj.volley.Response<?> r2);
    }

    public enum Priority extends java.lang.Enum<com.czhj.volley.Request.Priority> {
        private static final com.czhj.volley.Request.Priority[] $VALUES = null;
        public static final com.czhj.volley.Request.Priority HIGH = null;
        public static final com.czhj.volley.Request.Priority IMMEDIATE = null;
        public static final com.czhj.volley.Request.Priority LOW = null;
        public static final com.czhj.volley.Request.Priority NORMAL = null;

        static {
                com.czhj.volley.Request$Priority r0 = new com.czhj.volley.Request$Priority
                r1 = 0
                java.lang.String r2 = "LOW"
                r0.<init>(r2, r1)
                com.czhj.volley.Request.Priority.LOW = r0
                com.czhj.volley.Request$Priority r0 = new com.czhj.volley.Request$Priority
                r2 = 1
                java.lang.String r3 = "NORMAL"
                r0.<init>(r3, r2)
                com.czhj.volley.Request.Priority.NORMAL = r0
                com.czhj.volley.Request$Priority r0 = new com.czhj.volley.Request$Priority
                r3 = 2
                java.lang.String r4 = "HIGH"
                r0.<init>(r4, r3)
                com.czhj.volley.Request.Priority.HIGH = r0
                com.czhj.volley.Request$Priority r0 = new com.czhj.volley.Request$Priority
                r4 = 3
                java.lang.String r5 = "IMMEDIATE"
                r0.<init>(r5, r4)
                com.czhj.volley.Request.Priority.IMMEDIATE = r0
                r5 = 4
                com.czhj.volley.Request$Priority[] r5 = new com.czhj.volley.Request.Priority[r5]
                com.czhj.volley.Request$Priority r6 = com.czhj.volley.Request.Priority.LOW
                r5[r1] = r6
                com.czhj.volley.Request$Priority r1 = com.czhj.volley.Request.Priority.NORMAL
                r5[r2] = r1
                com.czhj.volley.Request$Priority r1 = com.czhj.volley.Request.Priority.HIGH
                r5[r3] = r1
                r5[r4] = r0
                com.czhj.volley.Request.Priority.$VALUES = r5
                return
        }

        Priority(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.czhj.volley.Request.Priority valueOf(java.lang.String r1) {
                java.lang.Class<com.czhj.volley.Request$Priority> r0 = com.czhj.volley.Request.Priority.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.czhj.volley.Request$Priority r1 = (com.czhj.volley.Request.Priority) r1
                return r1
        }

        public static com.czhj.volley.Request.Priority[] values() {
                com.czhj.volley.Request$Priority[] r0 = com.czhj.volley.Request.Priority.$VALUES
                java.lang.Object r0 = r0.clone()
                com.czhj.volley.Request$Priority[] r0 = (com.czhj.volley.Request.Priority[]) r0
                return r0
        }
    }

    public Request(int r3, java.lang.String r4, com.czhj.volley.Response.ErrorListener r5) {
            r2 = this;
            r2.<init>()
            boolean r0 = com.czhj.volley.VolleyLog.MarkerLog.ENABLED
            r1 = 0
            if (r0 == 0) goto Le
            com.czhj.volley.VolleyLog$MarkerLog r0 = new com.czhj.volley.VolleyLog$MarkerLog
            r0.<init>()
            goto Lf
        Le:
            r0 = r1
        Lf:
            r2.b = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.mLock = r0
            r0 = 1
            r2.i = r0
            r0 = 0
            r2.j = r0
            r2.k = r0
            r2.l = r0
            r2.n = r1
            r2.c = r3
            r2.d = r4
            r2.f = r5
            com.czhj.volley.DefaultRetryPolicy r3 = new com.czhj.volley.DefaultRetryPolicy
            r3.<init>()
            r2.setRetryPolicy(r3)
            int r3 = b(r4)
            r2.e = r3
            return
    }

    @java.lang.Deprecated
    public Request(java.lang.String r2, com.czhj.volley.Response.ErrorListener r3) {
            r1 = this;
            r0 = -1
            r1.<init>(r0, r2, r3)
            return
    }

    static com.czhj.volley.VolleyLog.MarkerLog a(com.czhj.volley.Request r0) {
            com.czhj.volley.VolleyLog$MarkerLog r0 = r0.b
            return r0
    }

    private byte[] a(java.util.Map<java.lang.String, java.lang.String> r4, java.lang.String r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Set r4 = r4.entrySet()     // Catch: java.io.UnsupportedEncodingException -> L47
            java.util.Iterator r4 = r4.iterator()     // Catch: java.io.UnsupportedEncodingException -> L47
        Ld:
            boolean r1 = r4.hasNext()     // Catch: java.io.UnsupportedEncodingException -> L47
            if (r1 == 0) goto L3e
            java.lang.Object r1 = r4.next()     // Catch: java.io.UnsupportedEncodingException -> L47
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.io.UnsupportedEncodingException -> L47
            java.lang.Object r2 = r1.getKey()     // Catch: java.io.UnsupportedEncodingException -> L47
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.io.UnsupportedEncodingException -> L47
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r5)     // Catch: java.io.UnsupportedEncodingException -> L47
            r0.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L47
            r2 = 61
            r0.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L47
            java.lang.Object r1 = r1.getValue()     // Catch: java.io.UnsupportedEncodingException -> L47
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.io.UnsupportedEncodingException -> L47
            java.lang.String r1 = java.net.URLEncoder.encode(r1, r5)     // Catch: java.io.UnsupportedEncodingException -> L47
            r0.append(r1)     // Catch: java.io.UnsupportedEncodingException -> L47
            r1 = 38
            r0.append(r1)     // Catch: java.io.UnsupportedEncodingException -> L47
            goto Ld
        L3e:
            java.lang.String r4 = r0.toString()     // Catch: java.io.UnsupportedEncodingException -> L47
            byte[] r4 = r4.getBytes(r5)     // Catch: java.io.UnsupportedEncodingException -> L47
            return r4
        L47:
            r4 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Encoding not supported: "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5, r4)
            throw r0
    }

    private static int b(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L17
            android.net.Uri r1 = android.net.Uri.parse(r1)
            if (r1 == 0) goto L17
            java.lang.String r1 = r1.getHost()
            if (r1 == 0) goto L17
            int r1 = r1.hashCode()
            return r1
        L17:
            r1 = 0
            return r1
    }

    void a(com.czhj.volley.Request.NetworkRequestCompleteListener r2) {
            r1 = this;
            java.lang.Object r0 = r1.mLock
            monitor-enter(r0)
            r1.p = r2     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return
        L7:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r2
    }

    void a(java.lang.String r5) {
            r4 = this;
            com.czhj.volley.RequestQueue r0 = r4.h
            if (r0 == 0) goto L7
            r0.a(r4)
        L7:
            boolean r0 = com.czhj.volley.VolleyLog.MarkerLog.ENABLED
            if (r0 == 0) goto L3d
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            long r0 = r0.getId()
            android.os.Looper r2 = android.os.Looper.myLooper()
            android.os.Looper r3 = android.os.Looper.getMainLooper()
            if (r2 == r3) goto L2f
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r3 = android.os.Looper.getMainLooper()
            r2.<init>(r3)
            com.czhj.volley.Request$1 r3 = new com.czhj.volley.Request$1
            r3.<init>(r4, r5, r0)
            r2.post(r3)
            return
        L2f:
            com.czhj.volley.VolleyLog$MarkerLog r2 = r4.b
            r2.add(r5, r0)
            com.czhj.volley.VolleyLog$MarkerLog r5 = r4.b
            java.lang.String r0 = r4.toString()
            r5.finish(r0)
        L3d:
            return
    }

    public void addMarker(java.lang.String r4) {
            r3 = this;
            boolean r0 = com.czhj.volley.VolleyLog.MarkerLog.ENABLED
            if (r0 == 0) goto L11
            com.czhj.volley.VolleyLog$MarkerLog r0 = r3.b
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            long r1 = r1.getId()
            r0.add(r4, r1)
        L11:
            return
    }

    public void cancel() {
            r2 = this;
            java.lang.Object r0 = r2.mLock
            monitor-enter(r0)
            r1 = 1
            r2.j = r1     // Catch: java.lang.Throwable -> Lb
            r1 = 0
            r2.f = r1     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return
        Lb:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r1
    }

    public int compareTo(com.czhj.volley.Request<T> r3) {
            r2 = this;
            com.czhj.volley.Request$Priority r0 = r2.getPriority()
            com.czhj.volley.Request$Priority r1 = r3.getPriority()
            if (r0 != r1) goto L18
            java.lang.Integer r0 = r2.g
            int r0 = r0.intValue()
            java.lang.Integer r3 = r3.g
            int r3 = r3.intValue()
            int r0 = r0 - r3
            goto L22
        L18:
            int r3 = r1.ordinal()
            int r0 = r0.ordinal()
            int r0 = r3 - r0
        L22:
            return r0
    }

    @Override
    public int compareTo(java.lang.Object r1) {
            r0 = this;
            com.czhj.volley.Request r1 = (com.czhj.volley.Request) r1
            int r1 = r0.compareTo(r1)
            return r1
    }

    public void deliverError(com.czhj.volley.VolleyError r3) {
            r2 = this;
            java.lang.Object r0 = r2.mLock
            monitor-enter(r0)
            com.czhj.volley.Response$ErrorListener r1 = r2.f     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            if (r1 == 0) goto Lb
            r1.onErrorResponse(r3)
        Lb:
            return
        Lc:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            throw r3
    }

    protected abstract void deliverResponse(T r1);

    public byte[] getBody() {
            r2 = this;
            java.util.Map r0 = r2.getParams()
            if (r0 == 0) goto L15
            int r1 = r0.size()
            if (r1 <= 0) goto L15
            java.lang.String r1 = r2.getParamsEncoding()
            byte[] r0 = r2.a(r0, r1)
            return r0
        L15:
            r0 = 0
            return r0
    }

    public java.lang.String getBodyContentType() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "application/x-www-form-urlencoded; charset="
            r0.append(r1)
            java.lang.String r1 = r2.getParamsEncoding()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public com.czhj.volley.Cache.Entry getCacheEntry() {
            r1 = this;
            com.czhj.volley.Cache$Entry r0 = r1.n
            return r0
    }

    public java.lang.String getCacheKey() {
            r3 = this;
            java.lang.String r0 = r3.getUrl()
            int r1 = r3.getMethod()
            if (r1 == 0) goto L26
            r2 = -1
            if (r1 != r2) goto Le
            goto L26
        Le:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r2.append(r1)
            r1 = 45
            r2.append(r1)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
        L26:
            return r0
    }

    public final int getConnectTimeoutMs() {
            r1 = this;
            com.czhj.volley.RetryPolicy r0 = r1.getRetryPolicy()
            int r0 = r0.getCurrentConnectTimeoutMs()
            return r0
    }

    public com.czhj.volley.Response.ErrorListener getErrorListener() {
            r2 = this;
            java.lang.Object r0 = r2.mLock
            monitor-enter(r0)
            com.czhj.volley.Response$ErrorListener r1 = r2.f     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    public java.util.Map<java.lang.String, java.lang.String> getHeaders() {
            r1 = this;
            java.util.Map r0 = java.util.Collections.emptyMap()
            return r0
    }

    public int getMaxLength() {
            r1 = this;
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            return r0
    }

    public int getMethod() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    protected java.util.Map<java.lang.String, java.lang.String> getParams() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected java.lang.String getParamsEncoding() {
            r1 = this;
            java.lang.String r0 = "UTF-8"
            return r0
    }

    public com.czhj.volley.Request.Priority getPriority() {
            r1 = this;
            com.czhj.volley.Request$Priority r0 = com.czhj.volley.Request.Priority.NORMAL
            return r0
    }

    public com.czhj.volley.RetryPolicy getRetryPolicy() {
            r1 = this;
            com.czhj.volley.RetryPolicy r0 = r1.m
            return r0
    }

    public final int getSequence() {
            r2 = this;
            java.lang.Integer r0 = r2.g
            if (r0 == 0) goto L9
            int r0 = r0.intValue()
            return r0
        L9:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "getSequence called before setSequence"
            r0.<init>(r1)
            throw r0
    }

    public java.lang.Object getTag() {
            r1 = this;
            java.lang.Object r0 = r1.o
            return r0
    }

    public final int getTimeoutMs() {
            r1 = this;
            com.czhj.volley.RetryPolicy r0 = r1.getRetryPolicy()
            int r0 = r0.getCurrentTimeout()
            return r0
    }

    public int getTrafficStatsTag() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    public java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = r1.q
            if (r0 != 0) goto L6
            java.lang.String r0 = r1.d
        L6:
            return r0
    }

    public boolean hasHadResponseDelivered() {
            r2 = this;
            java.lang.Object r0 = r2.mLock
            monitor-enter(r0)
            boolean r1 = r2.k     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    public boolean isCanceled() {
            r2 = this;
            java.lang.Object r0 = r2.mLock
            monitor-enter(r0)
            boolean r1 = r2.j     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    public void markDelivered() {
            r2 = this;
            java.lang.Object r0 = r2.mLock
            monitor-enter(r0)
            r1 = 1
            r2.k = r1     // Catch: java.lang.Throwable -> L8
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8
            throw r1
    }

    public void notifyListenerResponseNotUsable() {
            r2 = this;
            java.lang.Object r0 = r2.mLock
            monitor-enter(r0)
            com.czhj.volley.Request$NetworkRequestCompleteListener r1 = r2.p     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            if (r1 == 0) goto Lb
            r1.onNoUsableResponseReceived(r2)
        Lb:
            return
        Lc:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            throw r1
    }

    public void notifyListenerResponseReceived(com.czhj.volley.Response<?> r3) {
            r2 = this;
            java.lang.Object r0 = r2.mLock
            monitor-enter(r0)
            com.czhj.volley.Request$NetworkRequestCompleteListener r1 = r2.p     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            if (r1 == 0) goto Lb
            r1.onResponseReceived(r2, r3)
        Lb:
            return
        Lc:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            throw r3
    }

    protected com.czhj.volley.VolleyError parseNetworkError(com.czhj.volley.VolleyError r1) {
            r0 = this;
            return r1
    }

    protected abstract com.czhj.volley.Response<T> parseNetworkResponse(com.czhj.volley.NetworkResponse r1);

    public com.czhj.volley.Request<?> setCacheEntry(com.czhj.volley.Cache.Entry r1) {
            r0 = this;
            r0.n = r1
            return r0
    }

    public void setRedirectURL(java.lang.String r1) {
            r0 = this;
            r0.q = r1
            return
    }

    public com.czhj.volley.Request<?> setRequestQueue(com.czhj.volley.RequestQueue r1) {
            r0 = this;
            r0.h = r1
            return r0
    }

    public com.czhj.volley.Request<?> setRetryPolicy(com.czhj.volley.RetryPolicy r1) {
            r0 = this;
            r0.m = r1
            return r0
    }

    public final com.czhj.volley.Request<?> setSequence(int r1) {
            r0 = this;
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.g = r1
            return r0
    }

    public final com.czhj.volley.Request<?> setShouldCache(boolean r1) {
            r0 = this;
            r0.i = r1
            return r0
    }

    public final com.czhj.volley.Request<?> setShouldRetryServerErrors(boolean r1) {
            r0 = this;
            r0.l = r1
            return r0
    }

    public com.czhj.volley.Request<?> setTag(java.lang.Object r1) {
            r0 = this;
            r0.o = r1
            return r0
    }

    public final boolean shouldCache() {
            r1 = this;
            boolean r0 = r1.i
            return r0
    }

    public final boolean shouldRetryServerErrors() {
            r1 = this;
            boolean r0 = r1.l
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "0x"
            r0.append(r1)
            int r1 = r3.getTrafficStatsTag()
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            boolean r2 = r3.isCanceled()
            if (r2 == 0) goto L27
            java.lang.String r2 = "[X] "
            goto L29
        L27:
            java.lang.String r2 = "[ ] "
        L29:
            r1.append(r2)
            java.lang.String r2 = r3.getUrl()
            r1.append(r2)
            java.lang.String r2 = " "
            r1.append(r2)
            r1.append(r0)
            r1.append(r2)
            com.czhj.volley.Request$Priority r0 = r3.getPriority()
            r1.append(r0)
            r1.append(r2)
            java.lang.Integer r0 = r3.g
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }
}
