package android.support.v7.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.support.annotation.RestrictTo;
import android.support.v4.view.ViewCompat;
import android.support.v7.appcompat.R;
import android.util.AttributeSet;
import android.view.View;
import android.widget.LinearLayout;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class ButtonBarLayout extends LinearLayout {
    private static final int PEEK_BUTTON_DP = 16;
    private boolean mAllowStacking;
    private int mLastWidthSize;
    private int mMinimumHeight;

    public ButtonBarLayout(Context r2, AttributeSet r3) {
        super(r2, r3);
        this.mLastWidthSize = -1;
        this.mMinimumHeight = 0;
        TypedArray r22 = r2.obtainStyledAttributes(r3, R.styleable.ButtonBarLayout);
        this.mAllowStacking = r22.getBoolean(R.styleable.ButtonBarLayout_allowStacking, true);
        r22.recycle();
    }

    public void setAllowStacking(boolean r2) {
        if (this.mAllowStacking == r2) goto L11;
        this.mAllowStacking = r2;
        if (this.mAllowStacking == false) goto L7;
    L9:
        requestLayout();
        return;
    L7:
        if (getOrientation() != 1) goto L9;
        setStacked(false);
        goto L9
    }

    @Override
    protected void onMeasure(int r6, int r7) {
        int r0 = View.MeasureSpec.getSize(r6);
        int r2 = 0;
        if (this.mAllowStacking == false) goto L11;
        if (r0 > this.mLastWidthSize) goto L7;
    L9:
        this.mLastWidthSize = r0;
        goto L11
    L7:
        if (isStacked() == false) goto L9;
        setStacked(false);
    L11:
        if (isStacked() == false) goto L13;
    L15:
        int r02 = r6;
        boolean r1 = false;
    L16:
        super.onMeasure(r02, r7);
        if (this.mAllowStacking == true) goto L19;
    L26:
        if (r1 == false) goto L28;
        super.onMeasure(r6, r7);
    L28:
        int r62 = getNextVisibleChildIndex(0);
        if (r62 < 0) goto L38;
        View r72 = getChildAt(r62);
        LinearLayout.LayoutParams r03 = (LinearLayout.LayoutParams) r72.getLayoutParams();
        int r12 = (((getPaddingTop() + r72.getMeasuredHeight()) + r03.topMargin) + r03.bottomMargin) + 0;
        if (isStacked() == false) goto L36;
        int r63 = getNextVisibleChildIndex(r62 + 1);
        if (r63 < 0) goto L35;
        r12 = r12 + (getChildAt(r63).getPaddingTop() + ((int) (getResources().getDisplayMetrics().density * 16.0f)));
    L35:
        r2 = r12;
        goto L38
    L36:
        r2 = r12 + getPaddingBottom();
    L38:
        if (ViewCompat.getMinimumHeight(this) == r2) goto L41;
        setMinimumHeight(r2);
        return;
    L41:
        return;
    L19:
        if (isStacked() == true) goto L26;
        if ((getMeasuredWidthAndState() & ViewCompat.MEASURED_STATE_MASK) != 16777216) goto L23;
        boolean r04 = true;
    L24:
        if (r04 == false) goto L26;
        setStacked(true);
        r1 = true;
        goto L26
    L23:
        r04 = false;
        goto L24
    L13:
        if (View.MeasureSpec.getMode(r6) != 1073741824) goto L15;
        r02 = View.MeasureSpec.makeMeasureSpec(r0, Integer.MIN_VALUE);
        r1 = true;
        goto L16
    }

    private int getNextVisibleChildIndex(int r3) {
        int r0 = getChildCount();
    L3:
        if (r3 >= r0) goto L8;
        if (getChildAt(r3).getVisibility() == 0) goto L6;
        r3 = r3 + 1;
        goto L3
    L6:
        return r3;
    L8:
        return -1;
    }

    @Override
    public int getMinimumHeight() {
        return Math.max(this.mMinimumHeight, super.getMinimumHeight());
    }

    private void setStacked(boolean r2) {
        setOrientation(r2 ? 1 : 0);
        if (r2 == false) goto L5;
        int r0 = 5;
    L6:
        setGravity(r0);
        View r02 = findViewById(R.id.spacer);
        if (r02 == null) goto L12;
        if (r2 == false) goto L10;
        int r22 = 8;
    L11:
        r02.setVisibility(r22);
        goto L12
    L10:
        r22 = 4;
    L12:
        int r23 = getChildCount() - 2;
    L13:
        if (r23 < 0) goto L15;
        bringChildToFront(getChildAt(r23));
        r23 = r23 - 1;
        goto L13
    L15:
        return;
    L5:
        r0 = 80;
        goto L6
    }

    private boolean isStacked() {
        if (getOrientation() == 1) goto L7;
        return false;
    L7:
        return true;
    }
}
