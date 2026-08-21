package android.arch.core.executor;

public class DefaultTaskExecutor extends android.arch.core.executor.TaskExecutor {
    private java.util.concurrent.ExecutorService mDiskIO;
    private final java.lang.Object mLock;
    private volatile android.os.Handler mMainHandler;

    public DefaultTaskExecutor() {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.mLock = r0
            r0 = 2
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newFixedThreadPool(r0)
            r1.mDiskIO = r0
            return
    }

    @Override
    public void executeOnDiskIO(java.lang.Runnable r2) {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.mDiskIO
            r0.execute(r2)
            return
    }

    @Override
    public boolean isMainThread() {
            r2 = this;
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            java.lang.Thread r0 = r0.getThread()
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            if (r0 != r1) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    @Override
    public void postToMainThread(java.lang.Runnable r4) {
            r3 = this;
            android.os.Handler r0 = r3.mMainHandler
            if (r0 != 0) goto L1b
            java.lang.Object r0 = r3.mLock
            monitor-enter(r0)
            android.os.Handler r1 = r3.mMainHandler     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            android.os.Handler r1 = new android.os.Handler     // Catch: java.lang.Throwable -> L18
            android.os.Looper r2 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            r3.mMainHandler = r1     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r4
        L1b:
            android.os.Handler r0 = r3.mMainHandler
            r0.post(r4)
            return
    }
}
