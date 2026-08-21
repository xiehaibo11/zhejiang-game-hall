package cz.msebera.android.httpclient.client.cache;

public interface HttpCacheStorage {
    cz.msebera.android.httpclient.client.cache.HttpCacheEntry getEntry(java.lang.String r1) throws java.io.IOException;

    void putEntry(java.lang.String r1, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2) throws java.io.IOException;

    void removeEntry(java.lang.String r1) throws java.io.IOException;

    void updateEntry(java.lang.String r1, cz.msebera.android.httpclient.client.cache.HttpCacheUpdateCallback r2) throws java.io.IOException, cz.msebera.android.httpclient.client.cache.HttpCacheUpdateException;
}
