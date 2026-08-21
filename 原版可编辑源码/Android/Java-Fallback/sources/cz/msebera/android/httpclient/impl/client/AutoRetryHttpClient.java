package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public class AutoRetryHttpClient implements cz.msebera.android.httpclient.client.HttpClient {
    private final cz.msebera.android.httpclient.client.HttpClient backend;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.client.ServiceUnavailableRetryStrategy retryStrategy;

    public AutoRetryHttpClient() {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r0 = new cz.msebera.android.httpclient.impl.client.DefaultHttpClient
            r0.<init>()
            cz.msebera.android.httpclient.impl.client.DefaultServiceUnavailableRetryStrategy r1 = new cz.msebera.android.httpclient.impl.client.DefaultServiceUnavailableRetryStrategy
            r1.<init>()
            r2.<init>(r0, r1)
            return
    }

    public AutoRetryHttpClient(cz.msebera.android.httpclient.client.HttpClient r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.DefaultServiceUnavailableRetryStrategy r0 = new cz.msebera.android.httpclient.impl.client.DefaultServiceUnavailableRetryStrategy
            r0.<init>()
            r1.<init>(r2, r0)
            return
    }

    public AutoRetryHttpClient(cz.msebera.android.httpclient.client.HttpClient r3, cz.msebera.android.httpclient.client.ServiceUnavailableRetryStrategy r4) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.lang.String r0 = "HttpClient"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "ServiceUnavailableRetryStrategy"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            r2.backend = r3
            r2.retryStrategy = r4
            return
    }

    public AutoRetryHttpClient(cz.msebera.android.httpclient.client.ServiceUnavailableRetryStrategy r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r0 = new cz.msebera.android.httpclient.impl.client.DefaultHttpClient
            r0.<init>()
            r1.<init>(r0, r2)
            return
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.HttpRequest r3) throws java.io.IOException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.HttpResponse r2 = r1.execute(r2, r3, r0)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.HttpHost r8, cz.msebera.android.httpclient.HttpRequest r9, cz.msebera.android.httpclient.protocol.HttpContext r10) throws java.io.IOException {
            r7 = this;
            r0 = 1
        L1:
            cz.msebera.android.httpclient.client.HttpClient r1 = r7.backend
            cz.msebera.android.httpclient.HttpResponse r1 = r1.execute(r8, r9, r10)
            cz.msebera.android.httpclient.client.ServiceUnavailableRetryStrategy r2 = r7.retryStrategy     // Catch: java.lang.RuntimeException -> L46
            boolean r2 = r2.retryRequest(r1, r0, r10)     // Catch: java.lang.RuntimeException -> L46
            if (r2 == 0) goto L45
            cz.msebera.android.httpclient.HttpEntity r2 = r1.getEntity()     // Catch: java.lang.RuntimeException -> L46
            cz.msebera.android.httpclient.util.EntityUtils.consume(r2)     // Catch: java.lang.RuntimeException -> L46
            cz.msebera.android.httpclient.client.ServiceUnavailableRetryStrategy r2 = r7.retryStrategy     // Catch: java.lang.RuntimeException -> L46
            long r2 = r2.getRetryInterval()     // Catch: java.lang.RuntimeException -> L46
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r7.log     // Catch: java.lang.InterruptedException -> L38 java.lang.RuntimeException -> L46
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.InterruptedException -> L38 java.lang.RuntimeException -> L46
            r5.<init>()     // Catch: java.lang.InterruptedException -> L38 java.lang.RuntimeException -> L46
            java.lang.String r6 = "Wait for "
            r5.append(r6)     // Catch: java.lang.InterruptedException -> L38 java.lang.RuntimeException -> L46
            r5.append(r2)     // Catch: java.lang.InterruptedException -> L38 java.lang.RuntimeException -> L46
            java.lang.String r5 = r5.toString()     // Catch: java.lang.InterruptedException -> L38 java.lang.RuntimeException -> L46
            r4.trace(r5)     // Catch: java.lang.InterruptedException -> L38 java.lang.RuntimeException -> L46
            java.lang.Thread.sleep(r2)     // Catch: java.lang.InterruptedException -> L38 java.lang.RuntimeException -> L46
            int r0 = r0 + 1
            goto L1
        L38:
            java.lang.Thread r8 = java.lang.Thread.currentThread()     // Catch: java.lang.RuntimeException -> L46
            r8.interrupt()     // Catch: java.lang.RuntimeException -> L46
            java.io.InterruptedIOException r8 = new java.io.InterruptedIOException     // Catch: java.lang.RuntimeException -> L46
            r8.<init>()     // Catch: java.lang.RuntimeException -> L46
            throw r8     // Catch: java.lang.RuntimeException -> L46
        L45:
            return r1
        L46:
            r8 = move-exception
            cz.msebera.android.httpclient.HttpEntity r9 = r1.getEntity()     // Catch: java.io.IOException -> L4f
            cz.msebera.android.httpclient.util.EntityUtils.consume(r9)     // Catch: java.io.IOException -> L4f
            goto L57
        L4f:
            r9 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r10 = r7.log
            java.lang.String r0 = "I/O error consuming response content"
            r10.warn(r0, r9)
        L57:
            throw r8
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r2) throws java.io.IOException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.HttpResponse r2 = r1.execute(r2, r0)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r5, cz.msebera.android.httpclient.protocol.HttpContext r6) throws java.io.IOException {
            r4 = this;
            java.net.URI r0 = r5.getURI()
            cz.msebera.android.httpclient.HttpHost r1 = new cz.msebera.android.httpclient.HttpHost
            java.lang.String r2 = r0.getHost()
            int r3 = r0.getPort()
            java.lang.String r0 = r0.getScheme()
            r1.<init>(r2, r3, r0)
            cz.msebera.android.httpclient.HttpResponse r5 = r4.execute(r1, r5, r6)
            return r5
    }

    @Override
    public <T> T execute(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.client.ResponseHandler<? extends T> r4) throws java.io.IOException {
            r1 = this;
            r0 = 0
            java.lang.Object r2 = r1.execute(r2, r3, r4, r0)
            return r2
    }

    @Override
    public <T> T execute(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.client.ResponseHandler<? extends T> r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws java.io.IOException {
            r0 = this;
            cz.msebera.android.httpclient.HttpResponse r1 = r0.execute(r1, r2, r4)
            java.lang.Object r1 = r3.handleResponse(r1)
            return r1
    }

    @Override
    public <T> T execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r2, cz.msebera.android.httpclient.client.ResponseHandler<? extends T> r3) throws java.io.IOException {
            r1 = this;
            r0 = 0
            java.lang.Object r2 = r1.execute(r2, r3, r0)
            return r2
    }

    @Override
    public <T> T execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r1, cz.msebera.android.httpclient.client.ResponseHandler<? extends T> r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws java.io.IOException {
            r0 = this;
            cz.msebera.android.httpclient.HttpResponse r1 = r0.execute(r1, r3)
            java.lang.Object r1 = r2.handleResponse(r1)
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.conn.ClientConnectionManager getConnectionManager() {
            r1 = this;
            cz.msebera.android.httpclient.client.HttpClient r0 = r1.backend
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r0.getConnectionManager()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.params.HttpParams getParams() {
            r1 = this;
            cz.msebera.android.httpclient.client.HttpClient r0 = r1.backend
            cz.msebera.android.httpclient.params.HttpParams r0 = r0.getParams()
            return r0
    }
}
