package com.ss.android.socialbase.downloader.utils;

public class LruCache<K, T> extends java.util.LinkedHashMap<K, T> {
    private static final int DEFAULT_SIZE = 4;
    private int mMaxSize;

    public LruCache() {
            r1 = this;
            r0 = 4
            r1.<init>(r0, r0)
            return
    }

    public LruCache(int r2, int r3) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r3, r0)
            return
    }

    public LruCache(int r2, int r3, boolean r4) {
            r1 = this;
            r0 = 1061158912(0x3f400000, float:0.75)
            r1.<init>(r2, r0, r4)
            r1.setMaxSize(r3)
            return
    }

    @Override
    protected boolean removeEldestEntry(java.util.Map.Entry<K, T> r2) {
            r1 = this;
            int r2 = r1.size()
            int r0 = r1.mMaxSize
            if (r2 <= r0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    public void setMaxSize(int r1) {
            r0 = this;
            r0.mMaxSize = r1
            return
    }
}
