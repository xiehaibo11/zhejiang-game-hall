package android.support.v7.view.menu;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public interface MenuPresenter {

    public interface Callback {
        void onCloseMenu(android.support.v7.view.menu.MenuBuilder r1, boolean r2);

        boolean onOpenSubMenu(android.support.v7.view.menu.MenuBuilder r1);
    }

    boolean collapseItemActionView(android.support.v7.view.menu.MenuBuilder r1, android.support.v7.view.menu.MenuItemImpl r2);

    boolean expandItemActionView(android.support.v7.view.menu.MenuBuilder r1, android.support.v7.view.menu.MenuItemImpl r2);

    boolean flagActionItems();

    int getId();

    android.support.v7.view.menu.MenuView getMenuView(android.view.ViewGroup r1);

    void initForMenu(android.content.Context r1, android.support.v7.view.menu.MenuBuilder r2);

    void onCloseMenu(android.support.v7.view.menu.MenuBuilder r1, boolean r2);

    void onRestoreInstanceState(android.os.Parcelable r1);

    android.os.Parcelable onSaveInstanceState();

    boolean onSubMenuSelected(android.support.v7.view.menu.SubMenuBuilder r1);

    void setCallback(android.support.v7.view.menu.MenuPresenter.Callback r1);

    void updateMenuView(boolean r1);
}
