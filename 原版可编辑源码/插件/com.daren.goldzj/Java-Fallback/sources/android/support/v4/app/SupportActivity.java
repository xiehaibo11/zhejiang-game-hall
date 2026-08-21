package android.support.v4.app;

import android.app.Activity;
import android.arch.lifecycle.Lifecycle;
import android.arch.lifecycle.LifecycleOwner;
import android.arch.lifecycle.LifecycleRegistry;
import android.arch.lifecycle.ReportFragment;
import android.os.Bundle;
import android.support.annotation.CallSuper;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.util.SimpleArrayMap;
import android.support.v4.view.KeyEventDispatcher;
import android.view.KeyEvent;
import android.view.View;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class SupportActivity extends Activity implements LifecycleOwner, KeyEventDispatcher.Component {
    private SimpleArrayMap<Class<? extends ExtraData>, ExtraData> mExtraDataMap;
    private LifecycleRegistry mLifecycleRegistry;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static class ExtraData {
        public ExtraData() {
        }
    }

    public SupportActivity() {
        this.mExtraDataMap = new SimpleArrayMap();
        this.mLifecycleRegistry = new LifecycleRegistry(this);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void putExtraData(ExtraData r3) {
        this.mExtraDataMap.put((Class<? extends ExtraData>) r3.getClass(), r3);
    }

    @Override
    protected void onCreate(@Nullable Bundle r1) {
        super.onCreate(r1);
        ReportFragment.injectIfNeededIn(this);
    }

    @Override
    @CallSuper
    protected void onSaveInstanceState(Bundle r3) {
        this.mLifecycleRegistry.markState(Lifecycle.State.CREATED);
        super.onSaveInstanceState(r3);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public <T extends ExtraData> T getExtraData(Class<T> r2) {
        return (T) this.mExtraDataMap.get(r2);
    }

    public Lifecycle getLifecycle() {
        return this.mLifecycleRegistry;
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public boolean superDispatchKeyEvent(KeyEvent r1) {
        return super.dispatchKeyEvent(r1);
    }

    @Override
    public boolean dispatchKeyShortcutEvent(KeyEvent r2) {
        View r0 = getWindow().getDecorView();
        if (r0 == null) goto L9;
        if (KeyEventDispatcher.dispatchBeforeHierarchy(r0, r2) == false) goto L9;
        return true;
    L9:
        return super.dispatchKeyShortcutEvent(r2);
    }

    @Override
    public boolean dispatchKeyEvent(KeyEvent r3) {
        View r0 = getWindow().getDecorView();
        if (r0 == null) goto L9;
        if (KeyEventDispatcher.dispatchBeforeHierarchy(r0, r3) == false) goto L9;
        return true;
    L9:
        return KeyEventDispatcher.dispatchKeyEvent(this, r0, this, r3);
    }
}
