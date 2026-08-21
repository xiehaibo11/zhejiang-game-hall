package android.arch.lifecycle;

public abstract class ComputableLiveData<T> {
    private java.util.concurrent.atomic.AtomicBoolean mComputing;
    private final java.util.concurrent.Executor mExecutor;
    private java.util.concurrent.atomic.AtomicBoolean mInvalid;
    final java.lang.Runnable mInvalidationRunnable;
    private final android.arch.lifecycle.LiveData<T> mLiveData;
    final java.lang.Runnable mRefreshRunnable;




    public ComputableLiveData() {
            r1 = this;
            java.util.concurrent.Executor r0 = android.arch.core.executor.ArchTaskExecutor.getIOThreadExecutor()
            r1.<init>(r0)
            return
    }

    public ComputableLiveData(java.util.concurrent.Executor r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 1
            r0.<init>(r1)
            r2.mInvalid = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.mComputing = r0
            android.arch.lifecycle.ComputableLiveData$2 r0 = new android.arch.lifecycle.ComputableLiveData$2
            r0.<init>(r2)
            r2.mRefreshRunnable = r0
            android.arch.lifecycle.ComputableLiveData$3 r0 = new android.arch.lifecycle.ComputableLiveData$3
            r0.<init>(r2)
            r2.mInvalidationRunnable = r0
            r2.mExecutor = r3
            android.arch.lifecycle.ComputableLiveData$1 r3 = new android.arch.lifecycle.ComputableLiveData$1
            r3.<init>(r2)
            r2.mLiveData = r3
            return
    }

    static java.util.concurrent.Executor access$000(android.arch.lifecycle.ComputableLiveData r0) {
            java.util.concurrent.Executor r0 = r0.mExecutor
            return r0
    }

    static java.util.concurrent.atomic.AtomicBoolean access$100(android.arch.lifecycle.ComputableLiveData r0) {
            java.util.concurrent.atomic.AtomicBoolean r0 = r0.mComputing
            return r0
    }

    static java.util.concurrent.atomic.AtomicBoolean access$200(android.arch.lifecycle.ComputableLiveData r0) {
            java.util.concurrent.atomic.AtomicBoolean r0 = r0.mInvalid
            return r0
    }

    static android.arch.lifecycle.LiveData access$300(android.arch.lifecycle.ComputableLiveData r0) {
            android.arch.lifecycle.LiveData<T> r0 = r0.mLiveData
            return r0
    }

    protected abstract T compute();

    public android.arch.lifecycle.LiveData<T> getLiveData() {
            r1 = this;
            android.arch.lifecycle.LiveData<T> r0 = r1.mLiveData
            return r0
    }

    public void invalidate() {
            r2 = this;
            android.arch.core.executor.ArchTaskExecutor r0 = android.arch.core.executor.ArchTaskExecutor.getInstance()
            java.lang.Runnable r1 = r2.mInvalidationRunnable
            r0.executeOnMainThread(r1)
            return
    }
}
