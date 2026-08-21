package cz.msebera.android.httpclient.client.cache;

public interface HttpCacheEntrySerializer {
    cz.msebera.android.httpclient.client.cache.HttpCacheEntry readFrom(java.io.InputStream r1) throws java.io.IOException;

    void writeTo(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r1, java.io.OutputStream r2) throws java.io.IOException;
}
