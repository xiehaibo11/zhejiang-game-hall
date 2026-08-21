package android.arch.core.executor;

import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import java.util.concurrent.Executor;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class ArchTaskExecutor extends TaskExecutor {

    @NonNull
    private static final Executor sIOThreadExecutor = null;
    private static volatile ArchTaskExecutor sInstance;

    @NonNull
    private static final Executor sMainThreadExecutor = null;

    @NonNull
    private TaskExecutor mDefaultTaskExecutor;

    @NonNull
    private TaskExecutor mDelegate;

    static {
        sMainThreadExecutor = new 1();
        sIOThreadExecutor = new 2();
    }

    private ArchTaskExecutor() {
        this.mDefaultTaskExecutor = new DefaultTaskExecutor();
        this.mDelegate = this.mDefaultTaskExecutor;
    }

    @NonNull
    public static ArchTaskExecutor getInstance() {
        if (sInstance == null) goto L7;
        return sInstance;
    L7:
        monitor-enter(ArchTaskExecutor.class);
    L14:
        th = move-exception;
        throw th;
    L9:
        if (sInstance != null) goto L11;
        sInstance = new ArchTaskExecutor();     // Catch: Throwable -> L14
    L11:
        monitor-exit(ArchTaskExecutor.class);     // Catch: Throwable -> L14
        return sInstance;
    }

    public void setDelegate(@Nullable TaskExecutor r1) {
        if (r1 != null) goto L4;
        r1 = this.mDefaultTaskExecutor;
    L4:
        this.mDelegate = r1;
    }

    @Override
    public void executeOnDiskIO(Runnable r2) {
        this.mDelegate.executeOnDiskIO(r2);
    }

    @Override
    public void postToMainThread(Runnable r2) {
        this.mDelegate.postToMainThread(r2);
    }

    @NonNull
    public static Executor getMainThreadExecutor() {
        return sMainThreadExecutor;
    }

    @NonNull
    public static Executor getIOThreadExecutor() {
        return sIOThreadExecutor;
    }

    @Override
    public boolean isMainThread() {
        return this.mDelegate.isMainThread();
    }
}
