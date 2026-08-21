package com.bumptech.glide.request;

public class RequestFutureTarget<T, R> implements com.bumptech.glide.request.FutureTarget<R>, java.lang.Runnable {
    private static final com.bumptech.glide.request.RequestFutureTarget.Waiter DEFAULT_WAITER = null;
    private final boolean assertBackgroundThread;
    private java.lang.Exception exception;
    private boolean exceptionReceived;
    private final int height;
    private boolean isCancelled;
    private final android.os.Handler mainHandler;
    private com.bumptech.glide.request.Request request;
    private R resource;
    private boolean resultReceived;
    private final com.bumptech.glide.request.RequestFutureTarget.Waiter waiter;
    private final int width;

    static class Waiter {
        Waiter() {
                r0 = this;
                r0.<init>()
                return
        }

        public void notifyAll(java.lang.Object r1) {
                r0 = this;
                r1.notifyAll()
                return
        }

        public void waitForTimeout(java.lang.Object r1, long r2) throws java.lang.InterruptedException {
                r0 = this;
                r1.wait(r2)
                return
        }
    }

    static {
            com.bumptech.glide.request.RequestFutureTarget$Waiter r0 = new com.bumptech.glide.request.RequestFutureTarget$Waiter
            r0.<init>()
            com.bumptech.glide.request.RequestFutureTarget.DEFAULT_WAITER = r0
            return
    }

    public RequestFutureTarget(android.os.Handler r7, int r8, int r9) {
            r6 = this;
            com.bumptech.glide.request.RequestFutureTarget$Waiter r5 = com.bumptech.glide.request.RequestFutureTarget.DEFAULT_WAITER
            r4 = 1
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    RequestFutureTarget(android.os.Handler r1, int r2, int r3, boolean r4, com.bumptech.glide.request.RequestFutureTarget.Waiter r5) {
            r0 = this;
            r0.<init>()
            r0.mainHandler = r1
            r0.width = r2
            r0.height = r3
            r0.assertBackgroundThread = r4
            r0.waiter = r5
            return
    }

    private synchronized R doGet(java.lang.Long r6) throws java.util.concurrent.ExecutionException, java.lang.InterruptedException, java.util.concurrent.TimeoutException {
            r5 = this;
            monitor-enter(r5)
            boolean r0 = r5.assertBackgroundThread     // Catch: java.lang.Throwable -> L71
            if (r0 == 0) goto L8
            com.bumptech.glide.util.Util.assertBackgroundThread()     // Catch: java.lang.Throwable -> L71
        L8:
            boolean r0 = r5.isCancelled     // Catch: java.lang.Throwable -> L71
            if (r0 != 0) goto L6b
            boolean r0 = r5.exceptionReceived     // Catch: java.lang.Throwable -> L71
            if (r0 != 0) goto L63
            boolean r0 = r5.resultReceived     // Catch: java.lang.Throwable -> L71
            if (r0 == 0) goto L18
            R r6 = r5.resource     // Catch: java.lang.Throwable -> L71
            monitor-exit(r5)
            return r6
        L18:
            r0 = 0
            if (r6 != 0) goto L22
            com.bumptech.glide.request.RequestFutureTarget$Waiter r6 = r5.waiter     // Catch: java.lang.Throwable -> L71
            r6.waitForTimeout(r5, r0)     // Catch: java.lang.Throwable -> L71
            goto L33
        L22:
            long r2 = r6.longValue()     // Catch: java.lang.Throwable -> L71
            int r4 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r4 <= 0) goto L33
            com.bumptech.glide.request.RequestFutureTarget$Waiter r0 = r5.waiter     // Catch: java.lang.Throwable -> L71
            long r1 = r6.longValue()     // Catch: java.lang.Throwable -> L71
            r0.waitForTimeout(r5, r1)     // Catch: java.lang.Throwable -> L71
        L33:
            boolean r6 = java.lang.Thread.interrupted()     // Catch: java.lang.Throwable -> L71
            if (r6 != 0) goto L5d
            boolean r6 = r5.exceptionReceived     // Catch: java.lang.Throwable -> L71
            if (r6 != 0) goto L55
            boolean r6 = r5.isCancelled     // Catch: java.lang.Throwable -> L71
            if (r6 != 0) goto L4f
            boolean r6 = r5.resultReceived     // Catch: java.lang.Throwable -> L71
            if (r6 == 0) goto L49
            R r6 = r5.resource     // Catch: java.lang.Throwable -> L71
            monitor-exit(r5)
            return r6
        L49:
            java.util.concurrent.TimeoutException r6 = new java.util.concurrent.TimeoutException     // Catch: java.lang.Throwable -> L71
            r6.<init>()     // Catch: java.lang.Throwable -> L71
            throw r6     // Catch: java.lang.Throwable -> L71
        L4f:
            java.util.concurrent.CancellationException r6 = new java.util.concurrent.CancellationException     // Catch: java.lang.Throwable -> L71
            r6.<init>()     // Catch: java.lang.Throwable -> L71
            throw r6     // Catch: java.lang.Throwable -> L71
        L55:
            java.util.concurrent.ExecutionException r6 = new java.util.concurrent.ExecutionException     // Catch: java.lang.Throwable -> L71
            java.lang.Exception r0 = r5.exception     // Catch: java.lang.Throwable -> L71
            r6.<init>(r0)     // Catch: java.lang.Throwable -> L71
            throw r6     // Catch: java.lang.Throwable -> L71
        L5d:
            java.lang.InterruptedException r6 = new java.lang.InterruptedException     // Catch: java.lang.Throwable -> L71
            r6.<init>()     // Catch: java.lang.Throwable -> L71
            throw r6     // Catch: java.lang.Throwable -> L71
        L63:
            java.util.concurrent.ExecutionException r6 = new java.util.concurrent.ExecutionException     // Catch: java.lang.Throwable -> L71
            java.lang.Exception r0 = r5.exception     // Catch: java.lang.Throwable -> L71
            r6.<init>(r0)     // Catch: java.lang.Throwable -> L71
            throw r6     // Catch: java.lang.Throwable -> L71
        L6b:
            java.util.concurrent.CancellationException r6 = new java.util.concurrent.CancellationException     // Catch: java.lang.Throwable -> L71
            r6.<init>()     // Catch: java.lang.Throwable -> L71
            throw r6     // Catch: java.lang.Throwable -> L71
        L71:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    @Override
    public synchronized boolean cancel(boolean r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.isCancelled     // Catch: java.lang.Throwable -> L1d
            r1 = 1
            if (r0 == 0) goto L8
            monitor-exit(r2)
            return r1
        L8:
            boolean r0 = r2.isDone()     // Catch: java.lang.Throwable -> L1d
            r0 = r0 ^ r1
            if (r0 == 0) goto L1b
            r2.isCancelled = r1     // Catch: java.lang.Throwable -> L1d
            if (r3 == 0) goto L16
            r2.clear()     // Catch: java.lang.Throwable -> L1d
        L16:
            com.bumptech.glide.request.RequestFutureTarget$Waiter r3 = r2.waiter     // Catch: java.lang.Throwable -> L1d
            r3.notifyAll(r2)     // Catch: java.lang.Throwable -> L1d
        L1b:
            monitor-exit(r2)
            return r0
        L1d:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public void clear() {
            r1 = this;
            android.os.Handler r0 = r1.mainHandler
            r0.post(r1)
            return
    }

    @Override
    public R get() throws java.lang.InterruptedException, java.util.concurrent.ExecutionException {
            r2 = this;
            r0 = 0
            java.lang.Object r0 = r2.doGet(r0)     // Catch: java.util.concurrent.TimeoutException -> L6
            return r0
        L6:
            r0 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>(r0)
            throw r1
    }

    @Override
    public R get(long r1, java.util.concurrent.TimeUnit r3) throws java.lang.InterruptedException, java.util.concurrent.ExecutionException, java.util.concurrent.TimeoutException {
            r0 = this;
            long r1 = r3.toMillis(r1)
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.Object r1 = r0.doGet(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.request.Request getRequest() {
            r1 = this;
            com.bumptech.glide.request.Request r0 = r1.request
            return r0
    }

    @Override
    public void getSize(com.bumptech.glide.request.target.SizeReadyCallback r3) {
            r2 = this;
            int r0 = r2.width
            int r1 = r2.height
            r3.onSizeReady(r0, r1)
            return
    }

    @Override
    public synchronized boolean isCancelled() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.isCancelled     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public synchronized boolean isDone() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.isCancelled     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lc
            boolean r0 = r1.resultReceived     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto La
            goto Lc
        La:
            r0 = 0
            goto Ld
        Lc:
            r0 = 1
        Ld:
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public void onDestroy() {
            r0 = this;
            return
    }

    @Override
    public void onLoadCleared(android.graphics.drawable.Drawable r1) {
            r0 = this;
            return
    }

    @Override
    public synchronized void onLoadFailed(java.lang.Exception r1, android.graphics.drawable.Drawable r2) {
            r0 = this;
            monitor-enter(r0)
            r2 = 1
            r0.exceptionReceived = r2     // Catch: java.lang.Throwable -> Ld
            r0.exception = r1     // Catch: java.lang.Throwable -> Ld
            com.bumptech.glide.request.RequestFutureTarget$Waiter r1 = r0.waiter     // Catch: java.lang.Throwable -> Ld
            r1.notifyAll(r0)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)
            return
        Ld:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public void onLoadStarted(android.graphics.drawable.Drawable r1) {
            r0 = this;
            return
    }

    @Override
    public synchronized void onResourceReady(R r1, com.bumptech.glide.request.animation.GlideAnimation<? super R> r2) {
            r0 = this;
            monitor-enter(r0)
            r2 = 1
            r0.resultReceived = r2     // Catch: java.lang.Throwable -> Ld
            r0.resource = r1     // Catch: java.lang.Throwable -> Ld
            com.bumptech.glide.request.RequestFutureTarget$Waiter r1 = r0.waiter     // Catch: java.lang.Throwable -> Ld
            r1.notifyAll(r0)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)
            return
        Ld:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public void onStart() {
            r0 = this;
            return
    }

    @Override
    public void onStop() {
            r0 = this;
            return
    }

    @Override
    public void run() {
            r1 = this;
            com.bumptech.glide.request.Request r0 = r1.request
            if (r0 == 0) goto Lb
            r0.clear()
            r0 = 0
            r1.cancel(r0)
        Lb:
            return
    }

    @Override
    public void setRequest(com.bumptech.glide.request.Request r1) {
            r0 = this;
            r0.request = r1
            return
    }
}
