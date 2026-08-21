package com.kwad.sdk.core.imageloader.cache.memory.impl;

public class FuzzyKeyMemoryCache implements com.kwad.sdk.core.imageloader.cache.memory.MemoryCache {
    private final com.kwad.sdk.core.imageloader.cache.memory.MemoryCache cache;
    private final java.util.Comparator<java.lang.String> keyComparator;

    public FuzzyKeyMemoryCache(com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r1, java.util.Comparator<java.lang.String> r2) {
            r0 = this;
            r0.<init>()
            r0.cache = r1
            r0.keyComparator = r2
            return
    }

    @Override
    public void clear() {
            r1 = this;
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r1.cache
            r0.clear()
            return
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.decode.DecodedResult get(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r1.cache
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2 = r0.get(r2)
            return r2
    }

    @Override
    public java.util.Collection<java.lang.String> keys() {
            r1 = this;
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r1.cache
            java.util.Collection r0 = r0.keys()
            return r0
    }

    @Override
    public boolean put(java.lang.String r6, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r7) {
            r5 = this;
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r5.cache
            monitor-enter(r0)
            r1 = 0
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r2 = r5.cache     // Catch: java.lang.Throwable -> L32
            java.util.Collection r2 = r2.keys()     // Catch: java.lang.Throwable -> L32
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L32
        Le:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L32
            if (r3 == 0) goto L23
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L32
            java.util.Comparator<java.lang.String> r4 = r5.keyComparator     // Catch: java.lang.Throwable -> L32
            int r4 = r4.compare(r6, r3)     // Catch: java.lang.Throwable -> L32
            if (r4 != 0) goto Le
            r1 = r3
        L23:
            if (r1 == 0) goto L2a
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r2 = r5.cache     // Catch: java.lang.Throwable -> L32
            r2.remove(r1)     // Catch: java.lang.Throwable -> L32
        L2a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r5.cache
            boolean r6 = r0.put(r6, r7)
            return r6
        L32:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            throw r6
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.decode.DecodedResult remove(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r1.cache
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2 = r0.remove(r2)
            return r2
    }
}
