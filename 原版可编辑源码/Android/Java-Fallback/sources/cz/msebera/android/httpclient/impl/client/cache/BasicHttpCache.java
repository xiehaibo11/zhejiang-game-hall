package cz.msebera.android.httpclient.impl.client.cache;

class BasicHttpCache implements cz.msebera.android.httpclient.impl.client.cache.HttpCache {
    private static final java.util.Set<java.lang.String> safeRequestMethods = null;
    private final cz.msebera.android.httpclient.impl.client.cache.CacheEntryUpdater cacheEntryUpdater;
    private final cz.msebera.android.httpclient.client.cache.HttpCacheInvalidator cacheInvalidator;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final long maxObjectSizeBytes;
    private final cz.msebera.android.httpclient.client.cache.ResourceFactory resourceFactory;
    private final cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator responseGenerator;
    private final cz.msebera.android.httpclient.client.cache.HttpCacheStorage storage;
    private final cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator uriExtractor;



    static {
            java.util.HashSet r0 = new java.util.HashSet
            java.lang.String r1 = "HEAD"
            java.lang.String r2 = "GET"
            java.lang.String r3 = "OPTIONS"
            java.lang.String r4 = "TRACE"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3, r4}
            java.util.List r1 = java.util.Arrays.asList(r1)
            r0.<init>(r1)
            cz.msebera.android.httpclient.impl.client.cache.BasicHttpCache.safeRequestMethods = r0
            return
    }

    public BasicHttpCache() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r0 = cz.msebera.android.httpclient.impl.client.cache.CacheConfig.DEFAULT
            r1.<init>(r0)
            return
    }

    public BasicHttpCache(cz.msebera.android.httpclient.client.cache.ResourceFactory r2, cz.msebera.android.httpclient.client.cache.HttpCacheStorage r3, cz.msebera.android.httpclient.impl.client.cache.CacheConfig r4) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r0 = new cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator
            r0.<init>()
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public BasicHttpCache(cz.msebera.android.httpclient.client.cache.ResourceFactory r7, cz.msebera.android.httpclient.client.cache.HttpCacheStorage r8, cz.msebera.android.httpclient.impl.client.cache.CacheConfig r9, cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r10) {
            r6 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheInvalidator r5 = new cz.msebera.android.httpclient.impl.client.cache.CacheInvalidator
            r5.<init>(r10, r8)
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public BasicHttpCache(cz.msebera.android.httpclient.client.cache.ResourceFactory r3, cz.msebera.android.httpclient.client.cache.HttpCacheStorage r4, cz.msebera.android.httpclient.impl.client.cache.CacheConfig r5, cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r6, cz.msebera.android.httpclient.client.cache.HttpCacheInvalidator r7) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            r2.resourceFactory = r3
            r2.uriExtractor = r6
            cz.msebera.android.httpclient.impl.client.cache.CacheEntryUpdater r6 = new cz.msebera.android.httpclient.impl.client.cache.CacheEntryUpdater
            r6.<init>(r3)
            r2.cacheEntryUpdater = r6
            long r5 = r5.getMaxObjectSize()
            r2.maxObjectSizeBytes = r5
            cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator r3 = new cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator
            r3.<init>()
            r2.responseGenerator = r3
            r2.storage = r4
            r2.cacheInvalidator = r7
            return
    }

    public BasicHttpCache(cz.msebera.android.httpclient.impl.client.cache.CacheConfig r3) {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.cache.HeapResourceFactory r0 = new cz.msebera.android.httpclient.impl.client.cache.HeapResourceFactory
            r0.<init>()
            cz.msebera.android.httpclient.impl.client.cache.BasicHttpCacheStorage r1 = new cz.msebera.android.httpclient.impl.client.cache.BasicHttpCacheStorage
            r1.<init>(r3)
            r2.<init>(r0, r1, r3)
            return
    }

    static cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator access$000(cz.msebera.android.httpclient.impl.client.cache.BasicHttpCache r0) {
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r0 = r0.uriExtractor
            return r0
    }

    private void addVariantWithEtag(java.lang.String r4, java.lang.String r5, java.util.Map<java.lang.String, cz.msebera.android.httpclient.impl.client.cache.Variant> r6) throws java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.client.cache.HttpCacheStorage r0 = r3.storage
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r0 = r0.getEntry(r5)
            if (r0 != 0) goto L9
            return
        L9:
            java.lang.String r1 = "ETag"
            cz.msebera.android.httpclient.Header r1 = r0.getFirstHeader(r1)
            if (r1 != 0) goto L12
            return
        L12:
            java.lang.String r1 = r1.getValue()
            cz.msebera.android.httpclient.impl.client.cache.Variant r2 = new cz.msebera.android.httpclient.impl.client.cache.Variant
            r2.<init>(r4, r5, r0)
            r6.put(r1, r2)
            return
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse cacheAndReturnResponse(cz.msebera.android.httpclient.HttpHost r7, cz.msebera.android.httpclient.HttpRequest r8, cz.msebera.android.httpclient.HttpResponse r9, java.util.Date r10, java.util.Date r11) throws java.io.IOException {
            r6 = this;
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r3 = cz.msebera.android.httpclient.impl.client.cache.Proxies.enhanceResponse(r9)
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r10
            r5 = r11
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r7 = r0.cacheAndReturnResponse(r1, r2, r3, r4, r5)
            return r7
    }

    @Override
    public cz.msebera.android.httpclient.client.methods.CloseableHttpResponse cacheAndReturnResponse(cz.msebera.android.httpclient.HttpHost r10, cz.msebera.android.httpclient.HttpRequest r11, cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r12, java.util.Date r13, java.util.Date r14) throws java.io.IOException {
            r9 = this;
            cz.msebera.android.httpclient.impl.client.cache.SizeLimitedResponseReader r0 = r9.getResponseReader(r11, r12)
            r1 = 1
            r0.readResponse()     // Catch: java.lang.Throwable -> L4f
            boolean r2 = r0.isLimitReached()     // Catch: java.lang.Throwable -> L4f
            if (r2 == 0) goto L14
            r1 = 0
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r10 = r0.getReconstructedResponse()     // Catch: java.lang.Throwable -> L4f
            return r10
        L14:
            cz.msebera.android.httpclient.client.cache.Resource r7 = r0.getResource()     // Catch: java.lang.Throwable -> L4f
            boolean r0 = r9.isIncompleteResponse(r12, r7)     // Catch: java.lang.Throwable -> L4f
            if (r0 == 0) goto L26
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r10 = r9.generateIncompleteResponseError(r12, r7)     // Catch: java.lang.Throwable -> L4f
            r12.close()
            return r10
        L26:
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r0 = new cz.msebera.android.httpclient.client.cache.HttpCacheEntry     // Catch: java.lang.Throwable -> L4f
            cz.msebera.android.httpclient.StatusLine r5 = r12.getStatusLine()     // Catch: java.lang.Throwable -> L4f
            cz.msebera.android.httpclient.Header[] r6 = r12.getAllHeaders()     // Catch: java.lang.Throwable -> L4f
            cz.msebera.android.httpclient.RequestLine r2 = r11.getRequestLine()     // Catch: java.lang.Throwable -> L4f
            java.lang.String r8 = r2.getMethod()     // Catch: java.lang.Throwable -> L4f
            r2 = r0
            r3 = r13
            r4 = r14
            r2.<init>(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L4f
            r9.storeInCache(r10, r11, r0)     // Catch: java.lang.Throwable -> L4f
            cz.msebera.android.httpclient.impl.client.cache.CachedHttpResponseGenerator r13 = r9.responseGenerator     // Catch: java.lang.Throwable -> L4f
            cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r10 = cz.msebera.android.httpclient.client.methods.HttpRequestWrapper.wrap(r11, r10)     // Catch: java.lang.Throwable -> L4f
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r10 = r13.generateResponse(r10, r0)     // Catch: java.lang.Throwable -> L4f
            r12.close()
            return r10
        L4f:
            r10 = move-exception
            if (r1 == 0) goto L55
            r12.close()
        L55:
            throw r10
    }

    cz.msebera.android.httpclient.client.cache.HttpCacheEntry doGetUpdatedParentEntry(java.lang.String r9, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r10, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r11, java.lang.String r12, java.lang.String r13) throws java.io.IOException {
            r8 = this;
            if (r10 != 0) goto L3
            r10 = r11
        L3:
            r11 = 0
            cz.msebera.android.httpclient.client.cache.Resource r0 = r10.getResource()
            if (r0 == 0) goto L14
            cz.msebera.android.httpclient.client.cache.ResourceFactory r11 = r8.resourceFactory
            cz.msebera.android.httpclient.client.cache.Resource r0 = r10.getResource()
            cz.msebera.android.httpclient.client.cache.Resource r11 = r11.copy(r9, r0)
        L14:
            r5 = r11
            java.util.HashMap r6 = new java.util.HashMap
            java.util.Map r9 = r10.getVariantMap()
            r6.<init>(r9)
            r6.put(r12, r13)
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r9 = new cz.msebera.android.httpclient.client.cache.HttpCacheEntry
            java.util.Date r1 = r10.getRequestDate()
            java.util.Date r2 = r10.getResponseDate()
            cz.msebera.android.httpclient.StatusLine r3 = r10.getStatusLine()
            cz.msebera.android.httpclient.Header[] r4 = r10.getAllHeaders()
            java.lang.String r7 = r10.getRequestMethod()
            r0 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r9
    }

    @Override
    public void flushCacheEntriesFor(cz.msebera.android.httpclient.HttpHost r3, cz.msebera.android.httpclient.HttpRequest r4) throws java.io.IOException {
            r2 = this;
            java.util.Set<java.lang.String> r0 = cz.msebera.android.httpclient.impl.client.cache.BasicHttpCache.safeRequestMethods
            cz.msebera.android.httpclient.RequestLine r1 = r4.getRequestLine()
            java.lang.String r1 = r1.getMethod()
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L1b
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r0 = r2.uriExtractor
            java.lang.String r3 = r0.getURI(r3, r4)
            cz.msebera.android.httpclient.client.cache.HttpCacheStorage r4 = r2.storage
            r4.removeEntry(r3)
        L1b:
            return
    }

    @Override
    public void flushInvalidatedCacheEntriesFor(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.HttpRequest r3) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.client.cache.HttpCacheInvalidator r0 = r1.cacheInvalidator
            r0.flushInvalidatedCacheEntries(r2, r3)
            return
    }

    @Override
    public void flushInvalidatedCacheEntriesFor(cz.msebera.android.httpclient.HttpHost r3, cz.msebera.android.httpclient.HttpRequest r4, cz.msebera.android.httpclient.HttpResponse r5) {
            r2 = this;
            java.util.Set<java.lang.String> r0 = cz.msebera.android.httpclient.impl.client.cache.BasicHttpCache.safeRequestMethods
            cz.msebera.android.httpclient.RequestLine r1 = r4.getRequestLine()
            java.lang.String r1 = r1.getMethod()
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L15
            cz.msebera.android.httpclient.client.cache.HttpCacheInvalidator r0 = r2.cacheInvalidator
            r0.flushInvalidatedCacheEntries(r3, r4, r5)
        L15:
            return
    }

    cz.msebera.android.httpclient.client.methods.CloseableHttpResponse generateIncompleteResponseError(cz.msebera.android.httpclient.HttpResponse r6, cz.msebera.android.httpclient.client.cache.Resource r7) {
            r5 = this;
            java.lang.String r0 = "Content-Length"
            cz.msebera.android.httpclient.Header r6 = r6.getFirstHeader(r0)
            java.lang.String r6 = r6.getValue()
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            cz.msebera.android.httpclient.message.BasicHttpResponse r1 = new cz.msebera.android.httpclient.message.BasicHttpResponse
            cz.msebera.android.httpclient.HttpVersion r2 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            r3 = 502(0x1f6, float:7.03E-43)
            java.lang.String r4 = "Bad Gateway"
            r1.<init>(r2, r3, r4)
            java.lang.String r2 = "Content-Type"
            java.lang.String r3 = "text/plain;charset=UTF-8"
            r1.setHeader(r2, r3)
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r6
            long r6 = r7.length()
            java.lang.Long r6 = java.lang.Long.valueOf(r6)
            r7 = 1
            r2[r7] = r6
            java.lang.String r6 = "Received incomplete response with Content-Length %d but actual body length %d"
            java.lang.String r6 = java.lang.String.format(r6, r2)
            byte[] r6 = r6.getBytes()
            int r7 = r6.length
            java.lang.String r7 = java.lang.Integer.toString(r7)
            r1.setHeader(r0, r7)
            cz.msebera.android.httpclient.entity.ByteArrayEntity r7 = new cz.msebera.android.httpclient.entity.ByteArrayEntity
            r7.<init>(r6)
            r1.setEntity(r7)
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r6 = cz.msebera.android.httpclient.impl.client.cache.Proxies.enhanceResponse(r1)
            return r6
    }

    @Override
    public cz.msebera.android.httpclient.client.cache.HttpCacheEntry getCacheEntry(cz.msebera.android.httpclient.HttpHost r4, cz.msebera.android.httpclient.HttpRequest r5) throws java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.client.cache.HttpCacheStorage r0 = r3.storage
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r1 = r3.uriExtractor
            java.lang.String r4 = r1.getURI(r4, r5)
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r4 = r0.getEntry(r4)
            r0 = 0
            if (r4 != 0) goto L10
            return r0
        L10:
            boolean r1 = r4.hasVariants()
            if (r1 != 0) goto L17
            return r4
        L17:
            java.util.Map r1 = r4.getVariantMap()
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r2 = r3.uriExtractor
            java.lang.String r4 = r2.getVariantKey(r5, r4)
            java.lang.Object r4 = r1.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            if (r4 != 0) goto L2a
            return r0
        L2a:
            cz.msebera.android.httpclient.client.cache.HttpCacheStorage r5 = r3.storage
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r4 = r5.getEntry(r4)
            return r4
    }

    cz.msebera.android.httpclient.impl.client.cache.SizeLimitedResponseReader getResponseReader(cz.msebera.android.httpclient.HttpRequest r8, cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r9) {
            r7 = this;
            cz.msebera.android.httpclient.impl.client.cache.SizeLimitedResponseReader r6 = new cz.msebera.android.httpclient.impl.client.cache.SizeLimitedResponseReader
            cz.msebera.android.httpclient.client.cache.ResourceFactory r1 = r7.resourceFactory
            long r2 = r7.maxObjectSizeBytes
            r0 = r6
            r4 = r8
            r5 = r9
            r0.<init>(r1, r2, r4, r5)
            return r6
    }

    @Override
    public java.util.Map<java.lang.String, cz.msebera.android.httpclient.impl.client.cache.Variant> getVariantCacheEntriesWithEtags(cz.msebera.android.httpclient.HttpHost r4, cz.msebera.android.httpclient.HttpRequest r5) throws java.io.IOException {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            cz.msebera.android.httpclient.client.cache.HttpCacheStorage r1 = r3.storage
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r2 = r3.uriExtractor
            java.lang.String r4 = r2.getURI(r4, r5)
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r4 = r1.getEntry(r4)
            if (r4 == 0) goto L42
            boolean r5 = r4.hasVariants()
            if (r5 != 0) goto L1a
            goto L42
        L1a:
            java.util.Map r4 = r4.getVariantMap()
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L26:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L42
            java.lang.Object r5 = r4.next()
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5
            java.lang.Object r1 = r5.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r5 = r5.getValue()
            java.lang.String r5 = (java.lang.String) r5
            r3.addVariantWithEtag(r1, r5, r0)
            goto L26
        L42:
            return r0
    }

    boolean isIncompleteResponse(cz.msebera.android.httpclient.HttpResponse r5, cz.msebera.android.httpclient.client.cache.Resource r6) {
            r4 = this;
            cz.msebera.android.httpclient.StatusLine r0 = r5.getStatusLine()
            int r0 = r0.getStatusCode()
            r1 = 0
            r2 = 200(0xc8, float:2.8E-43)
            if (r0 == r2) goto L12
            r2 = 206(0xce, float:2.89E-43)
            if (r0 == r2) goto L12
            return r1
        L12:
            java.lang.String r0 = "Content-Length"
            cz.msebera.android.httpclient.Header r5 = r5.getFirstHeader(r0)
            if (r5 != 0) goto L1b
            return r1
        L1b:
            java.lang.String r5 = r5.getValue()     // Catch: java.lang.NumberFormatException -> L30
            int r5 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.NumberFormatException -> L30
            if (r6 != 0) goto L26
            return r1
        L26:
            long r2 = r6.length()
            long r5 = (long) r5
            int r0 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r0 >= 0) goto L30
            r1 = 1
        L30:
            return r1
    }

    @Override
    public void reuseVariantEntryFor(cz.msebera.android.httpclient.HttpHost r7, cz.msebera.android.httpclient.HttpRequest r8, cz.msebera.android.httpclient.impl.client.cache.Variant r9) throws java.io.IOException {
            r6 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r0 = r6.uriExtractor
            java.lang.String r7 = r0.getURI(r7, r8)
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3 = r9.getEntry()
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r0 = r6.uriExtractor
            java.lang.String r4 = r0.getVariantKey(r8, r3)
            java.lang.String r5 = r9.getCacheKey()
            cz.msebera.android.httpclient.impl.client.cache.BasicHttpCache$2 r9 = new cz.msebera.android.httpclient.impl.client.cache.BasicHttpCache$2
            r0 = r9
            r1 = r6
            r2 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            cz.msebera.android.httpclient.client.cache.HttpCacheStorage r8 = r6.storage     // Catch: cz.msebera.android.httpclient.client.cache.HttpCacheUpdateException -> L22
            r8.updateEntry(r7, r9)     // Catch: cz.msebera.android.httpclient.client.cache.HttpCacheUpdateException -> L22
            goto L3e
        L22:
            r8 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r9 = r6.log
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Could not update key ["
            r0.append(r1)
            r0.append(r7)
            java.lang.String r7 = "]"
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            r9.warn(r7, r8)
        L3e:
            return
    }

    void storeInCache(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r4) throws java.io.IOException {
            r1 = this;
            boolean r0 = r4.hasVariants()
            if (r0 == 0) goto La
            r1.storeVariantEntry(r2, r3, r4)
            goto Ld
        La:
            r1.storeNonVariantEntry(r2, r3, r4)
        Ld:
            return
    }

    void storeNonVariantEntry(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r4) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r0 = r1.uriExtractor
            java.lang.String r2 = r0.getURI(r2, r3)
            cz.msebera.android.httpclient.client.cache.HttpCacheStorage r3 = r1.storage
            r3.putEntry(r2, r4)
            return
    }

    void storeVariantEntry(cz.msebera.android.httpclient.HttpHost r3, cz.msebera.android.httpclient.HttpRequest r4, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r5) throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r0 = r2.uriExtractor
            java.lang.String r0 = r0.getURI(r3, r4)
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r1 = r2.uriExtractor
            java.lang.String r3 = r1.getVariantURI(r3, r4, r5)
            cz.msebera.android.httpclient.client.cache.HttpCacheStorage r1 = r2.storage
            r1.putEntry(r3, r5)
            cz.msebera.android.httpclient.impl.client.cache.BasicHttpCache$1 r1 = new cz.msebera.android.httpclient.impl.client.cache.BasicHttpCache$1
            r1.<init>(r2, r4, r5, r3)
            cz.msebera.android.httpclient.client.cache.HttpCacheStorage r3 = r2.storage     // Catch: cz.msebera.android.httpclient.client.cache.HttpCacheUpdateException -> L1c
            r3.updateEntry(r0, r1)     // Catch: cz.msebera.android.httpclient.client.cache.HttpCacheUpdateException -> L1c
            goto L38
        L1c:
            r3 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r2.log
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "Could not update key ["
            r5.append(r1)
            r5.append(r0)
            java.lang.String r0 = "]"
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            r4.warn(r5, r3)
        L38:
            return
    }

    @Override
    public cz.msebera.android.httpclient.client.cache.HttpCacheEntry updateCacheEntry(cz.msebera.android.httpclient.HttpHost r7, cz.msebera.android.httpclient.HttpRequest r8, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r9, cz.msebera.android.httpclient.HttpResponse r10, java.util.Date r11, java.util.Date r12) throws java.io.IOException {
            r6 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheEntryUpdater r0 = r6.cacheEntryUpdater
            cz.msebera.android.httpclient.RequestLine r1 = r8.getRequestLine()
            java.lang.String r1 = r1.getUri()
            r2 = r9
            r3 = r11
            r4 = r12
            r5 = r10
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r9 = r0.updateCacheEntry(r1, r2, r3, r4, r5)
            r6.storeInCache(r7, r8, r9)
            return r9
    }

    @Override
    public cz.msebera.android.httpclient.client.cache.HttpCacheEntry updateVariantCacheEntry(cz.msebera.android.httpclient.HttpHost r7, cz.msebera.android.httpclient.HttpRequest r8, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r9, cz.msebera.android.httpclient.HttpResponse r10, java.util.Date r11, java.util.Date r12, java.lang.String r13) throws java.io.IOException {
            r6 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheEntryUpdater r0 = r6.cacheEntryUpdater
            cz.msebera.android.httpclient.RequestLine r7 = r8.getRequestLine()
            java.lang.String r1 = r7.getUri()
            r2 = r9
            r3 = r11
            r4 = r12
            r5 = r10
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r7 = r0.updateCacheEntry(r1, r2, r3, r4, r5)
            cz.msebera.android.httpclient.client.cache.HttpCacheStorage r8 = r6.storage
            r8.putEntry(r13, r7)
            return r7
    }
}
