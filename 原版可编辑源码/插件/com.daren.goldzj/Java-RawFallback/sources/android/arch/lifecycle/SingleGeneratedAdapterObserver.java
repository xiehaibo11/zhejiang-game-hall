package android.arch.lifecycle;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class SingleGeneratedAdapterObserver implements android.arch.lifecycle.GenericLifecycleObserver {
    private final android.arch.lifecycle.GeneratedAdapter mGeneratedAdapter;

    SingleGeneratedAdapterObserver(android.arch.lifecycle.GeneratedAdapter r1) {
            r0 = this;
            r0.<init>()
            r0.mGeneratedAdapter = r1
            return
    }

    @Override
    public void onStateChanged(android.arch.lifecycle.LifecycleOwner r4, android.arch.lifecycle.Lifecycle.Event r5) {
            r3 = this;
            android.arch.lifecycle.GeneratedAdapter r0 = r3.mGeneratedAdapter
            r1 = 0
            r2 = 0
            r0.callMethods(r4, r5, r2, r1)
            android.arch.lifecycle.GeneratedAdapter r0 = r3.mGeneratedAdapter
            r2 = 1
            r0.callMethods(r4, r5, r2, r1)
            return
    }
}
