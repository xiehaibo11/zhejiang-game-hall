package android.support.v7.widget;

class ActionMenuPresenter extends android.support.v7.view.menu.BaseMenuPresenter implements android.support.v4.view.ActionProvider.SubUiVisibilityListener {
    private static final java.lang.String TAG = "ActionMenuPresenter";
    private final android.util.SparseBooleanArray mActionButtonGroups;
    android.support.v7.widget.ActionMenuPresenter.ActionButtonSubmenu mActionButtonPopup;
    private int mActionItemWidthLimit;
    private boolean mExpandedActionViewsExclusive;
    private int mMaxItems;
    private boolean mMaxItemsSet;
    private int mMinCellSize;
    int mOpenSubMenuId;
    android.support.v7.widget.ActionMenuPresenter.OverflowMenuButton mOverflowButton;
    android.support.v7.widget.ActionMenuPresenter.OverflowPopup mOverflowPopup;
    private android.graphics.drawable.Drawable mPendingOverflowIcon;
    private boolean mPendingOverflowIconSet;
    private android.support.v7.widget.ActionMenuPresenter.ActionMenuPopupCallback mPopupCallback;
    final android.support.v7.widget.ActionMenuPresenter.PopupPresenterCallback mPopupPresenterCallback;
    android.support.v7.widget.ActionMenuPresenter.OpenOverflowRunnable mPostedOpenRunnable;
    private boolean mReserveOverflow;
    private boolean mReserveOverflowSet;
    private android.view.View mScrapActionButtonView;
    private boolean mStrictWidthLimit;
    private int mWidthLimit;
    private boolean mWidthLimitSet;

    private class ActionButtonSubmenu extends android.support.v7.view.menu.MenuPopupHelper {
        final android.support.v7.widget.ActionMenuPresenter this$0;

        public ActionButtonSubmenu(android.support.v7.widget.ActionMenuPresenter r7, android.content.Context r8, android.support.v7.view.menu.SubMenuBuilder r9, android.view.View r10) {
                r6 = this;
                r6.this$0 = r7
                int r5 = android.support.v7.appcompat.R.attr.actionOverflowMenuStyle
                r4 = 0
                r0 = r6
                r1 = r8
                r2 = r9
                r3 = r10
                r0.<init>(r1, r2, r3, r4, r5)
                android.view.MenuItem r8 = r9.getItem()
                android.support.v7.view.menu.MenuItemImpl r8 = (android.support.v7.view.menu.MenuItemImpl) r8
                boolean r8 = r8.isActionButton()
                if (r8 != 0) goto L28
                android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r8 = r7.mOverflowButton
                if (r8 != 0) goto L23
                android.support.v7.view.menu.MenuView r8 = android.support.v7.widget.ActionMenuPresenter.access$200(r7)
                android.view.View r8 = (android.view.View) r8
                goto L25
            L23:
                android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r8 = r7.mOverflowButton
            L25:
                r6.setAnchorView(r8)
            L28:
                android.support.v7.widget.ActionMenuPresenter$PopupPresenterCallback r7 = r7.mPopupPresenterCallback
                r6.setPresenterCallback(r7)
                return
        }

        @Override
        protected void onDismiss() {
                r2 = this;
                android.support.v7.widget.ActionMenuPresenter r0 = r2.this$0
                r1 = 0
                r0.mActionButtonPopup = r1
                r1 = 0
                r0.mOpenSubMenuId = r1
                super.onDismiss()
                return
        }
    }

    private class ActionMenuPopupCallback extends android.support.v7.view.menu.ActionMenuItemView.PopupCallback {
        final android.support.v7.widget.ActionMenuPresenter this$0;

        ActionMenuPopupCallback(android.support.v7.widget.ActionMenuPresenter r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public android.support.v7.view.menu.ShowableListMenu getPopup() {
                r1 = this;
                android.support.v7.widget.ActionMenuPresenter r0 = r1.this$0
                android.support.v7.widget.ActionMenuPresenter$ActionButtonSubmenu r0 = r0.mActionButtonPopup
                if (r0 == 0) goto Lf
                android.support.v7.widget.ActionMenuPresenter r0 = r1.this$0
                android.support.v7.widget.ActionMenuPresenter$ActionButtonSubmenu r0 = r0.mActionButtonPopup
                android.support.v7.view.menu.MenuPopup r0 = r0.getPopup()
                goto L10
            Lf:
                r0 = 0
            L10:
                return r0
        }
    }

    private class OpenOverflowRunnable implements java.lang.Runnable {
        private android.support.v7.widget.ActionMenuPresenter.OverflowPopup mPopup;
        final android.support.v7.widget.ActionMenuPresenter this$0;

        public OpenOverflowRunnable(android.support.v7.widget.ActionMenuPresenter r1, android.support.v7.widget.ActionMenuPresenter.OverflowPopup r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.mPopup = r2
                return
        }

        @Override
        public void run() {
                r2 = this;
                android.support.v7.widget.ActionMenuPresenter r0 = r2.this$0
                android.support.v7.view.menu.MenuBuilder r0 = android.support.v7.widget.ActionMenuPresenter.access$300(r0)
                if (r0 == 0) goto L11
                android.support.v7.widget.ActionMenuPresenter r0 = r2.this$0
                android.support.v7.view.menu.MenuBuilder r0 = android.support.v7.widget.ActionMenuPresenter.access$400(r0)
                r0.changeMenuMode()
            L11:
                android.support.v7.widget.ActionMenuPresenter r0 = r2.this$0
                android.support.v7.view.menu.MenuView r0 = android.support.v7.widget.ActionMenuPresenter.access$500(r0)
                android.view.View r0 = (android.view.View) r0
                if (r0 == 0) goto L2f
                android.os.IBinder r0 = r0.getWindowToken()
                if (r0 == 0) goto L2f
                android.support.v7.widget.ActionMenuPresenter$OverflowPopup r0 = r2.mPopup
                boolean r0 = r0.tryShow()
                if (r0 == 0) goto L2f
                android.support.v7.widget.ActionMenuPresenter r0 = r2.this$0
                android.support.v7.widget.ActionMenuPresenter$OverflowPopup r1 = r2.mPopup
                r0.mOverflowPopup = r1
            L2f:
                android.support.v7.widget.ActionMenuPresenter r0 = r2.this$0
                r1 = 0
                r0.mPostedOpenRunnable = r1
                return
        }
    }

    private class OverflowMenuButton extends android.support.v7.widget.AppCompatImageView implements android.support.v7.widget.ActionMenuView.ActionMenuChildView {
        private final float[] mTempPts;
        final android.support.v7.widget.ActionMenuPresenter this$0;


        public OverflowMenuButton(android.support.v7.widget.ActionMenuPresenter r3, android.content.Context r4) {
                r2 = this;
                r2.this$0 = r3
                int r0 = android.support.v7.appcompat.R.attr.actionOverflowButtonStyle
                r1 = 0
                r2.<init>(r4, r1, r0)
                r4 = 2
                float[] r4 = new float[r4]
                r2.mTempPts = r4
                r4 = 1
                r2.setClickable(r4)
                r2.setFocusable(r4)
                r0 = 0
                r2.setVisibility(r0)
                r2.setEnabled(r4)
                java.lang.CharSequence r4 = r2.getContentDescription()
                android.support.v7.widget.TooltipCompat.setTooltipText(r2, r4)
                android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton$1 r4 = new android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton$1
                r4.<init>(r2, r2, r3)
                r2.setOnTouchListener(r4)
                return
        }

        @Override
        public boolean needsDividerAfter() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public boolean needsDividerBefore() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public boolean performClick() {
                r2 = this;
                boolean r0 = super.performClick()
                r1 = 1
                if (r0 == 0) goto L8
                return r1
            L8:
                r0 = 0
                r2.playSoundEffect(r0)
                android.support.v7.widget.ActionMenuPresenter r0 = r2.this$0
                r0.showOverflowMenu()
                return r1
        }

        @Override
        protected boolean setFrame(int r5, int r6, int r7, int r8) {
                r4 = this;
                boolean r5 = super.setFrame(r5, r6, r7, r8)
                android.graphics.drawable.Drawable r6 = r4.getDrawable()
                android.graphics.drawable.Drawable r7 = r4.getBackground()
                if (r6 == 0) goto L3f
                if (r7 == 0) goto L3f
                int r6 = r4.getWidth()
                int r8 = r4.getHeight()
                int r0 = java.lang.Math.max(r6, r8)
                int r0 = r0 / 2
                int r1 = r4.getPaddingLeft()
                int r2 = r4.getPaddingRight()
                int r1 = r1 - r2
                int r2 = r4.getPaddingTop()
                int r3 = r4.getPaddingBottom()
                int r2 = r2 - r3
                int r6 = r6 + r1
                int r6 = r6 / 2
                int r8 = r8 + r2
                int r8 = r8 / 2
                int r1 = r6 - r0
                int r2 = r8 - r0
                int r6 = r6 + r0
                int r8 = r8 + r0
                android.support.v4.graphics.drawable.DrawableCompat.setHotspotBounds(r7, r1, r2, r6, r8)
            L3f:
                return r5
        }
    }

    private class OverflowPopup extends android.support.v7.view.menu.MenuPopupHelper {
        final android.support.v7.widget.ActionMenuPresenter this$0;

        public OverflowPopup(android.support.v7.widget.ActionMenuPresenter r7, android.content.Context r8, android.support.v7.view.menu.MenuBuilder r9, android.view.View r10, boolean r11) {
                r6 = this;
                r6.this$0 = r7
                int r5 = android.support.v7.appcompat.R.attr.actionOverflowMenuStyle
                r0 = r6
                r1 = r8
                r2 = r9
                r3 = r10
                r4 = r11
                r0.<init>(r1, r2, r3, r4, r5)
                r8 = 8388613(0x800005, float:1.175495E-38)
                r6.setGravity(r8)
                android.support.v7.widget.ActionMenuPresenter$PopupPresenterCallback r7 = r7.mPopupPresenterCallback
                r6.setPresenterCallback(r7)
                return
        }

        @Override
        protected void onDismiss() {
                r2 = this;
                android.support.v7.widget.ActionMenuPresenter r0 = r2.this$0
                android.support.v7.view.menu.MenuBuilder r0 = android.support.v7.widget.ActionMenuPresenter.access$000(r0)
                if (r0 == 0) goto L11
                android.support.v7.widget.ActionMenuPresenter r0 = r2.this$0
                android.support.v7.view.menu.MenuBuilder r0 = android.support.v7.widget.ActionMenuPresenter.access$100(r0)
                r0.close()
            L11:
                android.support.v7.widget.ActionMenuPresenter r0 = r2.this$0
                r1 = 0
                r0.mOverflowPopup = r1
                super.onDismiss()
                return
        }
    }

    private class PopupPresenterCallback implements android.support.v7.view.menu.MenuPresenter.Callback {
        final android.support.v7.widget.ActionMenuPresenter this$0;

        PopupPresenterCallback(android.support.v7.widget.ActionMenuPresenter r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void onCloseMenu(android.support.v7.view.menu.MenuBuilder r3, boolean r4) {
                r2 = this;
                boolean r0 = r3 instanceof android.support.v7.view.menu.SubMenuBuilder
                if (r0 == 0) goto Lc
                android.support.v7.view.menu.MenuBuilder r0 = r3.getRootMenu()
                r1 = 0
                r0.close(r1)
            Lc:
                android.support.v7.widget.ActionMenuPresenter r0 = r2.this$0
                android.support.v7.view.menu.MenuPresenter$Callback r0 = r0.getCallback()
                if (r0 == 0) goto L17
                r0.onCloseMenu(r3, r4)
            L17:
                return
        }

        @Override
        public boolean onOpenSubMenu(android.support.v7.view.menu.MenuBuilder r4) {
                r3 = this;
                r0 = 0
                if (r4 != 0) goto L4
                return r0
            L4:
                android.support.v7.widget.ActionMenuPresenter r1 = r3.this$0
                r2 = r4
                android.support.v7.view.menu.SubMenuBuilder r2 = (android.support.v7.view.menu.SubMenuBuilder) r2
                android.view.MenuItem r2 = r2.getItem()
                int r2 = r2.getItemId()
                r1.mOpenSubMenuId = r2
                android.support.v7.widget.ActionMenuPresenter r1 = r3.this$0
                android.support.v7.view.menu.MenuPresenter$Callback r1 = r1.getCallback()
                if (r1 == 0) goto L1f
                boolean r0 = r1.onOpenSubMenu(r4)
            L1f:
                return r0
        }
    }

    private static class SavedState implements android.os.Parcelable {
        public static final android.os.Parcelable.Creator<android.support.v7.widget.ActionMenuPresenter.SavedState> CREATOR = null;
        public int openSubMenuId;


        static {
                android.support.v7.widget.ActionMenuPresenter$SavedState$1 r0 = new android.support.v7.widget.ActionMenuPresenter$SavedState$1
                r0.<init>()
                android.support.v7.widget.ActionMenuPresenter.SavedState.CREATOR = r0
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
                r0.openSubMenuId = r1
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
                int r2 = r0.openSubMenuId
                r1.writeInt(r2)
                return
        }
    }

    public ActionMenuPresenter(android.content.Context r3) {
            r2 = this;
            int r0 = android.support.v7.appcompat.R.layout.abc_action_menu_layout
            int r1 = android.support.v7.appcompat.R.layout.abc_action_menu_item_layout
            r2.<init>(r3, r0, r1)
            android.util.SparseBooleanArray r3 = new android.util.SparseBooleanArray
            r3.<init>()
            r2.mActionButtonGroups = r3
            android.support.v7.widget.ActionMenuPresenter$PopupPresenterCallback r3 = new android.support.v7.widget.ActionMenuPresenter$PopupPresenterCallback
            r3.<init>(r2)
            r2.mPopupPresenterCallback = r3
            return
    }

    static android.support.v7.view.menu.MenuBuilder access$000(android.support.v7.widget.ActionMenuPresenter r0) {
            android.support.v7.view.menu.MenuBuilder r0 = r0.mMenu
            return r0
    }

    static android.support.v7.view.menu.MenuBuilder access$100(android.support.v7.widget.ActionMenuPresenter r0) {
            android.support.v7.view.menu.MenuBuilder r0 = r0.mMenu
            return r0
    }

    static android.support.v7.view.menu.MenuView access$200(android.support.v7.widget.ActionMenuPresenter r0) {
            android.support.v7.view.menu.MenuView r0 = r0.mMenuView
            return r0
    }

    static android.support.v7.view.menu.MenuBuilder access$300(android.support.v7.widget.ActionMenuPresenter r0) {
            android.support.v7.view.menu.MenuBuilder r0 = r0.mMenu
            return r0
    }

    static android.support.v7.view.menu.MenuBuilder access$400(android.support.v7.widget.ActionMenuPresenter r0) {
            android.support.v7.view.menu.MenuBuilder r0 = r0.mMenu
            return r0
    }

    static android.support.v7.view.menu.MenuView access$500(android.support.v7.widget.ActionMenuPresenter r0) {
            android.support.v7.view.menu.MenuView r0 = r0.mMenuView
            return r0
    }

    private android.view.View findViewForItem(android.view.MenuItem r7) {
            r6 = this;
            android.support.v7.view.menu.MenuView r0 = r6.mMenuView
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            int r2 = r0.getChildCount()
            r3 = 0
        Ld:
            if (r3 >= r2) goto L24
            android.view.View r4 = r0.getChildAt(r3)
            boolean r5 = r4 instanceof android.support.v7.view.menu.MenuView.ItemView
            if (r5 == 0) goto L21
            r5 = r4
            android.support.v7.view.menu.MenuView$ItemView r5 = (android.support.v7.view.menu.MenuView.ItemView) r5
            android.support.v7.view.menu.MenuItemImpl r5 = r5.getItemData()
            if (r5 != r7) goto L21
            return r4
        L21:
            int r3 = r3 + 1
            goto Ld
        L24:
            return r1
    }

    @Override
    public void bindItemView(android.support.v7.view.menu.MenuItemImpl r2, android.support.v7.view.menu.MenuView.ItemView r3) {
            r1 = this;
            r0 = 0
            r3.initialize(r2, r0)
            android.support.v7.view.menu.MenuView r2 = r1.mMenuView
            android.support.v7.widget.ActionMenuView r2 = (android.support.v7.widget.ActionMenuView) r2
            android.support.v7.view.menu.ActionMenuItemView r3 = (android.support.v7.view.menu.ActionMenuItemView) r3
            r3.setItemInvoker(r2)
            android.support.v7.widget.ActionMenuPresenter$ActionMenuPopupCallback r2 = r1.mPopupCallback
            if (r2 != 0) goto L18
            android.support.v7.widget.ActionMenuPresenter$ActionMenuPopupCallback r2 = new android.support.v7.widget.ActionMenuPresenter$ActionMenuPopupCallback
            r2.<init>(r1)
            r1.mPopupCallback = r2
        L18:
            android.support.v7.widget.ActionMenuPresenter$ActionMenuPopupCallback r2 = r1.mPopupCallback
            r3.setPopupCallback(r2)
            return
    }

    public boolean dismissPopupMenus() {
            r2 = this;
            boolean r0 = r2.hideOverflowMenu()
            boolean r1 = r2.hideSubMenus()
            r0 = r0 | r1
            return r0
    }

    @Override
    public boolean filterLeftoverView(android.view.ViewGroup r3, int r4) {
            r2 = this;
            android.view.View r0 = r3.getChildAt(r4)
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r1 = r2.mOverflowButton
            if (r0 != r1) goto La
            r3 = 0
            return r3
        La:
            boolean r3 = super.filterLeftoverView(r3, r4)
            return r3
    }

    @Override
    public boolean flagActionItems() {
            r19 = this;
            r0 = r19
            android.support.v7.view.menu.MenuBuilder r1 = r0.mMenu
            r2 = 0
            if (r1 == 0) goto L12
            android.support.v7.view.menu.MenuBuilder r1 = r0.mMenu
            java.util.ArrayList r1 = r1.getVisibleItems()
            int r3 = r1.size()
            goto L14
        L12:
            r1 = 0
            r3 = 0
        L14:
            int r4 = r0.mMaxItems
            int r5 = r0.mActionItemWidthLimit
            int r6 = android.view.View.MeasureSpec.makeMeasureSpec(r2, r2)
            android.support.v7.view.menu.MenuView r7 = r0.mMenuView
            android.view.ViewGroup r7 = (android.view.ViewGroup) r7
            r11 = r4
            r4 = 0
            r8 = 0
            r9 = 0
            r10 = 0
        L25:
            if (r4 >= r3) goto L4e
            java.lang.Object r13 = r1.get(r4)
            android.support.v7.view.menu.MenuItemImpl r13 = (android.support.v7.view.menu.MenuItemImpl) r13
            boolean r14 = r13.requiresActionButton()
            if (r14 == 0) goto L36
            int r9 = r9 + 1
            goto L40
        L36:
            boolean r14 = r13.requestsActionButton()
            if (r14 == 0) goto L3f
            int r10 = r10 + 1
            goto L40
        L3f:
            r8 = 1
        L40:
            boolean r12 = r0.mExpandedActionViewsExclusive
            if (r12 == 0) goto L4b
            boolean r12 = r13.isActionViewExpanded()
            if (r12 == 0) goto L4b
            r11 = 0
        L4b:
            int r4 = r4 + 1
            goto L25
        L4e:
            boolean r4 = r0.mReserveOverflow
            if (r4 == 0) goto L59
            if (r8 != 0) goto L57
            int r10 = r10 + r9
            if (r10 <= r11) goto L59
        L57:
            int r11 = r11 + (-1)
        L59:
            int r11 = r11 - r9
            android.util.SparseBooleanArray r4 = r0.mActionButtonGroups
            r4.clear()
            boolean r8 = r0.mStrictWidthLimit
            if (r8 == 0) goto L6c
            int r8 = r0.mMinCellSize
            int r9 = r5 / r8
            int r10 = r5 % r8
            int r10 = r10 / r9
            int r8 = r8 + r10
            goto L6e
        L6c:
            r8 = 0
            r9 = 0
        L6e:
            r10 = r5
            r5 = 0
            r13 = 0
        L71:
            if (r5 >= r3) goto L15c
            java.lang.Object r14 = r1.get(r5)
            android.support.v7.view.menu.MenuItemImpl r14 = (android.support.v7.view.menu.MenuItemImpl) r14
            boolean r15 = r14.requiresActionButton()
            if (r15 == 0) goto Lb6
            android.view.View r15 = r0.mScrapActionButtonView
            android.view.View r15 = r0.getItemView(r14, r15, r7)
            android.view.View r12 = r0.mScrapActionButtonView
            if (r12 != 0) goto L8b
            r0.mScrapActionButtonView = r15
        L8b:
            boolean r12 = r0.mStrictWidthLimit
            if (r12 == 0) goto L95
            int r12 = android.support.v7.widget.ActionMenuView.measureChildForCells(r15, r8, r9, r6, r2)
            int r9 = r9 - r12
            goto L98
        L95:
            r15.measure(r6, r6)
        L98:
            int r12 = r15.getMeasuredWidth()
            int r10 = r10 - r12
            if (r13 != 0) goto La0
            goto La1
        La0:
            r12 = r13
        La1:
            int r13 = r14.getGroupId()
            if (r13 == 0) goto Lac
            r15 = 1
            r4.put(r13, r15)
            goto Lad
        Lac:
            r15 = 1
        Lad:
            r14.setIsActionButton(r15)
            r17 = r3
            r13 = r12
        Lb3:
            r0 = 0
            goto L153
        Lb6:
            boolean r12 = r14.requestsActionButton()
            if (r12 == 0) goto L14d
            int r12 = r14.getGroupId()
            boolean r15 = r4.get(r12)
            if (r11 > 0) goto Lc8
            if (r15 == 0) goto Ld2
        Lc8:
            if (r10 <= 0) goto Ld2
            boolean r2 = r0.mStrictWidthLimit
            if (r2 == 0) goto Ld0
            if (r9 <= 0) goto Ld2
        Ld0:
            r2 = 1
            goto Ld3
        Ld2:
            r2 = 0
        Ld3:
            if (r2 == 0) goto L111
            r16 = r2
            android.view.View r2 = r0.mScrapActionButtonView
            android.view.View r2 = r0.getItemView(r14, r2, r7)
            r17 = r3
            android.view.View r3 = r0.mScrapActionButtonView
            if (r3 != 0) goto Le5
            r0.mScrapActionButtonView = r2
        Le5:
            boolean r3 = r0.mStrictWidthLimit
            if (r3 == 0) goto Lf5
            r3 = 0
            int r18 = android.support.v7.widget.ActionMenuView.measureChildForCells(r2, r8, r9, r6, r3)
            int r9 = r9 - r18
            if (r18 != 0) goto Lf8
            r16 = 0
            goto Lf8
        Lf5:
            r2.measure(r6, r6)
        Lf8:
            int r2 = r2.getMeasuredWidth()
            int r10 = r10 - r2
            if (r13 != 0) goto L100
            r13 = r2
        L100:
            boolean r2 = r0.mStrictWidthLimit
            if (r2 == 0) goto L107
            if (r10 < 0) goto L10d
            goto L10b
        L107:
            int r2 = r10 + r13
            if (r2 <= 0) goto L10d
        L10b:
            r2 = 1
            goto L10e
        L10d:
            r2 = 0
        L10e:
            r2 = r16 & r2
            goto L115
        L111:
            r16 = r2
            r17 = r3
        L115:
            if (r2 == 0) goto L11e
            if (r12 == 0) goto L11e
            r3 = 1
            r4.put(r12, r3)
            goto L144
        L11e:
            if (r15 == 0) goto L144
            r3 = 0
            r4.put(r12, r3)
            r3 = 0
        L125:
            if (r3 >= r5) goto L144
            java.lang.Object r15 = r1.get(r3)
            android.support.v7.view.menu.MenuItemImpl r15 = (android.support.v7.view.menu.MenuItemImpl) r15
            int r0 = r15.getGroupId()
            if (r0 != r12) goto L13f
            boolean r0 = r15.isActionButton()
            if (r0 == 0) goto L13b
            int r11 = r11 + 1
        L13b:
            r0 = 0
            r15.setIsActionButton(r0)
        L13f:
            int r3 = r3 + 1
            r0 = r19
            goto L125
        L144:
            if (r2 == 0) goto L148
            int r11 = r11 + (-1)
        L148:
            r14.setIsActionButton(r2)
            goto Lb3
        L14d:
            r17 = r3
            r0 = 0
            r14.setIsActionButton(r0)
        L153:
            int r5 = r5 + 1
            r2 = 0
            r0 = r19
            r3 = r17
            goto L71
        L15c:
            r2 = 1
            return r2
    }

    @Override
    public android.view.View getItemView(android.support.v7.view.menu.MenuItemImpl r3, android.view.View r4, android.view.ViewGroup r5) {
            r2 = this;
            android.view.View r0 = r3.getActionView()
            if (r0 == 0) goto Lc
            boolean r1 = r3.hasCollapsibleActionView()
            if (r1 == 0) goto L10
        Lc:
            android.view.View r0 = super.getItemView(r3, r4, r5)
        L10:
            boolean r3 = r3.isActionViewExpanded()
            if (r3 == 0) goto L19
            r3 = 8
            goto L1a
        L19:
            r3 = 0
        L1a:
            r0.setVisibility(r3)
            android.support.v7.widget.ActionMenuView r5 = (android.support.v7.widget.ActionMenuView) r5
            android.view.ViewGroup$LayoutParams r3 = r0.getLayoutParams()
            boolean r4 = r5.checkLayoutParams(r3)
            if (r4 != 0) goto L30
            android.support.v7.widget.ActionMenuView$LayoutParams r3 = r5.generateLayoutParams(r3)
            r0.setLayoutParams(r3)
        L30:
            return r0
    }

    @Override
    public android.support.v7.view.menu.MenuView getMenuView(android.view.ViewGroup r2) {
            r1 = this;
            android.support.v7.view.menu.MenuView r0 = r1.mMenuView
            android.support.v7.view.menu.MenuView r2 = super.getMenuView(r2)
            if (r0 == r2) goto Le
            r0 = r2
            android.support.v7.widget.ActionMenuView r0 = (android.support.v7.widget.ActionMenuView) r0
            r0.setPresenter(r1)
        Le:
            return r2
    }

    public android.graphics.drawable.Drawable getOverflowIcon() {
            r1 = this;
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r0 = r1.mOverflowButton
            if (r0 == 0) goto L9
            android.graphics.drawable.Drawable r0 = r0.getDrawable()
            return r0
        L9:
            boolean r0 = r1.mPendingOverflowIconSet
            if (r0 == 0) goto L10
            android.graphics.drawable.Drawable r0 = r1.mPendingOverflowIcon
            return r0
        L10:
            r0 = 0
            return r0
    }

    public boolean hideOverflowMenu() {
            r3 = this;
            android.support.v7.widget.ActionMenuPresenter$OpenOverflowRunnable r0 = r3.mPostedOpenRunnable
            r1 = 1
            if (r0 == 0) goto L16
            android.support.v7.view.menu.MenuView r0 = r3.mMenuView
            if (r0 == 0) goto L16
            android.support.v7.view.menu.MenuView r0 = r3.mMenuView
            android.view.View r0 = (android.view.View) r0
            android.support.v7.widget.ActionMenuPresenter$OpenOverflowRunnable r2 = r3.mPostedOpenRunnable
            r0.removeCallbacks(r2)
            r0 = 0
            r3.mPostedOpenRunnable = r0
            return r1
        L16:
            android.support.v7.widget.ActionMenuPresenter$OverflowPopup r0 = r3.mOverflowPopup
            if (r0 == 0) goto L1e
            r0.dismiss()
            return r1
        L1e:
            r0 = 0
            return r0
    }

    public boolean hideSubMenus() {
            r1 = this;
            android.support.v7.widget.ActionMenuPresenter$ActionButtonSubmenu r0 = r1.mActionButtonPopup
            if (r0 == 0) goto L9
            r0.dismiss()
            r0 = 1
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public void initForMenu(@android.support.annotation.NonNull android.content.Context r5, @android.support.annotation.Nullable android.support.v7.view.menu.MenuBuilder r6) {
            r4 = this;
            super.initForMenu(r5, r6)
            android.content.res.Resources r6 = r5.getResources()
            android.support.v7.view.ActionBarPolicy r5 = android.support.v7.view.ActionBarPolicy.get(r5)
            boolean r0 = r4.mReserveOverflowSet
            if (r0 != 0) goto L15
            boolean r0 = r5.showsOverflowMenuButton()
            r4.mReserveOverflow = r0
        L15:
            boolean r0 = r4.mWidthLimitSet
            if (r0 != 0) goto L1f
            int r0 = r5.getEmbeddedMenuWidthLimit()
            r4.mWidthLimit = r0
        L1f:
            boolean r0 = r4.mMaxItemsSet
            if (r0 != 0) goto L29
            int r5 = r5.getMaxActionButtons()
            r4.mMaxItems = r5
        L29:
            int r5 = r4.mWidthLimit
            boolean r0 = r4.mReserveOverflow
            r1 = 0
            if (r0 == 0) goto L5e
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r0 = r4.mOverflowButton
            if (r0 != 0) goto L56
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r0 = new android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton
            android.content.Context r2 = r4.mSystemContext
            r0.<init>(r4, r2)
            r4.mOverflowButton = r0
            boolean r0 = r4.mPendingOverflowIconSet
            r2 = 0
            if (r0 == 0) goto L4d
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r0 = r4.mOverflowButton
            android.graphics.drawable.Drawable r3 = r4.mPendingOverflowIcon
            r0.setImageDrawable(r3)
            r4.mPendingOverflowIcon = r1
            r4.mPendingOverflowIconSet = r2
        L4d:
            int r0 = android.view.View.MeasureSpec.makeMeasureSpec(r2, r2)
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r2 = r4.mOverflowButton
            r2.measure(r0, r0)
        L56:
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r0 = r4.mOverflowButton
            int r0 = r0.getMeasuredWidth()
            int r5 = r5 - r0
            goto L60
        L5e:
            r4.mOverflowButton = r1
        L60:
            r4.mActionItemWidthLimit = r5
            r5 = 1113587712(0x42600000, float:56.0)
            android.util.DisplayMetrics r6 = r6.getDisplayMetrics()
            float r6 = r6.density
            float r6 = r6 * r5
            int r5 = (int) r6
            r4.mMinCellSize = r5
            r4.mScrapActionButtonView = r1
            return
    }

    public boolean isOverflowMenuShowPending() {
            r1 = this;
            android.support.v7.widget.ActionMenuPresenter$OpenOverflowRunnable r0 = r1.mPostedOpenRunnable
            if (r0 != 0) goto Ld
            boolean r0 = r1.isOverflowMenuShowing()
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    public boolean isOverflowMenuShowing() {
            r1 = this;
            android.support.v7.widget.ActionMenuPresenter$OverflowPopup r0 = r1.mOverflowPopup
            if (r0 == 0) goto Lc
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public boolean isOverflowReserved() {
            r1 = this;
            boolean r0 = r1.mReserveOverflow
            return r0
    }

    @Override
    public void onCloseMenu(android.support.v7.view.menu.MenuBuilder r1, boolean r2) {
            r0 = this;
            r0.dismissPopupMenus()
            super.onCloseMenu(r1, r2)
            return
    }

    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            boolean r2 = r1.mMaxItemsSet
            if (r2 != 0) goto L10
            android.content.Context r2 = r1.mContext
            android.support.v7.view.ActionBarPolicy r2 = android.support.v7.view.ActionBarPolicy.get(r2)
            int r2 = r2.getMaxActionButtons()
            r1.mMaxItems = r2
        L10:
            android.support.v7.view.menu.MenuBuilder r2 = r1.mMenu
            if (r2 == 0) goto L1a
            android.support.v7.view.menu.MenuBuilder r2 = r1.mMenu
            r0 = 1
            r2.onItemsChanged(r0)
        L1a:
            return
    }

    @Override
    public void onRestoreInstanceState(android.os.Parcelable r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.support.v7.widget.ActionMenuPresenter.SavedState
            if (r0 != 0) goto L5
            return
        L5:
            android.support.v7.widget.ActionMenuPresenter$SavedState r2 = (android.support.v7.widget.ActionMenuPresenter.SavedState) r2
            int r0 = r2.openSubMenuId
            if (r0 <= 0) goto L1e
            android.support.v7.view.menu.MenuBuilder r0 = r1.mMenu
            int r2 = r2.openSubMenuId
            android.view.MenuItem r2 = r0.findItem(r2)
            if (r2 == 0) goto L1e
            android.view.SubMenu r2 = r2.getSubMenu()
            android.support.v7.view.menu.SubMenuBuilder r2 = (android.support.v7.view.menu.SubMenuBuilder) r2
            r1.onSubMenuSelected(r2)
        L1e:
            return
    }

    @Override
    public android.os.Parcelable onSaveInstanceState() {
            r2 = this;
            android.support.v7.widget.ActionMenuPresenter$SavedState r0 = new android.support.v7.widget.ActionMenuPresenter$SavedState
            r0.<init>()
            int r1 = r2.mOpenSubMenuId
            r0.openSubMenuId = r1
            return r0
    }

    @Override
    public boolean onSubMenuSelected(android.support.v7.view.menu.SubMenuBuilder r8) {
            r7 = this;
            boolean r0 = r8.hasVisibleItems()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            r0 = r8
        L9:
            android.view.Menu r2 = r0.getParentMenu()
            android.support.v7.view.menu.MenuBuilder r3 = r7.mMenu
            if (r2 == r3) goto L18
            android.view.Menu r0 = r0.getParentMenu()
            android.support.v7.view.menu.SubMenuBuilder r0 = (android.support.v7.view.menu.SubMenuBuilder) r0
            goto L9
        L18:
            android.view.MenuItem r0 = r0.getItem()
            android.view.View r0 = r7.findViewForItem(r0)
            if (r0 != 0) goto L23
            return r1
        L23:
            android.view.MenuItem r2 = r8.getItem()
            int r2 = r2.getItemId()
            r7.mOpenSubMenuId = r2
            int r2 = r8.size()
            r3 = 0
        L32:
            r4 = 1
            if (r3 >= r2) goto L4a
            android.view.MenuItem r5 = r8.getItem(r3)
            boolean r6 = r5.isVisible()
            if (r6 == 0) goto L47
            android.graphics.drawable.Drawable r5 = r5.getIcon()
            if (r5 == 0) goto L47
            r1 = 1
            goto L4a
        L47:
            int r3 = r3 + 1
            goto L32
        L4a:
            android.support.v7.widget.ActionMenuPresenter$ActionButtonSubmenu r2 = new android.support.v7.widget.ActionMenuPresenter$ActionButtonSubmenu
            android.content.Context r3 = r7.mContext
            r2.<init>(r7, r3, r8, r0)
            r7.mActionButtonPopup = r2
            android.support.v7.widget.ActionMenuPresenter$ActionButtonSubmenu r0 = r7.mActionButtonPopup
            r0.setForceShowIcon(r1)
            android.support.v7.widget.ActionMenuPresenter$ActionButtonSubmenu r0 = r7.mActionButtonPopup
            r0.show()
            super.onSubMenuSelected(r8)
            return r4
    }

    @Override
    public void onSubUiVisibilityChanged(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L7
            r2 = 0
            super.onSubMenuSelected(r2)
            goto L11
        L7:
            android.support.v7.view.menu.MenuBuilder r2 = r1.mMenu
            if (r2 == 0) goto L11
            android.support.v7.view.menu.MenuBuilder r2 = r1.mMenu
            r0 = 0
            r2.close(r0)
        L11:
            return
    }

    public void setExpandedActionViewsExclusive(boolean r1) {
            r0 = this;
            r0.mExpandedActionViewsExclusive = r1
            return
    }

    public void setItemLimit(int r1) {
            r0 = this;
            r0.mMaxItems = r1
            r1 = 1
            r0.mMaxItemsSet = r1
            return
    }

    public void setMenuView(android.support.v7.widget.ActionMenuView r2) {
            r1 = this;
            r1.mMenuView = r2
            android.support.v7.view.menu.MenuBuilder r0 = r1.mMenu
            r2.initialize(r0)
            return
    }

    public void setOverflowIcon(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r0 = r1.mOverflowButton
            if (r0 == 0) goto L8
            r0.setImageDrawable(r2)
            goto Ld
        L8:
            r0 = 1
            r1.mPendingOverflowIconSet = r0
            r1.mPendingOverflowIcon = r2
        Ld:
            return
    }

    public void setReserveOverflow(boolean r1) {
            r0 = this;
            r0.mReserveOverflow = r1
            r1 = 1
            r0.mReserveOverflowSet = r1
            return
    }

    public void setWidthLimit(int r1, boolean r2) {
            r0 = this;
            r0.mWidthLimit = r1
            r0.mStrictWidthLimit = r2
            r1 = 1
            r0.mWidthLimitSet = r1
            return
    }

    @Override
    public boolean shouldIncludeItem(int r1, android.support.v7.view.menu.MenuItemImpl r2) {
            r0 = this;
            boolean r1 = r2.isActionButton()
            return r1
    }

    public boolean showOverflowMenu() {
            r7 = this;
            boolean r0 = r7.mReserveOverflow
            if (r0 == 0) goto L46
            boolean r0 = r7.isOverflowMenuShowing()
            if (r0 != 0) goto L46
            android.support.v7.view.menu.MenuBuilder r0 = r7.mMenu
            if (r0 == 0) goto L46
            android.support.v7.view.menu.MenuView r0 = r7.mMenuView
            if (r0 == 0) goto L46
            android.support.v7.widget.ActionMenuPresenter$OpenOverflowRunnable r0 = r7.mPostedOpenRunnable
            if (r0 != 0) goto L46
            android.support.v7.view.menu.MenuBuilder r0 = r7.mMenu
            java.util.ArrayList r0 = r0.getNonActionItems()
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L46
            android.support.v7.widget.ActionMenuPresenter$OverflowPopup r0 = new android.support.v7.widget.ActionMenuPresenter$OverflowPopup
            android.content.Context r3 = r7.mContext
            android.support.v7.view.menu.MenuBuilder r4 = r7.mMenu
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r5 = r7.mOverflowButton
            r6 = 1
            r1 = r0
            r2 = r7
            r1.<init>(r2, r3, r4, r5, r6)
            android.support.v7.widget.ActionMenuPresenter$OpenOverflowRunnable r1 = new android.support.v7.widget.ActionMenuPresenter$OpenOverflowRunnable
            r1.<init>(r7, r0)
            r7.mPostedOpenRunnable = r1
            android.support.v7.view.menu.MenuView r0 = r7.mMenuView
            android.view.View r0 = (android.view.View) r0
            android.support.v7.widget.ActionMenuPresenter$OpenOverflowRunnable r1 = r7.mPostedOpenRunnable
            r0.post(r1)
            r0 = 0
            super.onSubMenuSelected(r0)
            r0 = 1
            return r0
        L46:
            r0 = 0
            return r0
    }

    @Override
    public void updateMenuView(boolean r5) {
            r4 = this;
            super.updateMenuView(r5)
            android.support.v7.view.menu.MenuView r5 = r4.mMenuView
            android.view.View r5 = (android.view.View) r5
            r5.requestLayout()
            android.support.v7.view.menu.MenuBuilder r5 = r4.mMenu
            r0 = 0
            if (r5 == 0) goto L2e
            android.support.v7.view.menu.MenuBuilder r5 = r4.mMenu
            java.util.ArrayList r5 = r5.getActionItems()
            int r1 = r5.size()
            r2 = 0
        L1a:
            if (r2 >= r1) goto L2e
            java.lang.Object r3 = r5.get(r2)
            android.support.v7.view.menu.MenuItemImpl r3 = (android.support.v7.view.menu.MenuItemImpl) r3
            android.support.v4.view.ActionProvider r3 = r3.getSupportActionProvider()
            if (r3 == 0) goto L2b
            r3.setSubUiVisibilityListener(r4)
        L2b:
            int r2 = r2 + 1
            goto L1a
        L2e:
            android.support.v7.view.menu.MenuBuilder r5 = r4.mMenu
            if (r5 == 0) goto L39
            android.support.v7.view.menu.MenuBuilder r5 = r4.mMenu
            java.util.ArrayList r5 = r5.getNonActionItems()
            goto L3a
        L39:
            r5 = 0
        L3a:
            boolean r1 = r4.mReserveOverflow
            if (r1 == 0) goto L57
            if (r5 == 0) goto L57
            int r1 = r5.size()
            r2 = 1
            if (r1 != r2) goto L54
            java.lang.Object r5 = r5.get(r0)
            android.support.v7.view.menu.MenuItemImpl r5 = (android.support.v7.view.menu.MenuItemImpl) r5
            boolean r5 = r5.isActionViewExpanded()
            r0 = r5 ^ 1
            goto L57
        L54:
            if (r1 <= 0) goto L57
            r0 = 1
        L57:
            if (r0 == 0) goto L87
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r5 = r4.mOverflowButton
            if (r5 != 0) goto L66
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r5 = new android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton
            android.content.Context r0 = r4.mSystemContext
            r5.<init>(r4, r0)
            r4.mOverflowButton = r5
        L66:
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r5 = r4.mOverflowButton
            android.view.ViewParent r5 = r5.getParent()
            android.view.ViewGroup r5 = (android.view.ViewGroup) r5
            android.support.v7.view.menu.MenuView r0 = r4.mMenuView
            if (r5 == r0) goto L9c
            if (r5 == 0) goto L79
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r0 = r4.mOverflowButton
            r5.removeView(r0)
        L79:
            android.support.v7.view.menu.MenuView r5 = r4.mMenuView
            android.support.v7.widget.ActionMenuView r5 = (android.support.v7.widget.ActionMenuView) r5
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r0 = r4.mOverflowButton
            android.support.v7.widget.ActionMenuView$LayoutParams r1 = r5.generateOverflowButtonLayoutParams()
            r5.addView(r0, r1)
            goto L9c
        L87:
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r5 = r4.mOverflowButton
            if (r5 == 0) goto L9c
            android.view.ViewParent r5 = r5.getParent()
            android.support.v7.view.menu.MenuView r0 = r4.mMenuView
            if (r5 != r0) goto L9c
            android.support.v7.view.menu.MenuView r5 = r4.mMenuView
            android.view.ViewGroup r5 = (android.view.ViewGroup) r5
            android.support.v7.widget.ActionMenuPresenter$OverflowMenuButton r0 = r4.mOverflowButton
            r5.removeView(r0)
        L9c:
            android.support.v7.view.menu.MenuView r5 = r4.mMenuView
            android.support.v7.widget.ActionMenuView r5 = (android.support.v7.widget.ActionMenuView) r5
            boolean r0 = r4.mReserveOverflow
            r5.setOverflowReserved(r0)
            return
    }
}
