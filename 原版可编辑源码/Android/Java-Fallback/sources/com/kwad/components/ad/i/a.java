package com.kwad.components.ad.i;

public final class a {
    private android.view.View GA;
    private java.lang.Runnable GB;
    private boolean GC;
    private android.animation.Animator gX;
    private android.view.View yp;
    private android.widget.Button yq;
    private android.widget.Button yr;




    public a(android.view.View r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.GC = r0
            r1.GA = r2
            r1.initView()
            return
    }

    private static android.animation.Animator a(android.view.View r3, float r4, float r5, long r6) {
            float r4 = r4 / r5
            r0 = 2
            float[] r0 = new float[r0]
            r1 = 0
            r2 = 0
            r0[r2] = r1
            r2 = 1
            r0[r2] = r5
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofFloat(r0)
            r0.setDuration(r6)
            r6 = 1058306785(0x3f147ae1, float:0.58)
            r7 = 1065353216(0x3f800000, float:1.0)
            android.view.animation.Interpolator r6 = android.support.v4.view.animation.PathInterpolatorCompat.create(r1, r1, r6, r7)
            r0.setInterpolator(r6)
            android.content.res.Resources r6 = r3.getResources()
            int r7 = com.kwad.sdk.R.dimen.ksad_reward_apk_info_card_actionbar_text_size
            float r6 = r6.getDimension(r7)
            com.kwad.components.ad.i.a$3 r7 = new com.kwad.components.ad.i.a$3
            r7.<init>(r4, r5, r6, r3)
            r0.addUpdateListener(r7)
            return r0
    }

    private static android.animation.Animator a(android.view.View r4, android.view.View r5, int r6, int r7, long r8, long r10) {
            r8 = 200(0xc8, double:9.9E-322)
            android.animation.Animator r10 = d(r4, r8)
            float r6 = (float) r6
            float r7 = (float) r7
            android.animation.Animator r11 = a(r5, r6, r7, r8)
            com.kwad.components.ad.i.a$2 r0 = new com.kwad.components.ad.i.a$2
            r0.<init>(r4)
            r11.addListener(r0)
            r0 = 2
            float[] r1 = new float[r0]
            r1 = {x0048: FILL_ARRAY_DATA , data: [1065353216, 1065353216} // fill-array
            java.lang.String r2 = "scaleX"
            android.animation.ObjectAnimator r1 = android.animation.ObjectAnimator.ofFloat(r5, r2, r1)
            r2 = 1600(0x640, double:7.905E-321)
            r1.setDuration(r2)
            android.animation.Animator r5 = d(r5, r8)
            android.animation.Animator r4 = a(r4, r6, r7, r8)
            android.animation.AnimatorSet r6 = new android.animation.AnimatorSet
            r6.<init>()
            r7 = 5
            android.animation.Animator[] r7 = new android.animation.Animator[r7]
            r8 = 0
            r7[r8] = r10
            r8 = 1
            r7[r8] = r11
            r7[r0] = r1
            r8 = 3
            r7[r8] = r5
            r5 = 4
            r7[r5] = r4
            r6.playSequentially(r7)
            return r6
    }

    static java.lang.Runnable a(com.kwad.components.ad.i.a r0, java.lang.Runnable r1) {
            r0.GB = r1
            return r1
    }

    static boolean a(com.kwad.components.ad.i.a r0) {
            boolean r0 = r0.GC
            return r0
    }

    static java.lang.Runnable b(com.kwad.components.ad.i.a r0) {
            java.lang.Runnable r0 = r0.GB
            return r0
    }

    private static android.animation.Animator d(android.view.View r2, long r3) {
            r0 = 2
            float[] r0 = new float[r0]
            r0 = {x001e: FILL_ARRAY_DATA , data: [1065353216, 0} // fill-array
            java.lang.String r1 = "alpha"
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r2, r1, r0)
            r2.setDuration(r3)
            r3 = 0
            r4 = 1058306785(0x3f147ae1, float:0.58)
            r0 = 1065353216(0x3f800000, float:1.0)
            android.view.animation.Interpolator r3 = android.support.v4.view.animation.PathInterpolatorCompat.create(r3, r3, r4, r0)
            r2.setInterpolator(r3)
            return r2
    }

    private void initView() {
            r2 = this;
            android.view.View r0 = r2.GA
            int r1 = com.kwad.sdk.R.id.ksad_reward_apk_info_install_action
            android.view.View r0 = r0.findViewById(r1)
            android.widget.Button r0 = (android.widget.Button) r0
            r2.yq = r0
            android.view.View r0 = r2.GA
            int r1 = com.kwad.sdk.R.id.ksad_reward_apk_info_install_start
            android.view.View r0 = r0.findViewById(r1)
            android.widget.Button r0 = (android.widget.Button) r0
            r2.yr = r0
            android.view.View r0 = r2.GA
            int r1 = com.kwad.sdk.R.id.ksad_reward_apk_info_install_container
            android.view.View r0 = r0.findViewById(r1)
            r2.yp = r0
            return
    }

    public final void ia() {
            r10 = this;
            java.lang.String r0 = "ApkInstallAnimHelper"
            java.lang.String r1 = "startAnimation"
            com.kwad.sdk.core.e.c.d(r0, r1)
            android.view.View r1 = r10.yp
            int r5 = r1.getHeight()
            android.view.View r1 = r10.yp
            int r4 = r1.getWidth()
            if (r5 == 0) goto L5e
            if (r4 != 0) goto L18
            goto L5e
        L18:
            android.animation.Animator r1 = r10.gX
            if (r1 != 0) goto L32
            android.widget.Button r2 = r10.yr
            android.widget.Button r3 = r10.yq
            r6 = 1600(0x640, double:7.905E-321)
            r8 = 200(0xc8, double:9.9E-322)
            android.animation.Animator r1 = a(r2, r3, r4, r5, r6, r8)
            r10.gX = r1
            com.kwad.components.ad.i.a$1 r2 = new com.kwad.components.ad.i.a$1
            r2.<init>(r10)
            r1.addListener(r2)
        L32:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "mAnimator isStarted: "
            r1.<init>(r2)
            android.animation.Animator r2 = r10.gX
            boolean r2 = r2.isStarted()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.d(r0, r1)
            android.animation.Animator r1 = r10.gX
            boolean r1 = r1.isStarted()
            if (r1 != 0) goto L5b
            java.lang.String r1 = "mAnimator.start()"
            com.kwad.sdk.core.e.c.d(r0, r1)
            android.animation.Animator r0 = r10.gX
            r0.start()
        L5b:
            r0 = 0
            r10.GC = r0
        L5e:
            return
    }

    public final void jU() {
            r0 = this;
            r0.lN()
            return
    }

    public final void lN() {
            r1 = this;
            android.animation.Animator r0 = r1.gX
            if (r0 == 0) goto Lf
            r0.cancel()
            android.animation.Animator r0 = r1.gX
            r0.removeAllListeners()
            r0 = 1
            r1.GC = r0
        Lf:
            java.lang.Runnable r0 = r1.GB
            if (r0 == 0) goto L19
            com.kwad.sdk.utils.bj.b(r0)
            r0 = 0
            r1.GB = r0
        L19:
            return
    }

    public final void lO() {
            r1 = this;
            r0 = 1
            r1.GC = r0
            return
    }
}
