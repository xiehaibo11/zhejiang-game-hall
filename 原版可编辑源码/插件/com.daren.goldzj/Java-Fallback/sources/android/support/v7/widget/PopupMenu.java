package android.support.v7.widget;

import android.content.Context;
import android.support.annotation.AttrRes;
import android.support.annotation.MenuRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.annotation.StyleRes;
import android.support.v7.appcompat.R;
import android.support.v7.view.SupportMenuInflater;
import android.support.v7.view.menu.MenuBuilder;
import android.support.v7.view.menu.MenuPopupHelper;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.widget.ListView;

public class PopupMenu {
    private final View mAnchor;
    private final Context mContext;
    private View.OnTouchListener mDragListener;
    private final MenuBuilder mMenu;
    OnMenuItemClickListener mMenuItemClickListener;
    OnDismissListener mOnDismissListener;
    final MenuPopupHelper mPopup;

    public interface OnDismissListener {
        void onDismiss(PopupMenu r1);
    }

    public interface OnMenuItemClickListener {
        boolean onMenuItemClick(MenuItem r1);
    }

    public PopupMenu(@NonNull Context r2, @NonNull View r3) {
        this(r2, r3, 0);
    }

    public PopupMenu(@NonNull Context r7, @NonNull View r8, int r9) {
        this(r7, r8, r9, R.attr.popupMenuStyle, 0);
    }

    public PopupMenu(@NonNull Context r10, @NonNull View r11, int r12, @AttrRes int r13, @StyleRes int r14) {
        this.mContext = r10;
        this.mAnchor = r11;
        this.mMenu = new MenuBuilder(r10);
        this.mMenu.setCallback(new 1(this));
        this.mPopup = new MenuPopupHelper(r10, this.mMenu, r11, false, r13, r14);
        this.mPopup.setGravity(r12);
        this.mPopup.setOnDismissListener(new 2(this));
    }

    public void setGravity(int r2) {
        this.mPopup.setGravity(r2);
    }

    public int getGravity() {
        return this.mPopup.getGravity();
    }

    @NonNull
    public View.OnTouchListener getDragToOpenListener() {
        if (this.mDragListener != null) goto L6;
        final View r1 = this.mAnchor;
        this.mDragListener = new 3(this, r1);
    L6:
        return this.mDragListener;
    }

    @NonNull
    public Menu getMenu() {
        return this.mMenu;
    }

    @NonNull
    public MenuInflater getMenuInflater() {
        return new SupportMenuInflater(this.mContext);
    }

    public void inflate(@MenuRes int r3) {
        getMenuInflater().inflate(r3, this.mMenu);
    }

    public void show() {
        this.mPopup.show();
    }

    public void dismiss() {
        this.mPopup.dismiss();
    }

    public void setOnMenuItemClickListener(@Nullable OnMenuItemClickListener r1) {
        this.mMenuItemClickListener = r1;
    }

    public void setOnDismissListener(@Nullable OnDismissListener r1) {
        this.mOnDismissListener = r1;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    ListView getMenuListView() {
        if (this.mPopup.isShowing() == true) goto L7;
        return null;
    L7:
        return this.mPopup.getListView();
    }
}
