package android.support.v7.widget;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public interface MenuItemHoverListener {
    void onItemHoverEnter(@android.support.annotation.NonNull android.support.v7.view.menu.MenuBuilder r1, @android.support.annotation.NonNull android.view.MenuItem r2);

    void onItemHoverExit(@android.support.annotation.NonNull android.support.v7.view.menu.MenuBuilder r1, @android.support.annotation.NonNull android.view.MenuItem r2);
}
