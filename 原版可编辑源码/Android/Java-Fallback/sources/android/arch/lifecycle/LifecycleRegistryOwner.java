package android.arch.lifecycle;

@java.lang.Deprecated
public interface LifecycleRegistryOwner extends android.arch.lifecycle.LifecycleOwner {
    @Override
    android.arch.lifecycle.LifecycleRegistry getLifecycle();
}
