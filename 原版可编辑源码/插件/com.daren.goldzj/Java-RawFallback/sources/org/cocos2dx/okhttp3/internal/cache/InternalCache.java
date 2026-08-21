package org.cocos2dx.okhttp3.internal.cache;

public interface InternalCache {
    org.cocos2dx.okhttp3.Response get(org.cocos2dx.okhttp3.Request r1) throws java.io.IOException;

    org.cocos2dx.okhttp3.internal.cache.CacheRequest put(org.cocos2dx.okhttp3.Response r1) throws java.io.IOException;

    void remove(org.cocos2dx.okhttp3.Request r1) throws java.io.IOException;

    void trackConditionalCacheHit();

    void trackResponse(org.cocos2dx.okhttp3.internal.cache.CacheStrategy r1);

    void update(org.cocos2dx.okhttp3.Response r1, org.cocos2dx.okhttp3.Response r2);
}
