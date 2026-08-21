package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
class ResponseCachingPolicy {
    private static final java.lang.String[] AUTH_CACHEABLE_PARAMS = null;
    private static final java.util.Set<java.lang.Integer> cacheableStatuses = null;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final long maxObjectSizeBytes;
    private final boolean neverCache1_0ResponsesWithQueryString;
    private final boolean sharedCache;
    private final java.util.Set<java.lang.Integer> uncacheableStatuses;

    static {
            java.lang.String r0 = "s-maxage"
            java.lang.String r1 = "must-revalidate"
            java.lang.String r2 = "public"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            cz.msebera.android.httpclient.impl.client.cache.ResponseCachingPolicy.AUTH_CACHEABLE_PARAMS = r0
            java.util.HashSet r0 = new java.util.HashSet
            r1 = 5
            java.lang.Integer[] r1 = new java.lang.Integer[r1]
            r2 = 200(0xc8, float:2.8E-43)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3 = 0
            r1[r3] = r2
            r2 = 203(0xcb, float:2.84E-43)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3 = 1
            r1[r3] = r2
            r2 = 300(0x12c, float:4.2E-43)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3 = 2
            r1[r3] = r2
            r2 = 301(0x12d, float:4.22E-43)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3 = 3
            r1[r3] = r2
            r2 = 410(0x19a, float:5.75E-43)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3 = 4
            r1[r3] = r2
            java.util.List r1 = java.util.Arrays.asList(r1)
            r0.<init>(r1)
            cz.msebera.android.httpclient.impl.client.cache.ResponseCachingPolicy.cacheableStatuses = r0
            return
    }

    public ResponseCachingPolicy(long r3, boolean r5, boolean r6, boolean r7) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            r2.maxObjectSizeBytes = r3
            r2.sharedCache = r5
            r2.neverCache1_0ResponsesWithQueryString = r6
            r3 = 1
            r4 = 206(0xce, float:2.89E-43)
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r5 = 0
            if (r7 == 0) goto L2e
            java.util.HashSet r6 = new java.util.HashSet
            java.lang.Integer[] r3 = new java.lang.Integer[r3]
            r3[r5] = r4
            java.util.List r3 = java.util.Arrays.asList(r3)
            r6.<init>(r3)
            r2.uncacheableStatuses = r6
            goto L46
        L2e:
            java.util.HashSet r6 = new java.util.HashSet
            r7 = 2
            java.lang.Integer[] r7 = new java.lang.Integer[r7]
            r7[r5] = r4
            r4 = 303(0x12f, float:4.25E-43)
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r7[r3] = r4
            java.util.List r3 = java.util.Arrays.asList(r7)
            r6.<init>(r3)
            r2.uncacheableStatuses = r6
        L46:
            return
    }

    private boolean expiresHeaderLessOrEqualToDateHeaderAndNoCacheControl(cz.msebera.android.httpclient.HttpResponse r4) {
            r3 = this;
            java.lang.String r0 = "Cache-Control"
            cz.msebera.android.httpclient.Header r0 = r4.getFirstHeader(r0)
            r1 = 0
            if (r0 == 0) goto La
            return r1
        La:
            java.lang.String r0 = "Expires"
            cz.msebera.android.httpclient.Header r0 = r4.getFirstHeader(r0)
            java.lang.String r2 = "Date"
            cz.msebera.android.httpclient.Header r4 = r4.getFirstHeader(r2)
            if (r0 == 0) goto L3d
            if (r4 != 0) goto L1b
            goto L3d
        L1b:
            java.lang.String r0 = r0.getValue()
            java.util.Date r0 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r0)
            java.lang.String r4 = r4.getValue()
            java.util.Date r4 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r4)
            if (r0 == 0) goto L3d
            if (r4 != 0) goto L30
            goto L3d
        L30:
            boolean r2 = r0.equals(r4)
            if (r2 != 0) goto L3c
            boolean r4 = r0.before(r4)
            if (r4 == 0) goto L3d
        L3c:
            r1 = 1
        L3d:
            return r1
    }

    private boolean from1_0Origin(cz.msebera.android.httpclient.HttpResponse r3) {
            r2 = this;
            java.lang.String r0 = "Via"
            cz.msebera.android.httpclient.Header r0 = r3.getFirstHeader(r0)
            if (r0 == 0) goto L34
            cz.msebera.android.httpclient.HeaderElement[] r0 = r0.getElements()
            int r1 = r0.length
            if (r1 <= 0) goto L34
            r3 = 0
            r0 = r0[r3]
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "\\s"
            java.lang.String[] r0 = r0.split(r1)
            r3 = r0[r3]
            java.lang.String r0 = "/"
            boolean r0 = r3.contains(r0)
            if (r0 == 0) goto L2d
            java.lang.String r0 = "HTTP/1.0"
            boolean r3 = r3.equals(r0)
            return r3
        L2d:
            java.lang.String r0 = "1.0"
            boolean r3 = r3.equals(r0)
            return r3
        L34:
            cz.msebera.android.httpclient.HttpVersion r0 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_0
            cz.msebera.android.httpclient.ProtocolVersion r3 = r3.getProtocolVersion()
            boolean r3 = r0.equals(r3)
            return r3
    }

    private boolean requestProtocolGreaterThanAccepted(cz.msebera.android.httpclient.HttpRequest r2) {
            r1 = this;
            cz.msebera.android.httpclient.ProtocolVersion r2 = r2.getProtocolVersion()
            cz.msebera.android.httpclient.HttpVersion r0 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            int r2 = r2.compareToVersion(r0)
            if (r2 <= 0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }

    private boolean unknownStatusCode(int r3) {
            r2 = this;
            r0 = 0
            r1 = 100
            if (r3 < r1) goto La
            r1 = 101(0x65, float:1.42E-43)
            if (r3 > r1) goto La
            return r0
        La:
            r1 = 200(0xc8, float:2.8E-43)
            if (r3 < r1) goto L13
            r1 = 206(0xce, float:2.89E-43)
            if (r3 > r1) goto L13
            return r0
        L13:
            r1 = 300(0x12c, float:4.2E-43)
            if (r3 < r1) goto L1c
            r1 = 307(0x133, float:4.3E-43)
            if (r3 > r1) goto L1c
            return r0
        L1c:
            r1 = 400(0x190, float:5.6E-43)
            if (r3 < r1) goto L25
            r1 = 417(0x1a1, float:5.84E-43)
            if (r3 > r1) goto L25
            return r0
        L25:
            r1 = 500(0x1f4, float:7.0E-43)
            if (r3 < r1) goto L2e
            r1 = 505(0x1f9, float:7.08E-43)
            if (r3 > r1) goto L2e
            return r0
        L2e:
            r3 = 1
            return r3
    }

    protected boolean hasCacheControlParameterFrom(cz.msebera.android.httpclient.HttpMessage r12, java.lang.String[] r13) {
            r11 = this;
            java.lang.String r0 = "Cache-Control"
            cz.msebera.android.httpclient.Header[] r12 = r12.getHeaders(r0)
            int r0 = r12.length
            r1 = 0
            r2 = 0
        L9:
            if (r2 >= r0) goto L32
            r3 = r12[r2]
            cz.msebera.android.httpclient.HeaderElement[] r3 = r3.getElements()
            int r4 = r3.length
            r5 = 0
        L13:
            if (r5 >= r4) goto L2f
            r6 = r3[r5]
            int r7 = r13.length
            r8 = 0
        L19:
            if (r8 >= r7) goto L2c
            r9 = r13[r8]
            java.lang.String r10 = r6.getName()
            boolean r9 = r9.equalsIgnoreCase(r10)
            if (r9 == 0) goto L29
            r12 = 1
            return r12
        L29:
            int r8 = r8 + 1
            goto L19
        L2c:
            int r5 = r5 + 1
            goto L13
        L2f:
            int r2 = r2 + 1
            goto L9
        L32:
            return r1
    }

    protected boolean isExplicitlyCacheable(cz.msebera.android.httpclient.HttpResponse r6) {
            r5 = this;
            java.lang.String r0 = "Expires"
            cz.msebera.android.httpclient.Header r0 = r6.getFirstHeader(r0)
            if (r0 == 0) goto La
            r6 = 1
            return r6
        La:
            java.lang.String r0 = "max-age"
            java.lang.String r1 = "s-maxage"
            java.lang.String r2 = "must-revalidate"
            java.lang.String r3 = "proxy-revalidate"
            java.lang.String r4 = "public"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4}
            boolean r6 = r5.hasCacheControlParameterFrom(r6, r0)
            return r6
    }

    protected boolean isExplicitlyNonCacheable(cz.msebera.android.httpclient.HttpResponse r10) {
            r9 = this;
            java.lang.String r0 = "Cache-Control"
            cz.msebera.android.httpclient.Header[] r10 = r10.getHeaders(r0)
            int r0 = r10.length
            r1 = 0
            r2 = 0
        L9:
            if (r2 >= r0) goto L48
            r3 = r10[r2]
            cz.msebera.android.httpclient.HeaderElement[] r3 = r3.getElements()
            int r4 = r3.length
            r5 = 0
        L13:
            if (r5 >= r4) goto L45
            r6 = r3[r5]
            java.lang.String r7 = r6.getName()
            java.lang.String r8 = "no-store"
            boolean r7 = r8.equals(r7)
            if (r7 != 0) goto L43
            java.lang.String r7 = r6.getName()
            java.lang.String r8 = "no-cache"
            boolean r7 = r8.equals(r7)
            if (r7 != 0) goto L43
            boolean r7 = r9.sharedCache
            if (r7 == 0) goto L40
            java.lang.String r6 = r6.getName()
            java.lang.String r7 = "private"
            boolean r6 = r7.equals(r6)
            if (r6 == 0) goto L40
            goto L43
        L40:
            int r5 = r5 + 1
            goto L13
        L43:
            r10 = 1
            return r10
        L45:
            int r2 = r2 + 1
            goto L9
        L48:
            return r1
    }

    public boolean isResponseCacheable(cz.msebera.android.httpclient.HttpRequest r4, cz.msebera.android.httpclient.HttpResponse r5) {
            r3 = this;
            boolean r0 = r3.requestProtocolGreaterThanAccepted(r4)
            r1 = 0
            if (r0 == 0) goto Lf
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r3.log
            java.lang.String r5 = "Response was not cacheable."
            r4.debug(r5)
            return r1
        Lf:
            java.lang.String r0 = "no-store"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            boolean r0 = r3.hasCacheControlParameterFrom(r4, r0)
            if (r0 == 0) goto L1c
            return r1
        L1c:
            cz.msebera.android.httpclient.RequestLine r0 = r4.getRequestLine()
            java.lang.String r0 = r0.getUri()
            java.lang.String r2 = "?"
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto L4c
            boolean r0 = r3.neverCache1_0ResponsesWithQueryString
            if (r0 == 0) goto L3e
            boolean r0 = r3.from1_0Origin(r5)
            if (r0 == 0) goto L3e
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r3.log
            java.lang.String r5 = "Response was not cacheable as it had a query string."
            r4.debug(r5)
            return r1
        L3e:
            boolean r0 = r3.isExplicitlyCacheable(r5)
            if (r0 != 0) goto L4c
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r3.log
            java.lang.String r5 = "Response was not cacheable as it is missing explicit caching headers."
            r4.debug(r5)
            return r1
        L4c:
            boolean r0 = r3.expiresHeaderLessOrEqualToDateHeaderAndNoCacheControl(r5)
            if (r0 == 0) goto L53
            return r1
        L53:
            boolean r0 = r3.sharedCache
            if (r0 == 0) goto L6b
            java.lang.String r0 = "Authorization"
            cz.msebera.android.httpclient.Header[] r0 = r4.getHeaders(r0)
            if (r0 == 0) goto L6b
            int r0 = r0.length
            if (r0 <= 0) goto L6b
            java.lang.String[] r0 = cz.msebera.android.httpclient.impl.client.cache.ResponseCachingPolicy.AUTH_CACHEABLE_PARAMS
            boolean r0 = r3.hasCacheControlParameterFrom(r5, r0)
            if (r0 != 0) goto L6b
            return r1
        L6b:
            cz.msebera.android.httpclient.RequestLine r4 = r4.getRequestLine()
            java.lang.String r4 = r4.getMethod()
            boolean r4 = r3.isResponseCacheable(r4, r5)
            return r4
    }

    public boolean isResponseCacheable(java.lang.String r11, cz.msebera.android.httpclient.HttpResponse r12) {
            r10 = this;
            java.lang.String r0 = "GET"
            boolean r0 = r0.equals(r11)
            r1 = 0
            if (r0 != 0) goto L19
            java.lang.String r0 = "HEAD"
            boolean r11 = r0.equals(r11)
            if (r11 != 0) goto L19
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r11 = r10.log
            java.lang.String r12 = "Response was not cacheable."
            r11.debug(r12)
            return r1
        L19:
            cz.msebera.android.httpclient.StatusLine r11 = r12.getStatusLine()
            int r11 = r11.getStatusCode()
            java.util.Set<java.lang.Integer> r0 = cz.msebera.android.httpclient.impl.client.cache.ResponseCachingPolicy.cacheableStatuses
            java.lang.Integer r2 = java.lang.Integer.valueOf(r11)
            boolean r0 = r0.contains(r2)
            r2 = 1
            if (r0 == 0) goto L30
            r11 = 1
            goto L45
        L30:
            java.util.Set<java.lang.Integer> r0 = r10.uncacheableStatuses
            java.lang.Integer r3 = java.lang.Integer.valueOf(r11)
            boolean r0 = r0.contains(r3)
            if (r0 == 0) goto L3d
            return r1
        L3d:
            boolean r11 = r10.unknownStatusCode(r11)
            if (r11 == 0) goto L44
            return r1
        L44:
            r11 = 0
        L45:
            java.lang.String r0 = "Content-Length"
            cz.msebera.android.httpclient.Header r0 = r12.getFirstHeader(r0)
            if (r0 == 0) goto L5d
            java.lang.String r0 = r0.getValue()
            int r0 = java.lang.Integer.parseInt(r0)
            long r3 = (long) r0
            long r5 = r10.maxObjectSizeBytes
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 <= 0) goto L5d
            return r1
        L5d:
            java.lang.String r0 = "Age"
            cz.msebera.android.httpclient.Header[] r0 = r12.getHeaders(r0)
            int r0 = r0.length
            if (r0 <= r2) goto L67
            return r1
        L67:
            java.lang.String r0 = "Expires"
            cz.msebera.android.httpclient.Header[] r0 = r12.getHeaders(r0)
            int r0 = r0.length
            if (r0 <= r2) goto L71
            return r1
        L71:
            java.lang.String r0 = "Date"
            cz.msebera.android.httpclient.Header[] r0 = r12.getHeaders(r0)
            int r3 = r0.length
            if (r3 == r2) goto L7b
            return r1
        L7b:
            r0 = r0[r1]
            java.lang.String r0 = r0.getValue()
            java.util.Date r0 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r0)
            if (r0 != 0) goto L88
            return r1
        L88:
            java.lang.String r0 = "Vary"
            cz.msebera.android.httpclient.Header[] r0 = r12.getHeaders(r0)
            int r3 = r0.length
            r4 = 0
        L90:
            if (r4 >= r3) goto Lb1
            r5 = r0[r4]
            cz.msebera.android.httpclient.HeaderElement[] r5 = r5.getElements()
            int r6 = r5.length
            r7 = 0
        L9a:
            if (r7 >= r6) goto Lae
            r8 = r5[r7]
            java.lang.String r8 = r8.getName()
            java.lang.String r9 = "*"
            boolean r8 = r9.equals(r8)
            if (r8 == 0) goto Lab
            return r1
        Lab:
            int r7 = r7 + 1
            goto L9a
        Lae:
            int r4 = r4 + 1
            goto L90
        Lb1:
            boolean r0 = r10.isExplicitlyNonCacheable(r12)
            if (r0 == 0) goto Lb8
            return r1
        Lb8:
            if (r11 != 0) goto Lc0
            boolean r11 = r10.isExplicitlyCacheable(r12)
            if (r11 == 0) goto Lc1
        Lc0:
            r1 = 1
        Lc1:
            return r1
    }
}
