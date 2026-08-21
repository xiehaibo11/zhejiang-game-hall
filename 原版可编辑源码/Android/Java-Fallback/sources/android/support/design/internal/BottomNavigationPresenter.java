package android.support.design.internal;

public class BottomNavigationPresenter implements android.support.v7.view.menu.MenuPresenter {
    private int id;
    private android.support.v7.view.menu.MenuBuilder menu;
    private android.support.design.internal.BottomNavigationMenuView menuView;
    private boolean updateSuspended;

    static class SavedState implements android.os.Parcelable {
        public static final android.os.Parcelable.Creator<android.support.design.internal.BottomNavigationPresenter.SavedState> CREATOR = null;
        int selectedItemId;


        static {
                android.support.design.internal.BottomNavigationPresenter$SavedState$1 r0 = new android.support.design.internal.BottomNavigationPresenter$SavedState$1
                r0.<init>()
                android.support.design.internal.BottomNavigationPresenter.SavedState.CREATOR = r0
                return
        }

        SavedState() {
                r0 = this;
                r0.<init>()
                return
        }

        SavedState(android.os.Parcel r1) {
                r0 = this;
                r0.<init>()
                int r1 = r1.readInt()
                r0.selectedItemId = r1
                return
        }

        @Override
        public int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                int r2 = r0.selectedItemId
                r1.writeInt(r2)
                return
        }
    }

    public BottomNavigationPresenter() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.updateSuspended = r0
            return
    }

    @Override
    public boolean collapseItemActionView(android.support.v7.view.menu.MenuBuilder r1, android.support.v7.view.menu.MenuItemImpl r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean expandItemActionView(android.support.v7.view.menu.MenuBuilder r1, android.support.v7.view.menu.MenuItemImpl r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean flagActionItems() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public int getId() {
            r1 = this;
            int r0 = r1.id
            return r0
    }

    @Override
    public android.support.v7.view.menu.MenuView getMenuView(android.view.ViewGroup r1) {
            r0 = this;
            android.support.design.internal.BottomNavigationMenuView r1 = r0.menuView
            return r1
    }

    @Override
    public void initForMenu(android.content.Context r1, android.support.v7.view.menu.MenuBuilder r2) {
            r0 = this;
            r0.menu = r2
            android.support.design.internal.BottomNavigationMenuView r1 = r0.menuView
            r1.initialize(r2)
            return
    }

    @Override
    public void onCloseMenu(android.support.v7.view.menu.MenuBuilder r1, boolean r2) {
            r0 = this;
            return
    }

    @Override
    public void onRestoreInstanceState(android.os.Parcelable r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.support.design.internal.BottomNavigationPresenter.SavedState
            if (r0 == 0) goto Ld
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            android.support.design.internal.BottomNavigationPresenter$SavedState r2 = (android.support.design.internal.BottomNavigationPresenter.SavedState) r2
            int r2 = r2.selectedItemId
            r0.tryRestoreSelectedItemId(r2)
        Ld:
            return
    }

    @Override
    public android.os.Parcelable onSaveInstanceState() {
            r2 = this;
            android.support.design.internal.BottomNavigationPresenter$SavedState r0 = new android.support.design.internal.BottomNavigationPresenter$SavedState
            r0.<init>()
            android.support.design.internal.BottomNavigationMenuView r1 = r2.menuView
            int r1 = r1.getSelectedItemId()
            r0.selectedItemId = r1
            return r0
    }

    @Override
    public boolean onSubMenuSelected(android.support.v7.view.menu.SubMenuBuilder r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    public void setBottomNavigationMenuView(android.support.design.internal.BottomNavigationMenuView r1) {
            r0 = this;
            r0.menuView = r1
            return
    }

    @Override
    public void setCallback(android.support.v7.view.menu.MenuPresenter.Callback r1) {
            r0 = this;
            return
    }

    public void setId(int r1) {
            r0 = this;
            r0.id = r1
            return
    }

    public void setUpdateSuspended(boolean r1) {
            r0 = this;
            r0.updateSuspended = r1
            return
    }

    @Override
    public void updateMenuView(boolean r2) {
            r1 = this;
            boolean r0 = r1.updateSuspended
            if (r0 == 0) goto L5
            return
        L5:
            if (r2 == 0) goto Ld
            android.support.design.internal.BottomNavigationMenuView r2 = r1.menuView
            r2.buildMenuView()
            goto L12
        Ld:
            android.support.design.internal.BottomNavigationMenuView r2 = r1.menuView
            r2.updateMenuView()
        L12:
            return
    }
}
