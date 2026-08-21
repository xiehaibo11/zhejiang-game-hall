package android.arch.lifecycle;

interface FullLifecycleObserver extends android.arch.lifecycle.LifecycleObserver {
    void onCreate(android.arch.lifecycle.LifecycleOwner r1);

    void onDestroy(android.arch.lifecycle.LifecycleOwner r1);

    void onPause(android.arch.lifecycle.LifecycleOwner r1);

    void onResume(android.arch.lifecycle.LifecycleOwner r1);

    void onStart(android.arch.lifecycle.LifecycleOwner r1);

    void onStop(android.arch.lifecycle.LifecycleOwner r1);
}
