package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
class CachedResponseSuitabilityChecker {
    private final float heuristicCoefficient;
    private final long heuristicDefaultLifetime;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final boolean sharedCache;
    private final boolean useHeuristicCaching;
    private final cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy validityStrategy;

    CachedResponseSuitabilityChecker(cz.msebera.android.httpclient.impl.client.cache.CacheConfig r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r0 = new cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy
            r0.<init>()
            r1.<init>(r0, r2)
            return
    }

    CachedResponseSuitabilityChecker(cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r3, cz.msebera.android.httpclient.impl.client.cache.CacheConfig r4) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            r2.validityStrategy = r3
            boolean r3 = r4.isSharedCache()
            r2.sharedCache = r3
            boolean r3 = r4.isHeuristicCachingEnabled()
            r2.useHeuristicCaching = r3
            float r3 = r4.getHeuristicCoefficient()
            r2.heuristicCoefficient = r3
            long r3 = r4.getHeuristicDefaultLifetime()
            r2.heuristicDefaultLifetime = r3
            return
    }

    private boolean cacheEntryDoesNotContainMethodAndEntity(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2) {
            r1 = this;
            java.lang.String r0 = r2.getRequestMethod()
            if (r0 != 0) goto Le
            cz.msebera.android.httpclient.client.cache.Resource r2 = r2.getResource()
            if (r2 != 0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }

    private boolean entryIsNotA204Response(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2) {
            r1 = this;
            int r2 = r2.getStatusCode()
            r0 = 204(0xcc, float:2.86E-43)
            if (r2 == r0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    private boolean etagValidatorMatches(cz.msebera.android.httpclient.HttpRequest r9, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r10) {
            r8 = this;
            java.lang.String r0 = "ETag"
            cz.msebera.android.httpclient.Header r10 = r10.getFirstHeader(r0)
            if (r10 == 0) goto Ld
            java.lang.String r10 = r10.getValue()
            goto Le
        Ld:
            r10 = 0
        Le:
            java.lang.String r0 = "If-None-Match"
            cz.msebera.android.httpclient.Header[] r9 = r9.getHeaders(r0)
            r0 = 0
            if (r9 == 0) goto L43
            int r1 = r9.length
            r2 = 0
        L19:
            if (r2 >= r1) goto L43
            r3 = r9[r2]
            cz.msebera.android.httpclient.HeaderElement[] r3 = r3.getElements()
            int r4 = r3.length
            r5 = 0
        L23:
            if (r5 >= r4) goto L40
            r6 = r3[r5]
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "*"
            boolean r7 = r7.equals(r6)
            if (r7 == 0) goto L35
            if (r10 != 0) goto L3b
        L35:
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L3d
        L3b:
            r9 = 1
            return r9
        L3d:
            int r5 = r5 + 1
            goto L23
        L40:
            int r2 = r2 + 1
            goto L19
        L43:
            return r0
    }

    private long getMaxStale(cz.msebera.android.httpclient.HttpRequest r18) {
            r17 = this;
            java.lang.String r0 = "Cache-Control"
            r1 = r18
            cz.msebera.android.httpclient.Header[] r0 = r1.getHeaders(r0)
            int r1 = r0.length
            r2 = 0
            r3 = -1
            r6 = r3
            r5 = 0
        Le:
            if (r5 >= r1) goto L6a
            r8 = r0[r5]
            cz.msebera.android.httpclient.HeaderElement[] r8 = r8.getElements()
            int r9 = r8.length
            r10 = r6
            r6 = 0
        L19:
            if (r6 >= r9) goto L66
            r7 = r8[r6]
            java.lang.String r12 = r7.getName()
            java.lang.String r13 = "max-stale"
            boolean r12 = r13.equals(r12)
            r13 = 0
            if (r12 == 0) goto L63
            java.lang.String r12 = r7.getValue()
            if (r12 == 0) goto L41
            java.lang.String r12 = r7.getValue()
            java.lang.String r12 = r12.trim()
            java.lang.String r15 = ""
            boolean r12 = r15.equals(r12)
            if (r12 == 0) goto L4b
        L41:
            int r12 = (r10 > r3 ? 1 : (r10 == r3 ? 0 : -1))
            if (r12 != 0) goto L4b
            r10 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            goto L63
        L4b:
            java.lang.String r7 = r7.getValue()     // Catch: java.lang.NumberFormatException -> L62
            long r15 = java.lang.Long.parseLong(r7)     // Catch: java.lang.NumberFormatException -> L62
            int r7 = (r15 > r13 ? 1 : (r15 == r13 ? 0 : -1))
            if (r7 >= 0) goto L58
            r15 = r13
        L58:
            int r7 = (r10 > r3 ? 1 : (r10 == r3 ? 0 : -1))
            if (r7 == 0) goto L60
            int r7 = (r15 > r10 ? 1 : (r15 == r10 ? 0 : -1))
            if (r7 >= 0) goto L63
        L60:
            r10 = r15
            goto L63
        L62:
            r10 = r13
        L63:
            int r6 = r6 + 1
            goto L19
        L66:
            int r5 = r5 + 1
            r6 = r10
            goto Le
        L6a:
            return r6
    }

    private boolean hasSupportedEtagValidator(cz.msebera.android.httpclient.HttpRequest r2) {
            r1 = this;
            java.lang.String r0 = "If-None-Match"
            boolean r2 = r2.containsHeader(r0)
            return r2
    }

    private boolean hasSupportedLastModifiedValidator(cz.msebera.android.httpclient.HttpRequest r2) {
            r1 = this;
            java.lang.String r0 = "If-Modified-Since"
            boolean r2 = r1.hasValidDateField(r2, r0)
            return r2
    }

    private boolean hasUnsupportedCacheEntryForGet(cz.msebera.android.httpclient.HttpRequest r1, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2) {
            r0 = this;
            boolean r1 = r0.isGet(r1)
            if (r1 == 0) goto L14
            boolean r1 = r0.cacheEntryDoesNotContainMethodAndEntity(r2)
            if (r1 == 0) goto L14
            boolean r1 = r0.entryIsNotA204Response(r2)
            if (r1 == 0) goto L14
            r1 = 1
            goto L15
        L14:
            r1 = 0
        L15:
            return r1
    }

    private boolean hasUnsupportedConditionalHeaders(cz.msebera.android.httpclient.HttpRequest r2) {
            r1 = this;
            java.lang.String r0 = "If-Range"
            cz.msebera.android.httpclient.Header r0 = r2.getFirstHeader(r0)
            if (r0 != 0) goto L1b
            java.lang.String r0 = "If-Match"
            cz.msebera.android.httpclient.Header r0 = r2.getFirstHeader(r0)
            if (r0 != 0) goto L1b
            java.lang.String r0 = "If-Unmodified-Since"
            boolean r2 = r1.hasValidDateField(r2, r0)
            if (r2 == 0) goto L19
            goto L1b
        L19:
            r2 = 0
            goto L1c
        L1b:
            r2 = 1
        L1c:
            return r2
    }

    private boolean hasValidDateField(cz.msebera.android.httpclient.HttpRequest r2, java.lang.String r3) {
            r1 = this;
            cz.msebera.android.httpclient.Header[] r2 = r2.getHeaders(r3)
            int r3 = r2.length
            r0 = 0
            if (r3 <= 0) goto L15
            r2 = r2[r0]
            java.lang.String r2 = r2.getValue()
            java.util.Date r2 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r2)
            if (r2 == 0) goto L15
            r0 = 1
        L15:
            return r0
    }

    private boolean isFreshEnough(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r9, cz.msebera.android.httpclient.HttpRequest r10, java.util.Date r11) {
            r8 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r0 = r8.validityStrategy
            boolean r0 = r0.isResponseFresh(r9, r11)
            r1 = 1
            if (r0 == 0) goto La
            return r1
        La:
            boolean r0 = r8.useHeuristicCaching
            if (r0 == 0) goto L1d
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r2 = r8.validityStrategy
            float r5 = r8.heuristicCoefficient
            long r6 = r8.heuristicDefaultLifetime
            r3 = r9
            r4 = r11
            boolean r0 = r2.isResponseHeuristicallyFresh(r3, r4, r5, r6)
            if (r0 == 0) goto L1d
            return r1
        L1d:
            boolean r0 = r8.originInsistsOnFreshness(r9)
            r2 = 0
            if (r0 == 0) goto L25
            return r2
        L25:
            long r3 = r8.getMaxStale(r10)
            r5 = -1
            int r10 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r10 != 0) goto L30
            return r2
        L30:
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r10 = r8.validityStrategy
            long r9 = r10.getStalenessSecs(r9, r11)
            int r11 = (r3 > r9 ? 1 : (r3 == r9 ? 0 : -1))
            if (r11 <= 0) goto L3b
            goto L3c
        L3b:
            r1 = 0
        L3c:
            return r1
    }

    private boolean isGet(cz.msebera.android.httpclient.HttpRequest r2) {
            r1 = this;
            cz.msebera.android.httpclient.RequestLine r2 = r2.getRequestLine()
            java.lang.String r2 = r2.getMethod()
            java.lang.String r0 = "GET"
            boolean r2 = r2.equals(r0)
            return r2
    }

    private boolean lastModifiedValidatorMatches(cz.msebera.android.httpclient.HttpRequest r6, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r7, java.util.Date r8) {
            r5 = this;
            java.lang.String r0 = "Last-Modified"
            cz.msebera.android.httpclient.Header r7 = r7.getFirstHeader(r0)
            if (r7 == 0) goto L11
            java.lang.String r7 = r7.getValue()
            java.util.Date r7 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r7)
            goto L12
        L11:
            r7 = 0
        L12:
            r0 = 0
            if (r7 != 0) goto L16
            return r0
        L16:
            java.lang.String r1 = "If-Modified-Since"
            cz.msebera.android.httpclient.Header[] r6 = r6.getHeaders(r1)
            int r1 = r6.length
            r2 = 0
        L1e:
            if (r2 >= r1) goto L3c
            r3 = r6[r2]
            java.lang.String r3 = r3.getValue()
            java.util.Date r3 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r3)
            if (r3 == 0) goto L39
            boolean r4 = r3.after(r8)
            if (r4 != 0) goto L38
            boolean r3 = r7.after(r3)
            if (r3 == 0) goto L39
        L38:
            return r0
        L39:
            int r2 = r2 + 1
            goto L1e
        L3c:
            r6 = 1
            return r6
    }

    private boolean originInsistsOnFreshness(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r5) {
            r4 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r0 = r4.validityStrategy
            boolean r0 = r0.mustRevalidate(r5)
            r1 = 1
            if (r0 == 0) goto La
            return r1
        La:
            boolean r0 = r4.sharedCache
            r2 = 0
            if (r0 != 0) goto L10
            return r2
        L10:
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r0 = r4.validityStrategy
            boolean r0 = r0.proxyRevalidate(r5)
            if (r0 != 0) goto L24
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r0 = r4.validityStrategy
            java.lang.String r3 = "s-maxage"
            boolean r5 = r0.hasCacheControlDirective(r5, r3)
            if (r5 == 0) goto L23
            goto L24
        L23:
            r1 = 0
        L24:
            return r1
    }

    public boolean allConditionalsMatch(cz.msebera.android.httpclient.HttpRequest r6, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r7, java.util.Date r8) {
            r5 = this;
            boolean r0 = r5.hasSupportedEtagValidator(r6)
            boolean r1 = r5.hasSupportedLastModifiedValidator(r6)
            r2 = 1
            r3 = 0
            if (r0 == 0) goto L14
            boolean r4 = r5.etagValidatorMatches(r6, r7)
            if (r4 == 0) goto L14
            r4 = 1
            goto L15
        L14:
            r4 = 0
        L15:
            if (r1 == 0) goto L1f
            boolean r6 = r5.lastModifiedValidatorMatches(r6, r7, r8)
            if (r6 == 0) goto L1f
            r6 = 1
            goto L20
        L1f:
            r6 = 0
        L20:
            if (r0 == 0) goto L29
            if (r1 == 0) goto L29
            if (r4 == 0) goto L28
            if (r6 != 0) goto L29
        L28:
            return r3
        L29:
            if (r0 == 0) goto L2e
            if (r4 != 0) goto L2e
            return r3
        L2e:
            if (r1 == 0) goto L33
            if (r6 != 0) goto L33
            return r3
        L33:
            return r2
    }

    public boolean canCachedResponseBeUsed(cz.msebera.android.httpclient.HttpHost r17, cz.msebera.android.httpclient.HttpRequest r18, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r19, java.util.Date r20) {
            r16 = this;
            r1 = r16
            r0 = r18
            r2 = r19
            r3 = r20
            boolean r4 = r1.isFreshEnough(r2, r0, r3)
            r5 = 0
            if (r4 != 0) goto L17
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log
            java.lang.String r2 = "Cache entry was not fresh enough"
            r0.trace(r2)
            return r5
        L17:
            boolean r4 = r1.isGet(r0)
            if (r4 == 0) goto L2d
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r4 = r1.validityStrategy
            boolean r4 = r4.contentLengthHeaderMatchesActualLength(r2)
            if (r4 != 0) goto L2d
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log
            java.lang.String r2 = "Cache entry Content-Length and header information do not match"
            r0.debug(r2)
            return r5
        L2d:
            boolean r4 = r1.hasUnsupportedConditionalHeaders(r0)
            if (r4 == 0) goto L3b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log
            java.lang.String r2 = "Request contained conditional headers we don't handle"
            r0.debug(r2)
            return r5
        L3b:
            boolean r4 = r1.isConditional(r0)
            if (r4 != 0) goto L4a
            int r4 = r19.getStatusCode()
            r6 = 304(0x130, float:4.26E-43)
            if (r4 != r6) goto L4a
            return r5
        L4a:
            boolean r4 = r1.isConditional(r0)
            if (r4 == 0) goto L57
            boolean r4 = r1.allConditionalsMatch(r0, r2, r3)
            if (r4 != 0) goto L57
            return r5
        L57:
            boolean r4 = r1.hasUnsupportedCacheEntryForGet(r0, r2)
            if (r4 == 0) goto L65
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log
            java.lang.String r2 = "HEAD response caching enabled but the cache entry does not contain a request method, entity or a 204 response"
            r0.debug(r2)
            return r5
        L65:
            java.lang.String r4 = "Cache-Control"
            cz.msebera.android.httpclient.Header[] r0 = r0.getHeaders(r4)
            int r4 = r0.length
            r6 = 0
        L6d:
            if (r6 >= r4) goto L189
            r7 = r0[r6]
            cz.msebera.android.httpclient.HeaderElement[] r7 = r7.getElements()
            int r8 = r7.length
            r9 = 0
        L77:
            if (r9 >= r8) goto L184
            r10 = r7[r9]
            java.lang.String r11 = r10.getName()
            java.lang.String r12 = "no-cache"
            boolean r11 = r12.equals(r11)
            if (r11 == 0) goto L8f
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log
            java.lang.String r2 = "Response contained NO CACHE directive, cache was not suitable"
            r0.trace(r2)
            return r5
        L8f:
            java.lang.String r11 = r10.getName()
            java.lang.String r12 = "no-store"
            boolean r11 = r12.equals(r11)
            if (r11 == 0) goto La3
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log
            java.lang.String r2 = "Response contained NO STORE directive, cache was not suitable"
            r0.trace(r2)
            return r5
        La3:
            java.lang.String r11 = r10.getName()
            java.lang.String r12 = "max-age"
            boolean r11 = r12.equals(r11)
            if (r11 == 0) goto Le6
            java.lang.String r11 = r10.getValue()     // Catch: java.lang.NumberFormatException -> Lca
            int r11 = java.lang.Integer.parseInt(r11)     // Catch: java.lang.NumberFormatException -> Lca
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r12 = r1.validityStrategy     // Catch: java.lang.NumberFormatException -> Lca
            long r12 = r12.getCurrentAgeSecs(r2, r3)     // Catch: java.lang.NumberFormatException -> Lca
            long r14 = (long) r11     // Catch: java.lang.NumberFormatException -> Lca
            int r11 = (r12 > r14 ? 1 : (r12 == r14 ? 0 : -1))
            if (r11 <= 0) goto Le6
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log     // Catch: java.lang.NumberFormatException -> Lca
            java.lang.String r2 = "Response from cache was NOT suitable due to max age"
            r0.trace(r2)     // Catch: java.lang.NumberFormatException -> Lca
            return r5
        Lca:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r1.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Response from cache was malformed"
            r3.append(r4)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.debug(r0)
            return r5
        Le6:
            java.lang.String r11 = r10.getName()
            java.lang.String r12 = "max-stale"
            boolean r11 = r12.equals(r11)
            java.lang.String r12 = "Response from cache was malformed: "
            if (r11 == 0) goto L12c
            java.lang.String r11 = r10.getValue()     // Catch: java.lang.NumberFormatException -> L111
            int r11 = java.lang.Integer.parseInt(r11)     // Catch: java.lang.NumberFormatException -> L111
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r13 = r1.validityStrategy     // Catch: java.lang.NumberFormatException -> L111
            long r13 = r13.getFreshnessLifetimeSecs(r2)     // Catch: java.lang.NumberFormatException -> L111
            r15 = r6
            long r5 = (long) r11     // Catch: java.lang.NumberFormatException -> L111
            int r11 = (r13 > r5 ? 1 : (r13 == r5 ? 0 : -1))
            if (r11 <= 0) goto L12d
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log     // Catch: java.lang.NumberFormatException -> L111
            java.lang.String r2 = "Response from cache was not suitable due to Max stale freshness"
            r0.trace(r2)     // Catch: java.lang.NumberFormatException -> L111
            r2 = 0
            return r2
        L111:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r1.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r12)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.debug(r0)
            r2 = 0
            return r2
        L12c:
            r15 = r6
        L12d:
            java.lang.String r5 = r10.getName()
            java.lang.String r6 = "min-fresh"
            boolean r5 = r6.equals(r5)
            if (r5 == 0) goto L17e
            java.lang.String r5 = r10.getValue()     // Catch: java.lang.NumberFormatException -> L163
            long r5 = java.lang.Long.parseLong(r5)     // Catch: java.lang.NumberFormatException -> L163
            r10 = 0
            int r13 = (r5 > r10 ? 1 : (r5 == r10 ? 0 : -1))
            if (r13 >= 0) goto L149
            r10 = 0
            return r10
        L149:
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r10 = r1.validityStrategy     // Catch: java.lang.NumberFormatException -> L163
            long r10 = r10.getCurrentAgeSecs(r2, r3)     // Catch: java.lang.NumberFormatException -> L163
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r13 = r1.validityStrategy     // Catch: java.lang.NumberFormatException -> L163
            long r13 = r13.getFreshnessLifetimeSecs(r2)     // Catch: java.lang.NumberFormatException -> L163
            long r13 = r13 - r10
            int r10 = (r13 > r5 ? 1 : (r13 == r5 ? 0 : -1))
            if (r10 >= 0) goto L17e
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log     // Catch: java.lang.NumberFormatException -> L163
            java.lang.String r2 = "Response from cache was not suitable due to min fresh freshness requirement"
            r0.trace(r2)     // Catch: java.lang.NumberFormatException -> L163
            r2 = 0
            return r2
        L163:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r1.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r12)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.debug(r0)
            r5 = 0
            return r5
        L17e:
            r5 = 0
            int r9 = r9 + 1
            r6 = r15
            goto L77
        L184:
            r15 = r6
            int r6 = r15 + 1
            goto L6d
        L189:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log
            java.lang.String r2 = "Response from cache was suitable"
            r0.trace(r2)
            r0 = 1
            return r0
    }

    public boolean isConditional(cz.msebera.android.httpclient.HttpRequest r2) {
            r1 = this;
            boolean r0 = r1.hasSupportedEtagValidator(r2)
            if (r0 != 0) goto Lf
            boolean r2 = r1.hasSupportedLastModifiedValidator(r2)
            if (r2 == 0) goto Ld
            goto Lf
        Ld:
            r2 = 0
            goto L10
        Lf:
            r2 = 1
        L10:
            return r2
    }
}
