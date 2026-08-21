package android.support.v7.view;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class WindowCallbackWrapper implements android.view.Window.Callback {
    final android.view.Window.Callback mWrapped;

    public WindowCallbackWrapper(android.view.Window.Callback r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L8
            r1.mWrapped = r2
            return
        L8:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Window callback may not be null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public boolean dispatchGenericMotionEvent(android.view.MotionEvent r2) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            boolean r2 = r0.dispatchGenericMotionEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchKeyEvent(android.view.KeyEvent r2) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            boolean r2 = r0.dispatchKeyEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchKeyShortcutEvent(android.view.KeyEvent r2) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            boolean r2 = r0.dispatchKeyShortcutEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchPopulateAccessibilityEvent(android.view.accessibility.AccessibilityEvent r2) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            boolean r2 = r0.dispatchPopulateAccessibilityEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            boolean r2 = r0.dispatchTouchEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchTrackballEvent(android.view.MotionEvent r2) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            boolean r2 = r0.dispatchTrackballEvent(r2)
            return r2
    }

    @Override
    public void onActionModeFinished(android.view.ActionMode r2) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            r0.onActionModeFinished(r2)
            return
    }

    @Override
    public void onActionModeStarted(android.view.ActionMode r2) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            r0.onActionModeStarted(r2)
            return
    }

    @Override
    public void onAttachedToWindow() {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            r0.onAttachedToWindow()
            return
    }

    @Override
    public void onContentChanged() {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            r0.onContentChanged()
            return
    }

    @Override
    public boolean onCreatePanelMenu(int r2, android.view.Menu r3) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            boolean r2 = r0.onCreatePanelMenu(r2, r3)
            return r2
    }

    @Override
    public android.view.View onCreatePanelView(int r2) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            android.view.View r2 = r0.onCreatePanelView(r2)
            return r2
    }

    @Override
    public void onDetachedFromWindow() {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            r0.onDetachedFromWindow()
            return
    }

    @Override
    public boolean onMenuItemSelected(int r2, android.view.MenuItem r3) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            boolean r2 = r0.onMenuItemSelected(r2, r3)
            return r2
    }

    @Override
    public boolean onMenuOpened(int r2, android.view.Menu r3) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            boolean r2 = r0.onMenuOpened(r2, r3)
            return r2
    }

    @Override
    public void onPanelClosed(int r2, android.view.Menu r3) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            r0.onPanelClosed(r2, r3)
            return
    }

    @Override
    @android.support.annotation.RequiresApi(26)
    public void onPointerCaptureChanged(boolean r2) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            r0.onPointerCaptureChanged(r2)
            return
    }

    @Override
    public boolean onPreparePanel(int r2, android.view.View r3, android.view.Menu r4) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            boolean r2 = r0.onPreparePanel(r2, r3, r4)
            return r2
    }

    @Override
    @android.support.annotation.RequiresApi(24)
    public void onProvideKeyboardShortcuts(java.util.List<android.view.KeyboardShortcutGroup> r2, android.view.Menu r3, int r4) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            r0.onProvideKeyboardShortcuts(r2, r3, r4)
            return
    }

    @Override
    public boolean onSearchRequested() {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            boolean r0 = r0.onSearchRequested()
            return r0
    }

    @Override
    @android.support.annotation.RequiresApi(23)
    public boolean onSearchRequested(android.view.SearchEvent r2) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            boolean r2 = r0.onSearchRequested(r2)
            return r2
    }

    @Override
    public void onWindowAttributesChanged(android.view.WindowManager.LayoutParams r2) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            r0.onWindowAttributesChanged(r2)
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r2) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            r0.onWindowFocusChanged(r2)
            return
    }

    @Override
    public android.view.ActionMode onWindowStartingActionMode(android.view.ActionMode.Callback r2) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            android.view.ActionMode r2 = r0.onWindowStartingActionMode(r2)
            return r2
    }

    @Override
    @android.support.annotation.RequiresApi(23)
    public android.view.ActionMode onWindowStartingActionMode(android.view.ActionMode.Callback r2, int r3) {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWrapped
            android.view.ActionMode r2 = r0.onWindowStartingActionMode(r2, r3)
            return r2
    }
}
