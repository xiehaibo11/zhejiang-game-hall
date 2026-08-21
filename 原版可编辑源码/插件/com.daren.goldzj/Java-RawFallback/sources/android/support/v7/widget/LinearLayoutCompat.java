package android.support.v7.widget;

public class LinearLayoutCompat extends android.view.ViewGroup {
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
    private android.graphics.drawable.Drawable mDivider;
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

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public @interface DividerMode {
    }

    public static class LayoutParams extends android.view.ViewGroup.MarginLayoutParams {
        public int gravity;
        public float weight;

        public LayoutParams(int r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                r1 = -1
                r0.gravity = r1
                r1 = 0
                r0.weight = r1
                return
        }

        public LayoutParams(int r1, int r2, float r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r1 = -1
                r0.gravity = r1
                r0.weight = r3
                return
        }

        public LayoutParams(android.content.Context r3, android.util.AttributeSet r4) {
                r2 = this;
                r2.<init>(r3, r4)
                r0 = -1
                r2.gravity = r0
                int[] r1 = android.support.v7.appcompat.R.styleable.LinearLayoutCompat_Layout
                android.content.res.TypedArray r3 = r3.obtainStyledAttributes(r4, r1)
                int r4 = android.support.v7.appcompat.R.styleable.LinearLayoutCompat_Layout_android_layout_weight
                r1 = 0
                float r4 = r3.getFloat(r4, r1)
                r2.weight = r4
                int r4 = android.support.v7.appcompat.R.styleable.LinearLayoutCompat_Layout_android_layout_gravity
                int r4 = r3.getInt(r4, r0)
                r2.gravity = r4
                r3.recycle()
                return
        }

        public LayoutParams(android.support.v7.widget.LinearLayoutCompat.LayoutParams r2) {
                r1 = this;
                r1.<init>(r2)
                r0 = -1
                r1.gravity = r0
                float r0 = r2.weight
                r1.weight = r0
                int r2 = r2.gravity
                r1.gravity = r2
                return
        }

        public LayoutParams(android.view.ViewGroup.LayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                r1 = -1
                r0.gravity = r1
                return
        }

        public LayoutParams(android.view.ViewGroup.MarginLayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                r1 = -1
                r0.gravity = r1
                return
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public @interface OrientationMode {
    }

    public LinearLayoutCompat(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public LinearLayoutCompat(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public LinearLayoutCompat(android.content.Context r5, android.util.AttributeSet r6, int r7) {
            r4 = this;
            r4.<init>(r5, r6, r7)
            r0 = 1
            r4.mBaselineAligned = r0
            r1 = -1
            r4.mBaselineAlignedChildIndex = r1
            r2 = 0
            r4.mBaselineChildTop = r2
            r3 = 8388659(0x800033, float:1.1755015E-38)
            r4.mGravity = r3
            int[] r3 = android.support.v7.appcompat.R.styleable.LinearLayoutCompat
            android.support.v7.widget.TintTypedArray r5 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r5, r6, r3, r7, r2)
            int r6 = android.support.v7.appcompat.R.styleable.LinearLayoutCompat_android_orientation
            int r6 = r5.getInt(r6, r1)
            if (r6 < 0) goto L22
            r4.setOrientation(r6)
        L22:
            int r6 = android.support.v7.appcompat.R.styleable.LinearLayoutCompat_android_gravity
            int r6 = r5.getInt(r6, r1)
            if (r6 < 0) goto L2d
            r4.setGravity(r6)
        L2d:
            int r6 = android.support.v7.appcompat.R.styleable.LinearLayoutCompat_android_baselineAligned
            boolean r6 = r5.getBoolean(r6, r0)
            if (r6 != 0) goto L38
            r4.setBaselineAligned(r6)
        L38:
            int r6 = android.support.v7.appcompat.R.styleable.LinearLayoutCompat_android_weightSum
            r7 = -1082130432(0xffffffffbf800000, float:-1.0)
            float r6 = r5.getFloat(r6, r7)
            r4.mWeightSum = r6
            int r6 = android.support.v7.appcompat.R.styleable.LinearLayoutCompat_android_baselineAlignedChildIndex
            int r6 = r5.getInt(r6, r1)
            r4.mBaselineAlignedChildIndex = r6
            int r6 = android.support.v7.appcompat.R.styleable.LinearLayoutCompat_measureWithLargestChild
            boolean r6 = r5.getBoolean(r6, r2)
            r4.mUseLargestChild = r6
            int r6 = android.support.v7.appcompat.R.styleable.LinearLayoutCompat_divider
            android.graphics.drawable.Drawable r6 = r5.getDrawable(r6)
            r4.setDividerDrawable(r6)
            int r6 = android.support.v7.appcompat.R.styleable.LinearLayoutCompat_showDividers
            int r6 = r5.getInt(r6, r2)
            r4.mShowDividers = r6
            int r6 = android.support.v7.appcompat.R.styleable.LinearLayoutCompat_dividerPadding
            int r6 = r5.getDimensionPixelSize(r6, r2)
            r4.mDividerPadding = r6
            r5.recycle()
            return
    }

    private void forceUniformHeight(int r11, int r12) {
            r10 = this;
            int r0 = r10.getMeasuredHeight()
            r1 = 1073741824(0x40000000, float:2.0)
            int r0 = android.view.View.MeasureSpec.makeMeasureSpec(r0, r1)
            r1 = 0
        Lb:
            if (r1 >= r11) goto L3a
            android.view.View r3 = r10.getVirtualChildAt(r1)
            int r2 = r3.getVisibility()
            r4 = 8
            if (r2 == r4) goto L37
            android.view.ViewGroup$LayoutParams r2 = r3.getLayoutParams()
            r8 = r2
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r8 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r8
            int r2 = r8.height
            r4 = -1
            if (r2 != r4) goto L37
            int r9 = r8.width
            int r2 = r3.getMeasuredWidth()
            r8.width = r2
            r5 = 0
            r7 = 0
            r2 = r10
            r4 = r12
            r6 = r0
            r2.measureChildWithMargins(r3, r4, r5, r6, r7)
            r8.width = r9
        L37:
            int r1 = r1 + 1
            goto Lb
        L3a:
            return
    }

    private void forceUniformWidth(int r11, int r12) {
            r10 = this;
            int r0 = r10.getMeasuredWidth()
            r1 = 1073741824(0x40000000, float:2.0)
            int r0 = android.view.View.MeasureSpec.makeMeasureSpec(r0, r1)
            r1 = 0
        Lb:
            if (r1 >= r11) goto L3a
            android.view.View r3 = r10.getVirtualChildAt(r1)
            int r2 = r3.getVisibility()
            r4 = 8
            if (r2 == r4) goto L37
            android.view.ViewGroup$LayoutParams r2 = r3.getLayoutParams()
            r8 = r2
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r8 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r8
            int r2 = r8.width
            r4 = -1
            if (r2 != r4) goto L37
            int r9 = r8.height
            int r2 = r3.getMeasuredHeight()
            r8.height = r2
            r5 = 0
            r7 = 0
            r2 = r10
            r4 = r0
            r6 = r12
            r2.measureChildWithMargins(r3, r4, r5, r6, r7)
            r8.height = r9
        L37:
            int r1 = r1 + 1
            goto Lb
        L3a:
            return
    }

    private void setChildFrame(android.view.View r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            int r4 = r4 + r2
            int r5 = r5 + r3
            r1.layout(r2, r3, r4, r5)
            return
    }

    @Override
    protected boolean checkLayoutParams(android.view.ViewGroup.LayoutParams r1) {
            r0 = this;
            boolean r1 = r1 instanceof android.support.v7.widget.LinearLayoutCompat.LayoutParams
            return r1
    }

    void drawDividersHorizontal(android.graphics.Canvas r7) {
            r6 = this;
            int r0 = r6.getVirtualChildCount()
            boolean r1 = android.support.v7.widget.ViewUtils.isLayoutRtl(r6)
            r2 = 0
        L9:
            if (r2 >= r0) goto L3f
            android.view.View r3 = r6.getVirtualChildAt(r2)
            if (r3 == 0) goto L3c
            int r4 = r3.getVisibility()
            r5 = 8
            if (r4 == r5) goto L3c
            boolean r4 = r6.hasDividerBeforeChildAt(r2)
            if (r4 == 0) goto L3c
            android.view.ViewGroup$LayoutParams r4 = r3.getLayoutParams()
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r4 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r4
            if (r1 == 0) goto L2f
            int r3 = r3.getRight()
            int r4 = r4.rightMargin
            int r3 = r3 + r4
            goto L39
        L2f:
            int r3 = r3.getLeft()
            int r4 = r4.leftMargin
            int r3 = r3 - r4
            int r4 = r6.mDividerWidth
            int r3 = r3 - r4
        L39:
            r6.drawVerticalDivider(r7, r3)
        L3c:
            int r2 = r2 + 1
            goto L9
        L3f:
            boolean r2 = r6.hasDividerBeforeChildAt(r0)
            if (r2 == 0) goto L7d
            int r0 = r0 + (-1)
            android.view.View r0 = r6.getVirtualChildAt(r0)
            if (r0 != 0) goto L60
            if (r1 == 0) goto L54
            int r0 = r6.getPaddingLeft()
            goto L7a
        L54:
            int r0 = r6.getWidth()
            int r1 = r6.getPaddingRight()
            int r0 = r0 - r1
            int r1 = r6.mDividerWidth
            goto L71
        L60:
            android.view.ViewGroup$LayoutParams r2 = r0.getLayoutParams()
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r2 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r2
            if (r1 == 0) goto L73
            int r0 = r0.getLeft()
            int r1 = r2.leftMargin
            int r0 = r0 - r1
            int r1 = r6.mDividerWidth
        L71:
            int r0 = r0 - r1
            goto L7a
        L73:
            int r0 = r0.getRight()
            int r1 = r2.rightMargin
            int r0 = r0 + r1
        L7a:
            r6.drawVerticalDivider(r7, r0)
        L7d:
            return
    }

    void drawDividersVertical(android.graphics.Canvas r6) {
            r5 = this;
            int r0 = r5.getVirtualChildCount()
            r1 = 0
        L5:
            if (r1 >= r0) goto L31
            android.view.View r2 = r5.getVirtualChildAt(r1)
            if (r2 == 0) goto L2e
            int r3 = r2.getVisibility()
            r4 = 8
            if (r3 == r4) goto L2e
            boolean r3 = r5.hasDividerBeforeChildAt(r1)
            if (r3 == 0) goto L2e
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r3 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r3
            int r2 = r2.getTop()
            int r3 = r3.topMargin
            int r2 = r2 - r3
            int r3 = r5.mDividerHeight
            int r2 = r2 - r3
            r5.drawHorizontalDivider(r6, r2)
        L2e:
            int r1 = r1 + 1
            goto L5
        L31:
            boolean r1 = r5.hasDividerBeforeChildAt(r0)
            if (r1 == 0) goto L5c
            int r0 = r0 + (-1)
            android.view.View r0 = r5.getVirtualChildAt(r0)
            if (r0 != 0) goto L4c
            int r0 = r5.getHeight()
            int r1 = r5.getPaddingBottom()
            int r0 = r0 - r1
            int r1 = r5.mDividerHeight
            int r0 = r0 - r1
            goto L59
        L4c:
            android.view.ViewGroup$LayoutParams r1 = r0.getLayoutParams()
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r1 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r1
            int r0 = r0.getBottom()
            int r1 = r1.bottomMargin
            int r0 = r0 + r1
        L59:
            r5.drawHorizontalDivider(r6, r0)
        L5c:
            return
    }

    void drawHorizontalDivider(android.graphics.Canvas r5, int r6) {
            r4 = this;
            android.graphics.drawable.Drawable r0 = r4.mDivider
            int r1 = r4.getPaddingLeft()
            int r2 = r4.mDividerPadding
            int r1 = r1 + r2
            int r2 = r4.getWidth()
            int r3 = r4.getPaddingRight()
            int r2 = r2 - r3
            int r3 = r4.mDividerPadding
            int r2 = r2 - r3
            int r3 = r4.mDividerHeight
            int r3 = r3 + r6
            r0.setBounds(r1, r6, r2, r3)
            android.graphics.drawable.Drawable r6 = r4.mDivider
            r6.draw(r5)
            return
    }

    void drawVerticalDivider(android.graphics.Canvas r6, int r7) {
            r5 = this;
            android.graphics.drawable.Drawable r0 = r5.mDivider
            int r1 = r5.getPaddingTop()
            int r2 = r5.mDividerPadding
            int r1 = r1 + r2
            int r2 = r5.mDividerWidth
            int r2 = r2 + r7
            int r3 = r5.getHeight()
            int r4 = r5.getPaddingBottom()
            int r3 = r3 - r4
            int r4 = r5.mDividerPadding
            int r3 = r3 - r4
            r0.setBounds(r7, r1, r2, r3)
            android.graphics.drawable.Drawable r7 = r5.mDivider
            r7.draw(r6)
            return
    }

    @Override
    protected android.support.v7.widget.LinearLayoutCompat.LayoutParams generateDefaultLayoutParams() {
            r3 = this;
            int r0 = r3.mOrientation
            r1 = -2
            if (r0 != 0) goto Lb
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r0 = new android.support.v7.widget.LinearLayoutCompat$LayoutParams
            r0.<init>(r1, r1)
            return r0
        Lb:
            r2 = 1
            if (r0 != r2) goto L15
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r0 = new android.support.v7.widget.LinearLayoutCompat$LayoutParams
            r2 = -1
            r0.<init>(r2, r1)
            return r0
        L15:
            r0 = 0
            return r0
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateDefaultLayoutParams() {
            r1 = this;
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r0 = r1.generateDefaultLayoutParams()
            return r0
    }

    @Override
    public android.support.v7.widget.LinearLayoutCompat.LayoutParams generateLayoutParams(android.util.AttributeSet r3) {
            r2 = this;
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r0 = new android.support.v7.widget.LinearLayoutCompat$LayoutParams
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1, r3)
            return r0
    }

    @Override
    protected android.support.v7.widget.LinearLayoutCompat.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r2) {
            r1 = this;
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r0 = new android.support.v7.widget.LinearLayoutCompat$LayoutParams
            r0.<init>(r2)
            return r0
    }

    @Override
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet r1) {
            r0 = this;
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r1) {
            r0 = this;
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    public int getBaseline() {
            r5 = this;
            int r0 = r5.mBaselineAlignedChildIndex
            if (r0 >= 0) goto L9
            int r0 = super.getBaseline()
            return r0
        L9:
            int r0 = r5.getChildCount()
            int r1 = r5.mBaselineAlignedChildIndex
            if (r0 <= r1) goto L77
            android.view.View r0 = r5.getChildAt(r1)
            int r1 = r0.getBaseline()
            r2 = -1
            if (r1 != r2) goto L29
            int r0 = r5.mBaselineAlignedChildIndex
            if (r0 != 0) goto L21
            return r2
        L21:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "mBaselineAlignedChildIndex of LinearLayout points to a View that doesn't know how to get its baseline."
            r0.<init>(r1)
            throw r0
        L29:
            int r2 = r5.mBaselineChildTop
            int r3 = r5.mOrientation
            r4 = 1
            if (r3 != r4) goto L6c
            int r3 = r5.mGravity
            r3 = r3 & 112(0x70, float:1.57E-43)
            r4 = 48
            if (r3 == r4) goto L6c
            r4 = 16
            if (r3 == r4) goto L53
            r4 = 80
            if (r3 == r4) goto L41
            goto L6c
        L41:
            int r2 = r5.getBottom()
            int r3 = r5.getTop()
            int r2 = r2 - r3
            int r3 = r5.getPaddingBottom()
            int r2 = r2 - r3
            int r3 = r5.mTotalLength
            int r2 = r2 - r3
            goto L6c
        L53:
            int r3 = r5.getBottom()
            int r4 = r5.getTop()
            int r3 = r3 - r4
            int r4 = r5.getPaddingTop()
            int r3 = r3 - r4
            int r4 = r5.getPaddingBottom()
            int r3 = r3 - r4
            int r4 = r5.mTotalLength
            int r3 = r3 - r4
            int r3 = r3 / 2
            int r2 = r2 + r3
        L6c:
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r0 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r0
            int r0 = r0.topMargin
            int r2 = r2 + r0
            int r2 = r2 + r1
            return r2
        L77:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "mBaselineAlignedChildIndex of LinearLayout set to an index that is out of bounds."
            r0.<init>(r1)
            throw r0
    }

    public int getBaselineAlignedChildIndex() {
            r1 = this;
            int r0 = r1.mBaselineAlignedChildIndex
            return r0
    }

    int getChildrenSkipCount(android.view.View r1, int r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    public android.graphics.drawable.Drawable getDividerDrawable() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDivider
            return r0
    }

    public int getDividerPadding() {
            r1 = this;
            int r0 = r1.mDividerPadding
            return r0
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public int getDividerWidth() {
            r1 = this;
            int r0 = r1.mDividerWidth
            return r0
    }

    public int getGravity() {
            r1 = this;
            int r0 = r1.mGravity
            return r0
    }

    int getLocationOffset(android.view.View r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    int getNextLocationOffset(android.view.View r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    public int getOrientation() {
            r1 = this;
            int r0 = r1.mOrientation
            return r0
    }

    public int getShowDividers() {
            r1 = this;
            int r0 = r1.mShowDividers
            return r0
    }

    android.view.View getVirtualChildAt(int r1) {
            r0 = this;
            android.view.View r1 = r0.getChildAt(r1)
            return r1
    }

    int getVirtualChildCount() {
            r1 = this;
            int r0 = r1.getChildCount()
            return r0
    }

    public float getWeightSum() {
            r1 = this;
            float r0 = r1.mWeightSum
            return r0
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY})
    protected boolean hasDividerBeforeChildAt(int r5) {
            r4 = this;
            r0 = 0
            r1 = 1
            if (r5 != 0) goto Lb
            int r5 = r4.mShowDividers
            r5 = r5 & r1
            if (r5 == 0) goto La
            r0 = 1
        La:
            return r0
        Lb:
            int r2 = r4.getChildCount()
            if (r5 != r2) goto L19
            int r5 = r4.mShowDividers
            r5 = r5 & 4
            if (r5 == 0) goto L18
            r0 = 1
        L18:
            return r0
        L19:
            int r2 = r4.mShowDividers
            r2 = r2 & 2
            if (r2 == 0) goto L33
            int r5 = r5 - r1
        L20:
            if (r5 < 0) goto L33
            android.view.View r2 = r4.getChildAt(r5)
            int r2 = r2.getVisibility()
            r3 = 8
            if (r2 == r3) goto L30
            r0 = 1
            goto L33
        L30:
            int r5 = r5 + (-1)
            goto L20
        L33:
            return r0
    }

    public boolean isBaselineAligned() {
            r1 = this;
            boolean r0 = r1.mBaselineAligned
            return r0
    }

    public boolean isMeasureWithLargestChildEnabled() {
            r1 = this;
            boolean r0 = r1.mUseLargestChild
            return r0
    }

    void layoutHorizontal(int r25, int r26, int r27, int r28) {
            r24 = this;
            r6 = r24
            boolean r0 = android.support.v7.widget.ViewUtils.isLayoutRtl(r24)
            int r7 = r24.getPaddingTop()
            int r1 = r28 - r26
            int r2 = r24.getPaddingBottom()
            int r8 = r1 - r2
            int r1 = r1 - r7
            int r2 = r24.getPaddingBottom()
            int r9 = r1 - r2
            int r10 = r24.getVirtualChildCount()
            int r1 = r6.mGravity
            r2 = 8388615(0x800007, float:1.1754953E-38)
            r2 = r2 & r1
            r11 = r1 & 112(0x70, float:1.57E-43)
            boolean r12 = r6.mBaselineAligned
            int[] r13 = r6.mMaxAscent
            int[] r14 = r6.mMaxDescent
            int r1 = android.support.v4.view.ViewCompat.getLayoutDirection(r24)
            int r1 = android.support.v4.view.GravityCompat.getAbsoluteGravity(r2, r1)
            r15 = 2
            r5 = 1
            if (r1 == r5) goto L4b
            r2 = 5
            if (r1 == r2) goto L3f
            int r1 = r24.getPaddingLeft()
            goto L56
        L3f:
            int r1 = r24.getPaddingLeft()
            int r1 = r1 + r27
            int r1 = r1 - r25
            int r2 = r6.mTotalLength
            int r1 = r1 - r2
            goto L56
        L4b:
            int r1 = r24.getPaddingLeft()
            int r2 = r27 - r25
            int r3 = r6.mTotalLength
            int r2 = r2 - r3
            int r2 = r2 / r15
            int r1 = r1 + r2
        L56:
            r2 = 0
            if (r0 == 0) goto L60
            int r0 = r10 + (-1)
            r16 = r0
            r17 = -1
            goto L64
        L60:
            r16 = 0
            r17 = 1
        L64:
            r3 = 0
        L65:
            if (r3 >= r10) goto L145
            int r0 = r17 * r3
            int r2 = r16 + r0
            android.view.View r0 = r6.getVirtualChildAt(r2)
            if (r0 != 0) goto L78
            int r0 = r6.measureNullChild(r2)
            int r1 = r1 + r0
            goto L12f
        L78:
            int r5 = r0.getVisibility()
            r15 = 8
            if (r5 == r15) goto L12d
            int r15 = r0.getMeasuredWidth()
            int r5 = r0.getMeasuredHeight()
            android.view.ViewGroup$LayoutParams r18 = r0.getLayoutParams()
            r4 = r18
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r4 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r4
            if (r12 == 0) goto La0
            r18 = r3
            int r3 = r4.height
            r19 = r10
            r10 = -1
            if (r3 == r10) goto La4
            int r3 = r0.getBaseline()
            goto La5
        La0:
            r18 = r3
            r19 = r10
        La4:
            r3 = -1
        La5:
            int r10 = r4.gravity
            if (r10 >= 0) goto Laa
            r10 = r11
        Laa:
            r10 = r10 & 112(0x70, float:1.57E-43)
            r20 = r11
            r11 = 16
            if (r10 == r11) goto Le9
            r11 = 48
            if (r10 == r11) goto Ld6
            r11 = 80
            if (r10 == r11) goto Lbf
            r3 = r7
            r11 = -1
        Lbc:
            r21 = 1
            goto Lf7
        Lbf:
            int r10 = r8 - r5
            int r11 = r4.bottomMargin
            int r10 = r10 - r11
            r11 = -1
            if (r3 == r11) goto Ld4
            int r21 = r0.getMeasuredHeight()
            int r21 = r21 - r3
            r3 = 2
            r22 = r14[r3]
            int r22 = r22 - r21
            int r10 = r10 - r22
        Ld4:
            r3 = r10
            goto Lbc
        Ld6:
            r11 = -1
            int r10 = r4.topMargin
            int r10 = r10 + r7
            if (r3 == r11) goto Le5
            r21 = 1
            r22 = r13[r21]
            int r22 = r22 - r3
            int r10 = r10 + r22
            goto Le7
        Le5:
            r21 = 1
        Le7:
            r3 = r10
            goto Lf7
        Le9:
            r11 = -1
            r21 = 1
            int r3 = r9 - r5
            r10 = 2
            int r3 = r3 / r10
            int r3 = r3 + r7
            int r10 = r4.topMargin
            int r3 = r3 + r10
            int r10 = r4.bottomMargin
            int r3 = r3 - r10
        Lf7:
            boolean r10 = r6.hasDividerBeforeChildAt(r2)
            if (r10 == 0) goto L100
            int r10 = r6.mDividerWidth
            int r1 = r1 + r10
        L100:
            int r10 = r4.leftMargin
            int r10 = r10 + r1
            int r1 = r6.getLocationOffset(r0)
            int r22 = r10 + r1
            r1 = r0
            r0 = r24
            r25 = r1
            r11 = r2
            r2 = r22
            r22 = r7
            r23 = -1
            r7 = r4
            r4 = r15
            r0.setChildFrame(r1, r2, r3, r4, r5)
            int r0 = r7.rightMargin
            int r15 = r15 + r0
            r0 = r25
            int r1 = r6.getNextLocationOffset(r0)
            int r15 = r15 + r1
            int r10 = r10 + r15
            int r0 = r6.getChildrenSkipCount(r0, r11)
            int r3 = r18 + r0
            r1 = r10
            goto L139
        L12d:
            r18 = r3
        L12f:
            r22 = r7
            r19 = r10
            r20 = r11
            r21 = 1
            r23 = -1
        L139:
            int r3 = r3 + 1
            r10 = r19
            r11 = r20
            r7 = r22
            r5 = 1
            r15 = 2
            goto L65
        L145:
            return
    }

    void layoutVertical(int r18, int r19, int r20, int r21) {
            r17 = this;
            r6 = r17
            int r7 = r17.getPaddingLeft()
            int r0 = r20 - r18
            int r1 = r17.getPaddingRight()
            int r8 = r0 - r1
            int r0 = r0 - r7
            int r1 = r17.getPaddingRight()
            int r9 = r0 - r1
            int r10 = r17.getVirtualChildCount()
            int r0 = r6.mGravity
            r1 = r0 & 112(0x70, float:1.57E-43)
            r2 = 8388615(0x800007, float:1.1754953E-38)
            r11 = r0 & r2
            r0 = 16
            if (r1 == r0) goto L3b
            r0 = 80
            if (r1 == r0) goto L2f
            int r0 = r17.getPaddingTop()
            goto L47
        L2f:
            int r0 = r17.getPaddingTop()
            int r0 = r0 + r21
            int r0 = r0 - r19
            int r1 = r6.mTotalLength
            int r0 = r0 - r1
            goto L47
        L3b:
            int r0 = r17.getPaddingTop()
            int r1 = r21 - r19
            int r2 = r6.mTotalLength
            int r1 = r1 - r2
            int r1 = r1 / 2
            int r0 = r0 + r1
        L47:
            r1 = 0
            r12 = 0
        L49:
            if (r12 >= r10) goto Lc9
            android.view.View r13 = r6.getVirtualChildAt(r12)
            r14 = 1
            if (r13 != 0) goto L59
            int r1 = r6.measureNullChild(r12)
            int r0 = r0 + r1
            goto Lc6
        L59:
            int r1 = r13.getVisibility()
            r2 = 8
            if (r1 == r2) goto Lc6
            int r4 = r13.getMeasuredWidth()
            int r15 = r13.getMeasuredHeight()
            android.view.ViewGroup$LayoutParams r1 = r13.getLayoutParams()
            r5 = r1
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r5 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r5
            int r1 = r5.gravity
            if (r1 >= 0) goto L75
            r1 = r11
        L75:
            int r2 = android.support.v4.view.ViewCompat.getLayoutDirection(r17)
            int r1 = android.support.v4.view.GravityCompat.getAbsoluteGravity(r1, r2)
            r1 = r1 & 7
            if (r1 == r14) goto L8e
            r2 = 5
            if (r1 == r2) goto L89
            int r1 = r5.leftMargin
            int r1 = r1 + r7
        L87:
            r2 = r1
            goto L9a
        L89:
            int r1 = r8 - r4
            int r2 = r5.rightMargin
            goto L98
        L8e:
            int r1 = r9 - r4
            int r1 = r1 / 2
            int r1 = r1 + r7
            int r2 = r5.leftMargin
            int r1 = r1 + r2
            int r2 = r5.rightMargin
        L98:
            int r1 = r1 - r2
            goto L87
        L9a:
            boolean r1 = r6.hasDividerBeforeChildAt(r12)
            if (r1 == 0) goto La3
            int r1 = r6.mDividerHeight
            int r0 = r0 + r1
        La3:
            int r1 = r5.topMargin
            int r16 = r0 + r1
            int r0 = r6.getLocationOffset(r13)
            int r3 = r16 + r0
            r0 = r17
            r1 = r13
            r14 = r5
            r5 = r15
            r0.setChildFrame(r1, r2, r3, r4, r5)
            int r0 = r14.bottomMargin
            int r15 = r15 + r0
            int r0 = r6.getNextLocationOffset(r13)
            int r15 = r15 + r0
            int r16 = r16 + r15
            int r0 = r6.getChildrenSkipCount(r13, r12)
            int r12 = r12 + r0
            r0 = r16
        Lc6:
            r1 = 1
            int r12 = r12 + r1
            goto L49
        Lc9:
            return
    }

    void measureChildBeforeLayout(android.view.View r7, int r8, int r9, int r10, int r11, int r12) {
            r6 = this;
            r0 = r6
            r1 = r7
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.measureChildWithMargins(r1, r2, r3, r4, r5)
            return
    }

    void measureHorizontal(int r39, int r40) {
            r38 = this;
            r7 = r38
            r8 = r39
            r9 = r40
            r10 = 0
            r7.mTotalLength = r10
            int r11 = r38.getVirtualChildCount()
            int r12 = android.view.View.MeasureSpec.getMode(r39)
            int r13 = android.view.View.MeasureSpec.getMode(r40)
            int[] r0 = r7.mMaxAscent
            r14 = 4
            if (r0 == 0) goto L1e
            int[] r0 = r7.mMaxDescent
            if (r0 != 0) goto L26
        L1e:
            int[] r0 = new int[r14]
            r7.mMaxAscent = r0
            int[] r0 = new int[r14]
            r7.mMaxDescent = r0
        L26:
            int[] r15 = r7.mMaxAscent
            int[] r6 = r7.mMaxDescent
            r16 = 3
            r5 = -1
            r15[r16] = r5
            r17 = 2
            r15[r17] = r5
            r18 = 1
            r15[r18] = r5
            r15[r10] = r5
            r6[r16] = r5
            r6[r17] = r5
            r6[r18] = r5
            r6[r10] = r5
            boolean r4 = r7.mBaselineAligned
            boolean r3 = r7.mUseLargestChild
            r2 = 1073741824(0x40000000, float:2.0)
            if (r12 != r2) goto L4c
            r19 = 1
            goto L4e
        L4c:
            r19 = 0
        L4e:
            r20 = 0
            r0 = 0
            r1 = 0
            r14 = 0
            r21 = 0
            r22 = 0
            r23 = 0
            r24 = 0
            r26 = 0
            r27 = 1
            r28 = 0
        L61:
            r29 = r6
            r5 = 8
            if (r1 >= r11) goto L205
            android.view.View r6 = r7.getVirtualChildAt(r1)
            if (r6 != 0) goto L7c
            int r5 = r7.mTotalLength
            int r6 = r7.measureNullChild(r1)
            int r5 = r5 + r6
            r7.mTotalLength = r5
        L76:
            r33 = r3
            r37 = r4
            goto L1f5
        L7c:
            int r10 = r6.getVisibility()
            if (r10 != r5) goto L88
            int r5 = r7.getChildrenSkipCount(r6, r1)
            int r1 = r1 + r5
            goto L76
        L88:
            boolean r5 = r7.hasDividerBeforeChildAt(r1)
            if (r5 == 0) goto L95
            int r5 = r7.mTotalLength
            int r10 = r7.mDividerWidth
            int r5 = r5 + r10
            r7.mTotalLength = r5
        L95:
            android.view.ViewGroup$LayoutParams r5 = r6.getLayoutParams()
            r10 = r5
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r10 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r10
            float r5 = r10.weight
            float r32 = r0 + r5
            if (r12 != r2) goto Leb
            int r0 = r10.width
            if (r0 != 0) goto Leb
            float r0 = r10.weight
            int r0 = (r0 > r20 ? 1 : (r0 == r20 ? 0 : -1))
            if (r0 <= 0) goto Leb
            if (r19 == 0) goto Lb9
            int r0 = r7.mTotalLength
            int r5 = r10.leftMargin
            int r2 = r10.rightMargin
            int r5 = r5 + r2
            int r0 = r0 + r5
            r7.mTotalLength = r0
            goto Lc7
        Lb9:
            int r0 = r7.mTotalLength
            int r2 = r10.leftMargin
            int r2 = r2 + r0
            int r5 = r10.rightMargin
            int r2 = r2 + r5
            int r0 = java.lang.Math.max(r0, r2)
            r7.mTotalLength = r0
        Lc7:
            if (r4 == 0) goto Ldc
            r0 = 0
            int r2 = android.view.View.MeasureSpec.makeMeasureSpec(r0, r0)
            r6.measure(r2, r2)
            r35 = r1
            r33 = r3
            r37 = r4
            r3 = r6
            r31 = -2
            goto L167
        Ldc:
            r35 = r1
            r33 = r3
            r37 = r4
            r3 = r6
            r1 = 1073741824(0x40000000, float:2.0)
            r24 = 1
            r31 = -2
            goto L169
        Leb:
            int r0 = r10.width
            if (r0 != 0) goto Lfa
            float r0 = r10.weight
            int r0 = (r0 > r20 ? 1 : (r0 == r20 ? 0 : -1))
            if (r0 <= 0) goto Lfa
            r5 = -2
            r10.width = r5
            r2 = 0
            goto Lfd
        Lfa:
            r5 = -2
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
        Lfd:
            int r0 = (r32 > r20 ? 1 : (r32 == r20 ? 0 : -1))
            if (r0 != 0) goto L106
            int r0 = r7.mTotalLength
            r30 = r0
            goto L108
        L106:
            r30 = 0
        L108:
            r34 = 0
            r0 = r38
            r35 = r1
            r1 = r6
            r36 = r2
            r2 = r35
            r33 = r3
            r3 = r39
            r37 = r4
            r4 = r30
            r9 = -1
            r30 = -2
            r5 = r40
            r30 = r6
            r9 = -2147483648(0xffffffff80000000, float:-0.0)
            r31 = -2
            r6 = r34
            r0.measureChildBeforeLayout(r1, r2, r3, r4, r5, r6)
            r0 = r36
            if (r0 == r9) goto L131
            r10.width = r0
        L131:
            int r0 = r30.getMeasuredWidth()
            if (r19 == 0) goto L14a
            int r1 = r7.mTotalLength
            int r2 = r10.leftMargin
            int r2 = r2 + r0
            int r3 = r10.rightMargin
            int r2 = r2 + r3
            r3 = r30
            int r4 = r7.getNextLocationOffset(r3)
            int r2 = r2 + r4
            int r1 = r1 + r2
            r7.mTotalLength = r1
            goto L161
        L14a:
            r3 = r30
            int r1 = r7.mTotalLength
            int r2 = r1 + r0
            int r4 = r10.leftMargin
            int r2 = r2 + r4
            int r4 = r10.rightMargin
            int r2 = r2 + r4
            int r4 = r7.getNextLocationOffset(r3)
            int r2 = r2 + r4
            int r1 = java.lang.Math.max(r1, r2)
            r7.mTotalLength = r1
        L161:
            if (r33 == 0) goto L167
            int r14 = java.lang.Math.max(r0, r14)
        L167:
            r1 = 1073741824(0x40000000, float:2.0)
        L169:
            if (r13 == r1) goto L174
            int r0 = r10.height
            r2 = -1
            if (r0 != r2) goto L174
            r0 = 1
            r28 = 1
            goto L175
        L174:
            r0 = 0
        L175:
            int r2 = r10.topMargin
            int r4 = r10.bottomMargin
            int r2 = r2 + r4
            int r4 = r3.getMeasuredHeight()
            int r4 = r4 + r2
            int r5 = r3.getMeasuredState()
            r6 = r26
            int r5 = android.view.View.combineMeasuredStates(r6, r5)
            if (r37 == 0) goto L1b7
            int r6 = r3.getBaseline()
            r9 = -1
            if (r6 == r9) goto L1b7
            int r9 = r10.gravity
            if (r9 >= 0) goto L199
            int r9 = r7.mGravity
            goto L19b
        L199:
            int r9 = r10.gravity
        L19b:
            r9 = r9 & 112(0x70, float:1.57E-43)
            r25 = 4
            int r9 = r9 >> 4
            r9 = r9 & (-2)
            int r9 = r9 >> 1
            r1 = r15[r9]
            int r1 = java.lang.Math.max(r1, r6)
            r15[r9] = r1
            r1 = r29[r9]
            int r6 = r4 - r6
            int r1 = java.lang.Math.max(r1, r6)
            r29[r9] = r1
        L1b7:
            r1 = r21
            int r1 = java.lang.Math.max(r1, r4)
            if (r27 == 0) goto L1c6
            int r6 = r10.height
            r9 = -1
            if (r6 != r9) goto L1c6
            r6 = 1
            goto L1c7
        L1c6:
            r6 = 0
        L1c7:
            float r9 = r10.weight
            int r9 = (r9 > r20 ? 1 : (r9 == r20 ? 0 : -1))
            if (r9 <= 0) goto L1d8
            if (r0 == 0) goto L1d0
            goto L1d1
        L1d0:
            r2 = r4
        L1d1:
            r10 = r23
            int r23 = java.lang.Math.max(r10, r2)
            goto L1e5
        L1d8:
            r10 = r23
            if (r0 == 0) goto L1dd
            r4 = r2
        L1dd:
            r2 = r22
            int r22 = java.lang.Math.max(r2, r4)
            r23 = r10
        L1e5:
            r10 = r35
            int r0 = r7.getChildrenSkipCount(r3, r10)
            int r0 = r0 + r10
            r21 = r1
            r26 = r5
            r27 = r6
            r1 = r0
            r0 = r32
        L1f5:
            int r1 = r1 + 1
            r9 = r40
            r6 = r29
            r3 = r33
            r4 = r37
            r2 = 1073741824(0x40000000, float:2.0)
            r5 = -1
            r10 = 0
            goto L61
        L205:
            r33 = r3
            r37 = r4
            r1 = r21
            r2 = r22
            r10 = r23
            r6 = r26
            r9 = -2147483648(0xffffffff80000000, float:-0.0)
            r31 = -2
            int r3 = r7.mTotalLength
            if (r3 <= 0) goto L226
            boolean r3 = r7.hasDividerBeforeChildAt(r11)
            if (r3 == 0) goto L226
            int r3 = r7.mTotalLength
            int r4 = r7.mDividerWidth
            int r3 = r3 + r4
            r7.mTotalLength = r3
        L226:
            r3 = r15[r18]
            r4 = -1
            if (r3 != r4) goto L23c
            r3 = 0
            r5 = r15[r3]
            if (r5 != r4) goto L23c
            r3 = r15[r17]
            if (r3 != r4) goto L23c
            r3 = r15[r16]
            if (r3 == r4) goto L239
            goto L23c
        L239:
            r23 = r6
            goto L26d
        L23c:
            r3 = r15[r16]
            r4 = 0
            r5 = r15[r4]
            r9 = r15[r18]
            r4 = r15[r17]
            int r4 = java.lang.Math.max(r9, r4)
            int r4 = java.lang.Math.max(r5, r4)
            int r3 = java.lang.Math.max(r3, r4)
            r4 = r29[r16]
            r5 = 0
            r9 = r29[r5]
            r5 = r29[r18]
            r23 = r6
            r6 = r29[r17]
            int r5 = java.lang.Math.max(r5, r6)
            int r5 = java.lang.Math.max(r9, r5)
            int r4 = java.lang.Math.max(r4, r5)
            int r3 = r3 + r4
            int r1 = java.lang.Math.max(r1, r3)
        L26d:
            if (r33 == 0) goto L2d0
            r3 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r12 == r3) goto L275
            if (r12 != 0) goto L2d0
        L275:
            r3 = 0
            r7.mTotalLength = r3
            r3 = 0
        L279:
            if (r3 >= r11) goto L2d0
            android.view.View r4 = r7.getVirtualChildAt(r3)
            if (r4 != 0) goto L28b
            int r4 = r7.mTotalLength
            int r5 = r7.measureNullChild(r3)
            int r4 = r4 + r5
            r7.mTotalLength = r4
            goto L298
        L28b:
            int r5 = r4.getVisibility()
            r6 = 8
            if (r5 != r6) goto L29b
            int r4 = r7.getChildrenSkipCount(r4, r3)
            int r3 = r3 + r4
        L298:
            r22 = r1
            goto L2cb
        L29b:
            android.view.ViewGroup$LayoutParams r5 = r4.getLayoutParams()
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r5 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r5
            if (r19 == 0) goto L2b4
            int r6 = r7.mTotalLength
            int r9 = r5.leftMargin
            int r9 = r9 + r14
            int r5 = r5.rightMargin
            int r9 = r9 + r5
            int r4 = r7.getNextLocationOffset(r4)
            int r9 = r9 + r4
            int r6 = r6 + r9
            r7.mTotalLength = r6
            goto L298
        L2b4:
            int r6 = r7.mTotalLength
            int r9 = r6 + r14
            r22 = r1
            int r1 = r5.leftMargin
            int r9 = r9 + r1
            int r1 = r5.rightMargin
            int r9 = r9 + r1
            int r1 = r7.getNextLocationOffset(r4)
            int r9 = r9 + r1
            int r1 = java.lang.Math.max(r6, r9)
            r7.mTotalLength = r1
        L2cb:
            int r3 = r3 + 1
            r1 = r22
            goto L279
        L2d0:
            r22 = r1
            int r1 = r7.mTotalLength
            int r3 = r38.getPaddingLeft()
            int r4 = r38.getPaddingRight()
            int r3 = r3 + r4
            int r1 = r1 + r3
            r7.mTotalLength = r1
            int r1 = r7.mTotalLength
            int r3 = r38.getSuggestedMinimumWidth()
            int r1 = java.lang.Math.max(r1, r3)
            r3 = 0
            int r1 = android.view.View.resolveSizeAndState(r1, r8, r3)
            r3 = 16777215(0xffffff, float:2.3509886E-38)
            r3 = r3 & r1
            int r4 = r7.mTotalLength
            int r3 = r3 - r4
            if (r24 != 0) goto L343
            if (r3 == 0) goto L2ff
            int r5 = (r0 > r20 ? 1 : (r0 == r20 ? 0 : -1))
            if (r5 <= 0) goto L2ff
            goto L343
        L2ff:
            int r0 = java.lang.Math.max(r2, r10)
            if (r33 == 0) goto L33b
            r2 = 1073741824(0x40000000, float:2.0)
            if (r12 == r2) goto L33b
            r2 = 0
        L30a:
            if (r2 >= r11) goto L33b
            android.view.View r3 = r7.getVirtualChildAt(r2)
            if (r3 == 0) goto L338
            int r5 = r3.getVisibility()
            r6 = 8
            if (r5 != r6) goto L31b
            goto L338
        L31b:
            android.view.ViewGroup$LayoutParams r5 = r3.getLayoutParams()
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r5 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r5
            float r5 = r5.weight
            int r5 = (r5 > r20 ? 1 : (r5 == r20 ? 0 : -1))
            if (r5 <= 0) goto L338
            r5 = 1073741824(0x40000000, float:2.0)
            int r6 = android.view.View.MeasureSpec.makeMeasureSpec(r14, r5)
            int r9 = r3.getMeasuredHeight()
            int r9 = android.view.View.MeasureSpec.makeMeasureSpec(r9, r5)
            r3.measure(r6, r9)
        L338:
            int r2 = r2 + 1
            goto L30a
        L33b:
            r3 = r40
            r26 = r11
            r2 = r22
            goto L4e8
        L343:
            float r5 = r7.mWeightSum
            int r6 = (r5 > r20 ? 1 : (r5 == r20 ? 0 : -1))
            if (r6 <= 0) goto L34a
            r0 = r5
        L34a:
            r5 = -1
            r15[r16] = r5
            r15[r17] = r5
            r15[r18] = r5
            r6 = 0
            r15[r6] = r5
            r29[r16] = r5
            r29[r17] = r5
            r29[r18] = r5
            r29[r6] = r5
            r7.mTotalLength = r6
            r10 = r2
            r9 = r23
            r6 = -1
            r2 = r0
            r0 = 0
        L364:
            if (r0 >= r11) goto L48f
            android.view.View r14 = r7.getVirtualChildAt(r0)
            if (r14 == 0) goto L47e
            int r5 = r14.getVisibility()
            r4 = 8
            if (r5 != r4) goto L376
            goto L47e
        L376:
            android.view.ViewGroup$LayoutParams r5 = r14.getLayoutParams()
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r5 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r5
            float r4 = r5.weight
            int r23 = (r4 > r20 ? 1 : (r4 == r20 ? 0 : -1))
            if (r23 <= 0) goto L3df
            float r8 = (float) r3
            float r8 = r8 * r4
            float r8 = r8 / r2
            int r8 = (int) r8
            float r2 = r2 - r4
            int r3 = r3 - r8
            int r4 = r38.getPaddingTop()
            int r23 = r38.getPaddingBottom()
            int r4 = r4 + r23
            r23 = r2
            int r2 = r5.topMargin
            int r4 = r4 + r2
            int r2 = r5.bottomMargin
            int r4 = r4 + r2
            int r2 = r5.height
            r24 = r3
            r26 = r11
            r11 = -1
            r3 = r40
            int r2 = getChildMeasureSpec(r3, r4, r2)
            int r4 = r5.width
            if (r4 != 0) goto L3bd
            r4 = 1073741824(0x40000000, float:2.0)
            if (r12 == r4) goto L3b1
            goto L3bf
        L3b1:
            if (r8 <= 0) goto L3b4
            goto L3b5
        L3b4:
            r8 = 0
        L3b5:
            int r8 = android.view.View.MeasureSpec.makeMeasureSpec(r8, r4)
            r14.measure(r8, r2)
            goto L3cf
        L3bd:
            r4 = 1073741824(0x40000000, float:2.0)
        L3bf:
            int r30 = r14.getMeasuredWidth()
            int r8 = r30 + r8
            if (r8 >= 0) goto L3c8
            r8 = 0
        L3c8:
            int r8 = android.view.View.MeasureSpec.makeMeasureSpec(r8, r4)
            r14.measure(r8, r2)
        L3cf:
            int r2 = r14.getMeasuredState()
            r4 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r2 = r2 & r4
            int r9 = android.view.View.combineMeasuredStates(r9, r2)
            r2 = r23
            r4 = r24
            goto L3e5
        L3df:
            r4 = r3
            r26 = r11
            r11 = -1
            r3 = r40
        L3e5:
            if (r19 == 0) goto L402
            int r8 = r7.mTotalLength
            int r23 = r14.getMeasuredWidth()
            int r11 = r5.leftMargin
            int r23 = r23 + r11
            int r11 = r5.rightMargin
            int r23 = r23 + r11
            int r11 = r7.getNextLocationOffset(r14)
            int r23 = r23 + r11
            int r8 = r8 + r23
            r7.mTotalLength = r8
            r23 = r2
            goto L41c
        L402:
            int r8 = r7.mTotalLength
            int r11 = r14.getMeasuredWidth()
            int r11 = r11 + r8
            r23 = r2
            int r2 = r5.leftMargin
            int r11 = r11 + r2
            int r2 = r5.rightMargin
            int r11 = r11 + r2
            int r2 = r7.getNextLocationOffset(r14)
            int r11 = r11 + r2
            int r2 = java.lang.Math.max(r8, r11)
            r7.mTotalLength = r2
        L41c:
            r2 = 1073741824(0x40000000, float:2.0)
            if (r13 == r2) goto L427
            int r2 = r5.height
            r8 = -1
            if (r2 != r8) goto L427
            r2 = 1
            goto L428
        L427:
            r2 = 0
        L428:
            int r8 = r5.topMargin
            int r11 = r5.bottomMargin
            int r8 = r8 + r11
            int r11 = r14.getMeasuredHeight()
            int r11 = r11 + r8
            int r6 = java.lang.Math.max(r6, r11)
            if (r2 == 0) goto L439
            goto L43a
        L439:
            r8 = r11
        L43a:
            int r2 = java.lang.Math.max(r10, r8)
            if (r27 == 0) goto L447
            int r8 = r5.height
            r10 = -1
            if (r8 != r10) goto L448
            r8 = 1
            goto L449
        L447:
            r10 = -1
        L448:
            r8 = 0
        L449:
            if (r37 == 0) goto L476
            int r14 = r14.getBaseline()
            if (r14 == r10) goto L476
            int r10 = r5.gravity
            if (r10 >= 0) goto L458
            int r5 = r7.mGravity
            goto L45a
        L458:
            int r5 = r5.gravity
        L45a:
            r5 = r5 & 112(0x70, float:1.57E-43)
            r24 = 4
            int r5 = r5 >> 4
            r5 = r5 & (-2)
            int r5 = r5 >> 1
            r10 = r15[r5]
            int r10 = java.lang.Math.max(r10, r14)
            r15[r5] = r10
            r10 = r29[r5]
            int r11 = r11 - r14
            int r10 = java.lang.Math.max(r10, r11)
            r29[r5] = r10
            goto L478
        L476:
            r24 = 4
        L478:
            r10 = r2
            r27 = r8
            r2 = r23
            goto L485
        L47e:
            r4 = r3
            r26 = r11
            r24 = 4
            r3 = r40
        L485:
            int r0 = r0 + 1
            r8 = r39
            r3 = r4
            r11 = r26
            r5 = -1
            goto L364
        L48f:
            r3 = r40
            r26 = r11
            int r0 = r7.mTotalLength
            int r2 = r38.getPaddingLeft()
            int r4 = r38.getPaddingRight()
            int r2 = r2 + r4
            int r0 = r0 + r2
            r7.mTotalLength = r0
            r0 = r15[r18]
            r2 = -1
            if (r0 != r2) goto L4b6
            r0 = 0
            r4 = r15[r0]
            if (r4 != r2) goto L4b6
            r0 = r15[r17]
            if (r0 != r2) goto L4b6
            r0 = r15[r16]
            if (r0 == r2) goto L4b4
            goto L4b6
        L4b4:
            r0 = r6
            goto L4e4
        L4b6:
            r0 = r15[r16]
            r2 = 0
            r4 = r15[r2]
            r5 = r15[r18]
            r8 = r15[r17]
            int r5 = java.lang.Math.max(r5, r8)
            int r4 = java.lang.Math.max(r4, r5)
            int r0 = java.lang.Math.max(r0, r4)
            r4 = r29[r16]
            r2 = r29[r2]
            r5 = r29[r18]
            r8 = r29[r17]
            int r5 = java.lang.Math.max(r5, r8)
            int r2 = java.lang.Math.max(r2, r5)
            int r2 = java.lang.Math.max(r4, r2)
            int r0 = r0 + r2
            int r0 = java.lang.Math.max(r6, r0)
        L4e4:
            r2 = r0
            r23 = r9
            r0 = r10
        L4e8:
            if (r27 != 0) goto L4ef
            r4 = 1073741824(0x40000000, float:2.0)
            if (r13 == r4) goto L4ef
            goto L4f0
        L4ef:
            r0 = r2
        L4f0:
            int r2 = r38.getPaddingTop()
            int r4 = r38.getPaddingBottom()
            int r2 = r2 + r4
            int r0 = r0 + r2
            int r2 = r38.getSuggestedMinimumHeight()
            int r0 = java.lang.Math.max(r0, r2)
            r2 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r2 = r23 & r2
            r1 = r1 | r2
            int r2 = r23 << 16
            int r0 = android.view.View.resolveSizeAndState(r0, r3, r2)
            r7.setMeasuredDimension(r1, r0)
            if (r28 == 0) goto L519
            r0 = r39
            r1 = r26
            r7.forceUniformHeight(r1, r0)
        L519:
            return
    }

    int measureNullChild(int r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    void measureVertical(int r34, int r35) {
            r33 = this;
            r7 = r33
            r8 = r34
            r9 = r35
            r10 = 0
            r7.mTotalLength = r10
            int r11 = r33.getVirtualChildCount()
            int r12 = android.view.View.MeasureSpec.getMode(r34)
            int r13 = android.view.View.MeasureSpec.getMode(r35)
            int r14 = r7.mBaselineAlignedChildIndex
            boolean r15 = r7.mUseLargestChild
            r16 = 0
            r17 = 1
            r0 = 0
            r1 = 0
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r18 = 0
            r19 = 1
            r20 = 0
        L2a:
            r10 = 8
            r22 = r4
            if (r6 >= r11) goto L19d
            android.view.View r4 = r7.getVirtualChildAt(r6)
            if (r4 != 0) goto L47
            int r4 = r7.mTotalLength
            int r10 = r7.measureNullChild(r6)
            int r4 = r4 + r10
            r7.mTotalLength = r4
            r23 = r11
            r4 = r22
        L43:
            r22 = r13
            goto L191
        L47:
            r24 = r1
            int r1 = r4.getVisibility()
            if (r1 != r10) goto L5b
            int r1 = r7.getChildrenSkipCount(r4, r6)
            int r6 = r6 + r1
            r23 = r11
            r4 = r22
            r1 = r24
            goto L43
        L5b:
            boolean r1 = r7.hasDividerBeforeChildAt(r6)
            if (r1 == 0) goto L68
            int r1 = r7.mTotalLength
            int r10 = r7.mDividerHeight
            int r1 = r1 + r10
            r7.mTotalLength = r1
        L68:
            android.view.ViewGroup$LayoutParams r1 = r4.getLayoutParams()
            r10 = r1
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r10 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r10
            float r1 = r10.weight
            float r25 = r0 + r1
            r1 = 1073741824(0x40000000, float:2.0)
            if (r13 != r1) goto La6
            int r0 = r10.height
            if (r0 != 0) goto La6
            float r0 = r10.weight
            int r0 = (r0 > r16 ? 1 : (r0 == r16 ? 0 : -1))
            if (r0 <= 0) goto La6
            int r0 = r7.mTotalLength
            int r1 = r10.topMargin
            int r1 = r1 + r0
            r26 = r2
            int r2 = r10.bottomMargin
            int r1 = r1 + r2
            int r0 = java.lang.Math.max(r0, r1)
            r7.mTotalLength = r0
            r0 = r3
            r3 = r4
            r31 = r5
            r23 = r11
            r8 = r24
            r30 = r26
            r18 = 1
            r11 = r6
            r32 = r22
            r22 = r13
            r13 = r32
            goto L118
        La6:
            r26 = r2
            int r0 = r10.height
            if (r0 != 0) goto Lb7
            float r0 = r10.weight
            int r0 = (r0 > r16 ? 1 : (r0 == r16 ? 0 : -1))
            if (r0 <= 0) goto Lb7
            r0 = -2
            r10.height = r0
            r2 = 0
            goto Lb9
        Lb7:
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
        Lb9:
            r27 = 0
            int r0 = (r25 > r16 ? 1 : (r25 == r16 ? 0 : -1))
            if (r0 != 0) goto Lc4
            int r0 = r7.mTotalLength
            r28 = r0
            goto Lc6
        Lc4:
            r28 = 0
        Lc6:
            r0 = r33
            r8 = r24
            r23 = 1073741824(0x40000000, float:2.0)
            r1 = r4
            r29 = r2
            r30 = r26
            r2 = r6
            r9 = r3
            r3 = r34
            r24 = r4
            r23 = r11
            r11 = 1073741824(0x40000000, float:2.0)
            r32 = r22
            r22 = r13
            r13 = r32
            r4 = r27
            r31 = r5
            r5 = r35
            r11 = r6
            r6 = r28
            r0.measureChildBeforeLayout(r1, r2, r3, r4, r5, r6)
            r0 = r29
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r0 == r1) goto Lf5
            r10.height = r0
        Lf5:
            int r0 = r24.getMeasuredHeight()
            int r1 = r7.mTotalLength
            int r2 = r1 + r0
            int r3 = r10.topMargin
            int r2 = r2 + r3
            int r3 = r10.bottomMargin
            int r2 = r2 + r3
            r3 = r24
            int r4 = r7.getNextLocationOffset(r3)
            int r2 = r2 + r4
            int r1 = java.lang.Math.max(r1, r2)
            r7.mTotalLength = r1
            if (r15 == 0) goto L117
            int r0 = java.lang.Math.max(r0, r9)
            goto L118
        L117:
            r0 = r9
        L118:
            if (r14 < 0) goto L122
            int r6 = r11 + 1
            if (r14 != r6) goto L122
            int r1 = r7.mTotalLength
            r7.mBaselineChildTop = r1
        L122:
            if (r11 >= r14) goto L133
            float r1 = r10.weight
            int r1 = (r1 > r16 ? 1 : (r1 == r16 ? 0 : -1))
            if (r1 > 0) goto L12b
            goto L133
        L12b:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "A child of LinearLayout with index less than mBaselineAlignedChildIndex has weight > 0, which won't work.  Either remove the weight, or don't set mBaselineAlignedChildIndex."
            r0.<init>(r1)
            throw r0
        L133:
            r1 = 1073741824(0x40000000, float:2.0)
            if (r12 == r1) goto L140
            int r1 = r10.width
            r2 = -1
            if (r1 != r2) goto L140
            r1 = 1
            r20 = 1
            goto L141
        L140:
            r1 = 0
        L141:
            int r2 = r10.leftMargin
            int r4 = r10.rightMargin
            int r2 = r2 + r4
            int r4 = r3.getMeasuredWidth()
            int r4 = r4 + r2
            r5 = r30
            int r5 = java.lang.Math.max(r5, r4)
            int r6 = r3.getMeasuredState()
            int r6 = android.view.View.combineMeasuredStates(r8, r6)
            if (r19 == 0) goto L162
            int r8 = r10.width
            r9 = -1
            if (r8 != r9) goto L162
            r8 = 1
            goto L163
        L162:
            r8 = 0
        L163:
            float r9 = r10.weight
            int r9 = (r9 > r16 ? 1 : (r9 == r16 ? 0 : -1))
            if (r9 <= 0) goto L175
            if (r1 == 0) goto L16c
            goto L16d
        L16c:
            r2 = r4
        L16d:
            int r4 = java.lang.Math.max(r13, r2)
            r13 = r4
            r1 = r31
            goto L17f
        L175:
            if (r1 == 0) goto L178
            goto L179
        L178:
            r2 = r4
        L179:
            r1 = r31
            int r1 = java.lang.Math.max(r1, r2)
        L17f:
            int r2 = r7.getChildrenSkipCount(r3, r11)
            int r2 = r2 + r11
            r3 = r0
            r19 = r8
            r4 = r13
            r0 = r25
            r32 = r5
            r5 = r1
            r1 = r6
            r6 = r2
            r2 = r32
        L191:
            int r6 = r6 + 1
            r8 = r34
            r9 = r35
            r13 = r22
            r11 = r23
            goto L2a
        L19d:
            r8 = r1
            r9 = r3
            r1 = r5
            r23 = r11
            r5 = r2
            r32 = r22
            r22 = r13
            r13 = r32
            int r2 = r7.mTotalLength
            if (r2 <= 0) goto L1bd
            r2 = r23
            boolean r3 = r7.hasDividerBeforeChildAt(r2)
            if (r3 == 0) goto L1bf
            int r3 = r7.mTotalLength
            int r4 = r7.mDividerHeight
            int r3 = r3 + r4
            r7.mTotalLength = r3
            goto L1bf
        L1bd:
            r2 = r23
        L1bf:
            if (r15 == 0) goto L20e
            r3 = r22
            r4 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r3 == r4) goto L1c9
            if (r3 != 0) goto L210
        L1c9:
            r4 = 0
            r7.mTotalLength = r4
            r4 = 0
        L1cd:
            if (r4 >= r2) goto L210
            android.view.View r6 = r7.getVirtualChildAt(r4)
            if (r6 != 0) goto L1df
            int r6 = r7.mTotalLength
            int r11 = r7.measureNullChild(r4)
            int r6 = r6 + r11
            r7.mTotalLength = r6
            goto L209
        L1df:
            int r11 = r6.getVisibility()
            if (r11 != r10) goto L1eb
            int r6 = r7.getChildrenSkipCount(r6, r4)
            int r4 = r4 + r6
            goto L209
        L1eb:
            android.view.ViewGroup$LayoutParams r11 = r6.getLayoutParams()
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r11 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r11
            int r14 = r7.mTotalLength
            int r21 = r14 + r9
            int r10 = r11.topMargin
            int r21 = r21 + r10
            int r10 = r11.bottomMargin
            int r21 = r21 + r10
            int r6 = r7.getNextLocationOffset(r6)
            int r6 = r21 + r6
            int r6 = java.lang.Math.max(r14, r6)
            r7.mTotalLength = r6
        L209:
            int r4 = r4 + 1
            r10 = 8
            goto L1cd
        L20e:
            r3 = r22
        L210:
            int r4 = r7.mTotalLength
            int r6 = r33.getPaddingTop()
            int r10 = r33.getPaddingBottom()
            int r6 = r6 + r10
            int r4 = r4 + r6
            r7.mTotalLength = r4
            int r4 = r7.mTotalLength
            int r6 = r33.getSuggestedMinimumHeight()
            int r4 = java.lang.Math.max(r4, r6)
            r6 = r35
            r10 = r9
            r9 = 0
            int r4 = android.view.View.resolveSizeAndState(r4, r6, r9)
            r9 = 16777215(0xffffff, float:2.3509886E-38)
            r9 = r9 & r4
            int r11 = r7.mTotalLength
            int r9 = r9 - r11
            if (r18 != 0) goto L281
            if (r9 == 0) goto L240
            int r11 = (r0 > r16 ? 1 : (r0 == r16 ? 0 : -1))
            if (r11 <= 0) goto L240
            goto L281
        L240:
            int r0 = java.lang.Math.max(r1, r13)
            if (r15 == 0) goto L27c
            r1 = 1073741824(0x40000000, float:2.0)
            if (r3 == r1) goto L27c
            r1 = 0
        L24b:
            if (r1 >= r2) goto L27c
            android.view.View r3 = r7.getVirtualChildAt(r1)
            if (r3 == 0) goto L279
            int r9 = r3.getVisibility()
            r11 = 8
            if (r9 != r11) goto L25c
            goto L279
        L25c:
            android.view.ViewGroup$LayoutParams r9 = r3.getLayoutParams()
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r9 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r9
            float r9 = r9.weight
            int r9 = (r9 > r16 ? 1 : (r9 == r16 ? 0 : -1))
            if (r9 <= 0) goto L279
            int r9 = r3.getMeasuredWidth()
            r11 = 1073741824(0x40000000, float:2.0)
            int r9 = android.view.View.MeasureSpec.makeMeasureSpec(r9, r11)
            int r13 = android.view.View.MeasureSpec.makeMeasureSpec(r10, r11)
            r3.measure(r9, r13)
        L279:
            int r1 = r1 + 1
            goto L24b
        L27c:
            r11 = r34
            r1 = r8
            goto L374
        L281:
            float r10 = r7.mWeightSum
            int r11 = (r10 > r16 ? 1 : (r10 == r16 ? 0 : -1))
            if (r11 <= 0) goto L288
            r0 = r10
        L288:
            r10 = 0
            r7.mTotalLength = r10
            r11 = r0
            r0 = 0
            r32 = r8
            r8 = r1
            r1 = r32
        L292:
            if (r0 >= r2) goto L363
            android.view.View r13 = r7.getVirtualChildAt(r0)
            int r14 = r13.getVisibility()
            r15 = 8
            if (r14 != r15) goto L2a6
            r21 = r11
            r11 = r34
            goto L35c
        L2a6:
            android.view.ViewGroup$LayoutParams r14 = r13.getLayoutParams()
            android.support.v7.widget.LinearLayoutCompat$LayoutParams r14 = (android.support.v7.widget.LinearLayoutCompat.LayoutParams) r14
            float r10 = r14.weight
            int r18 = (r10 > r16 ? 1 : (r10 == r16 ? 0 : -1))
            if (r18 <= 0) goto L307
            float r15 = (float) r9
            float r15 = r15 * r10
            float r15 = r15 / r11
            int r15 = (int) r15
            float r11 = r11 - r10
            int r9 = r9 - r15
            int r10 = r33.getPaddingLeft()
            int r18 = r33.getPaddingRight()
            int r10 = r10 + r18
            r18 = r9
            int r9 = r14.leftMargin
            int r10 = r10 + r9
            int r9 = r14.rightMargin
            int r10 = r10 + r9
            int r9 = r14.width
            r21 = r11
            r11 = r34
            int r9 = getChildMeasureSpec(r11, r10, r9)
            int r10 = r14.height
            if (r10 != 0) goto L2ea
            r10 = 1073741824(0x40000000, float:2.0)
            if (r3 == r10) goto L2de
            goto L2ec
        L2de:
            if (r15 <= 0) goto L2e1
            goto L2e2
        L2e1:
            r15 = 0
        L2e2:
            int r15 = android.view.View.MeasureSpec.makeMeasureSpec(r15, r10)
            r13.measure(r9, r15)
            goto L2fc
        L2ea:
            r10 = 1073741824(0x40000000, float:2.0)
        L2ec:
            int r23 = r13.getMeasuredHeight()
            int r15 = r23 + r15
            if (r15 >= 0) goto L2f5
            r15 = 0
        L2f5:
            int r15 = android.view.View.MeasureSpec.makeMeasureSpec(r15, r10)
            r13.measure(r9, r15)
        L2fc:
            int r9 = r13.getMeasuredState()
            r9 = r9 & (-256(0xffffffffffffff00, float:NaN))
            int r1 = android.view.View.combineMeasuredStates(r1, r9)
            goto L30e
        L307:
            r10 = r11
            r11 = r34
            r18 = r9
            r21 = r10
        L30e:
            int r9 = r14.leftMargin
            int r10 = r14.rightMargin
            int r9 = r9 + r10
            int r10 = r13.getMeasuredWidth()
            int r10 = r10 + r9
            int r5 = java.lang.Math.max(r5, r10)
            r15 = 1073741824(0x40000000, float:2.0)
            if (r12 == r15) goto L329
            int r15 = r14.width
            r23 = r1
            r1 = -1
            if (r15 != r1) goto L32c
            r15 = 1
            goto L32d
        L329:
            r23 = r1
            r1 = -1
        L32c:
            r15 = 0
        L32d:
            if (r15 == 0) goto L330
            goto L331
        L330:
            r9 = r10
        L331:
            int r8 = java.lang.Math.max(r8, r9)
            if (r19 == 0) goto L33d
            int r9 = r14.width
            if (r9 != r1) goto L33d
            r9 = 1
            goto L33e
        L33d:
            r9 = 0
        L33e:
            int r10 = r7.mTotalLength
            int r15 = r13.getMeasuredHeight()
            int r15 = r15 + r10
            int r1 = r14.topMargin
            int r15 = r15 + r1
            int r1 = r14.bottomMargin
            int r15 = r15 + r1
            int r1 = r7.getNextLocationOffset(r13)
            int r15 = r15 + r1
            int r1 = java.lang.Math.max(r10, r15)
            r7.mTotalLength = r1
            r19 = r9
            r9 = r18
            r1 = r23
        L35c:
            int r0 = r0 + 1
            r11 = r21
            r10 = 0
            goto L292
        L363:
            r11 = r34
            int r0 = r7.mTotalLength
            int r3 = r33.getPaddingTop()
            int r9 = r33.getPaddingBottom()
            int r3 = r3 + r9
            int r0 = r0 + r3
            r7.mTotalLength = r0
            r0 = r8
        L374:
            if (r19 != 0) goto L37b
            r3 = 1073741824(0x40000000, float:2.0)
            if (r12 == r3) goto L37b
            goto L37c
        L37b:
            r0 = r5
        L37c:
            int r3 = r33.getPaddingLeft()
            int r5 = r33.getPaddingRight()
            int r3 = r3 + r5
            int r0 = r0 + r3
            int r3 = r33.getSuggestedMinimumWidth()
            int r0 = java.lang.Math.max(r0, r3)
            int r0 = android.view.View.resolveSizeAndState(r0, r11, r1)
            r7.setMeasuredDimension(r0, r4)
            if (r20 == 0) goto L39a
            r7.forceUniformWidth(r2, r6)
        L39a:
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r3) {
            r2 = this;
            android.graphics.drawable.Drawable r0 = r2.mDivider
            if (r0 != 0) goto L5
            return
        L5:
            int r0 = r2.mOrientation
            r1 = 1
            if (r0 != r1) goto Le
            r2.drawDividersVertical(r3)
            goto L11
        Le:
            r2.drawDividersHorizontal(r3)
        L11:
            return
    }

    @Override
    public void onInitializeAccessibilityEvent(android.view.accessibility.AccessibilityEvent r2) {
            r1 = this;
            super.onInitializeAccessibilityEvent(r2)
            java.lang.Class<android.support.v7.widget.LinearLayoutCompat> r0 = android.support.v7.widget.LinearLayoutCompat.class
            java.lang.String r0 = r0.getName()
            r2.setClassName(r0)
            return
    }

    @Override
    public void onInitializeAccessibilityNodeInfo(android.view.accessibility.AccessibilityNodeInfo r2) {
            r1 = this;
            super.onInitializeAccessibilityNodeInfo(r2)
            java.lang.Class<android.support.v7.widget.LinearLayoutCompat> r0 = android.support.v7.widget.LinearLayoutCompat.class
            java.lang.String r0 = r0.getName()
            r2.setClassName(r0)
            return
    }

    @Override
    protected void onLayout(boolean r2, int r3, int r4, int r5, int r6) {
            r1 = this;
            int r2 = r1.mOrientation
            r0 = 1
            if (r2 != r0) goto L9
            r1.layoutVertical(r3, r4, r5, r6)
            goto Lc
        L9:
            r1.layoutHorizontal(r3, r4, r5, r6)
        Lc:
            return
    }

    @Override
    protected void onMeasure(int r3, int r4) {
            r2 = this;
            int r0 = r2.mOrientation
            r1 = 1
            if (r0 != r1) goto L9
            r2.measureVertical(r3, r4)
            goto Lc
        L9:
            r2.measureHorizontal(r3, r4)
        Lc:
            return
    }

    public void setBaselineAligned(boolean r1) {
            r0 = this;
            r0.mBaselineAligned = r1
            return
    }

    public void setBaselineAlignedChildIndex(int r3) {
            r2 = this;
            if (r3 < 0) goto Lb
            int r0 = r2.getChildCount()
            if (r3 >= r0) goto Lb
            r2.mBaselineAlignedChildIndex = r3
            return
        Lb:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "base aligned child index out of range (0, "
            r0.append(r1)
            int r1 = r2.getChildCount()
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
    }

    public void setDividerDrawable(android.graphics.drawable.Drawable r3) {
            r2 = this;
            android.graphics.drawable.Drawable r0 = r2.mDivider
            if (r3 != r0) goto L5
            return
        L5:
            r2.mDivider = r3
            r0 = 0
            if (r3 == 0) goto L17
            int r1 = r3.getIntrinsicWidth()
            r2.mDividerWidth = r1
            int r1 = r3.getIntrinsicHeight()
            r2.mDividerHeight = r1
            goto L1b
        L17:
            r2.mDividerWidth = r0
            r2.mDividerHeight = r0
        L1b:
            if (r3 != 0) goto L1e
            r0 = 1
        L1e:
            r2.setWillNotDraw(r0)
            r2.requestLayout()
            return
    }

    public void setDividerPadding(int r1) {
            r0 = this;
            r0.mDividerPadding = r1
            return
    }

    public void setGravity(int r2) {
            r1 = this;
            int r0 = r1.mGravity
            if (r0 == r2) goto L19
            r0 = 8388615(0x800007, float:1.1754953E-38)
            r0 = r0 & r2
            if (r0 != 0) goto Le
            r0 = 8388611(0x800003, float:1.1754948E-38)
            r2 = r2 | r0
        Le:
            r0 = r2 & 112(0x70, float:1.57E-43)
            if (r0 != 0) goto L14
            r2 = r2 | 48
        L14:
            r1.mGravity = r2
            r1.requestLayout()
        L19:
            return
    }

    public void setHorizontalGravity(int r3) {
            r2 = this;
            r0 = 8388615(0x800007, float:1.1754953E-38)
            r3 = r3 & r0
            int r1 = r2.mGravity
            r0 = r0 & r1
            if (r0 == r3) goto L13
            r0 = -8388616(0xffffffffff7ffff8, float:-3.402822E38)
            r0 = r0 & r1
            r3 = r3 | r0
            r2.mGravity = r3
            r2.requestLayout()
        L13:
            return
    }

    public void setMeasureWithLargestChildEnabled(boolean r1) {
            r0 = this;
            r0.mUseLargestChild = r1
            return
    }

    public void setOrientation(int r2) {
            r1 = this;
            int r0 = r1.mOrientation
            if (r0 == r2) goto L9
            r1.mOrientation = r2
            r1.requestLayout()
        L9:
            return
    }

    public void setShowDividers(int r2) {
            r1 = this;
            int r0 = r1.mShowDividers
            if (r2 == r0) goto L7
            r1.requestLayout()
        L7:
            r1.mShowDividers = r2
            return
    }

    public void setVerticalGravity(int r3) {
            r2 = this;
            r3 = r3 & 112(0x70, float:1.57E-43)
            int r0 = r2.mGravity
            r1 = r0 & 112(0x70, float:1.57E-43)
            if (r1 == r3) goto L10
            r0 = r0 & (-113(0xffffffffffffff8f, float:NaN))
            r3 = r3 | r0
            r2.mGravity = r3
            r2.requestLayout()
        L10:
            return
    }

    public void setWeightSum(float r2) {
            r1 = this;
            r0 = 0
            float r2 = java.lang.Math.max(r0, r2)
            r1.mWeightSum = r2
            return
    }

    @Override
    public boolean shouldDelayChildPressedState() {
            r1 = this;
            r0 = 0
            return r0
    }
}
