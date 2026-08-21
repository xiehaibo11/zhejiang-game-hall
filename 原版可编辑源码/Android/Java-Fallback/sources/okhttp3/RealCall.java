package okhttp3;

final class RealCall implements okhttp3.Call {
    final okhttp3.OkHttpClient client;
    private okhttp3.EventListener eventListener;
    private boolean executed;
    final boolean forWebSocket;
    final okhttp3.Request originalRequest;
    final okhttp3.internal.http.RetryAndFollowUpInterceptor retryAndFollowUpInterceptor;

    class 1 extends okio.AsyncTimeout {
        final okhttp3.RealCall this$0;

        1(okhttp3.RealCall r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        protected void timedOut() {
                r1 = this;
                okhttp3.RealCall r0 = r1.this$0
                r0.cancel()
                return
        }
    }

    final class AsyncCall extends okhttp3.internal.NamedRunnable {
        private final okhttp3.Callback responseCallback;
        final okhttp3.RealCall this$0;

        AsyncCall(okhttp3.RealCall r3, okhttp3.Callback r4) {
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
                r0 = 1
                r1 = 0
                okhttp3.RealCall r2 = r5.this$0     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
                okhttp3.Response r2 = r2.getResponseWithInterceptorChain()     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
                okhttp3.RealCall r3 = r5.this$0     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
                okhttp3.internal.http.RetryAndFollowUpInterceptor r3 = r3.retryAndFollowUpInterceptor     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
                boolean r1 = r3.isCanceled()     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
                if (r1 == 0) goto L21
                okhttp3.Callback r1 = r5.responseCallback     // Catch: java.io.IOException -> L34 java.lang.Throwable -> L36
                okhttp3.RealCall r2 = r5.this$0     // Catch: java.io.IOException -> L34 java.lang.Throwable -> L36
                java.io.IOException r3 = new java.io.IOException     // Catch: java.io.IOException -> L34 java.lang.Throwable -> L36
                java.lang.String r4 = "Canceled"
                r3.<init>(r4)     // Catch: java.io.IOException -> L34 java.lang.Throwable -> L36
                r1.onFailure(r2, r3)     // Catch: java.io.IOException -> L34 java.lang.Throwable -> L36
                goto L28
            L21:
                okhttp3.Callback r1 = r5.responseCallback     // Catch: java.io.IOException -> L34 java.lang.Throwable -> L36
                okhttp3.RealCall r3 = r5.this$0     // Catch: java.io.IOException -> L34 java.lang.Throwable -> L36
                r1.onResponse(r3, r2)     // Catch: java.io.IOException -> L34 java.lang.Throwable -> L36
            L28:
                okhttp3.RealCall r0 = r5.this$0
                okhttp3.OkHttpClient r0 = r0.client
                okhttp3.Dispatcher r0 = r0.dispatcher()
                r0.finished(r5)
                goto L70
            L34:
                r1 = move-exception
                goto L3b
            L36:
                r0 = move-exception
                goto L71
            L38:
                r0 = move-exception
                r1 = r0
                r0 = 0
            L3b:
                if (r0 == 0) goto L5d
                okhttp3.internal.platform.Platform r0 = okhttp3.internal.platform.Platform.get()     // Catch: java.lang.Throwable -> L36
                r2 = 4
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L36
                r3.<init>()     // Catch: java.lang.Throwable -> L36
                java.lang.String r4 = "Callback failure for "
                r3.append(r4)     // Catch: java.lang.Throwable -> L36
                okhttp3.RealCall r4 = r5.this$0     // Catch: java.lang.Throwable -> L36
                java.lang.String r4 = r4.toLoggableString()     // Catch: java.lang.Throwable -> L36
                r3.append(r4)     // Catch: java.lang.Throwable -> L36
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L36
                r0.log(r2, r3, r1)     // Catch: java.lang.Throwable -> L36
                goto L28
            L5d:
                okhttp3.RealCall r0 = r5.this$0     // Catch: java.lang.Throwable -> L36
                okhttp3.EventListener r0 = okhttp3.RealCall.access$000(r0)     // Catch: java.lang.Throwable -> L36
                okhttp3.RealCall r2 = r5.this$0     // Catch: java.lang.Throwable -> L36
                r0.callFailed(r2, r1)     // Catch: java.lang.Throwable -> L36
                okhttp3.Callback r0 = r5.responseCallback     // Catch: java.lang.Throwable -> L36
                okhttp3.RealCall r2 = r5.this$0     // Catch: java.lang.Throwable -> L36
                r0.onFailure(r2, r1)     // Catch: java.lang.Throwable -> L36
                goto L28
            L70:
                return
            L71:
                okhttp3.RealCall r1 = r5.this$0
                okhttp3.OkHttpClient r1 = r1.client
                okhttp3.Dispatcher r1 = r1.dispatcher()
                r1.finished(r5)
                goto L7e
            L7d:
                throw r0
            L7e:
                goto L7d
        }

        okhttp3.RealCall get() {
                r1 = this;
                okhttp3.RealCall r0 = r1.this$0
                return r0
        }

        java.lang.String host() {
                r1 = this;
                okhttp3.RealCall r0 = r1.this$0
                okhttp3.Request r0 = r0.originalRequest
                okhttp3.HttpUrl r0 = r0.url()
                java.lang.String r0 = r0.host()
                return r0
        }

        okhttp3.Request request() {
                r1 = this;
                okhttp3.RealCall r0 = r1.this$0
                okhttp3.Request r0 = r0.originalRequest
                return r0
        }
    }

    private RealCall(okhttp3.OkHttpClient r1, okhttp3.Request r2, boolean r3) {
            r0 = this;
            r0.<init>()
            r0.client = r1
            r0.originalRequest = r2
            r0.forWebSocket = r3
            okhttp3.internal.http.RetryAndFollowUpInterceptor r2 = new okhttp3.internal.http.RetryAndFollowUpInterceptor
            r2.<init>(r1, r3)
            r0.retryAndFollowUpInterceptor = r2
            return
    }

    static okhttp3.EventListener access$000(okhttp3.RealCall r0) {
            okhttp3.EventListener r0 = r0.eventListener
            return r0
    }

    private void captureCallStackTrace() {
            r2 = this;
            okhttp3.internal.platform.Platform r0 = okhttp3.internal.platform.Platform.get()
            java.lang.String r1 = "response.body().close()"
            java.lang.Object r0 = r0.getStackTraceForCloseable(r1)
            okhttp3.internal.http.RetryAndFollowUpInterceptor r1 = r2.retryAndFollowUpInterceptor
            r1.setCallStackTrace(r0)
            return
    }

    static okhttp3.RealCall newRealCall(okhttp3.OkHttpClient r1, okhttp3.Request r2, boolean r3) {
            okhttp3.RealCall r0 = new okhttp3.RealCall
            r0.<init>(r1, r2, r3)
            okhttp3.EventListener$Factory r1 = r1.eventListenerFactory()
            okhttp3.EventListener r1 = r1.create(r0)
            r0.eventListener = r1
            return r0
    }

    @Override
    public void cancel() {
            r1 = this;
            okhttp3.internal.http.RetryAndFollowUpInterceptor r0 = r1.retryAndFollowUpInterceptor
            r0.cancel()
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            okhttp3.RealCall r0 = r1.clone()
            return r0
    }

    @Override
    public okhttp3.Call clone() {
            r1 = this;
            okhttp3.RealCall r0 = r1.clone()
            return r0
    }

    @Override
    public okhttp3.RealCall clone() {
            r3 = this;
            okhttp3.OkHttpClient r0 = r3.client
            okhttp3.Request r1 = r3.originalRequest
            boolean r2 = r3.forWebSocket
            okhttp3.RealCall r0 = newRealCall(r0, r1, r2)
            return r0
    }

    @Override
    public void enqueue(okhttp3.Callback r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.executed     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L20
            r0 = 1
            r2.executed = r0     // Catch: java.lang.Throwable -> L28
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L28
            r2.captureCallStackTrace()
            okhttp3.EventListener r0 = r2.eventListener
            r0.callStart(r2)
            okhttp3.OkHttpClient r0 = r2.client
            okhttp3.Dispatcher r0 = r0.dispatcher()
            okhttp3.RealCall$AsyncCall r1 = new okhttp3.RealCall$AsyncCall
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
    public okhttp3.Response execute() throws java.io.IOException {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.executed     // Catch: java.lang.Throwable -> L4d
            if (r0 != 0) goto L45
            r0 = 1
            r2.executed = r0     // Catch: java.lang.Throwable -> L4d
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L4d
            r2.captureCallStackTrace()
            okhttp3.EventListener r0 = r2.eventListener
            r0.callStart(r2)
            okhttp3.OkHttpClient r0 = r2.client     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            okhttp3.Dispatcher r0 = r0.dispatcher()     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            r0.executed(r2)     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            okhttp3.Response r0 = r2.getResponseWithInterceptorChain()     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            if (r0 == 0) goto L2a
            okhttp3.OkHttpClient r1 = r2.client
            okhttp3.Dispatcher r1 = r1.dispatcher()
            r1.finished(r2)
            return r0
        L2a:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            java.lang.String r1 = "Canceled"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            throw r0     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
        L32:
            r0 = move-exception
            goto L3b
        L34:
            r0 = move-exception
            okhttp3.EventListener r1 = r2.eventListener     // Catch: java.lang.Throwable -> L32
            r1.callFailed(r2, r0)     // Catch: java.lang.Throwable -> L32
            throw r0     // Catch: java.lang.Throwable -> L32
        L3b:
            okhttp3.OkHttpClient r1 = r2.client
            okhttp3.Dispatcher r1 = r1.dispatcher()
            r1.finished(r2)
            throw r0
        L45:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L4d
            java.lang.String r1 = "Already Executed"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L4d
            throw r0     // Catch: java.lang.Throwable -> L4d
        L4d:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L4d
            throw r0
    }

    okhttp3.Response getResponseWithInterceptorChain() throws java.io.IOException {
            r13 = this;
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            okhttp3.OkHttpClient r0 = r13.client
            java.util.List r0 = r0.interceptors()
            r1.addAll(r0)
            okhttp3.internal.http.RetryAndFollowUpInterceptor r0 = r13.retryAndFollowUpInterceptor
            r1.add(r0)
            okhttp3.internal.http.BridgeInterceptor r0 = new okhttp3.internal.http.BridgeInterceptor
            okhttp3.OkHttpClient r2 = r13.client
            okhttp3.CookieJar r2 = r2.cookieJar()
            r0.<init>(r2)
            r1.add(r0)
            okhttp3.internal.cache.CacheInterceptor r0 = new okhttp3.internal.cache.CacheInterceptor
            okhttp3.OkHttpClient r2 = r13.client
            okhttp3.internal.cache.InternalCache r2 = r2.internalCache()
            r0.<init>(r2)
            r1.add(r0)
            okhttp3.internal.connection.ConnectInterceptor r0 = new okhttp3.internal.connection.ConnectInterceptor
            okhttp3.OkHttpClient r2 = r13.client
            r0.<init>(r2)
            r1.add(r0)
            boolean r0 = r13.forWebSocket
            if (r0 != 0) goto L46
            okhttp3.OkHttpClient r0 = r13.client
            java.util.List r0 = r0.networkInterceptors()
            r1.addAll(r0)
        L46:
            okhttp3.internal.http.CallServerInterceptor r0 = new okhttp3.internal.http.CallServerInterceptor
            boolean r2 = r13.forWebSocket
            r0.<init>(r2)
            r1.add(r0)
            okhttp3.internal.http.RealInterceptorChain r12 = new okhttp3.internal.http.RealInterceptorChain
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            okhttp3.Request r6 = r13.originalRequest
            okhttp3.EventListener r8 = r13.eventListener
            okhttp3.OkHttpClient r0 = r13.client
            int r9 = r0.connectTimeoutMillis()
            okhttp3.OkHttpClient r0 = r13.client
            int r10 = r0.readTimeoutMillis()
            okhttp3.OkHttpClient r0 = r13.client
            int r11 = r0.writeTimeoutMillis()
            r0 = r12
            r7 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            okhttp3.Request r0 = r13.originalRequest
            okhttp3.Response r0 = r12.proceed(r0)
            return r0
    }

    @Override
    public boolean isCanceled() {
            r1 = this;
            okhttp3.internal.http.RetryAndFollowUpInterceptor r0 = r1.retryAndFollowUpInterceptor
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
            okhttp3.Request r0 = r1.originalRequest
            okhttp3.HttpUrl r0 = r0.url()
            java.lang.String r0 = r0.redact()
            return r0
    }

    @Override
    public okhttp3.Request request() {
            r1 = this;
            okhttp3.Request r0 = r1.originalRequest
            return r0
    }

    okhttp3.internal.connection.StreamAllocation streamAllocation() {
            r1 = this;
            okhttp3.internal.http.RetryAndFollowUpInterceptor r0 = r1.retryAndFollowUpInterceptor
            okhttp3.internal.connection.StreamAllocation r0 = r0.streamAllocation()
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
