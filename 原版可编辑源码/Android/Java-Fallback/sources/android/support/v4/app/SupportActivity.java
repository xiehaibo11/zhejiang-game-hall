package android.support.v4.app;

public class SupportActivity extends android.app.Activity implements android.arch.lifecycle.LifecycleOwner, android.support.v4.view.KeyEventDispatcher.Component {
    private android.support.v4.util.SimpleArrayMap<java.lang.Class<? extends android.support.v4.app.SupportActivity.ExtraData>, android.support.v4.app.SupportActivity.ExtraData> mExtraDataMap;
    private android.arch.lifecycle.LifecycleRegistry mLifecycleRegistry;

    public static class ExtraData {
        public ExtraData() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public SupportActivity() {
            r1 = this;
            r1.<init>()
            android.support.v4.util.SimpleArrayMap r0 = new android.support.v4.util.SimpleArrayMap
            r0.<init>()
            r1.mExtraDataMap = r0
            android.arch.lifecycle.LifecycleRegistry r0 = new android.arch.lifecycle.LifecycleRegistry
            r0.<init>(r1)
            r1.mLifecycleRegistry = r0
            return
    }

    @Override
    public boolean dispatchKeyEvent(android.view.KeyEvent r3) {
            r2 = this;
            android.view.Window r0 = r2.getWindow()
            android.view.View r0 = r0.getDecorView()
            if (r0 == 0) goto L12
            boolean r1 = android.support.v4.view.KeyEventDispatcher.dispatchBeforeHierarchy(r0, r3)
            if (r1 == 0) goto L12
            r3 = 1
            return r3
        L12:
            boolean r3 = android.support.v4.view.KeyEventDispatcher.dispatchKeyEvent(r2, r0, r2, r3)
            return r3
    }

    @Override
    public boolean dispatchKeyShortcutEvent(android.view.KeyEvent r2) {
            r1 = this;
            android.view.Window r0 = r1.getWindow()
            android.view.View r0 = r0.getDecorView()
            if (r0 == 0) goto L12
            boolean r0 = android.support.v4.view.KeyEventDispatcher.dispatchBeforeHierarchy(r0, r2)
            if (r0 == 0) goto L12
            r2 = 1
            return r2
        L12:
            boolean r2 = super.dispatchKeyShortcutEvent(r2)
            return r2
    }

    public <T extends android.support.v4.app.SupportActivity.ExtraData> T getExtraData(java.lang.Class<T> r2) {
            r1 = this;
            android.support.v4.util.SimpleArrayMap<java.lang.Class<? extends android.support.v4.app.SupportActivity$ExtraData>, android.support.v4.app.SupportActivity$ExtraData> r0 = r1.mExtraDataMap
            java.lang.Object r2 = r0.get(r2)
            android.support.v4.app.SupportActivity$ExtraData r2 = (android.support.v4.app.SupportActivity.ExtraData) r2
            return r2
    }

    public android.arch.lifecycle.Lifecycle getLifecycle() {
            r1 = this;
            android.arch.lifecycle.LifecycleRegistry r0 = r1.mLifecycleRegistry
            return r0
    }

    @Override
    protected void onCreate(android.os.Bundle r1) {
            r0 = this;
            super.onCreate(r1)
            android.arch.lifecycle.ReportFragment.injectIfNeededIn(r0)
            return
    }

    @Override
    protected void onSaveInstanceState(android.os.Bundle r3) {
            r2 = this;
            android.arch.lifecycle.LifecycleRegistry r0 = r2.mLifecycleRegistry
            android.arch.lifecycle.Lifecycle$State r1 = android.arch.lifecycle.Lifecycle.State.CREATED
            r0.markState(r1)
            super.onSaveInstanceState(r3)
            return
    }

    public void putExtraData(android.support.v4.app.SupportActivity.ExtraData r3) {
            r2 = this;
            android.support.v4.util.SimpleArrayMap<java.lang.Class<? extends android.support.v4.app.SupportActivity$ExtraData>, android.support.v4.app.SupportActivity$ExtraData> r0 = r2.mExtraDataMap
            java.lang.Class r1 = r3.getClass()
            r0.put(r1, r3)
            return
    }

    @Override
    public boolean superDispatchKeyEvent(android.view.KeyEvent r1) {
            r0 = this;
            boolean r1 = super.dispatchKeyEvent(r1)
            return r1
    }
}
