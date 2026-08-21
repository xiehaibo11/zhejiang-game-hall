package android.support.v7.view;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class StandaloneActionMode extends android.support.v7.view.ActionMode implements android.support.v7.view.menu.MenuBuilder.Callback {
    private android.support.v7.view.ActionMode.Callback mCallback;
    private android.content.Context mContext;
    private android.support.v7.widget.ActionBarContextView mContextView;
    private java.lang.ref.WeakReference<android.view.View> mCustomView;
    private boolean mFinished;
    private boolean mFocusable;
    private android.support.v7.view.menu.MenuBuilder mMenu;

    public StandaloneActionMode(android.content.Context r1, android.support.v7.widget.ActionBarContextView r2, android.support.v7.view.ActionMode.Callback r3, boolean r4) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            r0.mContextView = r2
            r0.mCallback = r3
            android.support.v7.view.menu.MenuBuilder r1 = new android.support.v7.view.menu.MenuBuilder
            android.content.Context r2 = r2.getContext()
            r1.<init>(r2)
            r2 = 1
            android.support.v7.view.menu.MenuBuilder r1 = r1.setDefaultShowAsAction(r2)
            r0.mMenu = r1
            android.support.v7.view.menu.MenuBuilder r1 = r0.mMenu
            r1.setCallback(r0)
            r0.mFocusable = r4
            return
    }

    @Override
    public void finish() {
            r2 = this;
            boolean r0 = r2.mFinished
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r2.mFinished = r0
            android.support.v7.widget.ActionBarContextView r0 = r2.mContextView
            r1 = 32
            r0.sendAccessibilityEvent(r1)
            android.support.v7.view.ActionMode$Callback r0 = r2.mCallback
            r0.onDestroyActionMode(r2)
            return
    }

    @Override
    public android.view.View getCustomView() {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mCustomView
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    @Override
    public android.view.Menu getMenu() {
            r1 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r1.mMenu
            return r0
    }

    @Override
    public android.view.MenuInflater getMenuInflater() {
            r2 = this;
            android.support.v7.view.SupportMenuInflater r0 = new android.support.v7.view.SupportMenuInflater
            android.support.v7.widget.ActionBarContextView r1 = r2.mContextView
            android.content.Context r1 = r1.getContext()
            r0.<init>(r1)
            return r0
    }

    @Override
    public java.lang.CharSequence getSubtitle() {
            r1 = this;
            android.support.v7.widget.ActionBarContextView r0 = r1.mContextView
            java.lang.CharSequence r0 = r0.getSubtitle()
            return r0
    }

    @Override
    public java.lang.CharSequence getTitle() {
            r1 = this;
            android.support.v7.widget.ActionBarContextView r0 = r1.mContextView
            java.lang.CharSequence r0 = r0.getTitle()
            return r0
    }

    @Override
    public void invalidate() {
            r2 = this;
            android.support.v7.view.ActionMode$Callback r0 = r2.mCallback
            android.support.v7.view.menu.MenuBuilder r1 = r2.mMenu
            r0.onPrepareActionMode(r2, r1)
            return
    }

    @Override
    public boolean isTitleOptional() {
            r1 = this;
            android.support.v7.widget.ActionBarContextView r0 = r1.mContextView
            boolean r0 = r0.isTitleOptional()
            return r0
    }

    @Override
    public boolean isUiFocusable() {
            r1 = this;
            boolean r0 = r1.mFocusable
            return r0
    }

    public void onCloseMenu(android.support.v7.view.menu.MenuBuilder r1, boolean r2) {
            r0 = this;
            return
    }

    public void onCloseSubMenu(android.support.v7.view.menu.SubMenuBuilder r1) {
            r0 = this;
            return
    }

    @Override
    public boolean onMenuItemSelected(android.support.v7.view.menu.MenuBuilder r1, android.view.MenuItem r2) {
            r0 = this;
            android.support.v7.view.ActionMode$Callback r1 = r0.mCallback
            boolean r1 = r1.onActionItemClicked(r0, r2)
            return r1
    }

    @Override
    public void onMenuModeChange(android.support.v7.view.menu.MenuBuilder r1) {
            r0 = this;
            r0.invalidate()
            android.support.v7.widget.ActionBarContextView r1 = r0.mContextView
            r1.showOverflowMenu()
            return
    }

    public boolean onSubMenuSelected(android.support.v7.view.menu.SubMenuBuilder r4) {
            r3 = this;
            boolean r0 = r4.hasVisibleItems()
            r1 = 1
            if (r0 != 0) goto L8
            return r1
        L8:
            android.support.v7.view.menu.MenuPopupHelper r0 = new android.support.v7.view.menu.MenuPopupHelper
            android.support.v7.widget.ActionBarContextView r2 = r3.mContextView
            android.content.Context r2 = r2.getContext()
            r0.<init>(r2, r4)
            r0.show()
            return r1
    }

    @Override
    public void setCustomView(android.view.View r2) {
            r1 = this;
            android.support.v7.widget.ActionBarContextView r0 = r1.mContextView
            r0.setCustomView(r2)
            if (r2 == 0) goto Ld
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            goto Le
        Ld:
            r0 = 0
        Le:
            r1.mCustomView = r0
            return
    }

    @Override
    public void setSubtitle(int r2) {
            r1 = this;
            android.content.Context r0 = r1.mContext
            java.lang.String r2 = r0.getString(r2)
            r1.setSubtitle(r2)
            return
    }

    @Override
    public void setSubtitle(java.lang.CharSequence r2) {
            r1 = this;
            android.support.v7.widget.ActionBarContextView r0 = r1.mContextView
            r0.setSubtitle(r2)
            return
    }

    @Override
    public void setTitle(int r2) {
            r1 = this;
            android.content.Context r0 = r1.mContext
            java.lang.String r2 = r0.getString(r2)
            r1.setTitle(r2)
            return
    }

    @Override
    public void setTitle(java.lang.CharSequence r2) {
            r1 = this;
            android.support.v7.widget.ActionBarContextView r0 = r1.mContextView
            r0.setTitle(r2)
            return
    }

    @Override
    public void setTitleOptionalHint(boolean r2) {
            r1 = this;
            super.setTitleOptionalHint(r2)
            android.support.v7.widget.ActionBarContextView r0 = r1.mContextView
            r0.setTitleOptional(r2)
            return
    }
}
