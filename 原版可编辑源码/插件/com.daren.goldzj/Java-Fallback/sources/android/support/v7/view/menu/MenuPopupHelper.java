package android.support.v7.view.menu;

import android.content.Context;
import android.graphics.Point;
import android.graphics.Rect;
import android.os.Build;
import android.support.annotation.AttrRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.annotation.StyleRes;
import android.support.v4.view.GravityCompat;
import android.support.v4.view.ViewCompat;
import android.support.v7.appcompat.R;
import android.support.v7.view.menu.MenuPresenter;
import android.view.Display;
import android.view.View;
import android.view.WindowManager;
import android.widget.ListView;
import android.widget.PopupWindow;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class MenuPopupHelper implements MenuHelper {
    private static final int TOUCH_EPICENTER_SIZE_DP = 48;
    private View mAnchorView;
    private final Context mContext;
    private int mDropDownGravity;
    private boolean mForceShowIcon;
    private final PopupWindow.OnDismissListener mInternalOnDismissListener;
    private final MenuBuilder mMenu;
    private PopupWindow.OnDismissListener mOnDismissListener;
    private final boolean mOverflowOnly;
    private MenuPopup mPopup;
    private final int mPopupStyleAttr;
    private final int mPopupStyleRes;
    private MenuPresenter.Callback mPresenterCallback;

    public MenuPopupHelper(@NonNull Context r8, @NonNull MenuBuilder r9) {
        this(r8, r9, null, false, R.attr.popupMenuStyle, 0);
    }

    public MenuPopupHelper(@NonNull Context r8, @NonNull MenuBuilder r9, @NonNull View r10) {
        this(r8, r9, r10, false, R.attr.popupMenuStyle, 0);
    }

    public MenuPopupHelper(@NonNull Context r8, @NonNull MenuBuilder r9, @NonNull View r10, boolean r11, @AttrRes int r12) {
        this(r8, r9, r10, r11, r12, 0);
    }

    public MenuPopupHelper(@NonNull Context r2, @NonNull MenuBuilder r3, @NonNull View r4, boolean r5, @AttrRes int r6, @StyleRes int r7) {
        this.mDropDownGravity = GravityCompat.START;
        this.mInternalOnDismissListener = new 1(this);
        this.mContext = r2;
        this.mMenu = r3;
        this.mAnchorView = r4;
        this.mOverflowOnly = r5;
        this.mPopupStyleAttr = r6;
        this.mPopupStyleRes = r7;
    }

    public void setOnDismissListener(@Nullable PopupWindow.OnDismissListener r1) {
        this.mOnDismissListener = r1;
    }

    public void setAnchorView(@NonNull View r1) {
        this.mAnchorView = r1;
    }

    public void setForceShowIcon(boolean r2) {
        this.mForceShowIcon = r2;
        MenuPopup r0 = this.mPopup;
        if (r0 == null) goto L6;
        r0.setForceShowIcon(r2);
        return;
    }

    public void setGravity(int r1) {
        this.mDropDownGravity = r1;
    }

    public int getGravity() {
        return this.mDropDownGravity;
    }

    public void show() {
        if (tryShow() == false) goto L6;
        return;
    L6:
        throw new IllegalStateException("MenuPopupHelper cannot be used without an anchor");
    }

    public void show(int r1, int r2) {
        if (tryShow(r1, r2) == false) goto L6;
        return;
    L6:
        throw new IllegalStateException("MenuPopupHelper cannot be used without an anchor");
    }

    @NonNull
    public MenuPopup getPopup() {
        if (this.mPopup != null) goto L6;
        this.mPopup = createPopup();
    L6:
        return this.mPopup;
    }

    public boolean tryShow() {
        if (isShowing() == false) goto L6;
        return true;
    L6:
        if (this.mAnchorView != null) goto L8;
        return false;
    L8:
        showPopup(0, 0, false, false);
        return true;
    }

    public boolean tryShow(int r3, int r4) {
        if (isShowing() == false) goto L6;
        return true;
    L6:
        if (this.mAnchorView != null) goto L9;
        return false;
    L9:
        showPopup(r3, r4, true, true);
        return true;
    }

    @NonNull
    private MenuPopup createPopup() {
        Display r0 = ((WindowManager) this.mContext.getSystemService("window")).getDefaultDisplay();
        Point r1 = new Point();
        if (Build.VERSION.SDK_INT < 17) goto L5;
        r0.getRealSize(r1);
    L7:
        if (Math.min(r1.x, r1.y) < this.mContext.getResources().getDimensionPixelSize(R.dimen.abc_cascading_menus_min_smallest_width)) goto L9;
        boolean r02 = true;
    L10:
        if (r02 == false) goto L12;
        MenuPopup r03 = new CascadingMenuPopup(this.mContext, this.mAnchorView, this.mPopupStyleAttr, this.mPopupStyleRes, this.mOverflowOnly);
    L13:
        r03.addMenu(this.mMenu);
        r03.setOnDismissListener(this.mInternalOnDismissListener);
        r03.setAnchorView(this.mAnchorView);
        r03.setCallback(this.mPresenterCallback);
        r03.setForceShowIcon(this.mForceShowIcon);
        r03.setGravity(this.mDropDownGravity);
        return r03;
    L12:
        r03 = new StandardMenuPopup(this.mContext, this.mMenu, this.mAnchorView, this.mPopupStyleAttr, this.mPopupStyleRes, this.mOverflowOnly);
        goto L13
    L9:
        r02 = false;
        goto L10
    L5:
        r0.getSize(r1);
        goto L7
    }

    private void showPopup(int r4, int r5, boolean r6, boolean r7) {
        MenuPopup r0 = getPopup();
        r0.setShowTitle(r7);
        if (r6 == true) goto L5;
    L8:
        r0.show();
        return;
    L5:
        if ((GravityCompat.getAbsoluteGravity(this.mDropDownGravity, ViewCompat.getLayoutDirection(this.mAnchorView)) & 7) != 5) goto L7;
        r4 = r4 - this.mAnchorView.getWidth();
    L7:
        r0.setHorizontalOffset(r4);
        r0.setVerticalOffset(r5);
        int r62 = (int) ((this.mContext.getResources().getDisplayMetrics().density * 48.0f) / 2.0f);
        r0.setEpicenterBounds(new Rect(r4 - r62, r5 - r62, r4 + r62, r5 + r62));
        goto L8
    }

    @Override
    public void dismiss() {
        if (isShowing() == false) goto L6;
        this.mPopup.dismiss();
        return;
    }

    protected void onDismiss() {
        this.mPopup = null;
        PopupWindow.OnDismissListener r0 = this.mOnDismissListener;
        if (r0 == null) goto L6;
        r0.onDismiss();
        return;
    }

    public boolean isShowing() {
        MenuPopup r0 = this.mPopup;
        if (r0 != null) goto L5;
    L7:
        return false;
    L5:
        if (r0.isShowing() == false) goto L7;
        return true;
    }

    @Override
    public void setPresenterCallback(@Nullable MenuPresenter.Callback r2) {
        this.mPresenterCallback = r2;
        MenuPopup r0 = this.mPopup;
        if (r0 == null) goto L6;
        r0.setCallback(r2);
        return;
    }

    public ListView getListView() {
        return getPopup().getListView();
    }
}
