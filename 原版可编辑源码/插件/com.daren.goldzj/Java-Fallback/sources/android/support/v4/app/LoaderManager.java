package android.support.v4.app;

import android.arch.lifecycle.LifecycleOwner;
import android.arch.lifecycle.ViewModelStoreOwner;
import android.os.Bundle;
import android.support.annotation.MainThread;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.content.Loader;
import java.io.FileDescriptor;
import java.io.PrintWriter;

public abstract class LoaderManager {

    public interface LoaderCallbacks<D> {
        @NonNull
        @MainThread
        Loader<D> onCreateLoader(int r1, @Nullable Bundle r2);

        @MainThread
        void onLoadFinished(@NonNull Loader<D> r1, D r2);

        @MainThread
        void onLoaderReset(@NonNull Loader<D> r1);
    }

    @MainThread
    public abstract void destroyLoader(int r1);

    @Deprecated
    public abstract void dump(String r1, FileDescriptor r2, PrintWriter r3, String[] r4);

    @Nullable
    public abstract <D> Loader<D> getLoader(int r1);

    public boolean hasRunningLoaders() {
        return false;
    }

    @NonNull
    @MainThread
    public abstract <D> Loader<D> initLoader(int r1, @Nullable Bundle r2, @NonNull LoaderCallbacks<D> r3);

    public abstract void markForRedelivery();

    @NonNull
    @MainThread
    public abstract <D> Loader<D> restartLoader(int r1, @Nullable Bundle r2, @NonNull LoaderCallbacks<D> r3);

    public LoaderManager() {
    }

    @NonNull
    public static <T extends LifecycleOwner & ViewModelStoreOwner> LoaderManager getInstance(@NonNull T r2) {
        return new LoaderManagerImpl(r2, r2.getViewModelStore());
    }

    public static void enableDebugLogging(boolean r0) {
        LoaderManagerImpl.DEBUG = r0;
    }
}
