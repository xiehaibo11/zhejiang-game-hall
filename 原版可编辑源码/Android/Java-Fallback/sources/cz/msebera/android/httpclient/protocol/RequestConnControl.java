package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class RequestConnControl implements cz.msebera.android.httpclient.HttpRequestInterceptor {
    public RequestConnControl() {
            r0 = this;
            r0.<init>()
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
            java.lang.String r3 = "Connection"
            boolean r0 = r2.containsHeader(r3)
            if (r0 != 0) goto L23
            java.lang.String r0 = "Keep-Alive"
            r2.addHeader(r3, r0)
        L23:
            return
    }
}
