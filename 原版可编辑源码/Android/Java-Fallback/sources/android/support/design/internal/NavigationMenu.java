package android.support.design.internal;

public class NavigationMenu extends android.support.v7.view.menu.MenuBuilder {
    public NavigationMenu(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public android.view.SubMenu addSubMenu(int r1, int r2, int r3, java.lang.CharSequence r4) {
            r0 = this;
            android.view.MenuItem r1 = r0.addInternal(r1, r2, r3, r4)
            android.support.v7.view.menu.MenuItemImpl r1 = (android.support.v7.view.menu.MenuItemImpl) r1
            android.support.design.internal.NavigationSubMenu r2 = new android.support.design.internal.NavigationSubMenu
            android.content.Context r3 = r0.getContext()
            r2.<init>(r3, r0, r1)
            r1.setSubMenu(r2)
            return r2
    }
}
