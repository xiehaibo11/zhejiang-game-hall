package com.kwad.components.core.page.recycle;

public class DetailWebRecycleView extends com.kwad.components.core.page.recycle.b {
    private int NN;
    private boolean NO;
    private boolean NP;
    private int NQ;
    private int NR;
    private boolean NS;
    com.kwad.components.core.page.recycle.DetailWebRecycleView.a NT;
    private java.lang.Runnable NU;
    private com.kwad.components.core.t.n NV;
    private int mn;


    public interface a {
        boolean pj();
    }

    public DetailWebRecycleView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public DetailWebRecycleView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public DetailWebRecycleView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r2 = 1000(0x3e8, float:1.401E-42)
            r0.NN = r2
            r2 = 0
            r0.NO = r2
            r0.NP = r2
            com.kwad.components.core.page.recycle.DetailWebRecycleView$1 r2 = new com.kwad.components.core.page.recycle.DetailWebRecycleView$1
            r2.<init>(r0)
            r0.NU = r2
            com.kwad.components.core.t.n r3 = new com.kwad.components.core.t.n
            r3.<init>(r2)
            r0.NV = r3
            boolean r2 = r1 instanceof android.app.Activity
            if (r2 == 0) goto L27
            android.app.Activity r1 = (android.app.Activity) r1
            int r1 = com.kwad.sdk.d.a.a.e(r1)
        L24:
            r0.mn = r1
            return
        L27:
            int r1 = com.kwad.sdk.d.a.a.getScreenHeight(r1)
            goto L24
    }

    static int a(com.kwad.components.core.page.recycle.DetailWebRecycleView r0) {
            int r0 = r0.NN
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r3 = this;
            super.onAttachedToWindow()
            com.kwad.components.core.t.n r0 = r3.NV
            r1 = 50
            r3.postDelayed(r0, r1)
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            com.kwad.components.core.t.n r0 = r1.NV
            r1.removeCallbacks(r0)
            return
    }

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r4) {
            r3 = this;
            com.kwad.components.core.page.recycle.DetailWebRecycleView$a r0 = r3.NT
            if (r0 == 0) goto Lc
            boolean r0 = r0.pj()
            if (r0 == 0) goto Lc
            r4 = 1
            return r4
        Lc:
            int r0 = r3.computeVerticalScrollOffset()
            r3.NR = r0
            float r0 = r4.getY()
            int r1 = r3.NQ
            int r2 = r3.NR
            int r1 = r1 - r2
            float r1 = (float) r1
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 > 0) goto L25
            boolean r4 = super.onInterceptTouchEvent(r4)
            return r4
        L25:
            r4 = 0
            return r4
    }

    @Override
    public boolean onNestedPreFling(android.view.View r2, float r3, float r4) {
            r1 = this;
            int r2 = r1.computeVerticalScrollOffset()
            r1.NR = r2
            int r0 = r1.NQ
            if (r2 < r0) goto Lc
            r2 = 0
            return r2
        Lc:
            int r2 = (int) r3
            int r3 = (int) r4
            r1.fling(r2, r3)
            r2 = 1
            return r2
    }

    @Override
    public void onNestedPreScroll(android.view.View r4, int r5, int r6, int[] r7) {
            r3 = this;
            int r5 = r3.computeVerticalScrollOffset()
            r3.NR = r5
            r0 = 1
            r1 = 0
            if (r6 <= 0) goto L10
            int r2 = r3.NQ
            if (r5 >= r2) goto L10
            r5 = r0
            goto L11
        L10:
            r5 = r1
        L11:
            if (r5 == 0) goto L22
            boolean r5 = r3.NS
            if (r5 != 0) goto L22
            int r5 = r3.NR
            int r2 = r3.mn
            if (r5 >= r2) goto L22
            r3.scrollBy(r1, r6)
            r7[r0] = r6
        L22:
            if (r6 >= 0) goto L31
            int r5 = r3.NR
            if (r5 <= 0) goto L31
            r5 = -1
            boolean r4 = android.support.v4.view.ViewCompat.canScrollVertically(r4, r5)
            if (r4 != 0) goto L31
            r4 = r0
            goto L32
        L31:
            r4 = r1
        L32:
            if (r4 == 0) goto L39
            r3.scrollBy(r1, r6)
            r7[r0] = r6
        L39:
            return
    }

    @Override
    public void onScrollStateChanged(int r5) {
            r4 = this;
            super.onScrollStateChanged(r5)
            if (r5 != 0) goto L41
            android.support.v7.widget.RecyclerView$LayoutManager r5 = r4.getLayoutManager()
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r4.getLayoutManager()
            int r0 = r0.getChildCount()
            r1 = 1
            int r0 = r0 - r1
            android.view.View r5 = r5.getChildAt(r0)
            if (r5 == 0) goto L3e
            int r0 = r5.getBottom()
            int r2 = r4.getBottom()
            int r3 = r4.getPaddingBottom()
            int r2 = r2 - r3
            android.support.v7.widget.RecyclerView$LayoutManager r3 = r4.getLayoutManager()
            int r5 = r3.getPosition(r5)
            if (r0 != r2) goto L3e
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r4.getLayoutManager()
            int r0 = r0.getItemCount()
            int r0 = r0 - r1
            if (r5 != r0) goto L3e
            r4.NS = r1
            return
        L3e:
            r5 = 0
            r4.NS = r5
        L41:
            return
    }

    @Override
    public boolean onStartNestedScroll(android.view.View r1, android.view.View r2, int r3) {
            r0 = this;
            r1 = r3 & 2
            if (r1 == 0) goto L6
            r1 = 1
            return r1
        L6:
            r1 = 0
            return r1
    }

    @Override
    public void requestChildFocus(android.view.View r2, android.view.View r3) {
            r1 = this;
            boolean r0 = r1.NP
            if (r0 == 0) goto L8
            r2 = 0
            r1.NP = r2
            return
        L8:
            boolean r0 = r1.NO
            if (r0 != 0) goto Lf
            super.requestChildFocus(r2, r3)
        Lf:
            return
    }

    public void setInterceptRequestFocusForWeb(boolean r1) {
            r0 = this;
            r0.NO = r1
            return
    }

    public void setInterceptRequestFocusForWebFiredOnce(boolean r1) {
            r0 = this;
            r0.NP = r1
            return
    }

    public void setInterceptTouchListener(com.kwad.components.core.page.recycle.DetailWebRecycleView.a r1) {
            r0 = this;
            r0.NT = r1
            return
    }

    public void setTopViewHeight(int r1) {
            r0 = this;
            r0.NQ = r1
            return
    }
}
