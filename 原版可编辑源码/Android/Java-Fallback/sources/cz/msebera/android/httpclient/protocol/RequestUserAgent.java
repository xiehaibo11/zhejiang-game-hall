package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class RequestUserAgent implements cz.msebera.android.httpclient.HttpRequestInterceptor {
    private final java.lang.String userAgent;

    public RequestUserAgent() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public RequestUserAgent(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.userAgent = r1
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r2 = this;
            java.lang.String r4 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r4)
            java.lang.String r4 = "User-Agent"
            boolean r0 = r3.containsHeader(r4)
            if (r0 != 0) goto L25
            r0 = 0
            cz.msebera.android.httpclient.params.HttpParams r1 = r3.getParams()
            if (r1 == 0) goto L1c
            java.lang.String r0 = "http.useragent"
            java.lang.Object r0 = r1.getParameter(r0)
            java.lang.String r0 = (java.lang.String) r0
        L1c:
            if (r0 != 0) goto L20
            java.lang.String r0 = r2.userAgent
        L20:
            if (r0 == 0) goto L25
            r3.addHeader(r4, r0)
        L25:
            return
    }
}
