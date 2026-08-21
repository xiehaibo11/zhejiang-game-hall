package android.support.v7.view;

import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.view.ActionMode;
import android.view.KeyEvent;
import android.view.KeyboardShortcutGroup;
import android.view.Menu;
import android.view.MenuItem;
import android.view.MotionEvent;
import android.view.SearchEvent;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.view.accessibility.AccessibilityEvent;
import java.util.List;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class WindowCallbackWrapper implements Window.Callback {
    final Window.Callback mWrapped;

    public WindowCallbackWrapper(Window.Callback r2) {
        if (r2 == null) goto L7;
        this.mWrapped = r2;
        return;
    L7:
        throw new IllegalArgumentException("Window callback may not be null");
    }

    @Override
    public boolean dispatchKeyEvent(KeyEvent r2) {
        return this.mWrapped.dispatchKeyEvent(r2);
    }

    @Override
    public boolean dispatchKeyShortcutEvent(KeyEvent r2) {
        return this.mWrapped.dispatchKeyShortcutEvent(r2);
    }

    @Override
    public boolean dispatchTouchEvent(MotionEvent r2) {
        return this.mWrapped.dispatchTouchEvent(r2);
    }

    @Override
    public boolean dispatchTrackballEvent(MotionEvent r2) {
        return this.mWrapped.dispatchTrackballEvent(r2);
    }

    @Override
    public boolean dispatchGenericMotionEvent(MotionEvent r2) {
        return this.mWrapped.dispatchGenericMotionEvent(r2);
    }

    @Override
    public boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent r2) {
        return this.mWrapped.dispatchPopulateAccessibilityEvent(r2);
    }

    @Override
    public View onCreatePanelView(int r2) {
        return this.mWrapped.onCreatePanelView(r2);
    }

    @Override
    public boolean onCreatePanelMenu(int r2, Menu r3) {
        return this.mWrapped.onCreatePanelMenu(r2, r3);
    }

    @Override
    public boolean onPreparePanel(int r2, View r3, Menu r4) {
        return this.mWrapped.onPreparePanel(r2, r3, r4);
    }

    @Override
    public boolean onMenuOpened(int r2, Menu r3) {
        return this.mWrapped.onMenuOpened(r2, r3);
    }

    @Override
    public boolean onMenuItemSelected(int r2, MenuItem r3) {
        return this.mWrapped.onMenuItemSelected(r2, r3);
    }

    @Override
    public void onWindowAttributesChanged(WindowManager.LayoutParams r2) {
        this.mWrapped.onWindowAttributesChanged(r2);
    }

    @Override
    public void onContentChanged() {
        this.mWrapped.onContentChanged();
    }

    @Override
    public void onWindowFocusChanged(boolean r2) {
        this.mWrapped.onWindowFocusChanged(r2);
    }

    @Override
    public void onAttachedToWindow() {
        this.mWrapped.onAttachedToWindow();
    }

    @Override
    public void onDetachedFromWindow() {
        this.mWrapped.onDetachedFromWindow();
    }

    @Override
    public void onPanelClosed(int r2, Menu r3) {
        this.mWrapped.onPanelClosed(r2, r3);
    }

    @Override
    @RequiresApi(23)
    public boolean onSearchRequested(SearchEvent r2) {
        return this.mWrapped.onSearchRequested(r2);
    }

    @Override
    public boolean onSearchRequested() {
        return this.mWrapped.onSearchRequested();
    }

    @Override
    public android.view.ActionMode onWindowStartingActionMode(ActionMode.Callback r2) {
        return this.mWrapped.onWindowStartingActionMode(r2);
    }

    @Override
    @RequiresApi(23)
    public android.view.ActionMode onWindowStartingActionMode(ActionMode.Callback r2, int r3) {
        return this.mWrapped.onWindowStartingActionMode(r2, r3);
    }

    @Override
    public void onActionModeStarted(android.view.ActionMode r2) {
        this.mWrapped.onActionModeStarted(r2);
    }

    @Override
    public void onActionModeFinished(android.view.ActionMode r2) {
        this.mWrapped.onActionModeFinished(r2);
    }

    @Override
    @RequiresApi(24)
    public void onProvideKeyboardShortcuts(List<KeyboardShortcutGroup> r2, Menu r3, int r4) {
        this.mWrapped.onProvideKeyboardShortcuts(r2, r3, r4);
    }

    @Override
    @RequiresApi(26)
    public void onPointerCaptureChanged(boolean r2) {
        this.mWrapped.onPointerCaptureChanged(r2);
    }
}
