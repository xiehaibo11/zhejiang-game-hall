package android.support.design.internal;

import android.content.Context;
import android.os.Parcel;
import android.os.Parcelable;
import android.support.v7.view.menu.MenuBuilder;
import android.support.v7.view.menu.MenuItemImpl;
import android.support.v7.view.menu.MenuPresenter;
import android.support.v7.view.menu.MenuView;
import android.support.v7.view.menu.SubMenuBuilder;
import android.view.ViewGroup;

public class BottomNavigationPresenter implements MenuPresenter {
    private int id;
    private MenuBuilder menu;
    private BottomNavigationMenuView menuView;
    private boolean updateSuspended = false;

    @Override
    public boolean collapseItemActionView(MenuBuilder menuBuilder, MenuItemImpl menuItemImpl) {
        return false;
    }

    @Override
    public boolean expandItemActionView(MenuBuilder menuBuilder, MenuItemImpl menuItemImpl) {
        return false;
    }

    @Override
    public boolean flagActionItems() {
        return false;
    }

    @Override
    public void onCloseMenu(MenuBuilder menuBuilder, boolean z) {
    }

    @Override
    public boolean onSubMenuSelected(SubMenuBuilder subMenuBuilder) {
        return false;
    }

    @Override
    public void setCallback(MenuPresenter.Callback callback) {
    }

    public void setBottomNavigationMenuView(BottomNavigationMenuView bottomNavigationMenuView) {
        this.menuView = bottomNavigationMenuView;
    }

    @Override
    public void initForMenu(Context context, MenuBuilder menuBuilder) {
        this.menu = menuBuilder;
        this.menuView.initialize(menuBuilder);
    }

    @Override
    public MenuView getMenuView(ViewGroup viewGroup) {
        return this.menuView;
    }

    @Override
    public void updateMenuView(boolean z) {
        if (this.updateSuspended) {
            return;
        }
        if (z) {
            this.menuView.buildMenuView();
        } else {
            this.menuView.updateMenuView();
        }
    }

    public void setId(int i) {
        this.id = i;
    }

    @Override
    public int getId() {
        return this.id;
    }

    @Override
    public Parcelable onSaveInstanceState() {
        SavedState savedState = new SavedState();
        savedState.selectedItemId = this.menuView.getSelectedItemId();
        return savedState;
    }

    @Override
    public void onRestoreInstanceState(Parcelable parcelable) {
        if (parcelable instanceof SavedState) {
            this.menuView.tryRestoreSelectedItemId(((SavedState) parcelable).selectedItemId);
        }
    }

    public void setUpdateSuspended(boolean z) {
        this.updateSuspended = z;
    }

    static class SavedState implements Parcelable {
        public static final Parcelable.Creator<SavedState> CREATOR = new Parcelable.Creator<SavedState>() {
            @Override
            public SavedState createFromParcel(Parcel parcel) {
                return new SavedState(parcel);
            }

            @Override
            public SavedState[] newArray(int i) {
                return new SavedState[i];
            }
        };
        int selectedItemId;

        @Override
        public int describeContents() {
            return 0;
        }

        SavedState() {
        }

        SavedState(Parcel parcel) {
            this.selectedItemId = parcel.readInt();
        }

        @Override
        public void writeToParcel(Parcel parcel, int i) {
            parcel.writeInt(this.selectedItemId);
        }
    }
}
