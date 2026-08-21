package android.support.v7.view.menu;

import android.content.Context;
import android.support.v4.internal.view.SupportMenuItem;
import android.support.v4.internal.view.SupportSubMenu;
import android.support.v4.util.ArrayMap;
import android.view.MenuItem;
import android.view.SubMenu;
import java.util.Iterator;
import java.util.Map;

abstract class BaseMenuWrapper<T> extends BaseWrapper<T> {
    final Context mContext;
    private Map<SupportMenuItem, MenuItem> mMenuItems;
    private Map<SupportSubMenu, SubMenu> mSubMenus;

    BaseMenuWrapper(Context r1, T r2) {
        super(r2);
        this.mContext = r1;
    }

    final MenuItem getMenuItemWrapper(MenuItem r3) {
        if ((r3 instanceof SupportMenuItem) == false) goto L11;
        SupportMenuItem r0 = (SupportMenuItem) r3;
        if (this.mMenuItems != null) goto L7;
        this.mMenuItems = new ArrayMap();
    L7:
        MenuItem r32 = this.mMenuItems.get(r3);
        if (r32 != null) goto L12;
        MenuItem r33 = MenuWrapperFactory.wrapSupportMenuItem(this.mContext, r0);
        this.mMenuItems.put(r0, r33);
        return r33;
    L12:
        return r32;
    L11:
        return r3;
    }

    final SubMenu getSubMenuWrapper(SubMenu r3) {
        if ((r3 instanceof SupportSubMenu) == false) goto L11;
        SupportSubMenu r32 = (SupportSubMenu) r3;
        if (this.mSubMenus != null) goto L7;
        this.mSubMenus = new ArrayMap();
    L7:
        SubMenu r0 = this.mSubMenus.get(r32);
        if (r0 != null) goto L12;
        SubMenu r02 = MenuWrapperFactory.wrapSupportSubMenu(this.mContext, r32);
        this.mSubMenus.put(r32, r02);
        return r02;
    L12:
        return r0;
    L11:
        return r3;
    }

    final void internalClear() {
        Map<SupportMenuItem, MenuItem> r0 = this.mMenuItems;
        if (r0 == null) goto L5;
        r0.clear();
    L5:
        Map<SupportSubMenu, SubMenu> r02 = this.mSubMenus;
        if (r02 == null) goto L9;
        r02.clear();
        return;
    }

    final void internalRemoveGroup(int r3) {
        Map<SupportMenuItem, MenuItem> r0 = this.mMenuItems;
        if (r0 != null) goto L5;
        return;
    L5:
        Iterator<SupportMenuItem> r02 = r0.keySet().iterator();
    L7:
        if (r02.hasNext() == false) goto L11;
        if (r3 != r02.next().getGroupId()) goto L7;
        r02.remove();
        goto L7
    }

    final void internalRemoveItem(int r3) {
        Map<SupportMenuItem, MenuItem> r0 = this.mMenuItems;
        if (r0 != null) goto L5;
        return;
    L5:
        Iterator<SupportMenuItem> r02 = r0.keySet().iterator();
    L7:
        if (r02.hasNext() == false) goto L15;
        if (r3 != r02.next().getItemId()) goto L7;
        r02.remove();
        return;
    }
}
