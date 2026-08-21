package android.arch.lifecycle;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class CompositeGeneratedAdaptersObserver implements android.arch.lifecycle.GenericLifecycleObserver {
    private final android.arch.lifecycle.GeneratedAdapter[] mGeneratedAdapters;

    CompositeGeneratedAdaptersObserver(android.arch.lifecycle.GeneratedAdapter[] r1) {
            r0 = this;
            r0.<init>()
            r0.mGeneratedAdapters = r1
            return
    }

    @Override
    public void onStateChanged(android.arch.lifecycle.LifecycleOwner r7, android.arch.lifecycle.Lifecycle.Event r8) {
            r6 = this;
            android.arch.lifecycle.MethodCallsLogger r0 = new android.arch.lifecycle.MethodCallsLogger
            r0.<init>()
            android.arch.lifecycle.GeneratedAdapter[] r1 = r6.mGeneratedAdapters
            int r2 = r1.length
            r3 = 0
            r4 = 0
        La:
            if (r4 >= r2) goto L14
            r5 = r1[r4]
            r5.callMethods(r7, r8, r3, r0)
            int r4 = r4 + 1
            goto La
        L14:
            android.arch.lifecycle.GeneratedAdapter[] r1 = r6.mGeneratedAdapters
            int r2 = r1.length
        L17:
            if (r3 >= r2) goto L22
            r4 = r1[r3]
            r5 = 1
            r4.callMethods(r7, r8, r5, r0)
            int r3 = r3 + 1
            goto L17
        L22:
            return
    }
}
