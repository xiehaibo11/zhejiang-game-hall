package com.kwad.sdk.core.imageloader.cache.memory.impl;

public class LruMemoryCache implements com.kwad.sdk.core.imageloader.cache.memory.MemoryCache {
    private final java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> map;
    private final int maxSize;
    private int size;

    public LruMemoryCache(int r4) {
            r3 = this;
            r3.<init>()
            if (r4 <= 0) goto L13
            r3.maxSize = r4
            java.util.LinkedHashMap r4 = new java.util.LinkedHashMap
            r0 = 0
            r1 = 1061158912(0x3f400000, float:0.75)
            r2 = 1
            r4.<init>(r0, r1, r2)
            r3.map = r4
            return
        L13:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "maxSize <= 0"
            r4.<init>(r0)
            throw r4
    }

    private int sizeOf(java.lang.String r1, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2) {
            r0 = this;
            int r1 = r2.getByteSize()
            return r1
    }

    private void trimToSize(int r4) {
            r3 = this;
        L0:
            monitor-enter(r3)
            int r0 = r3.size     // Catch: java.lang.Throwable -> L6f
            if (r0 < 0) goto L50
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r0 = r3.map     // Catch: java.lang.Throwable -> L6f
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L6f
            if (r0 == 0) goto L11
            int r0 = r3.size     // Catch: java.lang.Throwable -> L6f
            if (r0 != 0) goto L50
        L11:
            int r0 = r3.size     // Catch: java.lang.Throwable -> L6f
            if (r0 <= r4) goto L4e
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r0 = r3.map     // Catch: java.lang.Throwable -> L6f
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L6f
            if (r0 == 0) goto L1e
            goto L4e
        L1e:
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r0 = r3.map     // Catch: java.lang.Throwable -> L6f
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L6f
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L6f
            java.lang.Object r0 = r0.next()     // Catch: java.lang.Throwable -> L6f
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Throwable -> L6f
            if (r0 != 0) goto L32
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L6f
            return
        L32:
            java.lang.Object r1 = r0.getKey()     // Catch: java.lang.Throwable -> L6f
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L6f
            java.lang.Object r0 = r0.getValue()     // Catch: java.lang.Throwable -> L6f
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r0 = (com.kwad.sdk.core.imageloader.core.decode.DecodedResult) r0     // Catch: java.lang.Throwable -> L6f
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r2 = r3.map     // Catch: java.lang.Throwable -> L6f
            r2.remove(r1)     // Catch: java.lang.Throwable -> L6f
            int r2 = r3.size     // Catch: java.lang.Throwable -> L6f
            int r0 = r3.sizeOf(r1, r0)     // Catch: java.lang.Throwable -> L6f
            int r2 = r2 - r0
            r3.size = r2     // Catch: java.lang.Throwable -> L6f
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L6f
            goto L0
        L4e:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L6f
            return
        L50:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L6f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6f
            r0.<init>()     // Catch: java.lang.Throwable -> L6f
            java.lang.Class r1 = r3.getClass()     // Catch: java.lang.Throwable -> L6f
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L6f
            r0.append(r1)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r1 = ".sizeOf() is reporting inconsistent results!"
            r0.append(r1)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L6f
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L6f
            throw r4     // Catch: java.lang.Throwable -> L6f
        L6f:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L6f
            throw r4
    }

    @Override
    public void clear() {
            r1 = this;
            r0 = -1
            r1.trimToSize(r0)
            return
    }

    @Override
    public final com.kwad.sdk.core.imageloader.core.decode.DecodedResult get(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "key"
            com.kwad.sdk.utils.ao.au(r2, r0)
            monitor-enter(r1)
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r0 = r1.map     // Catch: java.lang.Throwable -> L10
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L10
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2 = (com.kwad.sdk.core.imageloader.core.decode.DecodedResult) r2     // Catch: java.lang.Throwable -> L10
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L10
            return r2
        L10:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L10
            throw r2
    }

    @Override
    public java.util.Collection<java.lang.String> keys() {
            r2 = this;
            monitor-enter(r2)
            java.util.HashSet r0 = new java.util.HashSet     // Catch: java.lang.Throwable -> Le
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r1 = r2.map     // Catch: java.lang.Throwable -> Le
            java.util.Set r1 = r1.keySet()     // Catch: java.lang.Throwable -> Le
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Le
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Le
            return r0
        Le:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Le
            throw r0
    }

    @Override
    public final boolean put(java.lang.String r3, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r4) {
            r2 = this;
            java.lang.String r0 = "key"
            com.kwad.sdk.utils.ao.au(r3, r0)
            java.lang.String r0 = "value"
            com.kwad.sdk.utils.ao.h(r4, r0)
            monitor-enter(r2)
            int r0 = r2.size     // Catch: java.lang.Throwable -> L2f
            int r1 = r2.sizeOf(r3, r4)     // Catch: java.lang.Throwable -> L2f
            int r0 = r0 + r1
            r2.size = r0     // Catch: java.lang.Throwable -> L2f
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r0 = r2.map     // Catch: java.lang.Throwable -> L2f
            java.lang.Object r4 = r0.put(r3, r4)     // Catch: java.lang.Throwable -> L2f
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r4 = (com.kwad.sdk.core.imageloader.core.decode.DecodedResult) r4     // Catch: java.lang.Throwable -> L2f
            if (r4 == 0) goto L27
            int r0 = r2.size     // Catch: java.lang.Throwable -> L2f
            int r3 = r2.sizeOf(r3, r4)     // Catch: java.lang.Throwable -> L2f
            int r0 = r0 - r3
            r2.size = r0     // Catch: java.lang.Throwable -> L2f
        L27:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2f
            int r3 = r2.maxSize
            r2.trimToSize(r3)
            r3 = 1
            return r3
        L2f:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2f
            throw r3
    }

    @Override
    public final com.kwad.sdk.core.imageloader.core.decode.DecodedResult remove(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "key"
            com.kwad.sdk.utils.ao.au(r3, r0)
            monitor-enter(r2)
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.imageloader.core.decode.DecodedResult> r0 = r2.map     // Catch: java.lang.Throwable -> L1b
            java.lang.Object r0 = r0.remove(r3)     // Catch: java.lang.Throwable -> L1b
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r0 = (com.kwad.sdk.core.imageloader.core.decode.DecodedResult) r0     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L19
            int r1 = r2.size     // Catch: java.lang.Throwable -> L1b
            int r3 = r2.sizeOf(r3, r0)     // Catch: java.lang.Throwable -> L1b
            int r1 = r1 - r3
            r2.size = r1     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1b
            return r0
        L1b:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1b
            throw r3
    }

    public final synchronized java.lang.String toString() {
            r4 = this;
            monitor-enter(r4)
            java.lang.String r0 = "LruCache[maxSize=%d]"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L15
            r2 = 0
            int r3 = r4.maxSize     // Catch: java.lang.Throwable -> L15
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L15
            r1[r2] = r3     // Catch: java.lang.Throwable -> L15
            java.lang.String r0 = java.lang.String.format(r0, r1)     // Catch: java.lang.Throwable -> L15
            monitor-exit(r4)
            return r0
        L15:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }
}
