package com.kwad.components.core.widget;

public class KSCornerImageView extends android.widget.ImageView {
    private com.kwad.sdk.widget.h mViewRCHelper;

    public KSCornerImageView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r0 = 0
            r1.a(r2, r0)
            return
    }

    public KSCornerImageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a(r1, r2)
            return
    }

    public KSCornerImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.a(r1, r2)
            return
    }

    public KSCornerImageView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r0.a(r1, r2)
            return
    }

    private void a(android.content.Context r5, android.util.AttributeSet r6) {
            r4 = this;
            com.kwad.sdk.widget.h$a r0 = new com.kwad.sdk.widget.h$a
            r0.<init>()
            int[] r1 = com.kwad.sdk.R.styleable.ksad_KSCornerImageView
            android.content.res.TypedArray r1 = r5.obtainStyledAttributes(r6, r1)
            int r2 = com.kwad.sdk.R.styleable.ksad_KSCornerImageView_ksad_leftTopCorner
            r3 = 1
            boolean r2 = r1.getBoolean(r2, r3)
            r0.bS(r2)
            int r2 = com.kwad.sdk.R.styleable.ksad_KSCornerImageView_ksad_topRightCorner
            boolean r2 = r1.getBoolean(r2, r3)
            r0.bT(r2)
            int r2 = com.kwad.sdk.R.styleable.ksad_KSCornerImageView_ksad_rightBottomCorner
            boolean r2 = r1.getBoolean(r2, r3)
            r0.bU(r2)
            int r2 = com.kwad.sdk.R.styleable.ksad_KSCornerImageView_ksad_bottomLeftCorner
            boolean r2 = r1.getBoolean(r2, r3)
            r0.bV(r2)
            r1.recycle()
            com.kwad.sdk.widget.h r1 = new com.kwad.sdk.widget.h
            r1.<init>(r0)
            r4.mViewRCHelper = r1
            r1.initAttrs(r5, r6)
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
    public void draw(android.graphics.Canvas r2) {
            r1 = this;
            com.kwad.sdk.widget.h r0 = r1.mViewRCHelper
            r0.beforeDraw(r2)
            super.draw(r2)
            com.kwad.sdk.widget.h r0 = r1.mViewRCHelper
            r0.afterDraw(r2)
            return
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onSizeChanged(r1, r2, r3, r4)
            com.kwad.sdk.widget.h r3 = r0.mViewRCHelper
            r3.onSizeChanged(r1, r2)
            return
    }

    public void setRadius(float r2) {
            r1 = this;
            com.kwad.sdk.widget.h r0 = r1.mViewRCHelper
            r0.setRadius(r2)
            r1.postInvalidate()
            return
    }
}
