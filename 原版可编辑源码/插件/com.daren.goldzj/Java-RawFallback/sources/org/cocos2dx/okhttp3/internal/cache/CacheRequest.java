package org.cocos2dx.okhttp3.internal.cache;

public interface CacheRequest {
    void abort();

    org.cocos2dx.okio.Sink body() throws java.io.IOException;
}
