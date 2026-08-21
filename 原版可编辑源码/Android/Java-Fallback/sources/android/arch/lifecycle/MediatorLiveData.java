package android.arch.lifecycle;

public class MediatorLiveData<T> extends android.arch.lifecycle.MutableLiveData<T> {
    private android.arch.core.internal.SafeIterableMap<android.arch.lifecycle.LiveData<?>, android.arch.lifecycle.MediatorLiveData.Source<?>> mSources;

    private static class Source<V> implements android.arch.lifecycle.Observer<V> {
        final android.arch.lifecycle.LiveData<V> mLiveData;
        final android.arch.lifecycle.Observer<V> mObserver;
        int mVersion;

        Source(android.arch.lifecycle.LiveData<V> r2, android.arch.lifecycle.Observer<V> r3) {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.mVersion = r0
                r1.mLiveData = r2
                r1.mObserver = r3
                return
        }

        @Override
        public void onChanged(V r3) {
                r2 = this;
                int r0 = r2.mVersion
                android.arch.lifecycle.LiveData<V> r1 = r2.mLiveData
                int r1 = r1.getVersion()
                if (r0 == r1) goto L17
                android.arch.lifecycle.LiveData<V> r0 = r2.mLiveData
                int r0 = r0.getVersion()
                r2.mVersion = r0
                android.arch.lifecycle.Observer<V> r0 = r2.mObserver
                r0.onChanged(r3)
            L17:
                return
        }

        void plug() {
                r1 = this;
                android.arch.lifecycle.LiveData<V> r0 = r1.mLiveData
                r0.observeForever(r1)
                return
        }

        void unplug() {
                r1 = this;
                android.arch.lifecycle.LiveData<V> r0 = r1.mLiveData
                r0.removeObserver(r1)
                return
        }
    }

    public MediatorLiveData() {
            r1 = this;
            r1.<init>()
            android.arch.core.internal.SafeIterableMap r0 = new android.arch.core.internal.SafeIterableMap
            r0.<init>()
            r1.mSources = r0
            return
    }

    public <S> void addSource(android.arch.lifecycle.LiveData<S> r3, android.arch.lifecycle.Observer<S> r4) {
            r2 = this;
            android.arch.lifecycle.MediatorLiveData$Source r0 = new android.arch.lifecycle.MediatorLiveData$Source
            r0.<init>(r3, r4)
            android.arch.core.internal.SafeIterableMap<android.arch.lifecycle.LiveData<?>, android.arch.lifecycle.MediatorLiveData$Source<?>> r1 = r2.mSources
            java.lang.Object r3 = r1.putIfAbsent(r3, r0)
            android.arch.lifecycle.MediatorLiveData$Source r3 = (android.arch.lifecycle.MediatorLiveData.Source) r3
            if (r3 == 0) goto L1c
            android.arch.lifecycle.Observer<V> r1 = r3.mObserver
            if (r1 != r4) goto L14
            goto L1c
        L14:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "This source was already added with the different observer"
            r3.<init>(r4)
            throw r3
        L1c:
            if (r3 == 0) goto L1f
            return
        L1f:
            boolean r3 = r2.hasActiveObservers()
            if (r3 == 0) goto L28
            r0.plug()
        L28:
            return
    }

    @Override
    protected void onActive() {
            r2 = this;
            android.arch.core.internal.SafeIterableMap<android.arch.lifecycle.LiveData<?>, android.arch.lifecycle.MediatorLiveData$Source<?>> r0 = r2.mSources
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r1 = r1.getValue()
            android.arch.lifecycle.MediatorLiveData$Source r1 = (android.arch.lifecycle.MediatorLiveData.Source) r1
            r1.plug()
            goto L6
        L1c:
            return
    }

    @Override
    protected void onInactive() {
            r2 = this;
            android.arch.core.internal.SafeIterableMap<android.arch.lifecycle.LiveData<?>, android.arch.lifecycle.MediatorLiveData$Source<?>> r0 = r2.mSources
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r1 = r1.getValue()
            android.arch.lifecycle.MediatorLiveData$Source r1 = (android.arch.lifecycle.MediatorLiveData.Source) r1
            r1.unplug()
            goto L6
        L1c:
            return
    }

    public <S> void removeSource(android.arch.lifecycle.LiveData<S> r2) {
            r1 = this;
            android.arch.core.internal.SafeIterableMap<android.arch.lifecycle.LiveData<?>, android.arch.lifecycle.MediatorLiveData$Source<?>> r0 = r1.mSources
            java.lang.Object r2 = r0.remove(r2)
            android.arch.lifecycle.MediatorLiveData$Source r2 = (android.arch.lifecycle.MediatorLiveData.Source) r2
            if (r2 == 0) goto Ld
            r2.unplug()
        Ld:
            return
    }
}
