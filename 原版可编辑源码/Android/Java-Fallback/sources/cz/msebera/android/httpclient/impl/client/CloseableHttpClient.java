package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public abstract class CloseableHttpClient implements cz.msebera.android.httpclient.client.HttpClient, java.io.Closeable {
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    public CloseableHttpClient() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            return
    }

    private static cz.msebera.android.httpclient.HttpHost determineTarget(cz.msebera.android.httpclient.client.methods.HttpUriRequest r3) throws cz.msebera.android.httpclient.client.ClientProtocolException {
            java.net.URI r3 = r3.getURI()
            boolean r0 = r3.isAbsolute()
            if (r0 == 0) goto L28
            cz.msebera.android.httpclient.HttpHost r0 = cz.msebera.android.httpclient.client.utils.URIUtils.extractHost(r3)
            if (r0 == 0) goto L11
            goto L29
        L11:
            cz.msebera.android.httpclient.client.ClientProtocolException r0 = new cz.msebera.android.httpclient.client.ClientProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "URI does not specify a valid host name: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L28:
            r0 = 0
        L29:
            return r0
    }

    protected abstract cz.msebera.android.httpclient.client.methods.CloseableHttpResponse doExecute(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException;

    @Override
    public cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r0 = this;
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r1 = r0.execute(r1, r2)
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r0 = this;
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r1 = r0.execute(r1, r2, r3)
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r1) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r0 = this;
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r1 = r0.execute(r1)
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r1, cz.msebera.android.httpclient.protocol.HttpContext r2) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r0 = this;
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r1 = r0.execute(r1, r2)
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.client.methods.CloseableHttpResponse execute(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.HttpRequest r3) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r2 = r1.doExecute(r2, r3, r0)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.client.methods.CloseableHttpResponse execute(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r0 = this;
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r1 = r0.doExecute(r1, r2, r3)
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.client.methods.CloseableHttpResponse execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r2) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.protocol.HttpContext r0 = (cz.msebera.android.httpclient.protocol.HttpContext) r0
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r2 = r1.execute(r2, r0)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.client.methods.CloseableHttpResponse execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r1 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.HttpHost r0 = determineTarget(r2)
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r2 = r1.doExecute(r0, r2, r3)
            return r2
    }

    @Override
    public <T> T execute(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.client.ResponseHandler<? extends T> r4) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r1 = this;
            r0 = 0
            java.lang.Object r2 = r1.execute(r2, r3, r4, r0)
            return r2
    }

    @Override
    public <T> T execute(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.client.ResponseHandler<? extends T> r4, cz.msebera.android.httpclient.protocol.HttpContext r5) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r1 = this;
            java.lang.String r0 = "Response handler"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r2 = r1.execute(r2, r3, r5)
            java.lang.Object r3 = r4.handleResponse(r2)     // Catch: java.lang.Throwable -> L18 cz.msebera.android.httpclient.client.ClientProtocolException -> L1a
            cz.msebera.android.httpclient.HttpEntity r4 = r2.getEntity()     // Catch: java.lang.Throwable -> L18 cz.msebera.android.httpclient.client.ClientProtocolException -> L1a
            cz.msebera.android.httpclient.util.EntityUtils.consume(r4)     // Catch: java.lang.Throwable -> L18 cz.msebera.android.httpclient.client.ClientProtocolException -> L1a
            r2.close()
            return r3
        L18:
            r3 = move-exception
            goto L2c
        L1a:
            r3 = move-exception
            cz.msebera.android.httpclient.HttpEntity r4 = r2.getEntity()     // Catch: java.lang.Throwable -> L18
            cz.msebera.android.httpclient.util.EntityUtils.consume(r4)     // Catch: java.lang.Throwable -> L18 java.lang.Exception -> L23
            goto L2b
        L23:
            r4 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r1.log     // Catch: java.lang.Throwable -> L18
            java.lang.String r0 = "Error consuming content after an exception."
            r5.warn(r0, r4)     // Catch: java.lang.Throwable -> L18
        L2b:
            throw r3     // Catch: java.lang.Throwable -> L18
        L2c:
            r2.close()
            throw r3
    }

    @Override
    public <T> T execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r2, cz.msebera.android.httpclient.client.ResponseHandler<? extends T> r3) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r1 = this;
            r0 = 0
            java.lang.Object r2 = r1.execute(r2, r3, r0)
            return r2
    }

    @Override
    public <T> T execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r2, cz.msebera.android.httpclient.client.ResponseHandler<? extends T> r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r1 = this;
            cz.msebera.android.httpclient.HttpHost r0 = determineTarget(r2)
            java.lang.Object r2 = r1.execute(r0, r2, r3, r4)
            return r2
    }
}
