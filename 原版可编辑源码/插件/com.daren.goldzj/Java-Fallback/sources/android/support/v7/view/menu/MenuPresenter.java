package android.support.v7.view.menu;

import android.content.Context;
import android.os.Parcelable;
import android.support.annotation.RestrictTo;
import android.view.ViewGroup;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public interface MenuPresenter {

    public interface Callback {
        void onCloseMenu(MenuBuilder r1, boolean r2);

        boolean onOpenSubMenu(MenuBuilder r1);
    }

    boolean collapseItemActionView(MenuBuilder r1, MenuItemImpl r2);

    boolean expandItemActionView(MenuBuilder r1, MenuItemImpl r2);

    boolean flagActionItems();

    int getId();

    MenuView getMenuView(ViewGroup r1);

    void initForMenu(Context r1, MenuBuilder r2);

    void onCloseMenu(MenuBuilder r1, boolean r2);

    void onRestoreInstanceState(Parcelable r1);

    Parcelable onSaveInstanceState();

    boolean onSubMenuSelected(SubMenuBuilder r1);

    void setCallback(Callback r1);

    void updateMenuView(boolean r1);
}
