package android.arch.lifecycle;

import android.arch.core.executor.ArchTaskExecutor;
import android.support.annotation.NonNull;
import android.support.annotation.RestrictTo;
import android.support.annotation.VisibleForTesting;
import android.support.annotation.WorkerThread;
import java.util.concurrent.Executor;
import java.util.concurrent.atomic.AtomicBoolean;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public abstract class ComputableLiveData<T> {
    private AtomicBoolean mComputing;
    private final Executor mExecutor;
    private AtomicBoolean mInvalid;

    @VisibleForTesting
    final Runnable mInvalidationRunnable;
    private final LiveData<T> mLiveData;

    @VisibleForTesting
    final Runnable mRefreshRunnable;

    @WorkerThread
    protected abstract T compute();

    static Executor access$000(ComputableLiveData r0) {
        return r0.mExecutor;
    }

    static AtomicBoolean access$100(ComputableLiveData r0) {
        return r0.mComputing;
    }

    static AtomicBoolean access$200(ComputableLiveData r0) {
        return r0.mInvalid;
    }

    static LiveData access$300(ComputableLiveData r0) {
        return r0.mLiveData;
    }

    public ComputableLiveData() {
        this(ArchTaskExecutor.getIOThreadExecutor());
    }

    public ComputableLiveData(@NonNull Executor r3) {
        this.mInvalid = new AtomicBoolean(true);
        this.mComputing = new AtomicBoolean(false);
        this.mRefreshRunnable = new 2(this);
        this.mInvalidationRunnable = new 3(this);
        this.mExecutor = r3;
        this.mLiveData = new 1(this);
    }

    @NonNull
    public LiveData<T> getLiveData() {
        return this.mLiveData;
    }

    public void invalidate() {
        ArchTaskExecutor.getInstance().executeOnMainThread(this.mInvalidationRunnable);
    }
}
