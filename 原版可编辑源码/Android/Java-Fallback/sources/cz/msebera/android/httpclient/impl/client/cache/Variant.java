package cz.msebera.android.httpclient.impl.client.cache;

class Variant {
    private final java.lang.String cacheKey;
    private final cz.msebera.android.httpclient.client.cache.HttpCacheEntry entry;
    private final java.lang.String variantKey;

    public Variant(java.lang.String r1, java.lang.String r2, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3) {
            r0 = this;
            r0.<init>()
            r0.variantKey = r1
            r0.cacheKey = r2
            r0.entry = r3
            return
    }

    public java.lang.String getCacheKey() {
            r1 = this;
            java.lang.String r0 = r1.cacheKey
            return r0
    }

    public cz.msebera.android.httpclient.client.cache.HttpCacheEntry getEntry() {
            r1 = this;
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r0 = r1.entry
            return r0
    }

    public java.lang.String getVariantKey() {
            r1 = this;
            java.lang.String r0 = r1.variantKey
            return r0
    }
}
