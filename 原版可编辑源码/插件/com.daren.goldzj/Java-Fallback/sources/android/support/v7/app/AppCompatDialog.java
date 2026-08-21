package android.support.v7.app;

import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Bundle;
import android.support.annotation.IdRes;
import android.support.annotation.LayoutRes;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.view.KeyEventDispatcher;
import android.support.v7.appcompat.R;
import android.support.v7.view.ActionMode;
import android.util.TypedValue;
import android.view.KeyEvent;
import android.view.View;
import android.view.ViewGroup;

public class AppCompatDialog extends Dialog implements AppCompatCallback {
    private AppCompatDelegate mDelegate;
    private final KeyEventDispatcher.Component mKeyDispatcher;

    @Override
    public void onSupportActionModeFinished(ActionMode r1) {
    }

    @Override
    public void onSupportActionModeStarted(ActionMode r1) {
    }

    @Override
    @Nullable
    public ActionMode onWindowStartingSupportActionMode(ActionMode.Callback r1) {
        return null;
    }

    public AppCompatDialog(Context r2) {
        this(r2, 0);
    }

    public AppCompatDialog(Context r1, int r2) {
        super(r1, getThemeResId(r1, r2));
        this.mKeyDispatcher = new 1(this);
        getDelegate().onCreate(null);
        getDelegate().applyDayNight();
    }

    protected AppCompatDialog(Context r1, boolean r2, DialogInterface.OnCancelListener r3) {
        super(r1, r2, r3);
        this.mKeyDispatcher = new 1(this);
    }

    @Override
    protected void onCreate(Bundle r2) {
        getDelegate().installViewFactory();
        super.onCreate(r2);
        getDelegate().onCreate(r2);
    }

    public ActionBar getSupportActionBar() {
        return getDelegate().getSupportActionBar();
    }

    @Override
    public void setContentView(@LayoutRes int r2) {
        getDelegate().setContentView(r2);
    }

    @Override
    public void setContentView(View r2) {
        getDelegate().setContentView(r2);
    }

    @Override
    public void setContentView(View r2, ViewGroup.LayoutParams r3) {
        getDelegate().setContentView(r2, r3);
    }

    @Override
    @Nullable
    public <T extends View> T findViewById(@IdRes int r2) {
        return (T) getDelegate().findViewById(r2);
    }

    @Override
    public void setTitle(CharSequence r2) {
        super.setTitle(r2);
        getDelegate().setTitle(r2);
    }

    @Override
    public void setTitle(int r3) {
        super.setTitle(r3);
        getDelegate().setTitle(getContext().getString(r3));
    }

    @Override
    public void addContentView(View r2, ViewGroup.LayoutParams r3) {
        getDelegate().addContentView(r2, r3);
    }

    @Override
    protected void onStop() {
        super.onStop();
        getDelegate().onStop();
    }

    public boolean supportRequestWindowFeature(int r2) {
        return getDelegate().requestWindowFeature(r2);
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void invalidateOptionsMenu() {
        getDelegate().invalidateOptionsMenu();
    }

    public AppCompatDelegate getDelegate() {
        if (this.mDelegate != null) goto L6;
        this.mDelegate = AppCompatDelegate.create(this, this);
    L6:
        return this.mDelegate;
    }

    private static int getThemeResId(Context r2, int r3) {
        if (r3 != 0) goto L5;
        TypedValue r32 = new TypedValue();
        r2.getTheme().resolveAttribute(R.attr.dialogTheme, r32, true);
        return r32.resourceId;
    L5:
        return r3;
    }

    boolean superDispatchKeyEvent(KeyEvent r1) {
        return super.dispatchKeyEvent(r1);
    }

    @Override
    public boolean dispatchKeyEvent(KeyEvent r3) {
        View r0 = getWindow().getDecorView();
        return KeyEventDispatcher.dispatchKeyEvent(this.mKeyDispatcher, r0, this, r3);
    }
}
