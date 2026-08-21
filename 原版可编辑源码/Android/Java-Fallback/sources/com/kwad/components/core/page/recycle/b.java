package com.kwad.components.core.page.recycle;

public class b extends com.kwad.components.core.page.recycle.g {
    private android.graphics.Rect NF;
    private int NG;
    private int NH;
    private boolean NI;
    private int NJ;
    private com.kwad.components.core.page.recycle.b.a NK;
    private boolean NL;
    private boolean NM;

    public interface a {
        boolean pi();
    }

    public b(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public b(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public b(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            r0.NJ = r1
            r1 = 0
            r0.NM = r1
            return
    }

    private void a(int r6, int r7, int r8) {
            r5 = this;
        L0:
            int r0 = r5.NJ
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            r2 = 1
            r3 = 2
            if (r0 != r1) goto L11
            int[] r0 = new int[r3]
            r5.getLocationOnScreen(r0)
            r0 = r0[r2]
            r5.NJ = r0
        L11:
            com.kwad.components.core.page.recycle.f r0 = com.kwad.components.core.page.recycle.f.b(r5)
            int r0 = r0.findFirstVisibleItemPosition()
            com.kwad.components.core.page.recycle.f r1 = com.kwad.components.core.page.recycle.f.b(r5)
            int r1 = r1.findLastVisibleItemPosition()
            r4 = -1
            if (r0 == r4) goto L54
            if (r1 != r4) goto L27
            goto L54
        L27:
            r4 = 0
            if (r6 < r0) goto L46
            if (r6 > r1) goto L46
            int r6 = r6 - r0
            int r7 = r5.getChildCount()
            if (r7 <= r6) goto L45
            android.view.View r6 = r5.getChildAt(r6)
            int[] r7 = new int[r3]
            r6.getLocationOnScreen(r7)
            r6 = r7[r2]
            int r7 = r5.NJ
            int r6 = r6 - r7
            int r6 = r6 - r8
            r5.scrollBy(r4, r6)
        L45:
            return
        L46:
            if (r6 <= r1) goto L4f
            r5.scrollBy(r4, r7)
            r5.a(r6, r7, r8)
            return
        L4f:
            int r0 = -r7
            r5.scrollBy(r4, r0)
            goto L0
        L54:
            return
    }

    private void pg() {
            r7 = this;
            android.graphics.Rect r0 = r7.NF
            if (r0 != 0) goto Lc
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r7.NF = r0
            goto Lf
        Lc:
            r0.setEmpty()
        Lf:
            int r0 = r7.getChildCount()
            r1 = 0
        L14:
            if (r1 >= r0) goto L38
            android.view.View r2 = r7.getChildAt(r1)
            int r3 = r2.getVisibility()
            if (r3 != 0) goto L35
            android.graphics.Rect r3 = r7.NF
            int r4 = r2.getLeft()
            int r5 = r2.getTop()
            int r6 = r2.getRight()
            int r2 = r2.getBottom()
            r3.union(r4, r5, r6, r2)
        L35:
            int r1 = r1 + 1
            goto L14
        L38:
            return
    }

    private void ph() {
            r2 = this;
            android.support.v7.widget.RecyclerView$Adapter r0 = r2.getAdapter()
            boolean r1 = r0 instanceof com.kwad.components.core.page.recycle.d
            if (r1 == 0) goto Ld
            com.kwad.components.core.page.recycle.d r0 = (com.kwad.components.core.page.recycle.d) r0
            r0.pl()
        Ld:
            return
    }

    private void scrollToPositionWithOffset(int r2, int r3) {
            r1 = this;
            int r3 = r1.getHeight()
            r0 = 0
            r1.a(r2, r3, r0)
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            r0.ph()
            return
    }

    @Override
    public void onDraw(android.graphics.Canvas r2) {
            r1 = this;
            int r0 = r1.NG
            if (r0 == 0) goto L21
            r1.pg()
            android.graphics.Rect r0 = r1.NF
            if (r0 == 0) goto L21
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L21
            r2.save()
            android.graphics.Rect r0 = r1.NF
            r2.clipRect(r0)
            int r0 = r1.NG
            r2.drawColor(r0)
            r2.restore()
        L21:
            super.onDraw(r2)
            return
    }

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r3) {
            r2 = this;
            boolean r0 = r2.NL
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            int r0 = r3.getAction()
            if (r0 != 0) goto L13
            boolean r0 = r2.NM
            if (r0 == 0) goto L13
            r2.stopScroll()
        L13:
            com.kwad.components.core.page.recycle.b$a r0 = r2.NK
            if (r0 == 0) goto L1e
            boolean r0 = r0.pi()
            if (r0 == 0) goto L1e
            return r1
        L1e:
            boolean r3 = super.onInterceptTouchEvent(r3)
            return r3
    }

    @Override
    protected void onMeasure(int r3, int r4) {
            r2 = this;
            int r0 = android.view.View.MeasureSpec.getSize(r4)
            int r1 = r2.NH
            if (r1 <= 0) goto L14
            if (r1 >= r0) goto L14
            int r4 = android.view.View.MeasureSpec.getMode(r4)
            int r0 = r2.NH
            int r4 = android.view.View.MeasureSpec.makeMeasureSpec(r0, r4)
        L14:
            super.onMeasure(r3, r4)
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            boolean r0 = r1.NL
            if (r0 == 0) goto L6
            r2 = 0
            return r2
        L6:
            boolean r2 = super.onTouchEvent(r2)
            return r2
    }

    @Override
    public void scrollToPosition(int r2) {
            r1 = this;
            boolean r0 = r1.NI
            if (r0 == 0) goto L9
            r0 = 0
            r1.scrollToPositionWithOffset(r2, r0)
            return
        L9:
            super.scrollToPosition(r2)
            return
    }

    public void setDisableScroll(boolean r1) {
            r0 = this;
            r0.NL = r1
            return
    }

    public void setDownStop(boolean r1) {
            r0 = this;
            r0.NM = r1
            return
    }

    public void setIgnoreTouchSwipeHandler(com.kwad.components.core.page.recycle.b.a r1) {
            r0 = this;
            r0.NK = r1
            return
    }

    public void setUnderneathColor(int r1) {
            r0 = this;
            r0.NG = r1
            r0.pg()
            r0.invalidate()
            return
    }

    public void setUseCustomScrollToPosition(boolean r1) {
            r0 = this;
            r0.NI = r1
            return
    }
}
