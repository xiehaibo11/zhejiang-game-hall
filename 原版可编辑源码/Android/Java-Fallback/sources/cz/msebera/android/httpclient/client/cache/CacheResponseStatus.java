package cz.msebera.android.httpclient.client.cache;

public enum CacheResponseStatus extends java.lang.Enum<cz.msebera.android.httpclient.client.cache.CacheResponseStatus> {
    private static final cz.msebera.android.httpclient.client.cache.CacheResponseStatus[] $VALUES = null;
    public static final cz.msebera.android.httpclient.client.cache.CacheResponseStatus CACHE_HIT = null;
    public static final cz.msebera.android.httpclient.client.cache.CacheResponseStatus CACHE_MISS = null;
    public static final cz.msebera.android.httpclient.client.cache.CacheResponseStatus CACHE_MODULE_RESPONSE = null;
    public static final cz.msebera.android.httpclient.client.cache.CacheResponseStatus VALIDATED = null;

    static {
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r0 = new cz.msebera.android.httpclient.client.cache.CacheResponseStatus
            r1 = 0
            java.lang.String r2 = "CACHE_MODULE_RESPONSE"
            r0.<init>(r2, r1)
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus.CACHE_MODULE_RESPONSE = r0
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r0 = new cz.msebera.android.httpclient.client.cache.CacheResponseStatus
            r2 = 1
            java.lang.String r3 = "CACHE_HIT"
            r0.<init>(r3, r2)
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus.CACHE_HIT = r0
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r0 = new cz.msebera.android.httpclient.client.cache.CacheResponseStatus
            r3 = 2
            java.lang.String r4 = "CACHE_MISS"
            r0.<init>(r4, r3)
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus.CACHE_MISS = r0
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r0 = new cz.msebera.android.httpclient.client.cache.CacheResponseStatus
            r4 = 3
            java.lang.String r5 = "VALIDATED"
            r0.<init>(r5, r4)
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus.VALIDATED = r0
            r0 = 4
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus[] r0 = new cz.msebera.android.httpclient.client.cache.CacheResponseStatus[r0]
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r5 = cz.msebera.android.httpclient.client.cache.CacheResponseStatus.CACHE_MODULE_RESPONSE
            r0[r1] = r5
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r1 = cz.msebera.android.httpclient.client.cache.CacheResponseStatus.CACHE_HIT
            r0[r2] = r1
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r1 = cz.msebera.android.httpclient.client.cache.CacheResponseStatus.CACHE_MISS
            r0[r3] = r1
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r1 = cz.msebera.android.httpclient.client.cache.CacheResponseStatus.VALIDATED
            r0[r4] = r1
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus.$VALUES = r0
            return
    }

    CacheResponseStatus(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static cz.msebera.android.httpclient.client.cache.CacheResponseStatus valueOf(java.lang.String r1) {
            java.lang.Class<cz.msebera.android.httpclient.client.cache.CacheResponseStatus> r0 = cz.msebera.android.httpclient.client.cache.CacheResponseStatus.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus r1 = (cz.msebera.android.httpclient.client.cache.CacheResponseStatus) r1
            return r1
    }

    public static cz.msebera.android.httpclient.client.cache.CacheResponseStatus[] values() {
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus[] r0 = cz.msebera.android.httpclient.client.cache.CacheResponseStatus.$VALUES
            java.lang.Object r0 = r0.clone()
            cz.msebera.android.httpclient.client.cache.CacheResponseStatus[] r0 = (cz.msebera.android.httpclient.client.cache.CacheResponseStatus[]) r0
            return r0
    }
}
