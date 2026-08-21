package com.kwad.sdk.core.imageloader.cache.memory.impl;

public class LargestLimitedMemoryCache extends com.kwad.sdk.core.imageloader.cache.memory.LimitedMemoryCache {
    private final java.util.Map<com.kwad.sdk.core.imageloader.core.decode.DecodedResult, java.lang.Integer> valueSizes;

    public LargestLimitedMemoryCache(int r1) {
            r0 = this;
            r0.<init>(r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.util.Map r1 = java.util.Collections.synchronizedMap(r1)
            r0.valueSizes = r1
            return
    }

    @Override
    public void clear() {
            r1 = this;
            java.util.Map<com.kwad.sdk.core.imageloader.core.decode.DecodedResult, java.lang.Integer> r0 = r1.valueSizes
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
    public int getSize(com.kwad.sdk.core.imageloader.core.decode.DecodedResult r1) {
            r0 = this;
            int r1 = r1.getByteSize()
            return r1
    }

    @Override
    public boolean put(java.lang.String r2, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3) {
            r1 = this;
            boolean r2 = super.put(r2, r3)
            if (r2 == 0) goto L15
            java.util.Map<com.kwad.sdk.core.imageloader.core.decode.DecodedResult, java.lang.Integer> r2 = r1.valueSizes
            int r0 = r1.getSize(r3)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r2.put(r3, r0)
            r2 = 1
            return r2
        L15:
            r2 = 0
            return r2
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.decode.DecodedResult remove(java.lang.String r3) {
            r2 = this;
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r0 = super.get(r3)
            if (r0 == 0) goto Lb
            java.util.Map<com.kwad.sdk.core.imageloader.core.decode.DecodedResult, java.lang.Integer> r1 = r2.valueSizes
            r1.remove(r0)
        Lb:
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3 = super.remove(r3)
            return r3
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.decode.DecodedResult removeNext() {
            r8 = this;
            java.util.Map<com.kwad.sdk.core.imageloader.core.decode.DecodedResult, java.lang.Integer> r0 = r8.valueSizes
            java.util.Set r0 = r0.entrySet()
            java.util.Map<com.kwad.sdk.core.imageloader.core.decode.DecodedResult, java.lang.Integer> r1 = r8.valueSizes
            monitor-enter(r1)
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L49
            r2 = 0
            r3 = r2
        Lf:
            boolean r4 = r0.hasNext()     // Catch: java.lang.Throwable -> L49
            if (r4 == 0) goto L42
            java.lang.Object r4 = r0.next()     // Catch: java.lang.Throwable -> L49
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> L49
            if (r2 != 0) goto L2a
            java.lang.Object r2 = r4.getKey()     // Catch: java.lang.Throwable -> L49
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2 = (com.kwad.sdk.core.imageloader.core.decode.DecodedResult) r2     // Catch: java.lang.Throwable -> L49
            java.lang.Object r3 = r4.getValue()     // Catch: java.lang.Throwable -> L49
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> L49
            goto Lf
        L2a:
            java.lang.Object r5 = r4.getValue()     // Catch: java.lang.Throwable -> L49
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.lang.Throwable -> L49
            int r6 = r5.intValue()     // Catch: java.lang.Throwable -> L49
            int r7 = r3.intValue()     // Catch: java.lang.Throwable -> L49
            if (r6 <= r7) goto Lf
            java.lang.Object r2 = r4.getKey()     // Catch: java.lang.Throwable -> L49
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2 = (com.kwad.sdk.core.imageloader.core.decode.DecodedResult) r2     // Catch: java.lang.Throwable -> L49
            r3 = r5
            goto Lf
        L42:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L49
            java.util.Map<com.kwad.sdk.core.imageloader.core.decode.DecodedResult, java.lang.Integer> r0 = r8.valueSizes
            r0.remove(r2)
            return r2
        L49:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L49
            throw r0
    }
}
