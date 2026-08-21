package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class FutureRequestExecutionService implements java.io.Closeable {
    private final java.util.concurrent.atomic.AtomicBoolean closed;
    private final java.util.concurrent.ExecutorService executorService;
    private final cz.msebera.android.httpclient.client.HttpClient httpclient;
    private final cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics metrics;

    public FutureRequestExecutionService(cz.msebera.android.httpclient.client.HttpClient r3, java.util.concurrent.ExecutorService r4) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics r0 = new cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics
            r0.<init>()
            r2.metrics = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.closed = r0
            r2.httpclient = r3
            r2.executorService = r4
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.closed
            r1 = 1
            r0.set(r1)
            java.util.concurrent.ExecutorService r0 = r2.executorService
            r0.shutdownNow()
            cz.msebera.android.httpclient.client.HttpClient r0 = r2.httpclient
            boolean r1 = r0 instanceof java.io.Closeable
            if (r1 == 0) goto L16
            java.io.Closeable r0 = (java.io.Closeable) r0
            r0.close()
        L16:
            return
    }

    public <T> cz.msebera.android.httpclient.impl.client.HttpRequestFutureTask<T> execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r2, cz.msebera.android.httpclient.protocol.HttpContext r3, cz.msebera.android.httpclient.client.ResponseHandler<T> r4) {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.impl.client.HttpRequestFutureTask r2 = r1.execute(r2, r3, r4, r0)
            return r2
    }

    public <T> cz.msebera.android.httpclient.impl.client.HttpRequestFutureTask<T> execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r9, cz.msebera.android.httpclient.protocol.HttpContext r10, cz.msebera.android.httpclient.client.ResponseHandler<T> r11, cz.msebera.android.httpclient.concurrent.FutureCallback<T> r12) {
            r8 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r8.closed
            boolean r0 = r0.get()
            if (r0 != 0) goto L2a
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics r0 = r8.metrics
            java.util.concurrent.atomic.AtomicLong r0 = r0.getScheduledConnections()
            r0.incrementAndGet()
            cz.msebera.android.httpclient.impl.client.HttpRequestTaskCallable r0 = new cz.msebera.android.httpclient.impl.client.HttpRequestTaskCallable
            cz.msebera.android.httpclient.client.HttpClient r2 = r8.httpclient
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics r7 = r8.metrics
            r1 = r0
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7)
            cz.msebera.android.httpclient.impl.client.HttpRequestFutureTask r10 = new cz.msebera.android.httpclient.impl.client.HttpRequestFutureTask
            r10.<init>(r9, r0)
            java.util.concurrent.ExecutorService r9 = r8.executorService
            r9.execute(r10)
            return r10
        L2a:
            java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
            java.lang.String r10 = "Close has been called on this httpclient instance."
            r9.<init>(r10)
            throw r9
    }

    public cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics metrics() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics r0 = r1.metrics
            return r0
    }
}
