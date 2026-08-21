package android.support.v7.view.menu;

abstract class BaseMenuWrapper<T> extends android.support.v7.view.menu.BaseWrapper<T> {
    final android.content.Context mContext;
    private java.util.Map<android.support.v4.internal.view.SupportMenuItem, android.view.MenuItem> mMenuItems;
    private java.util.Map<android.support.v4.internal.view.SupportSubMenu, android.view.SubMenu> mSubMenus;

    BaseMenuWrapper(android.content.Context r1, T r2) {
            r0 = this;
            r0.<init>(r2)
            r0.mContext = r1
            return
    }

    final android.view.MenuItem getMenuItemWrapper(android.view.MenuItem r3) {
            r2 = this;
            boolean r0 = r3 instanceof android.support.v4.internal.view.SupportMenuItem
            if (r0 == 0) goto L27
            r0 = r3
            android.support.v4.internal.view.SupportMenuItem r0 = (android.support.v4.internal.view.SupportMenuItem) r0
            java.util.Map<android.support.v4.internal.view.SupportMenuItem, android.view.MenuItem> r1 = r2.mMenuItems
            if (r1 != 0) goto L12
            android.support.v4.util.ArrayMap r1 = new android.support.v4.util.ArrayMap
            r1.<init>()
            r2.mMenuItems = r1
        L12:
            java.util.Map<android.support.v4.internal.view.SupportMenuItem, android.view.MenuItem> r1 = r2.mMenuItems
            java.lang.Object r3 = r1.get(r3)
            android.view.MenuItem r3 = (android.view.MenuItem) r3
            if (r3 != 0) goto L27
            android.content.Context r3 = r2.mContext
            android.view.MenuItem r3 = android.support.v7.view.menu.MenuWrapperFactory.wrapSupportMenuItem(r3, r0)
            java.util.Map<android.support.v4.internal.view.SupportMenuItem, android.view.MenuItem> r1 = r2.mMenuItems
            r1.put(r0, r3)
        L27:
            return r3
    }

    final android.view.SubMenu getSubMenuWrapper(android.view.SubMenu r3) {
            r2 = this;
            boolean r0 = r3 instanceof android.support.v4.internal.view.SupportSubMenu
            if (r0 == 0) goto L27
            android.support.v4.internal.view.SupportSubMenu r3 = (android.support.v4.internal.view.SupportSubMenu) r3
            java.util.Map<android.support.v4.internal.view.SupportSubMenu, android.view.SubMenu> r0 = r2.mSubMenus
            if (r0 != 0) goto L11
            android.support.v4.util.ArrayMap r0 = new android.support.v4.util.ArrayMap
            r0.<init>()
            r2.mSubMenus = r0
        L11:
            java.util.Map<android.support.v4.internal.view.SupportSubMenu, android.view.SubMenu> r0 = r2.mSubMenus
            java.lang.Object r0 = r0.get(r3)
            android.view.SubMenu r0 = (android.view.SubMenu) r0
            if (r0 != 0) goto L26
            android.content.Context r0 = r2.mContext
            android.view.SubMenu r0 = android.support.v7.view.menu.MenuWrapperFactory.wrapSupportSubMenu(r0, r3)
            java.util.Map<android.support.v4.internal.view.SupportSubMenu, android.view.SubMenu> r1 = r2.mSubMenus
            r1.put(r3, r0)
        L26:
            return r0
        L27:
            return r3
    }

    final void internalClear() {
            r1 = this;
            java.util.Map<android.support.v4.internal.view.SupportMenuItem, android.view.MenuItem> r0 = r1.mMenuItems
            if (r0 == 0) goto L7
            r0.clear()
        L7:
            java.util.Map<android.support.v4.internal.view.SupportSubMenu, android.view.SubMenu> r0 = r1.mSubMenus
            if (r0 == 0) goto Le
            r0.clear()
        Le:
            return
    }

    final void internalRemoveGroup(int r3) {
            r2 = this;
            java.util.Map<android.support.v4.internal.view.SupportMenuItem, android.view.MenuItem> r0 = r2.mMenuItems
            if (r0 != 0) goto L5
            return
        L5:
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            android.view.MenuItem r1 = (android.view.MenuItem) r1
            int r1 = r1.getGroupId()
            if (r3 != r1) goto Ld
            r0.remove()
            goto Ld
        L23:
            return
    }

    final void internalRemoveItem(int r3) {
            r2 = this;
            java.util.Map<android.support.v4.internal.view.SupportMenuItem, android.view.MenuItem> r0 = r2.mMenuItems
            if (r0 != 0) goto L5
            return
        L5:
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L22
            java.lang.Object r1 = r0.next()
            android.view.MenuItem r1 = (android.view.MenuItem) r1
            int r1 = r1.getItemId()
            if (r3 != r1) goto Ld
            r0.remove()
        L22:
            return
    }
}
