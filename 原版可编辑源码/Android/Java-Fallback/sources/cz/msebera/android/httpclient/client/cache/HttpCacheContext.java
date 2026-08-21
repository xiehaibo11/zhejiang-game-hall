package cz.msebera.android.httpclient.client.cache;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class HttpCacheContext extends cz.msebera.android.httpclient.client.protocol.HttpClientContext {
    public static final java.lang.String CACHE_RESPONSE_STATUS = "http.cache.response.status";

    public HttpCacheContext() {
            r0 = this;
            r0.<init>()
            return
    }

    public HttpCacheContext(cz.msebera.android.httpclient.protocol.HttpContext r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static cz.msebera.android.httpclient.client.cache.HttpCacheContext adapt(cz.msebera.android.httpclient.protocol.HttpContext r1) {
            boolean r0 = r1 instanceof cz.msebera.android.httpclient.client.cache.HttpCacheContext
            if (r0 == 0) goto L7
            cz.msebera.android.httpclient.client.cache.HttpCacheContext r1 = (cz.msebera.android.httpclient.client.cache.HttpCacheContext) r1
            return r1
        L7:
            cz.msebera.android.httpclient.client.cache.HttpCacheContext r0 = new cz.msebera.android.httpclient.client.cache.HttpCacheContext
            r0.<init>(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.client.cache.HttpCacheContext create() {
            cz.msebera.android.httpclient.client.cache.HttpCacheContext r0 = new cz.msebera.android.httpclient.client.cache.HttpCacheContext
            cz.msebera.android.httpclient.protocol.BasicHttpContext r1 = new cz.msebera.android.httpclient.protocol.BasicHttpContext
            r1.<init>()
            r0.<init>(r1)
            return r0
    }

    public cz.msebera.android.httpclient.client.cache.CacheResponseStatus getCacheResponseStatus() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.client.cache.CacheResponseStatus> r0 = cz.msebera.android.httpclient.client.cache.CacheResponseStatus.class
            java.lang.String r1 = "http.cache.response.status"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r0 = (cz.msebera.android.httpclient.client.cache.CacheResponseStatus) r0
            return r0
    }
}
