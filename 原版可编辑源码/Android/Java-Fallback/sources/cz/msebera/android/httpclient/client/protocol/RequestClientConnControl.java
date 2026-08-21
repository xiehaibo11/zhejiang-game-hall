package cz.msebera.android.httpclient.client.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class RequestClientConnControl implements cz.msebera.android.httpclient.HttpRequestInterceptor {
    private static final java.lang.String PROXY_CONN_DIRECTIVE = "Proxy-Connection";
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    public RequestClientConnControl() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpRequest r5, cz.msebera.android.httpclient.protocol.HttpContext r6) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r4 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            cz.msebera.android.httpclient.RequestLine r0 = r5.getRequestLine()
            java.lang.String r0 = r0.getMethod()
            java.lang.String r1 = "CONNECT"
            boolean r0 = r0.equalsIgnoreCase(r1)
            java.lang.String r1 = "Keep-Alive"
            java.lang.String r2 = "Proxy-Connection"
            if (r0 == 0) goto L1d
            r5.setHeader(r2, r1)
            return
        L1d:
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r6 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r6)
            cz.msebera.android.httpclient.conn.routing.RouteInfo r6 = r6.getHttpRoute()
            if (r6 != 0) goto L2f
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r4.log
            java.lang.String r6 = "Connection route not set in the context"
            r5.debug(r6)
            return
        L2f:
            int r0 = r6.getHopCount()
            r3 = 1
            if (r0 == r3) goto L3c
            boolean r0 = r6.isTunnelled()
            if (r0 == 0) goto L47
        L3c:
            java.lang.String r0 = "Connection"
            boolean r3 = r5.containsHeader(r0)
            if (r3 != 0) goto L47
            r5.addHeader(r0, r1)
        L47:
            int r0 = r6.getHopCount()
            r3 = 2
            if (r0 != r3) goto L5d
            boolean r6 = r6.isTunnelled()
            if (r6 != 0) goto L5d
            boolean r6 = r5.containsHeader(r2)
            if (r6 != 0) goto L5d
            r5.addHeader(r2, r1)
        L5d:
            return
    }
}
