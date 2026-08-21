package android.support.v7.view.menu;

import android.content.Context;
import android.os.Bundle;
import android.os.Parcelable;
import android.support.annotation.RestrictTo;
import android.support.v7.appcompat.R;
import android.support.v7.view.menu.MenuPresenter;
import android.support.v7.view.menu.MenuView;
import android.util.SparseArray;
import android.view.ContextThemeWrapper;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.BaseAdapter;
import android.widget.ListAdapter;
import java.util.ArrayList;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class ListMenuPresenter implements MenuPresenter, AdapterView.OnItemClickListener {
    private static final String TAG = "ListMenuPresenter";
    public static final String VIEWS_TAG = "android:menu:list";
    MenuAdapter mAdapter;
    private MenuPresenter.Callback mCallback;
    Context mContext;
    private int mId;
    LayoutInflater mInflater;
    int mItemIndexOffset;
    int mItemLayoutRes;
    MenuBuilder mMenu;
    ExpandedMenuView mMenuView;
    int mThemeRes;

    private class MenuAdapter extends BaseAdapter {
        private int mExpandedIndex;
        final ListMenuPresenter this$0;

        @Override
        public long getItemId(int r3) {
            return r3;
        }

        @Override
        public Object getItem(int r1) {
            return getItem(r1);
        }

        public MenuAdapter(ListMenuPresenter r1) {
            this.this$0 = r1;
            this.mExpandedIndex = -1;
            findExpandedIndex();
        }

        @Override
        public int getCount() {
            int r0 = this.this$0.mMenu.getNonActionItems().size() - this.this$0.mItemIndexOffset;
            if (this.mExpandedIndex >= 0) goto L6;
            return r0;
        L6:
            return r0 - 1;
        }

        @Override
        public MenuItemImpl getItem(int r3) {
            ArrayList<MenuItemImpl> r0 = this.this$0.mMenu.getNonActionItems();
            int r32 = r3 + this.this$0.mItemIndexOffset;
            int r1 = this.mExpandedIndex;
            if (r1 < 0) goto L7;
            if (r32 < r1) goto L7;
            r32 = r32 + 1;
        L7:
            return r0.get(r32);
        }

        @Override
        public View getView(int r3, View r4, ViewGroup r5) {
            if (r4 != null) goto L5;
            r4 = this.this$0.mInflater.inflate(this.this$0.mItemLayoutRes, r5, false);
        L5:
            ((MenuView.ItemView) r4).initialize(getItem(r3), 0);
            return r4;
        }

        void findExpandedIndex() {
            MenuItemImpl r0 = this.this$0.mMenu.getExpandedItem();
            if (r0 == null) goto L11;
            ArrayList<MenuItemImpl> r1 = this.this$0.mMenu.getNonActionItems();
            int r2 = r1.size();
            int r3 = 0;
        L5:
            if (r3 >= r2) goto L11;
            if (r1.get(r3) == r0) goto L8;
            r3 = r3 + 1;
            goto L5
        L8:
            this.mExpandedIndex = r3;
            return;
        L11:
            this.mExpandedIndex = -1;
        }

        @Override
        public void notifyDataSetChanged() {
            findExpandedIndex();
            super.notifyDataSetChanged();
        }
    }

    @Override
    public boolean collapseItemActionView(MenuBuilder r1, MenuItemImpl r2) {
        return false;
    }

    @Override
    public boolean expandItemActionView(MenuBuilder r1, MenuItemImpl r2) {
        return false;
    }

    @Override
    public boolean flagActionItems() {
        return false;
    }

    public ListMenuPresenter(Context r2, int r3) {
        this(r3, 0);
        this.mContext = r2;
        this.mInflater = LayoutInflater.from(this.mContext);
    }

    public ListMenuPresenter(int r1, int r2) {
        this.mItemLayoutRes = r1;
        this.mThemeRes = r2;
    }

    @Override
    public void initForMenu(Context r3, MenuBuilder r4) {
        int r0 = this.mThemeRes;
        if (r0 == 0) goto L6;
        this.mContext = new ContextThemeWrapper(r3, r0);
        this.mInflater = LayoutInflater.from(this.mContext);
    L10:
        this.mMenu = r4;
        MenuAdapter r32 = this.mAdapter;
        if (r32 == null) goto L14;
        r32.notifyDataSetChanged();
        return;
    L14:
        return;
    L6:
        if (this.mContext == null) goto L10;
        this.mContext = r3;
        if (this.mInflater != null) goto L10;
        this.mInflater = LayoutInflater.from(this.mContext);
        goto L10
    }

    @Override
    public MenuView getMenuView(ViewGroup r4) {
        if (this.mMenuView != null) goto L9;
        this.mMenuView = (ExpandedMenuView) this.mInflater.inflate(R.layout.abc_expanded_menu_layout, r4, false);
        if (this.mAdapter != null) goto L7;
        this.mAdapter = new MenuAdapter(this);
    L7:
        this.mMenuView.setAdapter(this.mAdapter);
        this.mMenuView.setOnItemClickListener(this);
    L9:
        return this.mMenuView;
    }

    public ListAdapter getAdapter() {
        if (this.mAdapter != null) goto L6;
        this.mAdapter = new MenuAdapter(this);
    L6:
        return this.mAdapter;
    }

    @Override
    public void updateMenuView(boolean r1) {
        MenuAdapter r12 = this.mAdapter;
        if (r12 == null) goto L6;
        r12.notifyDataSetChanged();
        return;
    }

    @Override
    public void setCallback(MenuPresenter.Callback r1) {
        this.mCallback = r1;
    }

    @Override
    public boolean onSubMenuSelected(SubMenuBuilder r3) {
        if (r3.hasVisibleItems() == true) goto L6;
        return false;
    L6:
        new MenuDialogHelper(r3).show(null);
        MenuPresenter.Callback r0 = this.mCallback;
        if (r0 == null) goto L11;
        r0.onOpenSubMenu(r3);
        return true;
    L11:
        return true;
    }

    @Override
    public void onCloseMenu(MenuBuilder r2, boolean r3) {
        MenuPresenter.Callback r0 = this.mCallback;
        if (r0 == null) goto L6;
        r0.onCloseMenu(r2, r3);
        return;
    }

    int getItemIndexOffset() {
        return this.mItemIndexOffset;
    }

    public void setItemIndexOffset(int r1) {
        this.mItemIndexOffset = r1;
        if (this.mMenuView == null) goto L6;
        updateMenuView(false);
        return;
    }

    @Override
    public void onItemClick(AdapterView<?> r1, View r2, int r3, long r4) {
        this.mMenu.performItemAction(this.mAdapter.getItem(r3), this, 0);
    }

    public void saveHierarchyState(Bundle r3) {
        SparseArray<Parcelable> r0 = new SparseArray();
        ExpandedMenuView r1 = this.mMenuView;
        if (r1 == null) goto L5;
        r1.saveHierarchyState(r0);
    L5:
        r3.putSparseParcelableArray(VIEWS_TAG, r0);
    }

    public void restoreHierarchyState(Bundle r2) {
        SparseArray<Parcelable> r22 = r2.getSparseParcelableArray(VIEWS_TAG);
        if (r22 == null) goto L6;
        this.mMenuView.restoreHierarchyState(r22);
        return;
    }

    public void setId(int r1) {
        this.mId = r1;
    }

    @Override
    public int getId() {
        return this.mId;
    }

    @Override
    public Parcelable onSaveInstanceState() {
        if (this.mMenuView != null) goto L6;
        return null;
    L6:
        Bundle r0 = new Bundle();
        saveHierarchyState(r0);
        return r0;
    }

    @Override
    public void onRestoreInstanceState(Parcelable r1) {
        restoreHierarchyState((Bundle) r1);
    }
}
