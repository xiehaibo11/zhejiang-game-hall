package android.arch.lifecycle;

import android.arch.core.internal.SafeIterableMap;
import android.support.annotation.CallSuper;
import android.support.annotation.MainThread;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import java.util.Iterator;
import java.util.Map;

public class MediatorLiveData<T> extends MutableLiveData<T> {
    private SafeIterableMap<LiveData<?>, Source<?>> mSources;

    private static class Source<V> implements Observer<V> {
        final LiveData<V> mLiveData;
        final Observer<V> mObserver;
        int mVersion;

        Source(LiveData<V> r2, Observer<V> r3) {
            this.mVersion = -1;
            this.mLiveData = r2;
            this.mObserver = r3;
        }

        void plug() {
            this.mLiveData.observeForever(this);
        }

        void unplug() {
            this.mLiveData.removeObserver(this);
        }

        @Override
        public void onChanged(@Nullable V r3) {
            if (this.mVersion == this.mLiveData.getVersion()) goto L6;
            this.mVersion = this.mLiveData.getVersion();
            this.mObserver.onChanged(r3);
            return;
        }
    }

    public MediatorLiveData() {
        this.mSources = new SafeIterableMap();
    }

    @MainThread
    public <S> void addSource(@NonNull LiveData<S> r3, @NonNull Observer<S> r4) {
        Source<?> r0 = new Source(r3, r4);
        Source<?> r32 = this.mSources.putIfAbsent(r3, r0);
        if (r32 != null) goto L5;
    L9:
        if (r32 == null) goto L12;
        return;
    L12:
        if (hasActiveObservers() == false) goto L15;
        r0.plug();
        return;
    L15:
        return;
    L5:
        if (r32.mObserver == r4) goto L9;
        throw new IllegalArgumentException("This source was already added with the different observer");
    }

    @MainThread
    public <S> void removeSource(@NonNull LiveData<S> r2) {
        Source<?> r22 = this.mSources.remove(r2);
        if (r22 == null) goto L6;
        r22.unplug();
        return;
    }

    @Override
    @CallSuper
    protected void onActive() {
        Iterator<Map.Entry<LiveData<?>, Source<?>>> r0 = this.mSources.iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().getValue().plug();
        goto L4
    }

    @Override
    @CallSuper
    protected void onInactive() {
        Iterator<Map.Entry<LiveData<?>, Source<?>>> r0 = this.mSources.iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().getValue().unplug();
        goto L4
    }
}
