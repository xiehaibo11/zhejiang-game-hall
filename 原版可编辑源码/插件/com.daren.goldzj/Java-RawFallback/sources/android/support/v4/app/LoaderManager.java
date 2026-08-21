package android.support.v4.app;

public abstract class LoaderManager {

    public interface LoaderCallbacks<D> {
        @android.support.annotation.NonNull
        @android.support.annotation.MainThread
        android.support.v4.content.Loader<D> onCreateLoader(int r1, @android.support.annotation.Nullable android.os.Bundle r2);

        @android.support.annotation.MainThread
        void onLoadFinished(@android.support.annotation.NonNull android.support.v4.content.Loader<D> r1, D r2);

        @android.support.annotation.MainThread
        void onLoaderReset(@android.support.annotation.NonNull android.support.v4.content.Loader<D> r1);
    }

    public LoaderManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void enableDebugLogging(boolean r0) {
            android.support.v4.app.LoaderManagerImpl.DEBUG = r0
            return
    }

    @android.support.annotation.NonNull
    public static <T extends android.arch.lifecycle.LifecycleOwner & android.arch.lifecycle.ViewModelStoreOwner> android.support.v4.app.LoaderManager getInstance(@android.support.annotation.NonNull T r2) {
            android.support.v4.app.LoaderManagerImpl r0 = new android.support.v4.app.LoaderManagerImpl
            r1 = r2
            android.arch.lifecycle.ViewModelStoreOwner r1 = (android.arch.lifecycle.ViewModelStoreOwner) r1
            android.arch.lifecycle.ViewModelStore r1 = r1.getViewModelStore()
            r0.<init>(r2, r1)
            return r0
    }

    @android.support.annotation.MainThread
    public abstract void destroyLoader(int r1);

    @java.lang.Deprecated
    public abstract void dump(java.lang.String r1, java.io.FileDescriptor r2, java.io.PrintWriter r3, java.lang.String[] r4);

    @android.support.annotation.Nullable
    public abstract <D> android.support.v4.content.Loader<D> getLoader(int r1);

    public boolean hasRunningLoaders() {
            r1 = this;
            r0 = 0
            return r0
    }

    @android.support.annotation.NonNull
    @android.support.annotation.MainThread
    public abstract <D> android.support.v4.content.Loader<D> initLoader(int r1, @android.support.annotation.Nullable android.os.Bundle r2, @android.support.annotation.NonNull android.support.v4.app.LoaderManager.LoaderCallbacks<D> r3);

    public abstract void markForRedelivery();

    @android.support.annotation.NonNull
    @android.support.annotation.MainThread
    public abstract <D> android.support.v4.content.Loader<D> restartLoader(int r1, @android.support.annotation.Nullable android.os.Bundle r2, @android.support.annotation.NonNull android.support.v4.app.LoaderManager.LoaderCallbacks<D> r3);
}
