package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
class DefaultRedirectStrategyAdaptor implements cz.msebera.android.httpclient.client.RedirectStrategy {
    private final cz.msebera.android.httpclient.client.RedirectHandler handler;

    public DefaultRedirectStrategyAdaptor(cz.msebera.android.httpclient.client.RedirectHandler r1) {
            r0 = this;
            r0.<init>()
            r0.handler = r1
            return
    }

    public cz.msebera.android.httpclient.client.RedirectHandler getHandler() {
            r1 = this;
            cz.msebera.android.httpclient.client.RedirectHandler r0 = r1.handler
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.client.methods.HttpUriRequest getRedirect(cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.HttpResponse r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws cz.msebera.android.httpclient.ProtocolException {
            r1 = this;
            cz.msebera.android.httpclient.client.RedirectHandler r0 = r1.handler
            java.net.URI r3 = r0.getLocationURI(r3, r4)
            cz.msebera.android.httpclient.RequestLine r2 = r2.getRequestLine()
            java.lang.String r2 = r2.getMethod()
            java.lang.String r4 = "HEAD"
            boolean r2 = r2.equalsIgnoreCase(r4)
            if (r2 == 0) goto L1c
            cz.msebera.android.httpclient.client.methods.HttpHead r2 = new cz.msebera.android.httpclient.client.methods.HttpHead
            r2.<init>(r3)
            return r2
        L1c:
            cz.msebera.android.httpclient.client.methods.HttpGet r2 = new cz.msebera.android.httpclient.client.methods.HttpGet
            r2.<init>(r3)
            return r2
    }

    @Override
    public boolean isRedirected(cz.msebera.android.httpclient.HttpRequest r1, cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.ProtocolException {
            r0 = this;
            cz.msebera.android.httpclient.client.RedirectHandler r1 = r0.handler
            boolean r1 = r1.isRedirectRequested(r2, r3)
            return r1
    }
}
