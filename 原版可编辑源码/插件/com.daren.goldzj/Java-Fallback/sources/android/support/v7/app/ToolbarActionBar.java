package android.support.v7.app;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.res.Configuration;
import android.graphics.drawable.Drawable;
import android.support.annotation.Nullable;
import android.support.v4.view.ViewCompat;
import android.support.v7.app.ActionBar;
import android.support.v7.view.WindowCallbackWrapper;
import android.support.v7.view.menu.MenuBuilder;
import android.support.v7.view.menu.MenuPresenter;
import android.support.v7.widget.DecorToolbar;
import android.support.v7.widget.Toolbar;
import android.support.v7.widget.ToolbarWidgetWrapper;
import android.view.KeyCharacterMap;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.SpinnerAdapter;
import java.util.ArrayList;

class ToolbarActionBar extends ActionBar {
    DecorToolbar mDecorToolbar;
    private boolean mLastMenuVisibility;
    private boolean mMenuCallbackSet;
    private final Toolbar.OnMenuItemClickListener mMenuClicker;
    private final Runnable mMenuInvalidator;
    private ArrayList<ActionBar.OnMenuVisibilityListener> mMenuVisibilityListeners;
    boolean mToolbarMenuPrepared;
    Window.Callback mWindowCallback;

    private final class ActionMenuPresenterCallback implements MenuPresenter.Callback {
        private boolean mClosingActionMenu;
        final ToolbarActionBar this$0;

        ActionMenuPresenterCallback(ToolbarActionBar r1) {
            this.this$0 = r1;
        }

        @Override
        public boolean onOpenSubMenu(MenuBuilder r3) {
            if (this.this$0.mWindowCallback == null) goto L6;
            this.this$0.mWindowCallback.onMenuOpened(108, r3);
            return true;
        L6:
            return false;
        }

        @Override
        public void onCloseMenu(MenuBuilder r2, boolean r3) {
            if (this.mClosingActionMenu == false) goto L5;
            return;
        L5:
            this.mClosingActionMenu = true;
            this.this$0.mDecorToolbar.dismissPopupMenus();
            if (this.this$0.mWindowCallback == null) goto L8;
            this.this$0.mWindowCallback.onPanelClosed(108, r2);
        L8:
            this.mClosingActionMenu = false;
        }
    }

    private final class MenuBuilderCallback implements MenuBuilder.Callback {
        final ToolbarActionBar this$0;

        @Override
        public boolean onMenuItemSelected(MenuBuilder r1, MenuItem r2) {
            return false;
        }

        MenuBuilderCallback(ToolbarActionBar r1) {
            this.this$0 = r1;
        }

        @Override
        public void onMenuModeChange(MenuBuilder r5) {
            if (this.this$0.mWindowCallback != null) goto L5;
            return;
        L5:
            if (this.this$0.mDecorToolbar.isOverflowMenuShowing() == false) goto L8;
            this.this$0.mWindowCallback.onPanelClosed(108, r5);
            return;
        L8:
            if (this.this$0.mWindowCallback.onPreparePanel(0, null, r5) == false) goto L13;
            this.this$0.mWindowCallback.onMenuOpened(108, r5);
            return;
        }
    }

    private class ToolbarCallbackWrapper extends WindowCallbackWrapper {
        final ToolbarActionBar this$0;

        public ToolbarCallbackWrapper(ToolbarActionBar r1, Window.Callback r2) {
            this.this$0 = r1;
            super(r2);
        }

        @Override
        public boolean onPreparePanel(int r1, View r2, Menu r3) {
            boolean r12 = super.onPreparePanel(r1, r2, r3);
            if (r12 == true) goto L5;
        L7:
            return r12;
        L5:
            if (this.this$0.mToolbarMenuPrepared == true) goto L7;
            this.this$0.mDecorToolbar.setMenuPrepared();
            this.this$0.mToolbarMenuPrepared = true;
            goto L7
        }

        @Override
        public View onCreatePanelView(int r2) {
            if (r2 != 0) goto L6;
            return new View(this.this$0.mDecorToolbar.getContext());
        L6:
            return super.onCreatePanelView(r2);
        }
    }

    @Override
    public int getNavigationItemCount() {
        return 0;
    }

    @Override
    public int getNavigationMode() {
        return 0;
    }

    @Override
    public int getSelectedNavigationIndex() {
        return -1;
    }

    @Override
    public int getTabCount() {
        return 0;
    }

    @Override
    public void setDefaultDisplayHomeAsUpEnabled(boolean r1) {
    }

    @Override
    public void setHomeButtonEnabled(boolean r1) {
    }

    @Override
    public void setShowHideAnimationEnabled(boolean r1) {
    }

    @Override
    public void setSplitBackgroundDrawable(Drawable r1) {
    }

    @Override
    public void setStackedBackgroundDrawable(Drawable r1) {
    }

    ToolbarActionBar(Toolbar r3, CharSequence r4, Window.Callback r5) {
        this.mMenuVisibilityListeners = new ArrayList();
        this.mMenuInvalidator = new 1(this);
        this.mMenuClicker = new 2(this);
        this.mDecorToolbar = new ToolbarWidgetWrapper(r3, false);
        this.mWindowCallback = new ToolbarCallbackWrapper(this, r5);
        this.mDecorToolbar.setWindowCallback(this.mWindowCallback);
        r3.setOnMenuItemClickListener(this.mMenuClicker);
        this.mDecorToolbar.setWindowTitle(r4);
    }

    public Window.Callback getWrappedWindowCallback() {
        return this.mWindowCallback;
    }

    @Override
    public void setCustomView(View r3) {
        setCustomView(r3, new ActionBar.LayoutParams(-2, -2));
    }

    @Override
    public void setCustomView(View r1, ActionBar.LayoutParams r2) {
        if (r1 == null) goto L4;
        r1.setLayoutParams(r2);
    L4:
        this.mDecorToolbar.setCustomView(r1);
    }

    @Override
    public void setCustomView(int r4) {
        setCustomView(LayoutInflater.from(this.mDecorToolbar.getContext()).inflate(r4, this.mDecorToolbar.getViewGroup(), false));
    }

    @Override
    public void setIcon(int r2) {
        this.mDecorToolbar.setIcon(r2);
    }

    @Override
    public void setIcon(Drawable r2) {
        this.mDecorToolbar.setIcon(r2);
    }

    @Override
    public void setLogo(int r2) {
        this.mDecorToolbar.setLogo(r2);
    }

    @Override
    public void setLogo(Drawable r2) {
        this.mDecorToolbar.setLogo(r2);
    }

    @Override
    public void setElevation(float r2) {
        ViewCompat.setElevation(this.mDecorToolbar.getViewGroup(), r2);
    }

    @Override
    public float getElevation() {
        return ViewCompat.getElevation(this.mDecorToolbar.getViewGroup());
    }

    @Override
    public Context getThemedContext() {
        return this.mDecorToolbar.getContext();
    }

    @Override
    public boolean isTitleTruncated() {
        return super.isTitleTruncated();
    }

    @Override
    public void setHomeAsUpIndicator(Drawable r2) {
        this.mDecorToolbar.setNavigationIcon(r2);
    }

    @Override
    public void setHomeAsUpIndicator(int r2) {
        this.mDecorToolbar.setNavigationIcon(r2);
    }

    @Override
    public void setHomeActionContentDescription(CharSequence r2) {
        this.mDecorToolbar.setNavigationContentDescription(r2);
    }

    @Override
    public void setHomeActionContentDescription(int r2) {
        this.mDecorToolbar.setNavigationContentDescription(r2);
    }

    @Override
    public void onConfigurationChanged(Configuration r1) {
        super.onConfigurationChanged(r1);
    }

    @Override
    public void setListNavigationCallbacks(SpinnerAdapter r3, ActionBar.OnNavigationListener r4) {
        this.mDecorToolbar.setDropdownParams(r3, new NavItemSelectedListener(r4));
    }

    @Override
    public void setSelectedNavigationItem(int r3) {
        if (this.mDecorToolbar.getNavigationMode() != 1) goto L7;
        this.mDecorToolbar.setDropdownSelectedPosition(r3);
        return;
    L7:
        throw new IllegalStateException("setSelectedNavigationIndex not valid for current navigation mode");
    }

    @Override
    public void setTitle(CharSequence r2) {
        this.mDecorToolbar.setTitle(r2);
    }

    @Override
    public void setTitle(int r3) {
        DecorToolbar r0 = this.mDecorToolbar;
        if (r3 == 0) goto L5;
        CharSequence r32 = r0.getContext().getText(r3);
    L6:
        r0.setTitle(r32);
        return;
    L5:
        r32 = null;
        goto L6
    }

    @Override
    public void setWindowTitle(CharSequence r2) {
        this.mDecorToolbar.setWindowTitle(r2);
    }

    @Override
    public boolean requestFocus() {
        ViewGroup r0 = this.mDecorToolbar.getViewGroup();
        if (r0 != null) goto L5;
        return false;
    L5:
        if (r0.hasFocus() == true) goto L10;
        r0.requestFocus();
        return true;
    L10:
        return false;
    }

    @Override
    public void setSubtitle(CharSequence r2) {
        this.mDecorToolbar.setSubtitle(r2);
    }

    @Override
    public void setSubtitle(int r3) {
        DecorToolbar r0 = this.mDecorToolbar;
        if (r3 == 0) goto L5;
        CharSequence r32 = r0.getContext().getText(r3);
    L6:
        r0.setSubtitle(r32);
        return;
    L5:
        r32 = null;
        goto L6
    }

    @Override
    @SuppressLint({"WrongConstant"})
    public void setDisplayOptions(int r2) {
        setDisplayOptions(r2, -1);
    }

    @Override
    public void setDisplayOptions(int r3, int r4) {
        int r0 = this.mDecorToolbar.getDisplayOptions();
        this.mDecorToolbar.setDisplayOptions((r3 & r4) | ((~r4) & r0));
    }

    @Override
    public void setDisplayUseLogoEnabled(boolean r2) {
        setDisplayOptions(r2 ? 1 : 0, 1);
    }

    @Override
    public void setDisplayShowHomeEnabled(boolean r2) {
        if (r2 == false) goto L5;
        int r22 = 2;
    L6:
        setDisplayOptions(r22, 2);
        return;
    L5:
        r22 = 0;
        goto L6
    }

    @Override
    public void setDisplayHomeAsUpEnabled(boolean r2) {
        if (r2 == false) goto L5;
        int r22 = 4;
    L6:
        setDisplayOptions(r22, 4);
        return;
    L5:
        r22 = 0;
        goto L6
    }

    @Override
    public void setDisplayShowTitleEnabled(boolean r2) {
        if (r2 == false) goto L5;
        int r22 = 8;
    L6:
        setDisplayOptions(r22, 8);
        return;
    L5:
        r22 = 0;
        goto L6
    }

    @Override
    public void setDisplayShowCustomEnabled(boolean r2) {
        if (r2 == false) goto L5;
        int r22 = 16;
    L6:
        setDisplayOptions(r22, 16);
        return;
    L5:
        r22 = 0;
        goto L6
    }

    @Override
    public void setBackgroundDrawable(@Nullable Drawable r2) {
        this.mDecorToolbar.setBackgroundDrawable(r2);
    }

    @Override
    public View getCustomView() {
        return this.mDecorToolbar.getCustomView();
    }

    @Override
    public CharSequence getTitle() {
        return this.mDecorToolbar.getTitle();
    }

    @Override
    public CharSequence getSubtitle() {
        return this.mDecorToolbar.getSubtitle();
    }

    @Override
    public void setNavigationMode(int r2) {
        if (r2 == 2) goto L7;
        this.mDecorToolbar.setNavigationMode(r2);
        return;
    L7:
        throw new IllegalArgumentException("Tabs not supported in this configuration");
    }

    @Override
    public int getDisplayOptions() {
        return this.mDecorToolbar.getDisplayOptions();
    }

    @Override
    public ActionBar.Tab newTab() {
        throw new UnsupportedOperationException("Tabs are not supported in toolbar action bars");
    }

    @Override
    public void addTab(ActionBar.Tab r2) {
        throw new UnsupportedOperationException("Tabs are not supported in toolbar action bars");
    }

    @Override
    public void addTab(ActionBar.Tab r1, boolean r2) {
        throw new UnsupportedOperationException("Tabs are not supported in toolbar action bars");
    }

    @Override
    public void addTab(ActionBar.Tab r1, int r2) {
        throw new UnsupportedOperationException("Tabs are not supported in toolbar action bars");
    }

    @Override
    public void addTab(ActionBar.Tab r1, int r2, boolean r3) {
        throw new UnsupportedOperationException("Tabs are not supported in toolbar action bars");
    }

    @Override
    public void removeTab(ActionBar.Tab r2) {
        throw new UnsupportedOperationException("Tabs are not supported in toolbar action bars");
    }

    @Override
    public void removeTabAt(int r2) {
        throw new UnsupportedOperationException("Tabs are not supported in toolbar action bars");
    }

    @Override
    public void removeAllTabs() {
        throw new UnsupportedOperationException("Tabs are not supported in toolbar action bars");
    }

    @Override
    public void selectTab(ActionBar.Tab r2) {
        throw new UnsupportedOperationException("Tabs are not supported in toolbar action bars");
    }

    @Override
    public ActionBar.Tab getSelectedTab() {
        throw new UnsupportedOperationException("Tabs are not supported in toolbar action bars");
    }

    @Override
    public ActionBar.Tab getTabAt(int r2) {
        throw new UnsupportedOperationException("Tabs are not supported in toolbar action bars");
    }

    @Override
    public int getHeight() {
        return this.mDecorToolbar.getHeight();
    }

    @Override
    public void show() {
        this.mDecorToolbar.setVisibility(0);
    }

    @Override
    public void hide() {
        this.mDecorToolbar.setVisibility(8);
    }

    @Override
    public boolean isShowing() {
        if (this.mDecorToolbar.getVisibility() != 0) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public boolean openOptionsMenu() {
        return this.mDecorToolbar.showOverflowMenu();
    }

    @Override
    public boolean closeOptionsMenu() {
        return this.mDecorToolbar.hideOverflowMenu();
    }

    @Override
    public boolean invalidateOptionsMenu() {
        this.mDecorToolbar.getViewGroup().removeCallbacks(this.mMenuInvalidator);
        ViewCompat.postOnAnimation(this.mDecorToolbar.getViewGroup(), this.mMenuInvalidator);
        return true;
    }

    @Override
    public boolean collapseActionView() {
        if (this.mDecorToolbar.hasExpandedActionView() == false) goto L6;
        this.mDecorToolbar.collapseActionView();
        return true;
    L6:
        return false;
    }

    void populateOptionsMenu() {
        Menu r0 = getMenu();
        if ((r0 instanceof MenuBuilder) == false) goto L5;
        MenuBuilder r1 = (MenuBuilder) r0;
    L6:
        if (r1 == null) goto L20;
        r1.stopDispatchingItemsChanged();
    L20:
        r0.clear();     // Catch: Throwable -> L16
        if (this.mWindowCallback.onCreatePanelMenu(0, r0) == true) goto L11;
    L12:
        r0.clear();     // Catch: Throwable -> L16
    L13:
        if (r1 == null) goto L22;
        r1.startDispatchingItemsChanged();
        return;
    L22:
        return;
    L11:
        if (this.mWindowCallback.onPreparePanel(0, null, r0) == true) goto L13;
    L16:
        th = move-exception;
        if (r1 == null) goto L19;
        r1.startDispatchingItemsChanged();
    L19:
        throw th;
    L5:
        r1 = null;
        goto L6
    }

    @Override
    public boolean onMenuKeyEvent(KeyEvent r2) {
        if (r2.getAction() != 1) goto L5;
        openOptionsMenu();
    L5:
        return true;
    }

    @Override
    public boolean onKeyShortcut(int r5, KeyEvent r6) {
        Menu r0 = getMenu();
        if (r0 == null) goto L13;
        if (r6 == null) goto L6;
        int r2 = r6.getDeviceId();
    L7:
        boolean r3 = true;
        if (KeyCharacterMap.load(r2).getKeyboardType() != 1) goto L11;
        r3 = false;
    L11:
        r0.setQwertyMode(r3);
        return r0.performShortcut(r5, r6, 0);
    L6:
        r2 = -1;
        goto L7
    L13:
        return false;
    }

    @Override
    void onDestroy() {
        this.mDecorToolbar.getViewGroup().removeCallbacks(this.mMenuInvalidator);
    }

    @Override
    public void addOnMenuVisibilityListener(ActionBar.OnMenuVisibilityListener r2) {
        this.mMenuVisibilityListeners.add(r2);
    }

    @Override
    public void removeOnMenuVisibilityListener(ActionBar.OnMenuVisibilityListener r2) {
        this.mMenuVisibilityListeners.remove(r2);
    }

    @Override
    public void dispatchMenuVisibilityChanged(boolean r4) {
        if (r4 != this.mLastMenuVisibility) goto L5;
        return;
    L5:
        this.mLastMenuVisibility = r4;
        int r0 = this.mMenuVisibilityListeners.size();
        int r1 = 0;
    L6:
        if (r1 >= r0) goto L8;
        this.mMenuVisibilityListeners.get(r1).onMenuVisibilityChanged(r4);
        r1 = r1 + 1;
        goto L6
    }

    private Menu getMenu() {
        if (this.mMenuCallbackSet == true) goto L6;
        this.mDecorToolbar.setMenuCallbacks(new ActionMenuPresenterCallback(this), new MenuBuilderCallback(this));
        this.mMenuCallbackSet = true;
    L6:
        return this.mDecorToolbar.getMenu();
    }
}
