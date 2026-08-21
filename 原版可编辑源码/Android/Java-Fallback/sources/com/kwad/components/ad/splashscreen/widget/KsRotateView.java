package com.kwad.components.ad.splashscreen.widget;

public class KsRotateView extends com.kwad.components.ad.splashscreen.widget.b {
    private static int Fo = 50;
    private static int Fp = -12;
    private static int Fq = -25;
    private static int Fr = 12;
    private static int Fs = 25;
    private android.widget.ImageView Fn;
    private int Ft;
    private android.widget.ImageView eZ;

    static {
            return
    }

    public KsRotateView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public KsRotateView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public KsRotateView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    protected final void a(android.content.Context r3, android.util.AttributeSet r4, int r5) {
            r2 = this;
            int[] r0 = com.kwad.sdk.R.styleable.ksad_KsShakeView
            r1 = 0
            android.content.res.TypedArray r4 = r3.obtainStyledAttributes(r4, r0, r5, r1)
            int r5 = com.kwad.sdk.R.styleable.ksad_KsShakeView_ksad_shakeIcon
            int r0 = com.kwad.sdk.R.drawable.ksad_ic_rotate_phone
            int r5 = r4.getResourceId(r5, r0)
            r2.Ft = r5
            r4.recycle()
            android.widget.ImageView r4 = new android.widget.ImageView
            android.content.Context r5 = r2.getContext()
            r4.<init>(r5)
            r2.Fn = r4
            int r5 = com.kwad.sdk.R.drawable.ksad_ic_rotate_line
            r4.setImageResource(r5)
            android.widget.FrameLayout$LayoutParams r4 = new android.widget.FrameLayout$LayoutParams
            r5 = -2
            r4.<init>(r5, r5)
            r0 = 49
            r4.gravity = r0
            android.widget.ImageView r0 = r2.Fn
            r2.addView(r0, r4)
            android.widget.ImageView r4 = new android.widget.ImageView
            android.content.Context r0 = r2.getContext()
            r4.<init>(r0)
            r2.eZ = r4
            android.widget.FrameLayout$LayoutParams r4 = new android.widget.FrameLayout$LayoutParams
            r4.<init>(r5, r5)
            r5 = 1102053376(0x41b00000, float:22.0)
            int r3 = com.kwad.sdk.d.a.a.a(r3, r5)
            r4.topMargin = r3
            r3 = 1
            r4.gravity = r3
            android.widget.ImageView r3 = r2.eZ
            r2.addView(r3, r4)
            return
    }

    @Override
    protected int getAnimationDelayTime() {
            r1 = this;
            r0 = 500(0x1f4, float:7.0E-43)
            return r0
    }

    @Override
    protected android.view.View getInteractionView() {
            r1 = this;
            android.widget.ImageView r0 = r1.eZ
            return r0
    }

    @Override
    protected final android.animation.Animator lE() {
            r22 = this;
            android.view.View r0 = r22.getInteractionView()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            android.animation.AnimatorSet r1 = new android.animation.AnimatorSet
            r1.<init>()
            int r2 = r0.getWidth()
            float r2 = (float) r2
            r3 = 1073741824(0x40000000, float:2.0)
            float r2 = r2 / r3
            r0.setPivotX(r2)
            int r2 = r0.getHeight()
            float r2 = (float) r2
            float r2 = r2 / r3
            r0.setPivotY(r2)
            r2 = 2
            float[] r3 = new float[r2]
            r4 = 0
            r5 = 0
            r3[r5] = r4
            int r6 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fq
            float r6 = (float) r6
            r7 = 1
            r3[r7] = r6
            java.lang.String r6 = "rotation"
            android.animation.ObjectAnimator r3 = android.animation.ObjectAnimator.ofFloat(r0, r6, r3)
            r8 = 500(0x1f4, double:2.47E-321)
            android.animation.ObjectAnimator r3 = r3.setDuration(r8)
            float[] r10 = new float[r2]
            r10 = {x018c: FILL_ARRAY_DATA , data: [1065353216, 1065353216} // fill-array
            java.lang.String r11 = "alpha"
            android.animation.ObjectAnimator r10 = android.animation.ObjectAnimator.ofFloat(r0, r11, r10)
            r12 = 340(0x154, double:1.68E-321)
            r10.setDuration(r12)
            float[] r14 = new float[r2]
            int r15 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fq
            float r15 = (float) r15
            r14[r5] = r15
            r14[r7] = r4
            android.animation.ObjectAnimator r14 = android.animation.ObjectAnimator.ofFloat(r0, r6, r14)
            int r15 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fo
            long r12 = (long) r15
            android.animation.ObjectAnimator r12 = r14.setDuration(r12)
            float[] r13 = new float[r2]
            r13[r5] = r4
            int r14 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fr
            float r14 = (float) r14
            r13[r7] = r14
            android.animation.ObjectAnimator r13 = android.animation.ObjectAnimator.ofFloat(r0, r6, r13)
            int r14 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fo
            long r14 = (long) r14
            android.animation.ObjectAnimator r13 = r13.setDuration(r14)
            float[] r14 = new float[r2]
            int r15 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fr
            float r15 = (float) r15
            r14[r5] = r15
            r14[r7] = r4
            android.animation.ObjectAnimator r14 = android.animation.ObjectAnimator.ofFloat(r0, r6, r14)
            int r15 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fo
            long r8 = (long) r15
            android.animation.ObjectAnimator r8 = r14.setDuration(r8)
            float[] r9 = new float[r2]
            r9[r5] = r4
            int r14 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fp
            float r14 = (float) r14
            r9[r7] = r14
            android.animation.ObjectAnimator r9 = android.animation.ObjectAnimator.ofFloat(r0, r6, r9)
            int r14 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fo
            long r14 = (long) r14
            android.animation.ObjectAnimator r9 = r9.setDuration(r14)
            float[] r14 = new float[r2]
            int r15 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fp
            float r15 = (float) r15
            r14[r5] = r15
            r14[r7] = r4
            android.animation.ObjectAnimator r14 = android.animation.ObjectAnimator.ofFloat(r0, r6, r14)
            int r15 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fo
            r20 = r8
            long r7 = (long) r15
            android.animation.ObjectAnimator r7 = r14.setDuration(r7)
            float[] r8 = new float[r2]
            r8 = {x0194: FILL_ARRAY_DATA , data: [1065353216, 1065353216} // fill-array
            android.animation.ObjectAnimator r8 = android.animation.ObjectAnimator.ofFloat(r0, r11, r8)
            r14 = 500(0x1f4, double:2.47E-321)
            r8.setDuration(r14)
            float[] r14 = new float[r2]
            r14[r5] = r4
            int r15 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fs
            float r15 = (float) r15
            r19 = 1
            r14[r19] = r15
            android.animation.ObjectAnimator r14 = android.animation.ObjectAnimator.ofFloat(r0, r6, r14)
            r4 = 500(0x1f4, double:2.47E-321)
            android.animation.ObjectAnimator r4 = r14.setDuration(r4)
            float[] r5 = new float[r2]
            r5 = {x019c: FILL_ARRAY_DATA , data: [1065353216, 1065353216} // fill-array
            android.animation.ObjectAnimator r5 = android.animation.ObjectAnimator.ofFloat(r0, r11, r5)
            r14 = 340(0x154, double:1.68E-321)
            r10.setDuration(r14)
            float[] r14 = new float[r2]
            int r15 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fs
            float r15 = (float) r15
            r16 = 0
            r14[r16] = r15
            r11 = 0
            r14[r19] = r11
            android.animation.ObjectAnimator r14 = android.animation.ObjectAnimator.ofFloat(r0, r6, r14)
            int r15 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fo
            r17 = r12
            long r11 = (long) r15
            android.animation.ObjectAnimator r11 = r14.setDuration(r11)
            float[] r12 = new float[r2]
            r14 = 0
            r12[r16] = r14
            int r14 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fp
            float r14 = (float) r14
            r12[r19] = r14
            android.animation.ObjectAnimator r12 = android.animation.ObjectAnimator.ofFloat(r0, r6, r12)
            int r14 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fo
            long r14 = (long) r14
            android.animation.ObjectAnimator r12 = r12.setDuration(r14)
            float[] r14 = new float[r2]
            int r15 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fp
            float r15 = (float) r15
            r14[r16] = r15
            r15 = 0
            r14[r19] = r15
            android.animation.ObjectAnimator r14 = android.animation.ObjectAnimator.ofFloat(r0, r6, r14)
            int r15 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fo
            r18 = r11
            r21 = r12
            long r11 = (long) r15
            android.animation.ObjectAnimator r11 = r14.setDuration(r11)
            float[] r12 = new float[r2]
            r14 = 0
            r12[r16] = r14
            int r14 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fr
            float r14 = (float) r14
            r12[r19] = r14
            android.animation.ObjectAnimator r12 = android.animation.ObjectAnimator.ofFloat(r0, r6, r12)
            int r14 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fo
            long r14 = (long) r14
            android.animation.ObjectAnimator r12 = r12.setDuration(r14)
            float[] r14 = new float[r2]
            int r15 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fr
            float r15 = (float) r15
            r14[r16] = r15
            r15 = 0
            r14[r19] = r15
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r6, r14)
            int r6 = com.kwad.components.ad.splashscreen.widget.KsRotateView.Fo
            long r14 = (long) r6
            android.animation.ObjectAnimator r0 = r0.setDuration(r14)
            r6 = 15
            android.animation.Animator[] r6 = new android.animation.Animator[r6]
            r6[r16] = r3
            r6[r19] = r10
            r6[r2] = r17
            r2 = 3
            r6[r2] = r13
            r2 = 4
            r6[r2] = r20
            r2 = 5
            r6[r2] = r9
            r2 = 6
            r6[r2] = r7
            r2 = 7
            r6[r2] = r8
            r2 = 8
            r6[r2] = r4
            r2 = 9
            r6[r2] = r5
            r2 = 10
            r6[r2] = r18
            r2 = 11
            r6[r2] = r21
            r2 = 12
            r6[r2] = r11
            r2 = 13
            r6[r2] = r12
            r2 = 14
            r6[r2] = r0
            r1.playSequentially(r6)
            return r1
    }

    @Override
    protected final void lF() {
            r2 = this;
            android.view.View r0 = r2.getInteractionView()
            r1 = 0
            r0.setRotation(r1)
            return
    }

    @Override
    protected final void ll() {
            r2 = this;
            android.widget.ImageView r0 = r2.eZ
            int r1 = r2.Ft
            r0.setImageResource(r1)
            return
    }
}
