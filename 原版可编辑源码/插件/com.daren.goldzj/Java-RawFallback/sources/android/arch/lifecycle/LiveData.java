package android.arch.lifecycle;

public abstract class LiveData<T> {
    private static final java.lang.Object NOT_SET = null;
    static final int START_VERSION = -1;
    private int mActiveCount;
    private volatile java.lang.Object mData;
    private final java.lang.Object mDataLock;
    private boolean mDispatchInvalidated;
    private boolean mDispatchingValue;
    private android.arch.core.internal.SafeIterableMap<android.arch.lifecycle.Observer<T>, android.arch.lifecycle.LiveData<T>.ObserverWrapper> mObservers;
    private volatile java.lang.Object mPendingData;
    private final java.lang.Runnable mPostValueRunnable;
    private int mVersion;


    private class AlwaysActiveObserver extends android.arch.lifecycle.LiveData<T>.ObserverWrapper {
        final android.arch.lifecycle.LiveData this$0;

        AlwaysActiveObserver(android.arch.lifecycle.LiveData r1, android.arch.lifecycle.Observer<T> r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r1, r2)
                return
        }

        @Override
        boolean shouldBeActive() {
                r1 = this;
                r0 = 1
                return r0
        }
    }

    class LifecycleBoundObserver extends android.arch.lifecycle.LiveData<T>.ObserverWrapper implements android.arch.lifecycle.GenericLifecycleObserver {

        @android.support.annotation.NonNull
        final android.arch.lifecycle.LifecycleOwner mOwner;
        final android.arch.lifecycle.LiveData this$0;

        LifecycleBoundObserver(@android.support.annotation.NonNull android.arch.lifecycle.LiveData r1, android.arch.lifecycle.LifecycleOwner r2, android.arch.lifecycle.Observer<T> r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r1, r3)
                r0.mOwner = r2
                return
        }

        @Override
        void detachObserver() {
                r1 = this;
                android.arch.lifecycle.LifecycleOwner r0 = r1.mOwner
                android.arch.lifecycle.Lifecycle r0 = r0.getLifecycle()
                r0.removeObserver(r1)
                return
        }

        @Override
        boolean isAttachedTo(android.arch.lifecycle.LifecycleOwner r2) {
                r1 = this;
                android.arch.lifecycle.LifecycleOwner r0 = r1.mOwner
                if (r0 != r2) goto L6
                r2 = 1
                goto L7
            L6:
                r2 = 0
            L7:
                return r2
        }

        @Override
        public void onStateChanged(android.arch.lifecycle.LifecycleOwner r1, android.arch.lifecycle.Lifecycle.Event r2) {
                r0 = this;
                android.arch.lifecycle.LifecycleOwner r1 = r0.mOwner
                android.arch.lifecycle.Lifecycle r1 = r1.getLifecycle()
                android.arch.lifecycle.Lifecycle$State r1 = r1.getCurrentState()
                android.arch.lifecycle.Lifecycle$State r2 = android.arch.lifecycle.Lifecycle.State.DESTROYED
                if (r1 != r2) goto L16
                android.arch.lifecycle.LiveData r1 = r0.this$0
                android.arch.lifecycle.Observer<T> r2 = r0.mObserver
                r1.removeObserver(r2)
                return
            L16:
                boolean r1 = r0.shouldBeActive()
                r0.activeStateChanged(r1)
                return
        }

        @Override
        boolean shouldBeActive() {
                r2 = this;
                android.arch.lifecycle.LifecycleOwner r0 = r2.mOwner
                android.arch.lifecycle.Lifecycle r0 = r0.getLifecycle()
                android.arch.lifecycle.Lifecycle$State r0 = r0.getCurrentState()
                android.arch.lifecycle.Lifecycle$State r1 = android.arch.lifecycle.Lifecycle.State.STARTED
                boolean r0 = r0.isAtLeast(r1)
                return r0
        }
    }

    private abstract class ObserverWrapper {
        boolean mActive;
        int mLastVersion;
        final android.arch.lifecycle.Observer<T> mObserver;
        final android.arch.lifecycle.LiveData this$0;

        ObserverWrapper(android.arch.lifecycle.LiveData r1, android.arch.lifecycle.Observer<T> r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = -1
                r0.mLastVersion = r1
                r0.mObserver = r2
                return
        }

        void activeStateChanged(boolean r5) {
                r4 = this;
                boolean r0 = r4.mActive
                if (r5 != r0) goto L5
                return
            L5:
                r4.mActive = r5
                android.arch.lifecycle.LiveData r5 = r4.this$0
                int r5 = android.arch.lifecycle.LiveData.access$300(r5)
                r0 = 1
                if (r5 != 0) goto L12
                r5 = 1
                goto L13
            L12:
                r5 = 0
            L13:
                android.arch.lifecycle.LiveData r1 = r4.this$0
                int r2 = android.arch.lifecycle.LiveData.access$300(r1)
                boolean r3 = r4.mActive
                if (r3 == 0) goto L1e
                goto L1f
            L1e:
                r0 = -1
            L1f:
                int r2 = r2 + r0
                android.arch.lifecycle.LiveData.access$302(r1, r2)
                if (r5 == 0) goto L2e
                boolean r5 = r4.mActive
                if (r5 == 0) goto L2e
                android.arch.lifecycle.LiveData r5 = r4.this$0
                r5.onActive()
            L2e:
                android.arch.lifecycle.LiveData r5 = r4.this$0
                int r5 = android.arch.lifecycle.LiveData.access$300(r5)
                if (r5 != 0) goto L3f
                boolean r5 = r4.mActive
                if (r5 != 0) goto L3f
                android.arch.lifecycle.LiveData r5 = r4.this$0
                r5.onInactive()
            L3f:
                boolean r5 = r4.mActive
                if (r5 == 0) goto L48
                android.arch.lifecycle.LiveData r5 = r4.this$0
                android.arch.lifecycle.LiveData.access$400(r5, r4)
            L48:
                return
        }

        void detachObserver() {
                r0 = this;
                return
        }

        boolean isAttachedTo(android.arch.lifecycle.LifecycleOwner r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        abstract boolean shouldBeActive();
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            android.arch.lifecycle.LiveData.NOT_SET = r0
            return
    }

    public LiveData() {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.mDataLock = r0
            android.arch.core.internal.SafeIterableMap r0 = new android.arch.core.internal.SafeIterableMap
            r0.<init>()
            r1.mObservers = r0
            r0 = 0
            r1.mActiveCount = r0
            java.lang.Object r0 = android.arch.lifecycle.LiveData.NOT_SET
            r1.mData = r0
            r1.mPendingData = r0
            r0 = -1
            r1.mVersion = r0
            android.arch.lifecycle.LiveData$1 r0 = new android.arch.lifecycle.LiveData$1
            r0.<init>(r1)
            r1.mPostValueRunnable = r0
            return
    }

    static java.lang.Object access$000(android.arch.lifecycle.LiveData r0) {
            java.lang.Object r0 = r0.mDataLock
            return r0
    }

    static java.lang.Object access$100(android.arch.lifecycle.LiveData r0) {
            java.lang.Object r0 = r0.mPendingData
            return r0
    }

    static java.lang.Object access$102(android.arch.lifecycle.LiveData r0, java.lang.Object r1) {
            r0.mPendingData = r1
            return r1
    }

    static java.lang.Object access$200() {
            java.lang.Object r0 = android.arch.lifecycle.LiveData.NOT_SET
            return r0
    }

    static int access$300(android.arch.lifecycle.LiveData r0) {
            int r0 = r0.mActiveCount
            return r0
    }

    static int access$302(android.arch.lifecycle.LiveData r0, int r1) {
            r0.mActiveCount = r1
            return r1
    }

    static void access$400(android.arch.lifecycle.LiveData r0, android.arch.lifecycle.LiveData.ObserverWrapper r1) {
            r0.dispatchingValue(r1)
            return
    }

    private static void assertMainThread(java.lang.String r3) {
            android.arch.core.executor.ArchTaskExecutor r0 = android.arch.core.executor.ArchTaskExecutor.getInstance()
            boolean r0 = r0.isMainThread()
            if (r0 == 0) goto Lb
            return
        Lb:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Cannot invoke "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = " on a background"
            r1.append(r3)
            java.lang.String r3 = " thread"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    private void considerNotify(android.arch.lifecycle.LiveData<T>.ObserverWrapper r3) {
            r2 = this;
            boolean r0 = r3.mActive
            if (r0 != 0) goto L5
            return
        L5:
            boolean r0 = r3.shouldBeActive()
            if (r0 != 0) goto L10
            r0 = 0
            r3.activeStateChanged(r0)
            return
        L10:
            int r0 = r3.mLastVersion
            int r1 = r2.mVersion
            if (r0 < r1) goto L17
            return
        L17:
            r3.mLastVersion = r1
            android.arch.lifecycle.Observer<T> r3 = r3.mObserver
            java.lang.Object r0 = r2.mData
            r3.onChanged(r0)
            return
    }

    private void dispatchingValue(@android.support.annotation.Nullable android.arch.lifecycle.LiveData<T>.ObserverWrapper r4) {
            r3 = this;
            boolean r0 = r3.mDispatchingValue
            r1 = 1
            if (r0 == 0) goto L8
            r3.mDispatchInvalidated = r1
            return
        L8:
            r3.mDispatchingValue = r1
        La:
            r0 = 0
            r3.mDispatchInvalidated = r0
            if (r4 == 0) goto L14
            r3.considerNotify(r4)
            r4 = 0
            goto L33
        L14:
            android.arch.core.internal.SafeIterableMap<android.arch.lifecycle.Observer<T>, android.arch.lifecycle.LiveData<T>$ObserverWrapper> r1 = r3.mObservers
            android.arch.core.internal.SafeIterableMap$IteratorWithAdditions r1 = r1.iteratorWithAdditions()
        L1a:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L33
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r2 = r2.getValue()
            android.arch.lifecycle.LiveData$ObserverWrapper r2 = (android.arch.lifecycle.LiveData.ObserverWrapper) r2
            r3.considerNotify(r2)
            boolean r2 = r3.mDispatchInvalidated
            if (r2 == 0) goto L1a
        L33:
            boolean r1 = r3.mDispatchInvalidated
            if (r1 != 0) goto La
            r3.mDispatchingValue = r0
            return
    }

    @android.support.annotation.Nullable
    public T getValue() {
            r2 = this;
            java.lang.Object r0 = r2.mData
            java.lang.Object r1 = android.arch.lifecycle.LiveData.NOT_SET
            if (r0 == r1) goto L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    int getVersion() {
            r1 = this;
            int r0 = r1.mVersion
            return r0
    }

    public boolean hasActiveObservers() {
            r1 = this;
            int r0 = r1.mActiveCount
            if (r0 <= 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean hasObservers() {
            r1 = this;
            android.arch.core.internal.SafeIterableMap<android.arch.lifecycle.Observer<T>, android.arch.lifecycle.LiveData<T>$ObserverWrapper> r0 = r1.mObservers
            int r0 = r0.size()
            if (r0 <= 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    @android.support.annotation.MainThread
    public void observe(@android.support.annotation.NonNull android.arch.lifecycle.LifecycleOwner r3, @android.support.annotation.NonNull android.arch.lifecycle.Observer<T> r4) {
            r2 = this;
            android.arch.lifecycle.Lifecycle r0 = r3.getLifecycle()
            android.arch.lifecycle.Lifecycle$State r0 = r0.getCurrentState()
            android.arch.lifecycle.Lifecycle$State r1 = android.arch.lifecycle.Lifecycle.State.DESTROYED
            if (r0 != r1) goto Ld
            return
        Ld:
            android.arch.lifecycle.LiveData$LifecycleBoundObserver r0 = new android.arch.lifecycle.LiveData$LifecycleBoundObserver
            r0.<init>(r2, r3, r4)
            android.arch.core.internal.SafeIterableMap<android.arch.lifecycle.Observer<T>, android.arch.lifecycle.LiveData<T>$ObserverWrapper> r1 = r2.mObservers
            java.lang.Object r4 = r1.putIfAbsent(r4, r0)
            android.arch.lifecycle.LiveData$ObserverWrapper r4 = (android.arch.lifecycle.LiveData.ObserverWrapper) r4
            if (r4 == 0) goto L2b
            boolean r1 = r4.isAttachedTo(r3)
            if (r1 == 0) goto L23
            goto L2b
        L23:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Cannot add the same observer with different lifecycles"
            r3.<init>(r4)
            throw r3
        L2b:
            if (r4 == 0) goto L2e
            return
        L2e:
            android.arch.lifecycle.Lifecycle r3 = r3.getLifecycle()
            r3.addObserver(r0)
            return
    }

    @android.support.annotation.MainThread
    public void observeForever(@android.support.annotation.NonNull android.arch.lifecycle.Observer<T> r3) {
            r2 = this;
            android.arch.lifecycle.LiveData$AlwaysActiveObserver r0 = new android.arch.lifecycle.LiveData$AlwaysActiveObserver
            r0.<init>(r2, r3)
            android.arch.core.internal.SafeIterableMap<android.arch.lifecycle.Observer<T>, android.arch.lifecycle.LiveData<T>$ObserverWrapper> r1 = r2.mObservers
            java.lang.Object r3 = r1.putIfAbsent(r3, r0)
            android.arch.lifecycle.LiveData$ObserverWrapper r3 = (android.arch.lifecycle.LiveData.ObserverWrapper) r3
            if (r3 == 0) goto L1c
            boolean r1 = r3 instanceof android.arch.lifecycle.LiveData.LifecycleBoundObserver
            if (r1 != 0) goto L14
            goto L1c
        L14:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Cannot add the same observer with different lifecycles"
            r3.<init>(r0)
            throw r3
        L1c:
            if (r3 == 0) goto L1f
            return
        L1f:
            r3 = 1
            r0.activeStateChanged(r3)
            return
    }

    protected void onActive() {
            r0 = this;
            return
    }

    protected void onInactive() {
            r0 = this;
            return
    }

    protected void postValue(T r4) {
            r3 = this;
            java.lang.Object r0 = r3.mDataLock
            monitor-enter(r0)
            java.lang.Object r1 = r3.mPendingData     // Catch: java.lang.Throwable -> L1c
            java.lang.Object r2 = android.arch.lifecycle.LiveData.NOT_SET     // Catch: java.lang.Throwable -> L1c
            if (r1 != r2) goto Lb
            r1 = 1
            goto Lc
        Lb:
            r1 = 0
        Lc:
            r3.mPendingData = r4     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            if (r1 != 0) goto L12
            return
        L12:
            android.arch.core.executor.ArchTaskExecutor r4 = android.arch.core.executor.ArchTaskExecutor.getInstance()
            java.lang.Runnable r0 = r3.mPostValueRunnable
            r4.postToMainThread(r0)
            return
        L1c:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            throw r4
    }

    @android.support.annotation.MainThread
    public void removeObserver(@android.support.annotation.NonNull android.arch.lifecycle.Observer<T> r2) {
            r1 = this;
            java.lang.String r0 = "removeObserver"
            assertMainThread(r0)
            android.arch.core.internal.SafeIterableMap<android.arch.lifecycle.Observer<T>, android.arch.lifecycle.LiveData<T>$ObserverWrapper> r0 = r1.mObservers
            java.lang.Object r2 = r0.remove(r2)
            android.arch.lifecycle.LiveData$ObserverWrapper r2 = (android.arch.lifecycle.LiveData.ObserverWrapper) r2
            if (r2 != 0) goto L10
            return
        L10:
            r2.detachObserver()
            r0 = 0
            r2.activeStateChanged(r0)
            return
    }

    @android.support.annotation.MainThread
    public void removeObservers(@android.support.annotation.NonNull android.arch.lifecycle.LifecycleOwner r4) {
            r3 = this;
            java.lang.String r0 = "removeObservers"
            assertMainThread(r0)
            android.arch.core.internal.SafeIterableMap<android.arch.lifecycle.Observer<T>, android.arch.lifecycle.LiveData<T>$ObserverWrapper> r0 = r3.mObservers
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2d
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            android.arch.lifecycle.LiveData$ObserverWrapper r2 = (android.arch.lifecycle.LiveData.ObserverWrapper) r2
            boolean r2 = r2.isAttachedTo(r4)
            if (r2 == 0) goto Lb
            java.lang.Object r1 = r1.getKey()
            android.arch.lifecycle.Observer r1 = (android.arch.lifecycle.Observer) r1
            r3.removeObserver(r1)
            goto Lb
        L2d:
            return
    }

    @android.support.annotation.MainThread
    protected void setValue(T r2) {
            r1 = this;
            java.lang.String r0 = "setValue"
            assertMainThread(r0)
            int r0 = r1.mVersion
            int r0 = r0 + 1
            r1.mVersion = r0
            r1.mData = r2
            r2 = 0
            r1.dispatchingValue(r2)
            return
    }
}
