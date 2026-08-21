package android.support.v7.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.drawable.Drawable;
import android.support.annotation.RestrictTo;
import android.support.v4.view.GravityCompat;
import android.support.v4.view.InputDeviceCompat;
import android.support.v4.view.ViewCompat;
import android.support.v7.appcompat.R;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeInfo;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class LinearLayoutCompat extends ViewGroup {
    public static final int HORIZONTAL = 0;
    private static final int INDEX_BOTTOM = 2;
    private static final int INDEX_CENTER_VERTICAL = 0;
    private static final int INDEX_FILL = 3;
    private static final int INDEX_TOP = 1;
    public static final int SHOW_DIVIDER_BEGINNING = 1;
    public static final int SHOW_DIVIDER_END = 4;
    public static final int SHOW_DIVIDER_MIDDLE = 2;
    public static final int SHOW_DIVIDER_NONE = 0;
    public static final int VERTICAL = 1;
    private static final int VERTICAL_GRAVITY_COUNT = 4;
    private boolean mBaselineAligned;
    private int mBaselineAlignedChildIndex;
    private int mBaselineChildTop;
    private Drawable mDivider;
    private int mDividerHeight;
    private int mDividerPadding;
    private int mDividerWidth;
    private int mGravity;
    private int[] mMaxAscent;
    private int[] mMaxDescent;
    private int mOrientation;
    private int mShowDividers;
    private int mTotalLength;
    private boolean mUseLargestChild;
    private float mWeightSum;

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface DividerMode {
    }

    public static class LayoutParams extends ViewGroup.MarginLayoutParams {
        public int gravity;
        public float weight;

        public LayoutParams(Context r3, AttributeSet r4) {
            super(r3, r4);
            this.gravity = -1;
            TypedArray r32 = r3.obtainStyledAttributes(r4, R.styleable.LinearLayoutCompat_Layout);
            this.weight = r32.getFloat(R.styleable.LinearLayoutCompat_Layout_android_layout_weight, 0.0f);
            this.gravity = r32.getInt(R.styleable.LinearLayoutCompat_Layout_android_layout_gravity, -1);
            r32.recycle();
        }

        public LayoutParams(int r1, int r2) {
            super(r1, r2);
            this.gravity = -1;
            this.weight = 0.0f;
        }

        public LayoutParams(int r1, int r2, float r3) {
            super(r1, r2);
            this.gravity = -1;
            this.weight = r3;
        }

        public LayoutParams(ViewGroup.LayoutParams r1) {
            super(r1);
            this.gravity = -1;
        }

        public LayoutParams(ViewGroup.MarginLayoutParams r1) {
            super(r1);
            this.gravity = -1;
        }

        public LayoutParams(LayoutParams r2) {
            super(r2);
            this.gravity = -1;
            this.weight = r2.weight;
            this.gravity = r2.gravity;
        }
    }

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface OrientationMode {
    }

    int getChildrenSkipCount(View r1, int r2) {
        return 0;
    }

    int getLocationOffset(View r1) {
        return 0;
    }

    int getNextLocationOffset(View r1) {
        return 0;
    }

    int measureNullChild(int r1) {
        return 0;
    }

    @Override
    public boolean shouldDelayChildPressedState() {
        return false;
    }

    @Override
    protected ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return generateDefaultLayoutParams();
    }

    @Override
    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet r1) {
        return generateLayoutParams(r1);
    }

    @Override
    protected ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams r1) {
        return generateLayoutParams(r1);
    }

    public LinearLayoutCompat(Context r2) {
        this(r2, null);
    }

    public LinearLayoutCompat(Context r2, AttributeSet r3) {
        this(r2, r3, 0);
    }

    public LinearLayoutCompat(Context r5, AttributeSet r6, int r7) {
        super(r5, r6, r7);
        this.mBaselineAligned = true;
        this.mBaselineAlignedChildIndex = -1;
        this.mBaselineChildTop = 0;
        this.mGravity = 8388659;
        TintTypedArray r52 = TintTypedArray.obtainStyledAttributes(r5, r6, R.styleable.LinearLayoutCompat, r7, 0);
        int r62 = r52.getInt(R.styleable.LinearLayoutCompat_android_orientation, -1);
        if (r62 < 0) goto L5;
        setOrientation(r62);
    L5:
        int r63 = r52.getInt(R.styleable.LinearLayoutCompat_android_gravity, -1);
        if (r63 < 0) goto L8;
        setGravity(r63);
    L8:
        boolean r64 = r52.getBoolean(R.styleable.LinearLayoutCompat_android_baselineAligned, true);
        if (r64 == true) goto L11;
        setBaselineAligned(r64);
    L11:
        this.mWeightSum = r52.getFloat(R.styleable.LinearLayoutCompat_android_weightSum, -1.0f);
        this.mBaselineAlignedChildIndex = r52.getInt(R.styleable.LinearLayoutCompat_android_baselineAlignedChildIndex, -1);
        this.mUseLargestChild = r52.getBoolean(R.styleable.LinearLayoutCompat_measureWithLargestChild, false);
        setDividerDrawable(r52.getDrawable(R.styleable.LinearLayoutCompat_divider));
        this.mShowDividers = r52.getInt(R.styleable.LinearLayoutCompat_showDividers, 0);
        this.mDividerPadding = r52.getDimensionPixelSize(R.styleable.LinearLayoutCompat_dividerPadding, 0);
        r52.recycle();
    }

    public void setShowDividers(int r2) {
        if (r2 == this.mShowDividers) goto L5;
        requestLayout();
    L5:
        this.mShowDividers = r2;
    }

    public int getShowDividers() {
        return this.mShowDividers;
    }

    public Drawable getDividerDrawable() {
        return this.mDivider;
    }

    public void setDividerDrawable(Drawable r3) {
        if (r3 != this.mDivider) goto L5;
        return;
    L5:
        this.mDivider = r3;
        boolean r0 = false;
        if (r3 == null) goto L8;
        this.mDividerWidth = r3.getIntrinsicWidth();
        this.mDividerHeight = r3.getIntrinsicHeight();
    L9:
        if (r3 != null) goto L11;
        r0 = true;
    L11:
        setWillNotDraw(r0);
        requestLayout();
        return;
    L8:
        this.mDividerWidth = 0;
        this.mDividerHeight = 0;
        goto L9
    }

    public void setDividerPadding(int r1) {
        this.mDividerPadding = r1;
    }

    public int getDividerPadding() {
        return this.mDividerPadding;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public int getDividerWidth() {
        return this.mDividerWidth;
    }

    @Override
    protected void onDraw(Canvas r3) {
        if (this.mDivider != null) goto L6;
        return;
    L6:
        if (this.mOrientation != 1) goto L8;
        drawDividersVertical(r3);
        return;
    L8:
        drawDividersHorizontal(r3);
    }

    void drawDividersVertical(Canvas r6) {
        int r0 = getVirtualChildCount();
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L13;
        View r2 = getVirtualChildAt(r1);
        if (r2 == null) goto L11;
        if (r2.getVisibility() == 8) goto L11;
        if (hasDividerBeforeChildAt(r1) == false) goto L11;
        drawHorizontalDivider(r6, (r2.getTop() - ((LayoutParams) r2.getLayoutParams()).topMargin) - this.mDividerHeight);
    L11:
        r1 = r1 + 1;
        goto L3
    L13:
        if (hasDividerBeforeChildAt(r0) == false) goto L25;
        View r02 = getVirtualChildAt(r0 - 1);
        if (r02 != null) goto L17;
        int r03 = (getHeight() - getPaddingBottom()) - this.mDividerHeight;
    L18:
        drawHorizontalDivider(r6, r03);
        return;
    L17:
        r03 = r02.getBottom() + ((LayoutParams) r02.getLayoutParams()).bottomMargin;
        goto L18
    }

    void drawDividersHorizontal(Canvas r7) {
        int r0 = getVirtualChildCount();
        boolean r1 = ViewUtils.isLayoutRtl(this);
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L17;
        View r3 = getVirtualChildAt(r2);
        if (r3 == null) goto L15;
        if (r3.getVisibility() == 8) goto L15;
        if (hasDividerBeforeChildAt(r2) == false) goto L15;
        LayoutParams r4 = (LayoutParams) r3.getLayoutParams();
        if (r1 == false) goto L13;
        int r32 = r3.getRight() + r4.rightMargin;
    L14:
        drawVerticalDivider(r7, r32);
        goto L15
    L13:
        r32 = (r3.getLeft() - r4.leftMargin) - this.mDividerWidth;
    L15:
        r2 = r2 + 1;
        goto L3
    L17:
        if (hasDividerBeforeChildAt(r0) == false) goto L35;
        View r02 = getVirtualChildAt(r0 - 1);
        if (r02 != null) goto L23;
        if (r1 == false) goto L22;
        int r03 = getPaddingLeft();
    L28:
        drawVerticalDivider(r7, r03);
        return;
    L22:
        int r04 = getWidth() - getPaddingRight();
        int r12 = this.mDividerWidth;
    L26:
        r03 = r04 - r12;
        goto L28
    L23:
        LayoutParams r22 = (LayoutParams) r02.getLayoutParams();
        if (r1 == false) goto L27;
        r04 = r02.getLeft() - r22.leftMargin;
        r12 = this.mDividerWidth;
        goto L26
    L27:
        r03 = r02.getRight() + r22.rightMargin;
        goto L28
    }

    void drawHorizontalDivider(Canvas r5, int r6) {
        this.mDivider.setBounds(getPaddingLeft() + this.mDividerPadding, r6, (getWidth() - getPaddingRight()) - this.mDividerPadding, this.mDividerHeight + r6);
        this.mDivider.draw(r5);
    }

    void drawVerticalDivider(Canvas r6, int r7) {
        this.mDivider.setBounds(r7, getPaddingTop() + this.mDividerPadding, this.mDividerWidth + r7, (getHeight() - getPaddingBottom()) - this.mDividerPadding);
        this.mDivider.draw(r6);
    }

    public boolean isBaselineAligned() {
        return this.mBaselineAligned;
    }

    public void setBaselineAligned(boolean r1) {
        this.mBaselineAligned = r1;
    }

    public boolean isMeasureWithLargestChildEnabled() {
        return this.mUseLargestChild;
    }

    public void setMeasureWithLargestChildEnabled(boolean r1) {
        this.mUseLargestChild = r1;
    }

    @Override
    public int getBaseline() {
        if (this.mBaselineAlignedChildIndex < 0) goto L5;
        int r0 = getChildCount();
        int r1 = this.mBaselineAlignedChildIndex;
        if (r0 <= r1) goto L29;
        View r02 = getChildAt(r1);
        int r12 = r02.getBaseline();
        if (r12 == (-1)) goto L11;
        int r2 = this.mBaselineChildTop;
        if (this.mOrientation != 1) goto L27;
        int r3 = this.mGravity & 112;
        if (r3 == 48) goto L27;
        if (r3 != 16) goto L22;
        r2 = r2 + (((((getBottom() - getTop()) - getPaddingTop()) - getPaddingBottom()) - this.mTotalLength) / 2);
        goto L27
    L22:
        if (r3 != 80) goto L27;
        r2 = ((getBottom() - getTop()) - getPaddingBottom()) - this.mTotalLength;
    L27:
        return (r2 + ((LayoutParams) r02.getLayoutParams()).topMargin) + r12;
    L11:
        if (this.mBaselineAlignedChildIndex != 0) goto L14;
        return -1;
    L14:
        throw new RuntimeException("mBaselineAlignedChildIndex of LinearLayout points to a View that doesn't know how to get its baseline.");
    L29:
        throw new RuntimeException("mBaselineAlignedChildIndex of LinearLayout set to an index that is out of bounds.");
    L5:
        return super.getBaseline();
    }

    public int getBaselineAlignedChildIndex() {
        return this.mBaselineAlignedChildIndex;
    }

    public void setBaselineAlignedChildIndex(int r3) {
        if (r3 < 0) goto L8;
        if (r3 >= getChildCount()) goto L8;
        this.mBaselineAlignedChildIndex = r3;
        return;
    L8:
        throw new IllegalArgumentException("base aligned child index out of range (0, " + getChildCount() + ")");
    }

    View getVirtualChildAt(int r1) {
        return getChildAt(r1);
    }

    int getVirtualChildCount() {
        return getChildCount();
    }

    public float getWeightSum() {
        return this.mWeightSum;
    }

    public void setWeightSum(float r2) {
        this.mWeightSum = Math.max(0.0f, r2);
    }

    @Override
    protected void onMeasure(int r3, int r4) {
        if (this.mOrientation != 1) goto L5;
        measureVertical(r3, r4);
        return;
    L5:
        measureHorizontal(r3, r4);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY})
    protected boolean hasDividerBeforeChildAt(int r5) {
        if (r5 != 0) goto L9;
        if ((this.mShowDividers & 1) == 0) goto L25;
        return true;
    L25:
        return false;
    L9:
        if (r5 != getChildCount()) goto L15;
        if ((this.mShowDividers & 4) == 0) goto L26;
        return true;
    L26:
        return false;
    L15:
        if ((this.mShowDividers & 2) == 0) goto L22;
        int r52 = r5 - 1;
    L17:
        if (r52 < 0) goto L28;
        if (getChildAt(r52).getVisibility() != 8) goto L20;
        r52 = r52 - 1;
        goto L17
    L20:
        return true;
    L28:
        return false;
    L22:
        return false;
    }

    void measureVertical(int r34, int r35) {
        this.mTotalLength = 0;
        int r11 = getVirtualChildCount();
        int r12 = View.MeasureSpec.getMode(r34);
        int r13 = View.MeasureSpec.getMode(r35);
        int r14 = this.mBaselineAlignedChildIndex;
        boolean r15 = this.mUseLargestChild;
        float r0 = 0.0f;
        int r1 = 0;
        int r2 = 0;
        int r3 = 0;
        int r4 = 0;
        int r5 = 0;
        int r6 = 0;
        boolean r18 = false;
        boolean r19 = true;
        boolean r20 = false;
    L3:
        int r10 = 8;
        int r22 = r4;
        if (r6 >= r11) goto L73;
        View r42 = getVirtualChildAt(r6);
        if (r42 != null) goto L9;
        this.mTotalLength += measureNullChild(r6);
        int r23 = r11;
        r4 = r22;
    L8:
        int r222 = r13;
    L72:
        r6 = r6 + 1;
        r13 = r222;
        r11 = r23;
        goto L3
    L9:
        int r24 = r1;
        if (r42.getVisibility() != 8) goto L13;
        r6 = r6 + getChildrenSkipCount(r42, r6);
        r23 = r11;
        r4 = r22;
        r1 = r24;
        goto L8
    L13:
        if (hasDividerBeforeChildAt(r6) == false) goto L15;
        this.mTotalLength += this.mDividerHeight;
    L15:
        LayoutParams r102 = (LayoutParams) r42.getLayoutParams();
        float r25 = r0 + r102.weight;
        if (r13 == 1073741824) goto L18;
    L22:
        int r26 = r2;
        if (r102.height == 0) goto L25;
    L27:
        int r27 = Integer.MIN_VALUE;
    L29:
        if (r25 != 0.0f) goto L31;
        int r28 = this.mTotalLength;
    L32:
        int r8 = r24;
        int r29 = r27;
        int r30 = r26;
        int r9 = r3;
        r23 = r11;
        r222 = r13;
        int r132 = r22;
        int r31 = r5;
        int r112 = r6;
        measureChildBeforeLayout(r42, r6, r34, 0, r35, r28);
        if (r29 == Integer.MIN_VALUE) goto L35;
        r102.height = r29;
    L35:
        int r02 = r42.getMeasuredHeight();
        int r16 = this.mTotalLength;
        View r32 = r42;
        this.mTotalLength = Math.max(r16, (((r16 + r02) + r102.topMargin) + r102.bottomMargin) + getNextLocationOffset(r32));
        if (r15 == false) goto L38;
        int r03 = Math.max(r02, r9);
    L39:
        if (r14 >= 0) goto L41;
    L43:
        if (r112 >= r14) goto L50;
        if (r102.weight <= 0.0f) goto L50;
        throw new RuntimeException("A child of LinearLayout with index less than mBaselineAlignedChildIndex has weight > 0, which won't work.  Either remove the weight, or don't set mBaselineAlignedChildIndex.");
    L50:
        if (r12 != 1073741824) goto L52;
    L54:
        boolean r17 = false;
    L55:
        int r210 = r102.leftMargin + r102.rightMargin;
        int r43 = r32.getMeasuredWidth() + r210;
        int r52 = Math.max(r30, r43);
        int r62 = View.combineMeasuredStates(r8, r32.getMeasuredState());
        if (r19 == true) goto L58;
    L60:
        boolean r82 = false;
    L62:
        if (r102.weight <= 0.0f) goto L67;
        if (r17 == true) goto L66;
        r210 = r43;
    L66:
        r132 = Math.max(r132, r210);
        int r110 = r31;
    L71:
        int r211 = getChildrenSkipCount(r32, r112) + r112;
        r3 = r03;
        r19 = r82;
        r4 = r132;
        r0 = r25;
        r5 = r110;
        r1 = r62;
        r6 = r211;
        r2 = r52;
        goto L72
    L67:
        if (r17 == true) goto L70;
        r210 = r43;
    L70:
        r110 = Math.max(r31, r210);
        goto L71
    L58:
        if (r102.width != (-1)) goto L60;
        r82 = true;
        goto L62
    L52:
        if (r102.width != (-1)) goto L54;
        r17 = true;
        r20 = true;
        goto L55
    L41:
        if (r14 != (r112 + 1)) goto L43;
        this.mBaselineChildTop = this.mTotalLength;
        goto L43
    L38:
        r03 = r9;
        goto L39
    L31:
        r28 = 0;
        goto L32
    L25:
        if (r102.weight <= 0.0f) goto L27;
        r102.height = -2;
        r27 = 0;
        goto L29
    L18:
        if (r102.height != 0) goto L22;
        if (r102.weight <= 0.0f) goto L22;
        int r04 = this.mTotalLength;
        this.mTotalLength = Math.max(r04, (r102.topMargin + r04) + r102.bottomMargin);
        r03 = r3;
        r32 = r42;
        r31 = r5;
        r23 = r11;
        r8 = r24;
        r30 = r2;
        r18 = true;
        r112 = r6;
        r222 = r13;
        r132 = r22;
        goto L39
    L73:
        int r83 = r1;
        int r92 = r3;
        int r111 = r5;
        int r232 = r11;
        int r53 = r2;
        int r223 = r13;
        if (this.mTotalLength <= 0) goto L78;
        int r212 = r232;
        if (hasDividerBeforeChildAt(r212) == false) goto L79;
        this.mTotalLength += this.mDividerHeight;
    L79:
        if (r15 == false) goto L93;
        int r33 = r223;
        if (r33 == Integer.MIN_VALUE) goto L83;
        if (r33 == 0) goto L83;
    L94:
        this.mTotalLength += getPaddingTop() + getPaddingBottom();
        int r44 = View.resolveSizeAndState(Math.max(this.mTotalLength, getSuggestedMinimumHeight()), r35, 0);
        int r93 = (16777215 & r44) - this.mTotalLength;
        if (r18 == true) goto L116;
        if (r93 != 0) goto L98;
    L100:
        int r05 = Math.max(r111, r22);
        if (r15 == true) goto L103;
    L115:
        int r113 = r34;
        int r114 = r83;
    L161:
        if (r19 == false) goto L163;
    L165:
        r05 = r53;
    L166:
        setMeasuredDimension(View.resolveSizeAndState(Math.max(r05 + (getPaddingLeft() + getPaddingRight()), getSuggestedMinimumWidth()), r113, r114), r44);
        if (r20 == false) goto L186;
        forceUniformWidth(r212, r35);
        return;
    L186:
        return;
    L163:
        if (r12 == 1073741824) goto L165;
    L103:
        if (r33 == 1073741824) goto L115;
        int r115 = 0;
    L105:
        if (r115 >= r212) goto L115;
        View r36 = getVirtualChildAt(r115);
        if (r36 == null) goto L114;
        if (r36.getVisibility() == 8) goto L114;
        if (((LayoutParams) r36.getLayoutParams()).weight <= 0.0f) goto L114;
        r36.measure(View.MeasureSpec.makeMeasureSpec(r36.getMeasuredWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(r92, 1073741824));
    L114:
        r115 = r115 + 1;
        goto L105
    L98:
        if (r0 <= 0.0f) goto L100;
    L116:
        float r103 = this.mWeightSum;
        if (r103 <= 0.0f) goto L119;
        r0 = r103;
    L119:
        this.mTotalLength = 0;
        float r116 = r0;
        int r06 = 0;
        int r84 = r111;
        r114 = r83;
    L120:
        if (r06 >= r212) goto L160;
        View r133 = getVirtualChildAt(r06);
        if (r133.getVisibility() != 8) goto L124;
        float r21 = r116;
    L159:
        r06 = r06 + 1;
        r116 = r21;
        goto L120
    L124:
        LayoutParams r142 = (LayoutParams) r133.getLayoutParams();
        float r104 = r142.weight;
        if (r104 <= 0.0f) goto L141;
        int r152 = (int) ((r93 * r104) / r116);
        float r117 = r116 - r104;
        int r182 = r93 - r152;
        r21 = r117;
        int r94 = getChildMeasureSpec(r34, ((getPaddingLeft() + getPaddingRight()) + r142.leftMargin) + r142.rightMargin, r142.width);
        if (r142.height != 0) goto L135;
        int r105 = 1073741824;
        if (r33 != 1073741824) goto L136;
        if (r152 > 0) goto L134;
        r152 = 0;
    L134:
        r133.measure(r94, View.MeasureSpec.makeMeasureSpec(r152, 1073741824));
    L140:
        r114 = View.combineMeasuredStates(r114, r133.getMeasuredState() & InputDeviceCompat.SOURCE_ANY);
    L142:
        int r95 = r142.leftMargin + r142.rightMargin;
        int r106 = r133.getMeasuredWidth() + r95;
        r53 = Math.max(r53, r106);
        if (r12 == 1073741824) goto L147;
        int r233 = r114;
        int r118 = -1;
        if (r142.width != (-1)) goto L148;
        boolean r153 = true;
    L149:
        if (r153 == true) goto L152;
        r95 = r106;
    L152:
        r84 = Math.max(r84, r95);
        if (r19 == true) goto L155;
    L157:
        boolean r96 = false;
    L158:
        int r107 = this.mTotalLength;
        this.mTotalLength = Math.max(r107, (((r133.getMeasuredHeight() + r107) + r142.topMargin) + r142.bottomMargin) + getNextLocationOffset(r133));
        r19 = r96;
        r93 = r182;
        r114 = r233;
        goto L159
    L155:
        if (r142.width != r118) goto L157;
        r96 = true;
    L148:
        r153 = false;
        goto L149
    L147:
        r233 = r114;
        r118 = -1;
    L136:
        int r154 = r133.getMeasuredHeight() + r152;
        if (r154 >= 0) goto L139;
        r154 = 0;
    L139:
        r133.measure(r94, View.MeasureSpec.makeMeasureSpec(r154, r105));
        goto L140
    L135:
        r105 = 1073741824;
        goto L136
    L141:
        r182 = r93;
        r21 = r116;
        goto L142
    L160:
        r113 = r34;
        this.mTotalLength += getPaddingTop() + getPaddingBottom();
        r05 = r84;
    L83:
        this.mTotalLength = 0;
        int r45 = 0;
    L84:
        if (r45 >= r212) goto L94;
        View r63 = getVirtualChildAt(r45);
        if (r63 != null) goto L89;
        this.mTotalLength += measureNullChild(r45);
    L92:
        r45 = r45 + 1;
        r10 = 8;
        goto L84
    L89:
        if (r63.getVisibility() != r10) goto L91;
        r45 = r45 + getChildrenSkipCount(r63, r45);
        goto L92
    L91:
        LayoutParams r119 = (LayoutParams) r63.getLayoutParams();
        int r143 = this.mTotalLength;
        this.mTotalLength = Math.max(r143, (((r143 + r92) + r119.topMargin) + r119.bottomMargin) + getNextLocationOffset(r63));
        goto L92
    L93:
        r33 = r223;
        goto L94
    L78:
        r212 = r232;
        goto L79
    }

    private void forceUniformWidth(int r11, int r12) {
        int r0 = View.MeasureSpec.makeMeasureSpec(getMeasuredWidth(), 1073741824);
        int r1 = 0;
    L3:
        if (r1 >= r11) goto L10;
        View r3 = getVirtualChildAt(r1);
        if (r3.getVisibility() == 8) goto L9;
        LayoutParams r8 = (LayoutParams) r3.getLayoutParams();
        if (r8.width != (-1)) goto L9;
        int r9 = r8.height;
        r8.height = r3.getMeasuredHeight();
        measureChildWithMargins(r3, r0, 0, r12, 0);
        r8.height = r9;
    L9:
        r1 = r1 + 1;
        goto L3
    }

    void measureHorizontal(int r39, int r40) {
        this.mTotalLength = 0;
        int r11 = getVirtualChildCount();
        int r12 = View.MeasureSpec.getMode(r39);
        int r13 = View.MeasureSpec.getMode(r40);
        if (this.mMaxAscent != null) goto L5;
    L6:
        this.mMaxAscent = new int[4];
        this.mMaxDescent = new int[4];
    L7:
        int[] r15 = this.mMaxAscent;
        int[] r6 = this.mMaxDescent;
        r15[3] = -1;
        r15[2] = -1;
        r15[1] = -1;
        r15[0] = -1;
        r6[3] = -1;
        r6[2] = -1;
        r6[1] = -1;
        r6[0] = -1;
        boolean r4 = this.mBaselineAligned;
        boolean r3 = this.mUseLargestChild;
        int r2 = 1073741824;
        if (r12 != 1073741824) goto L10;
        boolean r19 = true;
    L11:
        float r0 = 0.0f;
        int r1 = 0;
        int r14 = 0;
        int r21 = 0;
        int r22 = 0;
        int r23 = 0;
        boolean r24 = false;
        int r26 = 0;
        boolean r27 = true;
        boolean r28 = false;
    L12:
        int[] r29 = r6;
        if (r1 >= r11) goto L88;
        View r62 = getVirtualChildAt(r1);
        if (r62 != null) goto L19;
        this.mTotalLength += measureNullChild(r1);
    L17:
        boolean r33 = r3;
        boolean r37 = r4;
    L87:
        r1 = r1 + 1;
        r6 = r29;
        r3 = r33;
        r4 = r37;
        r2 = 1073741824;
        goto L12
    L19:
        if (r62.getVisibility() != 8) goto L22;
        r1 = r1 + getChildrenSkipCount(r62, r1);
        goto L17
    L22:
        if (hasDividerBeforeChildAt(r1) == false) goto L24;
        this.mTotalLength += this.mDividerWidth;
    L24:
        LayoutParams r10 = (LayoutParams) r62.getLayoutParams();
        float r32 = r0 + r10.weight;
        if (r12 != r2) goto L37;
        if (r10.width != 0) goto L37;
        if (r10.weight <= 0.0f) goto L37;
        if (r19 == false) goto L32;
        this.mTotalLength += r10.leftMargin + r10.rightMargin;
    L33:
        if (r4 == false) goto L35;
        int r25 = View.MeasureSpec.makeMeasureSpec(0, 0);
        r62.measure(r25, r25);
        int r35 = r1;
        r33 = r3;
        r37 = r4;
        View r34 = r62;
    L55:
        int r16 = 1073741824;
    L56:
        if (r13 != r16) goto L58;
    L60:
        boolean r02 = false;
    L61:
        int r210 = r10.topMargin + r10.bottomMargin;
        int r42 = r34.getMeasuredHeight() + r210;
        int r5 = View.combineMeasuredStates(r26, r34.getMeasuredState());
        if (r37 == false) goto L70;
        int r63 = r34.getBaseline();
        if (r63 == (-1)) goto L70;
        if (r10.gravity >= 0) goto L68;
        int r9 = this.mGravity;
    L69:
        int r92 = (((r9 & 112) >> 4) & (-2)) >> 1;
        r15[r92] = Math.max(r15[r92], r63);
        r29[r92] = Math.max(r29[r92], r42 - r63);
        goto L70
    L68:
        r9 = r10.gravity;
    L70:
        int r17 = Math.max(r21, r42);
        if (r27 == true) goto L73;
    L75:
        boolean r64 = false;
    L77:
        if (r10.weight <= 0.0f) goto L82;
        if (r02 == true) goto L81;
        r210 = r42;
    L81:
        r23 = Math.max(r23, r210);
    L86:
        int r102 = r35;
        r21 = r17;
        r26 = r5;
        r27 = r64;
        r1 = getChildrenSkipCount(r34, r102) + r102;
        r0 = r32;
        goto L87
    L82:
        int r103 = r23;
        if (r02 == false) goto L85;
        r42 = r210;
    L85:
        r22 = Math.max(r22, r42);
        r23 = r103;
        goto L86
    L73:
        if (r10.height != (-1)) goto L75;
        r64 = true;
        goto L77
    L58:
        if (r10.height != (-1)) goto L60;
        r02 = true;
        r28 = true;
        goto L61
    L35:
        r35 = r1;
        r33 = r3;
        r37 = r4;
        r34 = r62;
        r16 = 1073741824;
        r24 = true;
        goto L56
    L32:
        int r03 = this.mTotalLength;
        this.mTotalLength = Math.max(r03, (r10.leftMargin + r03) + r10.rightMargin);
    L37:
        if (r10.width == 0) goto L39;
    L41:
        int r211 = Integer.MIN_VALUE;
    L43:
        if (r32 != 0.0f) goto L45;
        int r30 = this.mTotalLength;
    L46:
        r35 = r1;
        int r36 = r211;
        r33 = r3;
        r37 = r4;
        measureChildBeforeLayout(r62, r35, r39, r30, r40, 0);
        if (r36 == Integer.MIN_VALUE) goto L49;
        r10.width = r36;
    L49:
        int r04 = r62.getMeasuredWidth();
        if (r19 == false) goto L52;
        r34 = r62;
        this.mTotalLength = this.mTotalLength + (((r10.leftMargin + r04) + r10.rightMargin) + getNextLocationOffset(r34));
    L53:
        if (r33 == false) goto L55;
        r14 = Math.max(r04, r14);
        goto L55
    L52:
        r34 = r62;
        int r18 = this.mTotalLength;
        this.mTotalLength = Math.max(r18, (((r18 + r04) + r10.leftMargin) + r10.rightMargin) + getNextLocationOffset(r34));
        goto L53
    L45:
        r30 = 0;
        goto L46
    L39:
        if (r10.weight <= 0.0f) goto L41;
        r10.width = -2;
        r211 = 0;
        goto L43
    L88:
        boolean r332 = r3;
        boolean r372 = r4;
        int r110 = r21;
        int r212 = r22;
        int r104 = r23;
        int r65 = r26;
        if (this.mTotalLength <= 0) goto L94;
        if (hasDividerBeforeChildAt(r11) == false) goto L94;
        this.mTotalLength += this.mDividerWidth;
    L94:
        if (r15[1] == (-1)) goto L96;
    L103:
        int r232 = r65;
        r110 = Math.max(r110, Math.max(r15[3], Math.max(r15[0], Math.max(r15[1], r15[2]))) + Math.max(r29[3], Math.max(r29[0], Math.max(r29[1], r29[2]))));
    L104:
        if (r332 == true) goto L106;
    L122:
        int r222 = r110;
        this.mTotalLength += getPaddingLeft() + getPaddingRight();
        int r111 = View.resolveSizeAndState(Math.max(this.mTotalLength, getSuggestedMinimumWidth()), r39, 0);
        int r38 = (16777215 & r111) - this.mTotalLength;
        if (r24 == true) goto L144;
        if (r38 != 0) goto L126;
    L128:
        int r05 = Math.max(r212, r104);
        if (r332 == true) goto L131;
    L143:
        int r310 = r40;
        int r262 = r11;
        int r213 = r222;
    L216:
        if (r27 == false) goto L218;
    L220:
        r05 = r213;
    L221:
        setMeasuredDimension(r111 | (r232 & ViewCompat.MEASURED_STATE_MASK), View.resolveSizeAndState(Math.max(r05 + (getPaddingTop() + getPaddingBottom()), getSuggestedMinimumHeight()), r310, r232 << 16));
        if (r28 == false) goto L239;
        forceUniformHeight(r262, r39);
        return;
    L239:
        return;
    L218:
        if (r13 == 1073741824) goto L220;
    L131:
        if (r12 == 1073741824) goto L143;
        int r214 = 0;
    L133:
        if (r214 >= r11) goto L143;
        View r311 = getVirtualChildAt(r214);
        if (r311 == null) goto L142;
        if (r311.getVisibility() == 8) goto L142;
        if (((LayoutParams) r311.getLayoutParams()).weight <= 0.0f) goto L142;
        r311.measure(View.MeasureSpec.makeMeasureSpec(r14, 1073741824), View.MeasureSpec.makeMeasureSpec(r311.getMeasuredHeight(), 1073741824));
    L142:
        r214 = r214 + 1;
        goto L133
    L126:
        if (r0 <= 0.0f) goto L128;
    L144:
        float r52 = this.mWeightSum;
        if (r52 <= 0.0f) goto L147;
        r0 = r52;
    L147:
        r15[3] = -1;
        r15[2] = -1;
        r15[1] = -1;
        r15[0] = -1;
        r29[3] = -1;
        r29[2] = -1;
        r29[1] = -1;
        r29[0] = -1;
        this.mTotalLength = 0;
        int r105 = r212;
        int r93 = r232;
        int r66 = -1;
        float r215 = r0;
        int r06 = 0;
    L148:
        if (r06 >= r11) goto L204;
        View r142 = getVirtualChildAt(r06);
        if (r142 != null) goto L152;
    L202:
        int r43 = r38;
        int r263 = r11;
    L203:
        r06 = r06 + 1;
        r38 = r43;
        r11 = r263;
        goto L148
    L152:
        if (r142.getVisibility() == 8) goto L202;
        LayoutParams r53 = (LayoutParams) r142.getLayoutParams();
        float r44 = r53.weight;
        if (r44 <= 0.0f) goto L171;
        int r8 = (int) ((r38 * r44) / r215);
        float r216 = r215 - r44;
        int r312 = r38 - r8;
        r263 = r11;
        int r217 = getChildMeasureSpec(r40, ((getPaddingTop() + getPaddingBottom()) + r53.topMargin) + r53.bottomMargin, r53.height);
        if (r53.width != 0) goto L165;
        int r45 = 1073741824;
        if (r12 != 1073741824) goto L166;
        if (r8 > 0) goto L164;
        r8 = 0;
    L164:
        r142.measure(View.MeasureSpec.makeMeasureSpec(r8, 1073741824), r217);
    L170:
        r93 = View.combineMeasuredStates(r93, r142.getMeasuredState() & ViewCompat.MEASURED_STATE_MASK);
        r215 = r216;
        r43 = r312;
    L172:
        if (r19 == false) goto L174;
        this.mTotalLength += ((r142.getMeasuredWidth() + r53.leftMargin) + r53.rightMargin) + getNextLocationOffset(r142);
        float r233 = r215;
    L176:
        if (r13 != 1073741824) goto L178;
    L180:
        boolean r218 = false;
    L181:
        int r82 = r53.topMargin + r53.bottomMargin;
        int r112 = r142.getMeasuredHeight() + r82;
        r66 = Math.max(r66, r112);
        if (r218 == true) goto L185;
        r82 = r112;
    L185:
        int r219 = Math.max(r105, r82);
        if (r27 == false) goto L190;
        int r106 = -1;
        if (r53.height != (-1)) goto L191;
        boolean r83 = true;
    L192:
        if (r372 == false) goto L201;
        int r143 = r142.getBaseline();
        if (r143 == r106) goto L201;
        if (r53.gravity >= 0) goto L198;
        int r54 = this.mGravity;
    L199:
        int r55 = (((r54 & 112) >> 4) & (-2)) >> 1;
        r15[r55] = Math.max(r15[r55], r143);
        r29[r55] = Math.max(r29[r55], r112 - r143);
        goto L201
    L198:
        r54 = r53.gravity;
    L201:
        r105 = r219;
        r27 = r83;
        r215 = r233;
    L191:
        r83 = false;
        goto L192
    L190:
        r106 = -1;
        goto L191
    L178:
        if (r53.height != (-1)) goto L180;
        r218 = true;
        goto L181
    L174:
        int r84 = this.mTotalLength;
        r233 = r215;
        this.mTotalLength = Math.max(r84, (((r142.getMeasuredWidth() + r84) + r53.leftMargin) + r53.rightMargin) + getNextLocationOffset(r142));
    L166:
        int r85 = r142.getMeasuredWidth() + r8;
        if (r85 >= 0) goto L169;
        r85 = 0;
    L169:
        r142.measure(View.MeasureSpec.makeMeasureSpec(r85, r45), r217);
        goto L170
    L165:
        r45 = 1073741824;
        goto L166
    L171:
        r43 = r38;
        r263 = r11;
        goto L172
    L204:
        r310 = r40;
        r262 = r11;
        this.mTotalLength += getPaddingLeft() + getPaddingRight();
        if (r15[1] == (-1)) goto L207;
    L214:
        int r07 = Math.max(r66, Math.max(r15[3], Math.max(r15[0], Math.max(r15[1], r15[2]))) + Math.max(r29[3], Math.max(r29[0], Math.max(r29[1], r29[2]))));
    L215:
        r213 = r07;
        r232 = r93;
        r05 = r105;
        goto L216
    L207:
        if (r15[0] != (-1)) goto L214;
        if (r15[2] != (-1)) goto L214;
        if (r15[3] != (-1)) goto L214;
        r07 = r66;
        goto L215
    L106:
        if (r12 == Integer.MIN_VALUE) goto L108;
        if (r12 != 0) goto L122;
    L108:
        this.mTotalLength = 0;
        int r313 = 0;
    L109:
        if (r313 >= r11) goto L122;
        View r46 = getVirtualChildAt(r313);
        if (r46 != null) goto L114;
        this.mTotalLength += measureNullChild(r313);
    L116:
        int r223 = r110;
    L121:
        r313 = r313 + 1;
        r110 = r223;
        goto L109
    L114:
        if (r46.getVisibility() != 8) goto L117;
        r313 = r313 + getChildrenSkipCount(r46, r313);
        goto L116
    L117:
        LayoutParams r56 = (LayoutParams) r46.getLayoutParams();
        if (r19 == false) goto L120;
        this.mTotalLength += ((r56.leftMargin + r14) + r56.rightMargin) + getNextLocationOffset(r46);
        goto L116
    L120:
        int r67 = this.mTotalLength;
        r223 = r110;
        this.mTotalLength = Math.max(r67, (((r67 + r14) + r56.leftMargin) + r56.rightMargin) + getNextLocationOffset(r46));
        goto L121
    L96:
        if (r15[0] != (-1)) goto L103;
        if (r15[2] != (-1)) goto L103;
        if (r15[3] != (-1)) goto L103;
        r232 = r65;
        goto L104
    L10:
        r19 = false;
        goto L11
    L5:
        if (this.mMaxDescent != null) goto L7;
        goto L6
    }

    private void forceUniformHeight(int r11, int r12) {
        int r0 = View.MeasureSpec.makeMeasureSpec(getMeasuredHeight(), 1073741824);
        int r1 = 0;
    L3:
        if (r1 >= r11) goto L10;
        View r3 = getVirtualChildAt(r1);
        if (r3.getVisibility() == 8) goto L9;
        LayoutParams r8 = (LayoutParams) r3.getLayoutParams();
        if (r8.height != (-1)) goto L9;
        int r9 = r8.width;
        r8.width = r3.getMeasuredWidth();
        measureChildWithMargins(r3, r12, 0, r0, 0);
        r8.width = r9;
    L9:
        r1 = r1 + 1;
        goto L3
    }

    void measureChildBeforeLayout(View r7, int r8, int r9, int r10, int r11, int r12) {
        measureChildWithMargins(r7, r9, r10, r11, r12);
    }

    @Override
    protected void onLayout(boolean r2, int r3, int r4, int r5, int r6) {
        if (this.mOrientation != 1) goto L5;
        layoutVertical(r3, r4, r5, r6);
        return;
    L5:
        layoutHorizontal(r3, r4, r5, r6);
    }

    void layoutVertical(int r18, int r19, int r20, int r21) {
        int r7 = getPaddingLeft();
        int r0 = r20 - r18;
        int r8 = r0 - getPaddingRight();
        int r9 = (r0 - r7) - getPaddingRight();
        int r10 = getVirtualChildCount();
        int r02 = this.mGravity;
        int r1 = r02 & 112;
        int r11 = r02 & GravityCompat.RELATIVE_HORIZONTAL_GRAVITY_MASK;
        if (r1 != 16) goto L5;
        int r03 = getPaddingTop() + (((r21 - r19) - this.mTotalLength) / 2);
    L9:
        int r12 = 0;
    L10:
        if (r12 >= r10) goto L33;
        View r13 = getVirtualChildAt(r12);
        if (r13 != null) goto L15;
        r03 = r03 + measureNullChild(r12);
    L32:
        r12 = r12 + 1;
        goto L10
    L15:
        if (r13.getVisibility() == 8) goto L32;
        int r4 = r13.getMeasuredWidth();
        int r15 = r13.getMeasuredHeight();
        LayoutParams r5 = (LayoutParams) r13.getLayoutParams();
        int r14 = r5.gravity;
        if (r14 >= 0) goto L19;
        r14 = r11;
    L19:
        int r16 = GravityCompat.getAbsoluteGravity(r14, ViewCompat.getLayoutDirection(this)) & 7;
        if (r16 != 1) goto L22;
        int r17 = (((r9 - r4) / 2) + r7) + r5.leftMargin;
        int r2 = r5.rightMargin;
    L27:
        int r110 = r17 - r2;
    L24:
        int r22 = r110;
        if (hasDividerBeforeChildAt(r12) == false) goto L31;
        r03 = r03 + this.mDividerHeight;
    L31:
        int r162 = r03 + r5.topMargin;
        setChildFrame(r13, r22, r162 + getLocationOffset(r13), r4, r15);
        int r163 = r162 + ((r15 + r5.bottomMargin) + getNextLocationOffset(r13));
        r12 = r12 + getChildrenSkipCount(r13, r12);
        r03 = r163;
        goto L32
    L22:
        if (r16 == 5) goto L25;
        r110 = r5.leftMargin + r7;
        goto L24
    L25:
        r17 = r8 - r4;
        r2 = r5.rightMargin;
        goto L27
    L33:
        return;
    L5:
        if (r1 == 80) goto L7;
        r03 = getPaddingTop();
        goto L9
    L7:
        r03 = ((getPaddingTop() + r21) - r19) - this.mTotalLength;
        goto L9
    }

    void layoutHorizontal(int r25, int r26, int r27, int r28) {
        boolean r0 = ViewUtils.isLayoutRtl(this);
        int r7 = getPaddingTop();
        int r1 = r28 - r26;
        int r8 = r1 - getPaddingBottom();
        int r9 = (r1 - r7) - getPaddingBottom();
        int r10 = getVirtualChildCount();
        int r12 = this.mGravity;
        int r11 = r12 & 112;
        boolean r122 = this.mBaselineAligned;
        int[] r13 = this.mMaxAscent;
        int[] r14 = this.mMaxDescent;
        int r15 = GravityCompat.getAbsoluteGravity(8388615 & r12, ViewCompat.getLayoutDirection(this));
        if (r15 != 1) goto L5;
        int r16 = getPaddingLeft() + (((r27 - r25) - this.mTotalLength) / 2);
    L10:
        if (r0 == false) goto L12;
        int r162 = r10 - 1;
        int r17 = -1;
    L13:
        int r3 = 0;
    L14:
        if (r3 >= r10) goto L55;
        int r2 = r162 + (r17 * r3);
        View r02 = getVirtualChildAt(r2);
        if (r02 != null) goto L19;
        r16 = r16 + measureNullChild(r2);
    L53:
        int r22 = r7;
        int r19 = r10;
        int r20 = r11;
    L54:
        r3 = r3 + 1;
        r10 = r19;
        r11 = r20;
        r7 = r22;
        goto L14
    L19:
        if (r02.getVisibility() == 8) goto L53;
        int r152 = r02.getMeasuredWidth();
        int r5 = r02.getMeasuredHeight();
        LayoutParams r4 = (LayoutParams) r02.getLayoutParams();
        if (r122 == false) goto L25;
        int r18 = r3;
        r19 = r10;
        if (r4.height == (-1)) goto L26;
        int r32 = r02.getBaseline();
    L27:
        int r102 = r4.gravity;
        if (r102 >= 0) goto L30;
        r102 = r11;
    L30:
        int r103 = r102 & 112;
        r20 = r11;
        if (r103 != 16) goto L33;
        int r33 = ((((r9 - r5) / 2) + r7) + r4.topMargin) - r4.bottomMargin;
    L49:
        if (hasDividerBeforeChildAt(r2) == false) goto L51;
        r16 = r16 + this.mDividerWidth;
    L51:
        int r104 = r4.leftMargin + r16;
        r22 = r7;
        setChildFrame(r02, r104 + getLocationOffset(r02), r33, r152, r5);
        int r105 = r104 + ((r152 + r4.rightMargin) + getNextLocationOffset(r02));
        r3 = r18 + getChildrenSkipCount(r02, r2);
        r16 = r105;
        goto L54
    L33:
        if (r103 != 48) goto L35;
        int r106 = r4.topMargin + r7;
        if (r32 == (-1)) goto L46;
        r106 = r106 + (r13[1] - r32);
    L46:
        r33 = r106;
        goto L49
    L35:
        if (r103 == 80) goto L38;
        r33 = r7;
        goto L49
    L38:
        int r107 = (r8 - r5) - r4.bottomMargin;
        if (r32 == (-1)) goto L41;
        r107 = r107 - (r14[2] - (r02.getMeasuredHeight() - r32));
    L41:
        r33 = r107;
    L26:
        r32 = -1;
        goto L27
    L25:
        r18 = r3;
        r19 = r10;
        goto L26
    L55:
        return;
    L12:
        r162 = 0;
        r17 = 1;
        goto L13
    L5:
        if (r15 == 5) goto L7;
        r16 = getPaddingLeft();
        goto L10
    L7:
        r16 = ((getPaddingLeft() + r27) - r25) - this.mTotalLength;
        goto L10
    }

    private void setChildFrame(View r1, int r2, int r3, int r4, int r5) {
        r1.layout(r2, r3, r4 + r2, r5 + r3);
    }

    public void setOrientation(int r2) {
        if (this.mOrientation == r2) goto L6;
        this.mOrientation = r2;
        requestLayout();
        return;
    }

    public int getOrientation() {
        return this.mOrientation;
    }

    public void setGravity(int r2) {
        if (this.mGravity != r2) goto L5;
        return;
    L5:
        if ((8388615 & r2) != 0) goto L8;
        r2 = r2 | GravityCompat.START;
    L8:
        if ((r2 & 112) != 0) goto L10;
        r2 = r2 | 48;
    L10:
        this.mGravity = r2;
        requestLayout();
    }

    public int getGravity() {
        return this.mGravity;
    }

    public void setHorizontalGravity(int r3) {
        int r32 = r3 & GravityCompat.RELATIVE_HORIZONTAL_GRAVITY_MASK;
        int r1 = this.mGravity;
        if ((8388615 & r1) == r32) goto L6;
        this.mGravity = r32 | ((-8388616) & r1);
        requestLayout();
        return;
    }

    public void setVerticalGravity(int r3) {
        int r32 = r3 & 112;
        int r0 = this.mGravity;
        if ((r0 & 112) == r32) goto L6;
        this.mGravity = r32 | (r0 & (-113));
        requestLayout();
        return;
    }

    @Override
    public LayoutParams generateLayoutParams(AttributeSet r3) {
        return new LayoutParams(getContext(), r3);
    }

    @Override
    protected LayoutParams generateDefaultLayoutParams() {
        int r0 = this.mOrientation;
        if (r0 != 0) goto L7;
        return new LayoutParams(-2, -2);
    L7:
        if (r0 == 1) goto L9;
        return null;
    L9:
        return new LayoutParams(-1, -2);
    }

    @Override
    protected LayoutParams generateLayoutParams(ViewGroup.LayoutParams r2) {
        return new LayoutParams(r2);
    }

    @Override
    protected boolean checkLayoutParams(ViewGroup.LayoutParams r1) {
        return r1 instanceof LayoutParams;
    }

    @Override
    public void onInitializeAccessibilityEvent(AccessibilityEvent r2) {
        super.onInitializeAccessibilityEvent(r2);
        r2.setClassName(LinearLayoutCompat.class.getName());
    }

    @Override
    public void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo r2) {
        super.onInitializeAccessibilityNodeInfo(r2);
        r2.setClassName(LinearLayoutCompat.class.getName());
    }
}
