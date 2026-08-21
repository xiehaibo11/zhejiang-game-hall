package com.kwad.components.ad.interstitial.d;

public final class i extends com.kwad.components.ad.interstitial.d.b implements com.kwad.sdk.utils.bn.a {
    private com.kwad.sdk.utils.bn gx;
    private com.kwad.components.ad.interstitial.d.c.a jl;
    private com.kwad.sdk.widget.KSFrameLayout jo;
    private android.animation.ObjectAnimator kA;
    private android.animation.ObjectAnimator kB;
    private android.animation.ObjectAnimator kC;
    private int kD;
    private java.lang.Runnable kE;
    private com.kwad.sdk.widget.swipe.VerticalSwipeLayout kW;
    private com.kwad.sdk.widget.swipe.VerticalSwipeLayout.a kX;
    private android.view.View ko;
    private android.view.View kp;
    private android.view.View kq;
    private android.view.View kr;
    private android.view.View ks;
    private android.view.View kt;
    private android.view.View ku;
    private android.animation.AnimatorSet kw;
    private android.animation.ObjectAnimator kx;
    private android.animation.ObjectAnimator ky;
    private android.animation.ObjectAnimator kz;
    protected com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    protected android.content.Context mContext;
    private com.kwad.components.core.page.a.a mLandPageViewListener;
    private com.kwad.components.core.page.c mLandingPageView;
    private java.lang.String mPageUrl;
    private com.kwad.sdk.core.webview.d.a.b mWebCardCloseListener;



    final class 3 implements java.lang.Runnable {
        final com.kwad.components.ad.interstitial.d.i kY;


        3(com.kwad.components.ad.interstitial.d.i r1) {
                r0 = this;
                r0.kY = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.kwad.components.ad.interstitial.d.i r0 = r2.kY
                com.kwad.components.ad.interstitial.d.i$3$1 r1 = new com.kwad.components.ad.interstitial.d.i$3$1
                r1.<init>(r2)
                com.kwad.components.ad.interstitial.d.i.b(r0, r1)
                return
        }
    }






    public i() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.interstitial.d.i$1 r0 = new com.kwad.components.ad.interstitial.d.i$1
            r0.<init>(r1)
            r1.jl = r0
            com.kwad.components.ad.interstitial.d.i$3 r0 = new com.kwad.components.ad.interstitial.d.i$3
            r0.<init>(r1)
            r1.kE = r0
            com.kwad.components.ad.interstitial.d.i$4 r0 = new com.kwad.components.ad.interstitial.d.i$4
            r0.<init>(r1)
            r1.kX = r0
            com.kwad.components.ad.interstitial.d.i$5 r0 = new com.kwad.components.ad.interstitial.d.i$5
            r0.<init>(r1)
            r1.mWebCardCloseListener = r0
            com.kwad.components.ad.interstitial.d.i$6 r0 = new com.kwad.components.ad.interstitial.d.i$6
            r0.<init>(r1)
            r1.mLandPageViewListener = r0
            return
    }

    static com.kwad.sdk.widget.KSFrameLayout a(com.kwad.components.ad.interstitial.d.i r0) {
            com.kwad.sdk.widget.KSFrameLayout r0 = r0.jo
            return r0
    }

    private void a(android.animation.Animator.AnimatorListener r12) {
            r11 = this;
            android.animation.ObjectAnimator r0 = r11.kA
            if (r0 == 0) goto L14
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L14
            android.animation.ObjectAnimator r0 = r11.kA
            r0.cancel()
            android.animation.ObjectAnimator r0 = r11.kA
            r0.removeAllListeners()
        L14:
            android.animation.ObjectAnimator r0 = r11.kB
            if (r0 == 0) goto L23
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L23
            android.animation.ObjectAnimator r0 = r11.kB
            r0.cancel()
        L23:
            android.animation.ObjectAnimator r0 = r11.kC
            if (r0 == 0) goto L32
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L32
            android.animation.ObjectAnimator r0 = r11.kC
            r0.cancel()
        L32:
            com.kwad.sdk.widget.KSFrameLayout r0 = r11.jo
            android.util.Property r1 = android.view.View.TRANSLATION_Y
            java.lang.String r1 = r1.getName()
            r2 = 3
            float[] r3 = new float[r2]
            android.content.Context r4 = r11.mContext
            int r4 = com.kwad.sdk.d.a.a.aG(r4)
            android.content.Context r5 = r11.mContext
            r6 = 1119092736(0x42b40000, float:90.0)
            int r5 = com.kwad.sdk.d.a.a.a(r5, r6)
            int r4 = r4 - r5
            float r4 = (float) r4
            r5 = 0
            r3[r5] = r4
            android.content.Context r4 = r11.mContext
            int r4 = com.kwad.sdk.d.a.a.aG(r4)
            android.content.Context r7 = r11.mContext
            r8 = 1114636288(0x42700000, float:60.0)
            int r7 = com.kwad.sdk.d.a.a.a(r7, r8)
            int r4 = r4 - r7
            float r4 = (float) r4
            r7 = 1
            r3[r7] = r4
            android.content.Context r4 = r11.mContext
            int r4 = com.kwad.sdk.d.a.a.aG(r4)
            android.content.Context r8 = r11.mContext
            int r6 = com.kwad.sdk.d.a.a.a(r8, r6)
            int r4 = r4 - r6
            float r4 = (float) r4
            r6 = 2
            r3[r6] = r4
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r1, r3)
            r11.kA = r0
            r3 = 1200(0x4b0, double:5.93E-321)
            r0.setDuration(r3)
            android.animation.ObjectAnimator r0 = r11.kA
            r0.setRepeatMode(r7)
            android.animation.ObjectAnimator r0 = r11.kA
            r1 = -1
            r0.setRepeatCount(r1)
            android.animation.ObjectAnimator r0 = r11.kA
            r0.addListener(r12)
            android.animation.ObjectAnimator r12 = r11.kA
            r12.start()
            android.view.View r12 = r11.ko
            android.util.Property r0 = android.view.View.TRANSLATION_Y
            java.lang.String r0 = r0.getName()
            float[] r8 = new float[r2]
            android.content.Context r9 = r11.mContext
            r10 = 1134624768(0x43a10000, float:322.0)
            int r9 = com.kwad.sdk.d.a.a.a(r9, r10)
            float r9 = (float) r9
            r8[r5] = r9
            android.content.Context r5 = r11.mContext
            r9 = 1140457472(0x43fa0000, float:500.0)
            int r5 = com.kwad.sdk.d.a.a.a(r5, r9)
            float r5 = (float) r5
            r8[r7] = r5
            android.content.Context r5 = r11.mContext
            int r5 = com.kwad.sdk.d.a.a.a(r5, r10)
            float r5 = (float) r5
            r8[r6] = r5
            android.animation.ObjectAnimator r12 = android.animation.ObjectAnimator.ofFloat(r12, r0, r8)
            r11.kB = r12
            r12.setDuration(r3)
            android.animation.ObjectAnimator r12 = r11.kB
            r12.setRepeatMode(r7)
            android.animation.ObjectAnimator r12 = r11.kB
            r12.setRepeatCount(r1)
            android.animation.ObjectAnimator r12 = r11.kB
            r12.start()
            android.view.View r12 = r11.ko
            android.util.Property r0 = android.view.View.ALPHA
            java.lang.String r0 = r0.getName()
            float[] r2 = new float[r2]
            r2 = {x010a: FILL_ARRAY_DATA , data: [0, 1065353216, 0} // fill-array
            android.animation.ObjectAnimator r12 = android.animation.ObjectAnimator.ofFloat(r12, r0, r2)
            r11.kC = r12
            r12.setDuration(r3)
            android.animation.ObjectAnimator r12 = r11.kC
            r12.setRepeatMode(r7)
            android.animation.ObjectAnimator r12 = r11.kC
            r12.setRepeatCount(r1)
            android.animation.ObjectAnimator r12 = r11.kC
            r12.start()
            android.view.View r12 = r11.ko
            r0 = 4
            r12.setVisibility(r0)
            com.kwad.sdk.utils.bn r12 = r11.gx
            r0 = 6666(0x1a0a, float:9.341E-42)
            r1 = 600(0x258, double:2.964E-321)
            r12.sendEmptyMessageDelayed(r0, r1)
            return
    }

    static void a(com.kwad.components.ad.interstitial.d.i r0, android.animation.Animator.AnimatorListener r1) {
            r0.a(r1)
            return
    }

    private void b(android.animation.Animator.AnimatorListener r14) {
            r13 = this;
            android.animation.AnimatorSet r0 = r13.kw
            if (r0 == 0) goto L14
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L14
            android.animation.AnimatorSet r0 = r13.kw
            r0.removeAllListeners()
            android.animation.AnimatorSet r0 = r13.kw
            r0.cancel()
        L14:
            com.kwad.sdk.core.report.z$a r0 = new com.kwad.sdk.core.report.z$a
            r0.<init>()
            r1 = 7
            r0.asN = r1
            com.kwad.sdk.core.response.model.AdTemplate r1 = r13.mAdTemplate
            r2 = 0
            com.kwad.sdk.core.report.j r3 = new com.kwad.sdk.core.report.j
            r3.<init>()
            com.kwad.sdk.core.report.j r0 = r3.a(r0)
            r3 = 206(0xce, float:2.89E-43)
            com.kwad.sdk.core.report.j r0 = r0.ci(r3)
            com.kwad.sdk.core.report.a.d(r1, r2, r0)
            android.animation.AnimatorSet r0 = new android.animation.AnimatorSet
            r0.<init>()
            r13.kw = r0
            com.kwad.sdk.widget.KSFrameLayout r0 = r13.jo
            android.util.Property r1 = android.view.View.TRANSLATION_Y
            java.lang.String r1 = r1.getName()
            r2 = 2
            float[] r3 = new float[r2]
            android.content.Context r4 = r13.mContext
            int r4 = com.kwad.sdk.d.a.a.aG(r4)
            float r4 = (float) r4
            r5 = 0
            r3[r5] = r4
            android.content.Context r4 = r13.mContext
            int r4 = com.kwad.sdk.d.a.a.aG(r4)
            android.content.Context r6 = r13.mContext
            r7 = 1119092736(0x42b40000, float:90.0)
            int r6 = com.kwad.sdk.d.a.a.a(r6, r7)
            int r4 = r4 - r6
            float r4 = (float) r4
            r6 = 1
            r3[r6] = r4
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r1, r3)
            r3 = 300(0x12c, double:1.48E-321)
            r0.setDuration(r3)
            android.view.View r1 = r13.ko
            android.util.Property r7 = android.view.View.TRANSLATION_Y
            java.lang.String r7 = r7.getName()
            float[] r8 = new float[r2]
            android.content.Context r9 = r13.mContext
            r10 = 1140457472(0x43fa0000, float:500.0)
            int r9 = com.kwad.sdk.d.a.a.a(r9, r10)
            float r9 = (float) r9
            r8[r5] = r9
            android.content.Context r9 = r13.mContext
            r10 = 1134624768(0x43a10000, float:322.0)
            int r9 = com.kwad.sdk.d.a.a.a(r9, r10)
            float r9 = (float) r9
            r8[r6] = r9
            android.animation.ObjectAnimator r1 = android.animation.ObjectAnimator.ofFloat(r1, r7, r8)
            r1.setDuration(r3)
            android.view.View r7 = r13.ko
            android.util.Property r8 = android.view.View.ALPHA
            java.lang.String r8 = r8.getName()
            float[] r9 = new float[r2]
            r9 = {x0102: FILL_ARRAY_DATA , data: [1065353216, 0} // fill-array
            android.animation.ObjectAnimator r7 = android.animation.ObjectAnimator.ofFloat(r7, r8, r9)
            r7.setDuration(r3)
            android.view.View r8 = r13.kp
            android.util.Property r9 = android.view.View.TRANSLATION_Y
            java.lang.String r9 = r9.getName()
            float[] r10 = new float[r2]
            android.content.Context r11 = r13.mContext
            r12 = 1124859904(0x430c0000, float:140.0)
            int r11 = com.kwad.sdk.d.a.a.a(r11, r12)
            float r11 = (float) r11
            r10[r5] = r11
            android.content.Context r11 = r13.mContext
            r12 = 0
            int r11 = com.kwad.sdk.d.a.a.a(r11, r12)
            float r11 = (float) r11
            r10[r6] = r11
            android.animation.ObjectAnimator r8 = android.animation.ObjectAnimator.ofFloat(r8, r9, r10)
            r8.setDuration(r3)
            android.view.View r9 = r13.kp
            android.util.Property r10 = android.view.View.ALPHA
            java.lang.String r10 = r10.getName()
            float[] r11 = new float[r2]
            r11 = {x010a: FILL_ARRAY_DATA , data: [1065353216, 1065185444} // fill-array
            android.animation.ObjectAnimator r9 = android.animation.ObjectAnimator.ofFloat(r9, r10, r11)
            r9.setDuration(r3)
            android.animation.AnimatorSet r3 = r13.kw
            r4 = 5
            android.animation.Animator[] r4 = new android.animation.Animator[r4]
            r4[r5] = r0
            r4[r6] = r1
            r4[r2] = r7
            r0 = 3
            r4[r0] = r8
            r0 = 4
            r4[r0] = r9
            r3.playTogether(r4)
            android.animation.AnimatorSet r0 = r13.kw
            r0.removeAllListeners()
            android.animation.AnimatorSet r0 = r13.kw
            r0.addListener(r14)
            android.animation.AnimatorSet r14 = r13.kw
            r14.start()
            return
    }

    static void b(com.kwad.components.ad.interstitial.d.i r0) {
            r0.dx()
            return
    }

    static void b(com.kwad.components.ad.interstitial.d.i r0, android.animation.Animator.AnimatorListener r1) {
            r0.b(r1)
            return
    }

    static com.kwad.sdk.widget.swipe.VerticalSwipeLayout.a c(com.kwad.components.ad.interstitial.d.i r0) {
            com.kwad.sdk.widget.swipe.VerticalSwipeLayout$a r0 = r0.kX
            return r0
    }

    static com.kwad.sdk.widget.swipe.VerticalSwipeLayout d(com.kwad.components.ad.interstitial.d.i r0) {
            com.kwad.sdk.widget.swipe.VerticalSwipeLayout r0 = r0.kW
            return r0
    }

    private void dA() {
            r1 = this;
            android.animation.ObjectAnimator r0 = r1.kx
            if (r0 == 0) goto Lf
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto Lf
            android.animation.ObjectAnimator r0 = r1.kx
            r0.cancel()
        Lf:
            android.animation.ObjectAnimator r0 = r1.ky
            if (r0 == 0) goto L1e
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L1e
            android.animation.ObjectAnimator r0 = r1.ky
            r0.cancel()
        L1e:
            android.animation.ObjectAnimator r0 = r1.kz
            if (r0 == 0) goto L2d
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L2d
            android.animation.ObjectAnimator r0 = r1.kz
            r0.cancel()
        L2d:
            return
    }

    private void dB() {
            r8 = this;
            java.lang.String r0 = "InterstitialVerticalSwipe"
            java.lang.String r1 = "showGuideButton: "
            com.kwad.sdk.core.e.c.d(r0, r1)
            android.view.View r0 = r8.kq
            r1 = 0
            r0.setVisibility(r1)
            android.animation.ObjectAnimator r0 = r8.kx
            if (r0 == 0) goto L1c
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L1c
            android.animation.ObjectAnimator r0 = r8.kx
            r0.cancel()
        L1c:
            android.animation.ObjectAnimator r0 = r8.ky
            if (r0 == 0) goto L2b
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L2b
            android.animation.ObjectAnimator r0 = r8.ky
            r0.cancel()
        L2b:
            android.animation.ObjectAnimator r0 = r8.kz
            if (r0 == 0) goto L3a
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L3a
            android.animation.ObjectAnimator r0 = r8.kz
            r0.cancel()
        L3a:
            android.view.View r0 = r8.ku
            android.util.Property r1 = android.view.View.ALPHA
            java.lang.String r1 = r1.getName()
            r2 = 7
            float[] r3 = new float[r2]
            r3 = {x00b0: FILL_ARRAY_DATA , data: [0, 1065353216, 1058642330, 1050253722, 0, 1008981770, 0} // fill-array
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r1, r3)
            r8.kx = r0
            r3 = 600(0x258, double:2.964E-321)
            r0.setDuration(r3)
            android.animation.ObjectAnimator r0 = r8.kx
            r1 = 1
            r0.setRepeatMode(r1)
            android.animation.ObjectAnimator r0 = r8.kx
            r5 = -1
            r0.setRepeatCount(r5)
            android.animation.ObjectAnimator r0 = r8.kx
            r0.start()
            android.view.View r0 = r8.kt
            android.util.Property r6 = android.view.View.ALPHA
            java.lang.String r6 = r6.getName()
            float[] r7 = new float[r2]
            r7 = {x00c2: FILL_ARRAY_DATA , data: [0, 1008981770, 1065353216, 1058642330, 1050253722, 1008981770, 0} // fill-array
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r6, r7)
            r8.ky = r0
            r0.setDuration(r3)
            android.animation.ObjectAnimator r0 = r8.ky
            r0.setRepeatMode(r1)
            android.animation.ObjectAnimator r0 = r8.ky
            r0.setRepeatCount(r5)
            android.animation.ObjectAnimator r0 = r8.ky
            r0.start()
            android.view.View r0 = r8.ks
            android.util.Property r6 = android.view.View.ALPHA
            java.lang.String r6 = r6.getName()
            float[] r2 = new float[r2]
            r2 = {x00d4: FILL_ARRAY_DATA , data: [0, 1008981770, 0, 1065353216, 1058642330, 1050253722, 0} // fill-array
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r6, r2)
            r8.kz = r0
            r0.setDuration(r3)
            android.animation.ObjectAnimator r0 = r8.kz
            r0.setRepeatMode(r1)
            android.animation.ObjectAnimator r0 = r8.kz
            r0.setRepeatCount(r5)
            android.animation.ObjectAnimator r0 = r8.kz
            r0.start()
            return
    }

    private void dx() {
            r2 = this;
            android.view.View r0 = r2.ko
            java.lang.Runnable r1 = r2.kE
            r0.removeCallbacks(r1)
            r2.dz()
            r2.dA()
            r2.dy()
            com.kwad.sdk.widget.KSFrameLayout r0 = r2.jo
            r1 = 0
            r0.setTranslationY(r1)
            com.kwad.sdk.widget.KSFrameLayout r0 = r2.jo
            r1 = 0
            r0.setOnClickListener(r1)
            return
    }

    private void dy() {
            r3 = this;
            android.animation.ObjectAnimator r0 = r3.kA
            if (r0 == 0) goto L14
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L14
            android.animation.ObjectAnimator r0 = r3.kA
            r0.cancel()
            android.animation.ObjectAnimator r0 = r3.kA
            r0.removeAllListeners()
        L14:
            android.animation.ObjectAnimator r0 = r3.kB
            if (r0 == 0) goto L23
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L23
            android.animation.ObjectAnimator r0 = r3.kB
            r0.cancel()
        L23:
            android.animation.ObjectAnimator r0 = r3.kC
            if (r0 == 0) goto L32
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L32
            android.animation.ObjectAnimator r0 = r3.kC
            r0.cancel()
        L32:
            android.view.View r0 = r3.ko
            android.content.Context r1 = r3.mContext
            r2 = 1140457472(0x43fa0000, float:500.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            float r1 = (float) r1
            r0.setTranslationY(r1)
            android.view.View r0 = r3.kp
            android.content.Context r1 = r3.mContext
            r2 = 1124859904(0x430c0000, float:140.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            float r1 = (float) r1
            r0.setTranslationY(r1)
            android.view.View r0 = r3.ko
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.setAlpha(r1)
            android.view.View r0 = r3.kp
            r0.setAlpha(r1)
            com.kwad.sdk.utils.bn r0 = r3.gx
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            return
    }

    private void dz() {
            r1 = this;
            android.animation.AnimatorSet r0 = r1.kw
            if (r0 == 0) goto L14
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L14
            android.animation.AnimatorSet r0 = r1.kw
            r0.removeAllListeners()
            android.animation.AnimatorSet r0 = r1.kw
            r0.cancel()
        L14:
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate e(com.kwad.components.ad.interstitial.d.i r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.components.core.page.c f(com.kwad.components.ad.interstitial.d.i r0) {
            com.kwad.components.core.page.c r0 = r0.mLandingPageView
            return r0
    }

    static android.view.View g(com.kwad.components.ad.interstitial.d.i r0) {
            android.view.View r0 = r0.ko
            return r0
    }

    static android.view.View h(com.kwad.components.ad.interstitial.d.i r0) {
            android.view.View r0 = r0.kp
            return r0
    }

    static android.view.View i(com.kwad.components.ad.interstitial.d.i r0) {
            android.view.View r0 = r0.kq
            return r0
    }

    private void initContentView() {
            r4 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            java.lang.String r0 = com.kwad.sdk.core.response.b.b.bm(r0)
            r4.mPageUrl = r0
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r0 = new com.kwad.components.core.page.AdWebViewActivityProxy$a$a
            r0.<init>()
            java.lang.String r1 = r4.mPageUrl
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r0 = r0.ar(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r0 = r0.S(r1)
            com.kwad.components.core.page.AdWebViewActivityProxy$a r0 = r0.oA()
            android.content.Context r1 = r4.mContext
            com.kwad.components.core.page.c r0 = com.kwad.components.core.page.c.b(r1, r0)
            r4.mLandingPageView = r0
            com.kwad.sdk.widget.swipe.VerticalSwipeLayout r0 = r4.kW
            com.kwad.sdk.widget.swipe.VerticalSwipeLayout$a r1 = r4.kX
            r0.a(r1)
            com.kwad.components.core.page.c r0 = r4.mLandingPageView
            com.kwad.components.core.page.a.a r1 = r4.mLandPageViewListener
            r0.setLandPageViewListener(r1)
            com.kwad.components.core.page.c r0 = r4.mLandingPageView
            com.kwad.sdk.core.webview.d.a.b r1 = r4.mWebCardCloseListener
            r0.setWebCardCloseListener(r1)
            com.kwad.sdk.widget.KSFrameLayout r0 = r4.jo
            com.kwad.components.core.page.c r1 = r4.mLandingPageView
            r0.addView(r1)
            com.kwad.sdk.widget.KSFrameLayout r0 = r4.jo
            android.content.Context r1 = r4.mContext
            r2 = 1101004800(0x41a00000, float:20.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            float r1 = (float) r1
            r0.setRadius(r1)
            com.kwad.sdk.widget.KSFrameLayout r0 = r4.jo
            android.content.Context r1 = r4.mContext
            int r1 = com.kwad.sdk.d.a.a.aG(r1)
            float r1 = (float) r1
            r0.setTranslationY(r1)
            android.view.View r0 = r4.ko
            android.content.Context r1 = r4.mContext
            r2 = 1140457472(0x43fa0000, float:500.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            float r1 = (float) r1
            r0.setTranslationY(r1)
            android.view.View r0 = r4.kp
            android.content.Context r1 = r4.mContext
            r2 = 1124859904(0x430c0000, float:140.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            float r1 = (float) r1
            r0.setTranslationY(r1)
            android.view.View r0 = r4.kq
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.sdk.widget.KSFrameLayout r0 = r4.jo
            com.kwad.components.ad.interstitial.d.i$2 r1 = new com.kwad.components.ad.interstitial.d.i$2
            r1.<init>(r4)
            r0.setOnClickListener(r1)
            android.view.View r0 = r4.ko
            java.lang.Runnable r1 = r4.kE
            int r2 = r4.kD
            int r2 = r2 * 1000
            long r2 = (long) r2
            r0.postDelayed(r1, r2)
            return
    }

    static void j(com.kwad.components.ad.interstitial.d.i r0) {
            r0.dB()
            return
    }

    static android.view.View k(com.kwad.components.ad.interstitial.d.i r0) {
            android.view.View r0 = r0.kr
            return r0
    }

    @Override
    public final void a(android.os.Message r4) {
            r3 = this;
            int r4 = r4.what
            r0 = 6666(0x1a0a, float:9.341E-42)
            if (r4 != r0) goto L2f
            android.view.View r4 = r3.ko
            if (r4 == 0) goto L28
            int r4 = r4.getVisibility()
            if (r4 != 0) goto L19
            com.kwad.components.ad.interstitial.d.i$7 r4 = new com.kwad.components.ad.interstitial.d.i$7
            r4.<init>(r3)
        L15:
            com.kwad.sdk.utils.bj.runOnUiThread(r4)
            goto L28
        L19:
            android.view.View r4 = r3.ko
            int r4 = r4.getVisibility()
            r1 = 4
            if (r4 != r1) goto L28
            com.kwad.components.ad.interstitial.d.i$8 r4 = new com.kwad.components.ad.interstitial.d.i$8
            r4.<init>(r3)
            goto L15
        L28:
            com.kwad.sdk.utils.bn r4 = r3.gx
            r1 = 600(0x258, double:2.964E-321)
            r4.sendEmptyMessageDelayed(r0, r1)
        L2f:
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            java.lang.Object r0 = r2.Gk()
            com.kwad.components.ad.interstitial.d.c r0 = (com.kwad.components.ad.interstitial.d.c) r0
            r2.jf = r0
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r2.mAdTemplate = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r2.mAdInfo = r0
            android.content.Context r0 = r2.getContext()
            r2.mContext = r0
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            com.kwad.components.ad.interstitial.d.c$a r1 = r2.jl
            r0.a(r1)
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.ca(r0)
            r2.kD = r0
            com.kwad.sdk.utils.bn r0 = com.kwad.sdk.core.threads.a.a(r2)
            r2.gx = r0
            r2.initContentView()
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_land_page_root
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.sdk.widget.KSFrameLayout r0 = (com.kwad.sdk.widget.KSFrameLayout) r0
            r1.jo = r0
            int r0 = com.kwad.sdk.R.id.ksad_swipe
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.sdk.widget.swipe.VerticalSwipeLayout r0 = (com.kwad.sdk.widget.swipe.VerticalSwipeLayout) r0
            r1.kW = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_guide_bg
            android.view.View r0 = r1.findViewById(r0)
            r1.ko = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_guide_bg_bg
            android.view.View r0 = r1.findViewById(r0)
            r1.kp = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_guide_button_layout
            android.view.View r0 = r1.findViewById(r0)
            r1.kq = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_guide_button
            android.view.View r0 = r1.findViewById(r0)
            r1.kr = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_guide_button_img_1
            android.view.View r0 = r1.findViewById(r0)
            r1.ks = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_guide_button_img_2
            android.view.View r0 = r1.findViewById(r0)
            r1.kt = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_guide_button_img_3
            android.view.View r0 = r1.findViewById(r0)
            r1.ku = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.sdk.widget.KSFrameLayout r0 = r2.jo
            r0.removeAllViews()
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            com.kwad.components.ad.interstitial.d.c$a r1 = r2.jl
            r0.b(r1)
            r2.dx()
            com.kwad.sdk.utils.bn r0 = r2.gx
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            com.kwad.sdk.widget.swipe.VerticalSwipeLayout r0 = r2.kW
            com.kwad.sdk.widget.swipe.VerticalSwipeLayout$a r1 = r2.kX
            r0.b(r1)
            return
    }
}
