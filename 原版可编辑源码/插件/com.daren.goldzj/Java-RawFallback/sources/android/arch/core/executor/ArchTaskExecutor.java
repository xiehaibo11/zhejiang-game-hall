package android.arch.core.executor;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class ArchTaskExecutor extends android.arch.core.executor.TaskExecutor {

    @android.support.annotation.NonNull
    private static final java.util.concurrent.Executor sIOThreadExecutor = null;
    private static volatile android.arch.core.executor.ArchTaskExecutor sInstance;

    @android.support.annotation.NonNull
    private static final java.util.concurrent.Executor sMainThreadExecutor = null;

    @android.support.annotation.NonNull
    private android.arch.core.executor.TaskExecutor mDefaultTaskExecutor;

    @android.support.annotation.NonNull
    private android.arch.core.executor.TaskExecutor mDelegate;



    static {
            android.arch.core.executor.ArchTaskExecutor$1 r0 = new android.arch.core.executor.ArchTaskExecutor$1
            r0.<init>()
            android.arch.core.executor.ArchTaskExecutor.sMainThreadExecutor = r0
            android.arch.core.executor.ArchTaskExecutor$2 r0 = new android.arch.core.executor.ArchTaskExecutor$2
            r0.<init>()
            android.arch.core.executor.ArchTaskExecutor.sIOThreadExecutor = r0
            return
    }

    private ArchTaskExecutor() {
            r1 = this;
            r1.<init>()
            android.arch.core.executor.DefaultTaskExecutor r0 = new android.arch.core.executor.DefaultTaskExecutor
            r0.<init>()
            r1.mDefaultTaskExecutor = r0
            android.arch.core.executor.TaskExecutor r0 = r1.mDefaultTaskExecutor
            r1.mDelegate = r0
            return
    }

    @android.support.annotation.NonNull
    public static java.util.concurrent.Executor getIOThreadExecutor() {
            java.util.concurrent.Executor r0 = android.arch.core.executor.ArchTaskExecutor.sIOThreadExecutor
            return r0
    }

    @android.support.annotation.NonNull
    public static android.arch.core.executor.ArchTaskExecutor getInstance() {
            android.arch.core.executor.ArchTaskExecutor r0 = android.arch.core.executor.ArchTaskExecutor.sInstance
            if (r0 == 0) goto L7
            android.arch.core.executor.ArchTaskExecutor r0 = android.arch.core.executor.ArchTaskExecutor.sInstance
            return r0
        L7:
            java.lang.Class<android.arch.core.executor.ArchTaskExecutor> r0 = android.arch.core.executor.ArchTaskExecutor.class
            monitor-enter(r0)
            android.arch.core.executor.ArchTaskExecutor r1 = android.arch.core.executor.ArchTaskExecutor.sInstance     // Catch: java.lang.Throwable -> L19
            if (r1 != 0) goto L15
            android.arch.core.executor.ArchTaskExecutor r1 = new android.arch.core.executor.ArchTaskExecutor     // Catch: java.lang.Throwable -> L19
            r1.<init>()     // Catch: java.lang.Throwable -> L19
            android.arch.core.executor.ArchTaskExecutor.sInstance = r1     // Catch: java.lang.Throwable -> L19
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            android.arch.core.executor.ArchTaskExecutor r0 = android.arch.core.executor.ArchTaskExecutor.sInstance
            return r0
        L19:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r1
    }

    @android.support.annotation.NonNull
    public static java.util.concurrent.Executor getMainThreadExecutor() {
            java.util.concurrent.Executor r0 = android.arch.core.executor.ArchTaskExecutor.sMainThreadExecutor
            return r0
    }

    @Override
    public void executeOnDiskIO(java.lang.Runnable r2) {
            r1 = this;
            android.arch.core.executor.TaskExecutor r0 = r1.mDelegate
            r0.executeOnDiskIO(r2)
            return
    }

    @Override
    public boolean isMainThread() {
            r1 = this;
            android.arch.core.executor.TaskExecutor r0 = r1.mDelegate
            boolean r0 = r0.isMainThread()
            return r0
    }

    @Override
    public void postToMainThread(java.lang.Runnable r2) {
            r1 = this;
            android.arch.core.executor.TaskExecutor r0 = r1.mDelegate
            r0.postToMainThread(r2)
            return
    }

    public void setDelegate(@android.support.annotation.Nullable android.arch.core.executor.TaskExecutor r1) {
            r0 = this;
            if (r1 != 0) goto L4
            android.arch.core.executor.TaskExecutor r1 = r0.mDefaultTaskExecutor
        L4:
            r0.mDelegate = r1
            return
    }
}
