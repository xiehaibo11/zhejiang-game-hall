package android.support.v7.recyclerview.extensions;

public class AsyncListDiffer<T> {
    private static final java.util.concurrent.Executor sMainThreadExecutor = null;
    final android.support.v7.recyclerview.extensions.AsyncDifferConfig<T> mConfig;
    private java.util.List<T> mList;
    final java.util.concurrent.Executor mMainThreadExecutor;
    int mMaxScheduledGeneration;
    private java.util.List<T> mReadOnlyList;
    private final android.support.v7.util.ListUpdateCallback mUpdateCallback;


    private static class MainThreadExecutor implements java.util.concurrent.Executor {
        final android.os.Handler mHandler;

        MainThreadExecutor() {
                r2 = this;
                r2.<init>()
                android.os.Handler r0 = new android.os.Handler
                android.os.Looper r1 = android.os.Looper.getMainLooper()
                r0.<init>(r1)
                r2.mHandler = r0
                return
        }

        @Override
        public void execute(java.lang.Runnable r2) {
                r1 = this;
                android.os.Handler r0 = r1.mHandler
                r0.post(r2)
                return
        }
    }

    static {
            android.support.v7.recyclerview.extensions.AsyncListDiffer$MainThreadExecutor r0 = new android.support.v7.recyclerview.extensions.AsyncListDiffer$MainThreadExecutor
            r0.<init>()
            android.support.v7.recyclerview.extensions.AsyncListDiffer.sMainThreadExecutor = r0
            return
    }

    public AsyncListDiffer(android.support.v7.util.ListUpdateCallback r2, android.support.v7.recyclerview.extensions.AsyncDifferConfig<T> r3) {
            r1 = this;
            r1.<init>()
            java.util.List r0 = java.util.Collections.emptyList()
            r1.mReadOnlyList = r0
            r1.mUpdateCallback = r2
            r1.mConfig = r3
            java.util.concurrent.Executor r2 = r3.getMainThreadExecutor()
            if (r2 == 0) goto L1a
            java.util.concurrent.Executor r2 = r3.getMainThreadExecutor()
            r1.mMainThreadExecutor = r2
            goto L1e
        L1a:
            java.util.concurrent.Executor r2 = android.support.v7.recyclerview.extensions.AsyncListDiffer.sMainThreadExecutor
            r1.mMainThreadExecutor = r2
        L1e:
            return
    }

    public AsyncListDiffer(android.support.v7.widget.RecyclerView.Adapter r2, android.support.v7.util.DiffUtil.ItemCallback<T> r3) {
            r1 = this;
            android.support.v7.util.AdapterListUpdateCallback r0 = new android.support.v7.util.AdapterListUpdateCallback
            r0.<init>(r2)
            android.support.v7.recyclerview.extensions.AsyncDifferConfig$Builder r2 = new android.support.v7.recyclerview.extensions.AsyncDifferConfig$Builder
            r2.<init>(r3)
            android.support.v7.recyclerview.extensions.AsyncDifferConfig r2 = r2.build()
            r1.<init>(r0, r2)
            return
    }

    public java.util.List<T> getCurrentList() {
            r1 = this;
            java.util.List<T> r0 = r1.mReadOnlyList
            return r0
    }

    void latchList(java.util.List<T> r1, android.support.v7.util.DiffUtil.DiffResult r2) {
            r0 = this;
            r0.mList = r1
            java.util.List r1 = java.util.Collections.unmodifiableList(r1)
            r0.mReadOnlyList = r1
            android.support.v7.util.ListUpdateCallback r1 = r0.mUpdateCallback
            r2.dispatchUpdatesTo(r1)
            return
    }

    public void submitList(java.util.List<T> r5) {
            r4 = this;
            int r0 = r4.mMaxScheduledGeneration
            int r0 = r0 + 1
            r4.mMaxScheduledGeneration = r0
            java.util.List<T> r1 = r4.mList
            if (r5 != r1) goto Lb
            return
        Lb:
            r2 = 0
            if (r5 != 0) goto L21
            int r5 = r1.size()
            r0 = 0
            r4.mList = r0
            java.util.List r0 = java.util.Collections.emptyList()
            r4.mReadOnlyList = r0
            android.support.v7.util.ListUpdateCallback r0 = r4.mUpdateCallback
            r0.onRemoved(r2, r5)
            return
        L21:
            if (r1 != 0) goto L35
            r4.mList = r5
            java.util.List r0 = java.util.Collections.unmodifiableList(r5)
            r4.mReadOnlyList = r0
            android.support.v7.util.ListUpdateCallback r0 = r4.mUpdateCallback
            int r5 = r5.size()
            r0.onInserted(r2, r5)
            return
        L35:
            android.support.v7.recyclerview.extensions.AsyncDifferConfig<T> r2 = r4.mConfig
            java.util.concurrent.Executor r2 = r2.getBackgroundThreadExecutor()
            android.support.v7.recyclerview.extensions.AsyncListDiffer$1 r3 = new android.support.v7.recyclerview.extensions.AsyncListDiffer$1
            r3.<init>(r4, r1, r5, r0)
            r2.execute(r3)
            return
    }
}
