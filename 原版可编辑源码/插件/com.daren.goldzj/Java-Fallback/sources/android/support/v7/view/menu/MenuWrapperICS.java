package android.support.v7.view.menu;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.support.v4.internal.view.SupportMenu;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.MenuItem;
import android.view.SubMenu;

class MenuWrapperICS extends BaseMenuWrapper<SupportMenu> implements Menu {
    MenuWrapperICS(Context r1, SupportMenu r2) {
        super(r1, r2);
    }

    @Override
    public MenuItem add(CharSequence r2) {
        return getMenuItemWrapper(((SupportMenu) this.mWrappedObject).add(r2));
    }

    @Override
    public MenuItem add(int r2) {
        return getMenuItemWrapper(((SupportMenu) this.mWrappedObject).add(r2));
    }

    @Override
    public MenuItem add(int r2, int r3, int r4, CharSequence r5) {
        return getMenuItemWrapper(((SupportMenu) this.mWrappedObject).add(r2, r3, r4, r5));
    }

    @Override
    public MenuItem add(int r2, int r3, int r4, int r5) {
        return getMenuItemWrapper(((SupportMenu) this.mWrappedObject).add(r2, r3, r4, r5));
    }

    @Override
    public SubMenu addSubMenu(CharSequence r2) {
        return getSubMenuWrapper(((SupportMenu) this.mWrappedObject).addSubMenu(r2));
    }

    @Override
    public SubMenu addSubMenu(int r2) {
        return getSubMenuWrapper(((SupportMenu) this.mWrappedObject).addSubMenu(r2));
    }

    @Override
    public SubMenu addSubMenu(int r2, int r3, int r4, CharSequence r5) {
        return getSubMenuWrapper(((SupportMenu) this.mWrappedObject).addSubMenu(r2, r3, r4, r5));
    }

    @Override
    public SubMenu addSubMenu(int r2, int r3, int r4, int r5) {
        return getSubMenuWrapper(((SupportMenu) this.mWrappedObject).addSubMenu(r2, r3, r4, r5));
    }

    @Override
    public int addIntentOptions(int r13, int r14, int r15, ComponentName r16, Intent[] r17, Intent r18, int r19, MenuItem[] r20) {
        if (r20 == null) goto L5;
        MenuItem[] r2 = new MenuItem[r20.length];
    L6:
        int r3 = ((SupportMenu) this.mWrappedObject).addIntentOptions(r13, r14, r15, r16, r17, r18, r19, r2);
        if (r2 == null) goto L11;
        int r4 = 0;
        int r5 = r2.length;
    L9:
        if (r4 >= r5) goto L11;
        r20[r4] = getMenuItemWrapper(r2[r4]);
        r4 = r4 + 1;
    L11:
        return r3;
    L5:
        r2 = null;
        goto L6
    }

    @Override
    public void removeItem(int r2) {
        internalRemoveItem(r2);
        ((SupportMenu) this.mWrappedObject).removeItem(r2);
    }

    @Override
    public void removeGroup(int r2) {
        internalRemoveGroup(r2);
        ((SupportMenu) this.mWrappedObject).removeGroup(r2);
    }

    @Override
    public void clear() {
        internalClear();
        ((SupportMenu) this.mWrappedObject).clear();
    }

    @Override
    public void setGroupCheckable(int r2, boolean r3, boolean r4) {
        ((SupportMenu) this.mWrappedObject).setGroupCheckable(r2, r3, r4);
    }

    @Override
    public void setGroupVisible(int r2, boolean r3) {
        ((SupportMenu) this.mWrappedObject).setGroupVisible(r2, r3);
    }

    @Override
    public void setGroupEnabled(int r2, boolean r3) {
        ((SupportMenu) this.mWrappedObject).setGroupEnabled(r2, r3);
    }

    @Override
    public boolean hasVisibleItems() {
        return ((SupportMenu) this.mWrappedObject).hasVisibleItems();
    }

    @Override
    public MenuItem findItem(int r2) {
        return getMenuItemWrapper(((SupportMenu) this.mWrappedObject).findItem(r2));
    }

    @Override
    public int size() {
        return ((SupportMenu) this.mWrappedObject).size();
    }

    @Override
    public MenuItem getItem(int r2) {
        return getMenuItemWrapper(((SupportMenu) this.mWrappedObject).getItem(r2));
    }

    @Override
    public void close() {
        ((SupportMenu) this.mWrappedObject).close();
    }

    @Override
    public boolean performShortcut(int r2, KeyEvent r3, int r4) {
        return ((SupportMenu) this.mWrappedObject).performShortcut(r2, r3, r4);
    }

    @Override
    public boolean isShortcutKey(int r2, KeyEvent r3) {
        return ((SupportMenu) this.mWrappedObject).isShortcutKey(r2, r3);
    }

    @Override
    public boolean performIdentifierAction(int r2, int r3) {
        return ((SupportMenu) this.mWrappedObject).performIdentifierAction(r2, r3);
    }

    @Override
    public void setQwertyMode(boolean r2) {
        ((SupportMenu) this.mWrappedObject).setQwertyMode(r2);
    }
}
