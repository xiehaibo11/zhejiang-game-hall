package android.support.v7.app;

class ToolbarActionBar extends android.support.v7.app.ActionBar {
    android.support.v7.widget.DecorToolbar mDecorToolbar;
    private boolean mLastMenuVisibility;
    private boolean mMenuCallbackSet;
    private final android.support.v7.widget.Toolbar.OnMenuItemClickListener mMenuClicker;
    private final java.lang.Runnable mMenuInvalidator;
    private java.util.ArrayList<android.support.v7.app.ActionBar.OnMenuVisibilityListener> mMenuVisibilityListeners;
    boolean mToolbarMenuPrepared;
    android.view.Window.Callback mWindowCallback;



    private final class ActionMenuPresenterCallback implements android.support.v7.view.menu.MenuPresenter.Callback {
        private boolean mClosingActionMenu;
        final android.support.v7.app.ToolbarActionBar this$0;

        ActionMenuPresenterCallback(android.support.v7.app.ToolbarActionBar r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void onCloseMenu(android.support.v7.view.menu.MenuBuilder r2, boolean r3) {
                r1 = this;
                boolean r3 = r1.mClosingActionMenu
                if (r3 == 0) goto L5
                return
            L5:
                r3 = 1
                r1.mClosingActionMenu = r3
                android.support.v7.app.ToolbarActionBar r3 = r1.this$0
                android.support.v7.widget.DecorToolbar r3 = r3.mDecorToolbar
                r3.dismissPopupMenus()
                android.support.v7.app.ToolbarActionBar r3 = r1.this$0
                android.view.Window$Callback r3 = r3.mWindowCallback
                if (r3 == 0) goto L1e
                android.support.v7.app.ToolbarActionBar r3 = r1.this$0
                android.view.Window$Callback r3 = r3.mWindowCallback
                r0 = 108(0x6c, float:1.51E-43)
                r3.onPanelClosed(r0, r2)
            L1e:
                r2 = 0
                r1.mClosingActionMenu = r2
                return
        }

        @Override
        public boolean onOpenSubMenu(android.support.v7.view.menu.MenuBuilder r3) {
                r2 = this;
                android.support.v7.app.ToolbarActionBar r0 = r2.this$0
                android.view.Window$Callback r0 = r0.mWindowCallback
                if (r0 == 0) goto L11
                android.support.v7.app.ToolbarActionBar r0 = r2.this$0
                android.view.Window$Callback r0 = r0.mWindowCallback
                r1 = 108(0x6c, float:1.51E-43)
                r0.onMenuOpened(r1, r3)
                r3 = 1
                return r3
            L11:
                r3 = 0
                return r3
        }
    }

    private final class MenuBuilderCallback implements android.support.v7.view.menu.MenuBuilder.Callback {
        final android.support.v7.app.ToolbarActionBar this$0;

        MenuBuilderCallback(android.support.v7.app.ToolbarActionBar r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public boolean onMenuItemSelected(android.support.v7.view.menu.MenuBuilder r1, android.view.MenuItem r2) {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void onMenuModeChange(android.support.v7.view.menu.MenuBuilder r5) {
                r4 = this;
                android.support.v7.app.ToolbarActionBar r0 = r4.this$0
                android.view.Window$Callback r0 = r0.mWindowCallback
                if (r0 == 0) goto L2d
                android.support.v7.app.ToolbarActionBar r0 = r4.this$0
                android.support.v7.widget.DecorToolbar r0 = r0.mDecorToolbar
                boolean r0 = r0.isOverflowMenuShowing()
                r1 = 108(0x6c, float:1.51E-43)
                if (r0 == 0) goto L1a
                android.support.v7.app.ToolbarActionBar r0 = r4.this$0
                android.view.Window$Callback r0 = r0.mWindowCallback
                r0.onPanelClosed(r1, r5)
                goto L2d
            L1a:
                android.support.v7.app.ToolbarActionBar r0 = r4.this$0
                android.view.Window$Callback r0 = r0.mWindowCallback
                r2 = 0
                r3 = 0
                boolean r0 = r0.onPreparePanel(r2, r3, r5)
                if (r0 == 0) goto L2d
                android.support.v7.app.ToolbarActionBar r0 = r4.this$0
                android.view.Window$Callback r0 = r0.mWindowCallback
                r0.onMenuOpened(r1, r5)
            L2d:
                return
        }
    }

    private class ToolbarCallbackWrapper extends android.support.v7.view.WindowCallbackWrapper {
        final android.support.v7.app.ToolbarActionBar this$0;

        public ToolbarCallbackWrapper(android.support.v7.app.ToolbarActionBar r1, android.view.Window.Callback r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        @Override
        public android.view.View onCreatePanelView(int r2) {
                r1 = this;
                if (r2 != 0) goto L10
                android.view.View r2 = new android.view.View
                android.support.v7.app.ToolbarActionBar r0 = r1.this$0
                android.support.v7.widget.DecorToolbar r0 = r0.mDecorToolbar
                android.content.Context r0 = r0.getContext()
                r2.<init>(r0)
                return r2
            L10:
                android.view.View r2 = super.onCreatePanelView(r2)
                return r2
        }

        @Override
        public boolean onPreparePanel(int r1, android.view.View r2, android.view.Menu r3) {
                r0 = this;
                boolean r1 = super.onPreparePanel(r1, r2, r3)
                if (r1 == 0) goto L18
                android.support.v7.app.ToolbarActionBar r2 = r0.this$0
                boolean r2 = r2.mToolbarMenuPrepared
                if (r2 != 0) goto L18
                android.support.v7.app.ToolbarActionBar r2 = r0.this$0
                android.support.v7.widget.DecorToolbar r2 = r2.mDecorToolbar
                r2.setMenuPrepared()
                android.support.v7.app.ToolbarActionBar r2 = r0.this$0
                r3 = 1
                r2.mToolbarMenuPrepared = r3
            L18:
                return r1
        }
    }

    ToolbarActionBar(android.support.v7.widget.Toolbar r3, java.lang.CharSequence r4, android.view.Window.Callback r5) {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.mMenuVisibilityListeners = r0
            android.support.v7.app.ToolbarActionBar$1 r0 = new android.support.v7.app.ToolbarActionBar$1
            r0.<init>(r2)
            r2.mMenuInvalidator = r0
            android.support.v7.app.ToolbarActionBar$2 r0 = new android.support.v7.app.ToolbarActionBar$2
            r0.<init>(r2)
            r2.mMenuClicker = r0
            android.support.v7.widget.ToolbarWidgetWrapper r0 = new android.support.v7.widget.ToolbarWidgetWrapper
            r1 = 0
            r0.<init>(r3, r1)
            r2.mDecorToolbar = r0
            android.support.v7.app.ToolbarActionBar$ToolbarCallbackWrapper r0 = new android.support.v7.app.ToolbarActionBar$ToolbarCallbackWrapper
            r0.<init>(r2, r5)
            r2.mWindowCallback = r0
            android.support.v7.widget.DecorToolbar r5 = r2.mDecorToolbar
            r5.setWindowCallback(r0)
            android.support.v7.widget.Toolbar$OnMenuItemClickListener r5 = r2.mMenuClicker
            r3.setOnMenuItemClickListener(r5)
            android.support.v7.widget.DecorToolbar r3 = r2.mDecorToolbar
            r3.setWindowTitle(r4)
            return
    }

    private android.view.Menu getMenu() {
            r3 = this;
            boolean r0 = r3.mMenuCallbackSet
            if (r0 != 0) goto L16
            android.support.v7.widget.DecorToolbar r0 = r3.mDecorToolbar
            android.support.v7.app.ToolbarActionBar$ActionMenuPresenterCallback r1 = new android.support.v7.app.ToolbarActionBar$ActionMenuPresenterCallback
            r1.<init>(r3)
            android.support.v7.app.ToolbarActionBar$MenuBuilderCallback r2 = new android.support.v7.app.ToolbarActionBar$MenuBuilderCallback
            r2.<init>(r3)
            r0.setMenuCallbacks(r1, r2)
            r0 = 1
            r3.mMenuCallbackSet = r0
        L16:
            android.support.v7.widget.DecorToolbar r0 = r3.mDecorToolbar
            android.view.Menu r0 = r0.getMenu()
            return r0
    }

    @Override
    public void addOnMenuVisibilityListener(android.support.v7.app.ActionBar.OnMenuVisibilityListener r2) {
            r1 = this;
            java.util.ArrayList<android.support.v7.app.ActionBar$OnMenuVisibilityListener> r0 = r1.mMenuVisibilityListeners
            r0.add(r2)
            return
    }

    @Override
    public void addTab(android.support.v7.app.ActionBar.Tab r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Tabs are not supported in toolbar action bars"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void addTab(android.support.v7.app.ActionBar.Tab r1, int r2) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Tabs are not supported in toolbar action bars"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public void addTab(android.support.v7.app.ActionBar.Tab r1, int r2, boolean r3) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Tabs are not supported in toolbar action bars"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public void addTab(android.support.v7.app.ActionBar.Tab r1, boolean r2) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Tabs are not supported in toolbar action bars"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public boolean closeOptionsMenu() {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            boolean r0 = r0.hideOverflowMenu()
            return r0
    }

    @Override
    public boolean collapseActionView() {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            boolean r0 = r0.hasExpandedActionView()
            if (r0 == 0) goto Lf
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.collapseActionView()
            r0 = 1
            return r0
        Lf:
            r0 = 0
            return r0
    }

    @Override
    public void dispatchMenuVisibilityChanged(boolean r4) {
            r3 = this;
            boolean r0 = r3.mLastMenuVisibility
            if (r4 != r0) goto L5
            return
        L5:
            r3.mLastMenuVisibility = r4
            java.util.ArrayList<android.support.v7.app.ActionBar$OnMenuVisibilityListener> r0 = r3.mMenuVisibilityListeners
            int r0 = r0.size()
            r1 = 0
        Le:
            if (r1 >= r0) goto L1e
            java.util.ArrayList<android.support.v7.app.ActionBar$OnMenuVisibilityListener> r2 = r3.mMenuVisibilityListeners
            java.lang.Object r2 = r2.get(r1)
            android.support.v7.app.ActionBar$OnMenuVisibilityListener r2 = (android.support.v7.app.ActionBar.OnMenuVisibilityListener) r2
            r2.onMenuVisibilityChanged(r4)
            int r1 = r1 + 1
            goto Le
        L1e:
            return
    }

    @Override
    public android.view.View getCustomView() {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            android.view.View r0 = r0.getCustomView()
            return r0
    }

    @Override
    public int getDisplayOptions() {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            int r0 = r0.getDisplayOptions()
            return r0
    }

    @Override
    public float getElevation() {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            android.view.ViewGroup r0 = r0.getViewGroup()
            float r0 = android.support.v4.view.ViewCompat.getElevation(r0)
            return r0
    }

    @Override
    public int getHeight() {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            int r0 = r0.getHeight()
            return r0
    }

    @Override
    public int getNavigationItemCount() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public int getNavigationMode() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public int getSelectedNavigationIndex() {
            r1 = this;
            r0 = -1
            return r0
    }

    @Override
    public android.support.v7.app.ActionBar.Tab getSelectedTab() {
            r2 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Tabs are not supported in toolbar action bars"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public java.lang.CharSequence getSubtitle() {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            java.lang.CharSequence r0 = r0.getSubtitle()
            return r0
    }

    @Override
    public android.support.v7.app.ActionBar.Tab getTabAt(int r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Tabs are not supported in toolbar action bars"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public int getTabCount() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public android.content.Context getThemedContext() {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            android.content.Context r0 = r0.getContext()
            return r0
    }

    @Override
    public java.lang.CharSequence getTitle() {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            java.lang.CharSequence r0 = r0.getTitle()
            return r0
    }

    public android.view.Window.Callback getWrappedWindowCallback() {
            r1 = this;
            android.view.Window$Callback r0 = r1.mWindowCallback
            return r0
    }

    @Override
    public void hide() {
            r2 = this;
            android.support.v7.widget.DecorToolbar r0 = r2.mDecorToolbar
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    public boolean invalidateOptionsMenu() {
            r2 = this;
            android.support.v7.widget.DecorToolbar r0 = r2.mDecorToolbar
            android.view.ViewGroup r0 = r0.getViewGroup()
            java.lang.Runnable r1 = r2.mMenuInvalidator
            r0.removeCallbacks(r1)
            android.support.v7.widget.DecorToolbar r0 = r2.mDecorToolbar
            android.view.ViewGroup r0 = r0.getViewGroup()
            java.lang.Runnable r1 = r2.mMenuInvalidator
            android.support.v4.view.ViewCompat.postOnAnimation(r0, r1)
            r0 = 1
            return r0
    }

    @Override
    public boolean isShowing() {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            int r0 = r0.getVisibility()
            if (r0 != 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    @Override
    public boolean isTitleTruncated() {
            r1 = this;
            boolean r0 = super.isTitleTruncated()
            return r0
    }

    @Override
    public android.support.v7.app.ActionBar.Tab newTab() {
            r2 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Tabs are not supported in toolbar action bars"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            return
    }

    @Override
    void onDestroy() {
            r2 = this;
            android.support.v7.widget.DecorToolbar r0 = r2.mDecorToolbar
            android.view.ViewGroup r0 = r0.getViewGroup()
            java.lang.Runnable r1 = r2.mMenuInvalidator
            r0.removeCallbacks(r1)
            return
    }

    @Override
    public boolean onKeyShortcut(int r5, android.view.KeyEvent r6) {
            r4 = this;
            android.view.Menu r0 = r4.getMenu()
            r1 = 0
            if (r0 == 0) goto L24
            if (r6 == 0) goto Le
            int r2 = r6.getDeviceId()
            goto Lf
        Le:
            r2 = -1
        Lf:
            android.view.KeyCharacterMap r2 = android.view.KeyCharacterMap.load(r2)
            int r2 = r2.getKeyboardType()
            r3 = 1
            if (r2 == r3) goto L1b
            goto L1c
        L1b:
            r3 = r1
        L1c:
            r0.setQwertyMode(r3)
            boolean r5 = r0.performShortcut(r5, r6, r1)
            return r5
        L24:
            return r1
    }

    @Override
    public boolean onMenuKeyEvent(android.view.KeyEvent r2) {
            r1 = this;
            int r2 = r2.getAction()
            r0 = 1
            if (r2 != r0) goto La
            r1.openOptionsMenu()
        La:
            return r0
    }

    @Override
    public boolean openOptionsMenu() {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            boolean r0 = r0.showOverflowMenu()
            return r0
    }

    void populateOptionsMenu() {
            r5 = this;
            android.view.Menu r0 = r5.getMenu()
            boolean r1 = r0 instanceof android.support.v7.view.menu.MenuBuilder
            r2 = 0
            if (r1 == 0) goto Ld
            r1 = r0
            android.support.v7.view.menu.MenuBuilder r1 = (android.support.v7.view.menu.MenuBuilder) r1
            goto Le
        Ld:
            r1 = r2
        Le:
            if (r1 == 0) goto L13
            r1.stopDispatchingItemsChanged()
        L13:
            r0.clear()     // Catch: java.lang.Throwable -> L30
            android.view.Window$Callback r3 = r5.mWindowCallback     // Catch: java.lang.Throwable -> L30
            r4 = 0
            boolean r3 = r3.onCreatePanelMenu(r4, r0)     // Catch: java.lang.Throwable -> L30
            if (r3 == 0) goto L27
            android.view.Window$Callback r3 = r5.mWindowCallback     // Catch: java.lang.Throwable -> L30
            boolean r2 = r3.onPreparePanel(r4, r2, r0)     // Catch: java.lang.Throwable -> L30
            if (r2 != 0) goto L2a
        L27:
            r0.clear()     // Catch: java.lang.Throwable -> L30
        L2a:
            if (r1 == 0) goto L2f
            r1.startDispatchingItemsChanged()
        L2f:
            return
        L30:
            r0 = move-exception
            if (r1 == 0) goto L36
            r1.startDispatchingItemsChanged()
        L36:
            throw r0
    }

    @Override
    public void removeAllTabs() {
            r2 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Tabs are not supported in toolbar action bars"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void removeOnMenuVisibilityListener(android.support.v7.app.ActionBar.OnMenuVisibilityListener r2) {
            r1 = this;
            java.util.ArrayList<android.support.v7.app.ActionBar$OnMenuVisibilityListener> r0 = r1.mMenuVisibilityListeners
            r0.remove(r2)
            return
    }

    @Override
    public void removeTab(android.support.v7.app.ActionBar.Tab r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Tabs are not supported in toolbar action bars"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void removeTabAt(int r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Tabs are not supported in toolbar action bars"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public boolean requestFocus() {
            r2 = this;
            android.support.v7.widget.DecorToolbar r0 = r2.mDecorToolbar
            android.view.ViewGroup r0 = r0.getViewGroup()
            if (r0 == 0) goto L13
            boolean r1 = r0.hasFocus()
            if (r1 != 0) goto L13
            r0.requestFocus()
            r0 = 1
            return r0
        L13:
            r0 = 0
            return r0
    }

    @Override
    public void selectTab(android.support.v7.app.ActionBar.Tab r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Tabs are not supported in toolbar action bars"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void setBackgroundDrawable(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setBackgroundDrawable(r2)
            return
    }

    @Override
    public void setCustomView(int r4) {
            r3 = this;
            android.support.v7.widget.DecorToolbar r0 = r3.mDecorToolbar
            android.content.Context r0 = r0.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.support.v7.widget.DecorToolbar r1 = r3.mDecorToolbar
            android.view.ViewGroup r1 = r1.getViewGroup()
            r2 = 0
            android.view.View r4 = r0.inflate(r4, r1, r2)
            r3.setCustomView(r4)
            return
    }

    @Override
    public void setCustomView(android.view.View r3) {
            r2 = this;
            android.support.v7.app.ActionBar$LayoutParams r0 = new android.support.v7.app.ActionBar$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            r2.setCustomView(r3, r0)
            return
    }

    @Override
    public void setCustomView(android.view.View r1, android.support.v7.app.ActionBar.LayoutParams r2) {
            r0 = this;
            if (r1 == 0) goto L5
            r1.setLayoutParams(r2)
        L5:
            android.support.v7.widget.DecorToolbar r2 = r0.mDecorToolbar
            r2.setCustomView(r1)
            return
    }

    @Override
    public void setDefaultDisplayHomeAsUpEnabled(boolean r1) {
            r0 = this;
            return
    }

    @Override
    public void setDisplayHomeAsUpEnabled(boolean r2) {
            r1 = this;
            r0 = 4
            if (r2 == 0) goto L5
            r2 = r0
            goto L6
        L5:
            r2 = 0
        L6:
            r1.setDisplayOptions(r2, r0)
            return
    }

    @Override
    public void setDisplayOptions(int r2) {
            r1 = this;
            r0 = -1
            r1.setDisplayOptions(r2, r0)
            return
    }

    @Override
    public void setDisplayOptions(int r3, int r4) {
            r2 = this;
            android.support.v7.widget.DecorToolbar r0 = r2.mDecorToolbar
            int r0 = r0.getDisplayOptions()
            android.support.v7.widget.DecorToolbar r1 = r2.mDecorToolbar
            r3 = r3 & r4
            int r4 = ~r4
            r4 = r4 & r0
            r3 = r3 | r4
            r1.setDisplayOptions(r3)
            return
    }

    @Override
    public void setDisplayShowCustomEnabled(boolean r2) {
            r1 = this;
            r0 = 16
            if (r2 == 0) goto L6
            r2 = r0
            goto L7
        L6:
            r2 = 0
        L7:
            r1.setDisplayOptions(r2, r0)
            return
    }

    @Override
    public void setDisplayShowHomeEnabled(boolean r2) {
            r1 = this;
            r0 = 2
            if (r2 == 0) goto L5
            r2 = r0
            goto L6
        L5:
            r2 = 0
        L6:
            r1.setDisplayOptions(r2, r0)
            return
    }

    @Override
    public void setDisplayShowTitleEnabled(boolean r2) {
            r1 = this;
            r0 = 8
            if (r2 == 0) goto L6
            r2 = r0
            goto L7
        L6:
            r2 = 0
        L7:
            r1.setDisplayOptions(r2, r0)
            return
    }

    @Override
    public void setDisplayUseLogoEnabled(boolean r2) {
            r1 = this;
            r0 = 1
            r1.setDisplayOptions(r2, r0)
            return
    }

    @Override
    public void setElevation(float r2) {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            android.view.ViewGroup r0 = r0.getViewGroup()
            android.support.v4.view.ViewCompat.setElevation(r0, r2)
            return
    }

    @Override
    public void setHomeActionContentDescription(int r2) {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setNavigationContentDescription(r2)
            return
    }

    @Override
    public void setHomeActionContentDescription(java.lang.CharSequence r2) {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setNavigationContentDescription(r2)
            return
    }

    @Override
    public void setHomeAsUpIndicator(int r2) {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setNavigationIcon(r2)
            return
    }

    @Override
    public void setHomeAsUpIndicator(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setNavigationIcon(r2)
            return
    }

    @Override
    public void setHomeButtonEnabled(boolean r1) {
            r0 = this;
            return
    }

    @Override
    public void setIcon(int r2) {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setIcon(r2)
            return
    }

    @Override
    public void setIcon(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setIcon(r2)
            return
    }

    @Override
    public void setListNavigationCallbacks(android.widget.SpinnerAdapter r3, android.support.v7.app.ActionBar.OnNavigationListener r4) {
            r2 = this;
            android.support.v7.widget.DecorToolbar r0 = r2.mDecorToolbar
            android.support.v7.app.NavItemSelectedListener r1 = new android.support.v7.app.NavItemSelectedListener
            r1.<init>(r4)
            r0.setDropdownParams(r3, r1)
            return
    }

    @Override
    public void setLogo(int r2) {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setLogo(r2)
            return
    }

    @Override
    public void setLogo(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setLogo(r2)
            return
    }

    @Override
    public void setNavigationMode(int r2) {
            r1 = this;
            r0 = 2
            if (r2 == r0) goto L9
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setNavigationMode(r2)
            return
        L9:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Tabs not supported in this configuration"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void setSelectedNavigationItem(int r3) {
            r2 = this;
            android.support.v7.widget.DecorToolbar r0 = r2.mDecorToolbar
            int r0 = r0.getNavigationMode()
            r1 = 1
            if (r0 != r1) goto Lf
            android.support.v7.widget.DecorToolbar r0 = r2.mDecorToolbar
            r0.setDropdownSelectedPosition(r3)
            return
        Lf:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r0 = "setSelectedNavigationIndex not valid for current navigation mode"
            r3.<init>(r0)
            throw r3
    }

    @Override
    public void setShowHideAnimationEnabled(boolean r1) {
            r0 = this;
            return
    }

    @Override
    public void setSplitBackgroundDrawable(android.graphics.drawable.Drawable r1) {
            r0 = this;
            return
    }

    @Override
    public void setStackedBackgroundDrawable(android.graphics.drawable.Drawable r1) {
            r0 = this;
            return
    }

    @Override
    public void setSubtitle(int r3) {
            r2 = this;
            android.support.v7.widget.DecorToolbar r0 = r2.mDecorToolbar
            if (r3 == 0) goto Ld
            android.content.Context r1 = r0.getContext()
            java.lang.CharSequence r3 = r1.getText(r3)
            goto Le
        Ld:
            r3 = 0
        Le:
            r0.setSubtitle(r3)
            return
    }

    @Override
    public void setSubtitle(java.lang.CharSequence r2) {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setSubtitle(r2)
            return
    }

    @Override
    public void setTitle(int r3) {
            r2 = this;
            android.support.v7.widget.DecorToolbar r0 = r2.mDecorToolbar
            if (r3 == 0) goto Ld
            android.content.Context r1 = r0.getContext()
            java.lang.CharSequence r3 = r1.getText(r3)
            goto Le
        Ld:
            r3 = 0
        Le:
            r0.setTitle(r3)
            return
    }

    @Override
    public void setTitle(java.lang.CharSequence r2) {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setTitle(r2)
            return
    }

    @Override
    public void setWindowTitle(java.lang.CharSequence r2) {
            r1 = this;
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setWindowTitle(r2)
            return
    }

    @Override
    public void show() {
            r2 = this;
            android.support.v7.widget.DecorToolbar r0 = r2.mDecorToolbar
            r1 = 0
            r0.setVisibility(r1)
            return
    }
}
