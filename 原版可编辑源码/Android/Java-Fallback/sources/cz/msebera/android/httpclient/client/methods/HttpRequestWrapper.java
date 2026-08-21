package cz.msebera.android.httpclient.client.methods;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class HttpRequestWrapper extends cz.msebera.android.httpclient.message.AbstractHttpMessage implements cz.msebera.android.httpclient.client.methods.HttpUriRequest {
    private final java.lang.String method;
    private final cz.msebera.android.httpclient.HttpRequest original;
    private final cz.msebera.android.httpclient.HttpHost target;
    private java.net.URI uri;
    private cz.msebera.android.httpclient.ProtocolVersion version;

    static class 1 {
    }

    static class HttpEntityEnclosingRequestWrapper extends cz.msebera.android.httpclient.client.methods.HttpRequestWrapper implements cz.msebera.android.httpclient.HttpEntityEnclosingRequest {
        private cz.msebera.android.httpclient.HttpEntity entity;

        HttpEntityEnclosingRequestWrapper(cz.msebera.android.httpclient.HttpEntityEnclosingRequest r2, cz.msebera.android.httpclient.HttpHost r3) {
                r1 = this;
                r0 = 0
                r1.<init>(r2, r3, r0)
                cz.msebera.android.httpclient.HttpEntity r2 = r2.getEntity()
                r1.entity = r2
                return
        }

        @Override
        public boolean expectContinue() {
                r2 = this;
                java.lang.String r0 = "Expect"
                cz.msebera.android.httpclient.Header r0 = r2.getFirstHeader(r0)
                if (r0 == 0) goto L16
                java.lang.String r0 = r0.getValue()
                java.lang.String r1 = "100-continue"
                boolean r0 = r1.equalsIgnoreCase(r0)
                if (r0 == 0) goto L16
                r0 = 1
                goto L17
            L16:
                r0 = 0
            L17:
                return r0
        }

        @Override
        public cz.msebera.android.httpclient.HttpEntity getEntity() {
                r1 = this;
                cz.msebera.android.httpclient.HttpEntity r0 = r1.entity
                return r0
        }

        @Override
        public void setEntity(cz.msebera.android.httpclient.HttpEntity r1) {
                r0 = this;
                r0.entity = r1
                return
        }
    }

    private HttpRequestWrapper(cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.HttpHost r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "HTTP request"
            java.lang.Object r0 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.HttpRequest r0 = (cz.msebera.android.httpclient.HttpRequest) r0
            r1.original = r0
            r1.target = r3
            cz.msebera.android.httpclient.HttpRequest r3 = r1.original
            cz.msebera.android.httpclient.RequestLine r3 = r3.getRequestLine()
            cz.msebera.android.httpclient.ProtocolVersion r3 = r3.getProtocolVersion()
            r1.version = r3
            cz.msebera.android.httpclient.HttpRequest r3 = r1.original
            cz.msebera.android.httpclient.RequestLine r3 = r3.getRequestLine()
            java.lang.String r3 = r3.getMethod()
            r1.method = r3
            boolean r3 = r2 instanceof cz.msebera.android.httpclient.client.methods.HttpUriRequest
            if (r3 == 0) goto L35
            r3 = r2
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r3 = (cz.msebera.android.httpclient.client.methods.HttpUriRequest) r3
            java.net.URI r3 = r3.getURI()
            r1.uri = r3
            goto L38
        L35:
            r3 = 0
            r1.uri = r3
        L38:
            cz.msebera.android.httpclient.Header[] r2 = r2.getAllHeaders()
            r1.setHeaders(r2)
            return
    }

    HttpRequestWrapper(cz.msebera.android.httpclient.HttpRequest r1, cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper.1 r3) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static cz.msebera.android.httpclient.client.methods.HttpRequestWrapper wrap(cz.msebera.android.httpclient.HttpRequest r1) {
            r0 = 0
            cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r1 = wrap(r1, r0)
            return r1
    }

    public static cz.msebera.android.httpclient.client.methods.HttpRequestWrapper wrap(cz.msebera.android.httpclient.HttpRequest r1, cz.msebera.android.httpclient.HttpHost r2) {
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            boolean r0 = r1 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            if (r0 == 0) goto L11
            cz.msebera.android.httpclient.client.methods.HttpRequestWrapper$HttpEntityEnclosingRequestWrapper r0 = new cz.msebera.android.httpclient.client.methods.HttpRequestWrapper$HttpEntityEnclosingRequestWrapper
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r1 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r1
            r0.<init>(r1, r2)
            return r0
        L11:
            cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r0 = new cz.msebera.android.httpclient.client.methods.HttpRequestWrapper
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public void abort() throws java.lang.UnsupportedOperationException {
            r1 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            r0.<init>()
            throw r0
    }

    @Override
    public java.lang.String getMethod() {
            r1 = this;
            java.lang.String r0 = r1.method
            return r0
    }

    public cz.msebera.android.httpclient.HttpRequest getOriginal() {
            r1 = this;
            cz.msebera.android.httpclient.HttpRequest r0 = r1.original
            return r0
    }

    @Override
    @java.lang.Deprecated
    public cz.msebera.android.httpclient.params.HttpParams getParams() {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            if (r0 != 0) goto L10
            cz.msebera.android.httpclient.HttpRequest r0 = r1.original
            cz.msebera.android.httpclient.params.HttpParams r0 = r0.getParams()
            cz.msebera.android.httpclient.params.HttpParams r0 = r0.copy()
            r1.params = r0
        L10:
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.ProtocolVersion getProtocolVersion() {
            r1 = this;
            cz.msebera.android.httpclient.ProtocolVersion r0 = r1.version
            if (r0 == 0) goto L5
            goto Lb
        L5:
            cz.msebera.android.httpclient.HttpRequest r0 = r1.original
            cz.msebera.android.httpclient.ProtocolVersion r0 = r0.getProtocolVersion()
        Lb:
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.RequestLine getRequestLine() {
            r4 = this;
            java.net.URI r0 = r4.uri
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.toASCIIString()
            goto L13
        L9:
            cz.msebera.android.httpclient.HttpRequest r0 = r4.original
            cz.msebera.android.httpclient.RequestLine r0 = r0.getRequestLine()
            java.lang.String r0 = r0.getUri()
        L13:
            if (r0 == 0) goto L1b
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L1d
        L1b:
            java.lang.String r0 = "/"
        L1d:
            cz.msebera.android.httpclient.message.BasicRequestLine r1 = new cz.msebera.android.httpclient.message.BasicRequestLine
            java.lang.String r2 = r4.method
            cz.msebera.android.httpclient.ProtocolVersion r3 = r4.getProtocolVersion()
            r1.<init>(r2, r0, r3)
            return r1
    }

    public cz.msebera.android.httpclient.HttpHost getTarget() {
            r1 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r1.target
            return r0
    }

    @Override
    public java.net.URI getURI() {
            r1 = this;
            java.net.URI r0 = r1.uri
            return r0
    }

    @Override
    public boolean isAborted() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void setProtocolVersion(cz.msebera.android.httpclient.ProtocolVersion r1) {
            r0 = this;
            r0.version = r1
            return
    }

    public void setURI(java.net.URI r1) {
            r0 = this;
            r0.uri = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            cz.msebera.android.httpclient.RequestLine r1 = r2.getRequestLine()
            r0.append(r1)
            java.lang.String r1 = " "
            r0.append(r1)
            cz.msebera.android.httpclient.message.HeaderGroup r1 = r2.headergroup
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
