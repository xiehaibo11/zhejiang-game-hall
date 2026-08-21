package android.support.v7.view.menu;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Rect;
import android.os.Build;
import android.os.Handler;
import android.os.Parcelable;
import android.support.annotation.AttrRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.StyleRes;
import android.support.v4.view.GravityCompat;
import android.support.v4.view.ViewCompat;
import android.support.v7.appcompat.R;
import android.support.v7.view.menu.MenuPresenter;
import android.support.v7.widget.MenuItemHoverListener;
import android.support.v7.widget.MenuPopupWindow;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewTreeObserver;
import android.widget.FrameLayout;
import android.widget.HeaderViewListAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.PopupWindow;
import android.widget.TextView;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

final class CascadingMenuPopup extends MenuPopup implements MenuPresenter, View.OnKeyListener, PopupWindow.OnDismissListener {
    static final int HORIZ_POSITION_LEFT = 0;
    static final int HORIZ_POSITION_RIGHT = 1;
    private static final int ITEM_LAYOUT = 0;
    static final int SUBMENU_TIMEOUT_MS = 200;
    private View mAnchorView;
    private final View.OnAttachStateChangeListener mAttachStateChangeListener;
    private final Context mContext;
    private int mDropDownGravity;
    private boolean mForceShowIcon;
    final ViewTreeObserver.OnGlobalLayoutListener mGlobalLayoutListener;
    private boolean mHasXOffset;
    private boolean mHasYOffset;
    private int mLastPosition;
    private final MenuItemHoverListener mMenuItemHoverListener;
    private final int mMenuMaxWidth;
    private PopupWindow.OnDismissListener mOnDismissListener;
    private final boolean mOverflowOnly;
    private final List<MenuBuilder> mPendingMenus;
    private final int mPopupStyleAttr;
    private final int mPopupStyleRes;
    private MenuPresenter.Callback mPresenterCallback;
    private int mRawDropDownGravity;
    boolean mShouldCloseImmediately;
    private boolean mShowTitle;
    final List<CascadingMenuInfo> mShowingMenus;
    View mShownAnchorView;
    final Handler mSubMenuHoverHandler;
    ViewTreeObserver mTreeObserver;
    private int mXOffset;
    private int mYOffset;

    private static class CascadingMenuInfo {
        public final MenuBuilder menu;
        public final int position;
        public final MenuPopupWindow window;

        public CascadingMenuInfo(@NonNull MenuPopupWindow r1, @NonNull MenuBuilder r2, int r3) {
            this.window = r1;
            this.menu = r2;
            this.position = r3;
        }

        public ListView getListView() {
            return this.window.getListView();
        }
    }

    @Retention(RetentionPolicy.SOURCE)
    public @interface HorizPosition {
    }

    @Override
    protected boolean closeMenuOnSubMenuOpened() {
        return false;
    }

    @Override
    public boolean flagActionItems() {
        return false;
    }

    @Override
    public void onRestoreInstanceState(Parcelable r1) {
    }

    @Override
    public Parcelable onSaveInstanceState() {
        return null;
    }

    static {
        ITEM_LAYOUT = R.layout.abc_cascading_menu_item_layout;
    }

    public CascadingMenuPopup(@NonNull Context r2, @NonNull View r3, @AttrRes int r4, @StyleRes int r5, boolean r6) {
        this.mPendingMenus = new ArrayList();
        this.mShowingMenus = new ArrayList();
        this.mGlobalLayoutListener = new 1(this);
        this.mAttachStateChangeListener = new 2(this);
        this.mMenuItemHoverListener = new 3(this);
        this.mRawDropDownGravity = 0;
        this.mDropDownGravity = 0;
        this.mContext = r2;
        this.mAnchorView = r3;
        this.mPopupStyleAttr = r4;
        this.mPopupStyleRes = r5;
        this.mOverflowOnly = r6;
        this.mForceShowIcon = false;
        this.mLastPosition = getInitialMenuPosition();
        Resources r22 = r2.getResources();
        this.mMenuMaxWidth = Math.max(r22.getDisplayMetrics().widthPixels / 2, r22.getDimensionPixelSize(R.dimen.abc_config_prefDialogWidth));
        this.mSubMenuHoverHandler = new Handler();
    }

    @Override
    public void setForceShowIcon(boolean r1) {
        this.mForceShowIcon = r1;
    }

    private MenuPopupWindow createPopupWindow() {
        MenuPopupWindow r0 = new MenuPopupWindow(this.mContext, null, this.mPopupStyleAttr, this.mPopupStyleRes);
        r0.setHoverListener(this.mMenuItemHoverListener);
        r0.setOnItemClickListener(this);
        r0.setOnDismissListener(this);
        r0.setAnchorView(this.mAnchorView);
        r0.setDropDownGravity(this.mDropDownGravity);
        r0.setModal(true);
        r0.setInputMethodMode(2);
        return r0;
    }

    @Override
    public void show() {
        if (isShowing() == false) goto L5;
        return;
    L5:
        Iterator<MenuBuilder> r0 = this.mPendingMenus.iterator();
    L7:
        if (r0.hasNext() == false) goto L9;
        showMenu(r0.next());
        goto L7
    L9:
        this.mPendingMenus.clear();
        this.mShownAnchorView = this.mAnchorView;
        if (this.mShownAnchorView != null) goto L12;
        return;
    L12:
        if (this.mTreeObserver != null) goto L14;
        boolean r02 = true;
    L15:
        this.mTreeObserver = this.mShownAnchorView.getViewTreeObserver();
        if (r02 == false) goto L18;
        this.mTreeObserver.addOnGlobalLayoutListener(this.mGlobalLayoutListener);
    L18:
        this.mShownAnchorView.addOnAttachStateChangeListener(this.mAttachStateChangeListener);
        return;
    L14:
        r02 = false;
        goto L15
    }

    @Override
    public void dismiss() {
        int r0 = this.mShowingMenus.size();
        if (r0 <= 0) goto L10;
        CascadingMenuInfo[] r1 = (CascadingMenuInfo[]) this.mShowingMenus.toArray(new CascadingMenuInfo[r0]);
        int r02 = r0 - 1;
    L5:
        if (r02 < 0) goto L14;
        CascadingMenuInfo r2 = r1[r02];
        if (r2.window.isShowing() == false) goto L9;
        r2.window.dismiss();
    L9:
        r02 = r02 - 1;
        goto L5
    L14:
        return;
    }

    @Override
    public boolean onKey(View r1, int r2, KeyEvent r3) {
        if (r3.getAction() == 1) goto L5;
        return false;
    L5:
        if (r2 != 82) goto L10;
        dismiss();
        return true;
    L10:
        return false;
    }

    private int getInitialMenuPosition() {
        if (ViewCompat.getLayoutDirection(this.mAnchorView) != 1) goto L6;
        return 0;
    L6:
        return 1;
    }

    private int getNextMenuPosition(int r7) {
        List<CascadingMenuInfo> r0 = this.mShowingMenus;
        ListView r02 = r0.get(r0.size() - 1).getListView();
        int[] r1 = new int[2];
        r02.getLocationOnScreen(r1);
        Rect r3 = new Rect();
        this.mShownAnchorView.getWindowVisibleDisplayFrame(r3);
        if (this.mLastPosition != 1) goto L9;
        if (((r1[0] + r02.getWidth()) + r7) <= r3.right) goto L7;
        return 0;
    L7:
        return 1;
    L9:
        if ((r1[0] - r7) >= 0) goto L11;
        return 1;
    L11:
        return 0;
    }

    @Override
    public void addMenu(MenuBuilder r2) {
        r2.addMenuPresenter(this, this.mContext);
        if (isShowing() == false) goto L5;
        showMenu(r2);
        return;
    L5:
        this.mPendingMenus.add(r2);
    }

    private void showMenu(@NonNull MenuBuilder r15) {
        LayoutInflater r0 = LayoutInflater.from(this.mContext);
        MenuAdapter r1 = new MenuAdapter(r15, r0, this.mOverflowOnly, ITEM_LAYOUT);
        if (isShowing() == true) goto L8;
        if (this.mForceShowIcon == false) goto L8;
        r1.setForceShowIcon(true);
    L10:
        int r2 = measureIndividualMenuWidth(r1, null, this.mContext, this.mMenuMaxWidth);
        MenuPopupWindow r4 = createPopupWindow();
        r4.setAdapter(r1);
        r4.setContentWidth(r2);
        r4.setDropDownGravity(this.mDropDownGravity);
        if (this.mShowingMenus.size() <= 0) goto L13;
        List<CascadingMenuInfo> r12 = this.mShowingMenus;
        CascadingMenuInfo r13 = r12.get(r12.size() - 1);
        View r6 = findParentViewForSubmenu(r13, r15);
    L15:
        if (r6 == null) goto L38;
        r4.setTouchModal(false);
        r4.setEnterTransition(null);
        int r8 = getNextMenuPosition(r2);
        if (r8 != 1) goto L19;
        boolean r9 = true;
    L20:
        this.mLastPosition = r8;
        if (Build.VERSION.SDK_INT < 26) goto L23;
        r4.setAnchorView(r6);
        int r82 = 0;
        int r122 = 0;
    L28:
        if ((this.mDropDownGravity & 5) != 5) goto L32;
        if (r9 == true) goto L34;
        r2 = r6.getWidth();
    L35:
        int r123 = r122 - r2;
    L36:
        r4.setHorizontalOffset(r123);
        r4.setOverlapAnchor(true);
        r4.setVerticalOffset(r82);
    L44:
        this.mShowingMenus.add(new CascadingMenuInfo(r4, r15, this.mLastPosition));
        r4.show();
        ListView r22 = r4.getListView();
        r22.setOnKeyListener(this);
        if (r13 == null) goto L47;
        return;
    L47:
        if (this.mShowTitle == true) goto L49;
        return;
    L49:
        if (r15.getHeaderTitle() == null) goto L54;
        FrameLayout r02 = (FrameLayout) r0.inflate(R.layout.abc_popup_menu_header_item_layout, r22, false);
        TextView r14 = (TextView) r02.findViewById(android.R.id.title);
        r02.setEnabled(false);
        r14.setText(r15.getHeaderTitle());
        r22.addHeaderView(r02, null, false);
        r4.show();
        return;
    L54:
        return;
    L34:
        r123 = r122 + r2;
        goto L36
    L32:
        if (r9 == false) goto L35;
        r2 = r6.getWidth();
        goto L34
    L23:
        int[] r10 = new int[2];
        this.mAnchorView.getLocationOnScreen(r10);
        int[] r83 = new int[2];
        r6.getLocationOnScreen(r83);
        if ((this.mDropDownGravity & 7) != 5) goto L26;
        r10[0] = r10[0] + this.mAnchorView.getWidth();
        r83[0] = r83[0] + r6.getWidth();
    L26:
        r122 = r83[0] - r10[0];
        r82 = r83[1] - r10[1];
        goto L28
    L19:
        r9 = false;
        goto L20
    L38:
        if (this.mHasXOffset == false) goto L41;
        r4.setHorizontalOffset(this.mXOffset);
    L41:
        if (this.mHasYOffset == false) goto L43;
        r4.setVerticalOffset(this.mYOffset);
    L43:
        r4.setEpicenterBounds(getEpicenterBounds());
        goto L44
    L13:
        r13 = null;
        r6 = null;
    L8:
        if (isShowing() == false) goto L10;
        r1.setForceShowIcon(MenuPopup.shouldPreserveIconSpacing(r15));
        goto L10
    }

    private MenuItem findMenuItemForSubmenu(@NonNull MenuBuilder r5, @NonNull MenuBuilder r6) {
        int r0 = r5.size();
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L10;
        MenuItem r2 = r5.getItem(r1);
        if (r2.hasSubMenu() == false) goto L9;
        if (r6 != r2.getSubMenu()) goto L9;
        return r2;
    L9:
        r1 = r1 + 1;
        goto L3
    L10:
        return null;
    }

    @Nullable
    private View findParentViewForSubmenu(@NonNull CascadingMenuInfo r8, @NonNull MenuBuilder r9) {
        MenuItem r92 = findMenuItemForSubmenu(r8.menu, r9);
        if (r92 != null) goto L5;
        return null;
    L5:
        ListView r82 = r8.getListView();
        ListAdapter r1 = r82.getAdapter();
        int r3 = 0;
        if ((r1 instanceof HeaderViewListAdapter) == false) goto L8;
        HeaderViewListAdapter r12 = (HeaderViewListAdapter) r1;
        int r2 = r12.getHeadersCount();
        MenuAdapter r13 = (MenuAdapter) r12.getWrappedAdapter();
    L9:
        int r4 = r13.getCount();
    L11:
        if (r3 >= r4) goto L16;
        if (r92 == r13.getItem(r3)) goto L17;
        r3 = r3 + 1;
    L17:
        if (r3 != (-1)) goto L19;
        return null;
    L19:
        int r32 = (r3 + r2) - r82.getFirstVisiblePosition();
        if (r32 >= 0) goto L22;
    L26:
        return null;
    L22:
        if (r32 >= r82.getChildCount()) goto L26;
        return r82.getChildAt(r32);
    L16:
        r3 = -1;
        goto L17
    L8:
        r13 = (MenuAdapter) r1;
        r2 = 0;
        goto L9
    }

    @Override
    public boolean isShowing() {
        if (this.mShowingMenus.size() > 0) goto L5;
        return false;
    L5:
        if (this.mShowingMenus.get(0).window.isShowing() == false) goto L9;
        return true;
    L9:
        return false;
    }

    @Override
    public void onDismiss() {
        int r0 = this.mShowingMenus.size();
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L8;
        CascadingMenuInfo r3 = this.mShowingMenus.get(r2);
        if (r3.window.isShowing() == false) goto L9;
        r2 = r2 + 1;
    L9:
        if (r3 == null) goto L14;
        r3.menu.close(false);
        return;
    L14:
        return;
    L8:
        r3 = null;
        goto L9
    }

    @Override
    public void updateMenuView(boolean r2) {
        Iterator<CascadingMenuInfo> r22 = this.mShowingMenus.iterator();
    L4:
        if (r22.hasNext() == false) goto L6;
        toMenuAdapter(r22.next().getListView().getAdapter()).notifyDataSetChanged();
        goto L4
    }

    @Override
    public void setCallback(MenuPresenter.Callback r1) {
        this.mPresenterCallback = r1;
    }

    @Override
    public boolean onSubMenuSelected(SubMenuBuilder r5) {
        Iterator<CascadingMenuInfo> r0 = this.mShowingMenus.iterator();
    L4:
        if (r0.hasNext() == false) goto L10;
        CascadingMenuInfo r1 = r0.next();
        if (r5 != r1.menu) goto L4;
        r1.getListView().requestFocus();
        return true;
    L10:
        if (r5.hasVisibleItems() == false) goto L15;
        addMenu(r5);
        MenuPresenter.Callback r02 = this.mPresenterCallback;
        if (r02 == null) goto L14;
        r02.onOpenSubMenu(r5);
    L14:
        return true;
    L15:
        return false;
    }

    private int findIndexOfAddedMenu(@NonNull MenuBuilder r4) {
        int r0 = this.mShowingMenus.size();
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L8;
        if (r4 == this.mShowingMenus.get(r1).menu) goto L6;
        r1 = r1 + 1;
        goto L3
    L6:
        return r1;
    L8:
        return -1;
    }

    @Override
    public void onCloseMenu(MenuBuilder r6, boolean r7) {
        int r0 = findIndexOfAddedMenu(r6);
        if (r0 >= 0) goto L5;
        return;
    L5:
        int r1 = r0 + 1;
        if (r1 >= this.mShowingMenus.size()) goto L8;
        this.mShowingMenus.get(r1).menu.close(false);
    L8:
        CascadingMenuInfo r02 = this.mShowingMenus.remove(r0);
        r02.menu.removeMenuPresenter(this);
        if (this.mShouldCloseImmediately == false) goto L11;
        r02.window.setExitTransition(null);
        r02.window.setAnimationStyle(0);
    L11:
        r02.window.dismiss();
        int r03 = this.mShowingMenus.size();
        if (r03 <= 0) goto L14;
        this.mLastPosition = this.mShowingMenus.get(r03 - 1).position;
    L15:
        if (r03 != 0) goto L26;
        dismiss();
        MenuPresenter.Callback r72 = this.mPresenterCallback;
        if (r72 == null) goto L19;
        r72.onCloseMenu(r6, true);
    L19:
        ViewTreeObserver r62 = this.mTreeObserver;
        if (r62 != null) goto L22;
    L25:
        this.mShownAnchorView.removeOnAttachStateChangeListener(this.mAttachStateChangeListener);
        this.mOnDismissListener.onDismiss();
        return;
    L22:
        if (r62.isAlive() == false) goto L24;
        this.mTreeObserver.removeGlobalOnLayoutListener(this.mGlobalLayoutListener);
    L24:
        this.mTreeObserver = null;
        goto L25
    L26:
        if (r7 == false) goto L30;
        this.mShowingMenus.get(0).menu.close(false);
        return;
    L30:
        return;
    L14:
        this.mLastPosition = getInitialMenuPosition();
        goto L15
    }

    @Override
    public void setGravity(int r2) {
        if (this.mRawDropDownGravity == r2) goto L6;
        this.mRawDropDownGravity = r2;
        this.mDropDownGravity = GravityCompat.getAbsoluteGravity(r2, ViewCompat.getLayoutDirection(this.mAnchorView));
        return;
    }

    @Override
    public void setAnchorView(@NonNull View r2) {
        if (this.mAnchorView == r2) goto L6;
        this.mAnchorView = r2;
        this.mDropDownGravity = GravityCompat.getAbsoluteGravity(this.mRawDropDownGravity, ViewCompat.getLayoutDirection(this.mAnchorView));
        return;
    }

    @Override
    public void setOnDismissListener(PopupWindow.OnDismissListener r1) {
        this.mOnDismissListener = r1;
    }

    @Override
    public ListView getListView() {
        if (this.mShowingMenus.isEmpty() == false) goto L6;
        return null;
    L6:
        return this.mShowingMenus.get(r0.size() - 1).getListView();
    }

    @Override
    public void setHorizontalOffset(int r2) {
        this.mHasXOffset = true;
        this.mXOffset = r2;
    }

    @Override
    public void setVerticalOffset(int r2) {
        this.mHasYOffset = true;
        this.mYOffset = r2;
    }

    @Override
    public void setShowTitle(boolean r1) {
        this.mShowTitle = r1;
    }
}
