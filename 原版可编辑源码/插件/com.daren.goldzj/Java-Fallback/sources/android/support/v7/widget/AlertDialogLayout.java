package android.support.v7.widget;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.view.GravityCompat;
import android.support.v4.view.ViewCompat;
import android.support.v7.appcompat.R;
import android.support.v7.widget.LinearLayoutCompat;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class AlertDialogLayout extends LinearLayoutCompat {
    public AlertDialogLayout(@Nullable Context r1) {
        super(r1);
    }

    public AlertDialogLayout(@Nullable Context r1, @Nullable AttributeSet r2) {
        super(r1, r2);
    }

    @Override
    protected void onMeasure(int r2, int r3) {
        if (tryOnMeasure(r2, r3) == true) goto L6;
        super.onMeasure(r2, r3);
        return;
    }

    private boolean tryOnMeasure(int r17, int r18) {
        int r3 = getChildCount();
        View r6 = null;
        View r7 = null;
        View r8 = null;
        int r4 = 0;
    L4:
        if (r4 >= r3) goto L24;
        View r10 = getChildAt(r4);
        if (r10.getVisibility() == 8) goto L23;
        int r9 = r10.getId();
        if (r9 != R.id.topPanel) goto L12;
        r6 = r10;
        goto L23
    L12:
        if (r9 != R.id.buttonPanel) goto L15;
        r7 = r10;
        goto L23
    L15:
        if (r9 != R.id.contentPanel) goto L17;
    L20:
        if (r8 != null) goto L21;
        r8 = r10;
        goto L23
    L21:
        return false;
    L17:
        if (r9 == R.id.customPanel) goto L20;
        return false;
    L23:
        r4 = r4 + 1;
        goto L4
    L24:
        int r42 = View.MeasureSpec.getMode(r18);
        int r102 = View.MeasureSpec.getSize(r18);
        int r11 = View.MeasureSpec.getMode(r17);
        int r12 = getPaddingTop() + getPaddingBottom();
        if (r6 == null) goto L27;
        r6.measure(r17, 0);
        r12 = r12 + r6.getMeasuredHeight();
        int r62 = View.combineMeasuredStates(0, r6.getMeasuredState());
    L28:
        if (r7 == null) goto L30;
        r7.measure(r17, 0);
        int r13 = resolveMinimumHeight(r7);
        int r14 = r7.getMeasuredHeight() - r13;
        r12 = r12 + r13;
        r62 = View.combineMeasuredStates(r62, r7.getMeasuredState());
    L31:
        if (r8 == null) goto L36;
        if (r42 != 0) goto L34;
        int r15 = 0;
    L35:
        r8.measure(r17, r15);
        int r152 = r8.getMeasuredHeight();
        r12 = r12 + r152;
        r62 = View.combineMeasuredStates(r62, r8.getMeasuredState());
    L37:
        int r103 = r102 - r12;
        if (r7 == null) goto L43;
        int r122 = r12 - r13;
        int r142 = Math.min(r103, r14);
        if (r142 <= 0) goto L42;
        r103 = r103 - r142;
        r13 = r13 + r142;
    L42:
        r7.measure(r17, View.MeasureSpec.makeMeasureSpec(r13, 1073741824));
        r12 = r122 + r7.getMeasuredHeight();
        r62 = View.combineMeasuredStates(r62, r7.getMeasuredState());
    L43:
        if (r8 == null) goto L46;
        if (r103 <= 0) goto L46;
        r8.measure(r17, View.MeasureSpec.makeMeasureSpec(r152 + r103, r42));
        r12 = (r12 - r152) + r8.getMeasuredHeight();
        r62 = View.combineMeasuredStates(r62, r8.getMeasuredState());
    L46:
        int r43 = 0;
        int r72 = 0;
    L47:
        if (r43 >= r3) goto L52;
        View r82 = getChildAt(r43);
        if (r82.getVisibility() == 8) goto L51;
        r72 = Math.max(r72, r82.getMeasuredWidth());
    L51:
        r43 = r43 + 1;
        goto L47
    L52:
        setMeasuredDimension(View.resolveSizeAndState(r72 + (getPaddingLeft() + getPaddingRight()), r17, r62), View.resolveSizeAndState(r12, r18, 0));
        if (r11 == 1073741824) goto L67;
        forceUniformWidth(r3, r18);
        return true;
    L67:
        return true;
    L34:
        r15 = View.MeasureSpec.makeMeasureSpec(Math.max(0, r102 - r12), r42);
        goto L35
    L36:
        r152 = 0;
        goto L37
    L30:
        r13 = 0;
        r14 = 0;
        goto L31
    L27:
        r62 = 0;
        goto L28
    }

    private void forceUniformWidth(int r11, int r12) {
        int r0 = View.MeasureSpec.makeMeasureSpec(getMeasuredWidth(), 1073741824);
        int r1 = 0;
    L3:
        if (r1 >= r11) goto L10;
        View r3 = getChildAt(r1);
        if (r3.getVisibility() == 8) goto L9;
        LinearLayoutCompat.LayoutParams r8 = (LinearLayoutCompat.LayoutParams) r3.getLayoutParams();
        if (r8.width != (-1)) goto L9;
        int r9 = r8.height;
        r8.height = r3.getMeasuredHeight();
        measureChildWithMargins(r3, r0, 0, r12, 0);
        r8.height = r9;
    L9:
        r1 = r1 + 1;
        goto L3
    }

    private static int resolveMinimumHeight(View r3) {
        int r0 = ViewCompat.getMinimumHeight(r3);
        if (r0 <= 0) goto L6;
        return r0;
    L6:
        if ((r3 instanceof ViewGroup) == false) goto L11;
        ViewGroup r32 = (ViewGroup) r3;
        if (r32.getChildCount() != 1) goto L11;
        return resolveMinimumHeight(r32.getChildAt(0));
    L11:
        return 0;
    }

    @Override
    protected void onLayout(boolean r18, int r19, int r20, int r21, int r22) {
        int r7 = getPaddingLeft();
        int r0 = r21 - r19;
        int r8 = r0 - getPaddingRight();
        int r9 = (r0 - r7) - getPaddingRight();
        int r02 = getMeasuredHeight();
        int r10 = getChildCount();
        int r1 = getGravity();
        int r2 = r1 & 112;
        int r11 = r1 & GravityCompat.RELATIVE_HORIZONTAL_GRAVITY_MASK;
        if (r2 != 16) goto L5;
        int r03 = getPaddingTop() + (((r22 - r20) - r02) / 2);
    L9:
        Drawable r12 = getDividerDrawable();
        if (r12 != null) goto L12;
        int r122 = 0;
    L13:
        int r13 = 0;
    L14:
        if (r13 >= r10) goto L35;
        View r14 = getChildAt(r13);
        if (r14 == null) goto L34;
        if (r14.getVisibility() == 8) goto L34;
        int r4 = r14.getMeasuredWidth();
        int r142 = r14.getMeasuredHeight();
        LinearLayoutCompat.LayoutParams r15 = (LinearLayoutCompat.LayoutParams) r14.getLayoutParams();
        int r23 = r15.gravity;
        if (r23 >= 0) goto L22;
        r23 = r11;
    L22:
        int r24 = GravityCompat.getAbsoluteGravity(r23, ViewCompat.getLayoutDirection(this)) & 7;
        if (r24 != 1) goto L25;
        int r25 = (((r9 - r4) / 2) + r7) + r15.leftMargin;
        int r3 = r15.rightMargin;
    L29:
        int r26 = r25 - r3;
    L31:
        if (hasDividerBeforeChildAt(r13) == false) goto L33;
        r03 = r03 + r122;
    L33:
        int r16 = r03 + r15.topMargin;
        setChildFrame(r14, r26, r16, r4, r142);
        r03 = r16 + (r142 + r15.bottomMargin);
        goto L34
    L25:
        if (r24 == 5) goto L27;
        r26 = r15.leftMargin + r7;
        goto L31
    L27:
        r25 = r8 - r4;
        r3 = r15.rightMargin;
    L34:
        r13 = r13 + 1;
        goto L14
    L35:
        return;
    L12:
        r122 = r12.getIntrinsicHeight();
        goto L13
    L5:
        if (r2 == 80) goto L7;
        r03 = getPaddingTop();
        goto L9
    L7:
        r03 = ((getPaddingTop() + r22) - r20) - r02;
        goto L9
    }

    private void setChildFrame(View r1, int r2, int r3, int r4, int r5) {
        r1.layout(r2, r3, r4 + r2, r5 + r3);
    }
}
