package com.bumptech.glide.util;

public class LruCache<T, Y> {
    private final java.util.LinkedHashMap<T, Y> cache;
    private int currentSize;
    private final int initialMaxSize;
    private int maxSize;

    public LruCache(int r5) {
            r4 = this;
            r4.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r1 = 100
            r2 = 1061158912(0x3f400000, float:0.75)
            r3 = 1
            r0.<init>(r1, r2, r3)
            r4.cache = r0
            r0 = 0
            r4.currentSize = r0
            r4.initialMaxSize = r5
            r4.maxSize = r5
            return
    }

    private void evict() {
            r1 = this;
            int r0 = r1.maxSize
            r1.trimToSize(r0)
            return
    }

    public void clearMemory() {
            r1 = this;
            r0 = 0
            r1.trimToSize(r0)
            return
    }

    public boolean contains(T r2) {
            r1 = this;
            java.util.LinkedHashMap<T, Y> r0 = r1.cache
            boolean r2 = r0.containsKey(r2)
            return r2
    }

    public Y get(T r2) {
            r1 = this;
            java.util.LinkedHashMap<T, Y> r0 = r1.cache
            java.lang.Object r2 = r0.get(r2)
            return r2
    }

    public int getCurrentSize() {
            r1 = this;
            int r0 = r1.currentSize
            return r0
    }

    public int getMaxSize() {
            r1 = this;
            int r0 = r1.maxSize
            return r0
    }

    protected int getSize(Y r1) {
            r0 = this;
            r1 = 1
            return r1
    }

    protected void onItemEvicted(T r1, Y r2) {
            r0 = this;
            return
    }

    public Y put(T r3, Y r4) {
            r2 = this;
            int r0 = r2.getSize(r4)
            int r1 = r2.maxSize
            if (r0 < r1) goto Ld
            r2.onItemEvicted(r3, r4)
            r3 = 0
            return r3
        Ld:
            java.util.LinkedHashMap<T, Y> r0 = r2.cache
            java.lang.Object r3 = r0.put(r3, r4)
            if (r4 == 0) goto L1e
            int r0 = r2.currentSize
            int r4 = r2.getSize(r4)
            int r0 = r0 + r4
            r2.currentSize = r0
        L1e:
            if (r3 == 0) goto L29
            int r4 = r2.currentSize
            int r0 = r2.getSize(r3)
            int r4 = r4 - r0
            r2.currentSize = r4
        L29:
            r2.evict()
            return r3
    }

    public Y remove(T r3) {
            r2 = this;
            java.util.LinkedHashMap<T, Y> r0 = r2.cache
            java.lang.Object r3 = r0.remove(r3)
            if (r3 == 0) goto L11
            int r0 = r2.currentSize
            int r1 = r2.getSize(r3)
            int r0 = r0 - r1
            r2.currentSize = r0
        L11:
            return r3
    }

    public void setSizeMultiplier(float r2) {
            r1 = this;
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 < 0) goto L14
            int r0 = r1.initialMaxSize
            float r0 = (float) r0
            float r0 = r0 * r2
            int r2 = java.lang.Math.round(r0)
            r1.maxSize = r2
            r1.evict()
            return
        L14:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Multiplier must be >= 0"
            r2.<init>(r0)
            throw r2
    }

    protected void trimToSize(int r5) {
            r4 = this;
        L0:
            int r0 = r4.currentSize
            if (r0 <= r5) goto L2e
            java.util.LinkedHashMap<T, Y> r0 = r4.cache
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
            java.lang.Object r0 = r0.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getValue()
            int r2 = r4.currentSize
            int r3 = r4.getSize(r1)
            int r2 = r2 - r3
            r4.currentSize = r2
            java.lang.Object r0 = r0.getKey()
            java.util.LinkedHashMap<T, Y> r2 = r4.cache
            r2.remove(r0)
            r4.onItemEvicted(r0, r1)
            goto L0
        L2e:
            return
    }
}
