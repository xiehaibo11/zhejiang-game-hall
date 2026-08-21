package android.arch.lifecycle;

public class Transformations {



    private Transformations() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <X, Y> android.arch.lifecycle.LiveData<Y> map(android.arch.lifecycle.LiveData<X> r2, android.arch.core.util.Function<X, Y> r3) {
            android.arch.lifecycle.MediatorLiveData r0 = new android.arch.lifecycle.MediatorLiveData
            r0.<init>()
            android.arch.lifecycle.Transformations$1 r1 = new android.arch.lifecycle.Transformations$1
            r1.<init>(r0, r3)
            r0.addSource(r2, r1)
            return r0
    }

    public static <X, Y> android.arch.lifecycle.LiveData<Y> switchMap(android.arch.lifecycle.LiveData<X> r2, android.arch.core.util.Function<X, android.arch.lifecycle.LiveData<Y>> r3) {
            android.arch.lifecycle.MediatorLiveData r0 = new android.arch.lifecycle.MediatorLiveData
            r0.<init>()
            android.arch.lifecycle.Transformations$2 r1 = new android.arch.lifecycle.Transformations$2
            r1.<init>(r3, r0)
            r0.addSource(r2, r1)
            return r0
    }
}
