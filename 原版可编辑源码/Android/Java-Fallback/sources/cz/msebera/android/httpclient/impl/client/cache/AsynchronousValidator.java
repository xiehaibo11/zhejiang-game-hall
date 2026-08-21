package cz.msebera.android.httpclient.impl.client.cache;

class AsynchronousValidator implements java.io.Closeable {
    private final cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator cacheKeyGenerator;
    private final cz.msebera.android.httpclient.impl.client.cache.FailureCache failureCache;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final java.util.Set<java.lang.String> queued;
    private final cz.msebera.android.httpclient.impl.client.cache.SchedulingStrategy schedulingStrategy;

    public AsynchronousValidator(cz.msebera.android.httpclient.impl.client.cache.CacheConfig r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.ImmediateSchedulingStrategy r0 = new cz.msebera.android.httpclient.impl.client.cache.ImmediateSchedulingStrategy
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    AsynchronousValidator(cz.msebera.android.httpclient.impl.client.cache.SchedulingStrategy r3) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            r2.schedulingStrategy = r3
            java.util.HashSet r3 = new java.util.HashSet
            r3.<init>()
            r2.queued = r3
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r3 = new cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator
            r3.<init>()
            r2.cacheKeyGenerator = r3
            cz.msebera.android.httpclient.impl.client.cache.DefaultFailureCache r3 = new cz.msebera.android.httpclient.impl.client.cache.DefaultFailureCache
            r3.<init>()
            r2.failureCache = r3
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.SchedulingStrategy r0 = r1.schedulingStrategy
            r0.close()
            return
    }

    java.util.Set<java.lang.String> getScheduledIdentifiers() {
            r1 = this;
            java.util.Set<java.lang.String> r0 = r1.queued
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            return r0
    }

    void jobFailed(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.FailureCache r0 = r1.failureCache
            r0.increaseErrorCount(r2)
            return
    }

    void jobSuccessful(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.FailureCache r0 = r1.failureCache
            r0.resetErrorCount(r2)
            return
    }

    synchronized void markComplete(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Set<java.lang.String> r0 = r1.queued     // Catch: java.lang.Throwable -> L8
            r0.remove(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void revalidateCacheEntry(cz.msebera.android.httpclient.impl.client.cache.CachingExec r14, cz.msebera.android.httpclient.conn.routing.HttpRoute r15, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r16, cz.msebera.android.httpclient.client.protocol.HttpClientContext r17, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r18, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r19) {
            r13 = this;
            r11 = r13
            monitor-enter(r13)
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator r0 = r11.cacheKeyGenerator     // Catch: java.lang.Throwable -> L5c
            cz.msebera.android.httpclient.HttpHost r1 = r17.getTargetHost()     // Catch: java.lang.Throwable -> L5c
            r5 = r16
            r8 = r19
            java.lang.String r12 = r0.getVariantURI(r1, r5, r8)     // Catch: java.lang.Throwable -> L5c
            java.util.Set<java.lang.String> r0 = r11.queued     // Catch: java.lang.Throwable -> L5c
            boolean r0 = r0.contains(r12)     // Catch: java.lang.Throwable -> L5c
            if (r0 != 0) goto L5a
            cz.msebera.android.httpclient.impl.client.cache.FailureCache r0 = r11.failureCache     // Catch: java.lang.Throwable -> L5c
            int r10 = r0.getErrorCount(r12)     // Catch: java.lang.Throwable -> L5c
            cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidationRequest r0 = new cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidationRequest     // Catch: java.lang.Throwable -> L5c
            r1 = r0
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r9 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L5c
            cz.msebera.android.httpclient.impl.client.cache.SchedulingStrategy r1 = r11.schedulingStrategy     // Catch: java.util.concurrent.RejectedExecutionException -> L3b java.lang.Throwable -> L5c
            r1.schedule(r0)     // Catch: java.util.concurrent.RejectedExecutionException -> L3b java.lang.Throwable -> L5c
            java.util.Set<java.lang.String> r0 = r11.queued     // Catch: java.util.concurrent.RejectedExecutionException -> L3b java.lang.Throwable -> L5c
            r0.add(r12)     // Catch: java.util.concurrent.RejectedExecutionException -> L3b java.lang.Throwable -> L5c
            goto L5a
        L3b:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r11.log     // Catch: java.lang.Throwable -> L5c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5c
            r2.<init>()     // Catch: java.lang.Throwable -> L5c
            java.lang.String r3 = "Revalidation for ["
            r2.append(r3)     // Catch: java.lang.Throwable -> L5c
            r2.append(r12)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r3 = "] not scheduled: "
            r2.append(r3)     // Catch: java.lang.Throwable -> L5c
            r2.append(r0)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L5c
            r1.debug(r0)     // Catch: java.lang.Throwable -> L5c
        L5a:
            monitor-exit(r13)
            return
        L5c:
            r0 = move-exception
            monitor-exit(r13)
            throw r0
    }
}
