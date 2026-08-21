package android.support.v7.view.menu;

import android.content.Context;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.os.Parcelable;
import android.support.annotation.RestrictTo;
import android.support.v7.appcompat.R;
import android.support.v7.view.menu.MenuBuilder;
import android.support.v7.view.menu.MenuView;
import android.support.v7.widget.ActionMenuView;
import android.support.v7.widget.AppCompatTextView;
import android.support.v7.widget.ForwardingListener;
import android.support.v7.widget.TooltipCompat;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class ActionMenuItemView extends AppCompatTextView implements MenuView.ItemView, View.OnClickListener, ActionMenuView.ActionMenuChildView {
    private static final int MAX_ICON_SIZE = 32;
    private static final String TAG = "ActionMenuItemView";
    private boolean mAllowTextWithIcon;
    private boolean mExpandedFormat;
    private ForwardingListener mForwardingListener;
    private Drawable mIcon;
    MenuItemImpl mItemData;
    MenuBuilder.ItemInvoker mItemInvoker;
    private int mMaxIconSize;
    private int mMinWidth;
    PopupCallback mPopupCallback;
    private int mSavedPaddingLeft;
    private CharSequence mTitle;

    private class ActionMenuItemForwardingListener extends ForwardingListener {
        final ActionMenuItemView this$0;

        public ActionMenuItemForwardingListener(ActionMenuItemView r1) {
            this.this$0 = r1;
            super(r1);
        }

        @Override
        public ShowableListMenu getPopup() {
            if (this.this$0.mPopupCallback != null) goto L5;
            return null;
        L5:
            return this.this$0.mPopupCallback.getPopup();
        }

        @Override
        protected boolean onForwardingStarted() {
            if (this.this$0.mItemInvoker != null) goto L5;
            return false;
        L5:
            if (this.this$0.mItemInvoker.invokeItem(this.this$0.mItemData) == false) goto L13;
            ShowableListMenu r0 = getPopup();
            if (r0 != null) goto L9;
            return false;
        L9:
            if (r0.isShowing() == false) goto L15;
            return true;
        L15:
            return false;
        L13:
            return false;
        }
    }

    public static abstract class PopupCallback {
        public abstract ShowableListMenu getPopup();

        public PopupCallback() {
        }
    }

    @Override
    public boolean prefersCondensedTitle() {
        return true;
    }

    @Override
    public void setCheckable(boolean r1) {
    }

    @Override
    public void setChecked(boolean r1) {
    }

    @Override
    public void setShortcut(boolean r1, char r2) {
    }

    @Override
    public boolean showsIcon() {
        return true;
    }

    public ActionMenuItemView(Context r2) {
        this(r2, null);
    }

    public ActionMenuItemView(Context r2, AttributeSet r3) {
        this(r2, r3, 0);
    }

    public ActionMenuItemView(Context r4, AttributeSet r5, int r6) {
        super(r4, r5, r6);
        Resources r0 = r4.getResources();
        this.mAllowTextWithIcon = shouldAllowTextWithIcon();
        TypedArray r42 = r4.obtainStyledAttributes(r5, R.styleable.ActionMenuItemView, r6, 0);
        this.mMinWidth = r42.getDimensionPixelSize(R.styleable.ActionMenuItemView_android_minWidth, 0);
        r42.recycle();
        this.mMaxIconSize = (int) ((r0.getDisplayMetrics().density * 32.0f) + 0.5f);
        setOnClickListener(this);
        this.mSavedPaddingLeft = -1;
        setSaveEnabled(false);
    }

    @Override
    public void onConfigurationChanged(Configuration r1) {
        super.onConfigurationChanged(r1);
        this.mAllowTextWithIcon = shouldAllowTextWithIcon();
        updateTextButtonVisibility();
    }

    private boolean shouldAllowTextWithIcon() {
        Configuration r0 = getContext().getResources().getConfiguration();
        int r1 = r0.screenWidthDp;
        int r2 = r0.screenHeightDp;
        if (r1 < 480) goto L5;
    L11:
        return true;
    L5:
        if (r1 < 640) goto L8;
        if (r2 >= 480) goto L11;
    L8:
        if (r0.orientation == 2) goto L11;
        return false;
    }

    @Override
    public void setPadding(int r1, int r2, int r3, int r4) {
        this.mSavedPaddingLeft = r1;
        super.setPadding(r1, r2, r3, r4);
    }

    @Override
    public MenuItemImpl getItemData() {
        return this.mItemData;
    }

    @Override
    public void initialize(MenuItemImpl r1, int r2) {
        this.mItemData = r1;
        setIcon(r1.getIcon());
        setTitle(r1.getTitleForItemView(this));
        setId(r1.getItemId());
        if (r1.isVisible() == false) goto L5;
        int r22 = 0;
    L6:
        setVisibility(r22);
        setEnabled(r1.isEnabled());
        if (r1.hasSubMenu() == true) goto L9;
        return;
    L9:
        if (this.mForwardingListener != null) goto L13;
        this.mForwardingListener = new ActionMenuItemForwardingListener(this);
        return;
    L13:
        return;
    L5:
        r22 = 8;
        goto L6
    }

    @Override
    public boolean onTouchEvent(MotionEvent r2) {
        if (this.mItemData.hasSubMenu() == false) goto L11;
        ForwardingListener r0 = this.mForwardingListener;
        if (r0 == null) goto L11;
        if (r0.onTouch(this, r2) == false) goto L11;
        return true;
    L11:
        return super.onTouchEvent(r2);
    }

    @Override
    public void onClick(View r2) {
        MenuBuilder.ItemInvoker r22 = this.mItemInvoker;
        if (r22 == null) goto L6;
        r22.invokeItem(this.mItemData);
        return;
    }

    public void setItemInvoker(MenuBuilder.ItemInvoker r1) {
        this.mItemInvoker = r1;
    }

    public void setPopupCallback(PopupCallback r1) {
        this.mPopupCallback = r1;
    }

    public void setExpandedFormat(boolean r2) {
        if (this.mExpandedFormat == r2) goto L8;
        this.mExpandedFormat = r2;
        MenuItemImpl r22 = this.mItemData;
        if (r22 == null) goto L9;
        r22.actionFormatChanged();
        return;
    L9:
        return;
    }

    private void updateTextButtonVisibility() {
        boolean r1 = true;
        boolean r0 = !TextUtils.isEmpty(this.mTitle);
        if (this.mIcon != null) goto L5;
    L12:
        boolean r02 = r0 & r1;
        CharSequence r12 = null;
        if (r02 == false) goto L15;
        CharSequence r2 = this.mTitle;
    L16:
        setText(r2);
        CharSequence r22 = this.mItemData.getContentDescription();
        if (TextUtils.isEmpty(r22) == false) goto L22;
        if (r02 == false) goto L20;
        CharSequence r23 = null;
    L21:
        setContentDescription(r23);
    L23:
        CharSequence r24 = this.mItemData.getTooltipText();
        if (TextUtils.isEmpty(r24) == false) goto L29;
        if (r02 == true) goto L28;
        r12 = this.mItemData.getTitle();
    L28:
        TooltipCompat.setTooltipText(this, r12);
        return;
    L29:
        TooltipCompat.setTooltipText(this, r24);
        return;
    L20:
        r23 = this.mItemData.getTitle();
        goto L21
    L22:
        setContentDescription(r22);
        goto L23
    L15:
        r2 = null;
        goto L16
    L5:
        if (this.mItemData.showsTextAsAction() == true) goto L7;
    L11:
        r1 = false;
        goto L12
    L7:
        if (this.mAllowTextWithIcon == true) goto L12;
        if (this.mExpandedFormat == false) goto L11;
        goto L11
    }

    @Override
    public void setIcon(Drawable r5) {
        this.mIcon = r5;
        if (r5 == null) goto L11;
        int r0 = r5.getIntrinsicWidth();
        int r1 = r5.getIntrinsicHeight();
        int r2 = this.mMaxIconSize;
        if (r0 <= r2) goto L7;
        r1 = (int) (r1 * (r2 / r0));
        r0 = r2;
    L7:
        int r22 = this.mMaxIconSize;
        if (r1 <= r22) goto L10;
        r0 = (int) (r0 * (r22 / r1));
        r1 = r22;
    L10:
        r5.setBounds(0, 0, r0, r1);
    L11:
        setCompoundDrawables(r5, null, null, null);
        updateTextButtonVisibility();
    }

    public boolean hasText() {
        return !TextUtils.isEmpty(getText());
    }

    @Override
    public void setTitle(CharSequence r1) {
        this.mTitle = r1;
        updateTextButtonVisibility();
    }

    @Override
    public boolean needsDividerBefore() {
        if (hasText() == true) goto L5;
    L7:
        return false;
    L5:
        if (this.mItemData.getIcon() != null) goto L7;
        return true;
    }

    @Override
    public boolean needsDividerAfter() {
        return hasText();
    }

    @Override
    protected void onMeasure(int r6, int r7) {
        boolean r0 = hasText();
        if (r0 == false) goto L7;
        int r1 = this.mSavedPaddingLeft;
        if (r1 < 0) goto L7;
        super.setPadding(r1, getPaddingTop(), getPaddingRight(), getPaddingBottom());
    L7:
        super.onMeasure(r6, r7);
        int r12 = View.MeasureSpec.getMode(r6);
        int r62 = View.MeasureSpec.getSize(r6);
        int r2 = getMeasuredWidth();
        if (r12 != Integer.MIN_VALUE) goto L10;
        int r63 = Math.min(r62, this.mMinWidth);
    L12:
        if (r12 != 1073741824) goto L14;
    L17:
        if (r0 == false) goto L19;
        return;
    L19:
        if (this.mIcon == null) goto L23;
        super.setPadding((getMeasuredWidth() - this.mIcon.getBounds().width()) / 2, getPaddingTop(), getPaddingRight(), getPaddingBottom());
        return;
    L23:
        return;
    L14:
        if (this.mMinWidth <= 0) goto L17;
        if (r2 >= r63) goto L17;
        super.onMeasure(View.MeasureSpec.makeMeasureSpec(r63, 1073741824), r7);
        goto L17
    L10:
        r63 = this.mMinWidth;
        goto L12
    }

    @Override
    public void onRestoreInstanceState(Parcelable r1) {
        super.onRestoreInstanceState(null);
    }
}
