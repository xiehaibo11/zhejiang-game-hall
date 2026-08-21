package com.kwad.sdk.widget;

public class KSRelativeLayout extends android.widget.RelativeLayout implements com.kwad.sdk.widget.i {
    private final java.util.concurrent.atomic.AtomicBoolean SN;
    private com.kwad.sdk.widget.g aLQ;
    private com.kwad.sdk.widget.i aLR;
    private final com.kwad.sdk.utils.ac.a axd;
    private float mRatio;
    private com.kwad.sdk.widget.h mViewRCHelper;

    public KSRelativeLayout(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 1
            r0.<init>(r1)
            r2.SN = r0
            r0 = 0
            r2.mRatio = r0
            com.kwad.sdk.utils.ac$a r0 = new com.kwad.sdk.utils.ac$a
            r0.<init>()
            r2.axd = r0
            r0 = 0
            r2.init(r3, r0)
            return
    }

    public KSRelativeLayout(android.content.Context r3, android.util.AttributeSet r4) {
            r2 = this;
            r2.<init>(r3, r4)
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 1
            r0.<init>(r1)
            r2.SN = r0
            r0 = 0
            r2.mRatio = r0
            com.kwad.sdk.utils.ac$a r0 = new com.kwad.sdk.utils.ac$a
            r0.<init>()
            r2.axd = r0
            r2.init(r3, r4)
            return
    }

    public KSRelativeLayout(android.content.Context r2, android.util.AttributeSet r3, int r4) {
            r1 = this;
            r1.<init>(r2, r3, r4)
            java.util.concurrent.atomic.AtomicBoolean r4 = new java.util.concurrent.atomic.AtomicBoolean
            r0 = 1
            r4.<init>(r0)
            r1.SN = r4
            r4 = 0
            r1.mRatio = r4
            com.kwad.sdk.utils.ac$a r4 = new com.kwad.sdk.utils.ac$a
            r4.<init>()
            r1.axd = r4
            r1.init(r2, r3)
            return
    }

    private void init(android.content.Context r5, android.util.AttributeSet r6) {
            r4 = this;
            r0 = 1
            if (r6 == 0) goto L1f
            int r1 = com.kwad.sdk.R.attr.ksad_ratio
            int[] r2 = new int[r0]
            r3 = 0
            r2[r3] = r1
            java.util.Arrays.sort(r2)
            android.content.res.TypedArray r3 = r5.obtainStyledAttributes(r6, r2)
            int r1 = java.util.Arrays.binarySearch(r2, r1)
            r2 = 0
            float r1 = r3.getFloat(r1, r2)
            r4.mRatio = r1
            r3.recycle()
        L1f:
            com.kwad.sdk.widget.g r1 = new com.kwad.sdk.widget.g
            r1.<init>(r4, r4)
            r4.aLQ = r1
            r1.bR(r0)
            com.kwad.sdk.widget.h r0 = new com.kwad.sdk.widget.h
            r0.<init>()
            r4.mViewRCHelper = r0
            r0.initAttrs(r5, r6)
            return
    }

    private void sn() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.SN
            r1 = 0
            boolean r0 = r0.getAndSet(r1)
            if (r0 == 0) goto L13
            java.lang.String r0 = "KSRelativeLayout"
            java.lang.String r1 = "onViewAttached"
            com.kwad.sdk.core.e.c.i(r0, r1)
            r2.aa()
        L13:
            return
    }

    private void so() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.SN
            r1 = 1
            boolean r0 = r0.getAndSet(r1)
            if (r0 != 0) goto L13
            java.lang.String r0 = "KSRelativeLayout"
            java.lang.String r1 = "onViewDetached"
            com.kwad.sdk.core.e.c.i(r0, r1)
            r2.ab()
        L13:
            return
    }

    protected void aa() {
            r1 = this;
            com.kwad.sdk.widget.g r0 = r1.aLQ
            r0.onAttachedToWindow()
            return
    }

    protected void ab() {
            r1 = this;
            com.kwad.sdk.widget.g r0 = r1.aLQ
            r0.onDetachedFromWindow()
            return
    }

    @Override
    protected void dispatchDraw(android.graphics.Canvas r2) {
            r1 = this;
            com.kwad.sdk.widget.h r0 = r1.mViewRCHelper
            r0.beforeDispatchDraw(r2)
            super.dispatchDraw(r2)
            com.kwad.sdk.widget.h r0 = r1.mViewRCHelper
            r0.afterDispatchDraw(r2)
            return
    }

    @Override
    public boolean dispatchTouchEvent(android.view.MotionEvent r4) {
            r3 = this;
            int r0 = r4.getAction()
            if (r0 == 0) goto L18
            r1 = 1
            if (r0 == r1) goto La
            goto L32
        La:
            com.kwad.sdk.utils.ac$a r0 = r3.axd
            float r1 = r4.getX()
            float r2 = r4.getY()
            r0.g(r1, r2)
            goto L32
        L18:
            com.kwad.sdk.utils.ac$a r0 = r3.axd
            int r1 = r3.getWidth()
            int r2 = r3.getHeight()
            r0.x(r1, r2)
            com.kwad.sdk.utils.ac$a r0 = r3.axd
            float r1 = r4.getX()
            float r2 = r4.getY()
            r0.f(r1, r2)
        L32:
            boolean r4 = super.dispatchTouchEvent(r4)
            return r4
    }

    @Override
    public void draw(android.graphics.Canvas r2) {
            r1 = this;
            com.kwad.sdk.widget.h r0 = r1.mViewRCHelper
            r0.beforeDraw(r2)
            super.draw(r2)
            com.kwad.sdk.widget.h r0 = r1.mViewRCHelper
            r0.afterDraw(r2)
            return
    }

    public com.kwad.sdk.utils.ac.a getTouchCoords() {
            r1 = this;
            com.kwad.sdk.utils.ac$a r0 = r1.axd
            return r0
    }

    public float getVisiblePercent() {
            r1 = this;
            com.kwad.sdk.widget.g r0 = r1.aLQ
            float r0 = r0.getVisiblePercent()
            return r0
    }

    @Override
    @java.lang.Deprecated
    protected void onAttachedToWindow() {
            r0 = this;
            super.onAttachedToWindow()
            r0.sn()
            return
    }

    @Override
    @java.lang.Deprecated
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            r0.so()
            return
    }

    @Override
    public void onFinishTemporaryDetach() {
            r0 = this;
            super.onFinishTemporaryDetach()
            r0.sn()
            return
    }

    @Override
    protected void onMeasure(int r3, int r4) {
            r2 = this;
            float r0 = r2.mRatio
            r1 = 0
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 == 0) goto L16
            int r4 = android.view.View.MeasureSpec.getSize(r3)
            float r4 = (float) r4
            float r0 = r2.mRatio
            float r4 = r4 * r0
            int r4 = (int) r4
            r0 = 1073741824(0x40000000, float:2.0)
            int r4 = android.view.View.MeasureSpec.makeMeasureSpec(r4, r0)
        L16:
            super.onMeasure(r3, r4)
            return
    }

    @Override
    protected void onSizeChanged(int r2, int r3, int r4, int r5) {
            r1 = this;
            com.kwad.sdk.widget.g r0 = r1.aLQ
            r0.b(r2, r3, r4, r5)
            super.onSizeChanged(r2, r3, r4, r5)
            com.kwad.sdk.widget.g r4 = r1.aLQ
            r4.KF()
            com.kwad.sdk.widget.h r4 = r1.mViewRCHelper
            r4.onSizeChanged(r2, r3)
            return
    }

    @Override
    public void onStartTemporaryDetach() {
            r0 = this;
            super.onStartTemporaryDetach()
            r0.so()
            return
    }

    public void setRadius(float r2) {
            r1 = this;
            com.kwad.sdk.widget.h r0 = r1.mViewRCHelper
            r0.setRadius(r2)
            r1.postInvalidate()
            return
    }

    public void setRatio(float r1) {
            r0 = this;
            r0.mRatio = r1
            return
    }

    public void setViewVisibleListener(com.kwad.sdk.widget.i r1) {
            r0 = this;
            r0.aLR = r1
            return
    }

    public void setVisiblePercent(float r2) {
            r1 = this;
            com.kwad.sdk.widget.g r0 = r1.aLQ
            r0.setVisiblePercent(r2)
            return
    }

    @Override
    public final void z(android.view.View r2) {
            r1 = this;
            com.kwad.sdk.widget.i r0 = r1.aLR
            if (r0 == 0) goto L7
            r0.z(r2)
        L7:
            return
    }
}
