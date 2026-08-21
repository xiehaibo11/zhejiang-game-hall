package org.cocos2dx.okhttp3.internal.cache;

import java.io.IOException;
import org.cocos2dx.okhttp3.Request;
import org.cocos2dx.okhttp3.Response;

public interface InternalCache {
    Response get(Request r1) throws IOException;

    CacheRequest put(Response r1) throws IOException;

    void remove(Request r1) throws IOException;

    void trackConditionalCacheHit();

    void trackResponse(CacheStrategy r1);

    void update(Response r1, Response r2);
}
