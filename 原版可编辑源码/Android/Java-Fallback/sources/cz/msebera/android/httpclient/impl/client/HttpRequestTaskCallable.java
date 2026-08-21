package cz.msebera.android.httpclient.impl.client;

class HttpRequestTaskCallable<V> implements java.util.concurrent.Callable<V> {
    private final cz.msebera.android.httpclient.concurrent.FutureCallback<V> callback;
    private final java.util.concurrent.atomic.AtomicBoolean cancelled;
    private final cz.msebera.android.httpclient.protocol.HttpContext context;
    private long ended;
    private final cz.msebera.android.httpclient.client.HttpClient httpclient;
    private final cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics metrics;
    private final cz.msebera.android.httpclient.client.methods.HttpUriRequest request;
    private final cz.msebera.android.httpclient.client.ResponseHandler<V> responseHandler;
    private final long scheduled;
    private long started;

    HttpRequestTaskCallable(cz.msebera.android.httpclient.client.HttpClient r3, cz.msebera.android.httpclient.client.methods.HttpUriRequest r4, cz.msebera.android.httpclient.protocol.HttpContext r5, cz.msebera.android.httpclient.client.ResponseHandler<V> r6, cz.msebera.android.httpclient.concurrent.FutureCallback<V> r7, cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics r8) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.cancelled = r0
            long r0 = java.lang.System.currentTimeMillis()
            r2.scheduled = r0
            r0 = -1
            r2.started = r0
            r2.ended = r0
            r2.httpclient = r3
            r2.responseHandler = r6
            r2.request = r4
            r2.context = r5
            r2.callback = r7
            r2.metrics = r8
            return
    }

    @Override
    public V call() throws java.lang.Exception {
            r4 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r4.cancelled
            boolean r0 = r0.get()
            if (r0 != 0) goto La3
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics r0 = r4.metrics     // Catch: java.lang.Throwable -> L82
            java.util.concurrent.atomic.AtomicLong r0 = r0.getActiveConnections()     // Catch: java.lang.Throwable -> L82
            r0.incrementAndGet()     // Catch: java.lang.Throwable -> L82
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L82
            r4.started = r0     // Catch: java.lang.Throwable -> L82
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics r0 = r4.metrics     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            java.util.concurrent.atomic.AtomicLong r0 = r0.getScheduledConnections()     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            r0.decrementAndGet()     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            cz.msebera.android.httpclient.client.HttpClient r0 = r4.httpclient     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r1 = r4.request     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            cz.msebera.android.httpclient.client.ResponseHandler<V> r2 = r4.responseHandler     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            cz.msebera.android.httpclient.protocol.HttpContext r3 = r4.context     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            java.lang.Object r0 = r0.execute(r1, r2, r3)     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            r4.ended = r1     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics r1 = r4.metrics     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r1 = r1.getSuccessfulConnections()     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            long r2 = r4.started     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            r1.increment(r2)     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            cz.msebera.android.httpclient.concurrent.FutureCallback<V> r1 = r4.callback     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            if (r1 == 0) goto L46
            cz.msebera.android.httpclient.concurrent.FutureCallback<V> r1 = r4.callback     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
            r1.completed(r0)     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> L82
        L46:
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics r1 = r4.metrics
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r1 = r1.getRequests()
            long r2 = r4.started
            r1.increment(r2)
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics r1 = r4.metrics
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r1 = r1.getTasks()
            long r2 = r4.started
            r1.increment(r2)
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics r1 = r4.metrics
            java.util.concurrent.atomic.AtomicLong r1 = r1.getActiveConnections()
            r1.decrementAndGet()
            return r0
        L66:
            r0 = move-exception
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics r1 = r4.metrics     // Catch: java.lang.Throwable -> L82
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r1 = r1.getFailedConnections()     // Catch: java.lang.Throwable -> L82
            long r2 = r4.started     // Catch: java.lang.Throwable -> L82
            r1.increment(r2)     // Catch: java.lang.Throwable -> L82
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L82
            r4.ended = r1     // Catch: java.lang.Throwable -> L82
            cz.msebera.android.httpclient.concurrent.FutureCallback<V> r1 = r4.callback     // Catch: java.lang.Throwable -> L82
            if (r1 == 0) goto L81
            cz.msebera.android.httpclient.concurrent.FutureCallback<V> r1 = r4.callback     // Catch: java.lang.Throwable -> L82
            r1.failed(r0)     // Catch: java.lang.Throwable -> L82
        L81:
            throw r0     // Catch: java.lang.Throwable -> L82
        L82:
            r0 = move-exception
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics r1 = r4.metrics
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r1 = r1.getRequests()
            long r2 = r4.started
            r1.increment(r2)
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics r1 = r4.metrics
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r1 = r1.getTasks()
            long r2 = r4.started
            r1.increment(r2)
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics r1 = r4.metrics
            java.util.concurrent.atomic.AtomicLong r1 = r1.getActiveConnections()
            r1.decrementAndGet()
            throw r0
        La3:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "call has been cancelled for request "
            r1.append(r2)
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r2 = r4.request
            java.net.URI r2 = r2.getURI()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public void cancel() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.cancelled
            r1 = 1
            r0.set(r1)
            cz.msebera.android.httpclient.concurrent.FutureCallback<V> r0 = r2.callback
            if (r0 == 0) goto Ld
            r0.cancelled()
        Ld:
            return
    }

    public long getEnded() {
            r2 = this;
            long r0 = r2.ended
            return r0
    }

    public long getScheduled() {
            r2 = this;
            long r0 = r2.scheduled
            return r0
    }

    public long getStarted() {
            r2 = this;
            long r0 = r2.started
            return r0
    }
}
