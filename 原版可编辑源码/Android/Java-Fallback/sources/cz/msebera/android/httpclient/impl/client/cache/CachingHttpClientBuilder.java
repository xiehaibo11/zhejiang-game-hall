package cz.msebera.android.httpclient.impl.client.cache;

public class CachingHttpClientBuilder extends cz.msebera.android.httpclient.impl.client.HttpClientBuilder {
    private cz.msebera.android.httpclient.impl.client.cache.CacheConfig cacheConfig;
    private java.io.File cacheDir;
    private boolean deleteCache;
    private cz.msebera.android.httpclient.client.cache.HttpCacheInvalidator httpCacheInvalidator;
    private cz.msebera.android.httpclient.client.cache.ResourceFactory resourceFactory;
    private cz.msebera.android.httpclient.impl.client.cache.SchedulingStrategy schedulingStrategy;
    private cz.msebera.android.httpclient.client.cache.HttpCacheStorage storage;


    protected CachingHttpClientBuilder() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.deleteCache = r0
            return
    }

    public static cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder create() {
            cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder r0 = new cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder
            r0.<init>()
            return r0
    }

    private cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidator createAsynchronousRevalidator(cz.msebera.android.httpclient.impl.client.cache.CacheConfig r2) {
            r1 = this;
            int r0 = r2.getAsynchronousWorkersMax()
            if (r0 <= 0) goto L13
            cz.msebera.android.httpclient.impl.client.cache.SchedulingStrategy r2 = r1.createSchedulingStrategy(r2)
            cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidator r0 = new cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidator
            r0.<init>(r2)
            r1.addCloseable(r0)
            return r0
        L13:
            r2 = 0
            return r2
    }

    private cz.msebera.android.httpclient.impl.client.cache.SchedulingStrategy createSchedulingStrategy(cz.msebera.android.httpclient.impl.client.cache.CacheConfig r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.SchedulingStrategy r0 = r1.schedulingStrategy
            if (r0 == 0) goto L5
            goto La
        L5:
            cz.msebera.android.httpclient.impl.client.cache.ImmediateSchedulingStrategy r0 = new cz.msebera.android.httpclient.impl.client.cache.ImmediateSchedulingStrategy
            r0.<init>(r2)
        La:
            return r0
    }

    @Override
    protected cz.msebera.android.httpclient.impl.execchain.ClientExecChain decorateMainExec(cz.msebera.android.httpclient.impl.execchain.ClientExecChain r11) {
            r10 = this;
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r0 = r10.cacheConfig
            if (r0 == 0) goto L5
            goto L7
        L5:
            cz.msebera.android.httpclient.impl.client.cache.CacheConfig r0 = cz.msebera.android.httpclient.impl.client.cache.CacheConfig.DEFAULT
        L7:
            cz.msebera.android.httpclient.client.cache.ResourceFactory r1 = r10.resourceFactory
            if (r1 != 0) goto L1b
            java.io.File r1 = r10.cacheDir
            if (r1 != 0) goto L15
            cz.msebera.android.httpclient.impl.client.cache.HeapResourceFactory r1 = new cz.msebera.android.httpclient.impl.client.cache.HeapResourceFactory
            r1.<init>()
            goto L1b
        L15:
            cz.msebera.android.httpclient.impl.client.cache.FileResourceFactory r2 = new cz.msebera.android.httpclient.impl.client.cache.FileResourceFactory
            r2.<init>(r1)
            goto L1c
        L1b:
            r2 = r1
        L1c:
            cz.msebera.android.httpclient.client.cache.HttpCacheStorage r1 = r10.storage
            if (r1 != 0) goto L3f
            java.io.File r1 = r10.cacheDir
            if (r1 != 0) goto L2a
            cz.msebera.android.httpclient.impl.client.cache.BasicHttpCacheStorage r1 = new cz.msebera.android.httpclient.impl.client.cache.BasicHttpCacheStorage
            r1.<init>(r0)
            goto L3f
        L2a:
            cz.msebera.android.httpclient.impl.client.cache.ManagedHttpCacheStorage r1 = new cz.msebera.android.httpclient.impl.client.cache.ManagedHttpCacheStorage
            r1.<init>(r0)
            boolean r3 = r10.deleteCache
            if (r3 == 0) goto L3c
            cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder$1 r3 = new cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder$1
            r3.<init>(r10, r1)
            r10.addCloseable(r3)
            goto L3f
        L3c:
            r10.addCloseable(r1)
        L3f:
            r3 = r1
            cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidator r7 = r10.createAsynchronousRevalidator(r0)
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r5 = new cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator
            r5.<init>()
            cz.msebera.android.httpclient.client.cache.HttpCacheInvalidator r1 = r10.httpCacheInvalidator
            if (r1 != 0) goto L52
            cz.msebera.android.httpclient.impl.client.cache.CacheInvalidator r1 = new cz.msebera.android.httpclient.impl.client.cache.CacheInvalidator
            r1.<init>(r5, r3)
        L52:
            r6 = r1
            cz.msebera.android.httpclient.impl.client.cache.CachingExec r8 = new cz.msebera.android.httpclient.impl.client.cache.CachingExec
            cz.msebera.android.httpclient.impl.client.cache.BasicHttpCache r9 = new cz.msebera.android.httpclient.impl.client.cache.BasicHttpCache
            r1 = r9
            r4 = r0
            r1.<init>(r2, r3, r4, r5, r6)
            r8.<init>(r11, r9, r0, r7)
            return r8
    }

    public final cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder setCacheConfig(cz.msebera.android.httpclient.impl.client.cache.CacheConfig r1) {
            r0 = this;
            r0.cacheConfig = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder setCacheDir(java.io.File r1) {
            r0 = this;
            r0.cacheDir = r1
            return r0
    }

    public cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder setDeleteCache(boolean r1) {
            r0 = this;
            r0.deleteCache = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder setHttpCacheInvalidator(cz.msebera.android.httpclient.client.cache.HttpCacheInvalidator r1) {
            r0 = this;
            r0.httpCacheInvalidator = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder setHttpCacheStorage(cz.msebera.android.httpclient.client.cache.HttpCacheStorage r1) {
            r0 = this;
            r0.storage = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder setResourceFactory(cz.msebera.android.httpclient.client.cache.ResourceFactory r1) {
            r0 = this;
            r0.resourceFactory = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.cache.CachingHttpClientBuilder setSchedulingStrategy(cz.msebera.android.httpclient.impl.client.cache.SchedulingStrategy r1) {
            r0 = this;
            r0.schedulingStrategy = r1
            return r0
    }
}
