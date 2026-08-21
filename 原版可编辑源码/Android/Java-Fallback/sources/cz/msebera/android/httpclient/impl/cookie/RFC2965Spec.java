package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Obsolete
@cz.msebera.android.httpclient.annotation.ThreadSafe
public class RFC2965Spec extends cz.msebera.android.httpclient.impl.cookie.RFC2109Spec {
    public RFC2965Spec() {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r0, r1)
            return
    }

    RFC2965Spec(boolean r1, cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler... r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public RFC2965Spec(java.lang.String[] r4, boolean r5) {
            r3 = this;
            r0 = 10
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r0 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r0]
            cz.msebera.android.httpclient.impl.cookie.RFC2965VersionAttributeHandler r1 = new cz.msebera.android.httpclient.impl.cookie.RFC2965VersionAttributeHandler
            r1.<init>()
            r2 = 0
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicPathHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicPathHandler
            r1.<init>()
            r2 = 1
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.RFC2965DomainAttributeHandler r1 = new cz.msebera.android.httpclient.impl.cookie.RFC2965DomainAttributeHandler
            r1.<init>()
            r2 = 2
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.RFC2965PortAttributeHandler r1 = new cz.msebera.android.httpclient.impl.cookie.RFC2965PortAttributeHandler
            r1.<init>()
            r2 = 3
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler
            r1.<init>()
            r2 = 4
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler
            r1.<init>()
            r2 = 5
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler
            r1.<init>()
            r2 = 6
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler
            if (r4 == 0) goto L47
            java.lang.Object r4 = r4.clone()
            java.lang.String[] r4 = (java.lang.String[]) r4
            goto L49
        L47:
            java.lang.String[] r4 = cz.msebera.android.httpclient.impl.cookie.RFC2965Spec.DATE_PATTERNS
        L49:
            r1.<init>(r4)
            r4 = 7
            r0[r4] = r1
            r4 = 8
            cz.msebera.android.httpclient.impl.cookie.RFC2965CommentUrlAttributeHandler r1 = new cz.msebera.android.httpclient.impl.cookie.RFC2965CommentUrlAttributeHandler
            r1.<init>()
            r0[r4] = r1
            r4 = 9
            cz.msebera.android.httpclient.impl.cookie.RFC2965DiscardAttributeHandler r1 = new cz.msebera.android.httpclient.impl.cookie.RFC2965DiscardAttributeHandler
            r1.<init>()
            r0[r4] = r1
            r3.<init>(r5, r0)
            return
    }

    private static cz.msebera.android.httpclient.cookie.CookieOrigin adjustEffectiveHost(cz.msebera.android.httpclient.cookie.CookieOrigin r5) {
            java.lang.String r0 = r5.getHost()
            r1 = 0
            r2 = 0
        L6:
            int r3 = r0.length()
            if (r2 >= r3) goto L1c
            char r3 = r0.charAt(r2)
            r4 = 46
            if (r3 == r4) goto L1d
            r4 = 58
            if (r3 != r4) goto L19
            goto L1d
        L19:
            int r2 = r2 + 1
            goto L6
        L1c:
            r1 = 1
        L1d:
            if (r1 == 0) goto L42
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = ".local"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            cz.msebera.android.httpclient.cookie.CookieOrigin r1 = new cz.msebera.android.httpclient.cookie.CookieOrigin
            int r2 = r5.getPort()
            java.lang.String r3 = r5.getPath()
            boolean r5 = r5.isSecure()
            r1.<init>(r0, r2, r3, r5)
            return r1
        L42:
            return r5
    }

    private java.util.List<cz.msebera.android.httpclient.cookie.Cookie> createCookies(cz.msebera.android.httpclient.HeaderElement[] r12, cz.msebera.android.httpclient.cookie.CookieOrigin r13) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r11 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r12.length
            r0.<init>(r1)
            int r1 = r12.length
            r2 = 0
            r3 = 0
        L9:
            if (r3 >= r1) goto La4
            r4 = r12[r3]
            java.lang.String r5 = r4.getName()
            java.lang.String r6 = r4.getValue()
            if (r5 == 0) goto L9c
            boolean r7 = r5.isEmpty()
            if (r7 != 0) goto L9c
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie2 r7 = new cz.msebera.android.httpclient.impl.cookie.BasicClientCookie2
            r7.<init>(r5, r6)
            java.lang.String r5 = getDefaultPath(r13)
            r7.setPath(r5)
            java.lang.String r5 = getDefaultDomain(r13)
            r7.setDomain(r5)
            r5 = 1
            int[] r6 = new int[r5]
            int r8 = r13.getPort()
            r6[r2] = r8
            r7.setPorts(r6)
            cz.msebera.android.httpclient.NameValuePair[] r4 = r4.getParameters()
            java.util.HashMap r6 = new java.util.HashMap
            int r8 = r4.length
            r6.<init>(r8)
            int r8 = r4.length
            int r8 = r8 - r5
        L48:
            if (r8 < 0) goto L5c
            r5 = r4[r8]
            java.lang.String r9 = r5.getName()
            java.util.Locale r10 = java.util.Locale.ROOT
            java.lang.String r9 = r9.toLowerCase(r10)
            r6.put(r9, r5)
            int r8 = r8 + (-1)
            goto L48
        L5c:
            java.util.Set r4 = r6.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L64:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L95
            java.lang.Object r5 = r4.next()
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5
            java.lang.Object r5 = r5.getValue()
            cz.msebera.android.httpclient.NameValuePair r5 = (cz.msebera.android.httpclient.NameValuePair) r5
            java.lang.String r6 = r5.getName()
            java.util.Locale r8 = java.util.Locale.ROOT
            java.lang.String r6 = r6.toLowerCase(r8)
            java.lang.String r8 = r5.getValue()
            r7.setAttribute(r6, r8)
            cz.msebera.android.httpclient.cookie.CookieAttributeHandler r6 = r11.findAttribHandler(r6)
            if (r6 == 0) goto L64
            java.lang.String r5 = r5.getValue()
            r6.parse(r7, r5)
            goto L64
        L95:
            r0.add(r7)
            int r3 = r3 + 1
            goto L9
        L9c:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r12 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r13 = "Cookie name may not be empty"
            r12.<init>(r13)
            throw r12
        La4:
            return r0
    }

    @Override
    protected void formatCookieAsVer(cz.msebera.android.httpclient.util.CharArrayBuffer r3, cz.msebera.android.httpclient.cookie.Cookie r4, int r5) {
            r2 = this;
            super.formatCookieAsVer(r3, r4, r5)
            boolean r5 = r4 instanceof cz.msebera.android.httpclient.cookie.ClientCookie
            if (r5 == 0) goto L48
            r5 = r4
            cz.msebera.android.httpclient.cookie.ClientCookie r5 = (cz.msebera.android.httpclient.cookie.ClientCookie) r5
            java.lang.String r0 = "port"
            java.lang.String r5 = r5.getAttribute(r0)
            if (r5 == 0) goto L48
            java.lang.String r0 = "; $Port"
            r3.append(r0)
            java.lang.String r0 = "=\""
            r3.append(r0)
            java.lang.String r5 = r5.trim()
            boolean r5 = r5.isEmpty()
            if (r5 != 0) goto L43
            int[] r4 = r4.getPorts()
            if (r4 == 0) goto L43
            int r5 = r4.length
            r0 = 0
        L2e:
            if (r0 >= r5) goto L43
            if (r0 <= 0) goto L37
            java.lang.String r1 = ","
            r3.append(r1)
        L37:
            r1 = r4[r0]
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r3.append(r1)
            int r0 = r0 + 1
            goto L2e
        L43:
            java.lang.String r4 = "\""
            r3.append(r4)
        L48:
            return
    }

    @Override
    public int getVersion() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getVersionHeader() {
            r2 = this;
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r1 = 40
            r0.<init>(r1)
            java.lang.String r1 = "Cookie2"
            r0.append(r1)
            java.lang.String r1 = ": "
            r0.append(r1)
            java.lang.String r1 = "$Version="
            r0.append(r1)
            int r1 = r2.getVersion()
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r0.append(r1)
            cz.msebera.android.httpclient.message.BufferedHeader r1 = new cz.msebera.android.httpclient.message.BufferedHeader
            r1.<init>(r0)
            return r1
    }

    @Override
    public boolean match(cz.msebera.android.httpclient.cookie.Cookie r2, cz.msebera.android.httpclient.cookie.CookieOrigin r3) {
            r1 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.cookie.CookieOrigin r3 = adjustEffectiveHost(r3)
            boolean r2 = super.match(r2, r3)
            return r2
    }

    @Override
    public java.util.List<cz.msebera.android.httpclient.cookie.Cookie> parse(cz.msebera.android.httpclient.Header r3, cz.msebera.android.httpclient.cookie.CookieOrigin r4) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r2 = this;
            java.lang.String r0 = "Header"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = r3.getName()
            java.lang.String r1 = "Set-Cookie2"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L23
            cz.msebera.android.httpclient.HeaderElement[] r3 = r3.getElements()
            cz.msebera.android.httpclient.cookie.CookieOrigin r4 = adjustEffectiveHost(r4)
            java.util.List r3 = r2.createCookies(r3, r4)
            return r3
        L23:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r4 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unrecognized cookie header '"
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = "'"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
    }

    @Override
    protected java.util.List<cz.msebera.android.httpclient.cookie.Cookie> parse(cz.msebera.android.httpclient.HeaderElement[] r1, cz.msebera.android.httpclient.cookie.CookieOrigin r2) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r0 = this;
            cz.msebera.android.httpclient.cookie.CookieOrigin r2 = adjustEffectiveHost(r2)
            java.util.List r1 = r0.createCookies(r1, r2)
            return r1
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "rfc2965"
            return r0
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r2, cz.msebera.android.httpclient.cookie.CookieOrigin r3) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r1 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.cookie.CookieOrigin r3 = adjustEffectiveHost(r3)
            super.validate(r2, r3)
            return
    }
}
