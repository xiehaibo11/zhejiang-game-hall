package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class RequestExpectContinue implements cz.msebera.android.httpclient.HttpRequestInterceptor {
    private final boolean activeByDefault;

    @java.lang.Deprecated
    public RequestExpectContinue() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public RequestExpectContinue(boolean r1) {
            r0 = this;
            r0.<init>()
            r0.activeByDefault = r1
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpRequest r7, cz.msebera.android.httpclient.protocol.HttpContext r8) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r6 = this;
            java.lang.String r8 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r8)
            java.lang.String r8 = "Expect"
            boolean r0 = r7.containsHeader(r8)
            if (r0 != 0) goto L47
            boolean r0 = r7 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            if (r0 == 0) goto L47
            cz.msebera.android.httpclient.RequestLine r0 = r7.getRequestLine()
            cz.msebera.android.httpclient.ProtocolVersion r0 = r0.getProtocolVersion()
            r1 = r7
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r1 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r1
            cz.msebera.android.httpclient.HttpEntity r1 = r1.getEntity()
            if (r1 == 0) goto L47
            long r1 = r1.getContentLength()
            r3 = 0
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 == 0) goto L47
            cz.msebera.android.httpclient.HttpVersion r1 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_0
            boolean r0 = r0.lessEquals(r1)
            if (r0 != 0) goto L47
            cz.msebera.android.httpclient.params.HttpParams r0 = r7.getParams()
            boolean r1 = r6.activeByDefault
            java.lang.String r2 = "http.protocol.expect-continue"
            boolean r0 = r0.getBooleanParameter(r2, r1)
            if (r0 == 0) goto L47
            java.lang.String r0 = "100-continue"
            r7.addHeader(r8, r0)
        L47:
            return
    }
}
