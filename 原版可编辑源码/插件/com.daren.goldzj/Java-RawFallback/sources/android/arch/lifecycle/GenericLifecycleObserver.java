package android.arch.lifecycle;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY})
public interface GenericLifecycleObserver extends android.arch.lifecycle.LifecycleObserver {
    void onStateChanged(android.arch.lifecycle.LifecycleOwner r1, android.arch.lifecycle.Lifecycle.Event r2);
}
