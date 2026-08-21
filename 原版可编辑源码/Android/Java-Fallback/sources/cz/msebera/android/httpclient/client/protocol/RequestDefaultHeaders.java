package cz.msebera.android.httpclient.client.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class RequestDefaultHeaders implements cz.msebera.android.httpclient.HttpRequestInterceptor {
    private final java.util.Collection<? extends cz.msebera.android.httpclient.Header> defaultHeaders;

    public RequestDefaultHeaders() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public RequestDefaultHeaders(java.util.Collection<? extends cz.msebera.android.httpclient.Header> r1) {
            r0 = this;
            r0.<init>()
            r0.defaultHeaders = r1
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r3 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r3)
            cz.msebera.android.httpclient.RequestLine r3 = r2.getRequestLine()
            java.lang.String r3 = r3.getMethod()
            java.lang.String r0 = "CONNECT"
            boolean r3 = r3.equalsIgnoreCase(r0)
            if (r3 == 0) goto L16
            return
        L16:
            cz.msebera.android.httpclient.params.HttpParams r3 = r2.getParams()
            java.lang.String r0 = "http.default-headers"
            java.lang.Object r3 = r3.getParameter(r0)
            java.util.Collection r3 = (java.util.Collection) r3
            if (r3 != 0) goto L26
            java.util.Collection<? extends cz.msebera.android.httpclient.Header> r3 = r1.defaultHeaders
        L26:
            if (r3 == 0) goto L3c
            java.util.Iterator r3 = r3.iterator()
        L2c:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L3c
            java.lang.Object r0 = r3.next()
            cz.msebera.android.httpclient.Header r0 = (cz.msebera.android.httpclient.Header) r0
            r2.addHeader(r0)
            goto L2c
        L3c:
            return
    }
}
