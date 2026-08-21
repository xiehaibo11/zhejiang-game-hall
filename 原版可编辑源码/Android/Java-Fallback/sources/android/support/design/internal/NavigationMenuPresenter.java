package android.support.design.internal;

public class NavigationMenuPresenter implements android.support.v7.view.menu.MenuPresenter {
    private static final java.lang.String STATE_ADAPTER = "android:menu:adapter";
    private static final java.lang.String STATE_HEADER = "android:menu:header";
    private static final java.lang.String STATE_HIERARCHY = "android:menu:list";
    android.support.design.internal.NavigationMenuPresenter.NavigationMenuAdapter adapter;
    private android.support.v7.view.menu.MenuPresenter.Callback callback;
    android.widget.LinearLayout headerLayout;
    android.content.res.ColorStateList iconTintList;
    private int id;
    android.graphics.drawable.Drawable itemBackground;
    int itemHorizontalPadding;
    int itemIconPadding;
    android.view.LayoutInflater layoutInflater;
    android.support.v7.view.menu.MenuBuilder menu;
    private android.support.design.internal.NavigationMenuView menuView;
    final android.view.View.OnClickListener onClickListener;
    int paddingSeparator;
    private int paddingTopDefault;
    int textAppearance;
    boolean textAppearanceSet;
    android.content.res.ColorStateList textColor;


    private static class HeaderViewHolder extends android.support.design.internal.NavigationMenuPresenter.ViewHolder {
        public HeaderViewHolder(android.view.View r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    private class NavigationMenuAdapter extends android.support.v7.widget.RecyclerView.Adapter<android.support.design.internal.NavigationMenuPresenter.ViewHolder> {
        private static final java.lang.String STATE_ACTION_VIEWS = "android:menu:action_views";
        private static final java.lang.String STATE_CHECKED_ITEM = "android:menu:checked";
        private static final int VIEW_TYPE_HEADER = 3;
        private static final int VIEW_TYPE_NORMAL = 0;
        private static final int VIEW_TYPE_SEPARATOR = 2;
        private static final int VIEW_TYPE_SUBHEADER = 1;
        private android.support.v7.view.menu.MenuItemImpl checkedItem;
        private final java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter.NavigationMenuItem> items;
        final android.support.design.internal.NavigationMenuPresenter this$0;
        private boolean updateSuspended;

        NavigationMenuAdapter(android.support.design.internal.NavigationMenuPresenter r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.items = r1
                r0.prepareMenuItems()
                return
        }

        private void appendTransparentIconIfMissing(int r3, int r4) {
                r2 = this;
            L0:
                if (r3 >= r4) goto L10
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r0 = r2.items
                java.lang.Object r0 = r0.get(r3)
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuTextItem r0 = (android.support.design.internal.NavigationMenuPresenter.NavigationMenuTextItem) r0
                r1 = 1
                r0.needsEmptyIcon = r1
                int r3 = r3 + 1
                goto L0
            L10:
                return
        }

        private void prepareMenuItems() {
                r16 = this;
                r0 = r16
                boolean r1 = r0.updateSuspended
                if (r1 == 0) goto L7
                return
            L7:
                r1 = 1
                r0.updateSuspended = r1
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r2 = r0.items
                r2.clear()
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r2 = r0.items
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuHeaderItem r3 = new android.support.design.internal.NavigationMenuPresenter$NavigationMenuHeaderItem
                r3.<init>()
                r2.add(r3)
                r2 = -1
                android.support.design.internal.NavigationMenuPresenter r3 = r0.this$0
                android.support.v7.view.menu.MenuBuilder r3 = r3.menu
                java.util.ArrayList r3 = r3.getVisibleItems()
                int r3 = r3.size()
                r4 = 0
                r5 = r4
                r6 = r5
                r7 = r6
            L2a:
                if (r5 >= r3) goto L115
                android.support.design.internal.NavigationMenuPresenter r8 = r0.this$0
                android.support.v7.view.menu.MenuBuilder r8 = r8.menu
                java.util.ArrayList r8 = r8.getVisibleItems()
                java.lang.Object r8 = r8.get(r5)
                android.support.v7.view.menu.MenuItemImpl r8 = (android.support.v7.view.menu.MenuItemImpl) r8
                boolean r9 = r8.isChecked()
                if (r9 == 0) goto L43
                r0.setCheckedItem(r8)
            L43:
                boolean r9 = r8.isCheckable()
                if (r9 == 0) goto L4c
                r8.setExclusiveCheckable(r4)
            L4c:
                boolean r9 = r8.hasSubMenu()
                if (r9 == 0) goto Lc5
                android.view.SubMenu r9 = r8.getSubMenu()
                boolean r10 = r9.hasVisibleItems()
                if (r10 == 0) goto L110
                if (r5 == 0) goto L6c
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r10 = r0.items
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuSeparatorItem r11 = new android.support.design.internal.NavigationMenuPresenter$NavigationMenuSeparatorItem
                android.support.design.internal.NavigationMenuPresenter r12 = r0.this$0
                int r12 = r12.paddingSeparator
                r11.<init>(r12, r4)
                r10.add(r11)
            L6c:
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r10 = r0.items
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuTextItem r11 = new android.support.design.internal.NavigationMenuPresenter$NavigationMenuTextItem
                r11.<init>(r8)
                r10.add(r11)
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r10 = r0.items
                int r10 = r10.size()
                int r11 = r9.size()
                r12 = r4
                r13 = r12
            L82:
                if (r12 >= r11) goto Lb9
                android.view.MenuItem r14 = r9.getItem(r12)
                android.support.v7.view.menu.MenuItemImpl r14 = (android.support.v7.view.menu.MenuItemImpl) r14
                boolean r15 = r14.isVisible()
                if (r15 == 0) goto Lb5
                if (r13 != 0) goto L99
                android.graphics.drawable.Drawable r15 = r14.getIcon()
                if (r15 == 0) goto L99
                r13 = r1
            L99:
                boolean r15 = r14.isCheckable()
                if (r15 == 0) goto La2
                r14.setExclusiveCheckable(r4)
            La2:
                boolean r15 = r8.isChecked()
                if (r15 == 0) goto Lab
                r0.setCheckedItem(r8)
            Lab:
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r15 = r0.items
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuTextItem r1 = new android.support.design.internal.NavigationMenuPresenter$NavigationMenuTextItem
                r1.<init>(r14)
                r15.add(r1)
            Lb5:
                int r12 = r12 + 1
                r1 = 1
                goto L82
            Lb9:
                if (r13 == 0) goto L110
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r1 = r0.items
                int r1 = r1.size()
                r0.appendTransparentIconIfMissing(r10, r1)
                goto L110
            Lc5:
                int r1 = r8.getGroupId()
                if (r1 == r2) goto Lf1
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r2 = r0.items
                int r7 = r2.size()
                android.graphics.drawable.Drawable r2 = r8.getIcon()
                if (r2 == 0) goto Ld9
                r6 = 1
                goto Lda
            Ld9:
                r6 = r4
            Lda:
                if (r5 == 0) goto L103
                int r7 = r7 + 1
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r2 = r0.items
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuSeparatorItem r9 = new android.support.design.internal.NavigationMenuPresenter$NavigationMenuSeparatorItem
                android.support.design.internal.NavigationMenuPresenter r10 = r0.this$0
                int r10 = r10.paddingSeparator
                android.support.design.internal.NavigationMenuPresenter r11 = r0.this$0
                int r11 = r11.paddingSeparator
                r9.<init>(r10, r11)
                r2.add(r9)
                goto L103
            Lf1:
                if (r6 != 0) goto L103
                android.graphics.drawable.Drawable r2 = r8.getIcon()
                if (r2 == 0) goto L103
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r2 = r0.items
                int r2 = r2.size()
                r0.appendTransparentIconIfMissing(r7, r2)
                r6 = 1
            L103:
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuTextItem r2 = new android.support.design.internal.NavigationMenuPresenter$NavigationMenuTextItem
                r2.<init>(r8)
                r2.needsEmptyIcon = r6
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r8 = r0.items
                r8.add(r2)
                r2 = r1
            L110:
                int r5 = r5 + 1
                r1 = 1
                goto L2a
            L115:
                r0.updateSuspended = r4
                return
        }

        public android.os.Bundle createInstanceState() {
                r7 = this;
                android.os.Bundle r0 = new android.os.Bundle
                r0.<init>()
                android.support.v7.view.menu.MenuItemImpl r1 = r7.checkedItem
                if (r1 == 0) goto L12
                int r1 = r1.getItemId()
                java.lang.String r2 = "android:menu:checked"
                r0.putInt(r2, r1)
            L12:
                android.util.SparseArray r1 = new android.util.SparseArray
                r1.<init>()
                r2 = 0
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r3 = r7.items
                int r3 = r3.size()
            L1e:
                if (r2 >= r3) goto L4e
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r4 = r7.items
                java.lang.Object r4 = r4.get(r2)
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem r4 = (android.support.design.internal.NavigationMenuPresenter.NavigationMenuItem) r4
                boolean r5 = r4 instanceof android.support.design.internal.NavigationMenuPresenter.NavigationMenuTextItem
                if (r5 == 0) goto L4b
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuTextItem r4 = (android.support.design.internal.NavigationMenuPresenter.NavigationMenuTextItem) r4
                android.support.v7.view.menu.MenuItemImpl r4 = r4.getMenuItem()
                if (r4 == 0) goto L39
                android.view.View r5 = r4.getActionView()
                goto L3a
            L39:
                r5 = 0
            L3a:
                if (r5 == 0) goto L4b
                android.support.design.internal.ParcelableSparseArray r6 = new android.support.design.internal.ParcelableSparseArray
                r6.<init>()
                r5.saveHierarchyState(r6)
                int r4 = r4.getItemId()
                r1.put(r4, r6)
            L4b:
                int r2 = r2 + 1
                goto L1e
            L4e:
                java.lang.String r2 = "android:menu:action_views"
                r0.putSparseParcelableArray(r2, r1)
                return r0
        }

        public android.support.v7.view.menu.MenuItemImpl getCheckedItem() {
                r1 = this;
                android.support.v7.view.menu.MenuItemImpl r0 = r1.checkedItem
                return r0
        }

        @Override
        public int getItemCount() {
                r1 = this;
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r0 = r1.items
                int r0 = r0.size()
                return r0
        }

        @Override
        public long getItemId(int r3) {
                r2 = this;
                long r0 = (long) r3
                return r0
        }

        @Override
        public int getItemViewType(int r2) {
                r1 = this;
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r0 = r1.items
                java.lang.Object r2 = r0.get(r2)
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem r2 = (android.support.design.internal.NavigationMenuPresenter.NavigationMenuItem) r2
                boolean r0 = r2 instanceof android.support.design.internal.NavigationMenuPresenter.NavigationMenuSeparatorItem
                if (r0 == 0) goto Le
                r2 = 2
                return r2
            Le:
                boolean r0 = r2 instanceof android.support.design.internal.NavigationMenuPresenter.NavigationMenuHeaderItem
                if (r0 == 0) goto L14
                r2 = 3
                return r2
            L14:
                boolean r0 = r2 instanceof android.support.design.internal.NavigationMenuPresenter.NavigationMenuTextItem
                if (r0 == 0) goto L28
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuTextItem r2 = (android.support.design.internal.NavigationMenuPresenter.NavigationMenuTextItem) r2
                android.support.v7.view.menu.MenuItemImpl r2 = r2.getMenuItem()
                boolean r2 = r2.hasSubMenu()
                if (r2 == 0) goto L26
                r2 = 1
                return r2
            L26:
                r2 = 0
                return r2
            L28:
                java.lang.RuntimeException r2 = new java.lang.RuntimeException
                java.lang.String r0 = "Unknown item type."
                r2.<init>(r0)
                throw r2
        }

        public void onBindViewHolder(android.support.design.internal.NavigationMenuPresenter.ViewHolder r4, int r5) {
                r3 = this;
                int r0 = r3.getItemViewType(r5)
                r1 = 0
                if (r0 == 0) goto L3e
                r2 = 1
                if (r0 == r2) goto L26
                r2 = 2
                if (r0 == r2) goto Lf
                goto L9c
            Lf:
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r0 = r3.items
                java.lang.Object r5 = r0.get(r5)
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuSeparatorItem r5 = (android.support.design.internal.NavigationMenuPresenter.NavigationMenuSeparatorItem) r5
                android.view.View r4 = r4.itemView
                int r0 = r5.getPaddingTop()
                int r5 = r5.getPaddingBottom()
                r4.setPadding(r1, r0, r1, r5)
                goto L9c
            L26:
                android.view.View r4 = r4.itemView
                android.widget.TextView r4 = (android.widget.TextView) r4
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r0 = r3.items
                java.lang.Object r5 = r0.get(r5)
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuTextItem r5 = (android.support.design.internal.NavigationMenuPresenter.NavigationMenuTextItem) r5
                android.support.v7.view.menu.MenuItemImpl r5 = r5.getMenuItem()
                java.lang.CharSequence r5 = r5.getTitle()
                r4.setText(r5)
                goto L9c
            L3e:
                android.view.View r4 = r4.itemView
                android.support.design.internal.NavigationMenuItemView r4 = (android.support.design.internal.NavigationMenuItemView) r4
                android.support.design.internal.NavigationMenuPresenter r0 = r3.this$0
                android.content.res.ColorStateList r0 = r0.iconTintList
                r4.setIconTintList(r0)
                android.support.design.internal.NavigationMenuPresenter r0 = r3.this$0
                boolean r0 = r0.textAppearanceSet
                if (r0 == 0) goto L56
                android.support.design.internal.NavigationMenuPresenter r0 = r3.this$0
                int r0 = r0.textAppearance
                r4.setTextAppearance(r0)
            L56:
                android.support.design.internal.NavigationMenuPresenter r0 = r3.this$0
                android.content.res.ColorStateList r0 = r0.textColor
                if (r0 == 0) goto L63
                android.support.design.internal.NavigationMenuPresenter r0 = r3.this$0
                android.content.res.ColorStateList r0 = r0.textColor
                r4.setTextColor(r0)
            L63:
                android.support.design.internal.NavigationMenuPresenter r0 = r3.this$0
                android.graphics.drawable.Drawable r0 = r0.itemBackground
                if (r0 == 0) goto L76
                android.support.design.internal.NavigationMenuPresenter r0 = r3.this$0
                android.graphics.drawable.Drawable r0 = r0.itemBackground
                android.graphics.drawable.Drawable$ConstantState r0 = r0.getConstantState()
                android.graphics.drawable.Drawable r0 = r0.newDrawable()
                goto L77
            L76:
                r0 = 0
            L77:
                android.support.v4.view.ViewCompat.setBackground(r4, r0)
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r0 = r3.items
                java.lang.Object r5 = r0.get(r5)
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuTextItem r5 = (android.support.design.internal.NavigationMenuPresenter.NavigationMenuTextItem) r5
                boolean r0 = r5.needsEmptyIcon
                r4.setNeedsEmptyIcon(r0)
                android.support.design.internal.NavigationMenuPresenter r0 = r3.this$0
                int r0 = r0.itemHorizontalPadding
                r4.setHorizontalPadding(r0)
                android.support.design.internal.NavigationMenuPresenter r0 = r3.this$0
                int r0 = r0.itemIconPadding
                r4.setIconPadding(r0)
                android.support.v7.view.menu.MenuItemImpl r5 = r5.getMenuItem()
                r4.initialize(r5, r1)
            L9c:
                return
        }

        @Override
        public void onBindViewHolder(android.support.v7.widget.RecyclerView.ViewHolder r1, int r2) {
                r0 = this;
                android.support.design.internal.NavigationMenuPresenter$ViewHolder r1 = (android.support.design.internal.NavigationMenuPresenter.ViewHolder) r1
                r0.onBindViewHolder(r1, r2)
                return
        }

        @Override
        public android.support.design.internal.NavigationMenuPresenter.ViewHolder onCreateViewHolder(android.view.ViewGroup r3, int r4) {
                r2 = this;
                if (r4 == 0) goto L2b
                r0 = 1
                if (r4 == r0) goto L21
                r0 = 2
                if (r4 == r0) goto L17
                r3 = 3
                if (r4 == r3) goto Ld
                r3 = 0
                return r3
            Ld:
                android.support.design.internal.NavigationMenuPresenter$HeaderViewHolder r3 = new android.support.design.internal.NavigationMenuPresenter$HeaderViewHolder
                android.support.design.internal.NavigationMenuPresenter r4 = r2.this$0
                android.widget.LinearLayout r4 = r4.headerLayout
                r3.<init>(r4)
                return r3
            L17:
                android.support.design.internal.NavigationMenuPresenter$SeparatorViewHolder r4 = new android.support.design.internal.NavigationMenuPresenter$SeparatorViewHolder
                android.support.design.internal.NavigationMenuPresenter r0 = r2.this$0
                android.view.LayoutInflater r0 = r0.layoutInflater
                r4.<init>(r0, r3)
                return r4
            L21:
                android.support.design.internal.NavigationMenuPresenter$SubheaderViewHolder r4 = new android.support.design.internal.NavigationMenuPresenter$SubheaderViewHolder
                android.support.design.internal.NavigationMenuPresenter r0 = r2.this$0
                android.view.LayoutInflater r0 = r0.layoutInflater
                r4.<init>(r0, r3)
                return r4
            L2b:
                android.support.design.internal.NavigationMenuPresenter$NormalViewHolder r4 = new android.support.design.internal.NavigationMenuPresenter$NormalViewHolder
                android.support.design.internal.NavigationMenuPresenter r0 = r2.this$0
                android.view.LayoutInflater r0 = r0.layoutInflater
                android.support.design.internal.NavigationMenuPresenter r1 = r2.this$0
                android.view.View$OnClickListener r1 = r1.onClickListener
                r4.<init>(r0, r3, r1)
                return r4
        }

        @Override
        public android.support.v7.widget.RecyclerView.ViewHolder onCreateViewHolder(android.view.ViewGroup r1, int r2) {
                r0 = this;
                android.support.design.internal.NavigationMenuPresenter$ViewHolder r1 = r0.onCreateViewHolder(r1, r2)
                return r1
        }

        public void onViewRecycled(android.support.design.internal.NavigationMenuPresenter.ViewHolder r2) {
                r1 = this;
                boolean r0 = r2 instanceof android.support.design.internal.NavigationMenuPresenter.NormalViewHolder
                if (r0 == 0) goto Lb
                android.view.View r2 = r2.itemView
                android.support.design.internal.NavigationMenuItemView r2 = (android.support.design.internal.NavigationMenuItemView) r2
                r2.recycle()
            Lb:
                return
        }

        @Override
        public void onViewRecycled(android.support.v7.widget.RecyclerView.ViewHolder r1) {
                r0 = this;
                android.support.design.internal.NavigationMenuPresenter$ViewHolder r1 = (android.support.design.internal.NavigationMenuPresenter.ViewHolder) r1
                r0.onViewRecycled(r1)
                return
        }

        public void restoreInstanceState(android.os.Bundle r7) {
                r6 = this;
                r0 = 0
                java.lang.String r1 = "android:menu:checked"
                int r1 = r7.getInt(r1, r0)
                if (r1 == 0) goto L3b
                r2 = 1
                r6.updateSuspended = r2
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r2 = r6.items
                int r2 = r2.size()
                r3 = r0
            L13:
                if (r3 >= r2) goto L36
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r4 = r6.items
                java.lang.Object r4 = r4.get(r3)
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem r4 = (android.support.design.internal.NavigationMenuPresenter.NavigationMenuItem) r4
                boolean r5 = r4 instanceof android.support.design.internal.NavigationMenuPresenter.NavigationMenuTextItem
                if (r5 == 0) goto L33
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuTextItem r4 = (android.support.design.internal.NavigationMenuPresenter.NavigationMenuTextItem) r4
                android.support.v7.view.menu.MenuItemImpl r4 = r4.getMenuItem()
                if (r4 == 0) goto L33
                int r5 = r4.getItemId()
                if (r5 != r1) goto L33
                r6.setCheckedItem(r4)
                goto L36
            L33:
                int r3 = r3 + 1
                goto L13
            L36:
                r6.updateSuspended = r0
                r6.prepareMenuItems()
            L3b:
                java.lang.String r1 = "android:menu:action_views"
                android.util.SparseArray r7 = r7.getSparseParcelableArray(r1)
                if (r7 == 0) goto L7b
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r1 = r6.items
                int r1 = r1.size()
            L49:
                if (r0 >= r1) goto L7b
                java.util.ArrayList<android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem> r2 = r6.items
                java.lang.Object r2 = r2.get(r0)
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuItem r2 = (android.support.design.internal.NavigationMenuPresenter.NavigationMenuItem) r2
                boolean r3 = r2 instanceof android.support.design.internal.NavigationMenuPresenter.NavigationMenuTextItem
                if (r3 != 0) goto L58
                goto L78
            L58:
                android.support.design.internal.NavigationMenuPresenter$NavigationMenuTextItem r2 = (android.support.design.internal.NavigationMenuPresenter.NavigationMenuTextItem) r2
                android.support.v7.view.menu.MenuItemImpl r2 = r2.getMenuItem()
                if (r2 != 0) goto L61
                goto L78
            L61:
                android.view.View r3 = r2.getActionView()
                if (r3 != 0) goto L68
                goto L78
            L68:
                int r2 = r2.getItemId()
                java.lang.Object r2 = r7.get(r2)
                android.support.design.internal.ParcelableSparseArray r2 = (android.support.design.internal.ParcelableSparseArray) r2
                if (r2 != 0) goto L75
                goto L78
            L75:
                r3.restoreHierarchyState(r2)
            L78:
                int r0 = r0 + 1
                goto L49
            L7b:
                return
        }

        public void setCheckedItem(android.support.v7.view.menu.MenuItemImpl r3) {
                r2 = this;
                android.support.v7.view.menu.MenuItemImpl r0 = r2.checkedItem
                if (r0 == r3) goto L19
                boolean r0 = r3.isCheckable()
                if (r0 != 0) goto Lb
                goto L19
            Lb:
                android.support.v7.view.menu.MenuItemImpl r0 = r2.checkedItem
                if (r0 == 0) goto L13
                r1 = 0
                r0.setChecked(r1)
            L13:
                r2.checkedItem = r3
                r0 = 1
                r3.setChecked(r0)
            L19:
                return
        }

        public void setUpdateSuspended(boolean r1) {
                r0 = this;
                r0.updateSuspended = r1
                return
        }

        public void update() {
                r0 = this;
                r0.prepareMenuItems()
                r0.notifyDataSetChanged()
                return
        }
    }

    private static class NavigationMenuHeaderItem implements android.support.design.internal.NavigationMenuPresenter.NavigationMenuItem {
        NavigationMenuHeaderItem() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private interface NavigationMenuItem {
    }

    private static class NavigationMenuSeparatorItem implements android.support.design.internal.NavigationMenuPresenter.NavigationMenuItem {
        private final int paddingBottom;
        private final int paddingTop;

        public NavigationMenuSeparatorItem(int r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.paddingTop = r1
                r0.paddingBottom = r2
                return
        }

        public int getPaddingBottom() {
                r1 = this;
                int r0 = r1.paddingBottom
                return r0
        }

        public int getPaddingTop() {
                r1 = this;
                int r0 = r1.paddingTop
                return r0
        }
    }

    private static class NavigationMenuTextItem implements android.support.design.internal.NavigationMenuPresenter.NavigationMenuItem {
        private final android.support.v7.view.menu.MenuItemImpl menuItem;
        boolean needsEmptyIcon;

        NavigationMenuTextItem(android.support.v7.view.menu.MenuItemImpl r1) {
                r0 = this;
                r0.<init>()
                r0.menuItem = r1
                return
        }

        public android.support.v7.view.menu.MenuItemImpl getMenuItem() {
                r1 = this;
                android.support.v7.view.menu.MenuItemImpl r0 = r1.menuItem
                return r0
        }
    }

    private static class NormalViewHolder extends android.support.design.internal.NavigationMenuPresenter.ViewHolder {
        public NormalViewHolder(android.view.LayoutInflater r3, android.view.ViewGroup r4, android.view.View.OnClickListener r5) {
                r2 = this;
                int r0 = android.support.design.R.layout.design_navigation_item
                r1 = 0
                android.view.View r3 = r3.inflate(r0, r4, r1)
                r2.<init>(r3)
                android.view.View r3 = r2.itemView
                r3.setOnClickListener(r5)
                return
        }
    }

    private static class SeparatorViewHolder extends android.support.design.internal.NavigationMenuPresenter.ViewHolder {
        public SeparatorViewHolder(android.view.LayoutInflater r3, android.view.ViewGroup r4) {
                r2 = this;
                int r0 = android.support.design.R.layout.design_navigation_item_separator
                r1 = 0
                android.view.View r3 = r3.inflate(r0, r4, r1)
                r2.<init>(r3)
                return
        }
    }

    private static class SubheaderViewHolder extends android.support.design.internal.NavigationMenuPresenter.ViewHolder {
        public SubheaderViewHolder(android.view.LayoutInflater r3, android.view.ViewGroup r4) {
                r2 = this;
                int r0 = android.support.design.R.layout.design_navigation_item_subheader
                r1 = 0
                android.view.View r3 = r3.inflate(r0, r4, r1)
                r2.<init>(r3)
                return
        }
    }

    private static abstract class ViewHolder extends android.support.v7.widget.RecyclerView.ViewHolder {
        public ViewHolder(android.view.View r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public NavigationMenuPresenter() {
            r1 = this;
            r1.<init>()
            android.support.design.internal.NavigationMenuPresenter$1 r0 = new android.support.design.internal.NavigationMenuPresenter$1
            r0.<init>(r1)
            r1.onClickListener = r0
            return
    }

    public void addHeaderView(android.view.View r3) {
            r2 = this;
            android.widget.LinearLayout r0 = r2.headerLayout
            r0.addView(r3)
            android.support.design.internal.NavigationMenuView r3 = r2.menuView
            int r0 = r3.getPaddingBottom()
            r1 = 0
            r3.setPadding(r1, r1, r1, r0)
            return
    }

    @Override
    public boolean collapseItemActionView(android.support.v7.view.menu.MenuBuilder r1, android.support.v7.view.menu.MenuItemImpl r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    public void dispatchApplyWindowInsets(android.support.v4.view.WindowInsetsCompat r5) {
            r4 = this;
            int r0 = r5.getSystemWindowInsetTop()
            int r1 = r4.paddingTopDefault
            if (r1 == r0) goto L1e
            r4.paddingTopDefault = r0
            android.widget.LinearLayout r0 = r4.headerLayout
            int r0 = r0.getChildCount()
            if (r0 != 0) goto L1e
            android.support.design.internal.NavigationMenuView r0 = r4.menuView
            int r1 = r4.paddingTopDefault
            int r2 = r0.getPaddingBottom()
            r3 = 0
            r0.setPadding(r3, r1, r3, r2)
        L1e:
            android.widget.LinearLayout r0 = r4.headerLayout
            android.support.v4.view.ViewCompat.dispatchApplyWindowInsets(r0, r5)
            return
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

    public android.support.v7.view.menu.MenuItemImpl getCheckedItem() {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter$NavigationMenuAdapter r0 = r1.adapter
            android.support.v7.view.menu.MenuItemImpl r0 = r0.getCheckedItem()
            return r0
    }

    public int getHeaderCount() {
            r1 = this;
            android.widget.LinearLayout r0 = r1.headerLayout
            int r0 = r0.getChildCount()
            return r0
    }

    public android.view.View getHeaderView(int r2) {
            r1 = this;
            android.widget.LinearLayout r0 = r1.headerLayout
            android.view.View r2 = r0.getChildAt(r2)
            return r2
    }

    @Override
    public int getId() {
            r1 = this;
            int r0 = r1.id
            return r0
    }

    public android.graphics.drawable.Drawable getItemBackground() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.itemBackground
            return r0
    }

    public int getItemHorizontalPadding() {
            r1 = this;
            int r0 = r1.itemHorizontalPadding
            return r0
    }

    public int getItemIconPadding() {
            r1 = this;
            int r0 = r1.itemIconPadding
            return r0
    }

    public android.content.res.ColorStateList getItemTextColor() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.textColor
            return r0
    }

    public android.content.res.ColorStateList getItemTintList() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.iconTintList
            return r0
    }

    @Override
    public android.support.v7.view.menu.MenuView getMenuView(android.view.ViewGroup r4) {
            r3 = this;
            android.support.design.internal.NavigationMenuView r0 = r3.menuView
            if (r0 != 0) goto L31
            android.view.LayoutInflater r0 = r3.layoutInflater
            int r1 = android.support.design.R.layout.design_navigation_menu
            r2 = 0
            android.view.View r4 = r0.inflate(r1, r4, r2)
            android.support.design.internal.NavigationMenuView r4 = (android.support.design.internal.NavigationMenuView) r4
            r3.menuView = r4
            android.support.design.internal.NavigationMenuPresenter$NavigationMenuAdapter r4 = r3.adapter
            if (r4 != 0) goto L1c
            android.support.design.internal.NavigationMenuPresenter$NavigationMenuAdapter r4 = new android.support.design.internal.NavigationMenuPresenter$NavigationMenuAdapter
            r4.<init>(r3)
            r3.adapter = r4
        L1c:
            android.view.LayoutInflater r4 = r3.layoutInflater
            int r0 = android.support.design.R.layout.design_navigation_item_header
            android.support.design.internal.NavigationMenuView r1 = r3.menuView
            android.view.View r4 = r4.inflate(r0, r1, r2)
            android.widget.LinearLayout r4 = (android.widget.LinearLayout) r4
            r3.headerLayout = r4
            android.support.design.internal.NavigationMenuView r4 = r3.menuView
            android.support.design.internal.NavigationMenuPresenter$NavigationMenuAdapter r0 = r3.adapter
            r4.setAdapter(r0)
        L31:
            android.support.design.internal.NavigationMenuView r4 = r3.menuView
            return r4
    }

    public android.view.View inflateHeaderView(int r4) {
            r3 = this;
            android.view.LayoutInflater r0 = r3.layoutInflater
            android.widget.LinearLayout r1 = r3.headerLayout
            r2 = 0
            android.view.View r4 = r0.inflate(r4, r1, r2)
            r3.addHeaderView(r4)
            return r4
    }

    @Override
    public void initForMenu(android.content.Context r2, android.support.v7.view.menu.MenuBuilder r3) {
            r1 = this;
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r2)
            r1.layoutInflater = r0
            r1.menu = r3
            android.content.res.Resources r2 = r2.getResources()
            int r3 = android.support.design.R.dimen.design_navigation_separator_vertical_padding
            int r2 = r2.getDimensionPixelOffset(r3)
            r1.paddingSeparator = r2
            return
    }

    @Override
    public void onCloseMenu(android.support.v7.view.menu.MenuBuilder r2, boolean r3) {
            r1 = this;
            android.support.v7.view.menu.MenuPresenter$Callback r0 = r1.callback
            if (r0 == 0) goto L7
            r0.onCloseMenu(r2, r3)
        L7:
            return
    }

    @Override
    public void onRestoreInstanceState(android.os.Parcelable r3) {
            r2 = this;
            boolean r0 = r3 instanceof android.os.Bundle
            if (r0 == 0) goto L2d
            android.os.Bundle r3 = (android.os.Bundle) r3
            java.lang.String r0 = "android:menu:list"
            android.util.SparseArray r0 = r3.getSparseParcelableArray(r0)
            if (r0 == 0) goto L13
            android.support.design.internal.NavigationMenuView r1 = r2.menuView
            r1.restoreHierarchyState(r0)
        L13:
            java.lang.String r0 = "android:menu:adapter"
            android.os.Bundle r0 = r3.getBundle(r0)
            if (r0 == 0) goto L20
            android.support.design.internal.NavigationMenuPresenter$NavigationMenuAdapter r1 = r2.adapter
            r1.restoreInstanceState(r0)
        L20:
            java.lang.String r0 = "android:menu:header"
            android.util.SparseArray r3 = r3.getSparseParcelableArray(r0)
            if (r3 == 0) goto L2d
            android.widget.LinearLayout r0 = r2.headerLayout
            r0.restoreHierarchyState(r3)
        L2d:
            return
    }

    @Override
    public android.os.Parcelable onSaveInstanceState() {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            android.support.design.internal.NavigationMenuView r1 = r3.menuView
            if (r1 == 0) goto L18
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            android.support.design.internal.NavigationMenuView r2 = r3.menuView
            r2.saveHierarchyState(r1)
            java.lang.String r2 = "android:menu:list"
            r0.putSparseParcelableArray(r2, r1)
        L18:
            android.support.design.internal.NavigationMenuPresenter$NavigationMenuAdapter r1 = r3.adapter
            if (r1 == 0) goto L25
            android.os.Bundle r1 = r1.createInstanceState()
            java.lang.String r2 = "android:menu:adapter"
            r0.putBundle(r2, r1)
        L25:
            android.widget.LinearLayout r1 = r3.headerLayout
            if (r1 == 0) goto L38
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            android.widget.LinearLayout r2 = r3.headerLayout
            r2.saveHierarchyState(r1)
            java.lang.String r2 = "android:menu:header"
            r0.putSparseParcelableArray(r2, r1)
        L38:
            return r0
    }

    @Override
    public boolean onSubMenuSelected(android.support.v7.view.menu.SubMenuBuilder r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    public void removeHeaderView(android.view.View r4) {
            r3 = this;
            android.widget.LinearLayout r0 = r3.headerLayout
            r0.removeView(r4)
            android.widget.LinearLayout r4 = r3.headerLayout
            int r4 = r4.getChildCount()
            if (r4 != 0) goto L19
            android.support.design.internal.NavigationMenuView r4 = r3.menuView
            int r0 = r3.paddingTopDefault
            int r1 = r4.getPaddingBottom()
            r2 = 0
            r4.setPadding(r2, r0, r2, r1)
        L19:
            return
    }

    @Override
    public void setCallback(android.support.v7.view.menu.MenuPresenter.Callback r1) {
            r0 = this;
            r0.callback = r1
            return
    }

    public void setCheckedItem(android.support.v7.view.menu.MenuItemImpl r2) {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter$NavigationMenuAdapter r0 = r1.adapter
            r0.setCheckedItem(r2)
            return
    }

    public void setId(int r1) {
            r0 = this;
            r0.id = r1
            return
    }

    public void setItemBackground(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.itemBackground = r1
            r1 = 0
            r0.updateMenuView(r1)
            return
    }

    public void setItemHorizontalPadding(int r1) {
            r0 = this;
            r0.itemHorizontalPadding = r1
            r1 = 0
            r0.updateMenuView(r1)
            return
    }

    public void setItemIconPadding(int r1) {
            r0 = this;
            r0.itemIconPadding = r1
            r1 = 0
            r0.updateMenuView(r1)
            return
    }

    public void setItemIconTintList(android.content.res.ColorStateList r1) {
            r0 = this;
            r0.iconTintList = r1
            r1 = 0
            r0.updateMenuView(r1)
            return
    }

    public void setItemTextAppearance(int r1) {
            r0 = this;
            r0.textAppearance = r1
            r1 = 1
            r0.textAppearanceSet = r1
            r1 = 0
            r0.updateMenuView(r1)
            return
    }

    public void setItemTextColor(android.content.res.ColorStateList r1) {
            r0 = this;
            r0.textColor = r1
            r1 = 0
            r0.updateMenuView(r1)
            return
    }

    public void setUpdateSuspended(boolean r2) {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter$NavigationMenuAdapter r0 = r1.adapter
            if (r0 == 0) goto L7
            r0.setUpdateSuspended(r2)
        L7:
            return
    }

    @Override
    public void updateMenuView(boolean r1) {
            r0 = this;
            android.support.design.internal.NavigationMenuPresenter$NavigationMenuAdapter r1 = r0.adapter
            if (r1 == 0) goto L7
            r1.update()
        L7:
            return
    }
}
