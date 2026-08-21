package com.kwad.sdk.core.imageloader.cache.memory;

public interface MemoryCache {
    void clear();

    com.kwad.sdk.core.imageloader.core.decode.DecodedResult get(java.lang.String r1);

    java.util.Collection<java.lang.String> keys();

    boolean put(java.lang.String r1, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2);

    com.kwad.sdk.core.imageloader.core.decode.DecodedResult remove(java.lang.String r1);
}
