package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class UriHttpRequestHandlerMapper implements cz.msebera.android.httpclient.protocol.HttpRequestHandlerMapper {
    private final cz.msebera.android.httpclient.protocol.UriPatternMatcher<cz.msebera.android.httpclient.protocol.HttpRequestHandler> matcher;

    public UriHttpRequestHandlerMapper() {
            r1 = this;
            cz.msebera.android.httpclient.protocol.UriPatternMatcher r0 = new cz.msebera.android.httpclient.protocol.UriPatternMatcher
            r0.<init>()
            r1.<init>(r0)
            return
    }

    protected UriHttpRequestHandlerMapper(cz.msebera.android.httpclient.protocol.UriPatternMatcher<cz.msebera.android.httpclient.protocol.HttpRequestHandler> r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Pattern matcher"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.protocol.UriPatternMatcher r2 = (cz.msebera.android.httpclient.protocol.UriPatternMatcher) r2
            r1.matcher = r2
            return
    }

    protected java.lang.String getRequestPath(cz.msebera.android.httpclient.HttpRequest r4) {
            r3 = this;
            cz.msebera.android.httpclient.RequestLine r4 = r4.getRequestLine()
            java.lang.String r4 = r4.getUri()
            java.lang.String r0 = "?"
            int r0 = r4.indexOf(r0)
            r1 = 0
            r2 = -1
            if (r0 == r2) goto L17
            java.lang.String r4 = r4.substring(r1, r0)
            goto L23
        L17:
            java.lang.String r0 = "#"
            int r0 = r4.indexOf(r0)
            if (r0 == r2) goto L23
            java.lang.String r4 = r4.substring(r1, r0)
        L23:
            return r4
    }

    @Override
    public cz.msebera.android.httpclient.protocol.HttpRequestHandler lookup(cz.msebera.android.httpclient.HttpRequest r2) {
            r1 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.protocol.UriPatternMatcher<cz.msebera.android.httpclient.protocol.HttpRequestHandler> r0 = r1.matcher
            java.lang.String r2 = r1.getRequestPath(r2)
            java.lang.Object r2 = r0.lookup(r2)
            cz.msebera.android.httpclient.protocol.HttpRequestHandler r2 = (cz.msebera.android.httpclient.protocol.HttpRequestHandler) r2
            return r2
    }

    public void register(java.lang.String r2, cz.msebera.android.httpclient.protocol.HttpRequestHandler r3) {
            r1 = this;
            java.lang.String r0 = "Pattern"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Handler"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.protocol.UriPatternMatcher<cz.msebera.android.httpclient.protocol.HttpRequestHandler> r0 = r1.matcher
            r0.register(r2, r3)
            return
    }

    public void unregister(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.protocol.UriPatternMatcher<cz.msebera.android.httpclient.protocol.HttpRequestHandler> r0 = r1.matcher
            r0.unregister(r2)
            return
    }
}
