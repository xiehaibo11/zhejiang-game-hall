package cz.msebera.android.httpclient.impl.client.cache;

final class CacheMap extends java.util.LinkedHashMap<java.lang.String, cz.msebera.android.httpclient.client.cache.HttpCacheEntry> {
    private static final long serialVersionUID = -7750025207539768511L;
    private final int maxEntries;

    CacheMap(int r4) {
            r3 = this;
            r0 = 20
            r1 = 1061158912(0x3f400000, float:0.75)
            r2 = 1
            r3.<init>(r0, r1, r2)
            r3.maxEntries = r4
            return
    }

    @Override
    protected boolean removeEldestEntry(java.util.Map.Entry<java.lang.String, cz.msebera.android.httpclient.client.cache.HttpCacheEntry> r2) {
            r1 = this;
            int r2 = r1.size()
            int r0 = r1.maxEntries
            if (r2 <= r0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }
}
