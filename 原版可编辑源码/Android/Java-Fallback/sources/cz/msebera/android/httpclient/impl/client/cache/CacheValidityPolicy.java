package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
class CacheValidityPolicy {
    public static final long MAX_AGE = 2147483648L;

    CacheValidityPolicy() {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean mayReturnStaleIfError(cz.msebera.android.httpclient.Header[] r11, long r12) {
            r10 = this;
            int r0 = r11.length
            r1 = 0
            r2 = 0
            r3 = 0
        L4:
            if (r2 >= r0) goto L33
            r4 = r11[r2]
            cz.msebera.android.httpclient.HeaderElement[] r4 = r4.getElements()
            int r5 = r4.length
            r6 = 0
        Le:
            if (r6 >= r5) goto L30
            r7 = r4[r6]
            java.lang.String r8 = r7.getName()
            java.lang.String r9 = "stale-if-error"
            boolean r8 = r9.equals(r8)
            if (r8 == 0) goto L2d
            java.lang.String r7 = r7.getValue()     // Catch: java.lang.NumberFormatException -> L2d
            int r7 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.NumberFormatException -> L2d
            long r7 = (long) r7
            int r9 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r9 > 0) goto L2d
            r3 = 1
            goto L30
        L2d:
            int r6 = r6 + 1
            goto Le
        L30:
            int r2 = r2 + 1
            goto L4
        L33:
            return r3
    }

    protected boolean contentLengthHeaderMatchesActualLength(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r5) {
            r4 = this;
            boolean r0 = r4.hasContentLengthHeader(r5)
            if (r0 == 0) goto L1f
            cz.msebera.android.httpclient.client.cache.Resource r0 = r5.getResource()
            if (r0 == 0) goto L1d
            long r0 = r4.getContentLengthValue(r5)
            cz.msebera.android.httpclient.client.cache.Resource r5 = r5.getResource()
            long r2 = r5.length()
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 != 0) goto L1d
            goto L1f
        L1d:
            r5 = 0
            goto L20
        L1f:
            r5 = 1
        L20:
            return r5
    }

    protected long getAgeValue(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r12) {
            r11 = this;
            java.lang.String r0 = "Age"
            cz.msebera.android.httpclient.Header[] r12 = r12.getHeaders(r0)
            int r0 = r12.length
            r1 = 0
            r3 = 0
            r4 = r1
        Lb:
            if (r3 >= r0) goto L2a
            r6 = r12[r3]
            r7 = 2147483648(0x80000000, double:1.0609978955E-314)
            java.lang.String r6 = r6.getValue()     // Catch: java.lang.NumberFormatException -> L22
            long r9 = java.lang.Long.parseLong(r6)     // Catch: java.lang.NumberFormatException -> L22
            int r6 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
            if (r6 >= 0) goto L21
            goto L22
        L21:
            r7 = r9
        L22:
            int r6 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r6 <= 0) goto L27
            r4 = r7
        L27:
            int r3 = r3 + 1
            goto Lb
        L2a:
            return r4
    }

    protected long getApparentAgeSecs(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r6) {
            r5 = this;
            java.util.Date r0 = r6.getDate()
            if (r0 != 0) goto Lc
            r0 = 2147483648(0x80000000, double:1.0609978955E-314)
            return r0
        Lc:
            java.util.Date r6 = r6.getResponseDate()
            long r1 = r6.getTime()
            long r3 = r0.getTime()
            long r1 = r1 - r3
            r3 = 0
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 >= 0) goto L20
            return r3
        L20:
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            return r1
    }

    protected long getContentLengthValue(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3) {
            r2 = this;
            java.lang.String r0 = "Content-Length"
            cz.msebera.android.httpclient.Header r3 = r3.getFirstHeader(r0)
            r0 = -1
            if (r3 != 0) goto Lb
            return r0
        Lb:
            java.lang.String r3 = r3.getValue()     // Catch: java.lang.NumberFormatException -> L13
            long r0 = java.lang.Long.parseLong(r3)     // Catch: java.lang.NumberFormatException -> L13
        L13:
            return r0
    }

    protected long getCorrectedInitialAgeSecs(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r5) {
            r4 = this;
            long r0 = r4.getCorrectedReceivedAgeSecs(r5)
            long r2 = r4.getResponseDelaySecs(r5)
            long r0 = r0 + r2
            return r0
    }

    protected long getCorrectedReceivedAgeSecs(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r5) {
            r4 = this;
            long r0 = r4.getApparentAgeSecs(r5)
            long r2 = r4.getAgeValue(r5)
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto Ld
            goto Le
        Ld:
            r0 = r2
        Le:
            return r0
    }

    public long getCurrentAgeSecs(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3, java.util.Date r4) {
            r2 = this;
            long r0 = r2.getCorrectedInitialAgeSecs(r3)
            long r3 = r2.getResidentTimeSecs(r3, r4)
            long r0 = r0 + r3
            return r0
    }

    @java.lang.Deprecated
    protected java.util.Date getDateValue(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r1) {
            r0 = this;
            java.util.Date r1 = r1.getDate()
            return r1
    }

    protected java.util.Date getExpirationDate(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2) {
            r1 = this;
            java.lang.String r0 = "Expires"
            cz.msebera.android.httpclient.Header r2 = r2.getFirstHeader(r0)
            if (r2 != 0) goto La
            r2 = 0
            return r2
        La:
            java.lang.String r2 = r2.getValue()
            java.util.Date r2 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r2)
            return r2
    }

    public long getFreshnessLifetimeSecs(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r6) {
            r5 = this;
            long r0 = r5.getMaxAge(r6)
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto Lb
            return r0
        Lb:
            java.util.Date r0 = r6.getDate()
            r1 = 0
            if (r0 != 0) goto L14
            return r1
        L14:
            java.util.Date r6 = r5.getExpirationDate(r6)
            if (r6 != 0) goto L1b
            return r1
        L1b:
            long r1 = r6.getTime()
            long r3 = r0.getTime()
            long r1 = r1 - r3
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            return r1
    }

    public long getHeuristicFreshnessLifetimeSecs(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3, float r4, long r5) {
            r2 = this;
            java.util.Date r0 = r3.getDate()
            java.util.Date r3 = r2.getLastModifiedValue(r3)
            if (r0 == 0) goto L24
            if (r3 == 0) goto L24
            long r5 = r0.getTime()
            long r0 = r3.getTime()
            long r5 = r5 - r0
            r0 = 0
            int r3 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r3 >= 0) goto L1c
            return r0
        L1c:
            r0 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 / r0
            float r3 = (float) r5
            float r4 = r4 * r3
            long r3 = (long) r4
            return r3
        L24:
            return r5
    }

    protected java.util.Date getLastModifiedValue(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2) {
            r1 = this;
            java.lang.String r0 = "Last-Modified"
            cz.msebera.android.httpclient.Header r2 = r2.getFirstHeader(r0)
            if (r2 != 0) goto La
            r2 = 0
            return r2
        La:
            java.lang.String r2 = r2.getValue()
            java.util.Date r2 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r2)
            return r2
    }

    protected long getMaxAge(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r14) {
            r13 = this;
            java.lang.String r0 = "Cache-Control"
            cz.msebera.android.httpclient.Header[] r14 = r14.getHeaders(r0)
            int r0 = r14.length
            r1 = 0
            r2 = -1
            r5 = r2
            r4 = 0
        Lc:
            if (r4 >= r0) goto L4e
            r7 = r14[r4]
            cz.msebera.android.httpclient.HeaderElement[] r7 = r7.getElements()
            int r8 = r7.length
            r9 = r5
            r5 = 0
        L17:
            if (r5 >= r8) goto L4a
            r6 = r7[r5]
            java.lang.String r11 = r6.getName()
            java.lang.String r12 = "max-age"
            boolean r11 = r12.equals(r11)
            if (r11 != 0) goto L33
            java.lang.String r11 = r6.getName()
            java.lang.String r12 = "s-maxage"
            boolean r11 = r12.equals(r11)
            if (r11 == 0) goto L47
        L33:
            java.lang.String r6 = r6.getValue()     // Catch: java.lang.NumberFormatException -> L45
            long r11 = java.lang.Long.parseLong(r6)     // Catch: java.lang.NumberFormatException -> L45
            int r6 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r6 == 0) goto L43
            int r6 = (r11 > r9 ? 1 : (r11 == r9 ? 0 : -1))
            if (r6 >= 0) goto L47
        L43:
            r9 = r11
            goto L47
        L45:
            r9 = 0
        L47:
            int r5 = r5 + 1
            goto L17
        L4a:
            int r4 = r4 + 1
            r5 = r9
            goto Lc
        L4e:
            return r5
    }

    protected long getResidentTimeSecs(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3, java.util.Date r4) {
            r2 = this;
            long r0 = r4.getTime()
            java.util.Date r3 = r3.getResponseDate()
            long r3 = r3.getTime()
            long r0 = r0 - r3
            r3 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r3
            return r0
    }

    protected long getResponseDelaySecs(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r5) {
            r4 = this;
            java.util.Date r0 = r5.getResponseDate()
            long r0 = r0.getTime()
            java.util.Date r5 = r5.getRequestDate()
            long r2 = r5.getTime()
            long r0 = r0 - r2
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            return r0
    }

    public long getStalenessSecs(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r4, java.util.Date r5) {
            r3 = this;
            long r0 = r3.getCurrentAgeSecs(r4, r5)
            long r4 = r3.getFreshnessLifetimeSecs(r4)
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 > 0) goto Lf
            r4 = 0
            return r4
        Lf:
            long r0 = r0 - r4
            return r0
    }

    public boolean hasCacheControlDirective(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r8, java.lang.String r9) {
            r7 = this;
            java.lang.String r0 = "Cache-Control"
            cz.msebera.android.httpclient.Header[] r8 = r8.getHeaders(r0)
            int r0 = r8.length
            r1 = 0
            r2 = 0
        L9:
            if (r2 >= r0) goto L29
            r3 = r8[r2]
            cz.msebera.android.httpclient.HeaderElement[] r3 = r3.getElements()
            int r4 = r3.length
            r5 = 0
        L13:
            if (r5 >= r4) goto L26
            r6 = r3[r5]
            java.lang.String r6 = r6.getName()
            boolean r6 = r9.equalsIgnoreCase(r6)
            if (r6 == 0) goto L23
            r8 = 1
            return r8
        L23:
            int r5 = r5 + 1
            goto L13
        L26:
            int r2 = r2 + 1
            goto L9
        L29:
            return r1
    }

    protected boolean hasContentLengthHeader(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2) {
            r1 = this;
            java.lang.String r0 = "Content-Length"
            cz.msebera.android.httpclient.Header r2 = r2.getFirstHeader(r0)
            if (r2 == 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    public boolean isResponseFresh(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r4, java.util.Date r5) {
            r3 = this;
            long r0 = r3.getCurrentAgeSecs(r4, r5)
            long r4 = r3.getFreshnessLifetimeSecs(r4)
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 >= 0) goto Le
            r4 = 1
            goto Lf
        Le:
            r4 = 0
        Lf:
            return r4
    }

    public boolean isResponseHeuristicallyFresh(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3, java.util.Date r4, float r5, long r6) {
            r2 = this;
            long r0 = r2.getCurrentAgeSecs(r3, r4)
            long r3 = r2.getHeuristicFreshnessLifetimeSecs(r3, r5, r6)
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 >= 0) goto Le
            r3 = 1
            goto Lf
        Le:
            r3 = 0
        Lf:
            return r3
    }

    public boolean isRevalidatable(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2) {
            r1 = this;
            java.lang.String r0 = "ETag"
            cz.msebera.android.httpclient.Header r0 = r2.getFirstHeader(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "Last-Modified"
            cz.msebera.android.httpclient.Header r2 = r2.getFirstHeader(r0)
            if (r2 == 0) goto L11
            goto L13
        L11:
            r2 = 0
            goto L14
        L13:
            r2 = 1
        L14:
            return r2
    }

    public boolean mayReturnStaleIfError(cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r4, java.util.Date r5) {
            r2 = this;
            long r0 = r2.getStalenessSecs(r4, r5)
            java.lang.String r5 = "Cache-Control"
            cz.msebera.android.httpclient.Header[] r3 = r3.getHeaders(r5)
            boolean r3 = r2.mayReturnStaleIfError(r3, r0)
            if (r3 != 0) goto L1d
            cz.msebera.android.httpclient.Header[] r3 = r4.getHeaders(r5)
            boolean r3 = r2.mayReturnStaleIfError(r3, r0)
            if (r3 == 0) goto L1b
            goto L1d
        L1b:
            r3 = 0
            goto L1e
        L1d:
            r3 = 1
        L1e:
            return r3
    }

    public boolean mayReturnStaleWhileRevalidating(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r13, java.util.Date r14) {
            r12 = this;
            java.lang.String r0 = "Cache-Control"
            cz.msebera.android.httpclient.Header[] r0 = r13.getHeaders(r0)
            int r1 = r0.length
            r2 = 0
            r3 = 0
        L9:
            if (r3 >= r1) goto L3c
            r4 = r0[r3]
            cz.msebera.android.httpclient.HeaderElement[] r4 = r4.getElements()
            int r5 = r4.length
            r6 = 0
        L13:
            if (r6 >= r5) goto L39
            r7 = r4[r6]
            java.lang.String r8 = r7.getName()
            java.lang.String r9 = "stale-while-revalidate"
            boolean r8 = r9.equalsIgnoreCase(r8)
            if (r8 == 0) goto L36
            java.lang.String r7 = r7.getValue()     // Catch: java.lang.NumberFormatException -> L36
            int r7 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.NumberFormatException -> L36
            long r8 = r12.getStalenessSecs(r13, r14)     // Catch: java.lang.NumberFormatException -> L36
            long r10 = (long) r7
            int r7 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r7 > 0) goto L36
            r13 = 1
            return r13
        L36:
            int r6 = r6 + 1
            goto L13
        L39:
            int r3 = r3 + 1
            goto L9
        L3c:
            return r2
    }

    public boolean mustRevalidate(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2) {
            r1 = this;
            java.lang.String r0 = "must-revalidate"
            boolean r2 = r1.hasCacheControlDirective(r2, r0)
            return r2
    }

    public boolean proxyRevalidate(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2) {
            r1 = this;
            java.lang.String r0 = "proxy-revalidate"
            boolean r2 = r1.hasCacheControlDirective(r2, r0)
            return r2
    }
}
