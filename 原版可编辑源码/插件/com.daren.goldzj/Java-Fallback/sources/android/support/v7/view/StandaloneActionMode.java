package android.support.v7.view;

import android.content.Context;
import android.support.annotation.RestrictTo;
import android.support.v7.view.ActionMode;
import android.support.v7.view.menu.MenuBuilder;
import android.support.v7.view.menu.MenuPopupHelper;
import android.support.v7.view.menu.SubMenuBuilder;
import android.support.v7.widget.ActionBarContextView;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import java.lang.ref.WeakReference;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class StandaloneActionMode extends ActionMode implements MenuBuilder.Callback {
    private ActionMode.Callback mCallback;
    private Context mContext;
    private ActionBarContextView mContextView;
    private WeakReference<View> mCustomView;
    private boolean mFinished;
    private boolean mFocusable;
    private MenuBuilder mMenu;

    public void onCloseMenu(MenuBuilder r1, boolean r2) {
    }

    public void onCloseSubMenu(SubMenuBuilder r1) {
    }

    public StandaloneActionMode(Context r1, ActionBarContextView r2, ActionMode.Callback r3, boolean r4) {
        this.mContext = r1;
        this.mContextView = r2;
        this.mCallback = r3;
        this.mMenu = new MenuBuilder(r2.getContext()).setDefaultShowAsAction(1);
        this.mMenu.setCallback(this);
        this.mFocusable = r4;
    }

    @Override
    public void setTitle(CharSequence r2) {
        this.mContextView.setTitle(r2);
    }

    @Override
    public void setSubtitle(CharSequence r2) {
        this.mContextView.setSubtitle(r2);
    }

    @Override
    public void setTitle(int r2) {
        setTitle(this.mContext.getString(r2));
    }

    @Override
    public void setSubtitle(int r2) {
        setSubtitle(this.mContext.getString(r2));
    }

    @Override
    public void setTitleOptionalHint(boolean r2) {
        super.setTitleOptionalHint(r2);
        this.mContextView.setTitleOptional(r2);
    }

    @Override
    public boolean isTitleOptional() {
        return this.mContextView.isTitleOptional();
    }

    @Override
    public void setCustomView(View r2) {
        this.mContextView.setCustomView(r2);
        if (r2 == null) goto L5;
        WeakReference<View> r0 = new WeakReference(r2);
    L6:
        this.mCustomView = r0;
        return;
    L5:
        r0 = null;
        goto L6
    }

    @Override
    public void invalidate() {
        this.mCallback.onPrepareActionMode(this, this.mMenu);
    }

    @Override
    public void finish() {
        if (this.mFinished == false) goto L5;
        return;
    L5:
        this.mFinished = true;
        this.mContextView.sendAccessibilityEvent(32);
        this.mCallback.onDestroyActionMode(this);
    }

    @Override
    public Menu getMenu() {
        return this.mMenu;
    }

    @Override
    public CharSequence getTitle() {
        return this.mContextView.getTitle();
    }

    @Override
    public CharSequence getSubtitle() {
        return this.mContextView.getSubtitle();
    }

    @Override
    public View getCustomView() {
        WeakReference<View> r0 = this.mCustomView;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.get();
    }

    @Override
    public MenuInflater getMenuInflater() {
        return new SupportMenuInflater(this.mContextView.getContext());
    }

    @Override
    public boolean onMenuItemSelected(MenuBuilder r1, MenuItem r2) {
        return this.mCallback.onActionItemClicked(this, r2);
    }

    public boolean onSubMenuSelected(SubMenuBuilder r4) {
        if (r4.hasVisibleItems() == true) goto L5;
        return true;
    L5:
        new MenuPopupHelper(this.mContextView.getContext(), r4).show();
        return true;
    }

    @Override
    public void onMenuModeChange(MenuBuilder r1) {
        invalidate();
        this.mContextView.showOverflowMenu();
    }

    @Override
    public boolean isUiFocusable() {
        return this.mFocusable;
    }
}
