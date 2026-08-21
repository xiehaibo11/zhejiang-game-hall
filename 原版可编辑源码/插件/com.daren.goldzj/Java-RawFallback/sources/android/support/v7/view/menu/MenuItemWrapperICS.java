package android.support.v7.view.menu;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class MenuItemWrapperICS extends android.support.v7.view.menu.BaseMenuWrapper<android.support.v4.internal.view.SupportMenuItem> implements android.view.MenuItem {
    static final java.lang.String LOG_TAG = "MenuItemWrapper";
    private java.lang.reflect.Method mSetExclusiveCheckableMethod;

    class ActionProviderWrapper extends android.support.v4.view.ActionProvider {
        final android.view.ActionProvider mInner;
        final android.support.v7.view.menu.MenuItemWrapperICS this$0;

        public ActionProviderWrapper(android.support.v7.view.menu.MenuItemWrapperICS r1, android.content.Context r2, android.view.ActionProvider r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                r0.mInner = r3
                return
        }

        @Override
        public boolean hasSubMenu() {
                r1 = this;
                android.view.ActionProvider r0 = r1.mInner
                boolean r0 = r0.hasSubMenu()
                return r0
        }

        @Override
        public android.view.View onCreateActionView() {
                r1 = this;
                android.view.ActionProvider r0 = r1.mInner
                android.view.View r0 = r0.onCreateActionView()
                return r0
        }

        @Override
        public boolean onPerformDefaultAction() {
                r1 = this;
                android.view.ActionProvider r0 = r1.mInner
                boolean r0 = r0.onPerformDefaultAction()
                return r0
        }

        @Override
        public void onPrepareSubMenu(android.view.SubMenu r3) {
                r2 = this;
                android.view.ActionProvider r0 = r2.mInner
                android.support.v7.view.menu.MenuItemWrapperICS r1 = r2.this$0
                android.view.SubMenu r3 = r1.getSubMenuWrapper(r3)
                r0.onPrepareSubMenu(r3)
                return
        }
    }

    static class CollapsibleActionViewWrapper extends android.widget.FrameLayout implements android.support.v7.view.CollapsibleActionView {
        final android.view.CollapsibleActionView mWrappedView;

        CollapsibleActionViewWrapper(android.view.View r2) {
                r1 = this;
                android.content.Context r0 = r2.getContext()
                r1.<init>(r0)
                r0 = r2
                android.view.CollapsibleActionView r0 = (android.view.CollapsibleActionView) r0
                r1.mWrappedView = r0
                r1.addView(r2)
                return
        }

        android.view.View getWrappedView() {
                r1 = this;
                android.view.CollapsibleActionView r0 = r1.mWrappedView
                android.view.View r0 = (android.view.View) r0
                return r0
        }

        @Override
        public void onActionViewCollapsed() {
                r1 = this;
                android.view.CollapsibleActionView r0 = r1.mWrappedView
                r0.onActionViewCollapsed()
                return
        }

        @Override
        public void onActionViewExpanded() {
                r1 = this;
                android.view.CollapsibleActionView r0 = r1.mWrappedView
                r0.onActionViewExpanded()
                return
        }
    }

    private class OnActionExpandListenerWrapper extends android.support.v7.view.menu.BaseWrapper<android.view.MenuItem.OnActionExpandListener> implements android.view.MenuItem.OnActionExpandListener {
        final android.support.v7.view.menu.MenuItemWrapperICS this$0;

        OnActionExpandListenerWrapper(android.support.v7.view.menu.MenuItemWrapperICS r1, android.view.MenuItem.OnActionExpandListener r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        @Override
        public boolean onMenuItemActionCollapse(android.view.MenuItem r3) {
                r2 = this;
                T r0 = r2.mWrappedObject
                android.view.MenuItem$OnActionExpandListener r0 = (android.view.MenuItem.OnActionExpandListener) r0
                android.support.v7.view.menu.MenuItemWrapperICS r1 = r2.this$0
                android.view.MenuItem r3 = r1.getMenuItemWrapper(r3)
                boolean r3 = r0.onMenuItemActionCollapse(r3)
                return r3
        }

        @Override
        public boolean onMenuItemActionExpand(android.view.MenuItem r3) {
                r2 = this;
                T r0 = r2.mWrappedObject
                android.view.MenuItem$OnActionExpandListener r0 = (android.view.MenuItem.OnActionExpandListener) r0
                android.support.v7.view.menu.MenuItemWrapperICS r1 = r2.this$0
                android.view.MenuItem r3 = r1.getMenuItemWrapper(r3)
                boolean r3 = r0.onMenuItemActionExpand(r3)
                return r3
        }
    }

    private class OnMenuItemClickListenerWrapper extends android.support.v7.view.menu.BaseWrapper<android.view.MenuItem.OnMenuItemClickListener> implements android.view.MenuItem.OnMenuItemClickListener {
        final android.support.v7.view.menu.MenuItemWrapperICS this$0;

        OnMenuItemClickListenerWrapper(android.support.v7.view.menu.MenuItemWrapperICS r1, android.view.MenuItem.OnMenuItemClickListener r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        @Override
        public boolean onMenuItemClick(android.view.MenuItem r3) {
                r2 = this;
                T r0 = r2.mWrappedObject
                android.view.MenuItem$OnMenuItemClickListener r0 = (android.view.MenuItem.OnMenuItemClickListener) r0
                android.support.v7.view.menu.MenuItemWrapperICS r1 = r2.this$0
                android.view.MenuItem r3 = r1.getMenuItemWrapper(r3)
                boolean r3 = r0.onMenuItemClick(r3)
                return r3
        }
    }

    MenuItemWrapperICS(android.content.Context r1, android.support.v4.internal.view.SupportMenuItem r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public boolean collapseActionView() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            boolean r0 = r0.collapseActionView()
            return r0
    }

    android.support.v7.view.menu.MenuItemWrapperICS.ActionProviderWrapper createActionProviderWrapper(android.view.ActionProvider r3) {
            r2 = this;
            android.support.v7.view.menu.MenuItemWrapperICS$ActionProviderWrapper r0 = new android.support.v7.view.menu.MenuItemWrapperICS$ActionProviderWrapper
            android.content.Context r1 = r2.mContext
            r0.<init>(r2, r1, r3)
            return r0
    }

    @Override
    public boolean expandActionView() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            boolean r0 = r0.expandActionView()
            return r0
    }

    @Override
    public android.view.ActionProvider getActionProvider() {
            r2 = this;
            T r0 = r2.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            android.support.v4.view.ActionProvider r0 = r0.getSupportActionProvider()
            boolean r1 = r0 instanceof android.support.v7.view.menu.MenuItemWrapperICS.ActionProviderWrapper
            if (r1 == 0) goto L11
            android.support.v7.view.menu.MenuItemWrapperICS$ActionProviderWrapper r0 = (android.support.v7.view.menu.MenuItemWrapperICS.ActionProviderWrapper) r0
            android.view.ActionProvider r0 = r0.mInner
            return r0
        L11:
            r0 = 0
            return r0
    }

    @Override
    public android.view.View getActionView() {
            r2 = this;
            T r0 = r2.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            android.view.View r0 = r0.getActionView()
            boolean r1 = r0 instanceof android.support.v7.view.menu.MenuItemWrapperICS.CollapsibleActionViewWrapper
            if (r1 == 0) goto L12
            android.support.v7.view.menu.MenuItemWrapperICS$CollapsibleActionViewWrapper r0 = (android.support.v7.view.menu.MenuItemWrapperICS.CollapsibleActionViewWrapper) r0
            android.view.View r0 = r0.getWrappedView()
        L12:
            return r0
    }

    @Override
    public int getAlphabeticModifiers() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            int r0 = r0.getAlphabeticModifiers()
            return r0
    }

    @Override
    public char getAlphabeticShortcut() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            char r0 = r0.getAlphabeticShortcut()
            return r0
    }

    @Override
    public java.lang.CharSequence getContentDescription() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            java.lang.CharSequence r0 = r0.getContentDescription()
            return r0
    }

    @Override
    public int getGroupId() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            int r0 = r0.getGroupId()
            return r0
    }

    @Override
    public android.graphics.drawable.Drawable getIcon() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            android.graphics.drawable.Drawable r0 = r0.getIcon()
            return r0
    }

    @Override
    public android.content.res.ColorStateList getIconTintList() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            android.content.res.ColorStateList r0 = r0.getIconTintList()
            return r0
    }

    @Override
    public android.graphics.PorterDuff.Mode getIconTintMode() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            android.graphics.PorterDuff$Mode r0 = r0.getIconTintMode()
            return r0
    }

    @Override
    public android.content.Intent getIntent() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            android.content.Intent r0 = r0.getIntent()
            return r0
    }

    @Override
    public int getItemId() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            int r0 = r0.getItemId()
            return r0
    }

    @Override
    public android.view.ContextMenu.ContextMenuInfo getMenuInfo() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            android.view.ContextMenu$ContextMenuInfo r0 = r0.getMenuInfo()
            return r0
    }

    @Override
    public int getNumericModifiers() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            int r0 = r0.getNumericModifiers()
            return r0
    }

    @Override
    public char getNumericShortcut() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            char r0 = r0.getNumericShortcut()
            return r0
    }

    @Override
    public int getOrder() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            int r0 = r0.getOrder()
            return r0
    }

    @Override
    public android.view.SubMenu getSubMenu() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            android.view.SubMenu r0 = r0.getSubMenu()
            android.view.SubMenu r0 = r1.getSubMenuWrapper(r0)
            return r0
    }

    @Override
    public java.lang.CharSequence getTitle() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            java.lang.CharSequence r0 = r0.getTitle()
            return r0
    }

    @Override
    public java.lang.CharSequence getTitleCondensed() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            java.lang.CharSequence r0 = r0.getTitleCondensed()
            return r0
    }

    @Override
    public java.lang.CharSequence getTooltipText() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            java.lang.CharSequence r0 = r0.getTooltipText()
            return r0
    }

    @Override
    public boolean hasSubMenu() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            boolean r0 = r0.hasSubMenu()
            return r0
    }

    @Override
    public boolean isActionViewExpanded() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            boolean r0 = r0.isActionViewExpanded()
            return r0
    }

    @Override
    public boolean isCheckable() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            boolean r0 = r0.isCheckable()
            return r0
    }

    @Override
    public boolean isChecked() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            boolean r0 = r0.isChecked()
            return r0
    }

    @Override
    public boolean isEnabled() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            boolean r0 = r0.isEnabled()
            return r0
    }

    @Override
    public boolean isVisible() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            boolean r0 = r0.isVisible()
            return r0
    }

    @Override
    public android.view.MenuItem setActionProvider(android.view.ActionProvider r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            if (r2 == 0) goto Lb
            android.support.v7.view.menu.MenuItemWrapperICS$ActionProviderWrapper r2 = r1.createActionProviderWrapper(r2)
            goto Lc
        Lb:
            r2 = 0
        Lc:
            r0.setSupportActionProvider(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setActionView(int r3) {
            r2 = this;
            T r0 = r2.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setActionView(r3)
            T r3 = r2.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r3 = (android.support.v4.internal.view.SupportMenuItem) r3
            android.view.View r3 = r3.getActionView()
            boolean r0 = r3 instanceof android.view.CollapsibleActionView
            if (r0 == 0) goto L1f
            T r0 = r2.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            android.support.v7.view.menu.MenuItemWrapperICS$CollapsibleActionViewWrapper r1 = new android.support.v7.view.menu.MenuItemWrapperICS$CollapsibleActionViewWrapper
            r1.<init>(r3)
            r0.setActionView(r1)
        L1f:
            return r2
    }

    @Override
    public android.view.MenuItem setActionView(android.view.View r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.view.CollapsibleActionView
            if (r0 == 0) goto La
            android.support.v7.view.menu.MenuItemWrapperICS$CollapsibleActionViewWrapper r0 = new android.support.v7.view.menu.MenuItemWrapperICS$CollapsibleActionViewWrapper
            r0.<init>(r2)
            r2 = r0
        La:
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setActionView(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setAlphabeticShortcut(char r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setAlphabeticShortcut(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setAlphabeticShortcut(char r2, int r3) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setAlphabeticShortcut(r2, r3)
            return r1
    }

    @Override
    public android.view.MenuItem setCheckable(boolean r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setCheckable(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setChecked(boolean r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setChecked(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setContentDescription(java.lang.CharSequence r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setContentDescription(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setEnabled(boolean r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setEnabled(r2)
            return r1
    }

    public void setExclusiveCheckable(boolean r7) {
            r6 = this;
            java.lang.reflect.Method r0 = r6.mSetExclusiveCheckableMethod     // Catch: java.lang.Exception -> L2c
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L1c
            T r0 = r6.mWrappedObject     // Catch: java.lang.Exception -> L2c
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0     // Catch: java.lang.Exception -> L2c
            java.lang.Class r0 = r0.getClass()     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = "setExclusiveCheckable"
            java.lang.Class[] r4 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L2c
            java.lang.Class r5 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L2c
            r4[r1] = r5     // Catch: java.lang.Exception -> L2c
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r3, r4)     // Catch: java.lang.Exception -> L2c
            r6.mSetExclusiveCheckableMethod = r0     // Catch: java.lang.Exception -> L2c
        L1c:
            java.lang.reflect.Method r0 = r6.mSetExclusiveCheckableMethod     // Catch: java.lang.Exception -> L2c
            T r3 = r6.mWrappedObject     // Catch: java.lang.Exception -> L2c
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L2c
            java.lang.Boolean r7 = java.lang.Boolean.valueOf(r7)     // Catch: java.lang.Exception -> L2c
            r2[r1] = r7     // Catch: java.lang.Exception -> L2c
            r0.invoke(r3, r2)     // Catch: java.lang.Exception -> L2c
            goto L34
        L2c:
            r7 = move-exception
            java.lang.String r0 = "MenuItemWrapper"
            java.lang.String r1 = "Error while calling setExclusiveCheckable"
            android.util.Log.w(r0, r1, r7)
        L34:
            return
    }

    @Override
    public android.view.MenuItem setIcon(int r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setIcon(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setIcon(android.graphics.drawable.Drawable r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setIcon(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setIconTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setIconTintList(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setIconTintMode(android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setIconTintMode(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setIntent(android.content.Intent r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setIntent(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setNumericShortcut(char r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setNumericShortcut(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setNumericShortcut(char r2, int r3) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setNumericShortcut(r2, r3)
            return r1
    }

    @Override
    public android.view.MenuItem setOnActionExpandListener(android.view.MenuItem.OnActionExpandListener r3) {
            r2 = this;
            T r0 = r2.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            if (r3 == 0) goto Lc
            android.support.v7.view.menu.MenuItemWrapperICS$OnActionExpandListenerWrapper r1 = new android.support.v7.view.menu.MenuItemWrapperICS$OnActionExpandListenerWrapper
            r1.<init>(r2, r3)
            goto Ld
        Lc:
            r1 = 0
        Ld:
            r0.setOnActionExpandListener(r1)
            return r2
    }

    @Override
    public android.view.MenuItem setOnMenuItemClickListener(android.view.MenuItem.OnMenuItemClickListener r3) {
            r2 = this;
            T r0 = r2.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            if (r3 == 0) goto Lc
            android.support.v7.view.menu.MenuItemWrapperICS$OnMenuItemClickListenerWrapper r1 = new android.support.v7.view.menu.MenuItemWrapperICS$OnMenuItemClickListenerWrapper
            r1.<init>(r2, r3)
            goto Ld
        Lc:
            r1 = 0
        Ld:
            r0.setOnMenuItemClickListener(r1)
            return r2
    }

    @Override
    public android.view.MenuItem setShortcut(char r2, char r3) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setShortcut(r2, r3)
            return r1
    }

    @Override
    public android.view.MenuItem setShortcut(char r2, char r3, int r4, int r5) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setShortcut(r2, r3, r4, r5)
            return r1
    }

    @Override
    public void setShowAsAction(int r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setShowAsAction(r2)
            return
    }

    @Override
    public android.view.MenuItem setShowAsActionFlags(int r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setShowAsActionFlags(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setTitle(int r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setTitle(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setTitle(java.lang.CharSequence r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setTitle(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setTitleCondensed(java.lang.CharSequence r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setTitleCondensed(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setTooltipText(java.lang.CharSequence r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            r0.setTooltipText(r2)
            return r1
    }

    @Override
    public android.view.MenuItem setVisible(boolean r2) {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            android.view.MenuItem r2 = r0.setVisible(r2)
            return r2
    }
}
