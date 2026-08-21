package com.kwad.components.ad.interstitial.aggregate;

public final class b extends com.kwad.components.ad.interstitial.f.a {
    private com.kwad.components.core.widget.a.b bG;
    private final com.kwad.sdk.core.h.c cV;
    private boolean hH;
    private com.kwad.components.ad.interstitial.aggregate.TransViewPager hL;
    private com.kwad.components.ad.interstitial.aggregate.a hM;
    private com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator hN;
    private com.kwad.components.ad.interstitial.aggregate.SlideTipsView hO;
    private com.kwad.components.ad.interstitial.aggregate.SlideTipsView hP;
    private android.animation.ValueAnimator hQ;
    private boolean hR;
    private com.kwad.components.ad.interstitial.aggregate.InterstitialAggregateManualTipsView hS;
    private boolean hT;
    private boolean hU;
    private final android.support.v4.view.ViewPager.OnPageChangeListener hV;
    protected com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener hz;
    protected com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    protected com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private final java.util.List<com.kwad.sdk.core.response.model.AdTemplate> mAdTemplateList;
    private final android.view.View mRootView;












    public b(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    private b(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r2 = 0
            r0.<init>(r1, r2)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r0.mAdTemplateList = r2
            com.kwad.components.ad.interstitial.aggregate.b$2 r2 = new com.kwad.components.ad.interstitial.aggregate.b$2
            r2.<init>(r0)
            r0.cV = r2
            com.kwad.components.ad.interstitial.aggregate.b$3 r2 = new com.kwad.components.ad.interstitial.aggregate.b$3
            r2.<init>(r0)
            r0.hV = r2
            r0.mContext = r1
            int r2 = com.kwad.sdk.R.layout.ksad_interstitial_multi_ad
            android.view.View r1 = com.kwad.sdk.m.l.inflate(r1, r2, r0)
            r0.mRootView = r1
            r0.initView()
            return
    }

    static android.view.animation.AnimationSet a(com.kwad.components.ad.interstitial.aggregate.b r0, float r1, float r2) {
            android.view.animation.AnimationSet r0 = b(r1, r2)
            return r0
    }

    static com.kwad.components.ad.interstitial.aggregate.TransViewPager a(com.kwad.components.ad.interstitial.aggregate.b r0) {
            com.kwad.components.ad.interstitial.aggregate.TransViewPager r0 = r0.hL
            return r0
    }

    static boolean a(com.kwad.components.ad.interstitial.aggregate.b r0, boolean r1) {
            r1 = 1
            r0.hU = r1
            return r1
    }

    private static android.view.animation.AnimationSet b(float r10, float r11) {
            android.view.animation.TranslateAnimation r9 = new android.view.animation.TranslateAnimation
            r1 = 1
            r3 = 1
            r5 = 1
            r6 = 0
            r7 = 1
            r8 = 0
            r0 = r9
            r2 = r10
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            android.view.animation.AlphaAnimation r10 = new android.view.animation.AlphaAnimation
            r11 = 0
            r0 = 1061997773(0x3f4ccccd, float:0.8)
            r10.<init>(r11, r0)
            android.view.animation.AnimationSet r11 = new android.view.animation.AnimationSet
            r0 = 1
            r11.<init>(r0)
            r11.addAnimation(r9)
            r11.addAnimation(r10)
            r1 = 800(0x320, double:3.953E-321)
            r11.setDuration(r1)
            r11.setFillAfter(r0)
            return r11
    }

    static boolean b(com.kwad.components.ad.interstitial.aggregate.b r0) {
            boolean r0 = r0.hU
            return r0
    }

    static boolean b(com.kwad.components.ad.interstitial.aggregate.b r0, boolean r1) {
            r0.hR = r1
            return r1
    }

    static android.animation.ValueAnimator c(com.kwad.components.ad.interstitial.aggregate.b r0) {
            android.animation.ValueAnimator r0 = r0.hQ
            return r0
    }

    private void cm() {
            r5 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.mAdScene
            if (r0 == 0) goto L1c
            com.kwad.components.ad.interstitial.aggregate.c r0 = com.kwad.components.ad.interstitial.aggregate.c.ct()
            r1 = 16
            int r2 = com.kwad.components.ad.interstitial.a.b.cF()
            com.kwad.sdk.core.response.model.AdTemplate r3 = r5.mAdTemplate
            com.kwad.sdk.internal.api.SceneImpl r3 = r3.mAdScene
            com.kwad.components.ad.interstitial.aggregate.b$6 r4 = new com.kwad.components.ad.interstitial.aggregate.b$6
            r4.<init>(r5)
            r0.a(r1, r2, r3, r4)
        L1c:
            return
    }

    private void cp() {
            r2 = this;
            com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator r0 = r2.hN
            com.kwad.components.ad.interstitial.aggregate.b$7 r1 = new com.kwad.components.ad.interstitial.aggregate.b$7
            r1.<init>(r2)
            r0.setPlayProgressListener(r1)
            return
    }

    private void cq() {
            r3 = this;
            boolean r0 = r3.hT
            if (r0 == 0) goto Ld
            com.kwad.components.ad.interstitial.aggregate.InterstitialAggregateManualTipsView r0 = r3.hS
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.components.ad.interstitial.aggregate.TransViewPager r2 = r3.hL
            r0.a(r1, r2)
        Ld:
            r0 = 3
            int[] r0 = new int[r0]
            r0 = {x0038: FILL_ARRAY_DATA , data: [0, 120, 0} // fill-array
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofInt(r0)
            r3.hQ = r0
            r1 = 1200(0x4b0, double:5.93E-321)
            r0.setDuration(r1)
            android.animation.ValueAnimator r0 = r3.hQ
            com.kwad.components.ad.interstitial.aggregate.b$8 r1 = new com.kwad.components.ad.interstitial.aggregate.b$8
            r1.<init>(r3)
            r0.addUpdateListener(r1)
            android.animation.ValueAnimator r0 = r3.hQ
            com.kwad.components.ad.interstitial.aggregate.b$9 r1 = new com.kwad.components.ad.interstitial.aggregate.b$9
            r1.<init>(r3)
            r0.addListener(r1)
            android.animation.ValueAnimator r0 = r3.hQ
            r0.start()
            return
    }

    private void cr() {
            r3 = this;
            r0 = 2
            int[] r0 = new int[r0]
            r1 = 0
            r0[r1] = r1
            int r1 = r3.getWidth()
            r2 = 1
            r0[r2] = r1
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofInt(r0)
            r3.hQ = r0
            r1 = 800(0x320, double:3.953E-321)
            r0.setDuration(r1)
            android.animation.ValueAnimator r0 = r3.hQ
            com.kwad.components.ad.interstitial.aggregate.b$10 r1 = new com.kwad.components.ad.interstitial.aggregate.b$10
            r1.<init>(r3)
            r0.addUpdateListener(r1)
            android.animation.ValueAnimator r0 = r3.hQ
            com.kwad.components.ad.interstitial.aggregate.b$11 r1 = new com.kwad.components.ad.interstitial.aggregate.b$11
            r1.<init>(r3)
            r0.addListener(r1)
            android.animation.ValueAnimator r0 = r3.hQ
            r0.start()
            return
    }

    static com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator d(com.kwad.components.ad.interstitial.aggregate.b r0) {
            com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator r0 = r0.hN
            return r0
    }

    static void e(com.kwad.components.ad.interstitial.aggregate.b r0) {
            r0.cm()
            return
    }

    static java.util.List f(com.kwad.components.ad.interstitial.aggregate.b r0) {
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r0.mAdTemplateList
            return r0
    }

    static com.kwad.components.ad.interstitial.aggregate.a g(com.kwad.components.ad.interstitial.aggregate.b r0) {
            com.kwad.components.ad.interstitial.aggregate.a r0 = r0.hM
            return r0
    }

    static android.support.v4.view.ViewPager.OnPageChangeListener h(com.kwad.components.ad.interstitial.aggregate.b r0) {
            android.support.v4.view.ViewPager$OnPageChangeListener r0 = r0.hV
            return r0
    }

    static void i(com.kwad.components.ad.interstitial.aggregate.b r0) {
            r0.cp()
            return
    }

    private void initView() {
            r3 = this;
            android.view.View r0 = r3.mRootView
            int r1 = com.kwad.sdk.R.id.ksad_multi_ad_container
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.ad.interstitial.aggregate.TransViewPager r0 = (com.kwad.components.ad.interstitial.aggregate.TransViewPager) r0
            r3.hL = r0
            android.view.View r0 = r3.mRootView
            int r1 = com.kwad.sdk.R.id.ksad_multi_ad_indicator
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator r0 = (com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator) r0
            r3.hN = r0
            android.view.View r0 = r3.mRootView
            int r1 = com.kwad.sdk.R.id.ksad_left_slide
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.ad.interstitial.aggregate.SlideTipsView r0 = (com.kwad.components.ad.interstitial.aggregate.SlideTipsView) r0
            r3.hO = r0
            android.view.View r0 = r3.mRootView
            int r1 = com.kwad.sdk.R.id.ksad_right_slide
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.ad.interstitial.aggregate.SlideTipsView r0 = (com.kwad.components.ad.interstitial.aggregate.SlideTipsView) r0
            r3.hP = r0
            android.view.View r0 = r3.mRootView
            int r1 = com.kwad.sdk.R.id.ksad_manual_tips_view
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.ad.interstitial.aggregate.InterstitialAggregateManualTipsView r0 = (com.kwad.components.ad.interstitial.aggregate.InterstitialAggregateManualTipsView) r0
            r3.hS = r0
            com.kwad.components.core.widget.a.b r0 = new com.kwad.components.core.widget.a.b
            android.view.View r1 = r3.mRootView
            r2 = 100
            r0.<init>(r1, r2)
            r3.bG = r0
            return
    }

    static com.kwad.sdk.core.h.c j(com.kwad.components.ad.interstitial.aggregate.b r0) {
            com.kwad.sdk.core.h.c r0 = r0.cV
            return r0
    }

    static com.kwad.components.core.widget.a.b k(com.kwad.components.ad.interstitial.aggregate.b r0) {
            com.kwad.components.core.widget.a.b r0 = r0.bG
            return r0
    }

    static android.content.Context l(com.kwad.components.ad.interstitial.aggregate.b r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    static boolean m(com.kwad.components.ad.interstitial.aggregate.b r0) {
            boolean r0 = r0.hH
            return r0
    }

    static void n(com.kwad.components.ad.interstitial.aggregate.b r0) {
            r0.cr()
            return
    }

    static void o(com.kwad.components.ad.interstitial.aggregate.b r0) {
            r0.cq()
            return
    }

    static android.content.Context p(com.kwad.components.ad.interstitial.aggregate.b r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    static android.content.Context q(com.kwad.components.ad.interstitial.aggregate.b r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    static boolean r(com.kwad.components.ad.interstitial.aggregate.b r0) {
            boolean r0 = r0.hT
            return r0
    }

    static com.kwad.components.ad.interstitial.aggregate.InterstitialAggregateManualTipsView s(com.kwad.components.ad.interstitial.aggregate.b r0) {
            com.kwad.components.ad.interstitial.aggregate.InterstitialAggregateManualTipsView r0 = r0.hS
            return r0
    }

    static com.kwad.components.ad.interstitial.aggregate.SlideTipsView t(com.kwad.components.ad.interstitial.aggregate.b r0) {
            com.kwad.components.ad.interstitial.aggregate.SlideTipsView r0 = r0.hO
            return r0
    }

    static com.kwad.components.ad.interstitial.aggregate.SlideTipsView u(com.kwad.components.ad.interstitial.aggregate.b r0) {
            com.kwad.components.ad.interstitial.aggregate.SlideTipsView r0 = r0.hP
            return r0
    }

    static boolean v(com.kwad.components.ad.interstitial.aggregate.b r0) {
            boolean r0 = r0.hR
            return r0
    }

    @Override
    public final void a(com.kwad.sdk.core.response.model.AdTemplate r3, com.kwad.components.ad.interstitial.d r4, com.kwad.sdk.api.KsAdVideoPlayConfig r5, com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener r6) {
            r2 = this;
            r2.mAdTemplate = r3
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r3)
            r2.mAdInfo = r0
            int r0 = com.kwad.sdk.core.response.b.a.cd(r0)
            r1 = 1
            if (r0 != r1) goto L10
            goto L11
        L10:
            r1 = 0
        L11:
            r2.hH = r1
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r2.mAdTemplateList
            r0.clear()
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r2.mAdTemplateList
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.add(r1)
            r2.hz = r6
            com.kwad.components.ad.interstitial.aggregate.a r0 = new com.kwad.components.ad.interstitial.aggregate.a
            r0.<init>(r3, r4, r5, r6)
            r2.hM = r0
            com.kwad.components.ad.interstitial.aggregate.b$1 r3 = new com.kwad.components.ad.interstitial.aggregate.b$1
            r3.<init>(r2)
            r0.a(r3)
            com.kwad.components.ad.interstitial.aggregate.a r3 = r2.hM
            com.kwad.components.ad.interstitial.aggregate.b$4 r4 = new com.kwad.components.ad.interstitial.aggregate.b$4
            r4.<init>(r2)
            r3.a(r4)
            com.kwad.components.ad.interstitial.aggregate.TransViewPager r3 = r2.hL
            com.kwad.components.ad.interstitial.aggregate.a r4 = r2.hM
            r3.setAdapter(r4)
            com.kwad.components.ad.interstitial.aggregate.a r3 = r2.hM
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r4 = r2.mAdTemplateList
            r3.setAdTemplateList(r4)
            com.kwad.components.ad.interstitial.aggregate.a r3 = r2.hM
            r3.notifyDataSetChanged()
            com.kwad.components.core.widget.a.b r3 = r2.bG
            r3.sy()
            com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator r3 = r2.hN
            if (r3 != 0) goto L57
            return
        L57:
            android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r3 = (android.view.ViewGroup.MarginLayoutParams) r3
            if (r3 == 0) goto L82
            boolean r4 = com.kwad.sdk.utils.ai.IN()
            r2.hT = r4
            android.content.Context r4 = r2.mContext
            boolean r5 = r2.hT
            if (r5 == 0) goto L75
            boolean r5 = r2.hH
            if (r5 == 0) goto L72
            r5 = 12
            goto L73
        L72:
            r5 = 4
        L73:
            float r5 = (float) r5
            goto L77
        L75:
            r5 = 1086324736(0x40c00000, float:6.0)
        L77:
            int r4 = com.kwad.sdk.d.a.a.a(r4, r5)
            r3.bottomMargin = r4
            com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator r4 = r2.hN
            r4.setLayoutParams(r3)
        L82:
            com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator r3 = r2.hN
            com.kwad.sdk.core.response.model.AdInfo r4 = r2.mAdInfo
            int r4 = com.kwad.sdk.core.response.b.a.ce(r4)
            r3.setFirstAdShowTime(r4)
            com.kwad.components.ad.interstitial.aggregate.b$5 r3 = new com.kwad.components.ad.interstitial.aggregate.b$5
            r3.<init>(r2)
            r2.post(r3)
            return
    }

    @Override
    public final void cn() {
            r0 = this;
            return
    }

    @Override
    public final void co() {
            r0 = this;
            return
    }

    @Override
    protected final void onDetachedFromWindow() {
            r2 = this;
            super.onDetachedFromWindow()
            com.kwad.components.core.widget.a.b r0 = r2.bG
            com.kwad.sdk.core.h.c r1 = r2.cV
            r0.b(r1)
            com.kwad.components.core.widget.a.b r0 = r2.bG
            r0.sz()
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r2.mAdTemplateList
            r0.clear()
            com.kwad.components.ad.interstitial.aggregate.TransViewPager r0 = r2.hL
            r0.clearOnPageChangeListeners()
            com.kwad.components.ad.interstitial.aggregate.c r0 = com.kwad.components.ad.interstitial.aggregate.c.ct()
            r0.release()
            return
    }

    @Override
    public final void setAdInteractionListener(com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener r1) {
            r0 = this;
            r0.hz = r1
            return
    }
}
