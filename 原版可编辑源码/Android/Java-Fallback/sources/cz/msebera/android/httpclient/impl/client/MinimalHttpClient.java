package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.ThreadSafe
class MinimalHttpClient extends cz.msebera.android.httpclient.impl.client.CloseableHttpClient {
    private final cz.msebera.android.httpclient.conn.HttpClientConnectionManager connManager;
    private final cz.msebera.android.httpclient.params.HttpParams params;
    private final cz.msebera.android.httpclient.impl.execchain.MinimalClientExec requestExecutor;


    public MinimalHttpClient(cz.msebera.android.httpclient.conn.HttpClientConnectionManager r5) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "HTTP connection manager"
            java.lang.Object r0 = cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r0 = (cz.msebera.android.httpclient.conn.HttpClientConnectionManager) r0
            r4.connManager = r0
            cz.msebera.android.httpclient.impl.execchain.MinimalClientExec r0 = new cz.msebera.android.httpclient.impl.execchain.MinimalClientExec
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r1 = new cz.msebera.android.httpclient.protocol.HttpRequestExecutor
            r1.<init>()
            cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy r2 = cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy.INSTANCE
            cz.msebera.android.httpclient.impl.client.DefaultConnectionKeepAliveStrategy r3 = cz.msebera.android.httpclient.impl.client.DefaultConnectionKeepAliveStrategy.INSTANCE
            r0.<init>(r1, r5, r2, r3)
            r4.requestExecutor = r0
            cz.msebera.android.httpclient.params.BasicHttpParams r5 = new cz.msebera.android.httpclient.params.BasicHttpParams
            r5.<init>()
            r4.params = r5
            return
    }

    static cz.msebera.android.httpclient.conn.HttpClientConnectionManager access$000(cz.msebera.android.httpclient.impl.client.MinimalHttpClient r0) {
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r0 = r0.connManager
            return r0
    }

    @Override
    public void close() {
            r1 = this;
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r0 = r1.connManager
            r0.shutdown()
            return
    }

    @Override
    protected cz.msebera.android.httpclient.client.methods.CloseableHttpResponse doExecute(cz.msebera.android.httpclient.HttpHost r5, cz.msebera.android.httpclient.HttpRequest r6, cz.msebera.android.httpclient.protocol.HttpContext r7) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r4 = this;
            java.lang.String r0 = "Target host"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            boolean r0 = r6 instanceof cz.msebera.android.httpclient.client.methods.HttpExecutionAware
            r1 = 0
            if (r0 == 0) goto L13
            r0 = r6
            cz.msebera.android.httpclient.client.methods.HttpExecutionAware r0 = (cz.msebera.android.httpclient.client.methods.HttpExecutionAware) r0
            goto L14
        L13:
            r0 = r1
        L14:
            cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r2 = cz.msebera.android.httpclient.client.methods.HttpRequestWrapper.wrap(r6)     // Catch: cz.msebera.android.httpclient.HttpException -> L3f
            if (r7 == 0) goto L1b
            goto L20
        L1b:
            cz.msebera.android.httpclient.protocol.BasicHttpContext r7 = new cz.msebera.android.httpclient.protocol.BasicHttpContext     // Catch: cz.msebera.android.httpclient.HttpException -> L3f
            r7.<init>()     // Catch: cz.msebera.android.httpclient.HttpException -> L3f
        L20:
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r7 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r7)     // Catch: cz.msebera.android.httpclient.HttpException -> L3f
            cz.msebera.android.httpclient.conn.routing.HttpRoute r3 = new cz.msebera.android.httpclient.conn.routing.HttpRoute     // Catch: cz.msebera.android.httpclient.HttpException -> L3f
            r3.<init>(r5)     // Catch: cz.msebera.android.httpclient.HttpException -> L3f
            boolean r5 = r6 instanceof cz.msebera.android.httpclient.client.methods.Configurable     // Catch: cz.msebera.android.httpclient.HttpException -> L3f
            if (r5 == 0) goto L33
            cz.msebera.android.httpclient.client.methods.Configurable r6 = (cz.msebera.android.httpclient.client.methods.Configurable) r6     // Catch: cz.msebera.android.httpclient.HttpException -> L3f
            cz.msebera.android.httpclient.client.config.RequestConfig r1 = r6.getConfig()     // Catch: cz.msebera.android.httpclient.HttpException -> L3f
        L33:
            if (r1 == 0) goto L38
            r7.setRequestConfig(r1)     // Catch: cz.msebera.android.httpclient.HttpException -> L3f
        L38:
            cz.msebera.android.httpclient.impl.execchain.MinimalClientExec r5 = r4.requestExecutor     // Catch: cz.msebera.android.httpclient.HttpException -> L3f
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r5 = r5.execute(r3, r2, r7, r0)     // Catch: cz.msebera.android.httpclient.HttpException -> L3f
            return r5
        L3f:
            r5 = move-exception
            cz.msebera.android.httpclient.client.ClientProtocolException r6 = new cz.msebera.android.httpclient.client.ClientProtocolException
            r6.<init>(r5)
            throw r6
    }

    @Override
    public cz.msebera.android.httpclient.conn.ClientConnectionManager getConnectionManager() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.MinimalHttpClient$1 r0 = new cz.msebera.android.httpclient.impl.client.MinimalHttpClient$1
            r0.<init>(r1)
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.params.HttpParams getParams() {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            return r0
    }
}
