package com.kwad.components.core.page.recycle;

public class NestedScrollWebView extends com.kwad.sdk.core.webview.KsAdWebView implements android.support.v4.view.NestedScrollingChild {
    private int NX;
    private int NY;
    private final int[] NZ;
    private final int[] Oa;
    private int Ob;
    private boolean Oc;
    private int Od;
    private int Oe;
    private android.support.v4.view.NestedScrollingChildHelper Of;
    private android.view.VelocityTracker Og;
    private int Oh;

    public NestedScrollWebView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 2
            int[] r0 = new int[r2]
            r1.NZ = r0
            int[] r2 = new int[r2]
            r1.Oa = r2
            r1.pk()
            return
    }

    public NestedScrollWebView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 2
            int[] r2 = new int[r1]
            r0.NZ = r2
            int[] r1 = new int[r1]
            r0.Oa = r1
            r0.pk()
            return
    }

    public NestedScrollWebView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 2
            int[] r2 = new int[r1]
            r0.NZ = r2
            int[] r1 = new int[r1]
            r0.Oa = r1
            r0.pk()
            return
    }

    private void pk() {
            r2 = this;
            r0 = 0
            r2.Oh = r0
            android.content.Context r0 = r2.getContext()
            android.view.ViewConfiguration r0 = android.view.ViewConfiguration.get(r0)
            android.support.v4.view.NestedScrollingChildHelper r1 = new android.support.v4.view.NestedScrollingChildHelper
            r1.<init>(r2)
            r2.Of = r1
            r1 = 1
            r2.setNestedScrollingEnabled(r1)
            int r1 = r0.getScaledMaximumFlingVelocity()
            r2.Oe = r1
            int r0 = r0.getScaledMinimumFlingVelocity()
            r2.Od = r0
            return
    }

    @Override
    public boolean dispatchNestedFling(float r2, float r3, boolean r4) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            boolean r2 = r0.dispatchNestedFling(r2, r3, r4)
            return r2
    }

    @Override
    public boolean dispatchNestedPreFling(float r2, float r3) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            boolean r2 = r0.dispatchNestedPreFling(r2, r3)
            return r2
    }

    @Override
    public boolean dispatchNestedPreScroll(int r2, int r3, int[] r4, int[] r5) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            boolean r2 = r0.dispatchNestedPreScroll(r2, r3, r4, r5)
            return r2
    }

    @Override
    public boolean dispatchNestedScroll(int r7, int r8, int r9, int r10, int[] r11) {
            r6 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r6.Of
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            boolean r7 = r0.dispatchNestedScroll(r1, r2, r3, r4, r5)
            return r7
    }

    @Override
    public boolean hasNestedScrollingParent() {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            boolean r0 = r0.hasNestedScrollingParent()
            return r0
    }

    @Override
    public boolean isNestedScrollingEnabled() {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            boolean r0 = r0.isNestedScrollingEnabled()
            return r0
    }

    @Override
    protected void onMeasure(int r2, int r3) {
            r1 = this;
            int r0 = r1.Oh
            if (r0 == 0) goto L39
            boolean r3 = com.kwad.components.core.t.d.qn()
            if (r3 == 0) goto L13
            android.content.Context r3 = r1.getContext()
            int r3 = com.kwad.sdk.d.a.a.getStatusBarHeight(r3)
            goto L14
        L13:
            r3 = 0
        L14:
            android.content.Context r0 = r1.getContext()
            boolean r0 = r0 instanceof android.app.Activity
            if (r0 == 0) goto L27
            android.content.Context r0 = r1.getContext()
            android.app.Activity r0 = (android.app.Activity) r0
            int r0 = com.kwad.sdk.d.a.a.e(r0)
            goto L2f
        L27:
            android.content.Context r0 = r1.getContext()
            int r0 = com.kwad.sdk.d.a.a.getScreenHeight(r0)
        L2f:
            int r0 = r0 - r3
            int r3 = r1.Oh
            int r0 = r0 - r3
            r3 = 1073741824(0x40000000, float:2.0)
            int r3 = android.view.View.MeasureSpec.makeMeasureSpec(r0, r3)
        L39:
            super.onMeasure(r2, r3)
            return
    }

    @Override
    public void onScrollChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onScrollChanged(r1, r2, r3, r4)
            boolean r1 = r0.hasFocus()
            if (r1 != 0) goto Lc
            r0.requestFocus()
        Lc:
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r21) {
            r20 = this;
            r6 = r20
            r7 = r21
            android.view.MotionEvent r8 = android.view.MotionEvent.obtain(r21)
            int r0 = android.support.v4.view.MotionEventCompat.getActionMasked(r21)
            r9 = 0
            if (r0 != 0) goto L11
            r6.Ob = r9
        L11:
            android.view.VelocityTracker r1 = r6.Og
            if (r1 != 0) goto L1b
            android.view.VelocityTracker r1 = android.view.VelocityTracker.obtain()
            r6.Og = r1
        L1b:
            int r1 = android.support.v4.view.MotionEventCompat.getActionIndex(r21)
            float r2 = r21.getY()
            int r2 = (int) r2
            int r3 = r6.Ob
            float r3 = (float) r3
            r10 = 0
            r7.offsetLocation(r10, r3)
            r3 = 2
            r11 = 1
            if (r0 == 0) goto L13d
            if (r0 == r11) goto Le2
            r12 = 5
            if (r0 == r3) goto L44
            r2 = 3
            if (r0 == r2) goto Le2
            if (r0 == r12) goto L3b
            goto Ldf
        L3b:
            r20.stopNestedScroll()
            boolean r0 = super.onTouchEvent(r21)
            goto L15b
        L44:
            int r0 = r6.NX
            int r0 = r0 - r2
            int[] r1 = r6.Oa
            int[] r3 = r6.NZ
            boolean r1 = r6.dispatchNestedPreScroll(r9, r0, r1, r3)
            if (r1 == 0) goto L67
            int[] r1 = r6.Oa
            r1 = r1[r11]
            int r0 = r0 - r1
            int[] r1 = r6.NZ
            r1 = r1[r11]
            float r1 = (float) r1
            r8.offsetLocation(r10, r1)
            int r1 = r6.Ob
            int[] r3 = r6.NZ
            r3 = r3[r11]
            int r1 = r1 + r3
            r6.Ob = r1
        L67:
            int r1 = r20.getScrollY()
            int[] r3 = r6.NZ
            r3 = r3[r11]
            int r2 = r2 - r3
            r6.NX = r2
            int r2 = r1 + r0
            int r2 = java.lang.Math.max(r9, r2)
            int r1 = r2 - r1
            int r4 = r0 - r1
            r1 = 0
            int r2 = r2 - r4
            r3 = 0
            int[] r5 = r6.NZ
            r0 = r20
            boolean r0 = r0.dispatchNestedScroll(r1, r2, r3, r4, r5)
            if (r0 == 0) goto La1
            int r0 = r6.NX
            int[] r1 = r6.NZ
            r2 = r1[r11]
            int r0 = r0 - r2
            r6.NX = r0
            r0 = r1[r11]
            float r0 = (float) r0
            r8.offsetLocation(r10, r0)
            int r0 = r6.Ob
            int[] r1 = r6.NZ
            r1 = r1[r11]
            int r0 = r0 + r1
            r6.Ob = r0
        La1:
            int[] r0 = r6.Oa
            r0 = r0[r11]
            int r0 = java.lang.Math.abs(r0)
            if (r0 >= r12) goto Lc6
            int[] r0 = r6.NZ
            r0 = r0[r11]
            int r0 = java.lang.Math.abs(r0)
            if (r0 >= r12) goto Lc6
            boolean r0 = r6.Oc
            if (r0 == 0) goto Lbd
            r6.Oc = r9
            r0 = r9
            goto Lc1
        Lbd:
            boolean r0 = super.onTouchEvent(r8)
        Lc1:
            r8.recycle()
            goto L15b
        Lc6:
            boolean r0 = r6.Oc
            if (r0 != 0) goto Ldf
            r6.Oc = r11
            r12 = 0
            r14 = 0
            r16 = 3
            r17 = 0
            r18 = 0
            r19 = 0
            android.view.MotionEvent r0 = android.view.MotionEvent.obtain(r12, r14, r16, r17, r18, r19)
            super.onTouchEvent(r0)
        Ldf:
            r0 = r9
            goto L15b
        Le2:
            android.view.VelocityTracker r0 = r6.Og
            r0.addMovement(r7)
            android.view.VelocityTracker r0 = r6.Og
            r2 = 1000(0x3e8, float:1.401E-42)
            int r3 = r6.Oe
            float r3 = (float) r3
            r0.computeCurrentVelocity(r2, r3)
            int r0 = android.support.v4.view.MotionEventCompat.getPointerId(r7, r1)
            android.view.VelocityTracker r1 = r6.Og
            float r0 = android.support.v4.view.VelocityTrackerCompat.getYVelocity(r1, r0)
            float r0 = -r0
            float r1 = java.lang.Math.abs(r0)
            int r2 = r6.Od
            float r2 = (float) r2
            int r1 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r1 <= 0) goto L116
            boolean r1 = r6.dispatchNestedPreFling(r10, r0)
            if (r1 != 0) goto L116
            boolean r1 = r20.hasNestedScrollingParent()
            if (r1 == 0) goto L116
            r6.dispatchNestedFling(r10, r0, r11)
        L116:
            boolean r9 = super.onTouchEvent(r21)
            r20.stopNestedScroll()
            float r0 = r21.getY()
            int r1 = r6.NX
            float r1 = (float) r1
            float r0 = r0 - r1
            float r0 = java.lang.Math.abs(r0)
            r1 = 1092616192(0x41200000, float:10.0)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 >= 0) goto L13a
            float r0 = r21.getX()
            int r1 = r6.NY
            float r1 = (float) r1
            float r0 = r0 - r1
            java.lang.Math.abs(r0)
        L13a:
            r0 = r9
            r9 = r11
            goto L15b
        L13d:
            r6.NX = r2
            float r0 = r21.getX()
            int r0 = (int) r0
            r6.NY = r0
            r6.startNestedScroll(r3)
            int[] r0 = r6.Oa
            r0[r9] = r9
            r0[r11] = r9
            int[] r0 = r6.NZ
            r0[r9] = r9
            r0[r11] = r9
            boolean r0 = super.onTouchEvent(r21)
            r6.Oc = r9
        L15b:
            if (r9 != 0) goto L162
            android.view.VelocityTracker r1 = r6.Og
            r1.addMovement(r7)
        L162:
            return r0
    }

    @Override
    public void setNestedScrollingEnabled(boolean r2) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            r0.setNestedScrollingEnabled(r2)
            return
    }

    @Override
    public boolean startNestedScroll(int r2) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            boolean r2 = r0.startNestedScroll(r2)
            return r2
    }

    @Override
    public void stopNestedScroll() {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            r0.stopNestedScroll()
            return
    }
}
