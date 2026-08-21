package com.loopj.android.http;

class MyRedirectHandler extends cz.msebera.android.httpclient.impl.client.DefaultRedirectHandler {
    private static final java.lang.String REDIRECT_LOCATIONS = "http.protocol.redirect-locations";
    private final boolean enableRedirects;

    public MyRedirectHandler(boolean r1) {
            r0 = this;
            r0.<init>()
            r0.enableRedirects = r1
            return
    }

    @Override
    public java.net.URI getLocationURI(cz.msebera.android.httpclient.HttpResponse r6, cz.msebera.android.httpclient.protocol.HttpContext r7) throws cz.msebera.android.httpclient.ProtocolException {
            r5 = this;
            if (r6 == 0) goto L126
            java.lang.String r0 = "location"
            cz.msebera.android.httpclient.Header r0 = r6.getFirstHeader(r0)
            if (r0 == 0) goto L106
            java.lang.String r0 = r0.getValue()
            java.lang.String r1 = " "
            java.lang.String r2 = "%20"
            java.lang.String r0 = r0.replaceAll(r1, r2)
            java.net.URI r1 = new java.net.URI     // Catch: java.net.URISyntaxException -> Lee
            r1.<init>(r0)     // Catch: java.net.URISyntaxException -> Lee
            cz.msebera.android.httpclient.params.HttpParams r6 = r6.getParams()
            boolean r0 = r1.isAbsolute()
            r2 = 1
            if (r0 != 0) goto L85
            java.lang.String r0 = "http.protocol.reject-relative-redirect"
            boolean r0 = r6.isParameterTrue(r0)
            if (r0 != 0) goto L69
            java.lang.String r0 = "http.target_host"
            java.lang.Object r0 = r7.getAttribute(r0)
            cz.msebera.android.httpclient.HttpHost r0 = (cz.msebera.android.httpclient.HttpHost) r0
            if (r0 == 0) goto L61
            java.lang.String r3 = "http.request"
            java.lang.Object r3 = r7.getAttribute(r3)
            cz.msebera.android.httpclient.HttpRequest r3 = (cz.msebera.android.httpclient.HttpRequest) r3
            java.net.URI r4 = new java.net.URI     // Catch: java.net.URISyntaxException -> L56
            cz.msebera.android.httpclient.RequestLine r3 = r3.getRequestLine()     // Catch: java.net.URISyntaxException -> L56
            java.lang.String r3 = r3.getUri()     // Catch: java.net.URISyntaxException -> L56
            r4.<init>(r3)     // Catch: java.net.URISyntaxException -> L56
            java.net.URI r0 = cz.msebera.android.httpclient.client.utils.URIUtils.rewriteURI(r4, r0, r2)     // Catch: java.net.URISyntaxException -> L56
            java.net.URI r1 = cz.msebera.android.httpclient.client.utils.URIUtils.resolve(r0, r1)     // Catch: java.net.URISyntaxException -> L56
            goto L85
        L56:
            r6 = move-exception
            cz.msebera.android.httpclient.ProtocolException r7 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.String r0 = r6.getMessage()
            r7.<init>(r0, r6)
            throw r7
        L61:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r7 = "Target host not available in the HTTP context"
            r6.<init>(r7)
            throw r6
        L69:
            cz.msebera.android.httpclient.ProtocolException r6 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "Relative redirect location '"
            r7.append(r0)
            r7.append(r1)
            java.lang.String r0 = "' not allowed"
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            throw r6
        L85:
            java.lang.String r0 = "http.protocol.allow-circular-redirects"
            boolean r6 = r6.isParameterFalse(r0)
            if (r6 == 0) goto Led
            java.lang.String r6 = "http.protocol.redirect-locations"
            java.lang.Object r0 = r7.getAttribute(r6)
            cz.msebera.android.httpclient.impl.client.RedirectLocations r0 = (cz.msebera.android.httpclient.impl.client.RedirectLocations) r0
            if (r0 != 0) goto L9f
            cz.msebera.android.httpclient.impl.client.RedirectLocations r0 = new cz.msebera.android.httpclient.impl.client.RedirectLocations
            r0.<init>()
            r7.setAttribute(r6, r0)
        L9f:
            java.lang.String r6 = r1.getFragment()
            if (r6 == 0) goto Lc6
            cz.msebera.android.httpclient.HttpHost r6 = new cz.msebera.android.httpclient.HttpHost     // Catch: java.net.URISyntaxException -> Lbb
            java.lang.String r7 = r1.getHost()     // Catch: java.net.URISyntaxException -> Lbb
            int r3 = r1.getPort()     // Catch: java.net.URISyntaxException -> Lbb
            java.lang.String r4 = r1.getScheme()     // Catch: java.net.URISyntaxException -> Lbb
            r6.<init>(r7, r3, r4)     // Catch: java.net.URISyntaxException -> Lbb
            java.net.URI r6 = cz.msebera.android.httpclient.client.utils.URIUtils.rewriteURI(r1, r6, r2)     // Catch: java.net.URISyntaxException -> Lbb
            goto Lc7
        Lbb:
            r6 = move-exception
            cz.msebera.android.httpclient.ProtocolException r7 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.String r0 = r6.getMessage()
            r7.<init>(r0, r6)
            throw r7
        Lc6:
            r6 = r1
        Lc7:
            boolean r7 = r0.contains(r6)
            if (r7 != 0) goto Ld1
            r0.add(r6)
            goto Led
        Ld1:
            cz.msebera.android.httpclient.client.CircularRedirectException r7 = new cz.msebera.android.httpclient.client.CircularRedirectException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Circular redirect to '"
            r0.append(r1)
            r0.append(r6)
            java.lang.String r6 = "'"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r7.<init>(r6)
            throw r7
        Led:
            return r1
        Lee:
            r6 = move-exception
            cz.msebera.android.httpclient.ProtocolException r7 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid redirect URI: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r7.<init>(r0, r6)
            throw r7
        L106:
            cz.msebera.android.httpclient.ProtocolException r7 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Received redirect response "
            r0.append(r1)
            cz.msebera.android.httpclient.StatusLine r6 = r6.getStatusLine()
            r0.append(r6)
            java.lang.String r6 = " but no location header"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r7.<init>(r6)
            throw r7
        L126:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r7 = "HTTP response may not be null"
            r6.<init>(r7)
            throw r6
    }

    @Override
    public boolean isRedirectRequested(cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpContext r3) {
            r1 = this;
            boolean r3 = r1.enableRedirects
            r0 = 0
            if (r3 != 0) goto L6
            return r0
        L6:
            if (r2 == 0) goto L1a
            cz.msebera.android.httpclient.StatusLine r2 = r2.getStatusLine()
            int r2 = r2.getStatusCode()
            r3 = 307(0x133, float:4.3E-43)
            if (r2 == r3) goto L18
            switch(r2) {
                case 301: goto L18;
                case 302: goto L18;
                case 303: goto L18;
                default: goto L17;
            }
        L17:
            return r0
        L18:
            r2 = 1
            return r2
        L1a:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "HTTP response may not be null"
            r2.<init>(r3)
            throw r2
    }
}
