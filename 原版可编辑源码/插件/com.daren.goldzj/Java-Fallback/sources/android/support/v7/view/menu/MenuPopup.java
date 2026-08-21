package android.support.v7.view.menu;

import android.content.Context;
import android.graphics.Rect;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.FrameLayout;
import android.widget.HeaderViewListAdapter;
import android.widget.ListAdapter;
import android.widget.PopupWindow;

abstract class MenuPopup implements ShowableListMenu, MenuPresenter, AdapterView.OnItemClickListener {
    private Rect mEpicenterBounds;

    public abstract void addMenu(MenuBuilder r1);

    protected boolean closeMenuOnSubMenuOpened() {
        return true;
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
    public int getId() {
        return 0;
    }

    @Override
    public void initForMenu(@NonNull Context r1, @Nullable MenuBuilder r2) {
    }

    public abstract void setAnchorView(View r1);

    public abstract void setForceShowIcon(boolean r1);

    public abstract void setGravity(int r1);

    public abstract void setHorizontalOffset(int r1);

    public abstract void setOnDismissListener(PopupWindow.OnDismissListener r1);

    public abstract void setShowTitle(boolean r1);

    public abstract void setVerticalOffset(int r1);

    MenuPopup() {
    }

    public void setEpicenterBounds(Rect r1) {
        this.mEpicenterBounds = r1;
    }

    public Rect getEpicenterBounds() {
        return this.mEpicenterBounds;
    }

    @Override
    public MenuView getMenuView(ViewGroup r2) {
        throw new UnsupportedOperationException("MenuPopups manage their own views");
    }

    @Override
    public void onItemClick(AdapterView<?> r1, View r2, int r3, long r4) {
        ListAdapter r12 = (ListAdapter) r1.getAdapter();
        MenuBuilder r22 = toMenuAdapter(r12).mAdapterMenu;
        MenuItem r13 = (MenuItem) r12.getItem(r3);
        if (closeMenuOnSubMenuOpened() == false) goto L5;
        int r32 = 0;
    L6:
        r22.performItemAction(r13, this, r32);
        return;
    L5:
        r32 = 4;
        goto L6
    }

    protected static int measureIndividualMenuWidth(ListAdapter r9, ViewGroup r10, Context r11, int r12) {
        int r0 = 0;
        int r1 = View.MeasureSpec.makeMeasureSpec(0, 0);
        int r2 = View.MeasureSpec.makeMeasureSpec(0, 0);
        int r3 = r9.getCount();
        ViewGroup r6 = r10;
        View r7 = null;
        int r102 = 0;
        int r5 = 0;
    L3:
        if (r0 >= r3) goto L15;
        int r8 = r9.getItemViewType(r0);
        if (r8 == r5) goto L7;
        r7 = null;
        r5 = r8;
    L7:
        if (r6 != null) goto L9;
        r6 = new FrameLayout(r11);
    L9:
        r7 = r9.getView(r0, r7, r6);
        r7.measure(r1, r2);
        int r82 = r7.getMeasuredWidth();
        if (r82 >= r12) goto L11;
        if (r82 <= r102) goto L14;
        r102 = r82;
    L14:
        r0 = r0 + 1;
        goto L3
    L11:
        return r12;
    L15:
        return r102;
    }

    protected static MenuAdapter toMenuAdapter(ListAdapter r1) {
        if ((r1 instanceof HeaderViewListAdapter) == false) goto L7;
        return (MenuAdapter) ((HeaderViewListAdapter) r1).getWrappedAdapter();
    L7:
        return (MenuAdapter) r1;
    }

    protected static boolean shouldPreserveIconSpacing(MenuBuilder r5) {
        int r0 = r5.size();
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L15;
        MenuItem r3 = r5.getItem(r2);
        if (r3.isVisible() == false) goto L9;
        if (r3.getIcon() == null) goto L9;
        return true;
    L9:
        r2 = r2 + 1;
        goto L3
    L15:
        return false;
    }
}
