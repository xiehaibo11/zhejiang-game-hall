package cz.msebera.android.httpclient.impl.client;

public class HttpRequestFutureTask<V> extends java.util.concurrent.FutureTask<V> {
    private final cz.msebera.android.httpclient.impl.client.HttpRequestTaskCallable<V> callable;
    private final cz.msebera.android.httpclient.client.methods.HttpUriRequest request;

    public HttpRequestFutureTask(cz.msebera.android.httpclient.client.methods.HttpUriRequest r1, cz.msebera.android.httpclient.impl.client.HttpRequestTaskCallable<V> r2) {
            r0 = this;
            r0.<init>(r2)
            r0.request = r1
            r0.callable = r2
            return
    }

    @Override
    public boolean cancel(boolean r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.HttpRequestTaskCallable<V> r0 = r1.callable
            r0.cancel()
            if (r2 == 0) goto Lc
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r0 = r1.request
            r0.abort()
        Lc:
            boolean r2 = super.cancel(r2)
            return r2
    }

    public long endedTime() {
            r2 = this;
            boolean r0 = r2.isDone()
            if (r0 == 0) goto Ld
            cz.msebera.android.httpclient.impl.client.HttpRequestTaskCallable<V> r0 = r2.callable
            long r0 = r0.getEnded()
            return r0
        Ld:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Task is not done yet"
            r0.<init>(r1)
            throw r0
    }

    public long requestDuration() {
            r4 = this;
            boolean r0 = r4.isDone()
            if (r0 == 0) goto L10
            long r0 = r4.endedTime()
            long r2 = r4.startedTime()
            long r0 = r0 - r2
            return r0
        L10:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Task is not done yet"
            r0.<init>(r1)
            throw r0
    }

    public long scheduledTime() {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.HttpRequestTaskCallable<V> r0 = r2.callable
            long r0 = r0.getScheduled()
            return r0
    }

    public long startedTime() {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.HttpRequestTaskCallable<V> r0 = r2.callable
            long r0 = r0.getStarted()
            return r0
    }

    public long taskDuration() {
            r4 = this;
            boolean r0 = r4.isDone()
            if (r0 == 0) goto L10
            long r0 = r4.endedTime()
            long r2 = r4.scheduledTime()
            long r0 = r0 - r2
            return r0
        L10:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Task is not done yet"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r0 = r1.request
            cz.msebera.android.httpclient.RequestLine r0 = r0.getRequestLine()
            java.lang.String r0 = r0.getUri()
            return r0
    }
}
