package org.cocos2dx.okhttp3;

final class RealCall implements org.cocos2dx.okhttp3.Call {
    final org.cocos2dx.okhttp3.OkHttpClient client;

    @javax.annotation.Nullable
    private org.cocos2dx.okhttp3.EventListener eventListener;
    private boolean executed;
    final boolean forWebSocket;
    final org.cocos2dx.okhttp3.Request originalRequest;
    final org.cocos2dx.okhttp3.internal.http.RetryAndFollowUpInterceptor retryAndFollowUpInterceptor;
    final org.cocos2dx.okio.AsyncTimeout timeout;


    final class AsyncCall extends org.cocos2dx.okhttp3.internal.NamedRunnable {
        static final boolean $assertionsDisabled = false;
        private final org.cocos2dx.okhttp3.Callback responseCallback;
        final org.cocos2dx.okhttp3.RealCall this$0;

        static {
                return
        }

        AsyncCall(org.cocos2dx.okhttp3.RealCall r3, org.cocos2dx.okhttp3.Callback r4) {
                r2 = this;
                r2.this$0 = r3
                r0 = 1
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r3 = r3.redactedUrl()
                r1 = 0
                r0[r1] = r3
                java.lang.String r3 = "OkHttp %s"
                r2.<init>(r3, r0)
                r2.responseCallback = r4
                return
        }

        @Override
        protected void execute() {
                r5 = this;
                org.cocos2dx.okhttp3.RealCall r0 = r5.this$0
                org.cocos2dx.okio.AsyncTimeout r0 = r0.timeout
                r0.enter()
                r0 = 0
                org.cocos2dx.okhttp3.RealCall r1 = r5.this$0     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L28 java.io.IOException -> L50
                org.cocos2dx.okhttp3.Response r0 = r1.getResponseWithInterceptorChain()     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L28 java.io.IOException -> L50
                r1 = 1
                org.cocos2dx.okhttp3.Callback r2 = r5.responseCallback     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L24 java.lang.Throwable -> L26
                org.cocos2dx.okhttp3.RealCall r3 = r5.this$0     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L24 java.lang.Throwable -> L26
                r2.onResponse(r3, r0)     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L24 java.lang.Throwable -> L26
            L16:
                org.cocos2dx.okhttp3.RealCall r0 = r5.this$0
                org.cocos2dx.okhttp3.OkHttpClient r0 = r0.client
                org.cocos2dx.okhttp3.Dispatcher r0 = r0.dispatcher()
                r0.finished(r5)
                goto L8e
            L22:
                r0 = move-exception
                goto L2b
            L24:
                r0 = move-exception
                goto L53
            L26:
                r0 = move-exception
                goto L8f
            L28:
                r1 = move-exception
                r0 = r1
                r1 = 0
            L2b:
                org.cocos2dx.okhttp3.RealCall r2 = r5.this$0     // Catch: java.lang.Throwable -> L26
                r2.cancel()     // Catch: java.lang.Throwable -> L26
                if (r1 != 0) goto L4f
                java.io.IOException r1 = new java.io.IOException     // Catch: java.lang.Throwable -> L26
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L26
                r2.<init>()     // Catch: java.lang.Throwable -> L26
                java.lang.String r3 = "canceled due to "
                r2.append(r3)     // Catch: java.lang.Throwable -> L26
                r2.append(r0)     // Catch: java.lang.Throwable -> L26
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L26
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L26
                org.cocos2dx.okhttp3.Callback r2 = r5.responseCallback     // Catch: java.lang.Throwable -> L26
                org.cocos2dx.okhttp3.RealCall r3 = r5.this$0     // Catch: java.lang.Throwable -> L26
                r2.onFailure(r3, r1)     // Catch: java.lang.Throwable -> L26
            L4f:
                throw r0     // Catch: java.lang.Throwable -> L26
            L50:
                r1 = move-exception
                r0 = r1
                r1 = 0
            L53:
                org.cocos2dx.okhttp3.RealCall r2 = r5.this$0     // Catch: java.lang.Throwable -> L26
                java.io.IOException r0 = r2.timeoutExit(r0)     // Catch: java.lang.Throwable -> L26
                if (r1 == 0) goto L7b
                org.cocos2dx.okhttp3.internal.platform.Platform r1 = org.cocos2dx.okhttp3.internal.platform.Platform.get()     // Catch: java.lang.Throwable -> L26
                r2 = 4
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L26
                r3.<init>()     // Catch: java.lang.Throwable -> L26
                java.lang.String r4 = "Callback failure for "
                r3.append(r4)     // Catch: java.lang.Throwable -> L26
                org.cocos2dx.okhttp3.RealCall r4 = r5.this$0     // Catch: java.lang.Throwable -> L26
                java.lang.String r4 = r4.toLoggableString()     // Catch: java.lang.Throwable -> L26
                r3.append(r4)     // Catch: java.lang.Throwable -> L26
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L26
                r1.log(r2, r3, r0)     // Catch: java.lang.Throwable -> L26
                goto L16
            L7b:
                org.cocos2dx.okhttp3.RealCall r1 = r5.this$0     // Catch: java.lang.Throwable -> L26
                org.cocos2dx.okhttp3.EventListener r1 = org.cocos2dx.okhttp3.RealCall.access$000(r1)     // Catch: java.lang.Throwable -> L26
                org.cocos2dx.okhttp3.RealCall r2 = r5.this$0     // Catch: java.lang.Throwable -> L26
                r1.callFailed(r2, r0)     // Catch: java.lang.Throwable -> L26
                org.cocos2dx.okhttp3.Callback r1 = r5.responseCallback     // Catch: java.lang.Throwable -> L26
                org.cocos2dx.okhttp3.RealCall r2 = r5.this$0     // Catch: java.lang.Throwable -> L26
                r1.onFailure(r2, r0)     // Catch: java.lang.Throwable -> L26
                goto L16
            L8e:
                return
            L8f:
                org.cocos2dx.okhttp3.RealCall r1 = r5.this$0
                org.cocos2dx.okhttp3.OkHttpClient r1 = r1.client
                org.cocos2dx.okhttp3.Dispatcher r1 = r1.dispatcher()
                r1.finished(r5)
                throw r0
        }

        void executeOn(java.util.concurrent.ExecutorService r3) {
                r2 = this;
                r3.execute(r2)     // Catch: java.lang.Throwable -> L4 java.util.concurrent.RejectedExecutionException -> L6
                goto L2e
            L4:
                r3 = move-exception
                goto L2f
            L6:
                r3 = move-exception
                java.io.InterruptedIOException r0 = new java.io.InterruptedIOException     // Catch: java.lang.Throwable -> L4
                java.lang.String r1 = "executor rejected"
                r0.<init>(r1)     // Catch: java.lang.Throwable -> L4
                r0.initCause(r3)     // Catch: java.lang.Throwable -> L4
                org.cocos2dx.okhttp3.RealCall r3 = r2.this$0     // Catch: java.lang.Throwable -> L4
                org.cocos2dx.okhttp3.EventListener r3 = org.cocos2dx.okhttp3.RealCall.access$000(r3)     // Catch: java.lang.Throwable -> L4
                org.cocos2dx.okhttp3.RealCall r1 = r2.this$0     // Catch: java.lang.Throwable -> L4
                r3.callFailed(r1, r0)     // Catch: java.lang.Throwable -> L4
                org.cocos2dx.okhttp3.Callback r3 = r2.responseCallback     // Catch: java.lang.Throwable -> L4
                org.cocos2dx.okhttp3.RealCall r1 = r2.this$0     // Catch: java.lang.Throwable -> L4
                r3.onFailure(r1, r0)     // Catch: java.lang.Throwable -> L4
                org.cocos2dx.okhttp3.RealCall r3 = r2.this$0
                org.cocos2dx.okhttp3.OkHttpClient r3 = r3.client
                org.cocos2dx.okhttp3.Dispatcher r3 = r3.dispatcher()
                r3.finished(r2)
            L2e:
                return
            L2f:
                org.cocos2dx.okhttp3.RealCall r0 = r2.this$0
                org.cocos2dx.okhttp3.OkHttpClient r0 = r0.client
                org.cocos2dx.okhttp3.Dispatcher r0 = r0.dispatcher()
                r0.finished(r2)
                throw r3
        }

        org.cocos2dx.okhttp3.RealCall get() {
                r1 = this;
                org.cocos2dx.okhttp3.RealCall r0 = r1.this$0
                return r0
        }

        java.lang.String host() {
                r1 = this;
                org.cocos2dx.okhttp3.RealCall r0 = r1.this$0
                org.cocos2dx.okhttp3.Request r0 = r0.originalRequest
                org.cocos2dx.okhttp3.HttpUrl r0 = r0.url()
                java.lang.String r0 = r0.host()
                return r0
        }

        org.cocos2dx.okhttp3.Request request() {
                r1 = this;
                org.cocos2dx.okhttp3.RealCall r0 = r1.this$0
                org.cocos2dx.okhttp3.Request r0 = r0.originalRequest
                return r0
        }
    }

    private RealCall(org.cocos2dx.okhttp3.OkHttpClient r3, org.cocos2dx.okhttp3.Request r4, boolean r5) {
            r2 = this;
            r2.<init>()
            r2.client = r3
            r2.originalRequest = r4
            r2.forWebSocket = r5
            org.cocos2dx.okhttp3.internal.http.RetryAndFollowUpInterceptor r4 = new org.cocos2dx.okhttp3.internal.http.RetryAndFollowUpInterceptor
            r4.<init>(r3, r5)
            r2.retryAndFollowUpInterceptor = r4
            org.cocos2dx.okhttp3.RealCall$1 r4 = new org.cocos2dx.okhttp3.RealCall$1
            r4.<init>(r2)
            r2.timeout = r4
            org.cocos2dx.okio.AsyncTimeout r4 = r2.timeout
            int r3 = r3.callTimeoutMillis()
            long r0 = (long) r3
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS
            r4.timeout(r0, r3)
            return
    }

    static org.cocos2dx.okhttp3.EventListener access$000(org.cocos2dx.okhttp3.RealCall r0) {
            org.cocos2dx.okhttp3.EventListener r0 = r0.eventListener
            return r0
    }

    private void captureCallStackTrace() {
            r2 = this;
            org.cocos2dx.okhttp3.internal.platform.Platform r0 = org.cocos2dx.okhttp3.internal.platform.Platform.get()
            java.lang.String r1 = "response.body().close()"
            java.lang.Object r0 = r0.getStackTraceForCloseable(r1)
            org.cocos2dx.okhttp3.internal.http.RetryAndFollowUpInterceptor r1 = r2.retryAndFollowUpInterceptor
            r1.setCallStackTrace(r0)
            return
    }

    static org.cocos2dx.okhttp3.RealCall newRealCall(org.cocos2dx.okhttp3.OkHttpClient r1, org.cocos2dx.okhttp3.Request r2, boolean r3) {
            org.cocos2dx.okhttp3.RealCall r0 = new org.cocos2dx.okhttp3.RealCall
            r0.<init>(r1, r2, r3)
            org.cocos2dx.okhttp3.EventListener$Factory r1 = r1.eventListenerFactory()
            org.cocos2dx.okhttp3.EventListener r1 = r1.create(r0)
            r0.eventListener = r1
            return r0
    }

    @Override
    public void cancel() {
            r1 = this;
            org.cocos2dx.okhttp3.internal.http.RetryAndFollowUpInterceptor r0 = r1.retryAndFollowUpInterceptor
            r0.cancel()
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            org.cocos2dx.okhttp3.RealCall r0 = r1.clone()
            return r0
    }

    @Override
    public org.cocos2dx.okhttp3.Call clone() {
            r1 = this;
            org.cocos2dx.okhttp3.RealCall r0 = r1.clone()
            return r0
    }

    @Override
    public org.cocos2dx.okhttp3.RealCall clone() {
            r3 = this;
            org.cocos2dx.okhttp3.OkHttpClient r0 = r3.client
            org.cocos2dx.okhttp3.Request r1 = r3.originalRequest
            boolean r2 = r3.forWebSocket
            org.cocos2dx.okhttp3.RealCall r0 = newRealCall(r0, r1, r2)
            return r0
    }

    @Override
    public void enqueue(org.cocos2dx.okhttp3.Callback r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.executed     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L20
            r0 = 1
            r2.executed = r0     // Catch: java.lang.Throwable -> L28
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L28
            r2.captureCallStackTrace()
            org.cocos2dx.okhttp3.EventListener r0 = r2.eventListener
            r0.callStart(r2)
            org.cocos2dx.okhttp3.OkHttpClient r0 = r2.client
            org.cocos2dx.okhttp3.Dispatcher r0 = r0.dispatcher()
            org.cocos2dx.okhttp3.RealCall$AsyncCall r1 = new org.cocos2dx.okhttp3.RealCall$AsyncCall
            r1.<init>(r2, r3)
            r0.enqueue(r1)
            return
        L20:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L28
            java.lang.String r0 = "Already Executed"
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L28
            throw r3     // Catch: java.lang.Throwable -> L28
        L28:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L28
            throw r3
    }

    @Override
    public org.cocos2dx.okhttp3.Response execute() throws java.io.IOException {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.executed     // Catch: java.lang.Throwable -> L56
            if (r0 != 0) goto L4e
            r0 = 1
            r2.executed = r0     // Catch: java.lang.Throwable -> L56
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L56
            r2.captureCallStackTrace()
            org.cocos2dx.okio.AsyncTimeout r0 = r2.timeout
            r0.enter()
            org.cocos2dx.okhttp3.EventListener r0 = r2.eventListener
            r0.callStart(r2)
            org.cocos2dx.okhttp3.OkHttpClient r0 = r2.client     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            org.cocos2dx.okhttp3.Dispatcher r0 = r0.dispatcher()     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            r0.executed(r2)     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            org.cocos2dx.okhttp3.Response r0 = r2.getResponseWithInterceptorChain()     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            if (r0 == 0) goto L2f
            org.cocos2dx.okhttp3.OkHttpClient r1 = r2.client
            org.cocos2dx.okhttp3.Dispatcher r1 = r1.dispatcher()
            r1.finished(r2)
            return r0
        L2f:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            java.lang.String r1 = "Canceled"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            throw r0     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
        L37:
            r0 = move-exception
            goto L44
        L39:
            r0 = move-exception
            java.io.IOException r0 = r2.timeoutExit(r0)     // Catch: java.lang.Throwable -> L37
            org.cocos2dx.okhttp3.EventListener r1 = r2.eventListener     // Catch: java.lang.Throwable -> L37
            r1.callFailed(r2, r0)     // Catch: java.lang.Throwable -> L37
            throw r0     // Catch: java.lang.Throwable -> L37
        L44:
            org.cocos2dx.okhttp3.OkHttpClient r1 = r2.client
            org.cocos2dx.okhttp3.Dispatcher r1 = r1.dispatcher()
            r1.finished(r2)
            throw r0
        L4e:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = "Already Executed"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L56
            throw r0     // Catch: java.lang.Throwable -> L56
        L56:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L56
            throw r0
    }

    org.cocos2dx.okhttp3.Response getResponseWithInterceptorChain() throws java.io.IOException {
            r13 = this;
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            org.cocos2dx.okhttp3.OkHttpClient r0 = r13.client
            java.util.List r0 = r0.interceptors()
            r1.addAll(r0)
            org.cocos2dx.okhttp3.internal.http.RetryAndFollowUpInterceptor r0 = r13.retryAndFollowUpInterceptor
            r1.add(r0)
            org.cocos2dx.okhttp3.internal.http.BridgeInterceptor r0 = new org.cocos2dx.okhttp3.internal.http.BridgeInterceptor
            org.cocos2dx.okhttp3.OkHttpClient r2 = r13.client
            org.cocos2dx.okhttp3.CookieJar r2 = r2.cookieJar()
            r0.<init>(r2)
            r1.add(r0)
            org.cocos2dx.okhttp3.internal.cache.CacheInterceptor r0 = new org.cocos2dx.okhttp3.internal.cache.CacheInterceptor
            org.cocos2dx.okhttp3.OkHttpClient r2 = r13.client
            org.cocos2dx.okhttp3.internal.cache.InternalCache r2 = r2.internalCache()
            r0.<init>(r2)
            r1.add(r0)
            org.cocos2dx.okhttp3.internal.connection.ConnectInterceptor r0 = new org.cocos2dx.okhttp3.internal.connection.ConnectInterceptor
            org.cocos2dx.okhttp3.OkHttpClient r2 = r13.client
            r0.<init>(r2)
            r1.add(r0)
            boolean r0 = r13.forWebSocket
            if (r0 != 0) goto L46
            org.cocos2dx.okhttp3.OkHttpClient r0 = r13.client
            java.util.List r0 = r0.networkInterceptors()
            r1.addAll(r0)
        L46:
            org.cocos2dx.okhttp3.internal.http.CallServerInterceptor r0 = new org.cocos2dx.okhttp3.internal.http.CallServerInterceptor
            boolean r2 = r13.forWebSocket
            r0.<init>(r2)
            r1.add(r0)
            org.cocos2dx.okhttp3.internal.http.RealInterceptorChain r12 = new org.cocos2dx.okhttp3.internal.http.RealInterceptorChain
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            org.cocos2dx.okhttp3.Request r6 = r13.originalRequest
            org.cocos2dx.okhttp3.EventListener r8 = r13.eventListener
            org.cocos2dx.okhttp3.OkHttpClient r0 = r13.client
            int r9 = r0.connectTimeoutMillis()
            org.cocos2dx.okhttp3.OkHttpClient r0 = r13.client
            int r10 = r0.readTimeoutMillis()
            org.cocos2dx.okhttp3.OkHttpClient r0 = r13.client
            int r11 = r0.writeTimeoutMillis()
            r0 = r12
            r7 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            org.cocos2dx.okhttp3.Request r0 = r13.originalRequest
            org.cocos2dx.okhttp3.Response r0 = r12.proceed(r0)
            org.cocos2dx.okhttp3.internal.http.RetryAndFollowUpInterceptor r1 = r13.retryAndFollowUpInterceptor
            boolean r1 = r1.isCanceled()
            if (r1 != 0) goto L80
            return r0
        L80:
            org.cocos2dx.okhttp3.internal.Util.closeQuietly(r0)
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "Canceled"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public boolean isCanceled() {
            r1 = this;
            org.cocos2dx.okhttp3.internal.http.RetryAndFollowUpInterceptor r0 = r1.retryAndFollowUpInterceptor
            boolean r0 = r0.isCanceled()
            return r0
    }

    @Override
    public synchronized boolean isExecuted() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.executed     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    java.lang.String redactedUrl() {
            r1 = this;
            org.cocos2dx.okhttp3.Request r0 = r1.originalRequest
            org.cocos2dx.okhttp3.HttpUrl r0 = r0.url()
            java.lang.String r0 = r0.redact()
            return r0
    }

    @Override
    public org.cocos2dx.okhttp3.Request request() {
            r1 = this;
            org.cocos2dx.okhttp3.Request r0 = r1.originalRequest
            return r0
    }

    org.cocos2dx.okhttp3.internal.connection.StreamAllocation streamAllocation() {
            r1 = this;
            org.cocos2dx.okhttp3.internal.http.RetryAndFollowUpInterceptor r0 = r1.retryAndFollowUpInterceptor
            org.cocos2dx.okhttp3.internal.connection.StreamAllocation r0 = r0.streamAllocation()
            return r0
    }

    @Override
    public org.cocos2dx.okio.Timeout timeout() {
            r1 = this;
            org.cocos2dx.okio.AsyncTimeout r0 = r1.timeout
            return r0
    }

    @javax.annotation.Nullable
    java.io.IOException timeoutExit(@javax.annotation.Nullable java.io.IOException r3) {
            r2 = this;
            org.cocos2dx.okio.AsyncTimeout r0 = r2.timeout
            boolean r0 = r0.exit()
            if (r0 != 0) goto L9
            return r3
        L9:
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            java.lang.String r1 = "timeout"
            r0.<init>(r1)
            if (r3 == 0) goto L15
            r0.initCause(r3)
        L15:
            return r0
    }

    java.lang.String toLoggableString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            boolean r1 = r2.isCanceled()
            if (r1 == 0) goto Le
            java.lang.String r1 = "canceled "
            goto L10
        Le:
            java.lang.String r1 = ""
        L10:
            r0.append(r1)
            boolean r1 = r2.forWebSocket
            if (r1 == 0) goto L1a
            java.lang.String r1 = "web socket"
            goto L1c
        L1a:
            java.lang.String r1 = "call"
        L1c:
            r0.append(r1)
            java.lang.String r1 = " to "
            r0.append(r1)
            java.lang.String r1 = r2.redactedUrl()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
