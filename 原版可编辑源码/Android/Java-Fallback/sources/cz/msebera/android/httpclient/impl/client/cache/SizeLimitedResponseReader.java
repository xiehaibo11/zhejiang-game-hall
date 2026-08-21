package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
class SizeLimitedResponseReader {
    private boolean consumed;
    private java.io.InputStream instream;
    private cz.msebera.android.httpclient.client.cache.InputLimit limit;
    private final long maxResponseSizeBytes;
    private final cz.msebera.android.httpclient.HttpRequest request;
    private cz.msebera.android.httpclient.client.cache.Resource resource;
    private final cz.msebera.android.httpclient.client.cache.ResourceFactory resourceFactory;
    private final cz.msebera.android.httpclient.client.methods.CloseableHttpResponse response;


    public SizeLimitedResponseReader(cz.msebera.android.httpclient.client.cache.ResourceFactory r1, long r2, cz.msebera.android.httpclient.HttpRequest r4, cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r5) {
            r0 = this;
            r0.<init>()
            r0.resourceFactory = r1
            r0.maxResponseSizeBytes = r2
            r0.request = r4
            r0.response = r5
            return
    }

    static cz.msebera.android.httpclient.client.methods.CloseableHttpResponse access$000(cz.msebera.android.httpclient.impl.client.cache.SizeLimitedResponseReader r0) {
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r0 = r0.response
            return r0
    }

    private void doConsume() throws java.io.IOException {
            r4 = this;
            r4.ensureNotConsumed()
            r0 = 1
            r4.consumed = r0
            cz.msebera.android.httpclient.client.cache.InputLimit r0 = new cz.msebera.android.httpclient.client.cache.InputLimit
            long r1 = r4.maxResponseSizeBytes
            r0.<init>(r1)
            r4.limit = r0
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r0 = r4.response
            cz.msebera.android.httpclient.HttpEntity r0 = r0.getEntity()
            if (r0 != 0) goto L18
            return
        L18:
            cz.msebera.android.httpclient.HttpRequest r1 = r4.request
            cz.msebera.android.httpclient.RequestLine r1 = r1.getRequestLine()
            java.lang.String r1 = r1.getUri()
            java.io.InputStream r0 = r0.getContent()
            r4.instream = r0
            cz.msebera.android.httpclient.client.cache.ResourceFactory r0 = r4.resourceFactory     // Catch: java.lang.Throwable -> L42
            java.io.InputStream r2 = r4.instream     // Catch: java.lang.Throwable -> L42
            cz.msebera.android.httpclient.client.cache.InputLimit r3 = r4.limit     // Catch: java.lang.Throwable -> L42
            cz.msebera.android.httpclient.client.cache.Resource r0 = r0.generate(r1, r2, r3)     // Catch: java.lang.Throwable -> L42
            r4.resource = r0     // Catch: java.lang.Throwable -> L42
            cz.msebera.android.httpclient.client.cache.InputLimit r0 = r4.limit
            boolean r0 = r0.isReached()
            if (r0 != 0) goto L41
            java.io.InputStream r0 = r4.instream
            r0.close()
        L41:
            return
        L42:
            r0 = move-exception
            cz.msebera.android.httpclient.client.cache.InputLimit r1 = r4.limit
            boolean r1 = r1.isReached()
            if (r1 != 0) goto L50
            java.io.InputStream r1 = r4.instream
            r1.close()
        L50:
            throw r0
    }

    private void ensureConsumed() {
            r2 = this;
            boolean r0 = r2.consumed
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Response has not been consumed"
            r0.<init>(r1)
            throw r0
    }

    private void ensureNotConsumed() {
            r2 = this;
            boolean r0 = r2.consumed
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Response has already been consumed"
            r0.<init>(r1)
            throw r0
    }

    cz.msebera.android.httpclient.client.methods.CloseableHttpResponse getReconstructedResponse() throws java.io.IOException {
            r5 = this;
            r5.ensureConsumed()
            cz.msebera.android.httpclient.message.BasicHttpResponse r0 = new cz.msebera.android.httpclient.message.BasicHttpResponse
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r1 = r5.response
            cz.msebera.android.httpclient.StatusLine r1 = r1.getStatusLine()
            r0.<init>(r1)
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r1 = r5.response
            cz.msebera.android.httpclient.Header[] r1 = r1.getAllHeaders()
            r0.setHeaders(r1)
            cz.msebera.android.httpclient.impl.client.cache.CombinedEntity r1 = new cz.msebera.android.httpclient.impl.client.cache.CombinedEntity
            cz.msebera.android.httpclient.client.cache.Resource r2 = r5.resource
            java.io.InputStream r3 = r5.instream
            r1.<init>(r2, r3)
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r2 = r5.response
            cz.msebera.android.httpclient.HttpEntity r2 = r2.getEntity()
            if (r2 == 0) goto L3d
            cz.msebera.android.httpclient.Header r3 = r2.getContentType()
            r1.setContentType(r3)
            cz.msebera.android.httpclient.Header r3 = r2.getContentEncoding()
            r1.setContentEncoding(r3)
            boolean r2 = r2.isChunked()
            r1.setChunked(r2)
        L3d:
            r0.setEntity(r1)
            java.lang.Class<cz.msebera.android.httpclient.impl.client.cache.ResponseProxyHandler> r1 = cz.msebera.android.httpclient.impl.client.cache.ResponseProxyHandler.class
            java.lang.ClassLoader r1 = r1.getClassLoader()
            r2 = 1
            java.lang.Class[] r2 = new java.lang.Class[r2]
            r3 = 0
            java.lang.Class<cz.msebera.android.httpclient.client.methods.CloseableHttpResponse> r4 = cz.msebera.android.httpclient.client.methods.CloseableHttpResponse.class
            r2[r3] = r4
            cz.msebera.android.httpclient.impl.client.cache.SizeLimitedResponseReader$1 r3 = new cz.msebera.android.httpclient.impl.client.cache.SizeLimitedResponseReader$1
            r3.<init>(r5, r0)
            java.lang.Object r0 = java.lang.reflect.Proxy.newProxyInstance(r1, r2, r3)
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r0 = (cz.msebera.android.httpclient.client.methods.CloseableHttpResponse) r0
            return r0
    }

    cz.msebera.android.httpclient.client.cache.Resource getResource() {
            r1 = this;
            r1.ensureConsumed()
            cz.msebera.android.httpclient.client.cache.Resource r0 = r1.resource
            return r0
    }

    boolean isLimitReached() {
            r1 = this;
            r1.ensureConsumed()
            cz.msebera.android.httpclient.client.cache.InputLimit r0 = r1.limit
            boolean r0 = r0.isReached()
            return r0
    }

    protected void readResponse() throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.consumed
            if (r0 != 0) goto L7
            r1.doConsume()
        L7:
            return
    }
}
