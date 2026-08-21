package android.support.v4.app;

import android.app.Activity;
import android.arch.lifecycle.Lifecycle;
import android.arch.lifecycle.LifecycleOwner;
import android.arch.lifecycle.LifecycleRegistry;
import android.arch.lifecycle.ReportFragment;
import android.os.Bundle;
import android.support.v4.util.SimpleArrayMap;
import android.support.v4.view.KeyEventDispatcher;
import android.view.KeyEvent;
import android.view.View;

public class SupportActivity extends Activity implements LifecycleOwner, KeyEventDispatcher.Component {
    private SimpleArrayMap<Class<? extends ExtraData>, ExtraData> mExtraDataMap = new SimpleArrayMap<>();
    private LifecycleRegistry mLifecycleRegistry = new LifecycleRegistry(this);

    public static class ExtraData {
    }

    public void putExtraData(ExtraData extraData) {
        this.mExtraDataMap.put((Class<? extends ExtraData>) extraData.getClass(), extraData);
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        ReportFragment.injectIfNeededIn(this);
    }

    @Override
    protected void onSaveInstanceState(Bundle bundle) {
        this.mLifecycleRegistry.markState(Lifecycle.State.CREATED);
        super.onSaveInstanceState(bundle);
    }

    public <T extends ExtraData> T getExtraData(Class<T> cls) {
        return (T) this.mExtraDataMap.get(cls);
    }

    public Lifecycle getLifecycle() {
        return this.mLifecycleRegistry;
    }

    @Override
    public boolean superDispatchKeyEvent(KeyEvent keyEvent) {
        return super.dispatchKeyEvent(keyEvent);
    }

    @Override
    public boolean dispatchKeyShortcutEvent(KeyEvent keyEvent) {
        View decorView = getWindow().getDecorView();
        if (decorView == null || !KeyEventDispatcher.dispatchBeforeHierarchy(decorView, keyEvent)) {
            return super.dispatchKeyShortcutEvent(keyEvent);
        }
        return true;
    }

    @Override
    public boolean dispatchKeyEvent(KeyEvent keyEvent) {
        View decorView = getWindow().getDecorView();
        if (decorView == null || !KeyEventDispatcher.dispatchBeforeHierarchy(decorView, keyEvent)) {
            return KeyEventDispatcher.dispatchKeyEvent(this, decorView, this, keyEvent);
        }
        return true;
    }
}
