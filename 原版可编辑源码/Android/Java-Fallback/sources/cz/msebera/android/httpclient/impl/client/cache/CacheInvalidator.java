package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
class CacheInvalidator implements cz.msebera.android.httpclient.client.cache.HttpCacheInvalidator {
    private final cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator cacheKeyGenerator;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.client.cache.HttpCacheStorage storage;

    public CacheInvalidator(cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r3, cz.msebera.android.httpclient.client.cache.HttpCacheStorage r4) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            r2.cacheKeyGenerator = r3
            r2.storage = r4
            return
    }

    private void flushEntry(java.lang.String r3) {
            r2 = this;
            cz.msebera.android.httpclient.client.cache.HttpCacheStorage r0 = r2.storage     // Catch: java.io.IOException -> L6
            r0.removeEntry(r3)     // Catch: java.io.IOException -> L6
            goto Le
        L6:
            r3 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r2.log
            java.lang.String r1 = "unable to flush cache entry"
            r0.warn(r1, r3)
        Le:
            return
    }

    private void flushLocationCacheEntry(java.net.URL r3, cz.msebera.android.httpclient.HttpResponse r4, java.net.URL r5) {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r0 = r2.cacheKeyGenerator
            java.lang.String r1 = r5.toString()
            java.lang.String r0 = r0.canonicalizeUri(r1)
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r0 = r2.getEntry(r0)
            if (r0 != 0) goto L11
            return
        L11:
            boolean r1 = r2.responseDateOlderThanEntryDate(r4, r0)
            if (r1 == 0) goto L18
            return
        L18:
            boolean r4 = r2.responseAndEntryEtagsDiffer(r4, r0)
            if (r4 != 0) goto L1f
            return
        L1f:
            r2.flushUriIfSameHost(r3, r5)
            return
    }

    private java.net.URL getAbsoluteURL(java.lang.String r2) {
            r1 = this;
            java.net.URL r0 = new java.net.URL     // Catch: java.net.MalformedURLException -> L6
            r0.<init>(r2)     // Catch: java.net.MalformedURLException -> L6
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    private java.net.URL getContentLocationURL(java.net.URL r2, cz.msebera.android.httpclient.HttpResponse r3) {
            r1 = this;
            java.lang.String r0 = "Content-Location"
            cz.msebera.android.httpclient.Header r3 = r3.getFirstHeader(r0)
            if (r3 != 0) goto La
            r2 = 0
            return r2
        La:
            java.lang.String r3 = r3.getValue()
            java.net.URL r0 = r1.getAbsoluteURL(r3)
            if (r0 == 0) goto L15
            return r0
        L15:
            java.net.URL r2 = r1.getRelativeURL(r2, r3)
            return r2
    }

    private cz.msebera.android.httpclient.client.cache.HttpCacheEntry getEntry(java.lang.String r3) {
            r2 = this;
            cz.msebera.android.httpclient.client.cache.HttpCacheStorage r0 = r2.storage     // Catch: java.io.IOException -> L7
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3 = r0.getEntry(r3)     // Catch: java.io.IOException -> L7
            return r3
        L7:
            r3 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r2.log
            java.lang.String r1 = "could not retrieve entry from storage"
            r0.warn(r1, r3)
            r3 = 0
            return r3
    }

    private java.net.URL getLocationURL(java.net.URL r2, cz.msebera.android.httpclient.HttpResponse r3) {
            r1 = this;
            java.lang.String r0 = "Location"
            cz.msebera.android.httpclient.Header r3 = r3.getFirstHeader(r0)
            if (r3 != 0) goto La
            r2 = 0
            return r2
        La:
            java.lang.String r3 = r3.getValue()
            java.net.URL r0 = r1.getAbsoluteURL(r3)
            if (r0 == 0) goto L15
            return r0
        L15:
            java.net.URL r2 = r1.getRelativeURL(r2, r3)
            return r2
    }

    private java.net.URL getRelativeURL(java.net.URL r2, java.lang.String r3) {
            r1 = this;
            java.net.URL r0 = new java.net.URL     // Catch: java.net.MalformedURLException -> L6
            r0.<init>(r2, r3)     // Catch: java.net.MalformedURLException -> L6
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    private boolean isAHeadCacheEntry(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2) {
            r1 = this;
            if (r2 == 0) goto L10
            java.lang.String r2 = r2.getRequestMethod()
            java.lang.String r0 = "HEAD"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L10
            r2 = 1
            goto L11
        L10:
            r2 = 0
        L11:
            return r2
    }

    private boolean notGetOrHeadRequest(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "GET"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L12
            java.lang.String r0 = "HEAD"
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto L12
            r2 = 1
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
    }

    private boolean requestIsGet(cz.msebera.android.httpclient.HttpRequest r2) {
            r1 = this;
            cz.msebera.android.httpclient.RequestLine r2 = r2.getRequestLine()
            java.lang.String r2 = r2.getMethod()
            java.lang.String r0 = "GET"
            boolean r2 = r2.equals(r0)
            return r2
    }

    private boolean responseAndEntryEtagsDiffer(cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3) {
            r1 = this;
            java.lang.String r0 = "ETag"
            cz.msebera.android.httpclient.Header r3 = r3.getFirstHeader(r0)
            cz.msebera.android.httpclient.Header r2 = r2.getFirstHeader(r0)
            if (r3 == 0) goto L1e
            if (r2 != 0) goto Lf
            goto L1e
        Lf:
            java.lang.String r3 = r3.getValue()
            java.lang.String r2 = r2.getValue()
            boolean r2 = r3.equals(r2)
            r2 = r2 ^ 1
            return r2
        L1e:
            r2 = 0
            return r2
    }

    private boolean responseDateOlderThanEntryDate(cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3) {
            r1 = this;
            java.lang.String r0 = "Date"
            cz.msebera.android.httpclient.Header r3 = r3.getFirstHeader(r0)
            cz.msebera.android.httpclient.Header r2 = r2.getFirstHeader(r0)
            r0 = 0
            if (r3 == 0) goto L2a
            if (r2 != 0) goto L10
            goto L2a
        L10:
            java.lang.String r3 = r3.getValue()
            java.util.Date r3 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r3)
            java.lang.String r2 = r2.getValue()
            java.util.Date r2 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r2)
            if (r3 == 0) goto L2a
            if (r2 != 0) goto L25
            goto L2a
        L25:
            boolean r2 = r2.before(r3)
            return r2
        L2a:
            return r0
    }

    private boolean shouldInvalidateHeadCacheEntry(cz.msebera.android.httpclient.HttpRequest r1, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2) {
            r0 = this;
            boolean r1 = r0.requestIsGet(r1)
            if (r1 == 0) goto Le
            boolean r1 = r0.isAHeadCacheEntry(r2)
            if (r1 == 0) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    protected boolean flushAbsoluteUriFromSameHost(java.net.URL r1, java.lang.String r2) {
            r0 = this;
            java.net.URL r2 = r0.getAbsoluteURL(r2)
            if (r2 != 0) goto L8
            r1 = 0
            return r1
        L8:
            r0.flushUriIfSameHost(r1, r2)
            r1 = 1
            return r1
    }

    @Override
    public void flushInvalidatedCacheEntries(cz.msebera.android.httpclient.HttpHost r5, cz.msebera.android.httpclient.HttpRequest r6) {
            r4 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r0 = r4.cacheKeyGenerator
            java.lang.String r5 = r0.getURI(r5, r6)
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r0 = r4.getEntry(r5)
            boolean r1 = r4.requestShouldNotBeCached(r6)
            if (r1 != 0) goto L16
            boolean r1 = r4.shouldInvalidateHeadCacheEntry(r6, r0)
            if (r1 == 0) goto L7f
        L16:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Invalidating parent cache entry: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r1.debug(r2)
            if (r0 == 0) goto L4d
            java.util.Map r0 = r0.getVariantMap()
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L3a:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L4a
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            r4.flushEntry(r1)
            goto L3a
        L4a:
            r4.flushEntry(r5)
        L4d:
            java.net.URL r5 = r4.getAbsoluteURL(r5)
            if (r5 != 0) goto L5b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r4.log
            java.lang.String r6 = "Couldn't transform request into valid URL"
            r5.error(r6)
            return
        L5b:
            java.lang.String r0 = "Content-Location"
            cz.msebera.android.httpclient.Header r0 = r6.getFirstHeader(r0)
            if (r0 == 0) goto L70
            java.lang.String r0 = r0.getValue()
            boolean r1 = r4.flushAbsoluteUriFromSameHost(r5, r0)
            if (r1 != 0) goto L70
            r4.flushRelativeUriFromSameHost(r5, r0)
        L70:
            java.lang.String r0 = "Location"
            cz.msebera.android.httpclient.Header r6 = r6.getFirstHeader(r0)
            if (r6 == 0) goto L7f
            java.lang.String r6 = r6.getValue()
            r4.flushAbsoluteUriFromSameHost(r5, r6)
        L7f:
            return
    }

    @Override
    public void flushInvalidatedCacheEntries(cz.msebera.android.httpclient.HttpHost r3, cz.msebera.android.httpclient.HttpRequest r4, cz.msebera.android.httpclient.HttpResponse r5) {
            r2 = this;
            cz.msebera.android.httpclient.StatusLine r0 = r5.getStatusLine()
            int r0 = r0.getStatusCode()
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 < r1) goto L30
            r1 = 299(0x12b, float:4.19E-43)
            if (r0 <= r1) goto L11
            goto L30
        L11:
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r0 = r2.cacheKeyGenerator
            java.lang.String r3 = r0.getURI(r3, r4)
            java.net.URL r3 = r2.getAbsoluteURL(r3)
            if (r3 != 0) goto L1e
            return
        L1e:
            java.net.URL r4 = r2.getContentLocationURL(r3, r5)
            if (r4 == 0) goto L27
            r2.flushLocationCacheEntry(r3, r5, r4)
        L27:
            java.net.URL r4 = r2.getLocationURL(r3, r5)
            if (r4 == 0) goto L30
            r2.flushLocationCacheEntry(r3, r5, r4)
        L30:
            return
    }

    protected void flushRelativeUriFromSameHost(java.net.URL r1, java.lang.String r2) {
            r0 = this;
            java.net.URL r2 = r0.getRelativeURL(r1, r2)
            if (r2 != 0) goto L7
            return
        L7:
            r0.flushUriIfSameHost(r1, r2)
            return
    }

    protected void flushUriIfSameHost(java.net.URL r2, java.net.URL r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r0 = r1.cacheKeyGenerator
            java.lang.String r3 = r3.toString()
            java.lang.String r3 = r0.canonicalizeUri(r3)
            java.net.URL r3 = r1.getAbsoluteURL(r3)
            if (r3 != 0) goto L11
            return
        L11:
            java.lang.String r0 = r3.getAuthority()
            java.lang.String r2 = r2.getAuthority()
            boolean r2 = r0.equalsIgnoreCase(r2)
            if (r2 == 0) goto L26
            java.lang.String r2 = r3.toString()
            r1.flushEntry(r2)
        L26:
            return
    }

    protected boolean requestShouldNotBeCached(cz.msebera.android.httpclient.HttpRequest r1) {
            r0 = this;
            cz.msebera.android.httpclient.RequestLine r1 = r1.getRequestLine()
            java.lang.String r1 = r1.getMethod()
            boolean r1 = r0.notGetOrHeadRequest(r1)
            return r1
    }
}
