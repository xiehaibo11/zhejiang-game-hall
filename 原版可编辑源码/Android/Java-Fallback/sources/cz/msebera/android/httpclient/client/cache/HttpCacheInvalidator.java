package cz.msebera.android.httpclient.client.cache;

public interface HttpCacheInvalidator {
    void flushInvalidatedCacheEntries(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2);

    void flushInvalidatedCacheEntries(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.HttpResponse r3);
}
