package com.bianfeng.netlibsdk;

public abstract class Request<T> implements java.lang.Comparable<com.bianfeng.netlibsdk.Request<T>> {
    protected java.util.Map<java.lang.String, java.lang.String> headersMap;
    private boolean mCanceled;
    private final java.lang.Object mLock;
    private com.bianfeng.netlibsdk.RequestQueue mRequestQueue;
    private boolean mResponseDelivered;
    private com.bianfeng.netlibsdk.RetryPolicy mRetryPolicy;
    private java.lang.Integer mSequence;
    private boolean mShouldRetryConnectionErrors;
    private boolean mShouldRetryServerErrors;
    private java.lang.Object mTag;

    public interface Method {
        public static final int GET = 0;
        public static final int POST = 1;
    }

    public enum Priority extends java.lang.Enum<com.bianfeng.netlibsdk.Request.Priority> {
        private static final com.bianfeng.netlibsdk.Request.Priority[] $VALUES = null;
        public static final com.bianfeng.netlibsdk.Request.Priority HIGH = null;
        public static final com.bianfeng.netlibsdk.Request.Priority IMMEDIATE = null;
        public static final com.bianfeng.netlibsdk.Request.Priority LOW = null;
        public static final com.bianfeng.netlibsdk.Request.Priority NORMAL = null;

        static {
                com.bianfeng.netlibsdk.Request$Priority r0 = new com.bianfeng.netlibsdk.Request$Priority
                r1 = 0
                java.lang.String r2 = "LOW"
                r0.<init>(r2, r1)
                com.bianfeng.netlibsdk.Request.Priority.LOW = r0
                com.bianfeng.netlibsdk.Request$Priority r0 = new com.bianfeng.netlibsdk.Request$Priority
                r2 = 1
                java.lang.String r3 = "NORMAL"
                r0.<init>(r3, r2)
                com.bianfeng.netlibsdk.Request.Priority.NORMAL = r0
                com.bianfeng.netlibsdk.Request$Priority r0 = new com.bianfeng.netlibsdk.Request$Priority
                r3 = 2
                java.lang.String r4 = "HIGH"
                r0.<init>(r4, r3)
                com.bianfeng.netlibsdk.Request.Priority.HIGH = r0
                com.bianfeng.netlibsdk.Request$Priority r0 = new com.bianfeng.netlibsdk.Request$Priority
                r4 = 3
                java.lang.String r5 = "IMMEDIATE"
                r0.<init>(r5, r4)
                com.bianfeng.netlibsdk.Request.Priority.IMMEDIATE = r0
                r5 = 4
                com.bianfeng.netlibsdk.Request$Priority[] r5 = new com.bianfeng.netlibsdk.Request.Priority[r5]
                com.bianfeng.netlibsdk.Request$Priority r6 = com.bianfeng.netlibsdk.Request.Priority.LOW
                r5[r1] = r6
                com.bianfeng.netlibsdk.Request$Priority r1 = com.bianfeng.netlibsdk.Request.Priority.NORMAL
                r5[r2] = r1
                com.bianfeng.netlibsdk.Request$Priority r1 = com.bianfeng.netlibsdk.Request.Priority.HIGH
                r5[r3] = r1
                r5[r4] = r0
                com.bianfeng.netlibsdk.Request.Priority.$VALUES = r5
                return
        }

        Priority(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.bianfeng.netlibsdk.Request.Priority valueOf(java.lang.String r1) {
                java.lang.Class<com.bianfeng.netlibsdk.Request$Priority> r0 = com.bianfeng.netlibsdk.Request.Priority.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.bianfeng.netlibsdk.Request$Priority r1 = (com.bianfeng.netlibsdk.Request.Priority) r1
                return r1
        }

        public static com.bianfeng.netlibsdk.Request.Priority[] values() {
                com.bianfeng.netlibsdk.Request$Priority[] r0 = com.bianfeng.netlibsdk.Request.Priority.$VALUES
                java.lang.Object r0 = r0.clone()
                com.bianfeng.netlibsdk.Request$Priority[] r0 = (com.bianfeng.netlibsdk.Request.Priority[]) r0
                return r0
        }
    }

    public Request() {
            r1 = this;
            r1.<init>()
            java.util.TreeMap r0 = new java.util.TreeMap
            r0.<init>()
            r1.headersMap = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.mLock = r0
            r0 = 0
            r1.mCanceled = r0
            r1.mResponseDelivered = r0
            r1.mShouldRetryConnectionErrors = r0
            r1.mShouldRetryServerErrors = r0
            com.bianfeng.netlibsdk.DefaultRetryPolicy r0 = new com.bianfeng.netlibsdk.DefaultRetryPolicy
            r0.<init>()
            r1.setRetryPolicy(r0)
            return
    }

    protected void addHeader(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.headersMap
            r0.put(r2, r3)
            return
    }

    public abstract java.util.Map<java.lang.String, java.lang.String> addHeaders();

    public void addMarker(java.lang.String r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = "---"
            r0.append(r4)
            java.lang.Thread r4 = java.lang.Thread.currentThread()
            long r1 = r4.getId()
            r0.append(r1)
            java.lang.String r4 = r0.toString()
            com.bianfeng.netlibsdk.utils.NetLogger.i(r4)
            return
    }

    public void cancel() {
            r2 = this;
            java.lang.Object r0 = r2.mLock
            monitor-enter(r0)
            r1 = 1
            r2.mCanceled = r1     // Catch: java.lang.Throwable -> Ld
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.headersMap     // Catch: java.lang.Throwable -> Ld
            r1.clear()     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            return
        Ld:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            throw r1
    }

    public int compareTo(com.bianfeng.netlibsdk.Request<T> r3) {
            r2 = this;
            com.bianfeng.netlibsdk.Request$Priority r0 = r2.getPriority()
            com.bianfeng.netlibsdk.Request$Priority r1 = r3.getPriority()
            if (r0 != r1) goto L18
            java.lang.Integer r0 = r2.mSequence
            int r0 = r0.intValue()
            java.lang.Integer r3 = r3.mSequence
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
            com.bianfeng.netlibsdk.Request r1 = (com.bianfeng.netlibsdk.Request) r1
            int r1 = r0.compareTo(r1)
            return r1
    }

    public abstract void deliverError(com.bianfeng.netlibsdk.utils.NetException r1);

    protected abstract void deliverResponse(T r1);

    void finish(java.lang.String r4) {
            r3 = this;
            com.bianfeng.netlibsdk.RequestQueue r0 = r3.mRequestQueue
            if (r0 == 0) goto L7
            r0.finish(r3)
        L7:
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.headersMap
            r0.clear()
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            long r0 = r0.getId()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r4 = ";threadId="
            r2.append(r4)
            r2.append(r0)
            java.lang.String r4 = r2.toString()
            com.bianfeng.netlibsdk.utils.NetLogger.i(r4)
            java.lang.String r4 = r3.toString()
            com.bianfeng.netlibsdk.utils.NetLogger.i(r4)
            return
    }

    public byte[] getBody() throws java.io.UnsupportedEncodingException {
            r2 = this;
            java.lang.String r0 = r2.getRequestBody()
            java.lang.String r1 = "utf-8"
            byte[] r0 = r0.getBytes(r1)
            return r0
    }

    protected java.util.Map<java.lang.String, java.lang.String> getHeaders() {
            r2 = this;
            java.util.Map r0 = r2.addHeaders()
            if (r0 == 0) goto Lb
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.headersMap
            r1.putAll(r0)
        Lb:
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.headersMap
            return r0
    }

    public abstract int getMethod();

    public com.bianfeng.netlibsdk.Request.Priority getPriority() {
            r1 = this;
            com.bianfeng.netlibsdk.Request$Priority r0 = com.bianfeng.netlibsdk.Request.Priority.NORMAL
            return r0
    }

    public abstract java.lang.String getRequestBody();

    public com.bianfeng.netlibsdk.RetryPolicy getRetryPolicy() {
            r1 = this;
            com.bianfeng.netlibsdk.RetryPolicy r0 = r1.mRetryPolicy
            return r0
    }

    public final int getSequence() {
            r2 = this;
            java.lang.Integer r0 = r2.mSequence
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
            java.lang.Object r0 = r1.mTag
            return r0
    }

    public final int getTimeoutMs() {
            r1 = this;
            com.bianfeng.netlibsdk.RetryPolicy r0 = r1.getRetryPolicy()
            int r0 = r0.getCurrentTimeout()
            return r0
    }

    public abstract java.lang.String getUrl();

    public boolean hasHadResponseDelivered() {
            r2 = this;
            java.lang.Object r0 = r2.mLock
            monitor-enter(r0)
            boolean r1 = r2.mResponseDelivered     // Catch: java.lang.Throwable -> L7
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
            boolean r1 = r2.mCanceled     // Catch: java.lang.Throwable -> L7
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
            r2.mResponseDelivered = r1     // Catch: java.lang.Throwable -> L8
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8
            throw r1
    }

    protected com.bianfeng.netlibsdk.utils.NetException parseNetworkError(com.bianfeng.netlibsdk.utils.NetException r1) {
            r0 = this;
            return r1
    }

    protected abstract com.bianfeng.netlibsdk.Response<T> parseNetworkResponse(com.bianfeng.netlibsdk.NetworkResponse r1) throws com.bianfeng.netlibsdk.utils.NetException;

    public void setRequestQueue(com.bianfeng.netlibsdk.RequestQueue r1) {
            r0 = this;
            r0.mRequestQueue = r1
            return
    }

    public com.bianfeng.netlibsdk.Request<?> setRetryPolicy(com.bianfeng.netlibsdk.RetryPolicy r1) {
            r0 = this;
            r0.mRetryPolicy = r1
            return r0
    }

    public final com.bianfeng.netlibsdk.Request<?> setSequence(int r1) {
            r0 = this;
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.mSequence = r1
            return r0
    }

    public final com.bianfeng.netlibsdk.Request<?> setShouldRetryConnectionErrors(boolean r1) {
            r0 = this;
            r0.mShouldRetryConnectionErrors = r1
            return r0
    }

    public final com.bianfeng.netlibsdk.Request<?> setShouldRetryServerErrors(boolean r1) {
            r0 = this;
            r0.mShouldRetryServerErrors = r1
            return r0
    }

    public com.bianfeng.netlibsdk.Request<?> setTag(java.lang.Object r1) {
            r0 = this;
            r0.mTag = r1
            return r0
    }

    public final boolean shouldRetryConnectionErrors() {
            r1 = this;
            boolean r0 = r1.mShouldRetryConnectionErrors
            return r0
    }

    public final boolean shouldRetryServerErrors() {
            r1 = this;
            boolean r0 = r1.mShouldRetryServerErrors
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            boolean r1 = r3.isCanceled()
            if (r1 == 0) goto Le
            java.lang.String r1 = "[X] "
            goto L10
        Le:
            java.lang.String r1 = "[测试] "
        L10:
            r0.append(r1)
            java.lang.String r1 = "url: "
            r0.append(r1)
            java.lang.String r1 = r3.getUrl()
            r0.append(r1)
            java.lang.String r1 = "；请求策略："
            r0.append(r1)
            com.bianfeng.netlibsdk.Request$Priority r1 = r3.getPriority()
            r0.append(r1)
            java.lang.String r1 = " header: "
            r0.append(r1)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()
            java.util.Map<java.lang.String, java.lang.String> r2 = r3.headersMap
            java.lang.String r1 = r1.toJson(r2)
            r0.append(r1)
            java.lang.String r1 = " body: "
            r0.append(r1)
            java.lang.String r1 = r3.getRequestBody()
            r0.append(r1)
            java.lang.String r1 = "；序列号： "
            r0.append(r1)
            java.lang.Integer r1 = r3.mSequence
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
