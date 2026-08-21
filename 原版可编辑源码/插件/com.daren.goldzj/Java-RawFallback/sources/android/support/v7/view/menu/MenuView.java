package android.support.v7.view.menu;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public interface MenuView {

    public interface ItemView {
        android.support.v7.view.menu.MenuItemImpl getItemData();

        void initialize(android.support.v7.view.menu.MenuItemImpl r1, int r2);

        boolean prefersCondensedTitle();

        void setCheckable(boolean r1);

        void setChecked(boolean r1);

        void setEnabled(boolean r1);

        void setIcon(android.graphics.drawable.Drawable r1);

        void setShortcut(boolean r1, char r2);

        void setTitle(java.lang.CharSequence r1);

        boolean showsIcon();
    }

    int getWindowAnimations();

    void initialize(android.support.v7.view.menu.MenuBuilder r1);
}
