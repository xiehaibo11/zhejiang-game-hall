package android.support.v7.widget;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class ButtonBarLayout extends android.widget.LinearLayout {
    private static final int PEEK_BUTTON_DP = 16;
    private boolean mAllowStacking;
    private int mLastWidthSize;
    private int mMinimumHeight;

    public ButtonBarLayout(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            r0 = -1
            r1.mLastWidthSize = r0
            r0 = 0
            r1.mMinimumHeight = r0
            int[] r0 = android.support.v7.appcompat.R.styleable.ButtonBarLayout
            android.content.res.TypedArray r2 = r2.obtainStyledAttributes(r3, r0)
            int r3 = android.support.v7.appcompat.R.styleable.ButtonBarLayout_allowStacking
            r0 = 1
            boolean r3 = r2.getBoolean(r3, r0)
            r1.mAllowStacking = r3
            r2.recycle()
            return
    }

    private int getNextVisibleChildIndex(int r3) {
            r2 = this;
            int r0 = r2.getChildCount()
        L4:
            if (r3 >= r0) goto L14
            android.view.View r1 = r2.getChildAt(r3)
            int r1 = r1.getVisibility()
            if (r1 != 0) goto L11
            return r3
        L11:
            int r3 = r3 + 1
            goto L4
        L14:
            r3 = -1
            return r3
    }

    private boolean isStacked() {
            r2 = this;
            int r0 = r2.getOrientation()
            r1 = 1
            if (r0 != r1) goto L8
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    private void setStacked(boolean r2) {
            r1 = this;
            r1.setOrientation(r2)
            if (r2 == 0) goto L7
            r0 = 5
            goto L9
        L7:
            r0 = 80
        L9:
            r1.setGravity(r0)
            int r0 = android.support.v7.appcompat.R.id.spacer
            android.view.View r0 = r1.findViewById(r0)
            if (r0 == 0) goto L1d
            if (r2 == 0) goto L19
            r2 = 8
            goto L1a
        L19:
            r2 = 4
        L1a:
            r0.setVisibility(r2)
        L1d:
            int r2 = r1.getChildCount()
            int r2 = r2 + (-2)
        L23:
            if (r2 < 0) goto L2f
            android.view.View r0 = r1.getChildAt(r2)
            r1.bringChildToFront(r0)
            int r2 = r2 + (-1)
            goto L23
        L2f:
            return
    }

    @Override
    public int getMinimumHeight() {
            r2 = this;
            int r0 = r2.mMinimumHeight
            int r1 = super.getMinimumHeight()
            int r0 = java.lang.Math.max(r0, r1)
            return r0
    }

    @Override
    protected void onMeasure(int r6, int r7) {
            r5 = this;
            int r0 = android.view.View.MeasureSpec.getSize(r6)
            boolean r1 = r5.mAllowStacking
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r5.mLastWidthSize
            if (r0 <= r1) goto L16
            boolean r1 = r5.isStacked()
            if (r1 == 0) goto L16
            r5.setStacked(r2)
        L16:
            r5.mLastWidthSize = r0
        L18:
            boolean r1 = r5.isStacked()
            r3 = 1
            if (r1 != 0) goto L2f
            int r1 = android.view.View.MeasureSpec.getMode(r6)
            r4 = 1073741824(0x40000000, float:2.0)
            if (r1 != r4) goto L2f
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            int r0 = android.view.View.MeasureSpec.makeMeasureSpec(r0, r1)
            r1 = 1
            goto L31
        L2f:
            r0 = r6
            r1 = 0
        L31:
            super.onMeasure(r0, r7)
            boolean r0 = r5.mAllowStacking
            if (r0 == 0) goto L52
            boolean r0 = r5.isStacked()
            if (r0 != 0) goto L52
            int r0 = r5.getMeasuredWidthAndState()
            r4 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0 = r0 & r4
            r4 = 16777216(0x1000000, float:2.3509887E-38)
            if (r0 != r4) goto L4b
            r0 = 1
            goto L4c
        L4b:
            r0 = 0
        L4c:
            if (r0 == 0) goto L52
            r5.setStacked(r3)
            r1 = 1
        L52:
            if (r1 == 0) goto L57
            super.onMeasure(r6, r7)
        L57:
            int r6 = r5.getNextVisibleChildIndex(r2)
            if (r6 < 0) goto La5
            android.view.View r7 = r5.getChildAt(r6)
            android.view.ViewGroup$LayoutParams r0 = r7.getLayoutParams()
            android.widget.LinearLayout$LayoutParams r0 = (android.widget.LinearLayout.LayoutParams) r0
            int r1 = r5.getPaddingTop()
            int r7 = r7.getMeasuredHeight()
            int r1 = r1 + r7
            int r7 = r0.topMargin
            int r1 = r1 + r7
            int r7 = r0.bottomMargin
            int r1 = r1 + r7
            int r1 = r1 + r2
            boolean r7 = r5.isStacked()
            if (r7 == 0) goto L9f
            int r6 = r6 + r3
            int r6 = r5.getNextVisibleChildIndex(r6)
            if (r6 < 0) goto L9d
            android.view.View r6 = r5.getChildAt(r6)
            int r6 = r6.getPaddingTop()
            r7 = 1098907648(0x41800000, float:16.0)
            android.content.res.Resources r0 = r5.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            float r0 = r0 * r7
            int r7 = (int) r0
            int r6 = r6 + r7
            int r1 = r1 + r6
        L9d:
            r2 = r1
            goto La5
        L9f:
            int r6 = r5.getPaddingBottom()
            int r2 = r1 + r6
        La5:
            int r6 = android.support.v4.view.ViewCompat.getMinimumHeight(r5)
            if (r6 == r2) goto Lae
            r5.setMinimumHeight(r2)
        Lae:
            return
    }

    public void setAllowStacking(boolean r2) {
            r1 = this;
            boolean r0 = r1.mAllowStacking
            if (r0 == r2) goto L18
            r1.mAllowStacking = r2
            boolean r2 = r1.mAllowStacking
            if (r2 != 0) goto L15
            int r2 = r1.getOrientation()
            r0 = 1
            if (r2 != r0) goto L15
            r2 = 0
            r1.setStacked(r2)
        L15:
            r1.requestLayout()
        L18:
            return
    }
}
