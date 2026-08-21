package android.arch.lifecycle;

public interface GenericLifecycleObserver extends android.arch.lifecycle.LifecycleObserver {
    void onStateChanged(android.arch.lifecycle.LifecycleOwner r1, android.arch.lifecycle.Lifecycle.Event r2);
}
