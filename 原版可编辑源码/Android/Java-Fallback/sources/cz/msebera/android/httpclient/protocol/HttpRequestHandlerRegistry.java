package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public class HttpRequestHandlerRegistry implements cz.msebera.android.httpclient.protocol.HttpRequestHandlerResolver {
    private final cz.msebera.android.httpclient.protocol.UriPatternMatcher<cz.msebera.android.httpclient.protocol.HttpRequestHandler> matcher;

    public HttpRequestHandlerRegistry() {
            r1 = this;
            r1.<init>()
            cz.msebera.android.httpclient.protocol.UriPatternMatcher r0 = new cz.msebera.android.httpclient.protocol.UriPatternMatcher
            r0.<init>()
            r1.matcher = r0
            return
    }

    public java.util.Map<java.lang.String, cz.msebera.android.httpclient.protocol.HttpRequestHandler> getHandlers() {
            r1 = this;
            cz.msebera.android.httpclient.protocol.UriPatternMatcher<cz.msebera.android.httpclient.protocol.HttpRequestHandler> r0 = r1.matcher
            java.util.Map r0 = r0.getObjects()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.protocol.HttpRequestHandler lookup(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.protocol.UriPatternMatcher<cz.msebera.android.httpclient.protocol.HttpRequestHandler> r0 = r1.matcher
            java.lang.Object r2 = r0.lookup(r2)
            cz.msebera.android.httpclient.protocol.HttpRequestHandler r2 = (cz.msebera.android.httpclient.protocol.HttpRequestHandler) r2
            return r2
    }

    public void register(java.lang.String r2, cz.msebera.android.httpclient.protocol.HttpRequestHandler r3) {
            r1 = this;
            java.lang.String r0 = "URI request pattern"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Request handler"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.protocol.UriPatternMatcher<cz.msebera.android.httpclient.protocol.HttpRequestHandler> r0 = r1.matcher
            r0.register(r2, r3)
            return
    }

    public void setHandlers(java.util.Map<java.lang.String, cz.msebera.android.httpclient.protocol.HttpRequestHandler> r2) {
            r1 = this;
            cz.msebera.android.httpclient.protocol.UriPatternMatcher<cz.msebera.android.httpclient.protocol.HttpRequestHandler> r0 = r1.matcher
            r0.setObjects(r2)
            return
    }

    public void unregister(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.protocol.UriPatternMatcher<cz.msebera.android.httpclient.protocol.HttpRequestHandler> r0 = r1.matcher
            r0.unregister(r2)
            return
    }
}
