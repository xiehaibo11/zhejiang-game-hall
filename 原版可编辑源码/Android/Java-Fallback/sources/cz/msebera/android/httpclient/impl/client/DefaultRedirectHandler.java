package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class DefaultRedirectHandler implements cz.msebera.android.httpclient.client.RedirectHandler {
    private static final java.lang.String REDIRECT_LOCATIONS = "http.protocol.redirect-locations";
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    public DefaultRedirectHandler() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            return
    }

    @Override
    public java.net.URI getLocationURI(cz.msebera.android.httpclient.HttpResponse r7, cz.msebera.android.httpclient.protocol.HttpContext r8) throws cz.msebera.android.httpclient.ProtocolException {
            r6 = this;
            java.lang.String r0 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            java.lang.String r0 = "location"
            cz.msebera.android.httpclient.Header r0 = r7.getFirstHeader(r0)
            if (r0 == 0) goto L11d
            java.lang.String r0 = r0.getValue()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r6.log
            boolean r1 = r1.isDebugEnabled()
            java.lang.String r2 = "'"
            if (r1 == 0) goto L34
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r6.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Redirect requested to location '"
            r3.append(r4)
            r3.append(r0)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            r1.debug(r3)
        L34:
            java.net.URI r1 = new java.net.URI     // Catch: java.net.URISyntaxException -> L105
            r1.<init>(r0)     // Catch: java.net.URISyntaxException -> L105
            cz.msebera.android.httpclient.params.HttpParams r7 = r7.getParams()
            boolean r0 = r1.isAbsolute()
            r3 = 1
            if (r0 != 0) goto L9e
            java.lang.String r0 = "http.protocol.reject-relative-redirect"
            boolean r0 = r7.isParameterTrue(r0)
            if (r0 != 0) goto L82
            java.lang.String r0 = "http.target_host"
            java.lang.Object r0 = r8.getAttribute(r0)
            cz.msebera.android.httpclient.HttpHost r0 = (cz.msebera.android.httpclient.HttpHost) r0
            java.lang.String r4 = "Target host"
            cz.msebera.android.httpclient.util.Asserts.notNull(r0, r4)
            java.lang.String r4 = "http.request"
            java.lang.Object r4 = r8.getAttribute(r4)
            cz.msebera.android.httpclient.HttpRequest r4 = (cz.msebera.android.httpclient.HttpRequest) r4
            java.net.URI r5 = new java.net.URI     // Catch: java.net.URISyntaxException -> L77
            cz.msebera.android.httpclient.RequestLine r4 = r4.getRequestLine()     // Catch: java.net.URISyntaxException -> L77
            java.lang.String r4 = r4.getUri()     // Catch: java.net.URISyntaxException -> L77
            r5.<init>(r4)     // Catch: java.net.URISyntaxException -> L77
            java.net.URI r0 = cz.msebera.android.httpclient.client.utils.URIUtils.rewriteURI(r5, r0, r3)     // Catch: java.net.URISyntaxException -> L77
            java.net.URI r1 = cz.msebera.android.httpclient.client.utils.URIUtils.resolve(r0, r1)     // Catch: java.net.URISyntaxException -> L77
            goto L9e
        L77:
            r7 = move-exception
            cz.msebera.android.httpclient.ProtocolException r8 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.String r0 = r7.getMessage()
            r8.<init>(r0, r7)
            throw r8
        L82:
            cz.msebera.android.httpclient.ProtocolException r7 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "Relative redirect location '"
            r8.append(r0)
            r8.append(r1)
            java.lang.String r0 = "' not allowed"
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
        L9e:
            java.lang.String r0 = "http.protocol.allow-circular-redirects"
            boolean r7 = r7.isParameterFalse(r0)
            if (r7 == 0) goto L104
            java.lang.String r7 = "http.protocol.redirect-locations"
            java.lang.Object r0 = r8.getAttribute(r7)
            cz.msebera.android.httpclient.impl.client.RedirectLocations r0 = (cz.msebera.android.httpclient.impl.client.RedirectLocations) r0
            if (r0 != 0) goto Lb8
            cz.msebera.android.httpclient.impl.client.RedirectLocations r0 = new cz.msebera.android.httpclient.impl.client.RedirectLocations
            r0.<init>()
            r8.setAttribute(r7, r0)
        Lb8:
            java.lang.String r7 = r1.getFragment()
            if (r7 == 0) goto Ldf
            cz.msebera.android.httpclient.HttpHost r7 = new cz.msebera.android.httpclient.HttpHost     // Catch: java.net.URISyntaxException -> Ld4
            java.lang.String r8 = r1.getHost()     // Catch: java.net.URISyntaxException -> Ld4
            int r4 = r1.getPort()     // Catch: java.net.URISyntaxException -> Ld4
            java.lang.String r5 = r1.getScheme()     // Catch: java.net.URISyntaxException -> Ld4
            r7.<init>(r8, r4, r5)     // Catch: java.net.URISyntaxException -> Ld4
            java.net.URI r7 = cz.msebera.android.httpclient.client.utils.URIUtils.rewriteURI(r1, r7, r3)     // Catch: java.net.URISyntaxException -> Ld4
            goto Le0
        Ld4:
            r7 = move-exception
            cz.msebera.android.httpclient.ProtocolException r8 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.String r0 = r7.getMessage()
            r8.<init>(r0, r7)
            throw r8
        Ldf:
            r7 = r1
        Le0:
            boolean r8 = r0.contains(r7)
            if (r8 != 0) goto Lea
            r0.add(r7)
            goto L104
        Lea:
            cz.msebera.android.httpclient.client.CircularRedirectException r8 = new cz.msebera.android.httpclient.client.CircularRedirectException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Circular redirect to '"
            r0.append(r1)
            r0.append(r7)
            r0.append(r2)
            java.lang.String r7 = r0.toString()
            r8.<init>(r7)
            throw r8
        L104:
            return r1
        L105:
            r7 = move-exception
            cz.msebera.android.httpclient.ProtocolException r8 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid redirect URI: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r8.<init>(r0, r7)
            throw r8
        L11d:
            cz.msebera.android.httpclient.ProtocolException r8 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Received redirect response "
            r0.append(r1)
            cz.msebera.android.httpclient.StatusLine r7 = r7.getStatusLine()
            r0.append(r7)
            java.lang.String r7 = " but no location header"
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            r8.<init>(r7)
            throw r8
    }

    @Override
    public boolean isRedirectRequested(cz.msebera.android.httpclient.HttpResponse r4, cz.msebera.android.httpclient.protocol.HttpContext r5) {
            r3 = this;
            java.lang.String r0 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            cz.msebera.android.httpclient.StatusLine r4 = r4.getStatusLine()
            int r4 = r4.getStatusCode()
            r0 = 307(0x133, float:4.3E-43)
            r1 = 1
            r2 = 0
            if (r4 == r0) goto L18
            switch(r4) {
                case 301: goto L18;
                case 302: goto L18;
                case 303: goto L17;
                default: goto L16;
            }
        L16:
            return r2
        L17:
            return r1
        L18:
            java.lang.String r4 = "http.request"
            java.lang.Object r4 = r5.getAttribute(r4)
            cz.msebera.android.httpclient.HttpRequest r4 = (cz.msebera.android.httpclient.HttpRequest) r4
            cz.msebera.android.httpclient.RequestLine r4 = r4.getRequestLine()
            java.lang.String r4 = r4.getMethod()
            java.lang.String r5 = "GET"
            boolean r5 = r4.equalsIgnoreCase(r5)
            if (r5 != 0) goto L3a
            java.lang.String r5 = "HEAD"
            boolean r4 = r4.equalsIgnoreCase(r5)
            if (r4 == 0) goto L39
            goto L3a
        L39:
            r1 = 0
        L3a:
            return r1
    }
}
