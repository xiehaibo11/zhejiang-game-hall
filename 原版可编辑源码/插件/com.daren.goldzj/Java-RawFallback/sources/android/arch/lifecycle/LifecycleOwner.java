package android.arch.lifecycle;

public interface LifecycleOwner {
    @android.support.annotation.NonNull
    android.arch.lifecycle.Lifecycle getLifecycle();
}
