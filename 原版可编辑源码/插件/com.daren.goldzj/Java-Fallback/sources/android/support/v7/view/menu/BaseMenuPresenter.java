package android.support.v7.view.menu;

import android.content.Context;
import android.support.annotation.RestrictTo;
import android.support.v7.view.menu.MenuPresenter;
import android.support.v7.view.menu.MenuView;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import java.util.ArrayList;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public abstract class BaseMenuPresenter implements MenuPresenter {
    private MenuPresenter.Callback mCallback;
    protected Context mContext;
    private int mId;
    protected LayoutInflater mInflater;
    private int mItemLayoutRes;
    protected MenuBuilder mMenu;
    private int mMenuLayoutRes;
    protected MenuView mMenuView;
    protected Context mSystemContext;
    protected LayoutInflater mSystemInflater;

    public abstract void bindItemView(MenuItemImpl r1, MenuView.ItemView r2);

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

    public boolean shouldIncludeItem(int r1, MenuItemImpl r2) {
        return true;
    }

    public BaseMenuPresenter(Context r1, int r2, int r3) {
        this.mSystemContext = r1;
        this.mSystemInflater = LayoutInflater.from(r1);
        this.mMenuLayoutRes = r2;
        this.mItemLayoutRes = r3;
    }

    @Override
    public void initForMenu(Context r1, MenuBuilder r2) {
        this.mContext = r1;
        this.mInflater = LayoutInflater.from(this.mContext);
        this.mMenu = r2;
    }

    @Override
    public MenuView getMenuView(ViewGroup r4) {
        if (this.mMenuView != null) goto L6;
        this.mMenuView = (MenuView) this.mSystemInflater.inflate(this.mMenuLayoutRes, r4, false);
        this.mMenuView.initialize(this.mMenu);
        updateMenuView(true);
    L6:
        return this.mMenuView;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override
    public void updateMenuView(boolean r10) {
        ViewGroup r102 = (ViewGroup) this.mMenuView;
        if (r102 != null) goto L5;
        return;
    L5:
        MenuBuilder r0 = this.mMenu;
        int r1 = 0;
        if (r0 == null) goto L24;
        r0.flagActionItems();
        ArrayList<MenuItemImpl> r02 = this.mMenu.getVisibleItems();
        int r2 = r02.size();
        int r3 = 0;
        int r4 = 0;
    L8:
        if (r3 >= r2) goto L22;
        MenuItemImpl r5 = r02.get(r3);
        if (shouldIncludeItem(r4, r5) == false) goto L21;
        View r6 = r102.getChildAt(r4);
        if ((r6 instanceof MenuView.ItemView) == false) goto L14;
        MenuItemImpl r7 = ((MenuView.ItemView) r6).getItemData();
    L15:
        View r8 = getItemView(r5, r6, r102);
        if (r5 == r7) goto L18;
        r8.setPressed(false);
        r8.jumpDrawablesToCurrentState();
    L18:
        if (r8 == r6) goto L20;
        addItemView(r8, r4);
    L20:
        r4 = r4 + 1;
        goto L21
    L14:
        r7 = null;
    L21:
        r3 = r3 + 1;
        goto L8
    L22:
        r1 = r4;
    L24:
        if (r1 >= r102.getChildCount()) goto L28;
        if (filterLeftoverView(r102, r1) == true) goto L24;
        r1 = r1 + 1;
        goto L24
    }

    protected void addItemView(View r2, int r3) {
        ViewGroup r0 = (ViewGroup) r2.getParent();
        if (r0 == null) goto L5;
        r0.removeView(r2);
    L5:
        ((ViewGroup) this.mMenuView).addView(r2, r3);
    }

    protected boolean filterLeftoverView(ViewGroup r1, int r2) {
        r1.removeViewAt(r2);
        return true;
    }

    @Override
    public void setCallback(MenuPresenter.Callback r1) {
        this.mCallback = r1;
    }

    public MenuPresenter.Callback getCallback() {
        return this.mCallback;
    }

    public MenuView.ItemView createItemView(ViewGroup r4) {
        return (MenuView.ItemView) this.mSystemInflater.inflate(this.mItemLayoutRes, r4, false);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public View getItemView(MenuItemImpl r2, View r3, ViewGroup r4) {
        if ((r3 instanceof MenuView.ItemView) == false) goto L5;
        MenuView.ItemView r32 = (MenuView.ItemView) r3;
    L6:
        bindItemView(r2, r32);
        return (View) r32;
    L5:
        r32 = createItemView(r4);
        goto L6
    }

    @Override
    public void onCloseMenu(MenuBuilder r2, boolean r3) {
        MenuPresenter.Callback r0 = this.mCallback;
        if (r0 == null) goto L6;
        r0.onCloseMenu(r2, r3);
        return;
    }

    @Override
    public boolean onSubMenuSelected(SubMenuBuilder r2) {
        MenuPresenter.Callback r0 = this.mCallback;
        if (r0 != null) goto L5;
        return false;
    L5:
        return r0.onOpenSubMenu(r2);
    }

    @Override
    public int getId() {
        return this.mId;
    }

    public void setId(int r1) {
        this.mId = r1;
    }
}
