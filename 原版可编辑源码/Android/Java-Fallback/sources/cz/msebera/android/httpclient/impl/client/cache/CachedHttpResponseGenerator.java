package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
class CachedHttpResponseGenerator {
    private final cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy validityStrategy;

    CachedHttpResponseGenerator() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r0 = new cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy
            r0.<init>()
            r1.<init>(r0)
            return
    }

    CachedHttpResponseGenerator(cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r1) {
            r0 = this;
            r0.<init>()
            r0.validityStrategy = r1
            return
    }

    private void addMissingContentLengthHeader(cz.msebera.android.httpclient.HttpResponse r5, cz.msebera.android.httpclient.HttpEntity r6) {
            r4 = this;
            boolean r0 = r4.transferEncodingIsPresent(r5)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.String r0 = "Content-Length"
            cz.msebera.android.httpclient.Header r1 = r5.getFirstHeader(r0)
            if (r1 != 0) goto L1f
            cz.msebera.android.httpclient.message.BasicHeader r1 = new cz.msebera.android.httpclient.message.BasicHeader
            long r2 = r6.getContentLength()
            java.lang.String r6 = java.lang.Long.toString(r2)
            r1.<init>(r0, r6)
            r5.setHeader(r1)
        L1f:
            return
    }

    private boolean responseShouldContainEntity(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r2, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3) {
            r1 = this;
            cz.msebera.android.httpclient.RequestLine r2 = r2.getRequestLine()
            java.lang.String r2 = r2.getMethod()
            java.lang.String r0 = "GET"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L18
            cz.msebera.android.httpclient.client.cache.Resource r2 = r3.getResource()
            if (r2 == 0) goto L18
            r2 = 1
            goto L19
        L18:
            r2 = 0
        L19:
            return r2
    }

    private boolean transferEncodingIsPresent(cz.msebera.android.httpclient.HttpResponse r2) {
            r1 = this;
            java.lang.String r0 = "Transfer-Encoding"
            cz.msebera.android.httpclient.Header r2 = r2.getFirstHeader(r0)
            if (r2 == 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    cz.msebera.android.httpclient.client.methods.CloseableHttpResponse generateNotModifiedResponse(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r5) {
            r4 = this;
            cz.msebera.android.httpclient.message.BasicHttpResponse r0 = new cz.msebera.android.httpclient.message.BasicHttpResponse
            cz.msebera.android.httpclient.HttpVersion r1 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            r2 = 304(0x130, float:4.26E-43)
            java.lang.String r3 = "Not Modified"
            r0.<init>(r1, r2, r3)
            java.lang.String r1 = "Date"
            cz.msebera.android.httpclient.Header r2 = r5.getFirstHeader(r1)
            if (r2 != 0) goto L21
            cz.msebera.android.httpclient.message.BasicHeader r2 = new cz.msebera.android.httpclient.message.BasicHeader
            java.util.Date r3 = new java.util.Date
            r3.<init>()
            java.lang.String r3 = cz.msebera.android.httpclient.client.utils.DateUtils.formatDate(r3)
            r2.<init>(r1, r3)
        L21:
            r0.addHeader(r2)
            java.lang.String r1 = "ETag"
            cz.msebera.android.httpclient.Header r1 = r5.getFirstHeader(r1)
            if (r1 == 0) goto L2f
            r0.addHeader(r1)
        L2f:
            java.lang.String r1 = "Content-Location"
            cz.msebera.android.httpclient.Header r1 = r5.getFirstHeader(r1)
            if (r1 == 0) goto L3a
            r0.addHeader(r1)
        L3a:
            java.lang.String r1 = "Expires"
            cz.msebera.android.httpclient.Header r1 = r5.getFirstHeader(r1)
            if (r1 == 0) goto L45
            r0.addHeader(r1)
        L45:
            java.lang.String r1 = "Cache-Control"
            cz.msebera.android.httpclient.Header r1 = r5.getFirstHeader(r1)
            if (r1 == 0) goto L50
            r0.addHeader(r1)
        L50:
            java.lang.String r1 = "Vary"
            cz.msebera.android.httpclient.Header r5 = r5.getFirstHeader(r1)
            if (r5 == 0) goto L5b
            r0.addHeader(r5)
        L5b:
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r5 = cz.msebera.android.httpclient.impl.client.cache.Proxies.enhanceResponse(r0)
            return r5
    }

    cz.msebera.android.httpclient.client.methods.CloseableHttpResponse generateResponse(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r6, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r7) {
            r5 = this;
            java.util.Date r0 = new java.util.Date
            r0.<init>()
            cz.msebera.android.httpclient.message.BasicHttpResponse r1 = new cz.msebera.android.httpclient.message.BasicHttpResponse
            cz.msebera.android.httpclient.HttpVersion r2 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            int r3 = r7.getStatusCode()
            java.lang.String r4 = r7.getReasonPhrase()
            r1.<init>(r2, r3, r4)
            cz.msebera.android.httpclient.Header[] r2 = r7.getAllHeaders()
            r1.setHeaders(r2)
            boolean r6 = r5.responseShouldContainEntity(r6, r7)
            if (r6 == 0) goto L2c
            cz.msebera.android.httpclient.impl.client.cache.CacheEntity r6 = new cz.msebera.android.httpclient.impl.client.cache.CacheEntity
            r6.<init>(r7)
            r5.addMissingContentLengthHeader(r1, r6)
            r1.setEntity(r6)
        L2c:
            cz.msebera.android.httpclient.impl.client.cache.CacheValidityPolicy r6 = r5.validityStrategy
            long r6 = r6.getCurrentAgeSecs(r7, r0)
            r2 = 0
            int r0 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r0 <= 0) goto L5c
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            java.lang.String r0 = "Age"
            int r4 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r4 < 0) goto L47
            java.lang.String r6 = "2147483648"
            r1.setHeader(r0, r6)
            goto L5c
        L47:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = ""
            r2.append(r3)
            int r7 = (int) r6
            r2.append(r7)
            java.lang.String r6 = r2.toString()
            r1.setHeader(r0, r6)
        L5c:
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r6 = cz.msebera.android.httpclient.impl.client.cache.Proxies.enhanceResponse(r1)
            return r6
    }
}
