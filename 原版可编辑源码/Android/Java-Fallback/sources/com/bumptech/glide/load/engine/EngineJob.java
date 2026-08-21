package com.bumptech.glide.load.engine;

class EngineJob implements com.bumptech.glide.load.engine.EngineRunnable.EngineRunnableManager {
    private static final com.bumptech.glide.load.engine.EngineJob.EngineResourceFactory DEFAULT_FACTORY = null;
    private static final android.os.Handler MAIN_THREAD_HANDLER = null;
    private static final int MSG_COMPLETE = 1;
    private static final int MSG_EXCEPTION = 2;
    private final java.util.List<com.bumptech.glide.request.ResourceCallback> cbs;
    private final java.util.concurrent.ExecutorService diskCacheService;
    private com.bumptech.glide.load.engine.EngineResource<?> engineResource;
    private final com.bumptech.glide.load.engine.EngineJob.EngineResourceFactory engineResourceFactory;
    private com.bumptech.glide.load.engine.EngineRunnable engineRunnable;
    private java.lang.Exception exception;
    private volatile java.util.concurrent.Future<?> future;
    private boolean hasException;
    private boolean hasResource;
    private java.util.Set<com.bumptech.glide.request.ResourceCallback> ignoredCallbacks;
    private final boolean isCacheable;
    private boolean isCancelled;
    private final com.bumptech.glide.load.Key key;
    private final com.bumptech.glide.load.engine.EngineJobListener listener;
    private com.bumptech.glide.load.engine.Resource<?> resource;
    private final java.util.concurrent.ExecutorService sourceService;

    static class 1 {
    }

    static class EngineResourceFactory {
        EngineResourceFactory() {
                r0 = this;
                r0.<init>()
                return
        }

        public <R> com.bumptech.glide.load.engine.EngineResource<R> build(com.bumptech.glide.load.engine.Resource<R> r2, boolean r3) {
                r1 = this;
                com.bumptech.glide.load.engine.EngineResource r0 = new com.bumptech.glide.load.engine.EngineResource
                r0.<init>(r2, r3)
                return r0
        }
    }

    private static class MainThreadCallback implements android.os.Handler.Callback {
        private MainThreadCallback() {
                r0 = this;
                r0.<init>()
                return
        }

        MainThreadCallback(com.bumptech.glide.load.engine.EngineJob.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean handleMessage(android.os.Message r4) {
                r3 = this;
                int r0 = r4.what
                r1 = 1
                if (r1 == r0) goto Ld
                r0 = 2
                int r2 = r4.what
                if (r0 != r2) goto Lb
                goto Ld
            Lb:
                r4 = 0
                return r4
            Ld:
                java.lang.Object r0 = r4.obj
                com.bumptech.glide.load.engine.EngineJob r0 = (com.bumptech.glide.load.engine.EngineJob) r0
                int r4 = r4.what
                if (r1 != r4) goto L19
                com.bumptech.glide.load.engine.EngineJob.access$100(r0)
                goto L1c
            L19:
                com.bumptech.glide.load.engine.EngineJob.access$200(r0)
            L1c:
                return r1
        }
    }

    static {
            com.bumptech.glide.load.engine.EngineJob$EngineResourceFactory r0 = new com.bumptech.glide.load.engine.EngineJob$EngineResourceFactory
            r0.<init>()
            com.bumptech.glide.load.engine.EngineJob.DEFAULT_FACTORY = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            com.bumptech.glide.load.engine.EngineJob$MainThreadCallback r2 = new com.bumptech.glide.load.engine.EngineJob$MainThreadCallback
            r3 = 0
            r2.<init>(r3)
            r0.<init>(r1, r2)
            com.bumptech.glide.load.engine.EngineJob.MAIN_THREAD_HANDLER = r0
            return
    }

    public EngineJob(com.bumptech.glide.load.Key r8, java.util.concurrent.ExecutorService r9, java.util.concurrent.ExecutorService r10, boolean r11, com.bumptech.glide.load.engine.EngineJobListener r12) {
            r7 = this;
            com.bumptech.glide.load.engine.EngineJob$EngineResourceFactory r6 = com.bumptech.glide.load.engine.EngineJob.DEFAULT_FACTORY
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public EngineJob(com.bumptech.glide.load.Key r2, java.util.concurrent.ExecutorService r3, java.util.concurrent.ExecutorService r4, boolean r5, com.bumptech.glide.load.engine.EngineJobListener r6, com.bumptech.glide.load.engine.EngineJob.EngineResourceFactory r7) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.cbs = r0
            r1.key = r2
            r1.diskCacheService = r3
            r1.sourceService = r4
            r1.isCacheable = r5
            r1.listener = r6
            r1.engineResourceFactory = r7
            return
    }

    static void access$100(com.bumptech.glide.load.engine.EngineJob r0) {
            r0.handleResultOnMainThread()
            return
    }

    static void access$200(com.bumptech.glide.load.engine.EngineJob r0) {
            r0.handleExceptionOnMainThread()
            return
    }

    private void addIgnoredCallback(com.bumptech.glide.request.ResourceCallback r2) {
            r1 = this;
            java.util.Set<com.bumptech.glide.request.ResourceCallback> r0 = r1.ignoredCallbacks
            if (r0 != 0) goto Lb
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.ignoredCallbacks = r0
        Lb:
            java.util.Set<com.bumptech.glide.request.ResourceCallback> r0 = r1.ignoredCallbacks
            r0.add(r2)
            return
    }

    private void handleExceptionOnMainThread() {
            r3 = this;
            boolean r0 = r3.isCancelled
            if (r0 == 0) goto L5
            return
        L5:
            java.util.List<com.bumptech.glide.request.ResourceCallback> r0 = r3.cbs
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L37
            r0 = 1
            r3.hasException = r0
            com.bumptech.glide.load.engine.EngineJobListener r0 = r3.listener
            com.bumptech.glide.load.Key r1 = r3.key
            r2 = 0
            r0.onEngineJobComplete(r1, r2)
            java.util.List<com.bumptech.glide.request.ResourceCallback> r0 = r3.cbs
            java.util.Iterator r0 = r0.iterator()
        L1e:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L36
            java.lang.Object r1 = r0.next()
            com.bumptech.glide.request.ResourceCallback r1 = (com.bumptech.glide.request.ResourceCallback) r1
            boolean r2 = r3.isInIgnoredCallbacks(r1)
            if (r2 != 0) goto L1e
            java.lang.Exception r2 = r3.exception
            r1.onException(r2)
            goto L1e
        L36:
            return
        L37:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Received an exception without any callbacks to notify"
            r0.<init>(r1)
            goto L40
        L3f:
            throw r0
        L40:
            goto L3f
    }

    private void handleResultOnMainThread() {
            r3 = this;
            boolean r0 = r3.isCancelled
            if (r0 == 0) goto La
            com.bumptech.glide.load.engine.Resource<?> r0 = r3.resource
            r0.recycle()
            return
        La:
            java.util.List<com.bumptech.glide.request.ResourceCallback> r0 = r3.cbs
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L56
            com.bumptech.glide.load.engine.EngineJob$EngineResourceFactory r0 = r3.engineResourceFactory
            com.bumptech.glide.load.engine.Resource<?> r1 = r3.resource
            boolean r2 = r3.isCacheable
            com.bumptech.glide.load.engine.EngineResource r0 = r0.build(r1, r2)
            r3.engineResource = r0
            r1 = 1
            r3.hasResource = r1
            r0.acquire()
            com.bumptech.glide.load.engine.EngineJobListener r0 = r3.listener
            com.bumptech.glide.load.Key r1 = r3.key
            com.bumptech.glide.load.engine.EngineResource<?> r2 = r3.engineResource
            r0.onEngineJobComplete(r1, r2)
            java.util.List<com.bumptech.glide.request.ResourceCallback> r0 = r3.cbs
            java.util.Iterator r0 = r0.iterator()
        L33:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L50
            java.lang.Object r1 = r0.next()
            com.bumptech.glide.request.ResourceCallback r1 = (com.bumptech.glide.request.ResourceCallback) r1
            boolean r2 = r3.isInIgnoredCallbacks(r1)
            if (r2 != 0) goto L33
            com.bumptech.glide.load.engine.EngineResource<?> r2 = r3.engineResource
            r2.acquire()
            com.bumptech.glide.load.engine.EngineResource<?> r2 = r3.engineResource
            r1.onResourceReady(r2)
            goto L33
        L50:
            com.bumptech.glide.load.engine.EngineResource<?> r0 = r3.engineResource
            r0.release()
            return
        L56:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Received a resource without any callbacks to notify"
            r0.<init>(r1)
            goto L5f
        L5e:
            throw r0
        L5f:
            goto L5e
    }

    private boolean isInIgnoredCallbacks(com.bumptech.glide.request.ResourceCallback r2) {
            r1 = this;
            java.util.Set<com.bumptech.glide.request.ResourceCallback> r0 = r1.ignoredCallbacks
            if (r0 == 0) goto Lc
            boolean r2 = r0.contains(r2)
            if (r2 == 0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            return r2
    }

    public void addCallback(com.bumptech.glide.request.ResourceCallback r2) {
            r1 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            boolean r0 = r1.hasResource
            if (r0 == 0) goto Ld
            com.bumptech.glide.load.engine.EngineResource<?> r0 = r1.engineResource
            r2.onResourceReady(r0)
            goto L1c
        Ld:
            boolean r0 = r1.hasException
            if (r0 == 0) goto L17
            java.lang.Exception r0 = r1.exception
            r2.onException(r0)
            goto L1c
        L17:
            java.util.List<com.bumptech.glide.request.ResourceCallback> r0 = r1.cbs
            r0.add(r2)
        L1c:
            return
    }

    void cancel() {
            r2 = this;
            boolean r0 = r2.hasException
            if (r0 != 0) goto L23
            boolean r0 = r2.hasResource
            if (r0 != 0) goto L23
            boolean r0 = r2.isCancelled
            if (r0 == 0) goto Ld
            goto L23
        Ld:
            com.bumptech.glide.load.engine.EngineRunnable r0 = r2.engineRunnable
            r0.cancel()
            java.util.concurrent.Future<?> r0 = r2.future
            r1 = 1
            if (r0 == 0) goto L1a
            r0.cancel(r1)
        L1a:
            r2.isCancelled = r1
            com.bumptech.glide.load.engine.EngineJobListener r0 = r2.listener
            com.bumptech.glide.load.Key r1 = r2.key
            r0.onEngineJobCancelled(r2, r1)
        L23:
            return
    }

    boolean isCancelled() {
            r1 = this;
            boolean r0 = r1.isCancelled
            return r0
    }

    @Override
    public void onException(java.lang.Exception r2) {
            r1 = this;
            r1.exception = r2
            android.os.Handler r2 = com.bumptech.glide.load.engine.EngineJob.MAIN_THREAD_HANDLER
            r0 = 2
            android.os.Message r2 = r2.obtainMessage(r0, r1)
            r2.sendToTarget()
            return
    }

    @Override
    public void onResourceReady(com.bumptech.glide.load.engine.Resource<?> r2) {
            r1 = this;
            r1.resource = r2
            android.os.Handler r2 = com.bumptech.glide.load.engine.EngineJob.MAIN_THREAD_HANDLER
            r0 = 1
            android.os.Message r2 = r2.obtainMessage(r0, r1)
            r2.sendToTarget()
            return
    }

    public void removeCallback(com.bumptech.glide.request.ResourceCallback r2) {
            r1 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            boolean r0 = r1.hasResource
            if (r0 != 0) goto L1d
            boolean r0 = r1.hasException
            if (r0 == 0) goto Lc
            goto L1d
        Lc:
            java.util.List<com.bumptech.glide.request.ResourceCallback> r0 = r1.cbs
            r0.remove(r2)
            java.util.List<com.bumptech.glide.request.ResourceCallback> r2 = r1.cbs
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L20
            r1.cancel()
            goto L20
        L1d:
            r1.addIgnoredCallback(r2)
        L20:
            return
    }

    public void start(com.bumptech.glide.load.engine.EngineRunnable r2) {
            r1 = this;
            r1.engineRunnable = r2
            java.util.concurrent.ExecutorService r0 = r1.diskCacheService
            java.util.concurrent.Future r2 = r0.submit(r2)
            r1.future = r2
            return
    }

    @Override
    public void submitForSource(com.bumptech.glide.load.engine.EngineRunnable r2) {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.sourceService
            java.util.concurrent.Future r2 = r0.submit(r2)
            r1.future = r2
            return
    }
}
