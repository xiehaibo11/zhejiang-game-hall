package com.kwad.components.ad.reward.presenter.platdetail;

public final class b extends com.kwad.components.ad.reward.presenter.a {
    private com.kwad.components.core.video.l mVideoPlayStateListener;
    private final long tW;
    private final long tX;
    private final long tY;
    private android.view.View tZ;
    private android.view.View ua;
    private android.view.View ub;
    private android.view.View uc;
    private boolean ud;
    private boolean ue;
    private android.animation.Animator uf;
    private android.animation.Animator ug;
    private android.animation.Animator uh;
    private android.animation.Animator ui;
    private long uj;
    private com.kwad.sdk.utils.az uk;
    private com.kwad.sdk.utils.az ul;
    private android.view.animation.Interpolator um;





    public b() {
            r4 = this;
            r4.<init>()
            r0 = 1600(0x640, double:7.905E-321)
            r4.tW = r0
            r0 = 3000(0xbb8, double:1.482E-320)
            r4.tX = r0
            r2 = 5000(0x1388, double:2.4703E-320)
            r4.tY = r2
            r2 = 0
            r4.ud = r2
            r4.ue = r2
            r2 = 0
            r4.ui = r2
            r4.uj = r0
            r0 = 0
            r1 = 1058306785(0x3f147ae1, float:0.58)
            r2 = 1065353216(0x3f800000, float:1.0)
            android.view.animation.Interpolator r0 = android.support.v4.view.animation.PathInterpolatorCompat.create(r0, r0, r1, r2)
            r4.um = r0
            com.kwad.components.ad.reward.presenter.platdetail.b$1 r0 = new com.kwad.components.ad.reward.presenter.platdetail.b$1
            r0.<init>(r4)
            r4.mVideoPlayStateListener = r0
            return
    }

    static long a(com.kwad.components.ad.reward.presenter.platdetail.b r2) {
            long r0 = r2.uj
            return r0
    }

    private android.animation.Animator a(android.view.View r9, long r10) {
            r8 = this;
            r0 = 5
            float[] r0 = new float[r0]
            r0 = {x0048: FILL_ARRAY_DATA , data: [1065353216, 1066242408, 1065353216, 1066242408, 1065353216} // fill-array
            java.lang.String r1 = "scaleX"
            android.animation.ObjectAnimator r1 = android.animation.ObjectAnimator.ofFloat(r9, r1, r0)
            java.lang.String r2 = "scaleY"
            android.animation.ObjectAnimator r9 = android.animation.ObjectAnimator.ofFloat(r9, r2, r0)
            android.animation.AnimatorSet r0 = new android.animation.AnimatorSet
            r0.<init>()
            android.view.View r2 = r8.ua
            r3 = 1
            r4 = 0
            r5 = 2
            if (r2 == 0) goto L36
            float[] r6 = new float[r5]
            r6 = {x0056: FILL_ARRAY_DATA , data: [1045220557, 0} // fill-array
            java.lang.String r7 = "alpha"
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r2, r7, r6)
            r6 = 3
            android.animation.Animator[] r6 = new android.animation.Animator[r6]
            r6[r4] = r1
            r6[r3] = r9
            r6[r5] = r2
            r0.playTogether(r6)
            goto L3f
        L36:
            android.animation.Animator[] r2 = new android.animation.Animator[r5]
            r2[r4] = r1
            r2[r3] = r9
            r0.playTogether(r2)
        L3f:
            r0.setDuration(r10)
            android.view.animation.Interpolator r9 = r8.um
            r0.setInterpolator(r9)
            return r0
    }

    private android.animation.Animator a(android.view.View r7, android.view.View r8) {
            r6 = this;
            android.animation.Animator r7 = r6.o(r7)
            android.animation.Animator r0 = r6.o(r8)
            r1 = 1
            float[] r2 = new float[r1]
            r3 = 1065353216(0x3f800000, float:1.0)
            r4 = 0
            r2[r4] = r3
            java.lang.String r3 = "scaleX"
            android.animation.ObjectAnimator r8 = android.animation.ObjectAnimator.ofFloat(r8, r3, r2)
            r2 = 300(0x12c, double:1.48E-321)
            r8.setDuration(r2)
            android.animation.AnimatorSet r2 = new android.animation.AnimatorSet
            r2.<init>()
            r3 = 2
            android.animation.Animator[] r5 = new android.animation.Animator[r3]
            r5[r4] = r8
            r5[r1] = r0
            r2.playSequentially(r5)
            android.animation.AnimatorSet r8 = new android.animation.AnimatorSet
            r8.<init>()
            android.animation.Animator[] r0 = new android.animation.Animator[r3]
            r0[r4] = r7
            r0[r1] = r2
            r8.playTogether(r0)
            return r8
    }

    static android.animation.Animator a(com.kwad.components.ad.reward.presenter.platdetail.b r0, android.animation.Animator r1) {
            r1 = 0
            r0.ui = r1
            return r1
    }

    private android.view.View a(int r4, android.view.ViewGroup r5) {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            int r1 = com.kwad.sdk.R.layout.ksad_image_player_sweep
            r2 = 0
            android.view.View r5 = r0.inflate(r1, r5, r2)
            android.widget.ImageView r5 = (android.widget.ImageView) r5
            android.content.Context r0 = r3.getContext()
            android.content.res.Resources r0 = r0.getResources()
            android.graphics.drawable.Drawable r4 = r0.getDrawable(r4)
            r5.setImageDrawable(r4)
            return r5
    }

    private void a(android.animation.Animator r2) {
            r1 = this;
            boolean r0 = r1.ud
            if (r0 != 0) goto L8
            r2.start()
            return
        L8:
            r1.ui = r2
            return
    }

    static void a(com.kwad.components.ad.reward.presenter.platdetail.b r0, android.view.View r1) {
            p(r1)
            return
    }

    static boolean a(com.kwad.components.ad.reward.presenter.platdetail.b r0, boolean r1) {
            r0.ud = r1
            return r1
    }

    private android.animation.Animator b(android.view.View r6, long r7) {
            r5 = this;
            r7 = 1600(0x640, double:7.905E-321)
            android.animation.Animator r0 = r5.a(r6, r7)
            r1 = 1
            float[] r2 = new float[r1]
            r3 = 1065353216(0x3f800000, float:1.0)
            r4 = 0
            r2[r4] = r3
            java.lang.String r3 = "alpha"
            android.animation.ObjectAnimator r6 = android.animation.ObjectAnimator.ofFloat(r6, r3, r2)
            r2 = 5000(0x1388, double:2.4703E-320)
            r6.setDuration(r2)
            android.animation.AnimatorSet r2 = new android.animation.AnimatorSet
            r2.<init>()
            r3 = 2
            android.animation.Animator[] r3 = new android.animation.Animator[r3]
            r3[r4] = r0
            r3[r1] = r6
            r2.playSequentially(r3)
            r2.setDuration(r7)
            return r2
    }

    static android.view.View b(com.kwad.components.ad.reward.presenter.platdetail.b r0, android.view.View r1) {
            r1 = 0
            r0.ua = r1
            return r1
    }

    static void b(com.kwad.components.ad.reward.presenter.platdetail.b r0) {
            r0.ia()
            return
    }

    static void b(com.kwad.components.ad.reward.presenter.platdetail.b r0, android.animation.Animator r1) {
            r0.a(r1)
            return
    }

    static boolean b(com.kwad.components.ad.reward.presenter.platdetail.b r0, boolean r1) {
            r1 = 1
            r0.ue = r1
            return r1
    }

    static android.animation.Animator c(com.kwad.components.ad.reward.presenter.platdetail.b r0) {
            android.animation.Animator r0 = r0.ui
            return r0
    }

    static android.view.View c(com.kwad.components.ad.reward.presenter.platdetail.b r0, android.view.View r1) {
            r1 = 0
            r0.ub = r1
            return r1
    }

    static android.view.View d(com.kwad.components.ad.reward.presenter.platdetail.b r0) {
            android.view.View r0 = r0.ua
            return r0
    }

    static android.view.View d(com.kwad.components.ad.reward.presenter.platdetail.b r0, android.view.View r1) {
            r1 = 0
            r0.uc = r1
            return r1
    }

    static boolean e(com.kwad.components.ad.reward.presenter.platdetail.b r0) {
            boolean r0 = r0.ue
            return r0
    }

    static android.animation.Animator f(com.kwad.components.ad.reward.presenter.platdetail.b r0) {
            android.animation.Animator r0 = r0.ug
            return r0
    }

    static android.animation.Animator g(com.kwad.components.ad.reward.presenter.platdetail.b r0) {
            android.animation.Animator r0 = r0.uh
            return r0
    }

    static android.view.View h(com.kwad.components.ad.reward.presenter.platdetail.b r0) {
            android.view.View r0 = r0.ub
            return r0
    }

    private void hY() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_image_player_sweep_wave_width_start
            int r0 = r0.getDimensionPixelSize(r1)
            android.content.Context r1 = r3.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_image_player_sweep_wave_height_start
            int r1 = r1.getDimensionPixelSize(r2)
            com.kwad.sdk.utils.az r2 = new com.kwad.sdk.utils.az
            r2.<init>(r0, r1)
            r3.uk = r2
            android.content.Context r0 = r3.getContext()
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_image_player_sweep_wave_width_end
            int r0 = r0.getDimensionPixelSize(r1)
            android.content.Context r1 = r3.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_image_player_sweep_wave_height_end
            int r1 = r1.getDimensionPixelSize(r2)
            com.kwad.sdk.utils.az r2 = new com.kwad.sdk.utils.az
            r2.<init>(r0, r1)
            r3.ul = r2
            return
    }

    private android.view.View hZ() {
            r2 = this;
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            r1 = 0
            r0.setClickable(r1)
            r0.setFocusable(r1)
            r0.setFocusableInTouchMode(r1)
            r0.setLongClickable(r1)
            java.lang.String r1 = "#222222"
            int r1 = android.graphics.Color.parseColor(r1)
            r0.setBackgroundColor(r1)
            r1 = 1045220557(0x3e4ccccd, float:0.2)
            r0.setAlpha(r1)
            return r0
    }

    static android.view.View i(com.kwad.components.ad.reward.presenter.platdetail.b r0) {
            android.view.View r0 = r0.uc
            return r0
    }

    private void ia() {
            r4 = this;
            android.view.View r0 = r4.tZ
            r1 = 1600(0x640, double:7.905E-321)
            android.animation.Animator r0 = r4.a(r0, r1)
            r4.uf = r0
            android.view.View r0 = r4.ub
            android.view.View r3 = r4.uc
            android.animation.Animator r0 = r4.a(r0, r3)
            r4.ug = r0
            android.view.View r0 = r4.tZ
            android.animation.Animator r0 = r4.b(r0, r1)
            r4.uh = r0
            android.animation.Animator r0 = r4.uf
            com.kwad.components.ad.reward.presenter.platdetail.b$2 r1 = new com.kwad.components.ad.reward.presenter.platdetail.b$2
            r1.<init>(r4)
            r0.addListener(r1)
            android.animation.Animator r0 = r4.ug
            com.kwad.components.ad.reward.presenter.platdetail.b$3 r1 = new com.kwad.components.ad.reward.presenter.platdetail.b$3
            r1.<init>(r4)
            r0.addListener(r1)
            android.animation.Animator r0 = r4.uh
            com.kwad.components.ad.reward.presenter.platdetail.b$4 r1 = new com.kwad.components.ad.reward.presenter.platdetail.b$4
            r1.<init>(r4)
            r0.addListener(r1)
            android.animation.Animator r0 = r4.uf
            r4.a(r0)
            return
    }

    private android.animation.Animator o(android.view.View r10) {
            r9 = this;
            android.content.Context r0 = r9.getContext()
            int r0 = com.kwad.sdk.d.a.a.getScreenHeight(r0)
            com.kwad.sdk.utils.az r1 = r9.ul
            int r1 = r1.getHeight()
            com.kwad.sdk.utils.az r2 = r9.uk
            int r2 = r2.getHeight()
            int r1 = r1 + r2
            r2 = 2
            int r1 = r1 / r2
            r3 = 1
            float[] r4 = new float[r3]
            int r0 = r0 + r1
            int r0 = -r0
            float r0 = (float) r0
            r1 = 0
            r4[r1] = r0
            java.lang.String r0 = "translationY"
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r10, r0, r4)
            com.kwad.sdk.utils.az r4 = r9.ul
            float r4 = r4.Ju()
            com.kwad.sdk.utils.az r5 = r9.uk
            float r5 = r5.Ju()
            float r4 = r4 / r5
            com.kwad.sdk.utils.az r5 = r9.ul
            float r5 = r5.Jv()
            com.kwad.sdk.utils.az r6 = r9.uk
            float r6 = r6.Jv()
            float r5 = r5 / r6
            float[] r6 = new float[r2]
            r7 = 1065353216(0x3f800000, float:1.0)
            r6[r1] = r7
            r6[r3] = r4
            java.lang.String r4 = "scaleX"
            android.animation.ObjectAnimator r4 = android.animation.ObjectAnimator.ofFloat(r10, r4, r6)
            float[] r6 = new float[r2]
            r6[r1] = r7
            r6[r3] = r5
            java.lang.String r5 = "scaleY"
            android.animation.ObjectAnimator r5 = android.animation.ObjectAnimator.ofFloat(r10, r5, r6)
            float[] r6 = new float[r2]
            r6 = {x0084: FILL_ARRAY_DATA , data: [1065353216, 1061997773} // fill-array
            java.lang.String r7 = "alpha"
            android.animation.ObjectAnimator r10 = android.animation.ObjectAnimator.ofFloat(r10, r7, r6)
            android.animation.AnimatorSet r6 = new android.animation.AnimatorSet
            r6.<init>()
            r7 = 3000(0xbb8, double:1.482E-320)
            r6.setDuration(r7)
            r7 = 4
            android.animation.Animator[] r7 = new android.animation.Animator[r7]
            r7[r1] = r4
            r7[r3] = r5
            r7[r2] = r0
            r0 = 3
            r7[r0] = r10
            r6.playTogether(r7)
            android.view.animation.Interpolator r10 = r9.um
            r6.setInterpolator(r10)
            return r6
    }

    private static void p(android.view.View r1) {
            if (r1 == 0) goto L16
            android.view.ViewParent r0 = r1.getParent()     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L16
            android.view.ViewParent r0 = r1.getParent()     // Catch: java.lang.Throwable -> L12
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> L12
            r0.removeView(r1)     // Catch: java.lang.Throwable -> L12
            goto L16
        L12:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
        L16:
            return
    }

    @Override
    public final void ah() {
            r4 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r4.mVideoPlayStateListener
            r0.a(r1)
            r4.hY()
            int r0 = com.kwad.sdk.R.id.ksad_reward_play_layout
            android.view.View r0 = r4.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            com.kwad.components.ad.reward.j r1 = r4.qx
            com.kwad.components.ad.reward.l.d r1 = r1.oV
            com.kwad.components.ad.reward.l.a r1 = r1.jT()
            android.content.Context r2 = r4.getContext()
            android.widget.FrameLayout r1 = r1.Q(r2)
            r4.tZ = r1
            r2 = -1
            r0.addView(r1, r2, r2)
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -2
            r0.<init>(r2, r1)
            r1 = 81
            r0.gravity = r1
            com.kwad.sdk.utils.az r1 = r4.uk
            int r1 = r1.getHeight()
            int r1 = -r1
            r0.bottomMargin = r1
            int r1 = com.kwad.sdk.R.id.ksad_root_container
            android.view.View r1 = r4.findViewById(r1)
            android.widget.FrameLayout r1 = (android.widget.FrameLayout) r1
            android.view.View r3 = r4.hZ()
            r4.ua = r3
            r1.addView(r3, r2, r2)
            int r2 = com.kwad.sdk.R.drawable.ksad_image_player_sweep1
            android.view.View r2 = r4.a(r2, r1)
            r4.ub = r2
            r1.addView(r2, r0)
            int r2 = com.kwad.sdk.R.drawable.ksad_image_player_sweep2
            android.view.View r2 = r4.a(r2, r1)
            r4.uc = r2
            r1.addView(r2, r0)
            return
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            super.onDestroy()
            r0 = 0
            r1.tZ = r0
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.ad.reward.l.a r0 = r0.jT()
            if (r0 == 0) goto L13
            r0.release()
        L13:
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            android.animation.Animator r0 = r2.ug
            if (r0 == 0) goto La
            r0.cancel()
        La:
            android.animation.Animator r0 = r2.uf
            if (r0 == 0) goto L11
            r0.cancel()
        L11:
            android.animation.Animator r0 = r2.uh
            if (r0 == 0) goto L18
            r0.cancel()
        L18:
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            return
    }
}
