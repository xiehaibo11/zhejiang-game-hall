package android.support.design.internal;

public class NavigationSubMenu extends android.support.v7.view.menu.SubMenuBuilder {
    public NavigationSubMenu(android.content.Context r1, android.support.design.internal.NavigationMenu r2, android.support.v7.view.menu.MenuItemImpl r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    public void onItemsChanged(boolean r2) {
            r1 = this;
            super.onItemsChanged(r2)
            android.view.Menu r0 = r1.getParentMenu()
            android.support.v7.view.menu.MenuBuilder r0 = (android.support.v7.view.menu.MenuBuilder) r0
            r0.onItemsChanged(r2)
            return
    }
}
