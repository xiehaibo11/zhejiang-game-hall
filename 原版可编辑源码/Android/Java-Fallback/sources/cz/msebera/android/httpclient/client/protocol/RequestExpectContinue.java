package cz.msebera.android.httpclient.client.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class RequestExpectContinue implements cz.msebera.android.httpclient.HttpRequestInterceptor {
    public RequestExpectContinue() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpRequest r8, cz.msebera.android.httpclient.protocol.HttpContext r9) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r7 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.lang.String r0 = "Expect"
            boolean r1 = r8.containsHeader(r0)
            if (r1 != 0) goto L47
            boolean r1 = r8 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            if (r1 == 0) goto L47
            cz.msebera.android.httpclient.RequestLine r1 = r8.getRequestLine()
            cz.msebera.android.httpclient.ProtocolVersion r1 = r1.getProtocolVersion()
            r2 = r8
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r2 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r2
            cz.msebera.android.httpclient.HttpEntity r2 = r2.getEntity()
            if (r2 == 0) goto L47
            long r2 = r2.getContentLength()
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 == 0) goto L47
            cz.msebera.android.httpclient.HttpVersion r2 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_0
            boolean r1 = r1.lessEquals(r2)
            if (r1 != 0) goto L47
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r9 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r9)
            cz.msebera.android.httpclient.client.config.RequestConfig r9 = r9.getRequestConfig()
            boolean r9 = r9.isExpectContinueEnabled()
            if (r9 == 0) goto L47
            java.lang.String r9 = "100-continue"
            r8.addHeader(r0, r9)
        L47:
            return
    }
}
