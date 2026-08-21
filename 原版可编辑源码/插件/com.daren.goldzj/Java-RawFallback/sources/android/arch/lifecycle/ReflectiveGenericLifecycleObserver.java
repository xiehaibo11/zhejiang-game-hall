package android.arch.lifecycle;

class ReflectiveGenericLifecycleObserver implements android.arch.lifecycle.GenericLifecycleObserver {
    private final android.arch.lifecycle.ClassesInfoCache.CallbackInfo mInfo;
    private final java.lang.Object mWrapped;

    ReflectiveGenericLifecycleObserver(java.lang.Object r2) {
            r1 = this;
            r1.<init>()
            r1.mWrapped = r2
            android.arch.lifecycle.ClassesInfoCache r2 = android.arch.lifecycle.ClassesInfoCache.sInstance
            java.lang.Object r0 = r1.mWrapped
            java.lang.Class r0 = r0.getClass()
            android.arch.lifecycle.ClassesInfoCache$CallbackInfo r2 = r2.getInfo(r0)
            r1.mInfo = r2
            return
    }

    @Override
    public void onStateChanged(android.arch.lifecycle.LifecycleOwner r3, android.arch.lifecycle.Lifecycle.Event r4) {
            r2 = this;
            android.arch.lifecycle.ClassesInfoCache$CallbackInfo r0 = r2.mInfo
            java.lang.Object r1 = r2.mWrapped
            r0.invokeCallbacks(r3, r4, r1)
            return
    }
}
