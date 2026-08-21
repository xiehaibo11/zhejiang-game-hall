package android.arch.lifecycle;

@java.lang.annotation.Target({java.lang.annotation.ElementType.METHOD})
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.RUNTIME)
public @interface OnLifecycleEvent {
    android.arch.lifecycle.Lifecycle.Event value();
}
