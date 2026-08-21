package com.kwad.sdk.core.imageloader.cache.memory;

public abstract class BaseMemoryCache implements com.kwad.sdk.core.imageloader.cache.memory.MemoryCache {
    private final java.util.Map<java.lang.String, java.lang.ref.Reference<com.kwad.sdk.core.imageloader.core.decode.DecodedResult>> softMap;

    public BaseMemoryCache() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r0 = java.util.Collections.synchronizedMap(r0)
            r1.softMap = r0
            return
    }

    @Override
    public void clear() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.ref.Reference<com.kwad.sdk.core.imageloader.core.decode.DecodedResult>> r0 = r1.softMap
            r0.clear()
            return
    }

    protected abstract java.lang.ref.Reference<com.kwad.sdk.core.imageloader.core.decode.DecodedResult> createReference(com.kwad.sdk.core.imageloader.core.decode.DecodedResult r1);

    @Override
    public com.kwad.sdk.core.imageloader.core.decode.DecodedResult get(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.ref.Reference<com.kwad.sdk.core.imageloader.core.decode.DecodedResult>> r0 = r1.softMap
            java.lang.Object r2 = r0.get(r2)
            java.lang.ref.Reference r2 = (java.lang.ref.Reference) r2
            if (r2 == 0) goto L11
            java.lang.Object r2 = r2.get()
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2 = (com.kwad.sdk.core.imageloader.core.decode.DecodedResult) r2
            goto L12
        L11:
            r2 = 0
        L12:
            return r2
    }

    @Override
    public java.util.Collection<java.lang.String> keys() {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.ref.Reference<com.kwad.sdk.core.imageloader.core.decode.DecodedResult>> r0 = r3.softMap
            monitor-enter(r0)
            java.util.HashSet r1 = new java.util.HashSet     // Catch: java.lang.Throwable -> L10
            java.util.Map<java.lang.String, java.lang.ref.Reference<com.kwad.sdk.core.imageloader.core.decode.DecodedResult>> r2 = r3.softMap     // Catch: java.lang.Throwable -> L10
            java.util.Set r2 = r2.keySet()     // Catch: java.lang.Throwable -> L10
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            return r1
        L10:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r1
    }

    @Override
    public boolean put(java.lang.String r2, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.ref.Reference<com.kwad.sdk.core.imageloader.core.decode.DecodedResult>> r0 = r1.softMap
            java.lang.ref.Reference r3 = r1.createReference(r3)
            r0.put(r2, r3)
            r2 = 1
            return r2
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.decode.DecodedResult remove(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.ref.Reference<com.kwad.sdk.core.imageloader.core.decode.DecodedResult>> r0 = r1.softMap
            java.lang.Object r2 = r0.remove(r2)
            java.lang.ref.Reference r2 = (java.lang.ref.Reference) r2
            if (r2 != 0) goto Lc
            r2 = 0
            return r2
        Lc:
            java.lang.Object r2 = r2.get()
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2 = (com.kwad.sdk.core.imageloader.core.decode.DecodedResult) r2
            return r2
    }
}
