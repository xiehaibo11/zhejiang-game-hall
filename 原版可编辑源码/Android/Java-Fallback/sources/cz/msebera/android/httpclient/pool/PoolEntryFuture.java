package cz.msebera.android.httpclient.pool;

@cz.msebera.android.httpclient.annotation.ThreadSafe
abstract class PoolEntryFuture<T> implements java.util.concurrent.Future<T> {
    private final cz.msebera.android.httpclient.concurrent.FutureCallback<T> callback;
    private volatile boolean cancelled;
    private volatile boolean completed;
    private final java.util.concurrent.locks.Condition condition;
    private final java.util.concurrent.locks.Lock lock;
    private T result;

    PoolEntryFuture(java.util.concurrent.locks.Lock r1, cz.msebera.android.httpclient.concurrent.FutureCallback<T> r2) {
            r0 = this;
            r0.<init>()
            r0.lock = r1
            java.util.concurrent.locks.Condition r1 = r1.newCondition()
            r0.condition = r1
            r0.callback = r2
            return
    }

    public boolean await(java.util.Date r3) throws java.lang.InterruptedException {
            r2 = this;
            java.util.concurrent.locks.Lock r0 = r2.lock
            r0.lock()
            boolean r0 = r2.cancelled     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = "Operation interrupted"
            if (r0 != 0) goto L2a
            if (r3 == 0) goto L14
            java.util.concurrent.locks.Condition r0 = r2.condition     // Catch: java.lang.Throwable -> L30
            boolean r3 = r0.awaitUntil(r3)     // Catch: java.lang.Throwable -> L30
            goto L1a
        L14:
            java.util.concurrent.locks.Condition r3 = r2.condition     // Catch: java.lang.Throwable -> L30
            r3.await()     // Catch: java.lang.Throwable -> L30
            r3 = 1
        L1a:
            boolean r0 = r2.cancelled     // Catch: java.lang.Throwable -> L30
            if (r0 != 0) goto L24
            java.util.concurrent.locks.Lock r0 = r2.lock
            r0.unlock()
            return r3
        L24:
            java.lang.InterruptedException r3 = new java.lang.InterruptedException     // Catch: java.lang.Throwable -> L30
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L30
            throw r3     // Catch: java.lang.Throwable -> L30
        L2a:
            java.lang.InterruptedException r3 = new java.lang.InterruptedException     // Catch: java.lang.Throwable -> L30
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L30
            throw r3     // Catch: java.lang.Throwable -> L30
        L30:
            r3 = move-exception
            java.util.concurrent.locks.Lock r0 = r2.lock
            r0.unlock()
            throw r3
    }

    @Override
    public boolean cancel(boolean r2) {
            r1 = this;
            java.util.concurrent.locks.Lock r2 = r1.lock
            r2.lock()
            boolean r2 = r1.completed     // Catch: java.lang.Throwable -> L24
            if (r2 == 0) goto L10
            r2 = 0
        La:
            java.util.concurrent.locks.Lock r0 = r1.lock
            r0.unlock()
            return r2
        L10:
            r2 = 1
            r1.completed = r2     // Catch: java.lang.Throwable -> L24
            r1.cancelled = r2     // Catch: java.lang.Throwable -> L24
            cz.msebera.android.httpclient.concurrent.FutureCallback<T> r0 = r1.callback     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L1e
            cz.msebera.android.httpclient.concurrent.FutureCallback<T> r0 = r1.callback     // Catch: java.lang.Throwable -> L24
            r0.cancelled()     // Catch: java.lang.Throwable -> L24
        L1e:
            java.util.concurrent.locks.Condition r0 = r1.condition     // Catch: java.lang.Throwable -> L24
            r0.signalAll()     // Catch: java.lang.Throwable -> L24
            goto La
        L24:
            r2 = move-exception
            java.util.concurrent.locks.Lock r0 = r1.lock
            r0.unlock()
            throw r2
    }

    @Override
    public T get() throws java.lang.InterruptedException, java.util.concurrent.ExecutionException {
            r3 = this;
            r0 = 0
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.util.concurrent.TimeoutException -> L9
            java.lang.Object r0 = r3.get(r0, r2)     // Catch: java.util.concurrent.TimeoutException -> L9
            return r0
        L9:
            r0 = move-exception
            java.util.concurrent.ExecutionException r1 = new java.util.concurrent.ExecutionException
            r1.<init>(r0)
            throw r1
    }

    @Override
    public T get(long r3, java.util.concurrent.TimeUnit r5) throws java.lang.InterruptedException, java.util.concurrent.ExecutionException, java.util.concurrent.TimeoutException {
            r2 = this;
            java.lang.String r0 = "Time unit"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.util.concurrent.locks.Lock r0 = r2.lock
            r0.lock()
            r0 = 1
            boolean r1 = r2.completed     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            if (r1 == 0) goto L17
            T r3 = r2.result     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
        L11:
            java.util.concurrent.locks.Lock r4 = r2.lock
            r4.unlock()
            return r3
        L17:
            java.lang.Object r3 = r2.getPoolEntry(r3, r5)     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            r2.result = r3     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            r2.completed = r0     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            cz.msebera.android.httpclient.concurrent.FutureCallback<T> r3 = r2.callback     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            if (r3 == 0) goto L2a
            cz.msebera.android.httpclient.concurrent.FutureCallback<T> r3 = r2.callback     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            T r4 = r2.result     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            r3.completed(r4)     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
        L2a:
            T r3 = r2.result     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            goto L11
        L2d:
            r3 = move-exception
            goto L44
        L2f:
            r3 = move-exception
            r2.completed = r0     // Catch: java.lang.Throwable -> L2d
            r4 = 0
            r2.result = r4     // Catch: java.lang.Throwable -> L2d
            cz.msebera.android.httpclient.concurrent.FutureCallback<T> r4 = r2.callback     // Catch: java.lang.Throwable -> L2d
            if (r4 == 0) goto L3e
            cz.msebera.android.httpclient.concurrent.FutureCallback<T> r4 = r2.callback     // Catch: java.lang.Throwable -> L2d
            r4.failed(r3)     // Catch: java.lang.Throwable -> L2d
        L3e:
            java.util.concurrent.ExecutionException r4 = new java.util.concurrent.ExecutionException     // Catch: java.lang.Throwable -> L2d
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L2d
            throw r4     // Catch: java.lang.Throwable -> L2d
        L44:
            java.util.concurrent.locks.Lock r4 = r2.lock
            r4.unlock()
            throw r3
    }

    protected abstract T getPoolEntry(long r1, java.util.concurrent.TimeUnit r3) throws java.io.IOException, java.lang.InterruptedException, java.util.concurrent.TimeoutException;

    @Override
    public boolean isCancelled() {
            r1 = this;
            boolean r0 = r1.cancelled
            return r0
    }

    @Override
    public boolean isDone() {
            r1 = this;
            boolean r0 = r1.completed
            return r0
    }

    public void wakeup() {
            r2 = this;
            java.util.concurrent.locks.Lock r0 = r2.lock
            r0.lock()
            java.util.concurrent.locks.Condition r0 = r2.condition     // Catch: java.lang.Throwable -> L10
            r0.signalAll()     // Catch: java.lang.Throwable -> L10
            java.util.concurrent.locks.Lock r0 = r2.lock
            r0.unlock()
            return
        L10:
            r0 = move-exception
            java.util.concurrent.locks.Lock r1 = r2.lock
            r1.unlock()
            throw r0
    }
}
