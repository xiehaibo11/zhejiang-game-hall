package android.arch.core.executor;

import android.os.Handler;
import android.os.Looper;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class DefaultTaskExecutor extends TaskExecutor {
    private ExecutorService mDiskIO;
    private final Object mLock;

    @Nullable
    private volatile Handler mMainHandler;

    public DefaultTaskExecutor() {
        this.mLock = new Object();
        this.mDiskIO = Executors.newFixedThreadPool(2);
    }

    @Override
    public void executeOnDiskIO(Runnable r2) {
        this.mDiskIO.execute(r2);
    }

    @Override
    public void postToMainThread(Runnable r4) {
        if (this.mMainHandler != null) goto L14;
        Object r0 = this.mLock;
        monitor-enter(r0);
    L11:
        th = move-exception;
        throw th;
    L7:
        if (this.mMainHandler != null) goto L9;
        this.mMainHandler = new Handler(Looper.getMainLooper());     // Catch: Throwable -> L11
    L9:
        monitor-exit(r0);     // Catch: Throwable -> L11
    L14:
        this.mMainHandler.post(r4);
    }

    @Override
    public boolean isMainThread() {
        if (Looper.getMainLooper().getThread() != Thread.currentThread()) goto L5;
        return true;
    L5:
        return false;
    }
}
