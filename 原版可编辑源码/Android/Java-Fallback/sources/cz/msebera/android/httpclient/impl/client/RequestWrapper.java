package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class RequestWrapper extends cz.msebera.android.httpclient.message.AbstractHttpMessage implements cz.msebera.android.httpclient.client.methods.HttpUriRequest {
    private int execCount;
    private java.lang.String method;
    private final cz.msebera.android.httpclient.HttpRequest original;
    private java.net.URI uri;
    private cz.msebera.android.httpclient.ProtocolVersion version;

    public RequestWrapper(cz.msebera.android.httpclient.HttpRequest r5) throws cz.msebera.android.httpclient.ProtocolException {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            r4.original = r5
            cz.msebera.android.httpclient.params.HttpParams r0 = r5.getParams()
            r4.setParams(r0)
            cz.msebera.android.httpclient.Header[] r0 = r5.getAllHeaders()
            r4.setHeaders(r0)
            boolean r0 = r5 instanceof cz.msebera.android.httpclient.client.methods.HttpUriRequest
            if (r0 == 0) goto L2e
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r5 = (cz.msebera.android.httpclient.client.methods.HttpUriRequest) r5
            java.net.URI r0 = r5.getURI()
            r4.uri = r0
            java.lang.String r5 = r5.getMethod()
            r4.method = r5
            r5 = 0
            r4.version = r5
            goto L49
        L2e:
            cz.msebera.android.httpclient.RequestLine r0 = r5.getRequestLine()
            java.net.URI r1 = new java.net.URI     // Catch: java.net.URISyntaxException -> L4d
            java.lang.String r2 = r0.getUri()     // Catch: java.net.URISyntaxException -> L4d
            r1.<init>(r2)     // Catch: java.net.URISyntaxException -> L4d
            r4.uri = r1     // Catch: java.net.URISyntaxException -> L4d
            java.lang.String r0 = r0.getMethod()
            r4.method = r0
            cz.msebera.android.httpclient.ProtocolVersion r5 = r5.getProtocolVersion()
            r4.version = r5
        L49:
            r5 = 0
            r4.execCount = r5
            return
        L4d:
            r5 = move-exception
            cz.msebera.android.httpclient.ProtocolException r1 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Invalid request URI: "
            r2.append(r3)
            java.lang.String r0 = r0.getUri()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0, r5)
            throw r1
    }

    @Override
    public void abort() throws java.lang.UnsupportedOperationException {
            r1 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            r0.<init>()
            throw r0
    }

    public int getExecCount() {
            r1 = this;
            int r0 = r1.execCount
            return r0
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
    public cz.msebera.android.httpclient.ProtocolVersion getProtocolVersion() {
            r1 = this;
            cz.msebera.android.httpclient.ProtocolVersion r0 = r1.version
            if (r0 != 0) goto Le
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.getParams()
            cz.msebera.android.httpclient.ProtocolVersion r0 = cz.msebera.android.httpclient.params.HttpProtocolParams.getVersion(r0)
            r1.version = r0
        Le:
            cz.msebera.android.httpclient.ProtocolVersion r0 = r1.version
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.RequestLine getRequestLine() {
            r4 = this;
            cz.msebera.android.httpclient.ProtocolVersion r0 = r4.getProtocolVersion()
            java.net.URI r1 = r4.uri
            if (r1 == 0) goto Ld
            java.lang.String r1 = r1.toASCIIString()
            goto Le
        Ld:
            r1 = 0
        Le:
            if (r1 == 0) goto L16
            boolean r2 = r1.isEmpty()
            if (r2 == 0) goto L18
        L16:
            java.lang.String r1 = "/"
        L18:
            cz.msebera.android.httpclient.message.BasicRequestLine r2 = new cz.msebera.android.httpclient.message.BasicRequestLine
            java.lang.String r3 = r4.getMethod()
            r2.<init>(r3, r1, r0)
            return r2
    }

    @Override
    public java.net.URI getURI() {
            r1 = this;
            java.net.URI r0 = r1.uri
            return r0
    }

    public void incrementExecCount() {
            r1 = this;
            int r0 = r1.execCount
            int r0 = r0 + 1
            r1.execCount = r0
            return
    }

    @Override
    public boolean isAborted() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean isRepeatable() {
            r1 = this;
            r0 = 1
            return r0
    }

    public void resetHeaders() {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            r0.clear()
            cz.msebera.android.httpclient.HttpRequest r0 = r1.original
            cz.msebera.android.httpclient.Header[] r0 = r0.getAllHeaders()
            r1.setHeaders(r0)
            return
    }

    public void setMethod(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "Method name"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.method = r2
            return
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
}
