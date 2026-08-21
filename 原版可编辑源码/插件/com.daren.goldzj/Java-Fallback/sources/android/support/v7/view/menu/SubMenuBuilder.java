package android.support.v7.view.menu;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.support.annotation.RestrictTo;
import android.support.v7.view.menu.MenuBuilder;
import android.view.Menu;
import android.view.MenuItem;
import android.view.SubMenu;
import android.view.View;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class SubMenuBuilder extends MenuBuilder implements SubMenu {
    private MenuItemImpl mItem;
    private MenuBuilder mParentMenu;

    public SubMenuBuilder(Context r1, MenuBuilder r2, MenuItemImpl r3) {
        super(r1);
        this.mParentMenu = r2;
        this.mItem = r3;
    }

    @Override
    public void setQwertyMode(boolean r2) {
        this.mParentMenu.setQwertyMode(r2);
    }

    @Override
    public boolean isQwertyMode() {
        return this.mParentMenu.isQwertyMode();
    }

    @Override
    public void setShortcutsVisible(boolean r2) {
        this.mParentMenu.setShortcutsVisible(r2);
    }

    @Override
    public boolean isShortcutsVisible() {
        return this.mParentMenu.isShortcutsVisible();
    }

    public Menu getParentMenu() {
        return this.mParentMenu;
    }

    @Override
    public MenuItem getItem() {
        return this.mItem;
    }

    @Override
    public void setCallback(MenuBuilder.Callback r2) {
        this.mParentMenu.setCallback(r2);
    }

    @Override
    public MenuBuilder getRootMenu() {
        return this.mParentMenu.getRootMenu();
    }

    @Override
    boolean dispatchMenuItemSelected(MenuBuilder r2, MenuItem r3) {
        if (super.dispatchMenuItemSelected(r2, r3) == false) goto L5;
    L8:
        return true;
    L5:
        if (this.mParentMenu.dispatchMenuItemSelected(r2, r3) == true) goto L8;
        return false;
    }

    @Override
    public SubMenu setIcon(Drawable r2) {
        this.mItem.setIcon(r2);
        return this;
    }

    @Override
    public SubMenu setIcon(int r2) {
        this.mItem.setIcon(r2);
        return this;
    }

    @Override
    public SubMenu setHeaderIcon(Drawable r1) {
        return (SubMenu) super.setHeaderIconInt(r1);
    }

    @Override
    public SubMenu setHeaderIcon(int r1) {
        return (SubMenu) super.setHeaderIconInt(r1);
    }

    @Override
    public SubMenu setHeaderTitle(CharSequence r1) {
        return (SubMenu) super.setHeaderTitleInt(r1);
    }

    @Override
    public SubMenu setHeaderTitle(int r1) {
        return (SubMenu) super.setHeaderTitleInt(r1);
    }

    @Override
    public SubMenu setHeaderView(View r1) {
        return (SubMenu) super.setHeaderViewInt(r1);
    }

    @Override
    public boolean expandItemActionView(MenuItemImpl r2) {
        return this.mParentMenu.expandItemActionView(r2);
    }

    @Override
    public boolean collapseItemActionView(MenuItemImpl r2) {
        return this.mParentMenu.collapseItemActionView(r2);
    }

    @Override
    public String getActionViewStatesKey() {
        MenuItemImpl r0 = this.mItem;
        if (r0 == null) goto L5;
        int r02 = r0.getItemId();
    L6:
        if (r02 != 0) goto L10;
        return null;
    L10:
        return super.getActionViewStatesKey() + ":" + r02;
    L5:
        r02 = 0;
        goto L6
    }

    @Override
    public void setGroupDividerEnabled(boolean r2) {
        this.mParentMenu.setGroupDividerEnabled(r2);
    }

    @Override
    public boolean isGroupDividerEnabled() {
        return this.mParentMenu.isGroupDividerEnabled();
    }
}
