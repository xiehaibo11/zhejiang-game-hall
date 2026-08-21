package com.kwad.sdk.core.imageloader.cache.memory.impl;

public class WeakMemoryCache extends com.kwad.sdk.core.imageloader.cache.memory.BaseMemoryCache {
    public WeakMemoryCache() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.ref.Reference<com.kwad.sdk.core.imageloader.core.decode.DecodedResult> createReference(com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2) {
            r1 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            return r0
    }
}
