package android.arch.lifecycle;

import android.arch.lifecycle.Lifecycle;
import android.support.annotation.RestrictTo;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class CompositeGeneratedAdaptersObserver implements GenericLifecycleObserver {
    private final GeneratedAdapter[] mGeneratedAdapters;

    CompositeGeneratedAdaptersObserver(GeneratedAdapter[] r1) {
        this.mGeneratedAdapters = r1;
    }

    @Override
    public void onStateChanged(LifecycleOwner r7, Lifecycle.Event r8) {
        MethodCallsLogger r0 = new MethodCallsLogger();
        GeneratedAdapter[] r1 = this.mGeneratedAdapters;
        int r2 = r1.length;
        int r3 = 0;
        int r4 = 0;
    L3:
        if (r4 >= r2) goto L5;
        r1[r4].callMethods(r7, r8, false, r0);
        r4 = r4 + 1;
        goto L3
    L5:
        GeneratedAdapter[] r12 = this.mGeneratedAdapters;
        int r22 = r12.length;
    L6:
        if (r3 >= r22) goto L8;
        r12[r3].callMethods(r7, r8, true, r0);
        r3 = r3 + 1;
        goto L6
    }
}
