package com.mbridge.msdk.thrid.okhttp.internal.cache;

public interface InternalCache {
    com.mbridge.msdk.thrid.okhttp.Response get(com.mbridge.msdk.thrid.okhttp.Request r1) throws java.io.IOException;

    com.mbridge.msdk.thrid.okhttp.internal.cache.CacheRequest put(com.mbridge.msdk.thrid.okhttp.Response r1) throws java.io.IOException;

    void remove(com.mbridge.msdk.thrid.okhttp.Request r1) throws java.io.IOException;

    void trackConditionalCacheHit();

    void trackResponse(com.mbridge.msdk.thrid.okhttp.internal.cache.CacheStrategy r1);

    void update(com.mbridge.msdk.thrid.okhttp.Response r1, com.mbridge.msdk.thrid.okhttp.Response r2);
}
