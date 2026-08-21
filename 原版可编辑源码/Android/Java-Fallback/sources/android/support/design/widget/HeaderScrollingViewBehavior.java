package android.support.design.widget;

abstract class HeaderScrollingViewBehavior extends android.support.design.widget.ViewOffsetBehavior<android.view.View> {
    private int overlayTop;
    final android.graphics.Rect tempRect1;
    final android.graphics.Rect tempRect2;
    private int verticalLayoutGap;

    public HeaderScrollingViewBehavior() {
            r1 = this;
            r1.<init>()
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r1.tempRect1 = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r1.tempRect2 = r0
            r0 = 0
            r1.verticalLayoutGap = r0
            return
    }

    public HeaderScrollingViewBehavior(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.tempRect1 = r1
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.tempRect2 = r1
            r1 = 0
            r0.verticalLayoutGap = r1
            return
    }

    private static int resolveGravity(int r0) {
            if (r0 != 0) goto L5
            r0 = 8388659(0x800033, float:1.1755015E-38)
        L5:
            return r0
    }

    abstract android.view.View findFirstDependency(java.util.List<android.view.View> r1);

    final int getOverlapPixelsForOffset(android.view.View r4) {
            r3 = this;
            int r0 = r3.overlayTop
            r1 = 0
            if (r0 != 0) goto L6
            goto L13
        L6:
            float r4 = r3.getOverlapRatioForOffset(r4)
            int r0 = r3.overlayTop
            float r2 = (float) r0
            float r4 = r4 * r2
            int r4 = (int) r4
            int r1 = android.support.v4.math.MathUtils.clamp(r4, r1, r0)
        L13:
            return r1
    }

    float getOverlapRatioForOffset(android.view.View r1) {
            r0 = this;
            r1 = 1065353216(0x3f800000, float:1.0)
            return r1
    }

    public final int getOverlayTop() {
            r1 = this;
            int r0 = r1.overlayTop
            return r0
    }

    int getScrollRange(android.view.View r1) {
            r0 = this;
            int r1 = r1.getMeasuredHeight()
            return r1
    }

    final int getVerticalLayoutGap() {
            r1 = this;
            int r0 = r1.verticalLayoutGap
            return r0
    }

    @Override
    protected void layoutChild(android.support.design.widget.CoordinatorLayout r9, android.view.View r10, int r11) {
            r8 = this;
            java.util.List r0 = r9.getDependencies(r10)
            android.view.View r0 = r8.findFirstDependency(r0)
            if (r0 == 0) goto L94
            android.view.ViewGroup$LayoutParams r1 = r10.getLayoutParams()
            android.support.design.widget.CoordinatorLayout$LayoutParams r1 = (android.support.design.widget.CoordinatorLayout.LayoutParams) r1
            android.graphics.Rect r5 = r8.tempRect1
            int r2 = r9.getPaddingLeft()
            int r3 = r1.leftMargin
            int r2 = r2 + r3
            int r3 = r0.getBottom()
            int r4 = r1.topMargin
            int r3 = r3 + r4
            int r4 = r9.getWidth()
            int r6 = r9.getPaddingRight()
            int r4 = r4 - r6
            int r6 = r1.rightMargin
            int r4 = r4 - r6
            int r6 = r9.getHeight()
            int r7 = r0.getBottom()
            int r6 = r6 + r7
            int r7 = r9.getPaddingBottom()
            int r6 = r6 - r7
            int r7 = r1.bottomMargin
            int r6 = r6 - r7
            r5.set(r2, r3, r4, r6)
            android.support.v4.view.WindowInsetsCompat r2 = r9.getLastWindowInsets()
            if (r2 == 0) goto L64
            boolean r9 = android.support.v4.view.ViewCompat.getFitsSystemWindows(r9)
            if (r9 == 0) goto L64
            boolean r9 = android.support.v4.view.ViewCompat.getFitsSystemWindows(r10)
            if (r9 != 0) goto L64
            int r9 = r5.left
            int r3 = r2.getSystemWindowInsetLeft()
            int r9 = r9 + r3
            r5.left = r9
            int r9 = r5.right
            int r2 = r2.getSystemWindowInsetRight()
            int r9 = r9 - r2
            r5.right = r9
        L64:
            android.graphics.Rect r9 = r8.tempRect2
            int r1 = r1.gravity
            int r2 = resolveGravity(r1)
            int r3 = r10.getMeasuredWidth()
            int r4 = r10.getMeasuredHeight()
            r6 = r9
            r7 = r11
            android.support.v4.view.GravityCompat.apply(r2, r3, r4, r5, r6, r7)
            int r11 = r8.getOverlapPixelsForOffset(r0)
            int r1 = r9.left
            int r2 = r9.top
            int r2 = r2 - r11
            int r3 = r9.right
            int r4 = r9.bottom
            int r4 = r4 - r11
            r10.layout(r1, r2, r3, r4)
            int r9 = r9.top
            int r10 = r0.getBottom()
            int r9 = r9 - r10
            r8.verticalLayoutGap = r9
            goto L9a
        L94:
            super.layoutChild(r9, r10, r11)
            r9 = 0
            r8.verticalLayoutGap = r9
        L9a:
            return
    }

    @Override
    public boolean onMeasureChild(android.support.design.widget.CoordinatorLayout r13, android.view.View r14, int r15, int r16, int r17, int r18) {
            r12 = this;
            r0 = r12
            android.view.ViewGroup$LayoutParams r1 = r14.getLayoutParams()
            int r1 = r1.height
            r2 = -1
            if (r1 == r2) goto Ld
            r3 = -2
            if (r1 != r3) goto L5d
        Ld:
            java.util.List r3 = r13.getDependencies(r14)
            android.view.View r3 = r12.findFirstDependency(r3)
            if (r3 == 0) goto L5d
            boolean r4 = android.support.v4.view.ViewCompat.getFitsSystemWindows(r3)
            r5 = 1
            if (r4 == 0) goto L32
            boolean r4 = android.support.v4.view.ViewCompat.getFitsSystemWindows(r14)
            if (r4 != 0) goto L32
            r4 = r14
            android.support.v4.view.ViewCompat.setFitsSystemWindows(r14, r5)
            boolean r6 = android.support.v4.view.ViewCompat.getFitsSystemWindows(r14)
            if (r6 == 0) goto L33
            r14.requestLayout()
            return r5
        L32:
            r4 = r14
        L33:
            int r6 = android.view.View.MeasureSpec.getSize(r17)
            if (r6 != 0) goto L3d
            int r6 = r13.getHeight()
        L3d:
            int r7 = r3.getMeasuredHeight()
            int r6 = r6 - r7
            int r3 = r12.getScrollRange(r3)
            int r6 = r6 + r3
            if (r1 != r2) goto L4c
            r1 = 1073741824(0x40000000, float:2.0)
            goto L4e
        L4c:
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
        L4e:
            int r10 = android.view.View.MeasureSpec.makeMeasureSpec(r6, r1)
            r6 = r13
            r7 = r14
            r8 = r15
            r9 = r16
            r11 = r18
            r6.onMeasureChild(r7, r8, r9, r10, r11)
            return r5
        L5d:
            r1 = 0
            return r1
    }

    public final void setOverlayTop(int r1) {
            r0 = this;
            r0.overlayTop = r1
            return
    }
}
