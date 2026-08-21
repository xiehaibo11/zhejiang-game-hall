package com.kwad.components.ad.splashscreen.widget;

public class KsShakeView extends com.kwad.sdk.widget.KSFrameLayout {
    private float FA;
    private int FB;
    private android.animation.Animator FC;
    private boolean FD;
    private int Fu;
    private float Fv;
    private int Fw;
    private int Fx;
    private int Fy;
    private float Fz;
    private android.widget.ImageView eZ;
    private android.animation.Animator fa;
    private android.graphics.Paint mPaint;


    public KsShakeView(android.content.Context r3) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public KsShakeView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public KsShakeView(android.content.Context r2, android.util.AttributeSet r3, int r4) {
            r1 = this;
            r1.<init>(r2, r3, r4)
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r1.mPaint = r0
            r0 = 0
            r1.FD = r0
            r1.a(r2, r3, r4)
            return
    }

    private android.animation.Animator a(android.view.View r2, long r3, float r5) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            int r3 = r1.Fu
            r4 = 1
            r5 = 1065353216(0x3f800000, float:1.0)
            r0 = 1052266988(0x3eb851ec, float:0.36)
            if (r3 != r4) goto L26
            r3 = 1046562734(0x3e6147ae, float:0.22)
            r4 = 1058474557(0x3f170a3d, float:0.59)
            android.view.animation.Interpolator r3 = android.support.v4.view.animation.PathInterpolatorCompat.create(r3, r4, r0, r5)
            int r4 = r2.getWidth()
            float r4 = (float) r4
            r2.setPivotX(r4)
            int r4 = r2.getHeight()
            float r4 = (float) r4
            goto L3f
        L26:
            r3 = 1051260355(0x3ea8f5c3, float:0.33)
            r4 = 0
            android.view.animation.Interpolator r3 = android.support.v4.view.animation.PathInterpolatorCompat.create(r3, r4, r0, r5)
            int r4 = r2.getWidth()
            float r4 = (float) r4
            r5 = 1073741824(0x40000000, float:2.0)
            float r4 = r4 / r5
            r2.setPivotX(r4)
            int r4 = r2.getHeight()
            float r4 = (float) r4
            float r4 = r4 / r5
        L3f:
            r2.setPivotY(r4)
            r4 = 100
            r0 = 1098907648(0x41800000, float:16.0)
            android.animation.Animator r2 = com.kwad.components.core.t.m.a(r2, r3, r4, r0)
            return r2
    }

    private void a(android.content.Context r3, android.util.AttributeSet r4, int r5) {
            r2 = this;
            int[] r0 = com.kwad.sdk.R.styleable.ksad_KsShakeView
            r1 = 0
            android.content.res.TypedArray r4 = r3.obtainStyledAttributes(r4, r0, r5, r1)
            int r5 = com.kwad.sdk.R.styleable.ksad_KsShakeView_ksad_outerStrokeWidth
            r0 = 1065353216(0x3f800000, float:1.0)
            float r5 = r4.getDimension(r5, r0)
            r2.Fv = r5
            int r5 = com.kwad.sdk.R.styleable.ksad_KsShakeView_ksad_outerStrokeColor
            java.lang.String r1 = "#4DFFFFFF"
            int r1 = android.graphics.Color.parseColor(r1)
            int r5 = r4.getColor(r5, r1)
            r2.Fw = r5
            int r5 = com.kwad.sdk.R.styleable.ksad_KsShakeView_ksad_solidColor
            java.lang.String r1 = "#66000000"
            int r1 = android.graphics.Color.parseColor(r1)
            int r5 = r4.getColor(r5, r1)
            r2.Fx = r5
            int r5 = com.kwad.sdk.R.styleable.ksad_KsShakeView_ksad_shakeViewStyle
            r1 = 1
            int r5 = r4.getInteger(r5, r1)
            r2.Fu = r5
            int r5 = com.kwad.sdk.R.styleable.ksad_KsShakeView_ksad_innerCircleStrokeColor
            java.lang.String r1 = "#B3FFFFFF"
            int r1 = android.graphics.Color.parseColor(r1)
            int r5 = r4.getColor(r5, r1)
            r2.Fy = r5
            int r5 = com.kwad.sdk.R.styleable.ksad_KsShakeView_ksad_innerCircleStrokeWidth
            float r5 = r4.getDimension(r5, r0)
            r2.Fz = r5
            int r5 = com.kwad.sdk.R.styleable.ksad_KsShakeView_ksad_shakeIcon
            int r0 = com.kwad.sdk.R.drawable.ksad_ic_shake_hand
            int r5 = r4.getResourceId(r5, r0)
            r2.FB = r5
            r5 = 1092616192(0x41200000, float:10.0)
            int r3 = com.kwad.sdk.d.a.a.a(r3, r5)
            float r3 = (float) r3
            int r5 = com.kwad.sdk.R.styleable.ksad_KsShakeView_ksad_innerCirclePadding
            float r3 = r4.getDimension(r5, r3)
            r2.FA = r3
            r4.recycle()
            android.widget.ImageView r3 = new android.widget.ImageView
            android.content.Context r4 = r2.getContext()
            r3.<init>(r4)
            r2.eZ = r3
            android.widget.FrameLayout$LayoutParams r3 = new android.widget.FrameLayout$LayoutParams
            r4 = -2
            r3.<init>(r4, r4)
            r4 = 17
            r3.gravity = r4
            android.widget.ImageView r4 = r2.eZ
            r2.addView(r4, r3)
            r2.ll()
            return
    }

    static boolean a(com.kwad.components.ad.splashscreen.widget.KsShakeView r0) {
            boolean r0 = r0.FD
            return r0
    }

    private static android.animation.Animator b(android.view.View r12, long r13, float r15) {
            r13 = 1051260355(0x3ea8f5c3, float:0.33)
            r14 = 0
            r0 = 1052266988(0x3eb851ec, float:0.36)
            r1 = 1065353216(0x3f800000, float:1.0)
            android.view.animation.Interpolator r13 = android.support.v4.view.animation.PathInterpolatorCompat.create(r13, r14, r0, r1)
            android.animation.AnimatorSet r14 = new android.animation.AnimatorSet
            r14.<init>()
            r0 = 1
            float[] r1 = new float[r0]
            r2 = 0
            r1[r2] = r15
            java.lang.String r3 = "translationY"
            android.animation.ObjectAnimator r1 = android.animation.ObjectAnimator.ofFloat(r12, r3, r1)
            r4 = 100
            android.animation.ObjectAnimator r1 = r1.setDuration(r4)
            r1.setInterpolator(r13)
            float[] r6 = new float[r0]
            float r7 = -r15
            r6[r2] = r7
            android.animation.ObjectAnimator r6 = android.animation.ObjectAnimator.ofFloat(r12, r3, r6)
            r8 = 200(0xc8, double:9.9E-322)
            android.animation.ObjectAnimator r6 = r6.setDuration(r8)
            r6.setInterpolator(r13)
            float[] r10 = new float[r0]
            r10[r2] = r15
            android.animation.ObjectAnimator r10 = android.animation.ObjectAnimator.ofFloat(r12, r3, r10)
            android.animation.ObjectAnimator r10 = r10.setDuration(r8)
            r10.setInterpolator(r13)
            float[] r11 = new float[r0]
            r11[r2] = r7
            android.animation.ObjectAnimator r7 = android.animation.ObjectAnimator.ofFloat(r12, r3, r11)
            android.animation.ObjectAnimator r7 = r7.setDuration(r8)
            r7.setInterpolator(r13)
            float[] r13 = new float[r0]
            r13[r2] = r15
            android.animation.ObjectAnimator r13 = android.animation.ObjectAnimator.ofFloat(r12, r3, r13)
            android.animation.ObjectAnimator r13 = r13.setDuration(r4)
            r15 = 2
            float[] r3 = new float[r15]
            r3 = {x008a: FILL_ARRAY_DATA , data: [1065353216, 1065353216} // fill-array
            java.lang.String r8 = "alpha"
            android.animation.ObjectAnimator r12 = android.animation.ObjectAnimator.ofFloat(r12, r8, r3)
            android.animation.ObjectAnimator r12 = r12.setDuration(r4)
            r3 = 6
            android.animation.Animator[] r3 = new android.animation.Animator[r3]
            r3[r2] = r1
            r3[r0] = r6
            r3[r15] = r10
            r15 = 3
            r3[r15] = r7
            r15 = 4
            r3[r15] = r13
            r13 = 5
            r3[r13] = r12
            r14.playSequentially(r3)
            return r14
    }

    static android.animation.Animator b(com.kwad.components.ad.splashscreen.widget.KsShakeView r0) {
            android.animation.Animator r0 = r0.fa
            return r0
    }

    static android.widget.ImageView c(com.kwad.components.ad.splashscreen.widget.KsShakeView r0) {
            android.widget.ImageView r0 = r0.eZ
            return r0
    }

    private void ll() {
            r2 = this;
            android.widget.ImageView r0 = r2.eZ
            int r1 = r2.FB
            r0.setImageResource(r1)
            return
    }

    private void setBgCirclePaint(android.graphics.Paint r2) {
            r1 = this;
            r2.reset()
            android.graphics.Paint$Style r0 = android.graphics.Paint.Style.FILL
            r2.setStyle(r0)
            int r0 = r1.Fx
            r2.setColor(r0)
            r0 = 1
            r2.setAntiAlias(r0)
            return
    }

    private void setInnerCirclePaint(android.graphics.Paint r2) {
            r1 = this;
            r2.reset()
            android.graphics.Paint$Style r0 = android.graphics.Paint.Style.STROKE
            r2.setStyle(r0)
            float r0 = r1.Fz
            r2.setStrokeWidth(r0)
            int r0 = r1.Fy
            r2.setColor(r0)
            r0 = 1
            r2.setAntiAlias(r0)
            return
    }

    private void setOuterCirclePaint(android.graphics.Paint r2) {
            r1 = this;
            r2.reset()
            android.graphics.Paint$Style r0 = android.graphics.Paint.Style.STROKE
            r2.setStyle(r0)
            float r0 = r1.Fv
            r2.setStrokeWidth(r0)
            int r0 = r1.Fw
            r2.setColor(r0)
            r0 = 1
            r2.setAntiAlias(r0)
            return
    }

    @Override
    public final void ab() {
            r1 = this;
            super.ab()
            android.animation.Animator r0 = r1.fa
            if (r0 == 0) goto La
            r0.cancel()
        La:
            return
    }

    public final void ae(int r2) {
            r1 = this;
            r1.Fu = r2
            r0 = 2
            if (r2 == r0) goto Lb
            int r2 = com.kwad.sdk.R.drawable.ksad_ic_shake_hand
        L7:
            r1.setIconDrawableRes(r2)
            return
        Lb:
            int r2 = com.kwad.sdk.R.drawable.ksad_ic_shake_phone
            goto L7
    }

    public final void b(android.animation.AnimatorListenerAdapter r4) {
            r3 = this;
            r0 = 1
            r3.FD = r0
            android.animation.Animator r0 = r3.fa
            if (r0 == 0) goto La
            r0.cancel()
        La:
            android.widget.ImageView r0 = r3.eZ
            r1 = 0
            r0.setRotation(r1)
            android.content.res.Resources r0 = r3.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_splash_shake_animator_height
            int r0 = r0.getDimensionPixelSize(r1)
            android.animation.Animator r1 = r3.FC
            if (r1 == 0) goto L21
            r1.cancel()
        L21:
            r1 = 100
            float r0 = (float) r0
            android.animation.Animator r0 = b(r3, r1, r0)
            r3.FC = r0
            r0.addListener(r4)
            android.animation.Animator r4 = r3.FC
            r4.start()
            return
    }

    @Override
    public void dispatchDraw(android.graphics.Canvas r6) {
            r5 = this;
            int r0 = r5.getWidth()
            int r1 = r5.getHeight()
            int r0 = java.lang.Math.min(r0, r1)
            float r0 = (float) r0
            r1 = 1073741824(0x40000000, float:2.0)
            float r0 = r0 / r1
            android.graphics.Paint r2 = r5.mPaint
            r5.setBgCirclePaint(r2)
            int r2 = r5.getWidth()
            float r2 = (float) r2
            float r2 = r2 / r1
            int r3 = r5.getHeight()
            float r3 = (float) r3
            float r3 = r3 / r1
            android.graphics.Paint r4 = r5.mPaint
            r6.drawCircle(r2, r3, r0, r4)
            android.graphics.Paint r2 = r5.mPaint
            r5.setOuterCirclePaint(r2)
            int r2 = r5.getWidth()
            float r2 = (float) r2
            float r2 = r2 / r1
            int r3 = r5.getHeight()
            float r3 = (float) r3
            float r3 = r3 / r1
            android.graphics.Paint r4 = r5.mPaint
            r6.drawCircle(r2, r3, r0, r4)
            int r2 = r5.Fu
            r3 = 2
            if (r2 != r3) goto L5a
            android.graphics.Paint r2 = r5.mPaint
            r5.setInnerCirclePaint(r2)
            float r2 = r5.FA
            float r0 = r0 - r2
            int r2 = r5.getWidth()
            float r2 = (float) r2
            float r2 = r2 / r1
            int r3 = r5.getHeight()
            float r3 = (float) r3
            float r3 = r3 / r1
            android.graphics.Paint r1 = r5.mPaint
            r6.drawCircle(r2, r3, r0, r1)
        L5a:
            super.dispatchDraw(r6)
            return
    }

    public final void lH() {
            r4 = this;
            r0 = 0
            r4.FD = r0
            android.animation.Animator r0 = r4.fa
            if (r0 == 0) goto Ld
            r0.cancel()
            r0 = 0
            r4.fa = r0
        Ld:
            android.widget.ImageView r0 = r4.eZ
            r1 = 100
            r3 = 1098907648(0x41800000, float:16.0)
            android.animation.Animator r0 = r4.a(r0, r1, r3)
            r4.fa = r0
            if (r0 == 0) goto L28
            com.kwad.components.ad.splashscreen.widget.KsShakeView$1 r1 = new com.kwad.components.ad.splashscreen.widget.KsShakeView$1
            r1.<init>(r4)
            r0.addListener(r1)
            android.animation.Animator r0 = r4.fa
            r0.start()
        L28:
            return
    }

    public final void lI() {
            r1 = this;
            android.animation.Animator r0 = r1.fa
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            android.animation.Animator r0 = r1.FC
            if (r0 == 0) goto Le
            r0.cancel()
        Le:
            r0 = 0
            r1.fa = r0
            r1.FC = r0
            return
    }

    @Override
    public void onMeasure(int r1, int r2) {
            r0 = this;
            super.onMeasure(r1, r2)
            return
    }

    public void setIconDrawableRes(int r2) {
            r1 = this;
            android.widget.ImageView r0 = r1.eZ
            if (r0 == 0) goto L7
            r0.setImageResource(r2)
        L7:
            return
    }
}
