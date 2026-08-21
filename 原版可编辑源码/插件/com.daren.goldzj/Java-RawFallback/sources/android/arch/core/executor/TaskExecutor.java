package android.arch.core.executor;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public abstract class TaskExecutor {
    public TaskExecutor() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void executeOnDiskIO(@android.support.annotation.NonNull java.lang.Runnable r1);

    public void executeOnMainThread(@android.support.annotation.NonNull java.lang.Runnable r2) {
            r1 = this;
            boolean r0 = r1.isMainThread()
            if (r0 == 0) goto La
            r2.run()
            goto Ld
        La:
            r1.postToMainThread(r2)
        Ld:
            return
    }

    public abstract boolean isMainThread();

    public abstract void postToMainThread(@android.support.annotation.NonNull java.lang.Runnable r1);
}
