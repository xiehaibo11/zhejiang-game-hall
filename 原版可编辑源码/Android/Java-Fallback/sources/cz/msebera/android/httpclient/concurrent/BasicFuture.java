package cz.msebera.android.httpclient.concurrent;

public class BasicFuture<T> implements java.util.concurrent.Future<T>, cz.msebera.android.httpclient.concurrent.Cancellable {
    private final cz.msebera.android.httpclient.concurrent.FutureCallback<T> callback;
    private volatile boolean cancelled;
    private volatile boolean completed;
    private volatile java.lang.Exception ex;
    private volatile T result;

    public BasicFuture(cz.msebera.android.httpclient.concurrent.FutureCallback<T> r1) {
            r0 = this;
            r0.<init>()
            r0.callback = r1
            return
    }

    private T getResult() throws java.util.concurrent.ExecutionException {
            r2 = this;
            java.lang.Exception r0 = r2.ex
            if (r0 != 0) goto L7
            T r0 = r2.result
            return r0
        L7:
            java.util.concurrent.ExecutionException r0 = new java.util.concurrent.ExecutionException
            java.lang.Exception r1 = r2.ex
            r0.<init>(r1)
            throw r0
    }

    @Override
    public boolean cancel() {
            r1 = this;
            r0 = 1
            boolean r0 = r1.cancel(r0)
            return r0
    }

    @Override
    public boolean cancel(boolean r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r2 = r1.completed     // Catch: java.lang.Throwable -> L19
            if (r2 == 0) goto L8
            r2 = 0
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L19
            return r2
        L8:
            r2 = 1
            r1.completed = r2     // Catch: java.lang.Throwable -> L19
            r1.cancelled = r2     // Catch: java.lang.Throwable -> L19
            r1.notifyAll()     // Catch: java.lang.Throwable -> L19
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L19
            cz.msebera.android.httpclient.concurrent.FutureCallback<T> r0 = r1.callback
            if (r0 == 0) goto L18
            r0.cancelled()
        L18:
            return r2
        L19:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L19
            throw r2
    }

    public boolean completed(T r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.completed     // Catch: java.lang.Throwable -> L19
            if (r0 == 0) goto L8
            r3 = 0
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L19
            return r3
        L8:
            r0 = 1
            r2.completed = r0     // Catch: java.lang.Throwable -> L19
            r2.result = r3     // Catch: java.lang.Throwable -> L19
            r2.notifyAll()     // Catch: java.lang.Throwable -> L19
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L19
            cz.msebera.android.httpclient.concurrent.FutureCallback<T> r1 = r2.callback
            if (r1 == 0) goto L18
            r1.completed(r3)
        L18:
            return r0
        L19:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L19
            throw r3
    }

    public boolean failed(java.lang.Exception r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.completed     // Catch: java.lang.Throwable -> L19
            if (r0 == 0) goto L8
            r3 = 0
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L19
            return r3
        L8:
            r0 = 1
            r2.completed = r0     // Catch: java.lang.Throwable -> L19
            r2.ex = r3     // Catch: java.lang.Throwable -> L19
            r2.notifyAll()     // Catch: java.lang.Throwable -> L19
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L19
            cz.msebera.android.httpclient.concurrent.FutureCallback<T> r1 = r2.callback
            if (r1 == 0) goto L18
            r1.failed(r3)
        L18:
            return r0
        L19:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L19
            throw r3
    }

    @Override
    public synchronized T get() throws java.lang.InterruptedException, java.util.concurrent.ExecutionException {
            r1 = this;
            monitor-enter(r1)
        L1:
            boolean r0 = r1.completed     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto L9
            r1.wait()     // Catch: java.lang.Throwable -> Lf
            goto L1
        L9:
            java.lang.Object r0 = r1.getResult()     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public synchronized T get(long r7, java.util.concurrent.TimeUnit r9) throws java.lang.InterruptedException, java.util.concurrent.ExecutionException, java.util.concurrent.TimeoutException {
            r6 = this;
            monitor-enter(r6)
            java.lang.String r0 = "Time unit"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)     // Catch: java.lang.Throwable -> L48
            long r7 = r9.toMillis(r7)     // Catch: java.lang.Throwable -> L48
            r0 = 0
            int r9 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r9 > 0) goto L12
            r2 = r0
            goto L16
        L12:
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L48
        L16:
            boolean r4 = r6.completed     // Catch: java.lang.Throwable -> L48
            if (r4 == 0) goto L20
            java.lang.Object r7 = r6.getResult()     // Catch: java.lang.Throwable -> L48
            monitor-exit(r6)
            return r7
        L20:
            if (r9 <= 0) goto L42
            r4 = r7
        L23:
            r6.wait(r4)     // Catch: java.lang.Throwable -> L48
            boolean r9 = r6.completed     // Catch: java.lang.Throwable -> L48
            if (r9 == 0) goto L30
            java.lang.Object r7 = r6.getResult()     // Catch: java.lang.Throwable -> L48
            monitor-exit(r6)
            return r7
        L30:
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L48
            long r4 = r4 - r2
            long r4 = r7 - r4
            int r9 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r9 <= 0) goto L3c
            goto L23
        L3c:
            java.util.concurrent.TimeoutException r7 = new java.util.concurrent.TimeoutException     // Catch: java.lang.Throwable -> L48
            r7.<init>()     // Catch: java.lang.Throwable -> L48
            throw r7     // Catch: java.lang.Throwable -> L48
        L42:
            java.util.concurrent.TimeoutException r7 = new java.util.concurrent.TimeoutException     // Catch: java.lang.Throwable -> L48
            r7.<init>()     // Catch: java.lang.Throwable -> L48
            throw r7     // Catch: java.lang.Throwable -> L48
        L48:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

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
}
