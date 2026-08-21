package com.kwad.sdk.core.imageloader.cache.memory.impl;

public class LimitedAgeMemoryCache implements com.kwad.sdk.core.imageloader.cache.memory.MemoryCache {
    private final com.kwad.sdk.core.imageloader.cache.memory.MemoryCache cache;
    private final java.util.Map<java.lang.String, java.lang.Long> loadingDates;
    private final long maxAge;

    public LimitedAgeMemoryCache(com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r3, long r4) {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r0 = java.util.Collections.synchronizedMap(r0)
            r2.loadingDates = r0
            r2.cache = r3
            r0 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 * r0
            r2.maxAge = r4
            return
    }

    @Override
    public void clear() {
            r1 = this;
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r1.cache
            r0.clear()
            java.util.Map<java.lang.String, java.lang.Long> r0 = r1.loadingDates
            r0.clear()
            return
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.decode.DecodedResult get(java.lang.String r6) {
            r5 = this;
            java.util.Map<java.lang.String, java.lang.Long> r0 = r5.loadingDates
            java.lang.Object r0 = r0.get(r6)
            java.lang.Long r0 = (java.lang.Long) r0
            if (r0 == 0) goto L23
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = r0.longValue()
            long r1 = r1 - r3
            long r3 = r5.maxAge
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 <= 0) goto L23
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r5.cache
            r0.remove(r6)
            java.util.Map<java.lang.String, java.lang.Long> r0 = r5.loadingDates
            r0.remove(r6)
        L23:
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r5.cache
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r6 = r0.get(r6)
            return r6
    }

    @Override
    public java.util.Collection<java.lang.String> keys() {
            r1 = this;
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r1.cache
            java.util.Collection r0 = r0.keys()
            return r0
    }

    @Override
    public boolean put(java.lang.String r4, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r5) {
            r3 = this;
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r3.cache
            boolean r5 = r0.put(r4, r5)
            if (r5 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.Long> r0 = r3.loadingDates
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r0.put(r4, r1)
        L15:
            return r5
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.decode.DecodedResult remove(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Long> r0 = r1.loadingDates
            r0.remove(r2)
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r1.cache
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2 = r0.remove(r2)
            return r2
    }
}
