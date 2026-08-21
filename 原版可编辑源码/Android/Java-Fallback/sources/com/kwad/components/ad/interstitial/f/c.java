package com.kwad.components.ad.interstitial.f;

public final class c extends com.kwad.components.ad.interstitial.f.a {
    private com.kwad.sdk.api.KsAdVideoPlayConfig dJ;
    private com.kwad.components.core.webview.b.e.e gt;
    private com.kwad.components.ad.interstitial.d hG;
    protected com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener hz;
    protected com.kwad.components.ad.interstitial.d.c jf;
    private boolean jk;
    private com.kwad.components.ad.interstitial.d.c.a jl;
    private int ju;
    protected com.kwad.components.ad.interstitial.d.b lH;
    private boolean lI;
    protected android.view.ViewGroup lJ;
    protected com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    protected com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;


    public c(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    private c(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r2 = 0
            r0.<init>(r1, r2)
            r2 = -1
            r0.ju = r2
            com.kwad.components.ad.interstitial.f.c$1 r2 = new com.kwad.components.ad.interstitial.f.c$1
            r2.<init>(r0)
            r0.gt = r2
            int r2 = r0.getLayoutId()
            android.view.View r1 = com.kwad.sdk.m.l.inflate(r1, r2, r0)
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            r0.lJ = r1
            return
    }

    private com.kwad.components.ad.interstitial.f.f a(android.content.Context r4, com.kwad.sdk.core.response.model.AdInfo r5, com.kwad.components.ad.interstitial.d.c r6) {
            r3 = this;
            android.content.Context r0 = r3.mContext
            boolean r0 = com.kwad.components.ad.interstitial.d.c.a(r0, r5)
            com.kwad.components.ad.interstitial.f.f$a r1 = new com.kwad.components.ad.interstitial.f.f$a
            r1.<init>()
            r1.v(r0)
            boolean r6 = r6.M(r4)
            r0 = 1
            r2 = 0
            if (r6 != 0) goto L1e
            boolean r6 = com.kwad.components.ad.interstitial.a.b.cB()
            if (r6 == 0) goto L1e
            r6 = r0
            goto L1f
        L1e:
            r6 = r2
        L1f:
            r1.w(r6)
            int r6 = com.kwad.components.ad.interstitial.a.b.cC()
            r1.E(r6)
            boolean r5 = com.kwad.sdk.core.response.b.a.aO(r5)
            if (r5 == 0) goto L37
            boolean r5 = com.kwad.sdk.utils.ai.IN()
            if (r5 != 0) goto L36
            goto L37
        L36:
            r0 = r2
        L37:
            r1.x(r0)
            com.kwad.components.ad.interstitial.f.f r5 = new com.kwad.components.ad.interstitial.f.f
            r5.<init>(r4, r1)
            return r5
    }

    static boolean a(com.kwad.components.ad.interstitial.f.c r0, boolean r1) {
            r1 = 0
            r0.lI = r1
            return r1
    }

    private com.kwad.components.ad.interstitial.d.c eq() {
            r4 = this;
            com.kwad.components.ad.interstitial.d.c r0 = new com.kwad.components.ad.interstitial.d.c
            r0.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            r0.mAdTemplate = r1
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r1 = r4.hz
            r0.hz = r1
            com.kwad.components.ad.interstitial.d r1 = r4.hG
            r0.hG = r1
            com.kwad.components.core.e.d.c r1 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            r1.<init>(r2)
            r0.mApkDownloadHelper = r1
            com.kwad.sdk.api.KsAdVideoPlayConfig r1 = r4.dJ
            r0.dJ = r1
            com.kwad.sdk.core.video.videoview.a r1 = new com.kwad.sdk.core.video.videoview.a
            android.content.Context r2 = r4.mContext
            r1.<init>(r2)
            r0.ex = r1
            android.view.ViewGroup r1 = r4.lJ
            int r2 = com.kwad.sdk.R.id.ksad_container
            android.view.View r1 = r1.findViewById(r2)
            com.kwad.sdk.widget.KSFrameLayout r1 = (com.kwad.sdk.widget.KSFrameLayout) r1
            r0.jo = r1
            com.kwad.components.ad.interstitial.e.b r1 = new com.kwad.components.ad.interstitial.e.b
            com.kwad.sdk.widget.KSFrameLayout r2 = r0.jo
            r3 = 100
            r1.<init>(r2, r3)
            r0.hx = r1
            com.kwad.components.ad.interstitial.e.b r1 = r0.hx
            r1.sy()
            int r1 = r4.ju
            r0.ju = r1
            boolean r1 = r4.jk
            r0.jk = r1
            com.kwad.components.ad.interstitial.d.c$a r1 = r4.jl
            r0.jl = r1
            com.kwad.components.core.webview.b.e.e r1 = r4.gt
            r0.gt = r1
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            android.content.Context r2 = r4.mContext
            com.kwad.components.ad.interstitial.f.f r1 = r4.a(r2, r1, r0)
            r0.jg = r1
            return r0
    }

    @Override
    public final void a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.ad.interstitial.d r3, com.kwad.sdk.api.KsAdVideoPlayConfig r4, com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener r5) {
            r1 = this;
            r1.mAdTemplate = r2
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r2)
            r1.mAdInfo = r0
            r0 = 2
            r2.realShowType = r0
            r1.dJ = r4
            r1.hG = r3
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate
            boolean r2 = com.kwad.sdk.core.response.b.b.bA(r2)
            r1.lI = r2
            r1.hz = r5
            com.kwad.components.ad.interstitial.d.c r2 = r1.eq()
            r1.jf = r2
            com.kwad.components.ad.interstitial.d.b r2 = r1.lH
            if (r2 != 0) goto L29
            com.kwad.components.ad.interstitial.d.b r2 = r1.er()
            r1.lH = r2
        L29:
            com.kwad.components.ad.interstitial.d.b r2 = r1.lH
            android.view.ViewGroup r3 = r1.lJ
            r2.F(r3)
            com.kwad.components.ad.interstitial.d.b r2 = r1.lH
            com.kwad.components.ad.interstitial.d.c r3 = r1.jf
            r2.k(r3)
            return
    }

    @Override
    public final void cn() {
            r1 = this;
            com.kwad.components.ad.interstitial.d.b r0 = r1.lH
            if (r0 == 0) goto L7
            r0.cN()
        L7:
            return
    }

    @Override
    public final void co() {
            r1 = this;
            com.kwad.components.ad.interstitial.d.b r0 = r1.lH
            if (r0 == 0) goto L7
            r0.cO()
        L7:
            return
    }

    public final com.kwad.components.ad.interstitial.d.b er() {
            r3 = this;
            com.kwad.components.ad.interstitial.d.b r0 = new com.kwad.components.ad.interstitial.d.b
            r0.<init>()
            boolean r1 = r3.lI
            if (r1 == 0) goto L12
            com.kwad.components.ad.interstitial.d.a.b r1 = new com.kwad.components.ad.interstitial.d.a.b
            r1.<init>()
        Le:
            r0.a(r1)
            goto L5c
        L12:
            com.kwad.components.ad.interstitial.d.d r1 = new com.kwad.components.ad.interstitial.d.d
            r1.<init>()
            r0.a(r1)
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
            boolean r1 = com.kwad.sdk.core.response.b.a.aU(r1)
            if (r1 == 0) goto L2a
            com.kwad.components.ad.interstitial.d.j r1 = new com.kwad.components.ad.interstitial.d.j
            r1.<init>()
            r0.a(r1)
        L2a:
            com.kwad.components.ad.interstitial.d.k r1 = new com.kwad.components.ad.interstitial.d.k
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.interstitial.d.f r1 = new com.kwad.components.ad.interstitial.d.f
            r1.<init>()
            r0.a(r1)
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
            boolean r1 = com.kwad.sdk.core.response.b.a.aH(r1)
            if (r1 == 0) goto L4a
            com.kwad.components.ad.interstitial.d.a r1 = new com.kwad.components.ad.interstitial.d.a
            r1.<init>()
            r0.a(r1)
        L4a:
            com.kwad.components.ad.interstitial.d.c r1 = r3.jf
            android.content.Context r2 = r3.getContext()
            boolean r1 = r1.M(r2)
            if (r1 == 0) goto L5c
            com.kwad.components.ad.interstitial.d.g r1 = new com.kwad.components.ad.interstitial.d.g
            r1.<init>()
            goto Le
        L5c:
            return r0
    }

    public final void es() {
            r1 = this;
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            if (r0 == 0) goto Ld
            boolean r0 = r0.jt
            if (r0 == 0) goto Ld
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            r0.cQ()
        Ld:
            return
    }

    public final void et() {
            r2 = this;
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            if (r0 == 0) goto L11
            boolean r1 = r2.lI
            if (r1 != 0) goto Lc
            boolean r0 = r0.jt
            if (r0 == 0) goto L11
        Lc:
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            r0.cR()
        L11:
            return
    }

    public final void eu() {
            r2 = this;
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            if (r0 == 0) goto L22
            com.kwad.components.ad.interstitial.d.c$b r0 = new com.kwad.components.ad.interstitial.d.c$b
            android.content.Context r1 = r2.mContext
            r0.<init>(r1)
            r1 = 1
            com.kwad.components.ad.interstitial.d.c$b r0 = r0.k(r1)
            com.kwad.components.ad.interstitial.d.c$b r0 = r0.z(r1)
            com.kwad.components.ad.interstitial.d.c$b r0 = r0.m(r1)
            r1 = 2
            com.kwad.components.ad.interstitial.d.c$b r0 = r0.y(r1)
            com.kwad.components.ad.interstitial.d.c r1 = r2.jf
            r1.a(r0)
        L22:
            return
    }

    protected final int getLayoutId() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_interstitial
            return r0
    }

    @Override
    protected final void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            if (r0 == 0) goto La
            r0.release()
        La:
            com.kwad.components.ad.interstitial.d.b r0 = r1.lH
            if (r0 == 0) goto L11
            r0.destroy()
        L11:
            return
    }

    public final void setAdConvertListener(com.kwad.components.ad.interstitial.d.c.a r2) {
            r1 = this;
            r1.jl = r2
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            if (r0 == 0) goto L8
            r0.jl = r2
        L8:
            return
    }

    @Override
    public final void setAdInteractionListener(com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener r2) {
            r1 = this;
            r1.hz = r2
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            if (r0 == 0) goto L8
            r0.hz = r2
        L8:
            return
    }

    public final void setAggregateAdView(boolean r2) {
            r1 = this;
            r1.jk = r2
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            if (r0 == 0) goto L8
            r0.jk = r2
        L8:
            return
    }

    public final void setAggregateShowTriggerType(int r2) {
            r1 = this;
            r1.ju = r2
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            if (r0 == 0) goto L8
            r0.ju = r2
        L8:
            return
    }
}
