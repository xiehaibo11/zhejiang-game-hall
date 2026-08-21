package cz.msebera.android.httpclient.impl.client.cache;

interface HttpCache {
    cz.msebera.android.httpclient.HttpResponse cacheAndReturnResponse(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.HttpResponse r3, java.util.Date r4, java.util.Date r5) throws java.io.IOException;

    cz.msebera.android.httpclient.client.methods.CloseableHttpResponse cacheAndReturnResponse(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r3, java.util.Date r4, java.util.Date r5) throws java.io.IOException;

    void flushCacheEntriesFor(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2) throws java.io.IOException;

    void flushInvalidatedCacheEntriesFor(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2) throws java.io.IOException;

    void flushInvalidatedCacheEntriesFor(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.HttpResponse r3);

    cz.msebera.android.httpclient.client.cache.HttpCacheEntry getCacheEntry(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2) throws java.io.IOException;

    java.util.Map<java.lang.String, cz.msebera.android.httpclient.impl.client.cache.Variant> getVariantCacheEntriesWithEtags(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2) throws java.io.IOException;

    void reuseVariantEntryFor(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.impl.client.cache.Variant r3) throws java.io.IOException;

    cz.msebera.android.httpclient.client.cache.HttpCacheEntry updateCacheEntry(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3, cz.msebera.android.httpclient.HttpResponse r4, java.util.Date r5, java.util.Date r6) throws java.io.IOException;

    cz.msebera.android.httpclient.client.cache.HttpCacheEntry updateVariantCacheEntry(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3, cz.msebera.android.httpclient.HttpResponse r4, java.util.Date r5, java.util.Date r6, java.lang.String r7) throws java.io.IOException;
}
