package com.kwad.sdk.core.imageloader.cache.memory.impl;

public class FIFOLimitedMemoryCache extends com.kwad.sdk.core.imageloader.cache.memory.LimitedMemoryCache {
    private final java.util.List<com.kwad.sdk.core.imageloader.core.decode.DecodedResult> queue;

    public FIFOLimitedMemoryCache(int r1) {
            r0 = this;
            r0.<init>(r1)
            java.util.LinkedList r1 = new java.util.LinkedList
            r1.<init>()
            java.util.List r1 = java.util.Collections.synchronizedList(r1)
            r0.queue = r1
            return
    }

    @Override
    public void clear() {
            r1 = this;
            java.util.List<com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r0 = r1.queue
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
    public boolean put(java.lang.String r1, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2) {
            r0 = this;
            boolean r1 = super.put(r1, r2)
            if (r1 == 0) goto Ld
            java.util.List<com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r1 = r0.queue
            r1.add(r2)
            r1 = 1
            return r1
        Ld:
            r1 = 0
            return r1
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.decode.DecodedResult remove(java.lang.String r3) {
            r2 = this;
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r0 = super.get(r3)
            if (r0 == 0) goto Lb
            java.util.List<com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r1 = r2.queue
            r1.remove(r0)
        Lb:
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3 = super.remove(r3)
            return r3
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.decode.DecodedResult removeNext() {
            r2 = this;
            java.util.List<com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r0 = r2.queue
            r1 = 0
            java.lang.Object r0 = r0.remove(r1)
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r0 = (com.kwad.sdk.core.imageloader.core.decode.DecodedResult) r0
            return r0
    }
}
