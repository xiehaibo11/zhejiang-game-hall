package cz.msebera.android.httpclient.client.utils;

@cz.msebera.android.httpclient.annotation.Immutable
public class URIUtils {
    private URIUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    @java.lang.Deprecated
    public static java.net.URI createURI(java.lang.String r1, java.lang.String r2, int r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) throws java.net.URISyntaxException {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            if (r2 == 0) goto L1e
            if (r1 == 0) goto L11
            r0.append(r1)
            java.lang.String r1 = "://"
            r0.append(r1)
        L11:
            r0.append(r2)
            if (r3 <= 0) goto L1e
            r1 = 58
            r0.append(r1)
            r0.append(r3)
        L1e:
            if (r4 == 0) goto L28
            java.lang.String r1 = "/"
            boolean r1 = r4.startsWith(r1)
            if (r1 != 0) goto L2d
        L28:
            r1 = 47
            r0.append(r1)
        L2d:
            if (r4 == 0) goto L32
            r0.append(r4)
        L32:
            if (r5 == 0) goto L3c
            r1 = 63
            r0.append(r1)
            r0.append(r5)
        L3c:
            if (r6 == 0) goto L46
            r1 = 35
            r0.append(r1)
            r0.append(r6)
        L46:
            java.net.URI r1 = new java.net.URI
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            return r1
    }

    public static cz.msebera.android.httpclient.HttpHost extractHost(java.net.URI r9) {
            r0 = 0
            if (r9 != 0) goto L4
            return r0
        L4:
            boolean r1 = r9.isAbsolute()
            if (r1 == 0) goto L73
            int r1 = r9.getPort()
            java.lang.String r2 = r9.getHost()
            if (r2 != 0) goto L63
            java.lang.String r2 = r9.getAuthority()
            if (r2 == 0) goto L63
            r3 = 64
            int r3 = r2.indexOf(r3)
            if (r3 < 0) goto L30
            int r4 = r2.length()
            int r3 = r3 + 1
            if (r4 <= r3) goto L2f
            java.lang.String r2 = r2.substring(r3)
            goto L30
        L2f:
            r2 = r0
        L30:
            if (r2 == 0) goto L63
            r3 = 58
            int r3 = r2.indexOf(r3)
            if (r3 < 0) goto L63
            int r4 = r3 + 1
            r5 = 0
            r6 = r4
            r7 = 0
        L3f:
            int r8 = r2.length()
            if (r6 >= r8) goto L54
            char r8 = r2.charAt(r6)
            boolean r8 = java.lang.Character.isDigit(r8)
            if (r8 == 0) goto L54
            int r7 = r7 + 1
            int r6 = r6 + 1
            goto L3f
        L54:
            if (r7 <= 0) goto L5f
            int r7 = r7 + r4
            java.lang.String r4 = r2.substring(r4, r7)     // Catch: java.lang.NumberFormatException -> L5f
            int r1 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.NumberFormatException -> L5f
        L5f:
            java.lang.String r2 = r2.substring(r5, r3)
        L63:
            java.lang.String r9 = r9.getScheme()
            boolean r3 = cz.msebera.android.httpclient.util.TextUtils.isBlank(r2)
            if (r3 != 0) goto L73
            cz.msebera.android.httpclient.HttpHost r3 = new cz.msebera.android.httpclient.HttpHost     // Catch: java.lang.IllegalArgumentException -> L73
            r3.<init>(r2, r1, r9)     // Catch: java.lang.IllegalArgumentException -> L73
            r0 = r3
        L73:
            return r0
    }

    private static java.net.URI normalizeSyntax(java.net.URI r9) {
            boolean r0 = r9.isOpaque()
            if (r0 != 0) goto Lf3
            java.lang.String r0 = r9.getAuthority()
            if (r0 != 0) goto Le
            goto Lf3
        Le:
            boolean r0 = r9.isAbsolute()
            java.lang.String r1 = "Base URI must be absolute"
            cz.msebera.android.httpclient.util.Args.check(r0, r1)
            java.lang.String r0 = r9.getPath()
            if (r0 != 0) goto L20
            java.lang.String r0 = ""
            goto L24
        L20:
            java.lang.String r0 = r9.getPath()
        L24:
            java.lang.String r1 = "/"
            java.lang.String[] r1 = r0.split(r1)
            java.util.Stack r2 = new java.util.Stack
            r2.<init>()
            int r3 = r1.length
            r4 = 0
        L31:
            if (r4 >= r3) goto L5c
            r5 = r1[r4]
            boolean r6 = r5.isEmpty()
            if (r6 != 0) goto L59
            java.lang.String r6 = "."
            boolean r6 = r6.equals(r5)
            if (r6 == 0) goto L44
            goto L59
        L44:
            java.lang.String r6 = ".."
            boolean r6 = r6.equals(r5)
            if (r6 == 0) goto L56
            boolean r5 = r2.isEmpty()
            if (r5 != 0) goto L59
            r2.pop()
            goto L59
        L56:
            r2.push(r5)
        L59:
            int r4 = r4 + 1
            goto L31
        L5c:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.util.Iterator r2 = r2.iterator()
        L65:
            boolean r3 = r2.hasNext()
            r4 = 47
            if (r3 == 0) goto L7a
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            r1.append(r4)
            r1.append(r3)
            goto L65
        L7a:
            int r2 = r0.lastIndexOf(r4)
            int r0 = r0.length()
            int r0 = r0 + (-1)
            if (r2 != r0) goto L89
            r1.append(r4)
        L89:
            java.lang.String r0 = r9.getScheme()     // Catch: java.net.URISyntaxException -> Lec
            java.util.Locale r2 = java.util.Locale.ROOT     // Catch: java.net.URISyntaxException -> Lec
            java.lang.String r4 = r0.toLowerCase(r2)     // Catch: java.net.URISyntaxException -> Lec
            java.lang.String r0 = r9.getAuthority()     // Catch: java.net.URISyntaxException -> Lec
            java.util.Locale r2 = java.util.Locale.ROOT     // Catch: java.net.URISyntaxException -> Lec
            java.lang.String r5 = r0.toLowerCase(r2)     // Catch: java.net.URISyntaxException -> Lec
            java.net.URI r0 = new java.net.URI     // Catch: java.net.URISyntaxException -> Lec
            java.lang.String r6 = r1.toString()     // Catch: java.net.URISyntaxException -> Lec
            r7 = 0
            r8 = 0
            r3 = r0
            r3.<init>(r4, r5, r6, r7, r8)     // Catch: java.net.URISyntaxException -> Lec
            java.lang.String r1 = r9.getQuery()     // Catch: java.net.URISyntaxException -> Lec
            if (r1 != 0) goto Lb6
            java.lang.String r1 = r9.getFragment()     // Catch: java.net.URISyntaxException -> Lec
            if (r1 != 0) goto Lb6
            return r0
        Lb6:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.net.URISyntaxException -> Lec
            java.lang.String r0 = r0.toASCIIString()     // Catch: java.net.URISyntaxException -> Lec
            r1.<init>(r0)     // Catch: java.net.URISyntaxException -> Lec
            java.lang.String r0 = r9.getQuery()     // Catch: java.net.URISyntaxException -> Lec
            if (r0 == 0) goto Ld1
            r0 = 63
            r1.append(r0)     // Catch: java.net.URISyntaxException -> Lec
            java.lang.String r0 = r9.getRawQuery()     // Catch: java.net.URISyntaxException -> Lec
            r1.append(r0)     // Catch: java.net.URISyntaxException -> Lec
        Ld1:
            java.lang.String r0 = r9.getFragment()     // Catch: java.net.URISyntaxException -> Lec
            if (r0 == 0) goto Le3
            r0 = 35
            r1.append(r0)     // Catch: java.net.URISyntaxException -> Lec
            java.lang.String r9 = r9.getRawFragment()     // Catch: java.net.URISyntaxException -> Lec
            r1.append(r9)     // Catch: java.net.URISyntaxException -> Lec
        Le3:
            java.lang.String r9 = r1.toString()     // Catch: java.net.URISyntaxException -> Lec
            java.net.URI r9 = java.net.URI.create(r9)     // Catch: java.net.URISyntaxException -> Lec
            return r9
        Lec:
            r9 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r9)
            throw r0
        Lf3:
            return r9
    }

    public static java.net.URI resolve(java.net.URI r3, cz.msebera.android.httpclient.HttpHost r4, java.util.List<java.net.URI> r5) throws java.net.URISyntaxException {
            java.lang.String r0 = "Request URI"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            if (r5 == 0) goto L3e
            boolean r0 = r5.isEmpty()
            if (r0 == 0) goto Le
            goto L3e
        Le:
            cz.msebera.android.httpclient.client.utils.URIBuilder r0 = new cz.msebera.android.httpclient.client.utils.URIBuilder
            int r1 = r5.size()
            int r1 = r1 + (-1)
            java.lang.Object r1 = r5.get(r1)
            java.net.URI r1 = (java.net.URI) r1
            r0.<init>(r1)
            java.lang.String r1 = r0.getFragment()
            int r2 = r5.size()
            int r2 = r2 + (-1)
        L29:
            if (r1 != 0) goto L3a
            if (r2 < 0) goto L3a
            java.lang.Object r1 = r5.get(r2)
            java.net.URI r1 = (java.net.URI) r1
            java.lang.String r1 = r1.getFragment()
            int r2 = r2 + (-1)
            goto L29
        L3a:
            r0.setFragment(r1)
            goto L43
        L3e:
            cz.msebera.android.httpclient.client.utils.URIBuilder r0 = new cz.msebera.android.httpclient.client.utils.URIBuilder
            r0.<init>(r3)
        L43:
            java.lang.String r5 = r0.getFragment()
            if (r5 != 0) goto L50
            java.lang.String r3 = r3.getFragment()
            r0.setFragment(r3)
        L50:
            if (r4 == 0) goto L6d
            boolean r3 = r0.isAbsolute()
            if (r3 != 0) goto L6d
            java.lang.String r3 = r4.getSchemeName()
            r0.setScheme(r3)
            java.lang.String r3 = r4.getHostName()
            r0.setHost(r3)
            int r3 = r4.getPort()
            r0.setPort(r3)
        L6d:
            java.net.URI r3 = r0.build()
            return r3
    }

    public static java.net.URI resolve(java.net.URI r0, java.lang.String r1) {
            java.net.URI r1 = java.net.URI.create(r1)
            java.net.URI r0 = resolve(r0, r1)
            return r0
    }

    public static java.net.URI resolve(java.net.URI r2, java.net.URI r3) {
            java.lang.String r0 = "Base URI"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Reference URI"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = r3.toString()
            java.lang.String r1 = "?"
            boolean r1 = r0.startsWith(r1)
            if (r1 == 0) goto L1b
            java.net.URI r2 = resolveReferenceStartingWithQueryString(r2, r3)
            return r2
        L1b:
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L27
            java.lang.String r3 = "#"
            java.net.URI r3 = java.net.URI.create(r3)
        L27:
            java.net.URI r2 = r2.resolve(r3)
            if (r0 == 0) goto L40
            java.lang.String r2 = r2.toString()
            r3 = 0
            r0 = 35
            int r0 = r2.indexOf(r0)
            java.lang.String r2 = r2.substring(r3, r0)
            java.net.URI r2 = java.net.URI.create(r2)
        L40:
            java.net.URI r2 = normalizeSyntax(r2)
            return r2
    }

    private static java.net.URI resolveReferenceStartingWithQueryString(java.net.URI r3, java.net.URI r4) {
            java.lang.String r3 = r3.toString()
            r0 = 63
            int r1 = r3.indexOf(r0)
            r2 = -1
            if (r1 <= r2) goto L16
            r1 = 0
            int r0 = r3.indexOf(r0)
            java.lang.String r3 = r3.substring(r1, r0)
        L16:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = r4.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.net.URI r3 = java.net.URI.create(r3)
            return r3
    }

    public static java.net.URI rewriteURI(java.net.URI r3) throws java.net.URISyntaxException {
            java.lang.String r0 = "URI"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            boolean r0 = r3.isOpaque()
            if (r0 == 0) goto Lc
            return r3
        Lc:
            cz.msebera.android.httpclient.client.utils.URIBuilder r0 = new cz.msebera.android.httpclient.client.utils.URIBuilder
            r0.<init>(r3)
            java.lang.String r3 = r0.getUserInfo()
            r1 = 0
            if (r3 == 0) goto L1b
            r0.setUserInfo(r1)
        L1b:
            java.lang.String r3 = r0.getPath()
            boolean r3 = cz.msebera.android.httpclient.util.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L2a
            java.lang.String r3 = "/"
            r0.setPath(r3)
        L2a:
            java.lang.String r3 = r0.getHost()
            if (r3 == 0) goto L3d
            java.lang.String r3 = r0.getHost()
            java.util.Locale r2 = java.util.Locale.ROOT
            java.lang.String r3 = r3.toLowerCase(r2)
            r0.setHost(r3)
        L3d:
            r0.setFragment(r1)
            java.net.URI r3 = r0.build()
            return r3
    }

    public static java.net.URI rewriteURI(java.net.URI r1, cz.msebera.android.httpclient.HttpHost r2) throws java.net.URISyntaxException {
            r0 = 0
            java.net.URI r1 = rewriteURI(r1, r2, r0)
            return r1
    }

    public static java.net.URI rewriteURI(java.net.URI r2, cz.msebera.android.httpclient.HttpHost r3, boolean r4) throws java.net.URISyntaxException {
            java.lang.String r0 = "URI"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            boolean r0 = r2.isOpaque()
            if (r0 == 0) goto Lc
            return r2
        Lc:
            cz.msebera.android.httpclient.client.utils.URIBuilder r0 = new cz.msebera.android.httpclient.client.utils.URIBuilder
            r0.<init>(r2)
            r2 = 0
            if (r3 == 0) goto L2a
            java.lang.String r1 = r3.getSchemeName()
            r0.setScheme(r1)
            java.lang.String r1 = r3.getHostName()
            r0.setHost(r1)
            int r3 = r3.getPort()
            r0.setPort(r3)
            goto L34
        L2a:
            r0.setScheme(r2)
            r0.setHost(r2)
            r3 = -1
            r0.setPort(r3)
        L34:
            if (r4 == 0) goto L39
            r0.setFragment(r2)
        L39:
            java.lang.String r2 = r0.getPath()
            boolean r2 = cz.msebera.android.httpclient.util.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L48
            java.lang.String r2 = "/"
            r0.setPath(r2)
        L48:
            java.net.URI r2 = r0.build()
            return r2
    }

    public static java.net.URI rewriteURIForRoute(java.net.URI r3, cz.msebera.android.httpclient.conn.routing.RouteInfo r4) throws java.net.URISyntaxException {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            cz.msebera.android.httpclient.HttpHost r1 = r4.getProxyHost()
            r2 = 1
            if (r1 == 0) goto L25
            boolean r1 = r4.isTunnelled()
            if (r1 != 0) goto L25
            boolean r0 = r3.isAbsolute()
            if (r0 != 0) goto L20
            cz.msebera.android.httpclient.HttpHost r4 = r4.getTargetHost()
            java.net.URI r3 = rewriteURI(r3, r4, r2)
            return r3
        L20:
            java.net.URI r3 = rewriteURI(r3)
            return r3
        L25:
            boolean r4 = r3.isAbsolute()
            if (r4 == 0) goto L30
            java.net.URI r3 = rewriteURI(r3, r0, r2)
            return r3
        L30:
            java.net.URI r3 = rewriteURI(r3)
            return r3
    }
}
