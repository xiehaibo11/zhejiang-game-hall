package com.bumptech.glide.load.engine;

public class Engine implements com.bumptech.glide.load.engine.EngineJobListener, com.bumptech.glide.load.engine.cache.MemoryCache.ResourceRemovedListener, com.bumptech.glide.load.engine.EngineResource.ResourceListener {
    private static final java.lang.String TAG = "Engine";
    private final java.util.Map<com.bumptech.glide.load.Key, java.lang.ref.WeakReference<com.bumptech.glide.load.engine.EngineResource<?>>> activeResources;
    private final com.bumptech.glide.load.engine.cache.MemoryCache cache;
    private final com.bumptech.glide.load.engine.Engine.LazyDiskCacheProvider diskCacheProvider;
    private final com.bumptech.glide.load.engine.Engine.EngineJobFactory engineJobFactory;
    private final java.util.Map<com.bumptech.glide.load.Key, com.bumptech.glide.load.engine.EngineJob> jobs;
    private final com.bumptech.glide.load.engine.EngineKeyFactory keyFactory;
    private final com.bumptech.glide.load.engine.ResourceRecycler resourceRecycler;
    private java.lang.ref.ReferenceQueue<com.bumptech.glide.load.engine.EngineResource<?>> resourceReferenceQueue;

    static class EngineJobFactory {
        private final java.util.concurrent.ExecutorService diskCacheService;
        private final com.bumptech.glide.load.engine.EngineJobListener listener;
        private final java.util.concurrent.ExecutorService sourceService;

        public EngineJobFactory(java.util.concurrent.ExecutorService r1, java.util.concurrent.ExecutorService r2, com.bumptech.glide.load.engine.EngineJobListener r3) {
                r0 = this;
                r0.<init>()
                r0.diskCacheService = r1
                r0.sourceService = r2
                r0.listener = r3
                return
        }

        public com.bumptech.glide.load.engine.EngineJob build(com.bumptech.glide.load.Key r8, boolean r9) {
                r7 = this;
                com.bumptech.glide.load.engine.EngineJob r6 = new com.bumptech.glide.load.engine.EngineJob
                java.util.concurrent.ExecutorService r2 = r7.diskCacheService
                java.util.concurrent.ExecutorService r3 = r7.sourceService
                com.bumptech.glide.load.engine.EngineJobListener r5 = r7.listener
                r0 = r6
                r1 = r8
                r4 = r9
                r0.<init>(r1, r2, r3, r4, r5)
                return r6
        }
    }

    private static class LazyDiskCacheProvider implements com.bumptech.glide.load.engine.DecodeJob.DiskCacheProvider {
        private volatile com.bumptech.glide.load.engine.cache.DiskCache diskCache;
        private final com.bumptech.glide.load.engine.cache.DiskCache.Factory factory;

        public LazyDiskCacheProvider(com.bumptech.glide.load.engine.cache.DiskCache.Factory r1) {
                r0 = this;
                r0.<init>()
                r0.factory = r1
                return
        }

        @Override
        public com.bumptech.glide.load.engine.cache.DiskCache getDiskCache() {
                r1 = this;
                com.bumptech.glide.load.engine.cache.DiskCache r0 = r1.diskCache
                if (r0 != 0) goto L21
                monitor-enter(r1)
                com.bumptech.glide.load.engine.cache.DiskCache r0 = r1.diskCache     // Catch: java.lang.Throwable -> L1e
                if (r0 != 0) goto L11
                com.bumptech.glide.load.engine.cache.DiskCache$Factory r0 = r1.factory     // Catch: java.lang.Throwable -> L1e
                com.bumptech.glide.load.engine.cache.DiskCache r0 = r0.build()     // Catch: java.lang.Throwable -> L1e
                r1.diskCache = r0     // Catch: java.lang.Throwable -> L1e
            L11:
                com.bumptech.glide.load.engine.cache.DiskCache r0 = r1.diskCache     // Catch: java.lang.Throwable -> L1e
                if (r0 != 0) goto L1c
                com.bumptech.glide.load.engine.cache.DiskCacheAdapter r0 = new com.bumptech.glide.load.engine.cache.DiskCacheAdapter     // Catch: java.lang.Throwable -> L1e
                r0.<init>()     // Catch: java.lang.Throwable -> L1e
                r1.diskCache = r0     // Catch: java.lang.Throwable -> L1e
            L1c:
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L1e
                goto L21
            L1e:
                r0 = move-exception
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L1e
                throw r0
            L21:
                com.bumptech.glide.load.engine.cache.DiskCache r0 = r1.diskCache
                return r0
        }
    }

    public static class LoadStatus {
        private final com.bumptech.glide.request.ResourceCallback cb;
        private final com.bumptech.glide.load.engine.EngineJob engineJob;

        public LoadStatus(com.bumptech.glide.request.ResourceCallback r1, com.bumptech.glide.load.engine.EngineJob r2) {
                r0 = this;
                r0.<init>()
                r0.cb = r1
                r0.engineJob = r2
                return
        }

        public void cancel() {
                r2 = this;
                com.bumptech.glide.load.engine.EngineJob r0 = r2.engineJob
                com.bumptech.glide.request.ResourceCallback r1 = r2.cb
                r0.removeCallback(r1)
                return
        }
    }

    private static class RefQueueIdleHandler implements android.os.MessageQueue.IdleHandler {
        private final java.util.Map<com.bumptech.glide.load.Key, java.lang.ref.WeakReference<com.bumptech.glide.load.engine.EngineResource<?>>> activeResources;
        private final java.lang.ref.ReferenceQueue<com.bumptech.glide.load.engine.EngineResource<?>> queue;

        public RefQueueIdleHandler(java.util.Map<com.bumptech.glide.load.Key, java.lang.ref.WeakReference<com.bumptech.glide.load.engine.EngineResource<?>>> r1, java.lang.ref.ReferenceQueue<com.bumptech.glide.load.engine.EngineResource<?>> r2) {
                r0 = this;
                r0.<init>()
                r0.activeResources = r1
                r0.queue = r2
                return
        }

        @Override
        public boolean queueIdle() {
                r2 = this;
                java.lang.ref.ReferenceQueue<com.bumptech.glide.load.engine.EngineResource<?>> r0 = r2.queue
                java.lang.ref.Reference r0 = r0.poll()
                com.bumptech.glide.load.engine.Engine$ResourceWeakReference r0 = (com.bumptech.glide.load.engine.Engine.ResourceWeakReference) r0
                if (r0 == 0) goto L13
                java.util.Map<com.bumptech.glide.load.Key, java.lang.ref.WeakReference<com.bumptech.glide.load.engine.EngineResource<?>>> r1 = r2.activeResources
                com.bumptech.glide.load.Key r0 = com.bumptech.glide.load.engine.Engine.ResourceWeakReference.access$000(r0)
                r1.remove(r0)
            L13:
                r0 = 1
                return r0
        }
    }

    private static class ResourceWeakReference extends java.lang.ref.WeakReference<com.bumptech.glide.load.engine.EngineResource<?>> {
        private final com.bumptech.glide.load.Key key;

        public ResourceWeakReference(com.bumptech.glide.load.Key r1, com.bumptech.glide.load.engine.EngineResource<?> r2, java.lang.ref.ReferenceQueue<? super com.bumptech.glide.load.engine.EngineResource<?>> r3) {
                r0 = this;
                r0.<init>(r2, r3)
                r0.key = r1
                return
        }

        static com.bumptech.glide.load.Key access$000(com.bumptech.glide.load.engine.Engine.ResourceWeakReference r0) {
                com.bumptech.glide.load.Key r0 = r0.key
                return r0
        }
    }

    public Engine(com.bumptech.glide.load.engine.cache.MemoryCache r11, com.bumptech.glide.load.engine.cache.DiskCache.Factory r12, java.util.concurrent.ExecutorService r13, java.util.concurrent.ExecutorService r14) {
            r10 = this;
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            return
    }

    Engine(com.bumptech.glide.load.engine.cache.MemoryCache r2, com.bumptech.glide.load.engine.cache.DiskCache.Factory r3, java.util.concurrent.ExecutorService r4, java.util.concurrent.ExecutorService r5, java.util.Map<com.bumptech.glide.load.Key, com.bumptech.glide.load.engine.EngineJob> r6, com.bumptech.glide.load.engine.EngineKeyFactory r7, java.util.Map<com.bumptech.glide.load.Key, java.lang.ref.WeakReference<com.bumptech.glide.load.engine.EngineResource<?>>> r8, com.bumptech.glide.load.engine.Engine.EngineJobFactory r9, com.bumptech.glide.load.engine.ResourceRecycler r10) {
            r1 = this;
            r1.<init>()
            r1.cache = r2
            com.bumptech.glide.load.engine.Engine$LazyDiskCacheProvider r0 = new com.bumptech.glide.load.engine.Engine$LazyDiskCacheProvider
            r0.<init>(r3)
            r1.diskCacheProvider = r0
            if (r8 != 0) goto L13
            java.util.HashMap r8 = new java.util.HashMap
            r8.<init>()
        L13:
            r1.activeResources = r8
            if (r7 != 0) goto L1c
            com.bumptech.glide.load.engine.EngineKeyFactory r7 = new com.bumptech.glide.load.engine.EngineKeyFactory
            r7.<init>()
        L1c:
            r1.keyFactory = r7
            if (r6 != 0) goto L25
            java.util.HashMap r6 = new java.util.HashMap
            r6.<init>()
        L25:
            r1.jobs = r6
            if (r9 != 0) goto L2e
            com.bumptech.glide.load.engine.Engine$EngineJobFactory r9 = new com.bumptech.glide.load.engine.Engine$EngineJobFactory
            r9.<init>(r4, r5, r1)
        L2e:
            r1.engineJobFactory = r9
            if (r10 != 0) goto L37
            com.bumptech.glide.load.engine.ResourceRecycler r10 = new com.bumptech.glide.load.engine.ResourceRecycler
            r10.<init>()
        L37:
            r1.resourceRecycler = r10
            r2.setResourceRemovedListener(r1)
            return
    }

    private com.bumptech.glide.load.engine.EngineResource<?> getEngineResourceFromCache(com.bumptech.glide.load.Key r3) {
            r2 = this;
            com.bumptech.glide.load.engine.cache.MemoryCache r0 = r2.cache
            com.bumptech.glide.load.engine.Resource r3 = r0.remove(r3)
            if (r3 != 0) goto La
            r3 = 0
            goto L18
        La:
            boolean r0 = r3 instanceof com.bumptech.glide.load.engine.EngineResource
            if (r0 == 0) goto L11
            com.bumptech.glide.load.engine.EngineResource r3 = (com.bumptech.glide.load.engine.EngineResource) r3
            goto L18
        L11:
            com.bumptech.glide.load.engine.EngineResource r0 = new com.bumptech.glide.load.engine.EngineResource
            r1 = 1
            r0.<init>(r3, r1)
            r3 = r0
        L18:
            return r3
    }

    private java.lang.ref.ReferenceQueue<com.bumptech.glide.load.engine.EngineResource<?>> getReferenceQueue() {
            r4 = this;
            java.lang.ref.ReferenceQueue<com.bumptech.glide.load.engine.EngineResource<?>> r0 = r4.resourceReferenceQueue
            if (r0 != 0) goto L1b
            java.lang.ref.ReferenceQueue r0 = new java.lang.ref.ReferenceQueue
            r0.<init>()
            r4.resourceReferenceQueue = r0
            android.os.MessageQueue r0 = android.os.Looper.myQueue()
            com.bumptech.glide.load.engine.Engine$RefQueueIdleHandler r1 = new com.bumptech.glide.load.engine.Engine$RefQueueIdleHandler
            java.util.Map<com.bumptech.glide.load.Key, java.lang.ref.WeakReference<com.bumptech.glide.load.engine.EngineResource<?>>> r2 = r4.activeResources
            java.lang.ref.ReferenceQueue<com.bumptech.glide.load.engine.EngineResource<?>> r3 = r4.resourceReferenceQueue
            r1.<init>(r2, r3)
            r0.addIdleHandler(r1)
        L1b:
            java.lang.ref.ReferenceQueue<com.bumptech.glide.load.engine.EngineResource<?>> r0 = r4.resourceReferenceQueue
            return r0
    }

    private com.bumptech.glide.load.engine.EngineResource<?> loadFromActiveResources(com.bumptech.glide.load.Key r2, boolean r3) {
            r1 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.util.Map<com.bumptech.glide.load.Key, java.lang.ref.WeakReference<com.bumptech.glide.load.engine.EngineResource<?>>> r3 = r1.activeResources
            java.lang.Object r3 = r3.get(r2)
            java.lang.ref.WeakReference r3 = (java.lang.ref.WeakReference) r3
            if (r3 == 0) goto L20
            java.lang.Object r3 = r3.get()
            r0 = r3
            com.bumptech.glide.load.engine.EngineResource r0 = (com.bumptech.glide.load.engine.EngineResource) r0
            if (r0 == 0) goto L1b
            r0.acquire()
            goto L20
        L1b:
            java.util.Map<com.bumptech.glide.load.Key, java.lang.ref.WeakReference<com.bumptech.glide.load.engine.EngineResource<?>>> r3 = r1.activeResources
            r3.remove(r2)
        L20:
            return r0
    }

    private com.bumptech.glide.load.engine.EngineResource<?> loadFromCache(com.bumptech.glide.load.Key r4, boolean r5) {
            r3 = this;
            if (r5 != 0) goto L4
            r4 = 0
            return r4
        L4:
            com.bumptech.glide.load.engine.EngineResource r5 = r3.getEngineResourceFromCache(r4)
            if (r5 == 0) goto L1b
            r5.acquire()
            java.util.Map<com.bumptech.glide.load.Key, java.lang.ref.WeakReference<com.bumptech.glide.load.engine.EngineResource<?>>> r0 = r3.activeResources
            com.bumptech.glide.load.engine.Engine$ResourceWeakReference r1 = new com.bumptech.glide.load.engine.Engine$ResourceWeakReference
            java.lang.ref.ReferenceQueue r2 = r3.getReferenceQueue()
            r1.<init>(r4, r5, r2)
            r0.put(r4, r1)
        L1b:
            return r5
    }

    private static void logWithTimeAndKey(java.lang.String r1, long r2, com.bumptech.glide.load.Key r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = " in "
            r0.append(r1)
            double r1 = com.bumptech.glide.util.LogTime.getElapsedMillis(r2)
            r0.append(r1)
            java.lang.String r1 = "ms, key: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = r0.toString()
            java.lang.String r2 = "Engine"
            android.util.Log.v(r2, r1)
            return
    }

    public void clearDiskCache() {
            r1 = this;
            com.bumptech.glide.load.engine.Engine$LazyDiskCacheProvider r0 = r1.diskCacheProvider
            com.bumptech.glide.load.engine.cache.DiskCache r0 = r0.getDiskCache()
            r0.clear()
            return
    }

    public <T, Z, R> com.bumptech.glide.load.engine.Engine.LoadStatus load(com.bumptech.glide.load.Key r28, int r29, int r30, com.bumptech.glide.load.data.DataFetcher<T> r31, com.bumptech.glide.provider.DataLoadProvider<T, Z> r32, com.bumptech.glide.load.Transformation<Z> r33, com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, R> r34, com.bumptech.glide.Priority r35, boolean r36, com.bumptech.glide.load.engine.DiskCacheStrategy r37, com.bumptech.glide.request.ResourceCallback r38) {
            r27 = this;
            r0 = r27
            r1 = r36
            r2 = r38
            com.bumptech.glide.util.Util.assertMainThread()
            long r3 = com.bumptech.glide.util.LogTime.getLogTime()
            java.lang.String r6 = r31.getId()
            com.bumptech.glide.load.engine.EngineKeyFactory r5 = r0.keyFactory
            com.bumptech.glide.load.ResourceDecoder r10 = r32.getCacheDecoder()
            com.bumptech.glide.load.ResourceDecoder r11 = r32.getSourceDecoder()
            com.bumptech.glide.load.ResourceEncoder r13 = r32.getEncoder()
            com.bumptech.glide.load.Encoder r15 = r32.getSourceEncoder()
            r7 = r28
            r8 = r29
            r9 = r30
            r12 = r33
            r14 = r34
            com.bumptech.glide.load.engine.EngineKey r5 = r5.buildKey(r6, r7, r8, r9, r10, r11, r12, r13, r14, r15)
            com.bumptech.glide.load.engine.EngineResource r6 = r0.loadFromCache(r5, r1)
            r7 = 0
            r8 = 2
            java.lang.String r9 = "Engine"
            if (r6 == 0) goto L4a
            r2.onResourceReady(r6)
            boolean r1 = android.util.Log.isLoggable(r9, r8)
            if (r1 == 0) goto L49
            java.lang.String r1 = "Loaded resource from cache"
            logWithTimeAndKey(r1, r3, r5)
        L49:
            return r7
        L4a:
            com.bumptech.glide.load.engine.EngineResource r6 = r0.loadFromActiveResources(r5, r1)
            if (r6 == 0) goto L5f
            r2.onResourceReady(r6)
            boolean r1 = android.util.Log.isLoggable(r9, r8)
            if (r1 == 0) goto L5e
            java.lang.String r1 = "Loaded resource from active resources"
            logWithTimeAndKey(r1, r3, r5)
        L5e:
            return r7
        L5f:
            java.util.Map<com.bumptech.glide.load.Key, com.bumptech.glide.load.engine.EngineJob> r6 = r0.jobs
            java.lang.Object r6 = r6.get(r5)
            com.bumptech.glide.load.engine.EngineJob r6 = (com.bumptech.glide.load.engine.EngineJob) r6
            if (r6 == 0) goto L7d
            r6.addCallback(r2)
            boolean r1 = android.util.Log.isLoggable(r9, r8)
            if (r1 == 0) goto L77
            java.lang.String r1 = "Added to existing load"
            logWithTimeAndKey(r1, r3, r5)
        L77:
            com.bumptech.glide.load.engine.Engine$LoadStatus r1 = new com.bumptech.glide.load.engine.Engine$LoadStatus
            r1.<init>(r2, r6)
            return r1
        L7d:
            com.bumptech.glide.load.engine.Engine$EngineJobFactory r6 = r0.engineJobFactory
            com.bumptech.glide.load.engine.EngineJob r1 = r6.build(r5, r1)
            com.bumptech.glide.load.engine.DecodeJob r6 = new com.bumptech.glide.load.engine.DecodeJob
            com.bumptech.glide.load.engine.Engine$LazyDiskCacheProvider r7 = r0.diskCacheProvider
            r16 = r6
            r17 = r5
            r18 = r29
            r19 = r30
            r20 = r31
            r21 = r32
            r22 = r33
            r23 = r34
            r24 = r7
            r25 = r37
            r26 = r35
            r16.<init>(r17, r18, r19, r20, r21, r22, r23, r24, r25, r26)
            com.bumptech.glide.load.engine.EngineRunnable r7 = new com.bumptech.glide.load.engine.EngineRunnable
            r10 = r35
            r7.<init>(r1, r6, r10)
            java.util.Map<com.bumptech.glide.load.Key, com.bumptech.glide.load.engine.EngineJob> r6 = r0.jobs
            r6.put(r5, r1)
            r1.addCallback(r2)
            r1.start(r7)
            boolean r6 = android.util.Log.isLoggable(r9, r8)
            if (r6 == 0) goto Lbd
            java.lang.String r6 = "Started new load"
            logWithTimeAndKey(r6, r3, r5)
        Lbd:
            com.bumptech.glide.load.engine.Engine$LoadStatus r3 = new com.bumptech.glide.load.engine.Engine$LoadStatus
            r3.<init>(r2, r1)
            return r3
    }

    @Override
    public void onEngineJobCancelled(com.bumptech.glide.load.engine.EngineJob r2, com.bumptech.glide.load.Key r3) {
            r1 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            java.util.Map<com.bumptech.glide.load.Key, com.bumptech.glide.load.engine.EngineJob> r0 = r1.jobs
            java.lang.Object r0 = r0.get(r3)
            com.bumptech.glide.load.engine.EngineJob r0 = (com.bumptech.glide.load.engine.EngineJob) r0
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L16
            java.util.Map<com.bumptech.glide.load.Key, com.bumptech.glide.load.engine.EngineJob> r2 = r1.jobs
            r2.remove(r3)
        L16:
            return
    }

    @Override
    public void onEngineJobComplete(com.bumptech.glide.load.Key r4, com.bumptech.glide.load.engine.EngineResource<?> r5) {
            r3 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            if (r5 == 0) goto L1c
            r5.setResourceListener(r4, r3)
            boolean r0 = r5.isCacheable()
            if (r0 == 0) goto L1c
            java.util.Map<com.bumptech.glide.load.Key, java.lang.ref.WeakReference<com.bumptech.glide.load.engine.EngineResource<?>>> r0 = r3.activeResources
            com.bumptech.glide.load.engine.Engine$ResourceWeakReference r1 = new com.bumptech.glide.load.engine.Engine$ResourceWeakReference
            java.lang.ref.ReferenceQueue r2 = r3.getReferenceQueue()
            r1.<init>(r4, r5, r2)
            r0.put(r4, r1)
        L1c:
            java.util.Map<com.bumptech.glide.load.Key, com.bumptech.glide.load.engine.EngineJob> r5 = r3.jobs
            r5.remove(r4)
            return
    }

    @Override
    public void onResourceReleased(com.bumptech.glide.load.Key r2, com.bumptech.glide.load.engine.EngineResource r3) {
            r1 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            java.util.Map<com.bumptech.glide.load.Key, java.lang.ref.WeakReference<com.bumptech.glide.load.engine.EngineResource<?>>> r0 = r1.activeResources
            r0.remove(r2)
            boolean r0 = r3.isCacheable()
            if (r0 == 0) goto L14
            com.bumptech.glide.load.engine.cache.MemoryCache r0 = r1.cache
            r0.put(r2, r3)
            goto L19
        L14:
            com.bumptech.glide.load.engine.ResourceRecycler r2 = r1.resourceRecycler
            r2.recycle(r3)
        L19:
            return
    }

    @Override
    public void onResourceRemoved(com.bumptech.glide.load.engine.Resource<?> r2) {
            r1 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            com.bumptech.glide.load.engine.ResourceRecycler r0 = r1.resourceRecycler
            r0.recycle(r2)
            return
    }

    public void release(com.bumptech.glide.load.engine.Resource r2) {
            r1 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            boolean r0 = r2 instanceof com.bumptech.glide.load.engine.EngineResource
            if (r0 == 0) goto Ld
            com.bumptech.glide.load.engine.EngineResource r2 = (com.bumptech.glide.load.engine.EngineResource) r2
            r2.release()
            return
        Ld:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Cannot release anything but an EngineResource"
            r2.<init>(r0)
            throw r2
    }
}
