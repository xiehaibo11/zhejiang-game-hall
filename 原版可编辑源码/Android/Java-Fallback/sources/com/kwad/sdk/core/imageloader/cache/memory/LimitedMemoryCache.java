package com.kwad.sdk.core.imageloader.cache.memory;

public abstract class LimitedMemoryCache extends com.kwad.sdk.core.imageloader.cache.memory.BaseMemoryCache {
    private static final int MAX_NORMAL_CACHE_SIZE = 16777216;
    private static final int MAX_NORMAL_CACHE_SIZE_IN_MB = 16;
    private final java.util.concurrent.atomic.AtomicInteger cacheSize;
    private final java.util.List<com.kwad.sdk.core.imageloader.core.decode.DecodedResult> hardCache;
    private final int sizeLimit;

    public LimitedMemoryCache(int r3) {
            r2 = this;
            r2.<init>()
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r2.hardCache = r0
            r2.sizeLimit = r3
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>()
            r2.cacheSize = r0
            r0 = 16777216(0x1000000, float:2.3509887E-38)
            if (r3 <= r0) goto L2c
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r0 = 0
            r1 = 16
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r3[r0] = r1
            java.lang.String r0 = "You set too large memory cache size (more than %1$d Mb)"
            com.kwad.sdk.core.imageloader.utils.L.w(r0, r3)
        L2c:
            return
    }

    @Override
    public void clear() {
            r2 = this;
            java.util.List<com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r0 = r2.hardCache
            r0.clear()
            java.util.concurrent.atomic.AtomicInteger r0 = r2.cacheSize
            r1 = 0
            r0.set(r1)
            super.clear()
            return
    }

    protected abstract int getSize(com.kwad.sdk.core.imageloader.core.decode.DecodedResult r1);

    protected int getSizeLimit() {
            r1 = this;
            int r0 = r1.sizeLimit
            return r0
    }

    @Override
    public boolean put(java.lang.String r6, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r7) {
            r5 = this;
            int r0 = r5.getSize(r7)
            int r1 = r5.getSizeLimit()
            java.util.concurrent.atomic.AtomicInteger r2 = r5.cacheSize
            int r2 = r2.get()
            if (r0 >= r1) goto L38
        L10:
            int r3 = r2 + r0
            if (r3 <= r1) goto L2c
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3 = r5.removeNext()
            java.util.List<com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r4 = r5.hardCache
            boolean r4 = r4.remove(r3)
            if (r4 == 0) goto L10
            java.util.concurrent.atomic.AtomicInteger r2 = r5.cacheSize
            int r3 = r5.getSize(r3)
            int r3 = -r3
            int r2 = r2.addAndGet(r3)
            goto L10
        L2c:
            java.util.List<com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r1 = r5.hardCache
            r1.add(r7)
            java.util.concurrent.atomic.AtomicInteger r1 = r5.cacheSize
            r1.addAndGet(r0)
            r0 = 1
            goto L39
        L38:
            r0 = 0
        L39:
            super.put(r6, r7)
            return r0
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.decode.DecodedResult remove(java.lang.String r3) {
            r2 = this;
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r0 = super.get(r3)
            if (r0 == 0) goto L18
            java.util.List<com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r1 = r2.hardCache
            boolean r1 = r1.remove(r0)
            if (r1 == 0) goto L18
            java.util.concurrent.atomic.AtomicInteger r1 = r2.cacheSize
            int r0 = r2.getSize(r0)
            int r0 = -r0
            r1.addAndGet(r0)
        L18:
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3 = super.remove(r3)
            return r3
    }

    protected abstract com.kwad.sdk.core.imageloader.core.decode.DecodedResult removeNext();
}
