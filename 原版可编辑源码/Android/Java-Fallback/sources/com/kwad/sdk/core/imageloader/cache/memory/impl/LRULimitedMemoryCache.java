package com.kwad.sdk.core.imageloader.cache.memory.impl;

public class LRULimitedMemoryCache extends com.kwad.sdk.core.imageloader.cache.memory.LimitedMemoryCache {
    private static final int INITIAL_CAPACITY = 10;
    private static final float LOAD_FACTOR = 1.1f;
    private final java.util.Map<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> lruCache;

    public LRULimitedMemoryCache(int r4) {
            r3 = this;
            r3.<init>(r4)
            java.util.LinkedHashMap r4 = new java.util.LinkedHashMap
            r0 = 10
            r1 = 1066192077(0x3f8ccccd, float:1.1)
            r2 = 1
            r4.<init>(r0, r1, r2)
            java.util.Map r4 = java.util.Collections.synchronizedMap(r4)
            r3.lruCache = r4
            return
    }

    @Override
    public void clear() {
            r1 = this;
            java.util.Map<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r0 = r1.lruCache
            r0.clear()
            super.clear()
            return
    }

    @Override
    public java.lang.ref.Reference<com.kwad.sdk.core.imageloader.core.decode.DecodedResult> createReference(com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2) {
            r1 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            return r0
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.decode.DecodedResult get(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r0 = r1.lruCache
            r0.get(r2)
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2 = super.get(r2)
            return r2
    }

    @Override
    public int getSize(com.kwad.sdk.core.imageloader.core.decode.DecodedResult r1) {
            r0 = this;
            int r1 = r1.getByteSize()
            return r1
    }

    @Override
    public boolean put(java.lang.String r2, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3) {
            r1 = this;
            boolean r0 = super.put(r2, r3)
            if (r0 == 0) goto Ld
            java.util.Map<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r0 = r1.lruCache
            r0.put(r2, r3)
            r2 = 1
            return r2
        Ld:
            r2 = 0
            return r2
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.decode.DecodedResult remove(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r0 = r1.lruCache
            r0.remove(r2)
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2 = super.remove(r2)
            return r2
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.decode.DecodedResult removeNext() {
            r3 = this;
            java.util.Map<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r0 = r3.lruCache
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r1 = r3.lruCache     // Catch: java.lang.Throwable -> L26
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L26
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L26
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L26
            if (r2 == 0) goto L23
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L26
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L26
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L26
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2 = (com.kwad.sdk.core.imageloader.core.decode.DecodedResult) r2     // Catch: java.lang.Throwable -> L26
            r1.remove()     // Catch: java.lang.Throwable -> L26
            goto L24
        L23:
            r2 = 0
        L24:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            return r2
        L26:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            throw r1
    }
}
