package android.arch.lifecycle;

import android.arch.core.executor.ArchTaskExecutor;
import android.arch.core.internal.SafeIterableMap;
import android.arch.lifecycle.Lifecycle;
import android.support.annotation.MainThread;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import java.util.Iterator;
import java.util.Map;

public abstract class LiveData<T> {
    private static final Object NOT_SET = null;
    static final int START_VERSION = -1;
    private int mActiveCount;
    private volatile Object mData;
    private final Object mDataLock;
    private boolean mDispatchInvalidated;
    private boolean mDispatchingValue;
    private SafeIterableMap<Observer<T>, LiveData<T>.ObserverWrapper> mObservers;
    private volatile Object mPendingData;
    private final Runnable mPostValueRunnable;
    private int mVersion;

    private class AlwaysActiveObserver extends LiveData<T>.ObserverWrapper {
        final LiveData this$0;

        @Override
        boolean shouldBeActive() {
            return true;
        }

        AlwaysActiveObserver(LiveData r1, Observer<T> r2) {
            this.this$0 = r1;
            super(r1, r2);
        }
    }

    class LifecycleBoundObserver extends LiveData<T>.ObserverWrapper implements GenericLifecycleObserver {

        @NonNull
        final LifecycleOwner mOwner;
        final LiveData this$0;

        LifecycleBoundObserver(@NonNull LiveData r1, LifecycleOwner r2, Observer<T> r3) {
            this.this$0 = r1;
            super(r1, r3);
            this.mOwner = r2;
        }

        @Override
        boolean shouldBeActive() {
            return this.mOwner.getLifecycle().getCurrentState().isAtLeast(Lifecycle.State.STARTED);
        }

        @Override
        public void onStateChanged(LifecycleOwner r1, Lifecycle.Event r2) {
            if (this.mOwner.getLifecycle().getCurrentState() != Lifecycle.State.DESTROYED) goto L6;
            this.this$0.removeObserver(this.mObserver);
            return;
        L6:
            activeStateChanged(shouldBeActive());
        }

        @Override
        boolean isAttachedTo(LifecycleOwner r2) {
            if (this.mOwner != r2) goto L5;
            return true;
        L5:
            return false;
        }

        @Override
        void detachObserver() {
            this.mOwner.getLifecycle().removeObserver(this);
        }
    }

    private abstract class ObserverWrapper {
        boolean mActive;
        int mLastVersion;
        final Observer<T> mObserver;
        final LiveData this$0;

        void detachObserver() {
        }

        boolean isAttachedTo(LifecycleOwner r1) {
            return false;
        }

        abstract boolean shouldBeActive();

        ObserverWrapper(LiveData r1, Observer<T> r2) {
            this.this$0 = r1;
            this.mLastVersion = -1;
            this.mObserver = r2;
        }

        void activeStateChanged(boolean r5) {
            if (r5 != this.mActive) goto L5;
            return;
        L5:
            this.mActive = r5;
            int r0 = 1;
            if (LiveData.access$300(this.this$0) != 0) goto L8;
            boolean r52 = true;
        L9:
            LiveData r1 = this.this$0;
            int r2 = LiveData.access$300(r1);
            if (this.mActive == true) goto L13;
            r0 = -1;
        L13:
            LiveData.access$302(r1, r2 + r0);
            if (r52 == false) goto L19;
            if (this.mActive == false) goto L19;
            this.this$0.onActive();
        L19:
            if (LiveData.access$300(this.this$0) != 0) goto L24;
            if (this.mActive == true) goto L24;
            this.this$0.onInactive();
        L24:
            if (this.mActive == false) goto L27;
            LiveData.access$400(this.this$0, this);
            return;
        L27:
            return;
        L8:
            r52 = false;
            goto L9
        }
    }

    protected void onActive() {
    }

    protected void onInactive() {
    }

    public LiveData() {
        this.mDataLock = new Object();
        this.mObservers = new SafeIterableMap();
        this.mActiveCount = 0;
        Object r0 = NOT_SET;
        this.mData = r0;
        this.mPendingData = r0;
        this.mVersion = -1;
        this.mPostValueRunnable = new 1(this);
    }

    static Object access$000(LiveData r0) {
        return r0.mDataLock;
    }

    static Object access$100(LiveData r0) {
        return r0.mPendingData;
    }

    static Object access$102(LiveData r0, Object r1) {
        r0.mPendingData = r1;
        return r1;
    }

    static Object access$200() {
        return NOT_SET;
    }

    static int access$300(LiveData r0) {
        return r0.mActiveCount;
    }

    static int access$302(LiveData r0, int r1) {
        r0.mActiveCount = r1;
        return r1;
    }

    static void access$400(LiveData r0, ObserverWrapper r1) {
        r0.dispatchingValue(r1);
    }

    static {
        NOT_SET = new Object();
    }

    private void considerNotify(LiveData<T>.ObserverWrapper r3) {
        if (r3.mActive == true) goto L6;
        return;
    L6:
        if (r3.shouldBeActive() == true) goto L9;
        r3.activeStateChanged(false);
        return;
    L9:
        int r0 = r3.mLastVersion;
        int r1 = this.mVersion;
        if (r0 < r1) goto L12;
        return;
    L12:
        r3.mLastVersion = r1;
        r3.mObserver.onChanged((T) this.mData);
    }

    private void dispatchingValue(@Nullable LiveData<T>.ObserverWrapper r4) {
        if (this.mDispatchingValue == false) goto L6;
        this.mDispatchInvalidated = true;
        return;
    L6:
        this.mDispatchingValue = true;
    L7:
        this.mDispatchInvalidated = false;
        if (r4 == null) goto L10;
        considerNotify(r4);
        r4 = null;
    L16:
        if (this.mDispatchInvalidated == true) goto L7;
        this.mDispatchingValue = false;
        return;
    L10:
        SafeIterableMap<Observer<T>, LiveData<T>.ObserverWrapper>.IteratorWithAdditions r1 = this.mObservers.iteratorWithAdditions();
    L12:
        if (r1.hasNext() == false) goto L16;
        considerNotify((ObserverWrapper) r1.next().getValue());
        if (this.mDispatchInvalidated == false) goto L12;
        goto L16
    }

    @MainThread
    public void observe(@NonNull LifecycleOwner r3, @NonNull Observer<T> r4) {
        if (r3.getLifecycle().getCurrentState() != Lifecycle.State.DESTROYED) goto L5;
        return;
    L5:
        LifecycleBoundObserver r0 = new LifecycleBoundObserver(this, r3, r4);
        LiveData<T>.ObserverWrapper r42 = this.mObservers.putIfAbsent(r4, r0);
        if (r42 != null) goto L8;
    L12:
        if (r42 == null) goto L14;
        return;
    L14:
        r3.getLifecycle().addObserver(r0);
        return;
    L8:
        if (r42.isAttachedTo(r3) == true) goto L12;
        throw new IllegalArgumentException("Cannot add the same observer with different lifecycles");
    }

    @MainThread
    public void observeForever(@NonNull Observer<T> r3) {
        AlwaysActiveObserver r0 = new AlwaysActiveObserver(this, r3);
        LiveData<T>.ObserverWrapper r32 = this.mObservers.putIfAbsent(r3, r0);
        if (r32 != null) goto L5;
    L9:
        if (r32 == null) goto L11;
        return;
    L11:
        r0.activeStateChanged(true);
        return;
    L5:
        if ((r32 instanceof LifecycleBoundObserver) == false) goto L9;
        throw new IllegalArgumentException("Cannot add the same observer with different lifecycles");
    }

    @MainThread
    public void removeObserver(@NonNull Observer<T> r2) {
        assertMainThread("removeObserver");
        LiveData<T>.ObserverWrapper r22 = this.mObservers.remove(r2);
        if (r22 != null) goto L5;
        return;
    L5:
        r22.detachObserver();
        r22.activeStateChanged(false);
    }

    @MainThread
    public void removeObservers(@NonNull LifecycleOwner r4) {
        assertMainThread("removeObservers");
        Iterator<Map.Entry<Observer<T>, LiveData<T>.ObserverWrapper>> r0 = this.mObservers.iterator();
    L4:
        if (r0.hasNext() == false) goto L8;
        Map.Entry<Observer<T>, LiveData<T>.ObserverWrapper> r1 = r0.next();
        if (r1.getValue().isAttachedTo(r4) == false) goto L4;
        removeObserver(r1.getKey());
        goto L4
    }

    protected void postValue(T r4) {
        Object r0 = this.mDataLock;
        monitor-enter(r0);
    L14:
        th = move-exception;
        throw th;
    L5:
        if (this.mPendingData != NOT_SET) goto L7;
        boolean r1 = true;
    L8:
        this.mPendingData = r4;     // Catch: Throwable -> L14
        monitor-exit(r0);     // Catch: Throwable -> L14
        if (r1 == true) goto L12;
        return;
    L12:
        ArchTaskExecutor.getInstance().postToMainThread(this.mPostValueRunnable);
        return;
    L7:
        r1 = false;
        goto L8
    }

    @MainThread
    protected void setValue(T r2) {
        assertMainThread("setValue");
        this.mVersion++;
        this.mData = r2;
        dispatchingValue(null);
    }

    @Nullable
    public T getValue() {
        T r0 = (T) this.mData;
        if (r0 == NOT_SET) goto L5;
        return r0;
    L5:
        return null;
    }

    int getVersion() {
        return this.mVersion;
    }

    public boolean hasObservers() {
        if (this.mObservers.size() <= 0) goto L5;
        return true;
    L5:
        return false;
    }

    public boolean hasActiveObservers() {
        if (this.mActiveCount <= 0) goto L5;
        return true;
    L5:
        return false;
    }

    private static void assertMainThread(String r3) {
        if (ArchTaskExecutor.getInstance().isMainThread() == false) goto L6;
        return;
    L6:
        throw new IllegalStateException("Cannot invoke " + r3 + " on a background thread");
    }
}
