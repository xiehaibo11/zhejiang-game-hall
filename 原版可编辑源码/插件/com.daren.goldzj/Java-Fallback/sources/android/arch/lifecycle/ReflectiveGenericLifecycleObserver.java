package android.arch.lifecycle;

import android.arch.lifecycle.ClassesInfoCache;
import android.arch.lifecycle.Lifecycle;

class ReflectiveGenericLifecycleObserver implements GenericLifecycleObserver {
    private final ClassesInfoCache.CallbackInfo mInfo;
    private final Object mWrapped;

    ReflectiveGenericLifecycleObserver(Object r2) {
        this.mWrapped = r2;
        this.mInfo = ClassesInfoCache.sInstance.getInfo(this.mWrapped.getClass());
    }

    @Override
    public void onStateChanged(LifecycleOwner r3, Lifecycle.Event r4) {
        this.mInfo.invokeCallbacks(r3, r4, this.mWrapped);
    }
}
