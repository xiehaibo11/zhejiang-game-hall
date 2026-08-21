package android.support.v7.widget;

import android.content.Context;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.graphics.drawable.Drawable;
import android.os.Parcel;
import android.os.Parcelable;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v4.view.ActionProvider;
import android.support.v4.view.GravityCompat;
import android.support.v7.appcompat.R;
import android.support.v7.view.ActionBarPolicy;
import android.support.v7.view.menu.ActionMenuItemView;
import android.support.v7.view.menu.BaseMenuPresenter;
import android.support.v7.view.menu.MenuBuilder;
import android.support.v7.view.menu.MenuItemImpl;
import android.support.v7.view.menu.MenuPopupHelper;
import android.support.v7.view.menu.MenuPresenter;
import android.support.v7.view.menu.MenuView;
import android.support.v7.view.menu.ShowableListMenu;
import android.support.v7.view.menu.SubMenuBuilder;
import android.support.v7.widget.ActionMenuView;
import android.util.SparseBooleanArray;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import java.util.ArrayList;

class ActionMenuPresenter extends BaseMenuPresenter implements ActionProvider.SubUiVisibilityListener {
    private static final String TAG = "ActionMenuPresenter";
    private final SparseBooleanArray mActionButtonGroups;
    ActionButtonSubmenu mActionButtonPopup;
    private int mActionItemWidthLimit;
    private boolean mExpandedActionViewsExclusive;
    private int mMaxItems;
    private boolean mMaxItemsSet;
    private int mMinCellSize;
    int mOpenSubMenuId;
    OverflowMenuButton mOverflowButton;
    OverflowPopup mOverflowPopup;
    private Drawable mPendingOverflowIcon;
    private boolean mPendingOverflowIconSet;
    private ActionMenuPopupCallback mPopupCallback;
    final PopupPresenterCallback mPopupPresenterCallback;
    OpenOverflowRunnable mPostedOpenRunnable;
    private boolean mReserveOverflow;
    private boolean mReserveOverflowSet;
    private View mScrapActionButtonView;
    private boolean mStrictWidthLimit;
    private int mWidthLimit;
    private boolean mWidthLimitSet;

    private class ActionButtonSubmenu extends MenuPopupHelper {
        final ActionMenuPresenter this$0;

        public ActionButtonSubmenu(ActionMenuPresenter r7, Context r8, SubMenuBuilder r9, View r10) {
            this.this$0 = r7;
            super(r8, r9, r10, false, R.attr.actionOverflowMenuStyle);
            if (((MenuItemImpl) r9.getItem()).isActionButton() == false) goto L5;
        L9:
            setPresenterCallback(r7.mPopupPresenterCallback);
            return;
        L5:
            if (r7.mOverflowButton != null) goto L7;
            View r82 = (View) ActionMenuPresenter.access$200(r7);
        L8:
            setAnchorView(r82);
            goto L9
        L7:
            r82 = r7.mOverflowButton;
            goto L8
        }

        @Override
        protected void onDismiss() {
            ActionMenuPresenter r0 = this.this$0;
            r0.mActionButtonPopup = null;
            r0.mOpenSubMenuId = 0;
            super.onDismiss();
        }
    }

    private class ActionMenuPopupCallback extends ActionMenuItemView.PopupCallback {
        final ActionMenuPresenter this$0;

        ActionMenuPopupCallback(ActionMenuPresenter r1) {
            this.this$0 = r1;
        }

        @Override
        public ShowableListMenu getPopup() {
            if (this.this$0.mActionButtonPopup != null) goto L7;
            return null;
        L7:
            return this.this$0.mActionButtonPopup.getPopup();
        }
    }

    private class OpenOverflowRunnable implements Runnable {
        private OverflowPopup mPopup;
        final ActionMenuPresenter this$0;

        public OpenOverflowRunnable(ActionMenuPresenter r1, OverflowPopup r2) {
            this.this$0 = r1;
            this.mPopup = r2;
        }

        @Override
        public void run() {
            if (ActionMenuPresenter.access$300(this.this$0) == null) goto L5;
            ActionMenuPresenter.access$400(this.this$0).changeMenuMode();
        L5:
            View r0 = (View) ActionMenuPresenter.access$500(this.this$0);
            if (r0 != null) goto L8;
        L12:
            this.this$0.mPostedOpenRunnable = null;
            return;
        L8:
            if (r0.getWindowToken() == null) goto L12;
            if (this.mPopup.tryShow() == false) goto L12;
            ActionMenuPresenter r02 = this.this$0;
            r02.mOverflowPopup = this.mPopup;
            goto L12
        }
    }

    private class OverflowMenuButton extends AppCompatImageView implements ActionMenuView.ActionMenuChildView {
        private final float[] mTempPts;
        final ActionMenuPresenter this$0;

        @Override
        public boolean needsDividerAfter() {
            return false;
        }

        @Override
        public boolean needsDividerBefore() {
            return false;
        }

        public OverflowMenuButton(final ActionMenuPresenter r3, Context r4) {
            this.this$0 = r3;
            super(r4, null, R.attr.actionOverflowButtonStyle);
            this.mTempPts = new float[2];
            setClickable(true);
            setFocusable(true);
            setVisibility(0);
            setEnabled(true);
            TooltipCompat.setTooltipText(this, getContentDescription());
            setOnTouchListener(new 1(this, this, r3));
        }

        @Override
        public boolean performClick() {
            if (super.performClick() == false) goto L5;
            return true;
        L5:
            playSoundEffect(0);
            this.this$0.showOverflowMenu();
            return true;
        }

        @Override
        protected boolean setFrame(int r5, int r6, int r7, int r8) {
            boolean r52 = super.setFrame(r5, r6, r7, r8);
            Drawable r62 = getDrawable();
            Drawable r72 = getBackground();
            if (r62 == null) goto L6;
            if (r72 == null) goto L6;
            int r63 = getWidth();
            int r82 = getHeight();
            int r0 = Math.max(r63, r82) / 2;
            int r1 = getPaddingLeft() - getPaddingRight();
            int r64 = (r63 + r1) / 2;
            int r83 = (r82 + (getPaddingTop() - getPaddingBottom())) / 2;
            DrawableCompat.setHotspotBounds(r72, r64 - r0, r83 - r0, r64 + r0, r83 + r0);
        L6:
            return r52;
        }
    }

    private class OverflowPopup extends MenuPopupHelper {
        final ActionMenuPresenter this$0;

        public OverflowPopup(ActionMenuPresenter r7, Context r8, MenuBuilder r9, View r10, boolean r11) {
            this.this$0 = r7;
            super(r8, r9, r10, r11, R.attr.actionOverflowMenuStyle);
            setGravity(GravityCompat.END);
            setPresenterCallback(r7.mPopupPresenterCallback);
        }

        @Override
        protected void onDismiss() {
            if (ActionMenuPresenter.access$000(this.this$0) == null) goto L5;
            ActionMenuPresenter.access$100(this.this$0).close();
        L5:
            this.this$0.mOverflowPopup = null;
            super.onDismiss();
        }
    }

    private class PopupPresenterCallback implements MenuPresenter.Callback {
        final ActionMenuPresenter this$0;

        PopupPresenterCallback(ActionMenuPresenter r1) {
            this.this$0 = r1;
        }

        @Override
        public boolean onOpenSubMenu(MenuBuilder r4) {
            if (r4 != null) goto L5;
            return false;
        L5:
            ActionMenuPresenter r1 = this.this$0;
            r1.mOpenSubMenuId = ((SubMenuBuilder) r4).getItem().getItemId();
            MenuPresenter.Callback r12 = this.this$0.getCallback();
            if (r12 != null) goto L8;
            return false;
        L8:
            return r12.onOpenSubMenu(r4);
        }

        @Override
        public void onCloseMenu(MenuBuilder r3, boolean r4) {
            if ((r3 instanceof SubMenuBuilder) == false) goto L5;
            r3.getRootMenu().close(false);
        L5:
            MenuPresenter.Callback r0 = this.this$0.getCallback();
            if (r0 == null) goto L9;
            r0.onCloseMenu(r3, r4);
            return;
        }
    }

    private static class SavedState implements Parcelable {
        public static final Parcelable.Creator<SavedState> CREATOR = null;
        public int openSubMenuId;

        @Override
        public int describeContents() {
            return 0;
        }

        SavedState() {
        }

        SavedState(Parcel r1) {
            this.openSubMenuId = r1.readInt();
        }

        @Override
        public void writeToParcel(Parcel r1, int r2) {
            r1.writeInt(this.openSubMenuId);
        }

        static {
            CREATOR = new 1();
        }
    }

    static MenuBuilder access$000(ActionMenuPresenter r0) {
        return r0.mMenu;
    }

    static MenuBuilder access$100(ActionMenuPresenter r0) {
        return r0.mMenu;
    }

    static MenuView access$200(ActionMenuPresenter r0) {
        return r0.mMenuView;
    }

    static MenuBuilder access$300(ActionMenuPresenter r0) {
        return r0.mMenu;
    }

    static MenuBuilder access$400(ActionMenuPresenter r0) {
        return r0.mMenu;
    }

    static MenuView access$500(ActionMenuPresenter r0) {
        return r0.mMenuView;
    }

    public ActionMenuPresenter(Context r3) {
        super(r3, R.layout.abc_action_menu_layout, R.layout.abc_action_menu_item_layout);
        this.mActionButtonGroups = new SparseBooleanArray();
        this.mPopupPresenterCallback = new PopupPresenterCallback(this);
    }

    @Override
    public void initForMenu(@NonNull Context r5, @Nullable MenuBuilder r6) {
        super.initForMenu(r5, r6);
        Resources r62 = r5.getResources();
        ActionBarPolicy r52 = ActionBarPolicy.get(r5);
        if (this.mReserveOverflowSet == true) goto L6;
        this.mReserveOverflow = r52.showsOverflowMenuButton();
    L6:
        if (this.mWidthLimitSet == true) goto L9;
        this.mWidthLimit = r52.getEmbeddedMenuWidthLimit();
    L9:
        if (this.mMaxItemsSet == true) goto L11;
        this.mMaxItems = r52.getMaxActionButtons();
    L11:
        int r53 = this.mWidthLimit;
        if (this.mReserveOverflow == true) goto L14;
        this.mOverflowButton = null;
    L21:
        this.mActionItemWidthLimit = r53;
        this.mMinCellSize = (int) (r62.getDisplayMetrics().density * 56.0f);
        this.mScrapActionButtonView = null;
        return;
    L14:
        if (this.mOverflowButton != null) goto L19;
        this.mOverflowButton = new OverflowMenuButton(this, this.mSystemContext);
        if (this.mPendingOverflowIconSet == false) goto L18;
        this.mOverflowButton.setImageDrawable(this.mPendingOverflowIcon);
        this.mPendingOverflowIcon = null;
        this.mPendingOverflowIconSet = false;
    L18:
        int r0 = View.MeasureSpec.makeMeasureSpec(0, 0);
        this.mOverflowButton.measure(r0, r0);
    L19:
        r53 = r53 - this.mOverflowButton.getMeasuredWidth();
        goto L21
    }

    public void onConfigurationChanged(Configuration r2) {
        if (this.mMaxItemsSet == true) goto L6;
        this.mMaxItems = ActionBarPolicy.get(this.mContext).getMaxActionButtons();
    L6:
        if (this.mMenu == null) goto L9;
        this.mMenu.onItemsChanged(true);
        return;
    }

    public void setWidthLimit(int r1, boolean r2) {
        this.mWidthLimit = r1;
        this.mStrictWidthLimit = r2;
        this.mWidthLimitSet = true;
    }

    public void setReserveOverflow(boolean r1) {
        this.mReserveOverflow = r1;
        this.mReserveOverflowSet = true;
    }

    public void setItemLimit(int r1) {
        this.mMaxItems = r1;
        this.mMaxItemsSet = true;
    }

    public void setExpandedActionViewsExclusive(boolean r1) {
        this.mExpandedActionViewsExclusive = r1;
    }

    public void setOverflowIcon(Drawable r2) {
        OverflowMenuButton r0 = this.mOverflowButton;
        if (r0 == null) goto L5;
        r0.setImageDrawable(r2);
        return;
    L5:
        this.mPendingOverflowIconSet = true;
        this.mPendingOverflowIcon = r2;
    }

    public Drawable getOverflowIcon() {
        OverflowMenuButton r0 = this.mOverflowButton;
        if (r0 == null) goto L7;
        return r0.getDrawable();
    L7:
        if (this.mPendingOverflowIconSet == true) goto L9;
        return null;
    L9:
        return this.mPendingOverflowIcon;
    }

    @Override
    public MenuView getMenuView(ViewGroup r2) {
        MenuView r0 = this.mMenuView;
        MenuView r22 = super.getMenuView(r2);
        if (r0 == r22) goto L5;
        ((ActionMenuView) r22).setPresenter(this);
    L5:
        return r22;
    }

    @Override
    public View getItemView(MenuItemImpl r3, View r4, ViewGroup r5) {
        View r0 = r3.getActionView();
        if (r0 != null) goto L5;
    L6:
        r0 = super.getItemView(r3, r4, r5);
    L8:
        if (r3.isActionViewExpanded() == false) goto L10;
        int r32 = 8;
    L11:
        r0.setVisibility(r32);
        ActionMenuView r52 = (ActionMenuView) r5;
        ViewGroup.LayoutParams r33 = r0.getLayoutParams();
        if (r52.checkLayoutParams(r33) == true) goto L14;
        r0.setLayoutParams(r52.generateLayoutParams(r33));
    L14:
        return r0;
    L10:
        r32 = 0;
        goto L11
    L5:
        if (r3.hasCollapsibleActionView() == false) goto L8;
        goto L6
    }

    @Override
    public void bindItemView(MenuItemImpl r2, MenuView.ItemView r3) {
        r3.initialize(r2, 0);
        ActionMenuItemView r32 = (ActionMenuItemView) r3;
        r32.setItemInvoker((ActionMenuView) this.mMenuView);
        if (this.mPopupCallback != null) goto L5;
        this.mPopupCallback = new ActionMenuPopupCallback(this);
    L5:
        r32.setPopupCallback(this.mPopupCallback);
    }

    @Override
    public boolean shouldIncludeItem(int r1, MenuItemImpl r2) {
        return r2.isActionButton();
    }

    @Override
    public void updateMenuView(boolean r5) {
        super.updateMenuView(r5);
        ((View) this.mMenuView).requestLayout();
        boolean r0 = false;
        if (this.mMenu == null) goto L11;
        ArrayList<MenuItemImpl> r52 = this.mMenu.getActionItems();
        int r1 = r52.size();
        int r2 = 0;
    L5:
        if (r2 >= r1) goto L11;
        ActionProvider r3 = r52.get(r2).getSupportActionProvider();
        if (r3 == null) goto L9;
        r3.setSubUiVisibilityListener(this);
    L9:
        r2 = r2 + 1;
    L11:
        if (this.mMenu == null) goto L13;
        ArrayList<MenuItemImpl> r53 = this.mMenu.getNonActionItems();
    L15:
        if (this.mReserveOverflow == false) goto L22;
        if (r53 == null) goto L22;
        int r12 = r53.size();
        if (r12 != 1) goto L20;
        r0 = !r53.get(0).isActionViewExpanded();
        goto L22
    L20:
        if (r12 <= 0) goto L22;
        r0 = true;
    L22:
        if (r0 == true) goto L24;
        OverflowMenuButton r54 = this.mOverflowButton;
        if (r54 != null) goto L34;
    L36:
        ((ActionMenuView) this.mMenuView).setOverflowReserved(this.mReserveOverflow);
        return;
    L34:
        if (r54.getParent() != this.mMenuView) goto L36;
        ((ViewGroup) this.mMenuView).removeView(this.mOverflowButton);
        goto L36
    L24:
        if (this.mOverflowButton != null) goto L26;
        this.mOverflowButton = new OverflowMenuButton(this, this.mSystemContext);
    L26:
        ViewGroup r55 = (ViewGroup) this.mOverflowButton.getParent();
        if (r55 == this.mMenuView) goto L36;
        if (r55 == null) goto L30;
        r55.removeView(this.mOverflowButton);
    L30:
        ActionMenuView r56 = (ActionMenuView) this.mMenuView;
        r56.addView(this.mOverflowButton, r56.generateOverflowButtonLayoutParams());
        goto L36
    L13:
        r53 = null;
        goto L15
    }

    @Override
    public boolean filterLeftoverView(ViewGroup r3, int r4) {
        if (r3.getChildAt(r4) != this.mOverflowButton) goto L7;
        return false;
    L7:
        return super.filterLeftoverView(r3, r4);
    }

    @Override
    public boolean onSubMenuSelected(SubMenuBuilder r8) {
        boolean r1 = false;
        if (r8.hasVisibleItems() == true) goto L5;
        return false;
    L5:
        SubMenuBuilder r0 = r8;
    L7:
        if (r0.getParentMenu() == this.mMenu) goto L9;
        r0 = (SubMenuBuilder) r0.getParentMenu();
        goto L7
    L9:
        View r02 = findViewForItem(r0.getItem());
        if (r02 != null) goto L12;
        return false;
    L12:
        this.mOpenSubMenuId = r8.getItem().getItemId();
        int r2 = r8.size();
        int r3 = 0;
    L14:
        if (r3 >= r2) goto L21;
        MenuItem r5 = r8.getItem(r3);
        if (r5.isVisible() == false) goto L20;
        if (r5.getIcon() == null) goto L20;
        r1 = true;
    L20:
        r3 = r3 + 1;
    L21:
        this.mActionButtonPopup = new ActionButtonSubmenu(this, this.mContext, r8, r02);
        this.mActionButtonPopup.setForceShowIcon(r1);
        this.mActionButtonPopup.show();
        super.onSubMenuSelected(r8);
        return true;
    }

    /* JADX WARN: Multi-variable type inference failed */
    private View findViewForItem(MenuItem r7) {
        ViewGroup r0 = (ViewGroup) this.mMenuView;
        if (r0 != null) goto L5;
        return null;
    L5:
        int r2 = r0.getChildCount();
        int r3 = 0;
    L6:
        if (r3 >= r2) goto L13;
        View r4 = r0.getChildAt(r3);
        if ((r4 instanceof MenuView.ItemView) == false) goto L12;
        if (((MenuView.ItemView) r4).getItemData() != r7) goto L12;
        return r4;
    L12:
        r3 = r3 + 1;
        goto L6
    L13:
        return null;
    }

    public boolean showOverflowMenu() {
        if (this.mReserveOverflow == true) goto L5;
        return false;
    L5:
        if (isOverflowMenuShowing() == false) goto L7;
        return false;
    L7:
        if (this.mMenu != null) goto L9;
        return false;
    L9:
        if (this.mMenuView != null) goto L11;
        return false;
    L11:
        if (this.mPostedOpenRunnable == null) goto L13;
        return false;
    L13:
        if (this.mMenu.getNonActionItems().isEmpty() == true) goto L22;
        this.mPostedOpenRunnable = new OpenOverflowRunnable(this, new OverflowPopup(this, this.mContext, this.mMenu, this.mOverflowButton, true));
        ((View) this.mMenuView).post(this.mPostedOpenRunnable);
        super.onSubMenuSelected(null);
        return true;
    L22:
        return false;
    }

    public boolean hideOverflowMenu() {
        if (this.mPostedOpenRunnable != null) goto L5;
    L8:
        OverflowPopup r0 = this.mOverflowPopup;
        if (r0 == null) goto L12;
        r0.dismiss();
        return true;
    L12:
        return false;
    L5:
        if (this.mMenuView == null) goto L8;
        ((View) this.mMenuView).removeCallbacks(this.mPostedOpenRunnable);
        this.mPostedOpenRunnable = null;
        return true;
    }

    public boolean dismissPopupMenus() {
        return hideOverflowMenu() | hideSubMenus();
    }

    public boolean hideSubMenus() {
        ActionButtonSubmenu r0 = this.mActionButtonPopup;
        if (r0 == null) goto L6;
        r0.dismiss();
        return true;
    L6:
        return false;
    }

    public boolean isOverflowMenuShowing() {
        OverflowPopup r0 = this.mOverflowPopup;
        if (r0 != null) goto L5;
    L7:
        return false;
    L5:
        if (r0.isShowing() == false) goto L7;
        return true;
    }

    public boolean isOverflowMenuShowPending() {
        if (this.mPostedOpenRunnable == null) goto L5;
    L8:
        return true;
    L5:
        if (isOverflowMenuShowing() == true) goto L8;
        return false;
    }

    public boolean isOverflowReserved() {
        return this.mReserveOverflow;
    }

    @Override
    public boolean flagActionItems() {
        ActionMenuPresenter r0 = this;
        int r2 = 0;
        if (r0.mMenu == null) goto L5;
        ArrayList<MenuItemImpl> r1 = r0.mMenu.getVisibleItems();
        int r3 = r1.size();
    L6:
        int r4 = r0.mMaxItems;
        int r5 = r0.mActionItemWidthLimit;
        int r6 = View.MeasureSpec.makeMeasureSpec(0, 0);
        ViewGroup r7 = (ViewGroup) r0.mMenuView;
        int r11 = r4;
        int r42 = 0;
        boolean r8 = false;
        int r9 = 0;
        int r10 = 0;
    L7:
        if (r42 >= r3) goto L22;
        MenuItemImpl r13 = r1.get(r42);
        if (r13.requiresActionButton() == false) goto L12;
        r9 = r9 + 1;
    L16:
        if (r0.mExpandedActionViewsExclusive == false) goto L20;
        if (r13.isActionViewExpanded() == false) goto L20;
        r11 = 0;
    L20:
        r42 = r42 + 1;
        goto L7
    L12:
        if (r13.requestsActionButton() == false) goto L14;
        r10 = r10 + 1;
        goto L16
    L14:
        r8 = true;
        goto L16
    L22:
        if (r0.mReserveOverflow == false) goto L27;
        if (r8 == false) goto L25;
    L26:
        r11 = r11 - 1;
        goto L27
    L25:
        if ((r10 + r9) > r11) goto L26;
    L27:
        int r112 = r11 - r9;
        SparseBooleanArray r43 = r0.mActionButtonGroups;
        r43.clear();
        if (r0.mStrictWidthLimit == false) goto L30;
        int r82 = r0.mMinCellSize;
        int r92 = r5 / r82;
        int r83 = r82 + ((r5 % r82) / r92);
    L31:
        int r102 = r5;
        int r52 = 0;
        int r132 = 0;
    L32:
        if (r52 >= r3) goto L104;
        MenuItemImpl r14 = r1.get(r52);
        if (r14.requiresActionButton() == false) goto L53;
        View r15 = r0.getItemView(r14, r0.mScrapActionButtonView, r7);
        if (r0.mScrapActionButtonView != null) goto L39;
        r0.mScrapActionButtonView = r15;
    L39:
        if (r0.mStrictWidthLimit == false) goto L41;
        r92 = r92 - ActionMenuView.measureChildForCells(r15, r83, r92, r6, r2);
    L42:
        int r12 = r15.getMeasuredWidth();
        r102 = r102 - r12;
        if (r132 == 0) goto L46;
        r12 = r132;
    L46:
        int r133 = r14.getGroupId();
        if (r133 == 0) goto L49;
        boolean r152 = true;
        r43.put(r133, true);
    L50:
        r14.setIsActionButton(r152);
        int r17 = r3;
        r132 = r12;
    L103:
        r52 = r52 + 1;
        r2 = 0;
        r0 = this;
        r3 = r17;
        goto L32
    L49:
        r152 = true;
        goto L50
    L41:
        r15.measure(r6, r6);
        goto L42
    L53:
        if (r14.requestsActionButton() == false) goto L102;
        int r122 = r14.getGroupId();
        boolean r153 = r43.get(r122);
        if (r112 > 0) goto L57;
        if (r153 == true) goto L57;
    L62:
        boolean r22 = false;
    L63:
        if (r22 == false) goto L85;
        boolean r16 = r22;
        View r23 = r0.getItemView(r14, r0.mScrapActionButtonView, r7);
        r17 = r3;
        if (r0.mScrapActionButtonView != null) goto L68;
        r0.mScrapActionButtonView = r23;
    L68:
        if (r0.mStrictWidthLimit == false) goto L72;
        int r18 = ActionMenuView.measureChildForCells(r23, r83, r92, r6, 0);
        r92 = r92 - r18;
        if (r18 != 0) goto L73;
        r16 = false;
    L73:
        int r24 = r23.getMeasuredWidth();
        r102 = r102 - r24;
        if (r132 != 0) goto L77;
        r132 = r24;
    L77:
        if (r0.mStrictWidthLimit == false) goto L81;
        if (r102 >= 0) goto L82;
    L83:
        boolean r25 = false;
    L84:
        r22 = r16 & r25;
    L86:
        if (r22 == false) goto L89;
        if (r122 == 0) goto L89;
        r43.put(r122, true);
    L99:
        if (r22 == false) goto L101;
        r112 = r112 - 1;
    L101:
        r14.setIsActionButton(r22);
    L89:
        if (r153 == false) goto L99;
        r43.put(r122, false);
        int r32 = 0;
    L91:
        if (r32 >= r52) goto L99;
        MenuItemImpl r154 = r1.get(r32);
        if (r154.getGroupId() != r122) goto L98;
        if (r154.isActionButton() == false) goto L97;
        r112 = r112 + 1;
    L97:
        r154.setIsActionButton(false);
    L98:
        r32 = r32 + 1;
    L82:
        r25 = true;
        goto L84
    L81:
        if ((r102 + r132) <= 0) goto L83;
    L72:
        r23.measure(r6, r6);
        goto L73
    L85:
        r17 = r3;
    L57:
        if (r102 <= 0) goto L62;
        if (r0.mStrictWidthLimit == false) goto L61;
        if (r92 <= 0) goto L62;
    L61:
        r22 = true;
        goto L63
    L102:
        r17 = r3;
        r14.setIsActionButton(false);
        goto L103
    L104:
        return true;
    L30:
        r83 = 0;
        r92 = 0;
        goto L31
    L5:
        r1 = null;
        r3 = 0;
        goto L6
    }

    @Override
    public void onCloseMenu(MenuBuilder r1, boolean r2) {
        dismissPopupMenus();
        super.onCloseMenu(r1, r2);
    }

    @Override
    public Parcelable onSaveInstanceState() {
        SavedState r0 = new SavedState();
        r0.openSubMenuId = this.mOpenSubMenuId;
        return r0;
    }

    @Override
    public void onRestoreInstanceState(Parcelable r2) {
        if ((r2 instanceof SavedState) == true) goto L5;
        return;
    L5:
        SavedState r22 = (SavedState) r2;
        if (r22.openSubMenuId <= 0) goto L11;
        MenuItem r23 = this.mMenu.findItem(r22.openSubMenuId);
        if (r23 == null) goto L12;
        onSubMenuSelected((SubMenuBuilder) r23.getSubMenu());
        return;
    L12:
        return;
    }

    @Override
    public void onSubUiVisibilityChanged(boolean r2) {
        if (r2 == false) goto L5;
        super.onSubMenuSelected(null);
        return;
    L5:
        if (this.mMenu == null) goto L9;
        this.mMenu.close(false);
        return;
    }

    public void setMenuView(ActionMenuView r2) {
        this.mMenuView = r2;
        r2.initialize(this.mMenu);
    }
}
