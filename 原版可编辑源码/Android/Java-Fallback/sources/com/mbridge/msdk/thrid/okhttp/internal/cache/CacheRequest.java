package com.mbridge.msdk.thrid.okhttp.internal.cache;

public interface CacheRequest {
    void abort();

    com.mbridge.msdk.thrid.okio.Sink body() throws java.io.IOException;
}
