package com.kwad.sdk.widget;

public class d extends android.support.v4.view.ViewPager {
    private int aMh;
    private boolean aMi;

    public d(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.aMi = r1
            return
    }

    public d(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.aMi = r1
            return
    }

    @Override
    public boolean canScrollHorizontally(int r2) {
            r1 = this;
            boolean r0 = r1.aMi
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            boolean r2 = super.canScrollHorizontally(r2)
            return r2
    }

    @Override
    public boolean dispatchTouchEvent(android.view.MotionEvent r4) {
            r3 = this;
            boolean r0 = r3.aMi
            if (r0 != 0) goto L9
            boolean r4 = super.dispatchTouchEvent(r4)
            return r4
        L9:
            float r0 = r4.getX()
            int r0 = (int) r0
            int r1 = r4.getAction()
            if (r1 == 0) goto L2a
            r2 = 2
            if (r1 == r2) goto L18
            goto L32
        L18:
            int r1 = r3.aMh
            int r1 = r0 - r1
            int r2 = r3.getCurrentItem()
            if (r2 != 0) goto L32
            if (r1 <= 0) goto L32
            android.view.ViewParent r1 = r3.getParent()
            r2 = 0
            goto L2f
        L2a:
            android.view.ViewParent r1 = r3.getParent()
            r2 = 1
        L2f:
            r1.requestDisallowInterceptTouchEvent(r2)
        L32:
            r3.aMh = r0
            boolean r4 = super.dispatchTouchEvent(r4)
            return r4
    }

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            boolean r0 = r1.aMi
            if (r0 == 0) goto Lc
            boolean r2 = super.onInterceptTouchEvent(r2)
            if (r2 == 0) goto Lc
            r2 = 1
            return r2
        Lc:
            r2 = 0
            return r2
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            boolean r0 = r1.aMi
            if (r0 == 0) goto Lc
            boolean r2 = super.onTouchEvent(r2)
            if (r2 == 0) goto Lc
            r2 = 1
            return r2
        Lc:
            r2 = 0
            return r2
    }

    public void setScrollable(boolean r1) {
            r0 = this;
            r0.aMi = r1
            return
    }
}
