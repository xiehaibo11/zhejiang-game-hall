package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class RequestTargetHost implements cz.msebera.android.httpclient.HttpRequestInterceptor {
    public RequestTargetHost() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpRequest r5, cz.msebera.android.httpclient.protocol.HttpContext r6) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r4 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            cz.msebera.android.httpclient.protocol.HttpCoreContext r6 = cz.msebera.android.httpclient.protocol.HttpCoreContext.adapt(r6)
            cz.msebera.android.httpclient.RequestLine r0 = r5.getRequestLine()
            cz.msebera.android.httpclient.ProtocolVersion r0 = r0.getProtocolVersion()
            cz.msebera.android.httpclient.RequestLine r1 = r5.getRequestLine()
            java.lang.String r1 = r1.getMethod()
            java.lang.String r2 = "CONNECT"
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 == 0) goto L2a
            cz.msebera.android.httpclient.HttpVersion r1 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_0
            boolean r1 = r0.lessEquals(r1)
            if (r1 == 0) goto L2a
            return
        L2a:
            java.lang.String r1 = "Host"
            boolean r2 = r5.containsHeader(r1)
            if (r2 != 0) goto L6f
            cz.msebera.android.httpclient.HttpHost r2 = r6.getTargetHost()
            if (r2 != 0) goto L68
            cz.msebera.android.httpclient.HttpConnection r6 = r6.getConnection()
            boolean r3 = r6 instanceof cz.msebera.android.httpclient.HttpInetConnection
            if (r3 == 0) goto L55
            cz.msebera.android.httpclient.HttpInetConnection r6 = (cz.msebera.android.httpclient.HttpInetConnection) r6
            java.net.InetAddress r3 = r6.getRemoteAddress()
            int r6 = r6.getRemotePort()
            if (r3 == 0) goto L55
            cz.msebera.android.httpclient.HttpHost r2 = new cz.msebera.android.httpclient.HttpHost
            java.lang.String r3 = r3.getHostName()
            r2.<init>(r3, r6)
        L55:
            if (r2 != 0) goto L68
            cz.msebera.android.httpclient.HttpVersion r5 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_0
            boolean r5 = r0.lessEquals(r5)
            if (r5 == 0) goto L60
            return
        L60:
            cz.msebera.android.httpclient.ProtocolException r5 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.String r6 = "Target host missing"
            r5.<init>(r6)
            throw r5
        L68:
            java.lang.String r6 = r2.toHostString()
            r5.addHeader(r1, r6)
        L6f:
            return
    }
}
