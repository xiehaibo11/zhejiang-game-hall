package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultRedirectStrategy implements cz.msebera.android.httpclient.client.RedirectStrategy {
    public static final cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategy INSTANCE = null;

    @java.lang.Deprecated
    public static final java.lang.String REDIRECT_LOCATIONS = "http.protocol.redirect-locations";
    private static final java.lang.String[] REDIRECT_METHODS = null;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    static {
            cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategy r0 = new cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategy
            r0.<init>()
            cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategy.INSTANCE = r0
            java.lang.String r0 = "GET"
            java.lang.String r1 = "HEAD"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategy.REDIRECT_METHODS = r0
            return
    }

    public DefaultRedirectStrategy() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            return
    }

    protected java.net.URI createLocationURI(java.lang.String r5) throws cz.msebera.android.httpclient.ProtocolException {
            r4 = this;
            cz.msebera.android.httpclient.client.utils.URIBuilder r0 = new cz.msebera.android.httpclient.client.utils.URIBuilder     // Catch: java.net.URISyntaxException -> L31
            java.net.URI r1 = new java.net.URI     // Catch: java.net.URISyntaxException -> L31
            r1.<init>(r5)     // Catch: java.net.URISyntaxException -> L31
            java.net.URI r1 = r1.normalize()     // Catch: java.net.URISyntaxException -> L31
            r0.<init>(r1)     // Catch: java.net.URISyntaxException -> L31
            java.lang.String r1 = r0.getHost()     // Catch: java.net.URISyntaxException -> L31
            if (r1 == 0) goto L1d
            java.util.Locale r2 = java.util.Locale.ROOT     // Catch: java.net.URISyntaxException -> L31
            java.lang.String r1 = r1.toLowerCase(r2)     // Catch: java.net.URISyntaxException -> L31
            r0.setHost(r1)     // Catch: java.net.URISyntaxException -> L31
        L1d:
            java.lang.String r1 = r0.getPath()     // Catch: java.net.URISyntaxException -> L31
            boolean r1 = cz.msebera.android.httpclient.util.TextUtils.isEmpty(r1)     // Catch: java.net.URISyntaxException -> L31
            if (r1 == 0) goto L2c
            java.lang.String r1 = "/"
            r0.setPath(r1)     // Catch: java.net.URISyntaxException -> L31
        L2c:
            java.net.URI r5 = r0.build()     // Catch: java.net.URISyntaxException -> L31
            return r5
        L31:
            r0 = move-exception
            cz.msebera.android.httpclient.ProtocolException r1 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Invalid redirect URI: "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r1.<init>(r5, r0)
            throw r1
    }

    public java.net.URI getLocationURI(cz.msebera.android.httpclient.HttpRequest r6, cz.msebera.android.httpclient.HttpResponse r7, cz.msebera.android.httpclient.protocol.HttpContext r8) throws cz.msebera.android.httpclient.ProtocolException {
            r5 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            java.lang.String r0 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r0 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r8)
            java.lang.String r1 = "location"
            cz.msebera.android.httpclient.Header r1 = r7.getFirstHeader(r1)
            if (r1 == 0) goto Lda
            java.lang.String r7 = r1.getValue()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r5.log
            boolean r1 = r1.isDebugEnabled()
            java.lang.String r2 = "'"
            if (r1 == 0) goto L42
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r5.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Redirect requested to location '"
            r3.append(r4)
            r3.append(r7)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            r1.debug(r3)
        L42:
            cz.msebera.android.httpclient.client.config.RequestConfig r1 = r0.getRequestConfig()
            java.net.URI r7 = r5.createLocationURI(r7)
            boolean r3 = r7.isAbsolute()     // Catch: java.net.URISyntaxException -> Lcf
            if (r3 != 0) goto L92
            boolean r3 = r1.isRelativeRedirectsAllowed()     // Catch: java.net.URISyntaxException -> Lcf
            if (r3 == 0) goto L76
            cz.msebera.android.httpclient.HttpHost r3 = r0.getTargetHost()     // Catch: java.net.URISyntaxException -> Lcf
            java.lang.String r4 = "Target host"
            cz.msebera.android.httpclient.util.Asserts.notNull(r3, r4)     // Catch: java.net.URISyntaxException -> Lcf
            java.net.URI r4 = new java.net.URI     // Catch: java.net.URISyntaxException -> Lcf
            cz.msebera.android.httpclient.RequestLine r6 = r6.getRequestLine()     // Catch: java.net.URISyntaxException -> Lcf
            java.lang.String r6 = r6.getUri()     // Catch: java.net.URISyntaxException -> Lcf
            r4.<init>(r6)     // Catch: java.net.URISyntaxException -> Lcf
            r6 = 0
            java.net.URI r6 = cz.msebera.android.httpclient.client.utils.URIUtils.rewriteURI(r4, r3, r6)     // Catch: java.net.URISyntaxException -> Lcf
            java.net.URI r7 = cz.msebera.android.httpclient.client.utils.URIUtils.resolve(r6, r7)     // Catch: java.net.URISyntaxException -> Lcf
            goto L92
        L76:
            cz.msebera.android.httpclient.ProtocolException r6 = new cz.msebera.android.httpclient.ProtocolException     // Catch: java.net.URISyntaxException -> Lcf
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.net.URISyntaxException -> Lcf
            r8.<init>()     // Catch: java.net.URISyntaxException -> Lcf
            java.lang.String r0 = "Relative redirect location '"
            r8.append(r0)     // Catch: java.net.URISyntaxException -> Lcf
            r8.append(r7)     // Catch: java.net.URISyntaxException -> Lcf
            java.lang.String r7 = "' not allowed"
            r8.append(r7)     // Catch: java.net.URISyntaxException -> Lcf
            java.lang.String r7 = r8.toString()     // Catch: java.net.URISyntaxException -> Lcf
            r6.<init>(r7)     // Catch: java.net.URISyntaxException -> Lcf
            throw r6     // Catch: java.net.URISyntaxException -> Lcf
        L92:
            java.lang.String r6 = "http.protocol.redirect-locations"
            java.lang.Object r0 = r0.getAttribute(r6)
            cz.msebera.android.httpclient.impl.client.RedirectLocations r0 = (cz.msebera.android.httpclient.impl.client.RedirectLocations) r0
            if (r0 != 0) goto La4
            cz.msebera.android.httpclient.impl.client.RedirectLocations r0 = new cz.msebera.android.httpclient.impl.client.RedirectLocations
            r0.<init>()
            r8.setAttribute(r6, r0)
        La4:
            boolean r6 = r1.isCircularRedirectsAllowed()
            if (r6 != 0) goto Lcb
            boolean r6 = r0.contains(r7)
            if (r6 != 0) goto Lb1
            goto Lcb
        Lb1:
            cz.msebera.android.httpclient.client.CircularRedirectException r6 = new cz.msebera.android.httpclient.client.CircularRedirectException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "Circular redirect to '"
            r8.append(r0)
            r8.append(r7)
            r8.append(r2)
            java.lang.String r7 = r8.toString()
            r6.<init>(r7)
            throw r6
        Lcb:
            r0.add(r7)
            return r7
        Lcf:
            r6 = move-exception
            cz.msebera.android.httpclient.ProtocolException r7 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.String r8 = r6.getMessage()
            r7.<init>(r8, r6)
            throw r7
        Lda:
            cz.msebera.android.httpclient.ProtocolException r6 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "Received redirect response "
            r8.append(r0)
            cz.msebera.android.httpclient.StatusLine r7 = r7.getStatusLine()
            r8.append(r7)
            java.lang.String r7 = " but no location header"
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            r6.<init>(r7)
            throw r6
    }

    @Override
    public cz.msebera.android.httpclient.client.methods.HttpUriRequest getRedirect(cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.HttpResponse r4, cz.msebera.android.httpclient.protocol.HttpContext r5) throws cz.msebera.android.httpclient.ProtocolException {
            r2 = this;
            java.net.URI r5 = r2.getLocationURI(r3, r4, r5)
            cz.msebera.android.httpclient.RequestLine r0 = r3.getRequestLine()
            java.lang.String r0 = r0.getMethod()
            java.lang.String r1 = "HEAD"
            boolean r1 = r0.equalsIgnoreCase(r1)
            if (r1 == 0) goto L1a
            cz.msebera.android.httpclient.client.methods.HttpHead r3 = new cz.msebera.android.httpclient.client.methods.HttpHead
            r3.<init>(r5)
            return r3
        L1a:
            java.lang.String r1 = "GET"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L28
            cz.msebera.android.httpclient.client.methods.HttpGet r3 = new cz.msebera.android.httpclient.client.methods.HttpGet
            r3.<init>(r5)
            return r3
        L28:
            cz.msebera.android.httpclient.StatusLine r4 = r4.getStatusLine()
            int r4 = r4.getStatusCode()
            r0 = 307(0x133, float:4.3E-43)
            if (r4 != r0) goto L41
            cz.msebera.android.httpclient.client.methods.RequestBuilder r3 = cz.msebera.android.httpclient.client.methods.RequestBuilder.copy(r3)
            cz.msebera.android.httpclient.client.methods.RequestBuilder r3 = r3.setUri(r5)
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r3 = r3.build()
            return r3
        L41:
            cz.msebera.android.httpclient.client.methods.HttpGet r3 = new cz.msebera.android.httpclient.client.methods.HttpGet
            r3.<init>(r5)
            return r3
    }

    protected boolean isRedirectable(java.lang.String r6) {
            r5 = this;
            java.lang.String[] r0 = cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategy.REDIRECT_METHODS
            int r1 = r0.length
            r2 = 0
            r3 = 0
        L5:
            if (r3 >= r1) goto L14
            r4 = r0[r3]
            boolean r4 = r4.equalsIgnoreCase(r6)
            if (r4 == 0) goto L11
            r6 = 1
            return r6
        L11:
            int r3 = r3 + 1
            goto L5
        L14:
            return r2
    }

    @Override
    public boolean isRedirected(cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.HttpResponse r4, cz.msebera.android.httpclient.protocol.HttpContext r5) throws cz.msebera.android.httpclient.ProtocolException {
            r2 = this;
            java.lang.String r5 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r5)
            java.lang.String r5 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r5)
            cz.msebera.android.httpclient.StatusLine r5 = r4.getStatusLine()
            int r5 = r5.getStatusCode()
            cz.msebera.android.httpclient.RequestLine r3 = r3.getRequestLine()
            java.lang.String r3 = r3.getMethod()
            java.lang.String r0 = "location"
            cz.msebera.android.httpclient.Header r4 = r4.getFirstHeader(r0)
            r0 = 307(0x133, float:4.3E-43)
            if (r5 == r0) goto L36
            r0 = 1
            r1 = 0
            switch(r5) {
                case 301: goto L36;
                case 302: goto L2b;
                case 303: goto L2a;
                default: goto L29;
            }
        L29:
            return r1
        L2a:
            return r0
        L2b:
            boolean r3 = r2.isRedirectable(r3)
            if (r3 == 0) goto L34
            if (r4 == 0) goto L34
            goto L35
        L34:
            r0 = 0
        L35:
            return r0
        L36:
            boolean r3 = r2.isRedirectable(r3)
            return r3
    }
}
