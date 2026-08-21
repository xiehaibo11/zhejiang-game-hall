package cz.msebera.android.httpclient.impl.client;

@java.lang.Deprecated
public class DecompressingHttpClient implements cz.msebera.android.httpclient.client.HttpClient {
    private final cz.msebera.android.httpclient.HttpRequestInterceptor acceptEncodingInterceptor;
    private final cz.msebera.android.httpclient.client.HttpClient backend;
    private final cz.msebera.android.httpclient.HttpResponseInterceptor contentEncodingInterceptor;

    public DecompressingHttpClient() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r0 = new cz.msebera.android.httpclient.impl.client.DefaultHttpClient
            r0.<init>()
            r1.<init>(r0)
            return
    }

    public DecompressingHttpClient(cz.msebera.android.httpclient.client.HttpClient r3) {
            r2 = this;
            cz.msebera.android.httpclient.client.protocol.RequestAcceptEncoding r0 = new cz.msebera.android.httpclient.client.protocol.RequestAcceptEncoding
            r0.<init>()
            cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding r1 = new cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding
            r1.<init>()
            r2.<init>(r3, r0, r1)
            return
    }

    DecompressingHttpClient(cz.msebera.android.httpclient.client.HttpClient r1, cz.msebera.android.httpclient.HttpRequestInterceptor r2, cz.msebera.android.httpclient.HttpResponseInterceptor r3) {
            r0 = this;
            r0.<init>()
            r0.backend = r1
            r0.acceptEncodingInterceptor = r2
            r0.contentEncodingInterceptor = r3
            return
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.HttpRequest r3) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.protocol.HttpContext r0 = (cz.msebera.android.httpclient.protocol.HttpContext) r0
            cz.msebera.android.httpclient.HttpResponse r2 = r1.execute(r2, r3, r0)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r1 = this;
            if (r4 == 0) goto L3
            goto L8
        L3:
            cz.msebera.android.httpclient.protocol.BasicHttpContext r4 = new cz.msebera.android.httpclient.protocol.BasicHttpContext     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            r4.<init>()     // Catch: cz.msebera.android.httpclient.HttpException -> L62
        L8:
            boolean r0 = r3 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            if (r0 == 0) goto L14
            cz.msebera.android.httpclient.impl.client.EntityEnclosingRequestWrapper r0 = new cz.msebera.android.httpclient.impl.client.EntityEnclosingRequestWrapper     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r3 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r3     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            r0.<init>(r3)     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            goto L19
        L14:
            cz.msebera.android.httpclient.impl.client.RequestWrapper r0 = new cz.msebera.android.httpclient.impl.client.RequestWrapper     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            r0.<init>(r3)     // Catch: cz.msebera.android.httpclient.HttpException -> L62
        L19:
            cz.msebera.android.httpclient.HttpRequestInterceptor r3 = r1.acceptEncodingInterceptor     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            r3.process(r0, r4)     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            cz.msebera.android.httpclient.client.HttpClient r3 = r1.backend     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            cz.msebera.android.httpclient.HttpResponse r2 = r3.execute(r2, r0, r4)     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            cz.msebera.android.httpclient.HttpResponseInterceptor r3 = r1.contentEncodingInterceptor     // Catch: java.lang.RuntimeException -> L47 java.io.IOException -> L50 cz.msebera.android.httpclient.HttpException -> L59
            r3.process(r2, r4)     // Catch: java.lang.RuntimeException -> L47 java.io.IOException -> L50 cz.msebera.android.httpclient.HttpException -> L59
            java.lang.Boolean r3 = java.lang.Boolean.TRUE     // Catch: java.lang.RuntimeException -> L47 java.io.IOException -> L50 cz.msebera.android.httpclient.HttpException -> L59
            java.lang.String r0 = "http.client.response.uncompressed"
            java.lang.Object r4 = r4.getAttribute(r0)     // Catch: java.lang.RuntimeException -> L47 java.io.IOException -> L50 cz.msebera.android.httpclient.HttpException -> L59
            boolean r3 = r3.equals(r4)     // Catch: java.lang.RuntimeException -> L47 java.io.IOException -> L50 cz.msebera.android.httpclient.HttpException -> L59
            if (r3 == 0) goto L46
            java.lang.String r3 = "Content-Length"
            r2.removeHeaders(r3)     // Catch: java.lang.RuntimeException -> L47 java.io.IOException -> L50 cz.msebera.android.httpclient.HttpException -> L59
            java.lang.String r3 = "Content-Encoding"
            r2.removeHeaders(r3)     // Catch: java.lang.RuntimeException -> L47 java.io.IOException -> L50 cz.msebera.android.httpclient.HttpException -> L59
            java.lang.String r3 = "Content-MD5"
            r2.removeHeaders(r3)     // Catch: java.lang.RuntimeException -> L47 java.io.IOException -> L50 cz.msebera.android.httpclient.HttpException -> L59
        L46:
            return r2
        L47:
            r3 = move-exception
            cz.msebera.android.httpclient.HttpEntity r2 = r2.getEntity()     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            cz.msebera.android.httpclient.util.EntityUtils.consume(r2)     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            throw r3     // Catch: cz.msebera.android.httpclient.HttpException -> L62
        L50:
            r3 = move-exception
            cz.msebera.android.httpclient.HttpEntity r2 = r2.getEntity()     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            cz.msebera.android.httpclient.util.EntityUtils.consume(r2)     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            throw r3     // Catch: cz.msebera.android.httpclient.HttpException -> L62
        L59:
            r3 = move-exception
            cz.msebera.android.httpclient.HttpEntity r2 = r2.getEntity()     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            cz.msebera.android.httpclient.util.EntityUtils.consume(r2)     // Catch: cz.msebera.android.httpclient.HttpException -> L62
            throw r3     // Catch: cz.msebera.android.httpclient.HttpException -> L62
        L62:
            r2 = move-exception
            cz.msebera.android.httpclient.client.ClientProtocolException r3 = new cz.msebera.android.httpclient.client.ClientProtocolException
            r3.<init>(r2)
            throw r3
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r3) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r2 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r2.getHttpHost(r3)
            r1 = 0
            cz.msebera.android.httpclient.protocol.HttpContext r1 = (cz.msebera.android.httpclient.protocol.HttpContext) r1
            cz.msebera.android.httpclient.HttpResponse r3 = r2.execute(r0, r3, r1)
            return r3
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r1 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r1.getHttpHost(r2)
            cz.msebera.android.httpclient.HttpResponse r2 = r1.execute(r0, r2, r3)
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
    public <T> T execute(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.client.ResponseHandler<? extends T> r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r0 = this;
            cz.msebera.android.httpclient.HttpResponse r1 = r0.execute(r1, r2, r4)
            java.lang.Object r2 = r3.handleResponse(r1)     // Catch: java.lang.Throwable -> L12
            cz.msebera.android.httpclient.HttpEntity r1 = r1.getEntity()
            if (r1 == 0) goto L11
            cz.msebera.android.httpclient.util.EntityUtils.consume(r1)
        L11:
            return r2
        L12:
            r2 = move-exception
            cz.msebera.android.httpclient.HttpEntity r1 = r1.getEntity()
            if (r1 == 0) goto L1c
            cz.msebera.android.httpclient.util.EntityUtils.consume(r1)
        L1c:
            throw r2
    }

    @Override
    public <T> T execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r2, cz.msebera.android.httpclient.client.ResponseHandler<? extends T> r3) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r1 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r1.getHttpHost(r2)
            java.lang.Object r2 = r1.execute(r0, r2, r3)
            return r2
    }

    @Override
    public <T> T execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r2, cz.msebera.android.httpclient.client.ResponseHandler<? extends T> r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r1 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r1.getHttpHost(r2)
            java.lang.Object r2 = r1.execute(r0, r2, r3, r4)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.conn.ClientConnectionManager getConnectionManager() {
            r1 = this;
            cz.msebera.android.httpclient.client.HttpClient r0 = r1.backend
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r0.getConnectionManager()
            return r0
    }

    public cz.msebera.android.httpclient.client.HttpClient getHttpClient() {
            r1 = this;
            cz.msebera.android.httpclient.client.HttpClient r0 = r1.backend
            return r0
    }

    cz.msebera.android.httpclient.HttpHost getHttpHost(cz.msebera.android.httpclient.client.methods.HttpUriRequest r1) {
            r0 = this;
            java.net.URI r1 = r1.getURI()
            cz.msebera.android.httpclient.HttpHost r1 = cz.msebera.android.httpclient.client.utils.URIUtils.extractHost(r1)
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.params.HttpParams getParams() {
            r1 = this;
            cz.msebera.android.httpclient.client.HttpClient r0 = r1.backend
            cz.msebera.android.httpclient.params.HttpParams r0 = r0.getParams()
            return r0
    }
}
