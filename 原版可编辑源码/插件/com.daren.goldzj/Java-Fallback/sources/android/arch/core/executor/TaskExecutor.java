package android.arch.core.executor;

import android.support.annotation.NonNull;
import android.support.annotation.RestrictTo;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public abstract class TaskExecutor {
    public abstract void executeOnDiskIO(@NonNull Runnable r1);

    public abstract boolean isMainThread();

    public abstract void postToMainThread(@NonNull Runnable r1);

    public TaskExecutor() {
    }

    public void executeOnMainThread(@NonNull Runnable r2) {
        if (isMainThread() == false) goto L5;
        r2.run();
        return;
    L5:
        postToMainThread(r2);
    }
}
