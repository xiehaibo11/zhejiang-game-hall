package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class HttpCoreContext implements cz.msebera.android.httpclient.protocol.HttpContext {
    public static final java.lang.String HTTP_CONNECTION = "http.connection";
    public static final java.lang.String HTTP_REQUEST = "http.request";
    public static final java.lang.String HTTP_REQ_SENT = "http.request_sent";
    public static final java.lang.String HTTP_RESPONSE = "http.response";
    public static final java.lang.String HTTP_TARGET_HOST = "http.target_host";
    private final cz.msebera.android.httpclient.protocol.HttpContext context;

    public HttpCoreContext() {
            r1 = this;
            r1.<init>()
            cz.msebera.android.httpclient.protocol.BasicHttpContext r0 = new cz.msebera.android.httpclient.protocol.BasicHttpContext
            r0.<init>()
            r1.context = r0
            return
    }

    public HttpCoreContext(cz.msebera.android.httpclient.protocol.HttpContext r1) {
            r0 = this;
            r0.<init>()
            r0.context = r1
            return
    }

    public static cz.msebera.android.httpclient.protocol.HttpCoreContext adapt(cz.msebera.android.httpclient.protocol.HttpContext r1) {
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            boolean r0 = r1 instanceof cz.msebera.android.httpclient.protocol.HttpCoreContext
            if (r0 == 0) goto Lc
            cz.msebera.android.httpclient.protocol.HttpCoreContext r1 = (cz.msebera.android.httpclient.protocol.HttpCoreContext) r1
            return r1
        Lc:
            cz.msebera.android.httpclient.protocol.HttpCoreContext r0 = new cz.msebera.android.httpclient.protocol.HttpCoreContext
            r0.<init>(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.protocol.HttpCoreContext create() {
            cz.msebera.android.httpclient.protocol.HttpCoreContext r0 = new cz.msebera.android.httpclient.protocol.HttpCoreContext
            cz.msebera.android.httpclient.protocol.BasicHttpContext r1 = new cz.msebera.android.httpclient.protocol.BasicHttpContext
            r1.<init>()
            r0.<init>(r1)
            return r0
    }

    @Override
    public java.lang.Object getAttribute(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.protocol.HttpContext r0 = r1.context
            java.lang.Object r2 = r0.getAttribute(r2)
            return r2
    }

    public <T> T getAttribute(java.lang.String r2, java.lang.Class<T> r3) {
            r1 = this;
            java.lang.String r0 = "Attribute class"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.Object r2 = r1.getAttribute(r2)
            if (r2 != 0) goto Ld
            r2 = 0
            return r2
        Ld:
            java.lang.Object r2 = r3.cast(r2)
            return r2
    }

    public cz.msebera.android.httpclient.HttpConnection getConnection() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.HttpConnection> r0 = cz.msebera.android.httpclient.HttpConnection.class
            java.lang.String r1 = "http.connection"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            cz.msebera.android.httpclient.HttpConnection r0 = (cz.msebera.android.httpclient.HttpConnection) r0
            return r0
    }

    public <T extends cz.msebera.android.httpclient.HttpConnection> T getConnection(java.lang.Class<T> r2) {
            r1 = this;
            java.lang.String r0 = "http.connection"
            java.lang.Object r2 = r1.getAttribute(r0, r2)
            cz.msebera.android.httpclient.HttpConnection r2 = (cz.msebera.android.httpclient.HttpConnection) r2
            return r2
    }

    public cz.msebera.android.httpclient.HttpRequest getRequest() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.HttpRequest> r0 = cz.msebera.android.httpclient.HttpRequest.class
            java.lang.String r1 = "http.request"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            cz.msebera.android.httpclient.HttpRequest r0 = (cz.msebera.android.httpclient.HttpRequest) r0
            return r0
    }

    public cz.msebera.android.httpclient.HttpResponse getResponse() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.HttpResponse> r0 = cz.msebera.android.httpclient.HttpResponse.class
            java.lang.String r1 = "http.response"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            cz.msebera.android.httpclient.HttpResponse r0 = (cz.msebera.android.httpclient.HttpResponse) r0
            return r0
    }

    public cz.msebera.android.httpclient.HttpHost getTargetHost() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.HttpHost> r0 = cz.msebera.android.httpclient.HttpHost.class
            java.lang.String r1 = "http.target_host"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            cz.msebera.android.httpclient.HttpHost r0 = (cz.msebera.android.httpclient.HttpHost) r0
            return r0
    }

    public boolean isRequestSent() {
            r2 = this;
            java.lang.Class<java.lang.Boolean> r0 = java.lang.Boolean.class
            java.lang.String r1 = "http.request_sent"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            if (r0 == 0) goto L14
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }

    @Override
    public java.lang.Object removeAttribute(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.protocol.HttpContext r0 = r1.context
            java.lang.Object r2 = r0.removeAttribute(r2)
            return r2
    }

    @Override
    public void setAttribute(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            cz.msebera.android.httpclient.protocol.HttpContext r0 = r1.context
            r0.setAttribute(r2, r3)
            return
    }

    public void setTargetHost(cz.msebera.android.httpclient.HttpHost r2) {
            r1 = this;
            java.lang.String r0 = "http.target_host"
            r1.setAttribute(r0, r2)
            return
    }
}
