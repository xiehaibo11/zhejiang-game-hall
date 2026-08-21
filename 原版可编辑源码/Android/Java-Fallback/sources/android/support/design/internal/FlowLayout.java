package android.support.design.internal;

public class FlowLayout extends android.view.ViewGroup {
    private int itemSpacing;
    private int lineSpacing;
    private boolean singleLine;

    public FlowLayout(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public FlowLayout(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public FlowLayout(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r3 = 0
            r0.singleLine = r3
            r0.loadFromAttributes(r1, r2)
            return
    }

    public FlowLayout(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r3 = 0
            r0.singleLine = r3
            r0.loadFromAttributes(r1, r2)
            return
    }

    private static int getMeasuredDimension(int r1, int r2, int r3) {
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r2 == r0) goto La
            r0 = 1073741824(0x40000000, float:2.0)
            if (r2 == r0) goto L9
            return r3
        L9:
            return r1
        La:
            int r1 = java.lang.Math.min(r3, r1)
            return r1
    }

    private void loadFromAttributes(android.content.Context r3, android.util.AttributeSet r4) {
            r2 = this;
            android.content.res.Resources$Theme r3 = r3.getTheme()
            int[] r0 = android.support.design.R.styleable.FlowLayout
            r1 = 0
            android.content.res.TypedArray r3 = r3.obtainStyledAttributes(r4, r0, r1, r1)
            int r4 = android.support.design.R.styleable.FlowLayout_lineSpacing
            int r4 = r3.getDimensionPixelSize(r4, r1)
            r2.lineSpacing = r4
            int r4 = android.support.design.R.styleable.FlowLayout_itemSpacing
            int r4 = r3.getDimensionPixelSize(r4, r1)
            r2.itemSpacing = r4
            r3.recycle()
            return
    }

    protected int getItemSpacing() {
            r1 = this;
            int r0 = r1.itemSpacing
            return r0
    }

    protected int getLineSpacing() {
            r1 = this;
            int r0 = r1.lineSpacing
            return r0
    }

    protected boolean isSingleLine() {
            r1 = this;
            boolean r0 = r1.singleLine
            return r0
    }

    @Override
    protected void onLayout(boolean r9, int r10, int r11, int r12, int r13) {
            r8 = this;
            int r9 = r8.getChildCount()
            if (r9 != 0) goto L7
            return
        L7:
            int r9 = android.support.v4.view.ViewCompat.getLayoutDirection(r8)
            r11 = 1
            r13 = 0
            if (r9 != r11) goto L10
            goto L11
        L10:
            r11 = r13
        L11:
            if (r11 == 0) goto L18
            int r9 = r8.getPaddingRight()
            goto L1c
        L18:
            int r9 = r8.getPaddingLeft()
        L1c:
            if (r11 == 0) goto L23
            int r0 = r8.getPaddingLeft()
            goto L27
        L23:
            int r0 = r8.getPaddingRight()
        L27:
            int r1 = r8.getPaddingTop()
            int r12 = r12 - r10
            int r12 = r12 - r0
            r2 = r9
            r0 = r13
            r10 = r1
        L30:
            int r3 = r8.getChildCount()
            if (r0 >= r3) goto L91
            android.view.View r3 = r8.getChildAt(r0)
            int r4 = r3.getVisibility()
            r5 = 8
            if (r4 != r5) goto L43
            goto L8e
        L43:
            android.view.ViewGroup$LayoutParams r4 = r3.getLayoutParams()
            boolean r5 = r4 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r5 == 0) goto L56
            android.view.ViewGroup$MarginLayoutParams r4 = (android.view.ViewGroup.MarginLayoutParams) r4
            int r5 = android.support.v4.view.MarginLayoutParamsCompat.getMarginStart(r4)
            int r4 = android.support.v4.view.MarginLayoutParamsCompat.getMarginEnd(r4)
            goto L58
        L56:
            r4 = r13
            r5 = r4
        L58:
            int r6 = r2 + r5
            int r7 = r3.getMeasuredWidth()
            int r6 = r6 + r7
            boolean r7 = r8.singleLine
            if (r7 != 0) goto L69
            if (r6 <= r12) goto L69
            int r10 = r8.lineSpacing
            int r10 = r10 + r1
            r2 = r9
        L69:
            int r1 = r2 + r5
            int r6 = r3.getMeasuredWidth()
            int r6 = r6 + r1
            int r7 = r3.getMeasuredHeight()
            int r7 = r7 + r10
            if (r11 == 0) goto L80
            int r1 = r12 - r6
            int r6 = r12 - r2
            int r6 = r6 - r5
            r3.layout(r1, r10, r6, r7)
            goto L83
        L80:
            r3.layout(r1, r10, r6, r7)
        L83:
            int r5 = r5 + r4
            int r1 = r3.getMeasuredWidth()
            int r5 = r5 + r1
            int r1 = r8.itemSpacing
            int r5 = r5 + r1
            int r2 = r2 + r5
            r1 = r7
        L8e:
            int r0 = r0 + 1
            goto L30
        L91:
            return
    }

    @Override
    protected void onMeasure(int r21, int r22) {
            r20 = this;
            r0 = r20
            int r1 = android.view.View.MeasureSpec.getSize(r21)
            int r2 = android.view.View.MeasureSpec.getMode(r21)
            int r3 = android.view.View.MeasureSpec.getSize(r22)
            int r4 = android.view.View.MeasureSpec.getMode(r22)
            r5 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r2 == r5) goto L1f
            r5 = 1073741824(0x40000000, float:2.0)
            if (r2 != r5) goto L1b
            goto L1f
        L1b:
            r5 = 2147483647(0x7fffffff, float:NaN)
            goto L20
        L1f:
            r5 = r1
        L20:
            int r6 = r20.getPaddingLeft()
            int r7 = r20.getPaddingTop()
            int r8 = r20.getPaddingRight()
            int r5 = r5 - r8
            r9 = r7
            r10 = 0
            r11 = 0
        L30:
            int r12 = r20.getChildCount()
            if (r10 >= r12) goto La6
            android.view.View r12 = r0.getChildAt(r10)
            int r13 = r12.getVisibility()
            r14 = 8
            if (r13 != r14) goto L49
            r13 = r21
            r14 = r22
            r16 = 0
            goto La3
        L49:
            r13 = r21
            r14 = r22
            r0.measureChild(r12, r13, r14)
            android.view.ViewGroup$LayoutParams r15 = r12.getLayoutParams()
            boolean r8 = r15 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r8 == 0) goto L65
            android.view.ViewGroup$MarginLayoutParams r15 = (android.view.ViewGroup.MarginLayoutParams) r15
            int r8 = r15.leftMargin
            r16 = 0
            int r8 = r8 + 0
            int r15 = r15.rightMargin
            int r15 = r15 + 0
            goto L6a
        L65:
            r16 = 0
            r8 = r16
            r15 = r8
        L6a:
            int r17 = r6 + r8
            int r18 = r12.getMeasuredWidth()
            r19 = r6
            int r6 = r17 + r18
            if (r6 <= r5) goto L84
            boolean r6 = r20.isSingleLine()
            if (r6 != 0) goto L84
            int r6 = r20.getPaddingLeft()
            int r9 = r0.lineSpacing
            int r9 = r9 + r7
            goto L86
        L84:
            r6 = r19
        L86:
            int r7 = r6 + r8
            int r17 = r12.getMeasuredWidth()
            int r7 = r7 + r17
            int r17 = r12.getMeasuredHeight()
            int r17 = r9 + r17
            if (r7 <= r11) goto L97
            r11 = r7
        L97:
            int r8 = r8 + r15
            int r7 = r12.getMeasuredWidth()
            int r8 = r8 + r7
            int r7 = r0.itemSpacing
            int r8 = r8 + r7
            int r6 = r6 + r8
            r7 = r17
        La3:
            int r10 = r10 + 1
            goto L30
        La6:
            int r1 = getMeasuredDimension(r1, r2, r11)
            int r2 = getMeasuredDimension(r3, r4, r7)
            r0.setMeasuredDimension(r1, r2)
            return
    }

    protected void setItemSpacing(int r1) {
            r0 = this;
            r0.itemSpacing = r1
            return
    }

    protected void setLineSpacing(int r1) {
            r0 = this;
            r0.lineSpacing = r1
            return
    }

    public void setSingleLine(boolean r1) {
            r0 = this;
            r0.singleLine = r1
            return
    }
}
