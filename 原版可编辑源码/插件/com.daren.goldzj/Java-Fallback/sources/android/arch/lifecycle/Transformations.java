package android.arch.lifecycle;

import android.arch.core.util.Function;
import android.support.annotation.MainThread;
import android.support.annotation.NonNull;

public class Transformations {
    private Transformations() {
    }

    @MainThread
    public static <X, Y> LiveData<Y> map(@NonNull LiveData<X> r2, @NonNull final Function<X, Y> r3) {
        final MediatorLiveData r0 = new MediatorLiveData();
        r0.addSource(r2, new 1(r0, r3));
        return r0;
    }

    @MainThread
    public static <X, Y> LiveData<Y> switchMap(@NonNull LiveData<X> r2, @NonNull final Function<X, LiveData<Y>> r3) {
        final MediatorLiveData r0 = new MediatorLiveData();
        r0.addSource(r2, new 2(r3, r0));
        return r0;
    }
}
