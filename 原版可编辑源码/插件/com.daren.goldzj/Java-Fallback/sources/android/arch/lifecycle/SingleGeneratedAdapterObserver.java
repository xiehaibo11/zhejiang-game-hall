package android.arch.lifecycle;

import android.arch.lifecycle.Lifecycle;
import android.support.annotation.RestrictTo;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class SingleGeneratedAdapterObserver implements GenericLifecycleObserver {
    private final GeneratedAdapter mGeneratedAdapter;

    SingleGeneratedAdapterObserver(GeneratedAdapter r1) {
        this.mGeneratedAdapter = r1;
    }

    @Override
    public void onStateChanged(LifecycleOwner r4, Lifecycle.Event r5) {
        this.mGeneratedAdapter.callMethods(r4, r5, false, null);
        this.mGeneratedAdapter.callMethods(r4, r5, true, null);
    }
}
