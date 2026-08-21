package android.support.v4.app;

class LoaderManagerImpl extends android.support.v4.app.LoaderManager {
    static boolean DEBUG = false;
    static final java.lang.String TAG = "LoaderManager";
    private final android.arch.lifecycle.LifecycleOwner mLifecycleOwner;
    private final android.support.v4.app.LoaderManagerImpl.LoaderViewModel mLoaderViewModel;

    public static class LoaderInfo<D> extends android.arch.lifecycle.MutableLiveData<D> implements android.support.v4.content.Loader.OnLoadCompleteListener<D> {
        private final android.os.Bundle mArgs;
        private final int mId;
        private android.arch.lifecycle.LifecycleOwner mLifecycleOwner;
        private final android.support.v4.content.Loader<D> mLoader;
        private android.support.v4.app.LoaderManagerImpl.LoaderObserver<D> mObserver;
        private android.support.v4.content.Loader<D> mPriorLoader;

        LoaderInfo(int r1, android.os.Bundle r2, android.support.v4.content.Loader<D> r3, android.support.v4.content.Loader<D> r4) {
                r0 = this;
                r0.<init>()
                r0.mId = r1
                r0.mArgs = r2
                r0.mLoader = r3
                r0.mPriorLoader = r4
                r3.registerListener(r1, r0)
                return
        }

        android.support.v4.content.Loader<D> destroy(boolean r3) {
                r2 = this;
                boolean r0 = android.support.v4.app.LoaderManagerImpl.DEBUG
                if (r0 == 0) goto L1a
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "  Destroying: "
                r0.append(r1)
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "LoaderManager"
                android.util.Log.v(r1, r0)
            L1a:
                android.support.v4.content.Loader<D> r0 = r2.mLoader
                r0.cancelLoad()
                android.support.v4.content.Loader<D> r0 = r2.mLoader
                r0.abandon()
                android.support.v4.app.LoaderManagerImpl$LoaderObserver<D> r0 = r2.mObserver
                if (r0 == 0) goto L30
                r2.removeObserver(r0)
                if (r3 == 0) goto L30
                r0.reset()
            L30:
                android.support.v4.content.Loader<D> r1 = r2.mLoader
                r1.unregisterListener(r2)
                if (r0 == 0) goto L3d
                boolean r0 = r0.hasDeliveredData()
                if (r0 == 0) goto L3f
            L3d:
                if (r3 == 0) goto L47
            L3f:
                android.support.v4.content.Loader<D> r3 = r2.mLoader
                r3.reset()
                android.support.v4.content.Loader<D> r3 = r2.mPriorLoader
                return r3
            L47:
                android.support.v4.content.Loader<D> r3 = r2.mLoader
                return r3
        }

        public void dump(java.lang.String r4, java.io.FileDescriptor r5, java.io.PrintWriter r6, java.lang.String[] r7) {
                r3 = this;
                r6.print(r4)
                java.lang.String r0 = "mId="
                r6.print(r0)
                int r0 = r3.mId
                r6.print(r0)
                java.lang.String r0 = " mArgs="
                r6.print(r0)
                android.os.Bundle r0 = r3.mArgs
                r6.println(r0)
                r6.print(r4)
                java.lang.String r0 = "mLoader="
                r6.print(r0)
                android.support.v4.content.Loader<D> r0 = r3.mLoader
                r6.println(r0)
                android.support.v4.content.Loader<D> r0 = r3.mLoader
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r4)
                java.lang.String r2 = "  "
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.dump(r1, r5, r6, r7)
                android.support.v4.app.LoaderManagerImpl$LoaderObserver<D> r5 = r3.mObserver
                if (r5 == 0) goto L5f
                r6.print(r4)
                java.lang.String r5 = "mCallbacks="
                r6.print(r5)
                android.support.v4.app.LoaderManagerImpl$LoaderObserver<D> r5 = r3.mObserver
                r6.println(r5)
                android.support.v4.app.LoaderManagerImpl$LoaderObserver<D> r5 = r3.mObserver
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                r7.<init>()
                r7.append(r4)
                r7.append(r2)
                java.lang.String r7 = r7.toString()
                r5.dump(r7, r6)
            L5f:
                r6.print(r4)
                java.lang.String r5 = "mData="
                r6.print(r5)
                android.support.v4.content.Loader r5 = r3.getLoader()
                java.lang.Object r7 = r3.getValue()
                java.lang.String r5 = r5.dataToString(r7)
                r6.println(r5)
                r6.print(r4)
                java.lang.String r4 = "mStarted="
                r6.print(r4)
                boolean r4 = r3.hasActiveObservers()
                r6.println(r4)
                return
        }

        android.support.v4.content.Loader<D> getLoader() {
                r1 = this;
                android.support.v4.content.Loader<D> r0 = r1.mLoader
                return r0
        }

        boolean isCallbackWaitingForData() {
                r2 = this;
                boolean r0 = r2.hasActiveObservers()
                r1 = 0
                if (r0 != 0) goto L8
                return r1
            L8:
                android.support.v4.app.LoaderManagerImpl$LoaderObserver<D> r0 = r2.mObserver
                if (r0 == 0) goto L13
                boolean r0 = r0.hasDeliveredData()
                if (r0 != 0) goto L13
                r1 = 1
            L13:
                return r1
        }

        void markForRedelivery() {
                r2 = this;
                android.arch.lifecycle.LifecycleOwner r0 = r2.mLifecycleOwner
                android.support.v4.app.LoaderManagerImpl$LoaderObserver<D> r1 = r2.mObserver
                if (r0 == 0) goto Le
                if (r1 == 0) goto Le
                super.removeObserver(r1)
                r2.observe(r0, r1)
            Le:
                return
        }

        @Override
        protected void onActive() {
                r2 = this;
                boolean r0 = android.support.v4.app.LoaderManagerImpl.DEBUG
                if (r0 == 0) goto L1a
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "  Starting: "
                r0.append(r1)
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "LoaderManager"
                android.util.Log.v(r1, r0)
            L1a:
                android.support.v4.content.Loader<D> r0 = r2.mLoader
                r0.startLoading()
                return
        }

        @Override
        protected void onInactive() {
                r2 = this;
                boolean r0 = android.support.v4.app.LoaderManagerImpl.DEBUG
                if (r0 == 0) goto L1a
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "  Stopping: "
                r0.append(r1)
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "LoaderManager"
                android.util.Log.v(r1, r0)
            L1a:
                android.support.v4.content.Loader<D> r0 = r2.mLoader
                r0.stopLoading()
                return
        }

        @Override
        public void onLoadComplete(android.support.v4.content.Loader<D> r3, D r4) {
                r2 = this;
                boolean r3 = android.support.v4.app.LoaderManagerImpl.DEBUG
                java.lang.String r0 = "LoaderManager"
                if (r3 == 0) goto L1a
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r1 = "onLoadComplete: "
                r3.append(r1)
                r3.append(r2)
                java.lang.String r3 = r3.toString()
                android.util.Log.v(r0, r3)
            L1a:
                android.os.Looper r3 = android.os.Looper.myLooper()
                android.os.Looper r1 = android.os.Looper.getMainLooper()
                if (r3 != r1) goto L28
                r2.setValue(r4)
                goto L34
            L28:
                boolean r3 = android.support.v4.app.LoaderManagerImpl.DEBUG
                if (r3 == 0) goto L31
                java.lang.String r3 = "onLoadComplete was incorrectly called on a background thread"
                android.util.Log.w(r0, r3)
            L31:
                r2.postValue(r4)
            L34:
                return
        }

        @Override
        public void removeObserver(android.arch.lifecycle.Observer<? super D> r1) {
                r0 = this;
                super.removeObserver(r1)
                r1 = 0
                r0.mLifecycleOwner = r1
                r0.mObserver = r1
                return
        }

        android.support.v4.content.Loader<D> setCallback(android.arch.lifecycle.LifecycleOwner r3, android.support.v4.app.LoaderManager.LoaderCallbacks<D> r4) {
                r2 = this;
                android.support.v4.app.LoaderManagerImpl$LoaderObserver r0 = new android.support.v4.app.LoaderManagerImpl$LoaderObserver
                android.support.v4.content.Loader<D> r1 = r2.mLoader
                r0.<init>(r1, r4)
                r2.observe(r3, r0)
                android.support.v4.app.LoaderManagerImpl$LoaderObserver<D> r4 = r2.mObserver
                if (r4 == 0) goto L11
                r2.removeObserver(r4)
            L11:
                r2.mLifecycleOwner = r3
                r2.mObserver = r0
                android.support.v4.content.Loader<D> r3 = r2.mLoader
                return r3
        }

        @Override
        public void setValue(D r1) {
                r0 = this;
                super.setValue(r1)
                android.support.v4.content.Loader<D> r1 = r0.mPriorLoader
                if (r1 == 0) goto Ld
                r1.reset()
                r1 = 0
                r0.mPriorLoader = r1
            Ld:
                return
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r1 = 64
                r0.<init>(r1)
                java.lang.String r1 = "LoaderInfo{"
                r0.append(r1)
                int r1 = java.lang.System.identityHashCode(r2)
                java.lang.String r1 = java.lang.Integer.toHexString(r1)
                r0.append(r1)
                java.lang.String r1 = " #"
                r0.append(r1)
                int r1 = r2.mId
                r0.append(r1)
                java.lang.String r1 = " : "
                r0.append(r1)
                android.support.v4.content.Loader<D> r1 = r2.mLoader
                android.support.v4.util.DebugUtils.buildShortClassTag(r1, r0)
                java.lang.String r1 = "}}"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static class LoaderObserver<D> implements android.arch.lifecycle.Observer<D> {
        private final android.support.v4.app.LoaderManager.LoaderCallbacks<D> mCallback;
        private boolean mDeliveredData;
        private final android.support.v4.content.Loader<D> mLoader;

        LoaderObserver(android.support.v4.content.Loader<D> r2, android.support.v4.app.LoaderManager.LoaderCallbacks<D> r3) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.mDeliveredData = r0
                r1.mLoader = r2
                r1.mCallback = r3
                return
        }

        public void dump(java.lang.String r1, java.io.PrintWriter r2) {
                r0 = this;
                r2.print(r1)
                java.lang.String r1 = "mDeliveredData="
                r2.print(r1)
                boolean r1 = r0.mDeliveredData
                r2.println(r1)
                return
        }

        boolean hasDeliveredData() {
                r1 = this;
                boolean r0 = r1.mDeliveredData
                return r0
        }

        @Override
        public void onChanged(D r3) {
                r2 = this;
                boolean r0 = android.support.v4.app.LoaderManagerImpl.DEBUG
                if (r0 == 0) goto L2a
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "  onLoadFinished in "
                r0.append(r1)
                android.support.v4.content.Loader<D> r1 = r2.mLoader
                r0.append(r1)
                java.lang.String r1 = ": "
                r0.append(r1)
                android.support.v4.content.Loader<D> r1 = r2.mLoader
                java.lang.String r1 = r1.dataToString(r3)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "LoaderManager"
                android.util.Log.v(r1, r0)
            L2a:
                android.support.v4.app.LoaderManager$LoaderCallbacks<D> r0 = r2.mCallback
                android.support.v4.content.Loader<D> r1 = r2.mLoader
                r0.onLoadFinished(r1, r3)
                r3 = 1
                r2.mDeliveredData = r3
                return
        }

        void reset() {
                r2 = this;
                boolean r0 = r2.mDeliveredData
                if (r0 == 0) goto L27
                boolean r0 = android.support.v4.app.LoaderManagerImpl.DEBUG
                if (r0 == 0) goto L20
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "  Resetting: "
                r0.append(r1)
                android.support.v4.content.Loader<D> r1 = r2.mLoader
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "LoaderManager"
                android.util.Log.v(r1, r0)
            L20:
                android.support.v4.app.LoaderManager$LoaderCallbacks<D> r0 = r2.mCallback
                android.support.v4.content.Loader<D> r1 = r2.mLoader
                r0.onLoaderReset(r1)
            L27:
                return
        }

        public java.lang.String toString() {
                r1 = this;
                android.support.v4.app.LoaderManager$LoaderCallbacks<D> r0 = r1.mCallback
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static class LoaderViewModel extends android.arch.lifecycle.ViewModel {
        private static final android.arch.lifecycle.ViewModelProvider.Factory FACTORY = null;
        private boolean mCreatingLoader;
        private android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl.LoaderInfo> mLoaders;


        static {
                android.support.v4.app.LoaderManagerImpl$LoaderViewModel$1 r0 = new android.support.v4.app.LoaderManagerImpl$LoaderViewModel$1
                r0.<init>()
                android.support.v4.app.LoaderManagerImpl.LoaderViewModel.FACTORY = r0
                return
        }

        LoaderViewModel() {
                r1 = this;
                r1.<init>()
                android.support.v4.util.SparseArrayCompat r0 = new android.support.v4.util.SparseArrayCompat
                r0.<init>()
                r1.mLoaders = r0
                r0 = 0
                r1.mCreatingLoader = r0
                return
        }

        static android.support.v4.app.LoaderManagerImpl.LoaderViewModel getInstance(android.arch.lifecycle.ViewModelStore r2) {
                android.arch.lifecycle.ViewModelProvider r0 = new android.arch.lifecycle.ViewModelProvider
                android.arch.lifecycle.ViewModelProvider$Factory r1 = android.support.v4.app.LoaderManagerImpl.LoaderViewModel.FACTORY
                r0.<init>(r2, r1)
                java.lang.Class<android.support.v4.app.LoaderManagerImpl$LoaderViewModel> r2 = android.support.v4.app.LoaderManagerImpl.LoaderViewModel.class
                android.arch.lifecycle.ViewModel r2 = r0.get(r2)
                android.support.v4.app.LoaderManagerImpl$LoaderViewModel r2 = (android.support.v4.app.LoaderManagerImpl.LoaderViewModel) r2
                return r2
        }

        public void dump(java.lang.String r5, java.io.FileDescriptor r6, java.io.PrintWriter r7, java.lang.String[] r8) {
                r4 = this;
                android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl$LoaderInfo> r0 = r4.mLoaders
                int r0 = r0.size()
                if (r0 <= 0) goto L55
                r7.print(r5)
                java.lang.String r0 = "Loaders:"
                r7.println(r0)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r5)
                java.lang.String r1 = "    "
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r1 = 0
            L22:
                android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl$LoaderInfo> r2 = r4.mLoaders
                int r2 = r2.size()
                if (r1 >= r2) goto L55
                android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl$LoaderInfo> r2 = r4.mLoaders
                java.lang.Object r2 = r2.valueAt(r1)
                android.support.v4.app.LoaderManagerImpl$LoaderInfo r2 = (android.support.v4.app.LoaderManagerImpl.LoaderInfo) r2
                r7.print(r5)
                java.lang.String r3 = "  #"
                r7.print(r3)
                android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl$LoaderInfo> r3 = r4.mLoaders
                int r3 = r3.keyAt(r1)
                r7.print(r3)
                java.lang.String r3 = ": "
                r7.print(r3)
                java.lang.String r3 = r2.toString()
                r7.println(r3)
                r2.dump(r0, r6, r7, r8)
                int r1 = r1 + 1
                goto L22
            L55:
                return
        }

        void finishCreatingLoader() {
                r1 = this;
                r0 = 0
                r1.mCreatingLoader = r0
                return
        }

        <D> android.support.v4.app.LoaderManagerImpl.LoaderInfo<D> getLoader(int r2) {
                r1 = this;
                android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl$LoaderInfo> r0 = r1.mLoaders
                java.lang.Object r2 = r0.get(r2)
                android.support.v4.app.LoaderManagerImpl$LoaderInfo r2 = (android.support.v4.app.LoaderManagerImpl.LoaderInfo) r2
                return r2
        }

        boolean hasRunningLoaders() {
                r4 = this;
                android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl$LoaderInfo> r0 = r4.mLoaders
                int r0 = r0.size()
                r1 = 0
                r2 = r1
            L8:
                if (r2 >= r0) goto L1d
                android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl$LoaderInfo> r3 = r4.mLoaders
                java.lang.Object r3 = r3.valueAt(r2)
                android.support.v4.app.LoaderManagerImpl$LoaderInfo r3 = (android.support.v4.app.LoaderManagerImpl.LoaderInfo) r3
                boolean r3 = r3.isCallbackWaitingForData()
                if (r3 == 0) goto L1a
                r0 = 1
                return r0
            L1a:
                int r2 = r2 + 1
                goto L8
            L1d:
                return r1
        }

        boolean isCreatingLoader() {
                r1 = this;
                boolean r0 = r1.mCreatingLoader
                return r0
        }

        void markForRedelivery() {
                r3 = this;
                android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl$LoaderInfo> r0 = r3.mLoaders
                int r0 = r0.size()
                r1 = 0
            L7:
                if (r1 >= r0) goto L17
                android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl$LoaderInfo> r2 = r3.mLoaders
                java.lang.Object r2 = r2.valueAt(r1)
                android.support.v4.app.LoaderManagerImpl$LoaderInfo r2 = (android.support.v4.app.LoaderManagerImpl.LoaderInfo) r2
                r2.markForRedelivery()
                int r1 = r1 + 1
                goto L7
            L17:
                return
        }

        @Override
        protected void onCleared() {
                r4 = this;
                super.onCleared()
                android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl$LoaderInfo> r0 = r4.mLoaders
                int r0 = r0.size()
                r1 = 0
            La:
                if (r1 >= r0) goto L1b
                android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl$LoaderInfo> r2 = r4.mLoaders
                java.lang.Object r2 = r2.valueAt(r1)
                android.support.v4.app.LoaderManagerImpl$LoaderInfo r2 = (android.support.v4.app.LoaderManagerImpl.LoaderInfo) r2
                r3 = 1
                r2.destroy(r3)
                int r1 = r1 + 1
                goto La
            L1b:
                android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl$LoaderInfo> r0 = r4.mLoaders
                r0.clear()
                return
        }

        void putLoader(int r2, android.support.v4.app.LoaderManagerImpl.LoaderInfo r3) {
                r1 = this;
                android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl$LoaderInfo> r0 = r1.mLoaders
                r0.put(r2, r3)
                return
        }

        void removeLoader(int r2) {
                r1 = this;
                android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl$LoaderInfo> r0 = r1.mLoaders
                r0.remove(r2)
                return
        }

        void startCreatingLoader() {
                r1 = this;
                r0 = 1
                r1.mCreatingLoader = r0
                return
        }
    }

    static {
            return
    }

    LoaderManagerImpl(android.arch.lifecycle.LifecycleOwner r1, android.arch.lifecycle.ViewModelStore r2) {
            r0 = this;
            r0.<init>()
            r0.mLifecycleOwner = r1
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r1 = android.support.v4.app.LoaderManagerImpl.LoaderViewModel.getInstance(r2)
            r0.mLoaderViewModel = r1
            return
    }

    private <D> android.support.v4.content.Loader<D> createAndInstallLoader(int r3, android.os.Bundle r4, android.support.v4.app.LoaderManager.LoaderCallbacks<D> r5, android.support.v4.content.Loader<D> r6) {
            r2 = this;
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r0 = r2.mLoaderViewModel     // Catch: java.lang.Throwable -> L73
            r0.startCreatingLoader()     // Catch: java.lang.Throwable -> L73
            android.support.v4.content.Loader r0 = r5.onCreateLoader(r3, r4)     // Catch: java.lang.Throwable -> L73
            if (r0 == 0) goto L6b
            java.lang.Class r1 = r0.getClass()     // Catch: java.lang.Throwable -> L73
            boolean r1 = r1.isMemberClass()     // Catch: java.lang.Throwable -> L73
            if (r1 == 0) goto L3b
            java.lang.Class r1 = r0.getClass()     // Catch: java.lang.Throwable -> L73
            int r1 = r1.getModifiers()     // Catch: java.lang.Throwable -> L73
            boolean r1 = java.lang.reflect.Modifier.isStatic(r1)     // Catch: java.lang.Throwable -> L73
            if (r1 == 0) goto L24
            goto L3b
        L24:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L73
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73
            r4.<init>()     // Catch: java.lang.Throwable -> L73
            java.lang.String r5 = "Object returned from onCreateLoader must not be a non-static inner member class: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L73
            r4.append(r0)     // Catch: java.lang.Throwable -> L73
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L73
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L73
            throw r3     // Catch: java.lang.Throwable -> L73
        L3b:
            android.support.v4.app.LoaderManagerImpl$LoaderInfo r1 = new android.support.v4.app.LoaderManagerImpl$LoaderInfo     // Catch: java.lang.Throwable -> L73
            r1.<init>(r3, r4, r0, r6)     // Catch: java.lang.Throwable -> L73
            boolean r4 = android.support.v4.app.LoaderManagerImpl.DEBUG     // Catch: java.lang.Throwable -> L73
            if (r4 == 0) goto L5a
            java.lang.String r4 = "LoaderManager"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73
            r6.<init>()     // Catch: java.lang.Throwable -> L73
            java.lang.String r0 = "  Created new loader "
            r6.append(r0)     // Catch: java.lang.Throwable -> L73
            r6.append(r1)     // Catch: java.lang.Throwable -> L73
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L73
            android.util.Log.v(r4, r6)     // Catch: java.lang.Throwable -> L73
        L5a:
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r4 = r2.mLoaderViewModel     // Catch: java.lang.Throwable -> L73
            r4.putLoader(r3, r1)     // Catch: java.lang.Throwable -> L73
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r3 = r2.mLoaderViewModel
            r3.finishCreatingLoader()
            android.arch.lifecycle.LifecycleOwner r3 = r2.mLifecycleOwner
            android.support.v4.content.Loader r3 = r1.setCallback(r3, r5)
            return r3
        L6b:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L73
            java.lang.String r4 = "Object returned from onCreateLoader must not be null"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L73
            throw r3     // Catch: java.lang.Throwable -> L73
        L73:
            r3 = move-exception
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r4 = r2.mLoaderViewModel
            r4.finishCreatingLoader()
            throw r3
    }

    @Override
    public void destroyLoader(int r3) {
            r2 = this;
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r0 = r2.mLoaderViewModel
            boolean r0 = r0.isCreatingLoader()
            if (r0 != 0) goto L4e
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto L46
            boolean r0 = android.support.v4.app.LoaderManagerImpl.DEBUG
            if (r0 == 0) goto L34
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "destroyLoader in "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = " of "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "LoaderManager"
            android.util.Log.v(r1, r0)
        L34:
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r0 = r2.mLoaderViewModel
            android.support.v4.app.LoaderManagerImpl$LoaderInfo r0 = r0.getLoader(r3)
            if (r0 == 0) goto L45
            r1 = 1
            r0.destroy(r1)
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r0 = r2.mLoaderViewModel
            r0.removeLoader(r3)
        L45:
            return
        L46:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r0 = "destroyLoader must be called on the main thread"
            r3.<init>(r0)
            throw r3
        L4e:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r0 = "Called while creating a loader"
            r3.<init>(r0)
            throw r3
    }

    @Override
    @java.lang.Deprecated
    public void dump(java.lang.String r2, java.io.FileDescriptor r3, java.io.PrintWriter r4, java.lang.String[] r5) {
            r1 = this;
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r0 = r1.mLoaderViewModel
            r0.dump(r2, r3, r4, r5)
            return
    }

    @Override
    public <D> android.support.v4.content.Loader<D> getLoader(int r2) {
            r1 = this;
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r0 = r1.mLoaderViewModel
            boolean r0 = r0.isCreatingLoader()
            if (r0 != 0) goto L17
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r0 = r1.mLoaderViewModel
            android.support.v4.app.LoaderManagerImpl$LoaderInfo r2 = r0.getLoader(r2)
            if (r2 == 0) goto L15
            android.support.v4.content.Loader r2 = r2.getLoader()
            goto L16
        L15:
            r2 = 0
        L16:
            return r2
        L17:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "Called while creating a loader"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public boolean hasRunningLoaders() {
            r1 = this;
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r0 = r1.mLoaderViewModel
            boolean r0 = r0.hasRunningLoaders()
            return r0
    }

    @Override
    public <D> android.support.v4.content.Loader<D> initLoader(int r5, android.os.Bundle r6, android.support.v4.app.LoaderManager.LoaderCallbacks<D> r7) {
            r4 = this;
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r0 = r4.mLoaderViewModel
            boolean r0 = r0.isCreatingLoader()
            if (r0 != 0) goto L69
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto L61
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r0 = r4.mLoaderViewModel
            android.support.v4.app.LoaderManagerImpl$LoaderInfo r0 = r0.getLoader(r5)
            boolean r1 = android.support.v4.app.LoaderManagerImpl.DEBUG
            java.lang.String r2 = "LoaderManager"
            if (r1 == 0) goto L3a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "initLoader in "
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = ": args="
            r1.append(r3)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            android.util.Log.v(r2, r1)
        L3a:
            if (r0 != 0) goto L42
            r0 = 0
            android.support.v4.content.Loader r5 = r4.createAndInstallLoader(r5, r6, r7, r0)
            return r5
        L42:
            boolean r5 = android.support.v4.app.LoaderManagerImpl.DEBUG
            if (r5 == 0) goto L5a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "  Re-using existing loader "
            r5.append(r6)
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            android.util.Log.v(r2, r5)
        L5a:
            android.arch.lifecycle.LifecycleOwner r5 = r4.mLifecycleOwner
            android.support.v4.content.Loader r5 = r0.setCallback(r5, r7)
            return r5
        L61:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r6 = "initLoader must be called on the main thread"
            r5.<init>(r6)
            throw r5
        L69:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r6 = "Called while creating a loader"
            r5.<init>(r6)
            throw r5
    }

    @Override
    public void markForRedelivery() {
            r1 = this;
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r0 = r1.mLoaderViewModel
            r0.markForRedelivery()
            return
    }

    @Override
    public <D> android.support.v4.content.Loader<D> restartLoader(int r3, android.os.Bundle r4, android.support.v4.app.LoaderManager.LoaderCallbacks<D> r5) {
            r2 = this;
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r0 = r2.mLoaderViewModel
            boolean r0 = r0.isCreatingLoader()
            if (r0 != 0) goto L4f
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto L47
            boolean r0 = android.support.v4.app.LoaderManagerImpl.DEBUG
            if (r0 == 0) goto L34
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "restartLoader in "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = ": args="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "LoaderManager"
            android.util.Log.v(r1, r0)
        L34:
            android.support.v4.app.LoaderManagerImpl$LoaderViewModel r0 = r2.mLoaderViewModel
            android.support.v4.app.LoaderManagerImpl$LoaderInfo r0 = r0.getLoader(r3)
            r1 = 0
            if (r0 == 0) goto L42
            r1 = 0
            android.support.v4.content.Loader r1 = r0.destroy(r1)
        L42:
            android.support.v4.content.Loader r3 = r2.createAndInstallLoader(r3, r4, r5, r1)
            return r3
        L47:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r4 = "restartLoader must be called on the main thread"
            r3.<init>(r4)
            throw r3
        L4f:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r4 = "Called while creating a loader"
            r3.<init>(r4)
            throw r3
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 128(0x80, float:1.8E-43)
            r0.<init>(r1)
            java.lang.String r1 = "LoaderManager{"
            r0.append(r1)
            int r1 = java.lang.System.identityHashCode(r2)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            java.lang.String r1 = " in "
            r0.append(r1)
            android.arch.lifecycle.LifecycleOwner r1 = r2.mLifecycleOwner
            android.support.v4.util.DebugUtils.buildShortClassTag(r1, r0)
            java.lang.String r1 = "}}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
