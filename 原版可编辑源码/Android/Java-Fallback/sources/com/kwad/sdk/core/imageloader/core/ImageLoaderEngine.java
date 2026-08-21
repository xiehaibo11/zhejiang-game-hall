package com.kwad.sdk.core.imageloader.core;

class ImageLoaderEngine {
    private final java.util.Map<java.lang.Integer, java.lang.String> cacheKeysForImageAwares;
    final com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration configuration;
    private final java.util.concurrent.atomic.AtomicBoolean networkDenied;
    private final java.lang.Object pauseLock;
    private final java.util.concurrent.atomic.AtomicBoolean paused;
    private final java.util.concurrent.atomic.AtomicBoolean slowNetwork;
    private java.util.concurrent.Executor taskDistributor;
    private java.util.concurrent.Executor taskExecutor;
    private java.util.concurrent.Executor taskExecutorForCachedImages;
    private final java.util.Map<java.lang.String, java.util.concurrent.locks.ReentrantLock> uriLocks;


    ImageLoaderEngine(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r3) {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r0 = java.util.Collections.synchronizedMap(r0)
            r2.cacheKeysForImageAwares = r0
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            r2.uriLocks = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.paused = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>(r1)
            r2.networkDenied = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>(r1)
            r2.slowNetwork = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.pauseLock = r0
            r2.configuration = r3
            java.util.concurrent.Executor r0 = r3.taskExecutor
            r2.taskExecutor = r0
            java.util.concurrent.Executor r0 = r3.taskExecutorForCachedImages
            r2.taskExecutorForCachedImages = r0
            java.util.concurrent.Executor r3 = r3.taskDistributor
            r2.taskDistributor = r3
            return
    }

    static void access$000(com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0) {
            r0.initExecutorsIfNeed()
            return
    }

    static java.util.concurrent.Executor access$100(com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0) {
            java.util.concurrent.Executor r0 = r0.taskExecutorForCachedImages
            return r0
    }

    static java.util.concurrent.Executor access$200(com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0) {
            java.util.concurrent.Executor r0 = r0.taskExecutor
            return r0
    }

    private java.util.concurrent.Executor createTaskExecutor() {
            r3 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r3.configuration
            int r0 = r0.threadPoolSize
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r1 = r3.configuration
            int r1 = r1.threadPriority
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r2 = r3.configuration
            com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r2 = r2.tasksProcessingType
            java.util.concurrent.Executor r0 = com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory.createExecutor(r0, r1, r2)
            return r0
    }

    private void initExecutorsIfNeed() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r1.configuration
            boolean r0 = r0.customExecutor
            if (r0 != 0) goto L16
            java.util.concurrent.Executor r0 = r1.taskExecutor
            java.util.concurrent.ExecutorService r0 = (java.util.concurrent.ExecutorService) r0
            boolean r0 = r0.isShutdown()
            if (r0 == 0) goto L16
            java.util.concurrent.Executor r0 = r1.createTaskExecutor()
            r1.taskExecutor = r0
        L16:
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r1.configuration
            boolean r0 = r0.customExecutorForCachedImages
            if (r0 != 0) goto L2c
            java.util.concurrent.Executor r0 = r1.taskExecutorForCachedImages
            java.util.concurrent.ExecutorService r0 = (java.util.concurrent.ExecutorService) r0
            boolean r0 = r0.isShutdown()
            if (r0 == 0) goto L2c
            java.util.concurrent.Executor r0 = r1.createTaskExecutor()
            r1.taskExecutorForCachedImages = r0
        L2c:
            return
    }

    void cancelDisplayTaskFor(com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r2) {
            r1 = this;
            java.util.Map<java.lang.Integer, java.lang.String> r0 = r1.cacheKeysForImageAwares
            int r2 = r2.getId()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.remove(r2)
            return
    }

    void denyNetworkDownloads(boolean r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.networkDenied
            r0.set(r2)
            return
    }

    void fireCallback(java.lang.Runnable r2) {
            r1 = this;
            java.util.concurrent.Executor r0 = r1.taskDistributor
            r0.execute(r2)
            return
    }

    java.lang.String getLoadingUriForView(com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r2) {
            r1 = this;
            java.util.Map<java.lang.Integer, java.lang.String> r0 = r1.cacheKeysForImageAwares
            int r2 = r2.getId()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    java.util.concurrent.locks.ReentrantLock getLockForUri(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.util.concurrent.locks.ReentrantLock> r0 = r2.uriLocks
            java.lang.Object r0 = r0.get(r3)
            java.util.concurrent.locks.ReentrantLock r0 = (java.util.concurrent.locks.ReentrantLock) r0
            if (r0 != 0) goto L14
            java.util.concurrent.locks.ReentrantLock r0 = new java.util.concurrent.locks.ReentrantLock
            r0.<init>()
            java.util.Map<java.lang.String, java.util.concurrent.locks.ReentrantLock> r1 = r2.uriLocks
            r1.put(r3, r0)
        L14:
            return r0
    }

    java.util.concurrent.atomic.AtomicBoolean getPause() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.paused
            return r0
    }

    java.lang.Object getPauseLock() {
            r1 = this;
            java.lang.Object r0 = r1.pauseLock
            return r0
    }

    void handleSlowNetwork(boolean r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.slowNetwork
            r0.set(r2)
            return
    }

    boolean isNetworkDenied() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.networkDenied
            boolean r0 = r0.get()
            return r0
    }

    boolean isSlowNetwork() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.slowNetwork
            boolean r0 = r0.get()
            return r0
    }

    void pause() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.paused
            r1 = 1
            r0.set(r1)
            return
    }

    void prepareDisplayTaskFor(com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.Integer, java.lang.String> r0 = r1.cacheKeysForImageAwares
            int r2 = r2.getId()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.put(r2, r3)
            return
    }

    void resume() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.paused
            r1 = 0
            r0.set(r1)
            java.lang.Object r0 = r2.pauseLock
            monitor-enter(r0)
            java.lang.Object r1 = r2.pauseLock     // Catch: java.lang.Throwable -> L10
            r1.notifyAll()     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r1
    }

    void stop() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r1.configuration
            boolean r0 = r0.customExecutor
            if (r0 != 0) goto Ld
            java.util.concurrent.Executor r0 = r1.taskExecutor
            java.util.concurrent.ExecutorService r0 = (java.util.concurrent.ExecutorService) r0
            r0.shutdownNow()
        Ld:
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r1.configuration
            boolean r0 = r0.customExecutorForCachedImages
            if (r0 != 0) goto L1a
            java.util.concurrent.Executor r0 = r1.taskExecutorForCachedImages
            java.util.concurrent.ExecutorService r0 = (java.util.concurrent.ExecutorService) r0
            r0.shutdownNow()
        L1a:
            java.util.Map<java.lang.Integer, java.lang.String> r0 = r1.cacheKeysForImageAwares
            r0.clear()
            java.util.Map<java.lang.String, java.util.concurrent.locks.ReentrantLock> r0 = r1.uriLocks
            r0.clear()
            return
    }

    void submit(com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask r3) {
            r2 = this;
            java.util.concurrent.Executor r0 = r2.taskDistributor
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine$1 r1 = new com.kwad.sdk.core.imageloader.core.ImageLoaderEngine$1
            r1.<init>(r2, r3)
            r0.execute(r1)
            return
    }

    void submit(com.kwad.sdk.core.imageloader.core.ProcessAndDisplayImageTask r2) {
            r1 = this;
            r1.initExecutorsIfNeed()
            java.util.concurrent.Executor r0 = r1.taskExecutorForCachedImages
            r0.execute(r2)
            return
    }
}
