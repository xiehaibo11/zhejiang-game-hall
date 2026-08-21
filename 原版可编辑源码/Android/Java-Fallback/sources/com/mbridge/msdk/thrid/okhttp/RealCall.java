package com.mbridge.msdk.thrid.okhttp;

final class RealCall implements com.mbridge.msdk.thrid.okhttp.Call {
    final com.mbridge.msdk.thrid.okhttp.OkHttpClient client;

    @javax.annotation.Nullable
    private com.mbridge.msdk.thrid.okhttp.EventListener eventListener;
    private boolean executed;
    final boolean forWebSocket;
    final com.mbridge.msdk.thrid.okhttp.Request originalRequest;
    final com.mbridge.msdk.thrid.okhttp.internal.http.RetryAndFollowUpInterceptor retryAndFollowUpInterceptor;
    final com.mbridge.msdk.thrid.okio.AsyncTimeout timeout;


    final class AsyncCall extends com.mbridge.msdk.thrid.okhttp.internal.NamedRunnable {
        static final boolean $assertionsDisabled = false;
        private final com.mbridge.msdk.thrid.okhttp.Callback responseCallback;
        final com.mbridge.msdk.thrid.okhttp.RealCall this$0;

        static {
                java.lang.Class<com.mbridge.msdk.thrid.okhttp.RealCall> r0 = com.mbridge.msdk.thrid.okhttp.RealCall.class
                return
        }

        AsyncCall(com.mbridge.msdk.thrid.okhttp.RealCall r3, com.mbridge.msdk.thrid.okhttp.Callback r4) {
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
                r6 = this;
                com.mbridge.msdk.thrid.okhttp.RealCall r0 = r6.this$0
                com.mbridge.msdk.thrid.okio.AsyncTimeout r0 = r0.timeout
                r0.enter()
                r0 = 0
                com.mbridge.msdk.thrid.okhttp.RealCall r1 = r6.this$0     // Catch: java.lang.Throwable -> L27 java.io.IOException -> L50
                com.mbridge.msdk.thrid.okhttp.Response r0 = r1.getResponseWithInterceptorChain()     // Catch: java.lang.Throwable -> L27 java.io.IOException -> L50
                r1 = 1
                com.mbridge.msdk.thrid.okhttp.Callback r2 = r6.responseCallback     // Catch: java.lang.Throwable -> L23 java.io.IOException -> L25
                com.mbridge.msdk.thrid.okhttp.RealCall r3 = r6.this$0     // Catch: java.lang.Throwable -> L23 java.io.IOException -> L25
                r2.onResponse(r3, r0)     // Catch: java.lang.Throwable -> L23 java.io.IOException -> L25
            L16:
                com.mbridge.msdk.thrid.okhttp.RealCall r0 = r6.this$0
                com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r0.client
                com.mbridge.msdk.thrid.okhttp.Dispatcher r0 = r0.dispatcher()
                r0.finished(r6)
                goto L8f
            L23:
                r0 = move-exception
                goto L2b
            L25:
                r0 = move-exception
                goto L54
            L27:
                r1 = move-exception
                r5 = r1
                r1 = r0
                r0 = r5
            L2b:
                com.mbridge.msdk.thrid.okhttp.RealCall r2 = r6.this$0     // Catch: java.lang.Throwable -> L90
                r2.cancel()     // Catch: java.lang.Throwable -> L90
                if (r1 != 0) goto L4f
                java.io.IOException r1 = new java.io.IOException     // Catch: java.lang.Throwable -> L90
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L90
                r2.<init>()     // Catch: java.lang.Throwable -> L90
                java.lang.String r3 = "canceled due to "
                r2.append(r3)     // Catch: java.lang.Throwable -> L90
                r2.append(r0)     // Catch: java.lang.Throwable -> L90
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L90
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L90
                com.mbridge.msdk.thrid.okhttp.Callback r2 = r6.responseCallback     // Catch: java.lang.Throwable -> L90
                com.mbridge.msdk.thrid.okhttp.RealCall r3 = r6.this$0     // Catch: java.lang.Throwable -> L90
                r2.onFailure(r3, r1)     // Catch: java.lang.Throwable -> L90
            L4f:
                throw r0     // Catch: java.lang.Throwable -> L90
            L50:
                r1 = move-exception
                r5 = r1
                r1 = r0
                r0 = r5
            L54:
                com.mbridge.msdk.thrid.okhttp.RealCall r2 = r6.this$0     // Catch: java.lang.Throwable -> L90
                java.io.IOException r0 = r2.timeoutExit(r0)     // Catch: java.lang.Throwable -> L90
                if (r1 == 0) goto L7c
                com.mbridge.msdk.thrid.okhttp.internal.platform.Platform r1 = com.mbridge.msdk.thrid.okhttp.internal.platform.Platform.get()     // Catch: java.lang.Throwable -> L90
                r2 = 4
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L90
                r3.<init>()     // Catch: java.lang.Throwable -> L90
                java.lang.String r4 = "Callback failure for "
                r3.append(r4)     // Catch: java.lang.Throwable -> L90
                com.mbridge.msdk.thrid.okhttp.RealCall r4 = r6.this$0     // Catch: java.lang.Throwable -> L90
                java.lang.String r4 = r4.toLoggableString()     // Catch: java.lang.Throwable -> L90
                r3.append(r4)     // Catch: java.lang.Throwable -> L90
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L90
                r1.log(r2, r3, r0)     // Catch: java.lang.Throwable -> L90
                goto L16
            L7c:
                com.mbridge.msdk.thrid.okhttp.RealCall r1 = r6.this$0     // Catch: java.lang.Throwable -> L90
                com.mbridge.msdk.thrid.okhttp.EventListener r1 = com.mbridge.msdk.thrid.okhttp.RealCall.access$000(r1)     // Catch: java.lang.Throwable -> L90
                com.mbridge.msdk.thrid.okhttp.RealCall r2 = r6.this$0     // Catch: java.lang.Throwable -> L90
                r1.callFailed(r2, r0)     // Catch: java.lang.Throwable -> L90
                com.mbridge.msdk.thrid.okhttp.Callback r1 = r6.responseCallback     // Catch: java.lang.Throwable -> L90
                com.mbridge.msdk.thrid.okhttp.RealCall r2 = r6.this$0     // Catch: java.lang.Throwable -> L90
                r1.onFailure(r2, r0)     // Catch: java.lang.Throwable -> L90
                goto L16
            L8f:
                return
            L90:
                r0 = move-exception
                com.mbridge.msdk.thrid.okhttp.RealCall r1 = r6.this$0
                com.mbridge.msdk.thrid.okhttp.OkHttpClient r1 = r1.client
                com.mbridge.msdk.thrid.okhttp.Dispatcher r1 = r1.dispatcher()
                r1.finished(r6)
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
                com.mbridge.msdk.thrid.okhttp.RealCall r3 = r2.this$0     // Catch: java.lang.Throwable -> L4
                com.mbridge.msdk.thrid.okhttp.EventListener r3 = com.mbridge.msdk.thrid.okhttp.RealCall.access$000(r3)     // Catch: java.lang.Throwable -> L4
                com.mbridge.msdk.thrid.okhttp.RealCall r1 = r2.this$0     // Catch: java.lang.Throwable -> L4
                r3.callFailed(r1, r0)     // Catch: java.lang.Throwable -> L4
                com.mbridge.msdk.thrid.okhttp.Callback r3 = r2.responseCallback     // Catch: java.lang.Throwable -> L4
                com.mbridge.msdk.thrid.okhttp.RealCall r1 = r2.this$0     // Catch: java.lang.Throwable -> L4
                r3.onFailure(r1, r0)     // Catch: java.lang.Throwable -> L4
                com.mbridge.msdk.thrid.okhttp.RealCall r3 = r2.this$0
                com.mbridge.msdk.thrid.okhttp.OkHttpClient r3 = r3.client
                com.mbridge.msdk.thrid.okhttp.Dispatcher r3 = r3.dispatcher()
                r3.finished(r2)
            L2e:
                return
            L2f:
                com.mbridge.msdk.thrid.okhttp.RealCall r0 = r2.this$0
                com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r0.client
                com.mbridge.msdk.thrid.okhttp.Dispatcher r0 = r0.dispatcher()
                r0.finished(r2)
                throw r3
        }

        com.mbridge.msdk.thrid.okhttp.RealCall get() {
                r1 = this;
                com.mbridge.msdk.thrid.okhttp.RealCall r0 = r1.this$0
                return r0
        }

        java.lang.String host() {
                r1 = this;
                com.mbridge.msdk.thrid.okhttp.RealCall r0 = r1.this$0
                com.mbridge.msdk.thrid.okhttp.Request r0 = r0.originalRequest
                com.mbridge.msdk.thrid.okhttp.HttpUrl r0 = r0.url()
                java.lang.String r0 = r0.host()
                return r0
        }

        com.mbridge.msdk.thrid.okhttp.Request request() {
                r1 = this;
                com.mbridge.msdk.thrid.okhttp.RealCall r0 = r1.this$0
                com.mbridge.msdk.thrid.okhttp.Request r0 = r0.originalRequest
                return r0
        }
    }

    private RealCall(com.mbridge.msdk.thrid.okhttp.OkHttpClient r3, com.mbridge.msdk.thrid.okhttp.Request r4, boolean r5) {
            r2 = this;
            r2.<init>()
            r2.client = r3
            r2.originalRequest = r4
            r2.forWebSocket = r5
            com.mbridge.msdk.thrid.okhttp.internal.http.RetryAndFollowUpInterceptor r4 = new com.mbridge.msdk.thrid.okhttp.internal.http.RetryAndFollowUpInterceptor
            r4.<init>(r3, r5)
            r2.retryAndFollowUpInterceptor = r4
            com.mbridge.msdk.thrid.okhttp.RealCall$1 r4 = new com.mbridge.msdk.thrid.okhttp.RealCall$1
            r4.<init>(r2)
            r2.timeout = r4
            int r3 = r3.callTimeoutMillis()
            long r0 = (long) r3
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS
            r4.timeout(r0, r3)
            return
    }

    static com.mbridge.msdk.thrid.okhttp.EventListener access$000(com.mbridge.msdk.thrid.okhttp.RealCall r0) {
            com.mbridge.msdk.thrid.okhttp.EventListener r0 = r0.eventListener
            return r0
    }

    private void captureCallStackTrace() {
            r2 = this;
            com.mbridge.msdk.thrid.okhttp.internal.platform.Platform r0 = com.mbridge.msdk.thrid.okhttp.internal.platform.Platform.get()
            java.lang.String r1 = "response.body().close()"
            java.lang.Object r0 = r0.getStackTraceForCloseable(r1)
            com.mbridge.msdk.thrid.okhttp.internal.http.RetryAndFollowUpInterceptor r1 = r2.retryAndFollowUpInterceptor
            r1.setCallStackTrace(r0)
            return
    }

    static com.mbridge.msdk.thrid.okhttp.RealCall newRealCall(com.mbridge.msdk.thrid.okhttp.OkHttpClient r1, com.mbridge.msdk.thrid.okhttp.Request r2, boolean r3) {
            com.mbridge.msdk.thrid.okhttp.RealCall r0 = new com.mbridge.msdk.thrid.okhttp.RealCall
            r0.<init>(r1, r2, r3)
            com.mbridge.msdk.thrid.okhttp.EventListener$Factory r1 = r1.eventListenerFactory()
            com.mbridge.msdk.thrid.okhttp.EventListener r1 = r1.create(r0)
            r0.eventListener = r1
            return r0
    }

    @Override
    public void cancel() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http.RetryAndFollowUpInterceptor r0 = r1.retryAndFollowUpInterceptor
            r0.cancel()
            return
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.Call clone() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.RealCall r0 = r1.clone()
            return r0
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.RealCall clone() {
            r3 = this;
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r3.client
            com.mbridge.msdk.thrid.okhttp.Request r1 = r3.originalRequest
            boolean r2 = r3.forWebSocket
            com.mbridge.msdk.thrid.okhttp.RealCall r0 = newRealCall(r0, r1, r2)
            return r0
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.RealCall r0 = r1.clone()
            return r0
    }

    @Override
    public void enqueue(com.mbridge.msdk.thrid.okhttp.Callback r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.executed     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L20
            r0 = 1
            r2.executed = r0     // Catch: java.lang.Throwable -> L28
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L28
            r2.captureCallStackTrace()
            com.mbridge.msdk.thrid.okhttp.EventListener r0 = r2.eventListener
            r0.callStart(r2)
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r2.client
            com.mbridge.msdk.thrid.okhttp.Dispatcher r0 = r0.dispatcher()
            com.mbridge.msdk.thrid.okhttp.RealCall$AsyncCall r1 = new com.mbridge.msdk.thrid.okhttp.RealCall$AsyncCall
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
    public com.mbridge.msdk.thrid.okhttp.Response execute() throws java.io.IOException {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.executed     // Catch: java.lang.Throwable -> L56
            if (r0 != 0) goto L4e
            r0 = 1
            r2.executed = r0     // Catch: java.lang.Throwable -> L56
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L56
            r2.captureCallStackTrace()
            com.mbridge.msdk.thrid.okio.AsyncTimeout r0 = r2.timeout
            r0.enter()
            com.mbridge.msdk.thrid.okhttp.EventListener r0 = r2.eventListener
            r0.callStart(r2)
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r2.client     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            com.mbridge.msdk.thrid.okhttp.Dispatcher r0 = r0.dispatcher()     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            r0.executed(r2)     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            com.mbridge.msdk.thrid.okhttp.Response r0 = r2.getResponseWithInterceptorChain()     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            if (r0 == 0) goto L2f
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r1 = r2.client
            com.mbridge.msdk.thrid.okhttp.Dispatcher r1 = r1.dispatcher()
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
            com.mbridge.msdk.thrid.okhttp.EventListener r1 = r2.eventListener     // Catch: java.lang.Throwable -> L37
            r1.callFailed(r2, r0)     // Catch: java.lang.Throwable -> L37
            throw r0     // Catch: java.lang.Throwable -> L37
        L44:
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r1 = r2.client
            com.mbridge.msdk.thrid.okhttp.Dispatcher r1 = r1.dispatcher()
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

    com.mbridge.msdk.thrid.okhttp.Response getResponseWithInterceptorChain() throws java.io.IOException {
            r13 = this;
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r13.client
            java.util.List r0 = r0.interceptors()
            r1.addAll(r0)
            com.mbridge.msdk.thrid.okhttp.internal.http.RetryAndFollowUpInterceptor r0 = r13.retryAndFollowUpInterceptor
            r1.add(r0)
            com.mbridge.msdk.thrid.okhttp.internal.http.BridgeInterceptor r0 = new com.mbridge.msdk.thrid.okhttp.internal.http.BridgeInterceptor
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r2 = r13.client
            com.mbridge.msdk.thrid.okhttp.CookieJar r2 = r2.cookieJar()
            r0.<init>(r2)
            r1.add(r0)
            com.mbridge.msdk.thrid.okhttp.internal.cache.CacheInterceptor r0 = new com.mbridge.msdk.thrid.okhttp.internal.cache.CacheInterceptor
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r2 = r13.client
            com.mbridge.msdk.thrid.okhttp.internal.cache.InternalCache r2 = r2.internalCache()
            r0.<init>(r2)
            r1.add(r0)
            com.mbridge.msdk.thrid.okhttp.internal.connection.ConnectInterceptor r0 = new com.mbridge.msdk.thrid.okhttp.internal.connection.ConnectInterceptor
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r2 = r13.client
            r0.<init>(r2)
            r1.add(r0)
            boolean r0 = r13.forWebSocket
            if (r0 != 0) goto L46
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r13.client
            java.util.List r0 = r0.networkInterceptors()
            r1.addAll(r0)
        L46:
            com.mbridge.msdk.thrid.okhttp.internal.http.CallServerInterceptor r0 = new com.mbridge.msdk.thrid.okhttp.internal.http.CallServerInterceptor
            boolean r2 = r13.forWebSocket
            r0.<init>(r2)
            r1.add(r0)
            com.mbridge.msdk.thrid.okhttp.internal.http.RealInterceptorChain r12 = new com.mbridge.msdk.thrid.okhttp.internal.http.RealInterceptorChain
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            com.mbridge.msdk.thrid.okhttp.Request r6 = r13.originalRequest
            com.mbridge.msdk.thrid.okhttp.EventListener r8 = r13.eventListener
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r13.client
            int r9 = r0.connectTimeoutMillis()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r13.client
            int r10 = r0.readTimeoutMillis()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r13.client
            int r11 = r0.writeTimeoutMillis()
            r0 = r12
            r7 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            com.mbridge.msdk.thrid.okhttp.Request r0 = r13.originalRequest
            com.mbridge.msdk.thrid.okhttp.Response r0 = r12.proceed(r0)
            com.mbridge.msdk.thrid.okhttp.internal.http.RetryAndFollowUpInterceptor r1 = r13.retryAndFollowUpInterceptor
            boolean r1 = r1.isCanceled()
            if (r1 != 0) goto L80
            return r0
        L80:
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r0)
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "Canceled"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public boolean isCanceled() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http.RetryAndFollowUpInterceptor r0 = r1.retryAndFollowUpInterceptor
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
            com.mbridge.msdk.thrid.okhttp.Request r0 = r1.originalRequest
            com.mbridge.msdk.thrid.okhttp.HttpUrl r0 = r0.url()
            java.lang.String r0 = r0.redact()
            return r0
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.Request request() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Request r0 = r1.originalRequest
            return r0
    }

    com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation streamAllocation() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http.RetryAndFollowUpInterceptor r0 = r1.retryAndFollowUpInterceptor
            com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r0 = r0.streamAllocation()
            return r0
    }

    @Override
    public com.mbridge.msdk.thrid.okio.Timeout timeout() {
            r1 = this;
            com.mbridge.msdk.thrid.okio.AsyncTimeout r0 = r1.timeout
            return r0
    }

    @javax.annotation.Nullable
    java.io.IOException timeoutExit(@javax.annotation.Nullable java.io.IOException r3) {
            r2 = this;
            com.mbridge.msdk.thrid.okio.AsyncTimeout r0 = r2.timeout
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
