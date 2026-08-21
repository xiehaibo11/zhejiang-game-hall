package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
public class CachingHttpClients {
    private CachingHttpClients() {
            r0 = this;
            r0.<init>()
            return
    }

    public static cz.msebera.android.httpclient.impl.client.CloseableHttpClient createFileBound(java.io.File r1) {
            cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder r0 = cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder.create()
            cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder r1 = r0.setCacheDir(r1)
            cz.msebera.android.httpclient.impl.client.CloseableHttpClient r1 = r1.build()
            return r1
    }

    public static cz.msebera.android.httpclient.impl.client.CloseableHttpClient createMemoryBound() {
            cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder r0 = cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder.create()
            cz.msebera.android.httpclient.impl.client.CloseableHttpClient r0 = r0.build()
            return r0
    }

    public static cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder custom() {
            cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder r0 = cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder.create()
            return r0
    }
}
