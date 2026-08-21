package cz.msebera.android.httpclient.impl.client.cache;

public class CacheConfig implements java.lang.Cloneable {
    public static final cz.msebera.android.httpclient.impl.client.cache.CacheConfig DEFAULT = null;
    public static final boolean DEFAULT_303_CACHING_ENABLED = false;
    public static final int DEFAULT_ASYNCHRONOUS_WORKERS_CORE = 1;
    public static final int DEFAULT_ASYNCHRONOUS_WORKERS_MAX = 1;
    public static final int DEFAULT_ASYNCHRONOUS_WORKER_IDLE_LIFETIME_SECS = 60;
    public static final boolean DEFAULT_HEURISTIC_CACHING_ENABLED = false;
    public static final float DEFAULT_HEURISTIC_COEFFICIENT = 0.1f;
    public static final long DEFAULT_HEURISTIC_LIFETIME = 0;
    public static final int DEFAULT_MAX_CACHE_ENTRIES = 1000;
    public static final int DEFAULT_MAX_OBJECT_SIZE_BYTES = 8192;
    public static final int DEFAULT_MAX_UPDATE_RETRIES = 1;
    public static final int DEFAULT_REVALIDATION_QUEUE_SIZE = 100;
    public static final boolean DEFAULT_WEAK_ETAG_ON_PUTDELETE_ALLOWED = false;
    private boolean allow303Caching;
    private int asynchronousWorkerIdleLifetimeSecs;
    private int asynchronousWorkersCore;
    private int asynchronousWorkersMax;
    private boolean heuristicCachingEnabled;
    private float heuristicCoefficient;
    private long heuristicDefaultLifetime;
    private boolean isSharedCache;
    private int maxCacheEntries;
    private long maxObjectSize;
    private int maxUpdateRetries;
    private boolean neverCacheHTTP10ResponsesWithQuery;
    private int revalidationQueueSize;
    private boolean weakETagOnPutDeleteAllowed;

    public static class Builder {
        private boolean allow303Caching;
        private int asynchronousWorkerIdleLifetimeSecs;
        private int asynchronousWorkersCore;
        private int asynchronousWorkersMax;
        private boolean heuristicCachingEnabled;
        private float heuristicCoefficient;
        private long heuristicDefaultLifetime;
        private boolean isSharedCache;
        private int maxCacheEntries;
        private long maxObjectSize;
        private int maxUpdateRetries;
        private boolean neverCacheHTTP10ResponsesWithQuery;
        private int revalidationQueueSize;
        private boolean weakETagOnPutDeleteAllowed;

        Builder() {
                r3 = this;
                r3.<init>()
                r0 = 8192(0x2000, double:4.0474E-320)
                r3.maxObjectSize = r0
                r0 = 1000(0x3e8, float:1.401E-42)
                r3.maxCacheEntries = r0
                r0 = 1
                r3.maxUpdateRetries = r0
                r1 = 0
                r3.allow303Caching = r1
                r3.weakETagOnPutDeleteAllowed = r1
                r3.heuristicCachingEnabled = r1
                r1 = 1036831949(0x3dcccccd, float:0.1)
                r3.heuristicCoefficient = r1
                r1 = 0
                r3.heuristicDefaultLifetime = r1
                r3.isSharedCache = r0
                r3.asynchronousWorkersMax = r0
                r3.asynchronousWorkersCore = r0
                r0 = 60
                r3.asynchronousWorkerIdleLifetimeSecs = r0
                r0 = 100
                r3.revalidationQueueSize = r0
                return
        }

        public cz.msebera.android.httpclient.impl.client.cache.CacheConfig build() {
                r20 = this;
                r0 = r20
                cz.msebera.android.httpclient.impl.client.cache.CacheConfig r18 = new cz.msebera.android.httpclient.impl.client.cache.CacheConfig
                r1 = r18
                long r2 = r0.maxObjectSize
                int r4 = r0.maxCacheEntries
                int r5 = r0.maxUpdateRetries
                boolean r6 = r0.allow303Caching
                boolean r7 = r0.weakETagOnPutDeleteAllowed
                boolean r8 = r0.heuristicCachingEnabled
                float r9 = r0.heuristicCoefficient
                long r10 = r0.heuristicDefaultLifetime
                boolean r12 = r0.isSharedCache
                int r13 = r0.asynchronousWorkersMax
                int r14 = r0.asynchronousWorkersCore
                int r15 = r0.asynchronousWorkerIdleLifetimeSecs
                r19 = r1
                int r1 = r0.revalidationQueueSize
                r16 = r1
                boolean r1 = r0.neverCacheHTTP10ResponsesWithQuery
                r17 = r1
                r1 = r19
                r1.<init>(r2, r4, r5, r6, r7, r8, r9, r10, r12, r13, r14, r15, r16, r17)
                return r18
        }

        public cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder setAllow303Caching(boolean r1) {
                r0 = this;
                r0.allow303Caching = r1
                return r0
        }

        public cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder setAsynchronousWorkerIdleLifetimeSecs(int r1) {
                r0 = this;
                r0.asynchronousWorkerIdleLifetimeSecs = r1
                return r0
        }

        public cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder setAsynchronousWorkersCore(int r1) {
                r0 = this;
                r0.asynchronousWorkersCore = r1
                return r0
        }

        public cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder setAsynchronousWorkersMax(int r1) {
                r0 = this;
                r0.asynchronousWorkersMax = r1
                return r0
        }

        public cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder setHeuristicCachingEnabled(boolean r1) {
                r0 = this;
                r0.heuristicCachingEnabled = r1
                return r0
        }

        public cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder setHeuristicCoefficient(float r1) {
                r0 = this;
                r0.heuristicCoefficient = r1
                return r0
        }

        public cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder setHeuristicDefaultLifetime(long r1) {
                r0 = this;
                r0.heuristicDefaultLifetime = r1
                return r0
        }

        public cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder setMaxCacheEntries(int r1) {
                r0 = this;
                r0.maxCacheEntries = r1
                return r0
        }

        public cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder setMaxObjectSize(long r1) {
                r0 = this;
                r0.maxObjectSize = r1
                return r0
        }

        public cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder setMaxUpdateRetries(int r1) {
                r0 = this;
                r0.maxUpdateRetries = r1
                return r0
        }

        public cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder setNeverCacheHTTP10ResponsesWithQueryString(boolean r1) {
                r0 = this;
                r0.neverCacheHTTP10ResponsesWithQuery = r1
                return r0
        }

        public cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder setRevalidationQueueSize(int r1) {
                r0 = this;
                r0.revalidationQueueSize = r1
                return r0
        }

        public cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder setSharedCache(boolean r1) {
                r0 = this;
                r0.isSharedCache = r1
                return r0
        }

        public cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder setWeakETagOnPutDeleteAllowed(boolean r1) {
                r0 = this;
                r0.weakETagOnPutDeleteAllowed = r1
                return r0
        }
    }

    static {
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder r0 = new cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder
            r0.<init>()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r0 = r0.build()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig.DEFAULT = r0
            return
    }

    @java.lang.Deprecated
    public CacheConfig() {
            r3 = this;
            r3.<init>()
            r0 = 8192(0x2000, double:4.0474E-320)
            r3.maxObjectSize = r0
            r0 = 1000(0x3e8, float:1.401E-42)
            r3.maxCacheEntries = r0
            r0 = 1
            r3.maxUpdateRetries = r0
            r1 = 0
            r3.allow303Caching = r1
            r3.weakETagOnPutDeleteAllowed = r1
            r3.heuristicCachingEnabled = r1
            r1 = 1036831949(0x3dcccccd, float:0.1)
            r3.heuristicCoefficient = r1
            r1 = 0
            r3.heuristicDefaultLifetime = r1
            r3.isSharedCache = r0
            r3.asynchronousWorkersMax = r0
            r3.asynchronousWorkersCore = r0
            r0 = 60
            r3.asynchronousWorkerIdleLifetimeSecs = r0
            r0 = 100
            r3.revalidationQueueSize = r0
            return
    }

    CacheConfig(long r4, int r6, int r7, boolean r8, boolean r9, boolean r10, float r11, long r12, boolean r14, int r15, int r16, int r17, int r18, boolean r19) {
            r3 = this;
            r0 = r3
            r3.<init>()
            r1 = r4
            r0.maxObjectSize = r1
            r1 = r6
            r0.maxCacheEntries = r1
            r1 = r7
            r0.maxUpdateRetries = r1
            r1 = r8
            r0.allow303Caching = r1
            r1 = r9
            r0.weakETagOnPutDeleteAllowed = r1
            r1 = r10
            r0.heuristicCachingEnabled = r1
            r1 = r11
            r0.heuristicCoefficient = r1
            r1 = r12
            r0.heuristicDefaultLifetime = r1
            r1 = r14
            r0.isSharedCache = r1
            r1 = r15
            r0.asynchronousWorkersMax = r1
            r1 = r16
            r0.asynchronousWorkersCore = r1
            r1 = r17
            r0.asynchronousWorkerIdleLifetimeSecs = r1
            r1 = r18
            r0.revalidationQueueSize = r1
            return
    }

    public static cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder copy(cz.msebera.android.httpclient.impl.client.cache.CacheConfig r3) {
            java.lang.String r0 = "Cache config"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder r0 = new cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder
            r0.<init>()
            long r1 = r3.getMaxObjectSize()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder r0 = r0.setMaxObjectSize(r1)
            int r1 = r3.getMaxCacheEntries()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder r0 = r0.setMaxCacheEntries(r1)
            int r1 = r3.getMaxUpdateRetries()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder r0 = r0.setMaxUpdateRetries(r1)
            boolean r1 = r3.isHeuristicCachingEnabled()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder r0 = r0.setHeuristicCachingEnabled(r1)
            float r1 = r3.getHeuristicCoefficient()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder r0 = r0.setHeuristicCoefficient(r1)
            long r1 = r3.getHeuristicDefaultLifetime()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder r0 = r0.setHeuristicDefaultLifetime(r1)
            boolean r1 = r3.isSharedCache()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder r0 = r0.setSharedCache(r1)
            int r1 = r3.getAsynchronousWorkersMax()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder r0 = r0.setAsynchronousWorkersMax(r1)
            int r1 = r3.getAsynchronousWorkersCore()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder r0 = r0.setAsynchronousWorkersCore(r1)
            int r1 = r3.getAsynchronousWorkerIdleLifetimeSecs()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder r0 = r0.setAsynchronousWorkerIdleLifetimeSecs(r1)
            int r1 = r3.getRevalidationQueueSize()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder r0 = r0.setRevalidationQueueSize(r1)
            boolean r3 = r3.isNeverCacheHTTP10ResponsesWithQuery()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder r3 = r0.setNeverCacheHTTP10ResponsesWithQueryString(r3)
            return r3
    }

    public static cz.msebera.android.httpclient.impl.client.cache.CacheConfig.Builder custom() {
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder r0 = new cz.msebera.android.httpclient.impl.client.cache.CacheConfig$Builder
            r0.<init>()
            return r0
    }

    protected cz.msebera.android.httpclient.impl.client.cache.CacheConfig clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r0 = (cz.msebera.android.httpclient.impl.client.cache.CacheConfig) r0
            return r0
    }

    protected java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r0 = r1.clone()
            return r0
    }

    public int getAsynchronousWorkerIdleLifetimeSecs() {
            r1 = this;
            int r0 = r1.asynchronousWorkerIdleLifetimeSecs
            return r0
    }

    public int getAsynchronousWorkersCore() {
            r1 = this;
            int r0 = r1.asynchronousWorkersCore
            return r0
    }

    public int getAsynchronousWorkersMax() {
            r1 = this;
            int r0 = r1.asynchronousWorkersMax
            return r0
    }

    public float getHeuristicCoefficient() {
            r1 = this;
            float r0 = r1.heuristicCoefficient
            return r0
    }

    public long getHeuristicDefaultLifetime() {
            r2 = this;
            long r0 = r2.heuristicDefaultLifetime
            return r0
    }

    public int getMaxCacheEntries() {
            r1 = this;
            int r0 = r1.maxCacheEntries
            return r0
    }

    public long getMaxObjectSize() {
            r2 = this;
            long r0 = r2.maxObjectSize
            return r0
    }

    @java.lang.Deprecated
    public int getMaxObjectSizeBytes() {
            r5 = this;
            long r0 = r5.maxObjectSize
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto Ld
            r0 = 2147483647(0x7fffffff, float:NaN)
            goto Le
        Ld:
            int r0 = (int) r0
        Le:
            return r0
    }

    public int getMaxUpdateRetries() {
            r1 = this;
            int r0 = r1.maxUpdateRetries
            return r0
    }

    public int getRevalidationQueueSize() {
            r1 = this;
            int r0 = r1.revalidationQueueSize
            return r0
    }

    public boolean is303CachingEnabled() {
            r1 = this;
            boolean r0 = r1.allow303Caching
            return r0
    }

    public boolean isHeuristicCachingEnabled() {
            r1 = this;
            boolean r0 = r1.heuristicCachingEnabled
            return r0
    }

    public boolean isNeverCacheHTTP10ResponsesWithQuery() {
            r1 = this;
            boolean r0 = r1.neverCacheHTTP10ResponsesWithQuery
            return r0
    }

    public boolean isSharedCache() {
            r1 = this;
            boolean r0 = r1.isSharedCache
            return r0
    }

    public boolean isWeakETagOnPutDeleteAllowed() {
            r1 = this;
            boolean r0 = r1.weakETagOnPutDeleteAllowed
            return r0
    }

    @java.lang.Deprecated
    public void setAsynchronousWorkerIdleLifetimeSecs(int r1) {
            r0 = this;
            r0.asynchronousWorkerIdleLifetimeSecs = r1
            return
    }

    @java.lang.Deprecated
    public void setAsynchronousWorkersCore(int r1) {
            r0 = this;
            r0.asynchronousWorkersCore = r1
            return
    }

    @java.lang.Deprecated
    public void setAsynchronousWorkersMax(int r1) {
            r0 = this;
            r0.asynchronousWorkersMax = r1
            return
    }

    @java.lang.Deprecated
    public void setHeuristicCachingEnabled(boolean r1) {
            r0 = this;
            r0.heuristicCachingEnabled = r1
            return
    }

    @java.lang.Deprecated
    public void setHeuristicCoefficient(float r1) {
            r0 = this;
            r0.heuristicCoefficient = r1
            return
    }

    @java.lang.Deprecated
    public void setHeuristicDefaultLifetime(long r1) {
            r0 = this;
            r0.heuristicDefaultLifetime = r1
            return
    }

    @java.lang.Deprecated
    public void setMaxCacheEntries(int r1) {
            r0 = this;
            r0.maxCacheEntries = r1
            return
    }

    @java.lang.Deprecated
    public void setMaxObjectSize(long r1) {
            r0 = this;
            r0.maxObjectSize = r1
            return
    }

    @java.lang.Deprecated
    public void setMaxObjectSizeBytes(int r3) {
            r2 = this;
            r0 = 2147483647(0x7fffffff, float:NaN)
            if (r3 <= r0) goto Lb
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            r2.maxObjectSize = r0
            goto Le
        Lb:
            long r0 = (long) r3
            r2.maxObjectSize = r0
        Le:
            return
    }

    @java.lang.Deprecated
    public void setMaxUpdateRetries(int r1) {
            r0 = this;
            r0.maxUpdateRetries = r1
            return
    }

    @java.lang.Deprecated
    public void setRevalidationQueueSize(int r1) {
            r0 = this;
            r0.revalidationQueueSize = r1
            return
    }

    @java.lang.Deprecated
    public void setSharedCache(boolean r1) {
            r0 = this;
            r0.isSharedCache = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[maxObjectSize="
            r0.append(r1)
            long r1 = r3.maxObjectSize
            r0.append(r1)
            java.lang.String r1 = ", maxCacheEntries="
            r0.append(r1)
            int r1 = r3.maxCacheEntries
            r0.append(r1)
            java.lang.String r1 = ", maxUpdateRetries="
            r0.append(r1)
            int r1 = r3.maxUpdateRetries
            r0.append(r1)
            java.lang.String r1 = ", 303CachingEnabled="
            r0.append(r1)
            boolean r1 = r3.allow303Caching
            r0.append(r1)
            java.lang.String r1 = ", weakETagOnPutDeleteAllowed="
            r0.append(r1)
            boolean r1 = r3.weakETagOnPutDeleteAllowed
            r0.append(r1)
            java.lang.String r1 = ", heuristicCachingEnabled="
            r0.append(r1)
            boolean r1 = r3.heuristicCachingEnabled
            r0.append(r1)
            java.lang.String r1 = ", heuristicCoefficient="
            r0.append(r1)
            float r1 = r3.heuristicCoefficient
            r0.append(r1)
            java.lang.String r1 = ", heuristicDefaultLifetime="
            r0.append(r1)
            long r1 = r3.heuristicDefaultLifetime
            r0.append(r1)
            java.lang.String r1 = ", isSharedCache="
            r0.append(r1)
            boolean r1 = r3.isSharedCache
            r0.append(r1)
            java.lang.String r1 = ", asynchronousWorkersMax="
            r0.append(r1)
            int r1 = r3.asynchronousWorkersMax
            r0.append(r1)
            java.lang.String r1 = ", asynchronousWorkersCore="
            r0.append(r1)
            int r1 = r3.asynchronousWorkersCore
            r0.append(r1)
            java.lang.String r1 = ", asynchronousWorkerIdleLifetimeSecs="
            r0.append(r1)
            int r1 = r3.asynchronousWorkerIdleLifetimeSecs
            r0.append(r1)
            java.lang.String r1 = ", revalidationQueueSize="
            r0.append(r1)
            int r1 = r3.revalidationQueueSize
            r0.append(r1)
            java.lang.String r1 = ", neverCacheHTTP10ResponsesWithQuery="
            r0.append(r1)
            boolean r1 = r3.neverCacheHTTP10ResponsesWithQuery
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
