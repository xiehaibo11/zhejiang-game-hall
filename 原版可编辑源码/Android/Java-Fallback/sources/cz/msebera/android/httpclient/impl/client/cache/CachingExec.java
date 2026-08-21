package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class CachingExec implements cz.msebera.android.httpclient.impl.execchain.ClientExecChain {
    private static final boolean SUPPORTS_RANGE_AND_CONTENT_RANGE_HEADERS = false;
    private final cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidator asynchRevalidator;
    private final cz.msebera.android.httpclient.impl.execchain.ClientExecChain backend;
    private final cz.msebera.android.httpclient.impl.client.cache.CacheConfig cacheConfig;
    private final java.util.concurrent.atomic.AtomicLong cacheHits;
    private final java.util.concurrent.atomic.AtomicLong cacheMisses;
    private final java.util.concurrent.atomic.AtomicLong cacheUpdates;
    private final cz.msebera.android.httpclient.impl.client.cache.CacheableRequestPolicy cacheableRequestPolicy;
    private final cz.msebera.android.httpclient.impl.client.cache.ConditionalRequestBuilder conditionalRequestBuilder;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.impl.client.cache.RequestProtocolCompliance requestCompliance;
    private final cz.msebera.android.httpclient.impl.client.cache.HttpCache responseCache;
    private final cz.msebera.android.httpclient.impl.client.cache.ResponseCachingPolicy responseCachingPolicy;
    private final cz.msebera.android.httpclient.impl.client.cache.ResponseProtocolCompliance responseCompliance;
    private final cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator responseGenerator;
    private final cz.msebera.android.httpclient.impl.client.cache.CachedResponseSuitabilityChecker suitabilityChecker;
    private final cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy validityPolicy;
    private final java.util.Map<cz.msebera.android.httpclient.ProtocolVersion, java.lang.String> viaHeaders;

    public CachingExec(cz.msebera.android.httpclient.impl.execchain.ClientExecChain r3) {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.cache.BasicHttpCache r0 = new cz.msebera.android.httpclient.impl.client.cache.BasicHttpCache
            r0.<init>()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r1 = cz.msebera.android.httpclient.impl.client.cache.CacheConfig.DEFAULT
            r2.<init>(r3, r0, r1)
            return
    }

    public CachingExec(cz.msebera.android.httpclient.impl.execchain.ClientExecChain r2, cz.msebera.android.httpclient.client.cache.ResourceFactory r3, cz.msebera.android.httpclient.client.cache.HttpCacheStorage r4, cz.msebera.android.httpclient.impl.client.cache.CacheConfig r5) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.BasicHttpCache r0 = new cz.msebera.android.httpclient.impl.client.cache.BasicHttpCache
            r0.<init>(r3, r4, r5)
            r1.<init>(r2, r0, r5)
            return
    }

    public CachingExec(cz.msebera.android.httpclient.impl.execchain.ClientExecChain r2, cz.msebera.android.httpclient.impl.client.cache.HttpCache r3, cz.msebera.android.httpclient.impl.client.cache.CacheConfig r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public CachingExec(cz.msebera.android.httpclient.impl.execchain.ClientExecChain r7, cz.msebera.android.httpclient.impl.client.cache.HttpCache r8, cz.msebera.android.httpclient.impl.client.cache.CacheConfig r9, cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidator r10) {
            r6 = this;
            r6.<init>()
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            r6.cacheHits = r0
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            r6.cacheMisses = r0
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            r6.cacheUpdates = r0
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 4
            r0.<init>(r1)
            r6.viaHeaders = r0
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r6.getClass()
            r0.<init>(r1)
            r6.log = r0
            java.lang.String r0 = "HTTP backend"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            java.lang.String r0 = "HttpCache"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            if (r9 == 0) goto L38
            goto L3a
        L38:
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r9 = cz.msebera.android.httpclient.impl.client.cache.CacheConfig.DEFAULT
        L3a:
            r6.cacheConfig = r9
            r6.backend = r7
            r6.responseCache = r8
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r7 = new cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy
            r7.<init>()
            r6.validityPolicy = r7
            cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator r7 = new cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r8 = r6.validityPolicy
            r7.<init>(r8)
            r6.responseGenerator = r7
            cz.msebera.android.httpclient.impl.client.cache.CacheableRequestPolicy r7 = new cz.msebera.android.httpclient.impl.client.cache.CacheableRequestPolicy
            r7.<init>()
            r6.cacheableRequestPolicy = r7
            cz.msebera.android.httpclient.impl.client.cache.CachedResponseSuitabilityChecker r7 = new cz.msebera.android.httpclient.impl.client.cache.CachedResponseSuitabilityChecker
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r8 = r6.validityPolicy
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r9 = r6.cacheConfig
            r7.<init>(r8, r9)
            r6.suitabilityChecker = r7
            cz.msebera.android.httpclient.impl.client.cache.ConditionalRequestBuilder r7 = new cz.msebera.android.httpclient.impl.client.cache.ConditionalRequestBuilder
            r7.<init>()
            r6.conditionalRequestBuilder = r7
            cz.msebera.android.httpclient.impl.client.cache.ResponseProtocolCompliance r7 = new cz.msebera.android.httpclient.impl.client.cache.ResponseProtocolCompliance
            r7.<init>()
            r6.responseCompliance = r7
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolCompliance r7 = new cz.msebera.android.httpclient.impl.client.cache.RequestProtocolCompliance
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r8 = r6.cacheConfig
            boolean r8 = r8.isWeakETagOnPutDeleteAllowed()
            r7.<init>(r8)
            r6.requestCompliance = r7
            cz.msebera.android.httpclient.impl.client.cache.ResponseCachingPolicy r7 = new cz.msebera.android.httpclient.impl.client.cache.ResponseCachingPolicy
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r8 = r6.cacheConfig
            long r1 = r8.getMaxObjectSize()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r8 = r6.cacheConfig
            boolean r3 = r8.isSharedCache()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r8 = r6.cacheConfig
            boolean r4 = r8.isNeverCacheHTTP10ResponsesWithQuery()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r8 = r6.cacheConfig
            boolean r5 = r8.is303CachingEnabled()
            r0 = r7
            r0.<init>(r1, r3, r4, r5)
            r6.responseCachingPolicy = r7
            r6.asynchRevalidator = r10
            return
    }

    CachingExec(cz.msebera.android.httpclient.impl.execchain.ClientExecChain r3, cz.msebera.android.httpclient.impl.client.cache.HttpCache r4, cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r5, cz.msebera.android.httpclient.impl.client.cache.ResponseCachingPolicy r6, cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator r7, cz.msebera.android.httpclient.impl.client.cache.CacheableRequestPolicy r8, cz.msebera.android.httpclient.impl.client.cache.CachedResponseSuitabilityChecker r9, cz.msebera.android.httpclient.impl.client.cache.ConditionalRequestBuilder r10, cz.msebera.android.httpclient.impl.client.cache.ResponseProtocolCompliance r11, cz.msebera.android.httpclient.impl.client.cache.RequestProtocolCompliance r12, cz.msebera.android.httpclient.impl.client.cache.CacheConfig r13, cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidator r14) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            r2.cacheHits = r0
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            r2.cacheMisses = r0
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            r2.cacheUpdates = r0
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 4
            r0.<init>(r1)
            r2.viaHeaders = r0
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            if (r13 == 0) goto L2e
            goto L30
        L2e:
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r13 = cz.msebera.android.httpclient.impl.client.cache.CacheConfig.DEFAULT
        L30:
            r2.cacheConfig = r13
            r2.backend = r3
            r2.responseCache = r4
            r2.validityPolicy = r5
            r2.responseCachingPolicy = r6
            r2.responseGenerator = r7
            r2.cacheableRequestPolicy = r8
            r2.suitabilityChecker = r9
            r2.conditionalRequestBuilder = r10
            r2.responseCompliance = r11
            r2.requestCompliance = r12
            r2.asynchRevalidator = r14
            return
    }

    private boolean alreadyHaveNewerCacheEntry(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3, cz.msebera.android.httpclient.HttpResponse r4) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.HttpCache r0 = r1.responseCache     // Catch: java.io.IOException -> L7
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2 = r0.getCacheEntry(r2, r3)     // Catch: java.io.IOException -> L7
            goto L8
        L7:
            r2 = 0
        L8:
            r3 = 0
            if (r2 != 0) goto Lc
            return r3
        Lc:
            java.lang.String r0 = "Date"
            cz.msebera.android.httpclient.Header r2 = r2.getFirstHeader(r0)
            if (r2 != 0) goto L15
            return r3
        L15:
            cz.msebera.android.httpclient.Header r4 = r4.getFirstHeader(r0)
            if (r4 != 0) goto L1c
            return r3
        L1c:
            java.lang.String r2 = r2.getValue()
            java.util.Date r2 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r2)
            java.lang.String r4 = r4.getValue()
            java.util.Date r4 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r4)
            if (r2 == 0) goto L36
            if (r4 != 0) goto L31
            goto L36
        L31:
            boolean r2 = r4.before(r2)
            return r2
        L36:
            return r3
    }

    private boolean explicitFreshnessRequest(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r18, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r19, java.util.Date r20) {
            r17 = this;
            r0 = r17
            r1 = r19
            java.lang.String r2 = "Cache-Control"
            r3 = r18
            cz.msebera.android.httpclient.Header[] r2 = r3.getHeaders(r2)
            int r3 = r2.length
            r4 = 0
            r5 = 0
        Lf:
            if (r5 >= r3) goto L6b
            r6 = r2[r5]
            cz.msebera.android.httpclient.HeaderElement[] r6 = r6.getElements()
            int r7 = r6.length
            r8 = 0
        L19:
            if (r8 >= r7) goto L66
            r9 = r6[r8]
            java.lang.String r10 = r9.getName()
            java.lang.String r11 = "max-stale"
            boolean r10 = r11.equals(r10)
            r11 = 1
            if (r10 == 0) goto L47
            java.lang.String r9 = r9.getValue()     // Catch: java.lang.NumberFormatException -> L46
            int r9 = java.lang.Integer.parseInt(r9)     // Catch: java.lang.NumberFormatException -> L46
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r10 = r0.validityPolicy     // Catch: java.lang.NumberFormatException -> L46
            r12 = r20
            long r13 = r10.getCurrentAgeSecs(r1, r12)     // Catch: java.lang.NumberFormatException -> L46
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r10 = r0.validityPolicy     // Catch: java.lang.NumberFormatException -> L46
            long r15 = r10.getFreshnessLifetimeSecs(r1)     // Catch: java.lang.NumberFormatException -> L46
            long r13 = r13 - r15
            long r9 = (long) r9
            int r15 = (r13 > r9 ? 1 : (r13 == r9 ? 0 : -1))
            if (r15 <= 0) goto L62
        L46:
            return r11
        L47:
            r12 = r20
            java.lang.String r10 = r9.getName()
            java.lang.String r13 = "min-fresh"
            boolean r10 = r13.equals(r10)
            if (r10 != 0) goto L65
            java.lang.String r9 = r9.getName()
            java.lang.String r10 = "max-age"
            boolean r9 = r10.equals(r9)
            if (r9 == 0) goto L62
            goto L65
        L62:
            int r8 = r8 + 1
            goto L19
        L65:
            return r11
        L66:
            r12 = r20
            int r5 = r5 + 1
            goto Lf
        L6b:
            return r4
    }

    private void flushEntriesInvalidatedByRequest(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.HttpCache r0 = r1.responseCache     // Catch: java.io.IOException -> L6
            r0.flushInvalidatedCacheEntriesFor(r2, r3)     // Catch: java.io.IOException -> L6
            goto Le
        L6:
            r2 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r1.log
            java.lang.String r0 = "Unable to flush invalidated entries from cache"
            r3.warn(r0, r2)
        Le:
            return
    }

    private cz.msebera.android.httpclient.client.methods.CloseableHttpResponse generateCachedResponse(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3, cz.msebera.android.httpclient.protocol.HttpContext r4, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r5, java.util.Date r6) {
            r2 = this;
            java.lang.String r0 = "If-None-Match"
            boolean r0 = r3.containsHeader(r0)
            if (r0 != 0) goto L18
            java.lang.String r0 = "If-Modified-Since"
            boolean r0 = r3.containsHeader(r0)
            if (r0 == 0) goto L11
            goto L18
        L11:
            cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator r0 = r2.responseGenerator
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r3 = r0.generateResponse(r3, r5)
            goto L1e
        L18:
            cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator r3 = r2.responseGenerator
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r3 = r3.generateNotModifiedResponse(r5)
        L1e:
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r0 = cz.msebera.android.httpclient.client.cache.CacheResponseStatus.CACHE_HIT
            r2.setResponseStatus(r4, r0)
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r4 = r2.validityPolicy
            long r4 = r4.getStalenessSecs(r5, r6)
            r0 = 0
            int r6 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r6 <= 0) goto L36
            java.lang.String r4 = "Warning"
            java.lang.String r5 = "110 localhost \"Response is stale\""
            r3.addHeader(r4, r5)
        L36:
            return r3
    }

    private cz.msebera.android.httpclient.client.methods.CloseableHttpResponse generateGatewayTimeout(cz.msebera.android.httpclient.protocol.HttpContext r4) {
            r3 = this;
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r0 = cz.msebera.android.httpclient.client.cache.CacheResponseStatus.CACHE_MODULE_RESPONSE
            r3.setResponseStatus(r4, r0)
            cz.msebera.android.httpclient.message.BasicHttpResponse r4 = new cz.msebera.android.httpclient.message.BasicHttpResponse
            cz.msebera.android.httpclient.HttpVersion r0 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            r1 = 504(0x1f8, float:7.06E-43)
            java.lang.String r2 = "Gateway Timeout"
            r4.<init>(r0, r1, r2)
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r4 = cz.msebera.android.httpclient.impl.client.cache.Proxies.enhanceResponse(r4)
            return r4
    }

    private java.lang.String generateViaHeader(cz.msebera.android.httpclient.HttpMessage r10) {
            r9 = this;
            cz.msebera.android.httpclient.ProtocolVersion r10 = r10.getProtocolVersion()
            java.util.Map<cz.msebera.android.httpclient.ProtocolVersion, java.lang.String> r0 = r9.viaHeaders
            java.lang.Object r0 = r0.get(r10)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto Lf
            return r0
        Lf:
            java.lang.Class r0 = r9.getClass()
            java.lang.ClassLoader r0 = r0.getClassLoader()
            java.lang.String r1 = "cz.msebera.android.httpclient.client"
            cz.msebera.android.httpclient.util.VersionInfo r0 = cz.msebera.android.httpclient.util.VersionInfo.loadVersionInfo(r1, r0)
            if (r0 == 0) goto L24
            java.lang.String r0 = r0.getRelease()
            goto L26
        L24:
            java.lang.String r0 = "UNAVAILABLE"
        L26:
            int r1 = r10.getMajor()
            int r2 = r10.getMinor()
            java.lang.String r3 = r10.getProtocol()
            java.lang.String r4 = "http"
            boolean r3 = r4.equalsIgnoreCase(r3)
            r4 = 3
            r5 = 2
            r6 = 1
            r7 = 0
            if (r3 == 0) goto L55
            java.lang.Object[] r3 = new java.lang.Object[r4]
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r3[r7] = r1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r2)
            r3[r6] = r1
            r3[r5] = r0
            java.lang.String r0 = "%d.%d localhost (Apache-HttpClient/%s (cache))"
            java.lang.String r0 = java.lang.String.format(r0, r3)
            goto L72
        L55:
            r3 = 4
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r8 = r10.getProtocol()
            r3[r7] = r8
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r3[r6] = r1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r2)
            r3[r5] = r1
            r3[r4] = r0
            java.lang.String r0 = "%s/%d.%d localhost (Apache-HttpClient/%s (cache))"
            java.lang.String r0 = java.lang.String.format(r0, r3)
        L72:
            java.util.Map<cz.msebera.android.httpclient.ProtocolVersion, java.lang.String> r1 = r9.viaHeaders
            r1.put(r10, r0)
            return r0
    }

    private java.util.Map<java.lang.String, cz.msebera.android.httpclient.impl.client.cache.Variant> getExistingCacheVariants(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.HttpCache r0 = r1.responseCache     // Catch: java.io.IOException -> L7
            java.util.Map r2 = r0.getVariantCacheEntriesWithEtags(r2, r3)     // Catch: java.io.IOException -> L7
            goto L10
        L7:
            r2 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r1.log
            java.lang.String r0 = "Unable to retrieve variant entries from cache"
            r3.warn(r0, r2)
            r2 = 0
        L10:
            return r2
    }

    private cz.msebera.android.httpclient.HttpResponse getFatallyNoncompliantResponse(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3, cz.msebera.android.httpclient.protocol.HttpContext r4) {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolCompliance r0 = r2.requestCompliance
            java.util.List r3 = r0.requestIsFatallyNonCompliant(r3)
            java.util.Iterator r3 = r3.iterator()
            r0 = 0
        Lb:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r0 = r3.next()
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r0 = (cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError) r0
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r1 = cz.msebera.android.httpclient.client.cache.CacheResponseStatus.CACHE_MODULE_RESPONSE
            r2.setResponseStatus(r4, r1)
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolCompliance r1 = r2.requestCompliance
            cz.msebera.android.httpclient.HttpResponse r0 = r1.getErrorForRequest(r0)
            goto Lb
        L23:
            return r0
    }

    private cz.msebera.android.httpclient.client.cache.HttpCacheEntry getUpdatedVariantEntry(cz.msebera.android.httpclient.HttpHost r9, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r10, java.util.Date r11, java.util.Date r12, cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r13, cz.msebera.android.httpclient.impl.client.cache.Variant r14, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r15) throws java.io.IOException {
            r8 = this;
            cz.msebera.android.httpclient.impl.client.cache.HttpCache r0 = r8.responseCache     // Catch: java.lang.Throwable -> L14 java.io.IOException -> L16
            java.lang.String r7 = r14.getCacheKey()     // Catch: java.lang.Throwable -> L14 java.io.IOException -> L16
            r1 = r9
            r2 = r10
            r3 = r15
            r4 = r13
            r5 = r11
            r6 = r12
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r15 = r0.updateVariantCacheEntry(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L14 java.io.IOException -> L16
        L10:
            r13.close()
            goto L1f
        L14:
            r9 = move-exception
            goto L20
        L16:
            r9 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r10 = r8.log     // Catch: java.lang.Throwable -> L14
            java.lang.String r11 = "Could not update cache entry"
            r10.warn(r11, r9)     // Catch: java.lang.Throwable -> L14
            goto L10
        L1f:
            return r15
        L20:
            r13.close()
            throw r9
    }

    private cz.msebera.android.httpclient.client.methods.CloseableHttpResponse handleCacheHit(cz.msebera.android.httpclient.conn.routing.HttpRoute r9, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r10, cz.msebera.android.httpclient.client.protocol.HttpClientContext r11, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r12, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r13) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r8 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r11.getTargetHost()
            r8.recordCacheHit(r0, r10)
            java.util.Date r7 = r8.getCurrentDate()
            cz.msebera.android.httpclient.impl.client.cache.CachedResponseSuitabilityChecker r1 = r8.suitabilityChecker
            boolean r1 = r1.canCachedResponseBeUsed(r0, r10, r13, r7)
            if (r1 == 0) goto L1f
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r12 = r8.log
            java.lang.String r1 = "Cache hit"
            r12.debug(r1)
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r12 = r8.generateCachedResponse(r10, r11, r13, r7)
            goto L30
        L1f:
            boolean r1 = r8.mayCallBackend(r10)
            if (r1 != 0) goto L4c
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r12 = r8.log
            java.lang.String r13 = "Cache entry not suitable but only-if-cached requested"
            r12.debug(r13)
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r12 = r8.generateGatewayTimeout(r11)
        L30:
            java.lang.String r13 = "http.route"
            r11.setAttribute(r13, r9)
            java.lang.String r9 = "http.target_host"
            r11.setAttribute(r9, r0)
            java.lang.String r9 = "http.request"
            r11.setAttribute(r9, r10)
            java.lang.String r9 = "http.response"
            r11.setAttribute(r9, r12)
            java.lang.Boolean r9 = java.lang.Boolean.TRUE
            java.lang.String r10 = "http.request_sent"
            r11.setAttribute(r10, r9)
            return r12
        L4c:
            int r0 = r13.getStatusCode()
            r1 = 304(0x130, float:4.26E-43)
            if (r0 != r1) goto L69
            cz.msebera.android.httpclient.impl.client.cache.CachedResponseSuitabilityChecker r0 = r8.suitabilityChecker
            boolean r0 = r0.isConditional(r10)
            if (r0 == 0) goto L5d
            goto L69
        L5d:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r13 = r8.log
            java.lang.String r0 = "Cache entry not usable; calling backend"
            r13.debug(r0)
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r9 = r8.callBackend(r9, r10, r11, r12)
            return r9
        L69:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r8.log
            java.lang.String r1 = "Revalidating cache entry"
            r0.debug(r1)
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r9 = r1.revalidateCacheEntry(r2, r3, r4, r5, r6, r7)
            return r9
    }

    private cz.msebera.android.httpclient.client.methods.CloseableHttpResponse handleCacheMiss(cz.msebera.android.httpclient.conn.routing.HttpRoute r7, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r8, cz.msebera.android.httpclient.client.protocol.HttpClientContext r9, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r10) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r6 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r9.getTargetHost()
            r6.recordCacheMiss(r0, r8)
            boolean r1 = r6.mayCallBackend(r8)
            if (r1 != 0) goto L1d
            cz.msebera.android.httpclient.message.BasicHttpResponse r7 = new cz.msebera.android.httpclient.message.BasicHttpResponse
            cz.msebera.android.httpclient.HttpVersion r8 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            r9 = 504(0x1f8, float:7.06E-43)
            java.lang.String r10 = "Gateway Timeout"
            r7.<init>(r8, r9, r10)
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r7 = cz.msebera.android.httpclient.impl.client.cache.Proxies.enhanceResponse(r7)
            return r7
        L1d:
            java.util.Map r5 = r6.getExistingCacheVariants(r0, r8)
            if (r5 == 0) goto L33
            boolean r0 = r5.isEmpty()
            if (r0 != 0) goto L33
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r7 = r0.negotiateResponseFromVariants(r1, r2, r3, r4, r5)
            return r7
        L33:
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r7 = r6.callBackend(r7, r8, r9, r10)
            return r7
    }

    private cz.msebera.android.httpclient.client.methods.CloseableHttpResponse handleRevalidationFailure(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r1, cz.msebera.android.httpclient.protocol.HttpContext r2, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3, java.util.Date r4) {
            r0 = this;
            boolean r4 = r0.staleResponseNotAllowed(r1, r3, r4)
            if (r4 == 0) goto Lb
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r1 = r0.generateGatewayTimeout(r2)
            return r1
        Lb:
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r1 = r0.unvalidatedCacheHit(r1, r2, r3)
            return r1
    }

    private boolean mayCallBackend(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r9) {
            r8 = this;
            java.lang.String r0 = "Cache-Control"
            cz.msebera.android.httpclient.Header[] r9 = r9.getHeaders(r0)
            int r0 = r9.length
            r1 = 0
            r2 = 0
        L9:
            if (r2 >= r0) goto L31
            r3 = r9[r2]
            cz.msebera.android.httpclient.HeaderElement[] r3 = r3.getElements()
            int r4 = r3.length
            r5 = 0
        L13:
            if (r5 >= r4) goto L2e
            r6 = r3[r5]
            java.lang.String r6 = r6.getName()
            java.lang.String r7 = "only-if-cached"
            boolean r6 = r7.equals(r6)
            if (r6 == 0) goto L2b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r9 = r8.log
            java.lang.String r0 = "Request marked only-if-cached"
            r9.trace(r0)
            return r1
        L2b:
            int r5 = r5 + 1
            goto L13
        L2e:
            int r2 = r2 + 1
            goto L9
        L31:
            r9 = 1
            return r9
    }

    private void recordCacheHit(cz.msebera.android.httpclient.HttpHost r4, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r5) {
            r3 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r3.cacheHits
            r0.getAndIncrement()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            boolean r0 = r0.isTraceEnabled()
            if (r0 == 0) goto L38
            cz.msebera.android.httpclient.RequestLine r5 = r5.getRequestLine()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Cache hit [host: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "; uri: "
            r1.append(r4)
            java.lang.String r4 = r5.getUri()
            r1.append(r4)
            java.lang.String r4 = "]"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.trace(r4)
        L38:
            return
    }

    private void recordCacheMiss(cz.msebera.android.httpclient.HttpHost r4, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r5) {
            r3 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r3.cacheMisses
            r0.getAndIncrement()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            boolean r0 = r0.isTraceEnabled()
            if (r0 == 0) goto L38
            cz.msebera.android.httpclient.RequestLine r5 = r5.getRequestLine()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Cache miss [host: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "; uri: "
            r1.append(r4)
            java.lang.String r4 = r5.getUri()
            r1.append(r4)
            java.lang.String r4 = "]"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.trace(r4)
        L38:
            return
    }

    private void recordCacheUpdate(cz.msebera.android.httpclient.protocol.HttpContext r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r1.cacheUpdates
            r0.getAndIncrement()
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r0 = cz.msebera.android.httpclient.client.cache.CacheResponseStatus.VALIDATED
            r1.setResponseStatus(r2, r0)
            return
    }

    private cz.msebera.android.httpclient.client.methods.CloseableHttpResponse retryRequestUnconditionally(cz.msebera.android.httpclient.conn.routing.HttpRoute r2, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3, cz.msebera.android.httpclient.client.protocol.HttpClientContext r4, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r5, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r6) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.ConditionalRequestBuilder r0 = r1.conditionalRequestBuilder
            cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3 = r0.buildUnconditionalRequest(r3, r6)
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r2 = r1.callBackend(r2, r3, r4, r5)
            return r2
    }

    private cz.msebera.android.httpclient.client.methods.CloseableHttpResponse revalidateCacheEntry(cz.msebera.android.httpclient.conn.routing.HttpRoute r9, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r10, cz.msebera.android.httpclient.client.protocol.HttpClientContext r11, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r12, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r13, java.util.Date r14) throws cz.msebera.android.httpclient.HttpException {
            r8 = this;
            cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidator r0 = r8.asynchRevalidator     // Catch: java.io.IOException -> L2e
            if (r0 == 0) goto L29
            boolean r0 = r8.staleResponseNotAllowed(r10, r13, r14)     // Catch: java.io.IOException -> L2e
            if (r0 != 0) goto L29
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r0 = r8.validityPolicy     // Catch: java.io.IOException -> L2e
            boolean r0 = r0.mayReturnStaleWhileRevalidating(r13, r14)     // Catch: java.io.IOException -> L2e
            if (r0 == 0) goto L29
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r8.log     // Catch: java.io.IOException -> L2e
            java.lang.String r1 = "Serving stale with asynchronous revalidation"
            r0.trace(r1)     // Catch: java.io.IOException -> L2e
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r0 = r8.generateCachedResponse(r10, r11, r13, r14)     // Catch: java.io.IOException -> L2e
            cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidator r1 = r8.asynchRevalidator     // Catch: java.io.IOException -> L2e
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            r1.revalidateCacheEntry(r2, r3, r4, r5, r6, r7)     // Catch: java.io.IOException -> L2e
            return r0
        L29:
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r9 = r8.revalidateCacheEntry(r9, r10, r11, r12, r13)     // Catch: java.io.IOException -> L2e
            return r9
        L2e:
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r9 = r8.handleRevalidationFailure(r10, r11, r13, r14)
            return r9
    }

    private boolean revalidationResponseIsTooOld(cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3) {
            r1 = this;
            java.lang.String r0 = "Date"
            cz.msebera.android.httpclient.Header r3 = r3.getFirstHeader(r0)
            cz.msebera.android.httpclient.Header r2 = r2.getFirstHeader(r0)
            r0 = 0
            if (r3 == 0) goto L2c
            if (r2 == 0) goto L2c
            java.lang.String r3 = r3.getValue()
            java.util.Date r3 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r3)
            java.lang.String r2 = r2.getValue()
            java.util.Date r2 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r2)
            if (r3 == 0) goto L2c
            if (r2 != 0) goto L24
            goto L2c
        L24:
            boolean r2 = r2.before(r3)
            if (r2 == 0) goto L2c
            r2 = 1
            return r2
        L2c:
            return r0
    }

    private cz.msebera.android.httpclient.client.cache.HttpCacheEntry satisfyFromCache(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.HttpCache r0 = r1.responseCache     // Catch: java.io.IOException -> L7
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2 = r0.getCacheEntry(r2, r3)     // Catch: java.io.IOException -> L7
            goto L10
        L7:
            r2 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r1.log
            java.lang.String r0 = "Unable to retrieve entries from cache"
            r3.warn(r0, r2)
            r2 = 0
        L10:
            return r2
    }

    private void setResponseStatus(cz.msebera.android.httpclient.protocol.HttpContext r2, cz.msebera.android.httpclient.client.cache.CacheResponseStatus r3) {
            r1 = this;
            if (r2 == 0) goto L7
            java.lang.String r0 = "http.cache.response.status"
            r2.setAttribute(r0, r3)
        L7:
            return
    }

    private boolean shouldSendNotModifiedResponse(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r4) {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.cache.CachedResponseSuitabilityChecker r0 = r2.suitabilityChecker
            boolean r0 = r0.isConditional(r3)
            if (r0 == 0) goto L17
            cz.msebera.android.httpclient.impl.client.cache.CachedResponseSuitabilityChecker r0 = r2.suitabilityChecker
            java.util.Date r1 = new java.util.Date
            r1.<init>()
            boolean r3 = r0.allConditionalsMatch(r3, r4, r1)
            if (r3 == 0) goto L17
            r3 = 1
            goto L18
        L17:
            r3 = 0
        L18:
            return r3
    }

    private boolean staleIfErrorAppliesTo(int r2) {
            r1 = this;
            r0 = 500(0x1f4, float:7.0E-43)
            if (r2 == r0) goto L13
            r0 = 502(0x1f6, float:7.03E-43)
            if (r2 == r0) goto L13
            r0 = 503(0x1f7, float:7.05E-43)
            if (r2 == r0) goto L13
            r0 = 504(0x1f8, float:7.06E-43)
            if (r2 != r0) goto L11
            goto L13
        L11:
            r2 = 0
            goto L14
        L13:
            r2 = 1
        L14:
            return r2
    }

    private boolean staleResponseNotAllowed(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r2, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3, java.util.Date r4) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r0 = r1.validityPolicy
            boolean r0 = r0.mustRevalidate(r3)
            if (r0 != 0) goto L21
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r0 = r1.cacheConfig
            boolean r0 = r0.isSharedCache()
            if (r0 == 0) goto L18
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r0 = r1.validityPolicy
            boolean r0 = r0.proxyRevalidate(r3)
            if (r0 != 0) goto L21
        L18:
            boolean r2 = r1.explicitFreshnessRequest(r2, r3, r4)
            if (r2 == 0) goto L1f
            goto L21
        L1f:
            r2 = 0
            goto L22
        L21:
            r2 = 1
        L22:
            return r2
    }

    private void storeRequestIfModifiedSinceFor304Response(cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.HttpResponse r4) {
            r2 = this;
            cz.msebera.android.httpclient.StatusLine r0 = r4.getStatusLine()
            int r0 = r0.getStatusCode()
            r1 = 304(0x130, float:4.26E-43)
            if (r0 != r1) goto L1d
            java.lang.String r0 = "If-Modified-Since"
            cz.msebera.android.httpclient.Header r3 = r3.getFirstHeader(r0)
            if (r3 == 0) goto L1d
            java.lang.String r3 = r3.getValue()
            java.lang.String r0 = "Last-Modified"
            r4.addHeader(r0, r3)
        L1d:
            return
    }

    private void tryToUpdateVariantMap(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3, cz.msebera.android.httpclient.impl.client.cache.Variant r4) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.HttpCache r0 = r1.responseCache     // Catch: java.io.IOException -> L6
            r0.reuseVariantEntryFor(r2, r3, r4)     // Catch: java.io.IOException -> L6
            goto Le
        L6:
            r2 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r1.log
            java.lang.String r4 = "Could not update cache entry to reuse variant"
            r3.warn(r4, r2)
        Le:
            return
    }

    private cz.msebera.android.httpclient.client.methods.CloseableHttpResponse unvalidatedCacheHit(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r2, cz.msebera.android.httpclient.protocol.HttpContext r3, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r4) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator r0 = r1.responseGenerator
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r2 = r0.generateResponse(r2, r4)
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r4 = cz.msebera.android.httpclient.client.cache.CacheResponseStatus.CACHE_HIT
            r1.setResponseStatus(r3, r4)
            java.lang.String r3 = "Warning"
            java.lang.String r4 = "111 localhost \"Revalidation failed\""
            r2.addHeader(r3, r4)
            return r2
    }

    cz.msebera.android.httpclient.client.methods.CloseableHttpResponse callBackend(cz.msebera.android.httpclient.conn.routing.HttpRoute r7, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r8, cz.msebera.android.httpclient.client.protocol.HttpClientContext r9, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r10) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r6 = this;
            java.util.Date r3 = r6.getCurrentDate()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r6.log
            java.lang.String r1 = "Calling the backend"
            r0.trace(r1)
            cz.msebera.android.httpclient.impl.execchain.ClientExecChain r0 = r6.backend
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r7 = r0.execute(r7, r8, r9, r10)
            java.lang.String r10 = "Via"
            java.lang.String r0 = r6.generateViaHeader(r7)     // Catch: java.lang.RuntimeException -> L27 java.io.IOException -> L2c
            r7.addHeader(r10, r0)     // Catch: java.lang.RuntimeException -> L27 java.io.IOException -> L2c
            java.util.Date r4 = r6.getCurrentDate()     // Catch: java.lang.RuntimeException -> L27 java.io.IOException -> L2c
            r0 = r6
            r1 = r8
            r2 = r9
            r5 = r7
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r7 = r0.handleBackendResponse(r1, r2, r3, r4, r5)     // Catch: java.lang.RuntimeException -> L27 java.io.IOException -> L2c
            return r7
        L27:
            r8 = move-exception
            r7.close()
            throw r8
        L2c:
            r8 = move-exception
            r7.close()
            throw r8
    }

    boolean clientRequestsOurOptions(cz.msebera.android.httpclient.HttpRequest r4) {
            r3 = this;
            cz.msebera.android.httpclient.RequestLine r0 = r4.getRequestLine()
            java.lang.String r1 = r0.getMethod()
            java.lang.String r2 = "OPTIONS"
            boolean r1 = r2.equals(r1)
            r2 = 0
            if (r1 != 0) goto L12
            return r2
        L12:
            java.lang.String r0 = r0.getUri()
            java.lang.String r1 = "*"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L1f
            return r2
        L1f:
            java.lang.String r0 = "Max-Forwards"
            cz.msebera.android.httpclient.Header r4 = r4.getFirstHeader(r0)
            java.lang.String r4 = r4.getValue()
            java.lang.String r0 = "0"
            boolean r4 = r0.equals(r4)
            if (r4 != 0) goto L32
            return r2
        L32:
            r4 = 1
            return r4
    }

    public cz.msebera.android.httpclient.client.methods.CloseableHttpResponse execute(cz.msebera.android.httpclient.conn.routing.HttpRoute r3, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r4) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r2 = this;
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r0 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.create()
            r1 = 0
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r3 = r2.execute(r3, r4, r0, r1)
            return r3
    }

    public cz.msebera.android.httpclient.client.methods.CloseableHttpResponse execute(cz.msebera.android.httpclient.conn.routing.HttpRoute r2, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3, cz.msebera.android.httpclient.client.protocol.HttpClientContext r4) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r2 = r1.execute(r2, r3, r4, r0)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.client.methods.CloseableHttpResponse execute(cz.msebera.android.httpclient.conn.routing.HttpRoute r7, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r8, cz.msebera.android.httpclient.client.protocol.HttpClientContext r9, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r10) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r6 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r9.getTargetHost()
            cz.msebera.android.httpclient.HttpRequest r1 = r8.getOriginal()
            java.lang.String r1 = r6.generateViaHeader(r1)
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r2 = cz.msebera.android.httpclient.client.cache.CacheResponseStatus.CACHE_MISS
            r6.setResponseStatus(r9, r2)
            boolean r2 = r6.clientRequestsOurOptions(r8)
            if (r2 == 0) goto L26
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r7 = cz.msebera.android.httpclient.client.cache.CacheResponseStatus.CACHE_MODULE_RESPONSE
            r6.setResponseStatus(r9, r7)
            cz.msebera.android.httpclient.impl.client.cache.OptionsHttp11Response r7 = new cz.msebera.android.httpclient.impl.client.cache.OptionsHttp11Response
            r7.<init>()
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r7 = cz.msebera.android.httpclient.impl.client.cache.Proxies.enhanceResponse(r7)
            return r7
        L26:
            cz.msebera.android.httpclient.HttpResponse r2 = r6.getFatallyNoncompliantResponse(r8, r9)
            if (r2 == 0) goto L31
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r7 = cz.msebera.android.httpclient.impl.client.cache.Proxies.enhanceResponse(r2)
            return r7
        L31:
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolCompliance r2 = r6.requestCompliance
            r2.makeRequestCompliant(r8)
            java.lang.String r2 = "Via"
            r8.addHeader(r2, r1)
            cz.msebera.android.httpclient.HttpHost r1 = r9.getTargetHost()
            r6.flushEntriesInvalidatedByRequest(r1, r8)
            cz.msebera.android.httpclient.impl.client.cache.CacheableRequestPolicy r1 = r6.cacheableRequestPolicy
            boolean r1 = r1.isServableFromCache(r8)
            if (r1 != 0) goto L56
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r6.log
            java.lang.String r1 = "Request is not servable from cache"
            r0.debug(r1)
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r7 = r6.callBackend(r7, r8, r9, r10)
            return r7
        L56:
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r5 = r6.satisfyFromCache(r0, r8)
            if (r5 != 0) goto L68
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r6.log
            java.lang.String r1 = "Cache miss"
            r0.debug(r1)
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r7 = r6.handleCacheMiss(r7, r8, r9, r10)
            return r7
        L68:
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r7 = r0.handleCacheHit(r1, r2, r3, r4, r5)
            return r7
    }

    public long getCacheHits() {
            r2 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r2.cacheHits
            long r0 = r0.get()
            return r0
    }

    public long getCacheMisses() {
            r2 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r2.cacheMisses
            long r0 = r0.get()
            return r0
    }

    public long getCacheUpdates() {
            r2 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r2.cacheUpdates
            long r0 = r0.get()
            return r0
    }

    java.util.Date getCurrentDate() {
            r1 = this;
            java.util.Date r0 = new java.util.Date
            r0.<init>()
            return r0
    }

    cz.msebera.android.httpclient.client.methods.CloseableHttpResponse handleBackendResponse(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r8, cz.msebera.android.httpclient.client.protocol.HttpClientContext r9, java.util.Date r10, java.util.Date r11, cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r12) throws java.io.IOException {
            r7 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r7.log
            java.lang.String r1 = "Handling Backend response"
            r0.trace(r1)
            cz.msebera.android.httpclient.impl.client.cache.ResponseProtocolCompliance r0 = r7.responseCompliance
            r0.ensureProtocolCompliance(r8, r12)
            cz.msebera.android.httpclient.HttpHost r2 = r9.getTargetHost()
            cz.msebera.android.httpclient.impl.client.cache.ResponseCachingPolicy r9 = r7.responseCachingPolicy
            boolean r9 = r9.isResponseCacheable(r8, r12)
            cz.msebera.android.httpclient.impl.client.cache.HttpCache r0 = r7.responseCache
            r0.flushInvalidatedCacheEntriesFor(r2, r8, r12)
            if (r9 == 0) goto L31
            boolean r0 = r7.alreadyHaveNewerCacheEntry(r2, r8, r12)
            if (r0 != 0) goto L31
            r7.storeRequestIfModifiedSinceFor304Response(r8, r12)
            cz.msebera.android.httpclient.impl.client.cache.HttpCache r1 = r7.responseCache
            r3 = r8
            r4 = r12
            r5 = r10
            r6 = r11
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r8 = r1.cacheAndReturnResponse(r2, r3, r4, r5, r6)
            return r8
        L31:
            if (r9 != 0) goto L41
            cz.msebera.android.httpclient.impl.client.cache.HttpCache r9 = r7.responseCache     // Catch: java.io.IOException -> L39
            r9.flushCacheEntriesFor(r2, r8)     // Catch: java.io.IOException -> L39
            goto L41
        L39:
            r8 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r9 = r7.log
            java.lang.String r10 = "Unable to flush invalid cache entries"
            r9.warn(r10, r8)
        L41:
            return r12
    }

    cz.msebera.android.httpclient.client.methods.CloseableHttpResponse negotiateResponseFromVariants(cz.msebera.android.httpclient.conn.routing.HttpRoute r11, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r12, cz.msebera.android.httpclient.client.protocol.HttpClientContext r13, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r14, java.util.Map<java.lang.String, cz.msebera.android.httpclient.impl.client.cache.Variant> r15) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r10 = this;
            cz.msebera.android.httpclient.impl.client.cache.ConditionalRequestBuilder r0 = r10.conditionalRequestBuilder
            cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3 = r0.buildConditionalRequestFromVariants(r12, r15)
            java.util.Date r7 = r10.getCurrentDate()
            cz.msebera.android.httpclient.impl.execchain.ClientExecChain r0 = r10.backend
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r0 = r0.execute(r11, r3, r13, r14)
            java.util.Date r8 = r10.getCurrentDate()     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            java.lang.String r1 = "Via"
            java.lang.String r2 = r10.generateViaHeader(r0)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            r0.addHeader(r1, r2)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            cz.msebera.android.httpclient.StatusLine r1 = r0.getStatusLine()     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            int r1 = r1.getStatusCode()     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            r2 = 304(0x130, float:4.26E-43)
            if (r1 == r2) goto L32
            r4 = r10
            r5 = r12
            r6 = r13
            r9 = r0
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r11 = r4.handleBackendResponse(r5, r6, r7, r8, r9)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            return r11
        L32:
            java.lang.String r1 = "ETag"
            cz.msebera.android.httpclient.Header r1 = r0.getFirstHeader(r1)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            if (r1 != 0) goto L50
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r15 = r10.log     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            java.lang.String r1 = "304 response did not contain ETag"
            r15.warn(r1)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            cz.msebera.android.httpclient.HttpEntity r15 = r0.getEntity()     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            cz.msebera.android.httpclient.impl.client.cache.IOUtils.consume(r15)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            r0.close()     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r11 = r10.callBackend(r11, r12, r13, r14)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            return r11
        L50:
            java.lang.String r1 = r1.getValue()     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            java.lang.Object r15 = r15.get(r1)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            cz.msebera.android.httpclient.impl.client.cache.Variant r15 = (cz.msebera.android.httpclient.impl.client.cache.Variant) r15     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            if (r15 != 0) goto L72
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r15 = r10.log     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            java.lang.String r1 = "304 response did not contain ETag matching one sent in If-None-Match"
            r15.debug(r1)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            cz.msebera.android.httpclient.HttpEntity r15 = r0.getEntity()     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            cz.msebera.android.httpclient.impl.client.cache.IOUtils.consume(r15)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            r0.close()     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r11 = r10.callBackend(r11, r12, r13, r14)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            return r11
        L72:
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r9 = r15.getEntry()     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            boolean r1 = r10.revalidationResponseIsTooOld(r0, r9)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            if (r1 == 0) goto L91
            cz.msebera.android.httpclient.HttpEntity r15 = r0.getEntity()     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            cz.msebera.android.httpclient.impl.client.cache.IOUtils.consume(r15)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            r0.close()     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            r1 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r9
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r11 = r1.retryRequestUnconditionally(r2, r3, r4, r5, r6)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            return r11
        L91:
            r10.recordCacheUpdate(r13)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            cz.msebera.android.httpclient.HttpHost r2 = r13.getTargetHost()     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            r1 = r10
            r4 = r7
            r5 = r8
            r6 = r0
            r7 = r15
            r8 = r9
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r11 = r1.getUpdatedVariantEntry(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            r0.close()     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator r14 = r10.responseGenerator     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r14 = r14.generateResponse(r12, r11)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            cz.msebera.android.httpclient.HttpHost r13 = r13.getTargetHost()     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            r10.tryToUpdateVariantMap(r13, r12, r15)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            boolean r12 = r10.shouldSendNotModifiedResponse(r12, r11)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            if (r12 == 0) goto Lbf
            cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator r12 = r10.responseGenerator     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r11 = r12.generateNotModifiedResponse(r11)     // Catch: java.lang.RuntimeException -> Lc0 java.io.IOException -> Lc5
            return r11
        Lbf:
            return r14
        Lc0:
            r11 = move-exception
            r0.close()
            throw r11
        Lc5:
            r11 = move-exception
            r0.close()
            throw r11
    }

    cz.msebera.android.httpclient.client.methods.CloseableHttpResponse revalidateCacheEntry(cz.msebera.android.httpclient.conn.routing.HttpRoute r11, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r12, cz.msebera.android.httpclient.client.protocol.HttpClientContext r13, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r14, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r15) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r10 = this;
            cz.msebera.android.httpclient.impl.client.cache.ConditionalRequestBuilder r0 = r10.conditionalRequestBuilder
            cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r2 = r0.buildConditionalRequest(r12, r15)
            java.net.URI r0 = r2.getURI()
            if (r0 == 0) goto L2c
            java.net.URI r1 = cz.msebera.android.httpclient.client.utils.URIUtils.rewriteURIForRoute(r0, r11)     // Catch: java.net.URISyntaxException -> L14
            r2.setURI(r1)     // Catch: java.net.URISyntaxException -> L14
            goto L2c
        L14:
            r11 = move-exception
            cz.msebera.android.httpclient.ProtocolException r12 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r14 = "Invalid URI: "
            r13.append(r14)
            r13.append(r0)
            java.lang.String r13 = r13.toString()
            r12.<init>(r13, r11)
            throw r12
        L2c:
            java.util.Date r0 = r10.getCurrentDate()
            cz.msebera.android.httpclient.impl.execchain.ClientExecChain r1 = r10.backend
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r1 = r1.execute(r11, r2, r13, r14)
            java.util.Date r3 = r10.getCurrentDate()
            boolean r4 = r10.revalidationResponseIsTooOld(r1, r15)
            if (r4 == 0) goto L5b
            r1.close()
            cz.msebera.android.httpclient.impl.client.cache.ConditionalRequestBuilder r0 = r10.conditionalRequestBuilder
            cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r0 = r0.buildUnconditionalRequest(r12, r15)
            java.util.Date r1 = r10.getCurrentDate()
            cz.msebera.android.httpclient.impl.execchain.ClientExecChain r3 = r10.backend
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r11 = r3.execute(r11, r0, r13, r14)
            java.util.Date r14 = r10.getCurrentDate()
            r7 = r11
            r9 = r14
            r8 = r1
            goto L5e
        L5b:
            r8 = r0
            r7 = r1
            r9 = r3
        L5e:
            java.lang.String r11 = r10.generateViaHeader(r7)
            java.lang.String r14 = "Via"
            r7.addHeader(r14, r11)
            cz.msebera.android.httpclient.StatusLine r11 = r7.getStatusLine()
            int r11 = r11.getStatusCode()
            r14 = 304(0x130, float:4.26E-43)
            if (r11 == r14) goto L77
            r0 = 200(0xc8, float:2.8E-43)
            if (r11 != r0) goto L7a
        L77:
            r10.recordCacheUpdate(r13)
        L7a:
            if (r11 != r14) goto Lab
            cz.msebera.android.httpclient.impl.client.cache.HttpCache r3 = r10.responseCache
            cz.msebera.android.httpclient.HttpHost r4 = r13.getTargetHost()
            r5 = r12
            r6 = r15
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r11 = r3.updateCacheEntry(r4, r5, r6, r7, r8, r9)
            cz.msebera.android.httpclient.impl.client.cache.CachedResponseSuitabilityChecker r13 = r10.suitabilityChecker
            boolean r13 = r13.isConditional(r12)
            if (r13 == 0) goto La4
            cz.msebera.android.httpclient.impl.client.cache.CachedResponseSuitabilityChecker r13 = r10.suitabilityChecker
            java.util.Date r14 = new java.util.Date
            r14.<init>()
            boolean r13 = r13.allConditionalsMatch(r12, r11, r14)
            if (r13 == 0) goto La4
            cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator r12 = r10.responseGenerator
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r11 = r12.generateNotModifiedResponse(r11)
            return r11
        La4:
            cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator r13 = r10.responseGenerator
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r11 = r13.generateResponse(r12, r11)
            return r11
        Lab:
            boolean r11 = r10.staleIfErrorAppliesTo(r11)
            if (r11 == 0) goto Ld9
            java.util.Date r11 = r10.getCurrentDate()
            boolean r11 = r10.staleResponseNotAllowed(r12, r15, r11)
            if (r11 != 0) goto Ld9
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r11 = r10.validityPolicy
            boolean r11 = r11.mayReturnStaleIfError(r12, r15, r9)
            if (r11 == 0) goto Ld9
            cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator r11 = r10.responseGenerator     // Catch: java.lang.Throwable -> Ld4
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r11 = r11.generateResponse(r12, r15)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r12 = "Warning"
            java.lang.String r13 = "110 localhost \"Response is stale\""
            r11.addHeader(r12, r13)     // Catch: java.lang.Throwable -> Ld4
            r7.close()
            return r11
        Ld4:
            r11 = move-exception
            r7.close()
            throw r11
        Ld9:
            r1 = r10
            r3 = r13
            r4 = r8
            r5 = r9
            r6 = r7
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r11 = r1.handleBackendResponse(r2, r3, r4, r5, r6)
            return r11
    }

    public boolean supportsRangeAndContentRangeHeaders() {
            r1 = this;
            r0 = 0
            return r0
    }
}
