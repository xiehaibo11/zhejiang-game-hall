package android.support.v7.view.menu;

abstract class MenuPopup implements android.support.v7.view.menu.ShowableListMenu, android.support.v7.view.menu.MenuPresenter, android.widget.AdapterView.OnItemClickListener {
    private android.graphics.Rect mEpicenterBounds;

    MenuPopup() {
            r0 = this;
            r0.<init>()
            return
    }

    protected static int measureIndividualMenuWidth(android.widget.ListAdapter r9, android.view.ViewGroup r10, android.content.Context r11, int r12) {
            r0 = 0
            int r1 = android.view.View.MeasureSpec.makeMeasureSpec(r0, r0)
            int r2 = android.view.View.MeasureSpec.makeMeasureSpec(r0, r0)
            int r3 = r9.getCount()
            r4 = 0
            r6 = r10
            r7 = r4
            r10 = 0
            r5 = 0
        L12:
            if (r0 >= r3) goto L37
            int r8 = r9.getItemViewType(r0)
            if (r8 == r5) goto L1c
            r7 = r4
            r5 = r8
        L1c:
            if (r6 != 0) goto L23
            android.widget.FrameLayout r6 = new android.widget.FrameLayout
            r6.<init>(r11)
        L23:
            android.view.View r7 = r9.getView(r0, r7, r6)
            r7.measure(r1, r2)
            int r8 = r7.getMeasuredWidth()
            if (r8 < r12) goto L31
            return r12
        L31:
            if (r8 <= r10) goto L34
            r10 = r8
        L34:
            int r0 = r0 + 1
            goto L12
        L37:
            return r10
    }

    protected static boolean shouldPreserveIconSpacing(android.support.v7.view.menu.MenuBuilder r5) {
            int r0 = r5.size()
            r1 = 0
            r2 = 0
        L6:
            if (r2 >= r0) goto L1d
            android.view.MenuItem r3 = r5.getItem(r2)
            boolean r4 = r3.isVisible()
            if (r4 == 0) goto L1a
            android.graphics.drawable.Drawable r3 = r3.getIcon()
            if (r3 == 0) goto L1a
            r1 = 1
            goto L1d
        L1a:
            int r2 = r2 + 1
            goto L6
        L1d:
            return r1
    }

    protected static android.support.v7.view.menu.MenuAdapter toMenuAdapter(android.widget.ListAdapter r1) {
            boolean r0 = r1 instanceof android.widget.HeaderViewListAdapter
            if (r0 == 0) goto Ld
            android.widget.HeaderViewListAdapter r1 = (android.widget.HeaderViewListAdapter) r1
            android.widget.ListAdapter r1 = r1.getWrappedAdapter()
            android.support.v7.view.menu.MenuAdapter r1 = (android.support.v7.view.menu.MenuAdapter) r1
            return r1
        Ld:
            android.support.v7.view.menu.MenuAdapter r1 = (android.support.v7.view.menu.MenuAdapter) r1
            return r1
    }

    public abstract void addMenu(android.support.v7.view.menu.MenuBuilder r1);

    protected boolean closeMenuOnSubMenuOpened() {
            r1 = this;
            r0 = 1
            return r0
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

    public android.graphics.Rect getEpicenterBounds() {
            r1 = this;
            android.graphics.Rect r0 = r1.mEpicenterBounds
            return r0
    }

    @Override
    public int getId() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public android.support.v7.view.menu.MenuView getMenuView(android.view.ViewGroup r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "MenuPopups manage their own views"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void initForMenu(@android.support.annotation.NonNull android.content.Context r1, @android.support.annotation.Nullable android.support.v7.view.menu.MenuBuilder r2) {
            r0 = this;
            return
    }

    @Override
    public void onItemClick(android.widget.AdapterView<?> r1, android.view.View r2, int r3, long r4) {
            r0 = this;
            android.widget.Adapter r1 = r1.getAdapter()
            android.widget.ListAdapter r1 = (android.widget.ListAdapter) r1
            android.support.v7.view.menu.MenuAdapter r2 = toMenuAdapter(r1)
            android.support.v7.view.menu.MenuBuilder r2 = r2.mAdapterMenu
            java.lang.Object r1 = r1.getItem(r3)
            android.view.MenuItem r1 = (android.view.MenuItem) r1
            boolean r3 = r0.closeMenuOnSubMenuOpened()
            if (r3 == 0) goto L1a
            r3 = 0
            goto L1b
        L1a:
            r3 = 4
        L1b:
            r2.performItemAction(r1, r0, r3)
            return
    }

    public abstract void setAnchorView(android.view.View r1);

    public void setEpicenterBounds(android.graphics.Rect r1) {
            r0 = this;
            r0.mEpicenterBounds = r1
            return
    }

    public abstract void setForceShowIcon(boolean r1);

    public abstract void setGravity(int r1);

    public abstract void setHorizontalOffset(int r1);

    public abstract void setOnDismissListener(android.widget.PopupWindow.OnDismissListener r1);

    public abstract void setShowTitle(boolean r1);

    public abstract void setVerticalOffset(int r1);
}
