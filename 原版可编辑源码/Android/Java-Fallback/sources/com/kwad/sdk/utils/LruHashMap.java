package com.kwad.sdk.utils;

public class LruHashMap<K, V> extends java.util.LinkedHashMap<K, V> {
    private static final float DEFAULT_LOAD_FACTOR = 0.75f;
    private final long maxSize;

    public LruHashMap(long r5) {
            r4 = this;
            float r0 = (float) r5
            r1 = 1061158912(0x3f400000, float:0.75)
            float r0 = r0 / r1
            double r2 = (double) r0
            double r2 = java.lang.Math.ceil(r2)
            int r0 = (int) r2
            r2 = 1
            int r0 = r0 + r2
            r4.<init>(r0, r1, r2)
            r4.maxSize = r5
            return
    }

    public long getMaxSize() {
            r2 = this;
            long r0 = r2.maxSize
            return r0
    }

    @Override
    protected boolean removeEldestEntry(java.util.Map.Entry<K, V> r5) {
            r4 = this;
            int r5 = r4.size()
            long r0 = (long) r5
            long r2 = r4.maxSize
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto Ld
            r5 = 1
            return r5
        Ld:
            r5 = 0
            return r5
    }
}
