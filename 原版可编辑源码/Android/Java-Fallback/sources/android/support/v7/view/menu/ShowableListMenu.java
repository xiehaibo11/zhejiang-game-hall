package android.support.v7.view.menu;

public interface ShowableListMenu {
    void dismiss();

    android.widget.ListView getListView();

    boolean isShowing();

    void show();
}
