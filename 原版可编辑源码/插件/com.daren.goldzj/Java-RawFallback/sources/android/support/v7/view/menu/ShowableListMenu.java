package android.support.v7.view.menu;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public interface ShowableListMenu {
    void dismiss();

    android.widget.ListView getListView();

    boolean isShowing();

    void show();
}
