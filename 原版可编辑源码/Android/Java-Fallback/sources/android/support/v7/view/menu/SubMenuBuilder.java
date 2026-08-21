package android.support.v7.view.menu;

public class SubMenuBuilder extends android.support.v7.view.menu.MenuBuilder implements android.view.SubMenu {
    private android.support.v7.view.menu.MenuItemImpl mItem;
    private android.support.v7.view.menu.MenuBuilder mParentMenu;

    public SubMenuBuilder(android.content.Context r1, android.support.v7.view.menu.MenuBuilder r2, android.support.v7.view.menu.MenuItemImpl r3) {
            r0 = this;
            r0.<init>(r1)
            r0.mParentMenu = r2
            r0.mItem = r3
            return
    }

    @Override
    public boolean collapseItemActionView(android.support.v7.view.menu.MenuItemImpl r2) {
            r1 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r1.mParentMenu
            boolean r2 = r0.collapseItemActionView(r2)
            return r2
    }

    @Override
    boolean dispatchMenuItemSelected(android.support.v7.view.menu.MenuBuilder r2, android.view.MenuItem r3) {
            r1 = this;
            boolean r0 = super.dispatchMenuItemSelected(r2, r3)
            if (r0 != 0) goto L11
            android.support.v7.view.menu.MenuBuilder r0 = r1.mParentMenu
            boolean r2 = r0.dispatchMenuItemSelected(r2, r3)
            if (r2 == 0) goto Lf
            goto L11
        Lf:
            r2 = 0
            goto L12
        L11:
            r2 = 1
        L12:
            return r2
    }

    @Override
    public boolean expandItemActionView(android.support.v7.view.menu.MenuItemImpl r2) {
            r1 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r1.mParentMenu
            boolean r2 = r0.expandItemActionView(r2)
            return r2
    }

    @Override
    public java.lang.String getActionViewStatesKey() {
            r3 = this;
            android.support.v7.view.menu.MenuItemImpl r0 = r3.mItem
            if (r0 == 0) goto L9
            int r0 = r0.getItemId()
            goto La
        L9:
            r0 = 0
        La:
            if (r0 != 0) goto Le
            r0 = 0
            return r0
        Le:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = super.getActionViewStatesKey()
            r1.append(r2)
            java.lang.String r2 = ":"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }

    @Override
    public android.view.MenuItem getItem() {
            r1 = this;
            android.support.v7.view.menu.MenuItemImpl r0 = r1.mItem
            return r0
    }

    public android.view.Menu getParentMenu() {
            r1 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r1.mParentMenu
            return r0
    }

    @Override
    public android.support.v7.view.menu.MenuBuilder getRootMenu() {
            r1 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r1.mParentMenu
            android.support.v7.view.menu.MenuBuilder r0 = r0.getRootMenu()
            return r0
    }

    @Override
    public boolean isGroupDividerEnabled() {
            r1 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r1.mParentMenu
            boolean r0 = r0.isGroupDividerEnabled()
            return r0
    }

    @Override
    public boolean isQwertyMode() {
            r1 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r1.mParentMenu
            boolean r0 = r0.isQwertyMode()
            return r0
    }

    @Override
    public boolean isShortcutsVisible() {
            r1 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r1.mParentMenu
            boolean r0 = r0.isShortcutsVisible()
            return r0
    }

    @Override
    public void setCallback(android.support.v7.view.menu.MenuBuilder.Callback r2) {
            r1 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r1.mParentMenu
            r0.setCallback(r2)
            return
    }

    @Override
    public void setGroupDividerEnabled(boolean r2) {
            r1 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r1.mParentMenu
            r0.setGroupDividerEnabled(r2)
            return
    }

    @Override
    public android.view.SubMenu setHeaderIcon(int r1) {
            r0 = this;
            android.support.v7.view.menu.MenuBuilder r1 = super.setHeaderIconInt(r1)
            android.view.SubMenu r1 = (android.view.SubMenu) r1
            return r1
    }

    @Override
    public android.view.SubMenu setHeaderIcon(android.graphics.drawable.Drawable r1) {
            r0 = this;
            android.support.v7.view.menu.MenuBuilder r1 = super.setHeaderIconInt(r1)
            android.view.SubMenu r1 = (android.view.SubMenu) r1
            return r1
    }

    @Override
    public android.view.SubMenu setHeaderTitle(int r1) {
            r0 = this;
            android.support.v7.view.menu.MenuBuilder r1 = super.setHeaderTitleInt(r1)
            android.view.SubMenu r1 = (android.view.SubMenu) r1
            return r1
    }

    @Override
    public android.view.SubMenu setHeaderTitle(java.lang.CharSequence r1) {
            r0 = this;
            android.support.v7.view.menu.MenuBuilder r1 = super.setHeaderTitleInt(r1)
            android.view.SubMenu r1 = (android.view.SubMenu) r1
            return r1
    }

    @Override
    public android.view.SubMenu setHeaderView(android.view.View r1) {
            r0 = this;
            android.support.v7.view.menu.MenuBuilder r1 = super.setHeaderViewInt(r1)
            android.view.SubMenu r1 = (android.view.SubMenu) r1
            return r1
    }

    @Override
    public android.view.SubMenu setIcon(int r2) {
            r1 = this;
            android.support.v7.view.menu.MenuItemImpl r0 = r1.mItem
            r0.setIcon(r2)
            return r1
    }

    @Override
    public android.view.SubMenu setIcon(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.v7.view.menu.MenuItemImpl r0 = r1.mItem
            r0.setIcon(r2)
            return r1
    }

    @Override
    public void setQwertyMode(boolean r2) {
            r1 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r1.mParentMenu
            r0.setQwertyMode(r2)
            return
    }

    @Override
    public void setShortcutsVisible(boolean r2) {
            r1 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r1.mParentMenu
            r0.setShortcutsVisible(r2)
            return
    }
}
