package com.kwad.components.ad.draw;

public final class b extends com.kwad.sdk.widget.KSFrameLayout {
    private com.kwad.sdk.api.KsDrawAd.AdInteractionListener bD;
    private com.kwad.components.ad.draw.a.b bE;
    private com.kwad.components.ad.draw.c.a bF;
    private com.kwad.components.core.widget.a.b bG;
    private boolean bH;
    private android.widget.ImageView bI;
    private com.kwad.sdk.core.h.b bJ;
    private android.view.View.OnClickListener bK;
    private com.kwad.components.core.video.k bL;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private android.content.Context mContext;
    private com.kwad.components.core.video.DetailVideoView mDetailVideoView;
    private com.kwad.sdk.mvp.Presenter mPresenter;
    private com.kwad.sdk.core.view.AdBaseFrameLayout mRootContainer;



    public b(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            com.kwad.components.ad.draw.b$1 r0 = new com.kwad.components.ad.draw.b$1
            r0.<init>(r1)
            r1.bK = r0
            com.kwad.components.ad.draw.b$2 r0 = new com.kwad.components.ad.draw.b$2
            r0.<init>(r1)
            r1.bL = r0
            r1.mContext = r2
            r1.initView()
            return
    }

    private void Z() {
            r2 = this;
            com.kwad.components.ad.draw.c.a r0 = r2.bF
            boolean r1 = r2.bH
            r1 = r1 ^ 1
            r0.f(r1)
            boolean r0 = r2.bH
            if (r0 != 0) goto L13
            com.kwad.components.ad.draw.c.a r0 = r2.bF
            r0.pause()
            goto L18
        L13:
            com.kwad.components.ad.draw.c.a r0 = r2.bF
            r0.resume()
        L18:
            boolean r0 = r2.bH
            r0 = r0 ^ 1
            r2.bH = r0
            return
    }

    static com.kwad.components.ad.draw.a.b a(com.kwad.components.ad.draw.b r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    private com.kwad.components.ad.draw.a.b ac() {
            r3 = this;
            com.kwad.components.ad.draw.a.b r0 = new com.kwad.components.ad.draw.a.b
            r0.<init>()
            com.kwad.sdk.api.KsDrawAd$AdInteractionListener r1 = r3.bD
            r0.bD = r1
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r3.mRootContainer
            r0.mRootContainer = r1
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            r0.mAdTemplate = r1
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
            boolean r1 = com.kwad.sdk.core.response.b.a.ax(r1)
            if (r1 == 0) goto L22
            com.kwad.components.core.e.d.c r1 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r2 = r3.mAdTemplate
            r1.<init>(r2)
            r0.mApkDownloadHelper = r1
        L22:
            com.kwad.components.ad.draw.c.a r1 = r3.bF
            r0.bF = r1
            com.kwad.components.ad.draw.b.b.a r1 = new com.kwad.components.ad.draw.b.b.a
            com.kwad.sdk.core.response.model.AdTemplate r2 = r3.mAdTemplate
            r1.<init>(r2)
            r0.bX = r1
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            boolean r1 = com.kwad.sdk.core.response.b.b.bk(r1)
            if (r1 == 0) goto L3e
            com.kwad.components.ad.k.b r1 = new com.kwad.components.ad.k.b
            r1.<init>()
            r0.bY = r1
        L3e:
            return r0
    }

    private com.kwad.sdk.mvp.Presenter ad() {
            r2 = this;
            com.kwad.sdk.mvp.Presenter r0 = new com.kwad.sdk.mvp.Presenter
            r0.<init>()
            com.kwad.components.ad.draw.b.a.a r1 = new com.kwad.components.ad.draw.b.a.a
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.draw.b.b r1 = new com.kwad.components.ad.draw.b.b
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.draw.b.d r1 = new com.kwad.components.ad.draw.b.d
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.draw.b.c r1 = new com.kwad.components.ad.draw.b.c
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.draw.b.b.b r1 = new com.kwad.components.ad.draw.b.b.b
            r1.<init>()
            r0.a(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            boolean r1 = com.kwad.sdk.core.response.b.b.aX(r1)
            if (r1 == 0) goto L3d
            com.kwad.components.ad.draw.b.b.c r1 = new com.kwad.components.ad.draw.b.b.c
            r1.<init>()
            r0.a(r1)
        L3d:
            com.kwad.components.ad.draw.b.c.a r1 = new com.kwad.components.ad.draw.b.c.a
            r1.<init>()
            r0.a(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            boolean r1 = com.kwad.sdk.core.response.b.b.bk(r1)
            if (r1 == 0) goto L55
            com.kwad.components.ad.draw.b.c.b r1 = new com.kwad.components.ad.draw.b.c.b
            r1.<init>()
            r0.a(r1)
        L55:
            com.kwad.sdk.core.response.model.AdInfo r1 = r2.mAdInfo
            boolean r1 = com.kwad.sdk.core.response.b.a.aH(r1)
            if (r1 == 0) goto L65
            com.kwad.components.ad.draw.b.a r1 = new com.kwad.components.ad.draw.b.a
            r1.<init>()
            r0.a(r1)
        L65:
            return r0
    }

    static void b(com.kwad.components.ad.draw.b r0) {
            r0.Z()
            return
    }

    static android.widget.ImageView c(com.kwad.components.ad.draw.b r0) {
            android.widget.ImageView r0 = r0.bI
            return r0
    }

    private void initView() {
            r3 = this;
            android.content.Context r0 = r3.mContext
            int r1 = com.kwad.sdk.R.layout.ksad_draw_layout
            com.kwad.sdk.m.l.inflate(r0, r1, r3)
            int r0 = com.kwad.sdk.R.id.ksad_root_container
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = (com.kwad.sdk.core.view.AdBaseFrameLayout) r0
            r3.mRootContainer = r0
            int r1 = com.kwad.sdk.R.id.ksad_video_control_button
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.bI = r0
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r3.mRootContainer
            int r1 = com.kwad.sdk.R.id.ksad_video_player
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.core.video.DetailVideoView r0 = (com.kwad.components.core.video.DetailVideoView) r0
            r3.mDetailVideoView = r0
            int r1 = com.kwad.sdk.core.config.d.zX()
            r2 = 1
            r0.f(r2, r1)
            com.kwad.components.core.video.DetailVideoView r0 = r3.mDetailVideoView
            android.view.View$OnClickListener r1 = r3.bK
            r0.setOnClickListener(r1)
            android.widget.ImageView r0 = r3.bI
            android.view.View$OnClickListener r1 = r3.bK
            r0.setOnClickListener(r1)
            return
    }

    public final void a(com.kwad.sdk.core.response.model.AdTemplate r4) {
            r3 = this;
            r3.mAdTemplate = r4
            com.kwad.sdk.core.response.model.AdInfo r4 = com.kwad.sdk.core.response.b.d.cg(r4)
            r3.mAdInfo = r4
            com.kwad.components.core.widget.a.b r4 = new com.kwad.components.core.widget.a.b
            r0 = 70
            r4.<init>(r3, r0)
            r3.bG = r4
            com.kwad.components.ad.draw.c.a r0 = new com.kwad.components.ad.draw.c.a
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.components.core.video.DetailVideoView r2 = r3.mDetailVideoView
            r0.<init>(r1, r4, r2)
            r3.bF = r0
            return
    }

    @Override
    public final void aa() {
            r2 = this;
            super.aa()
            com.kwad.components.ad.draw.a.b r0 = r2.ac()
            r2.bE = r0
            com.kwad.sdk.mvp.Presenter r0 = r2.ad()
            r2.mPresenter = r0
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r2.mRootContainer
            r0.F(r1)
            com.kwad.sdk.mvp.Presenter r0 = r2.mPresenter
            com.kwad.components.ad.draw.a.b r1 = r2.bE
            r0.k(r1)
            com.kwad.components.core.widget.a.b r0 = r2.bG
            com.kwad.sdk.core.h.b r1 = r2.bJ
            r0.a(r1)
            com.kwad.components.core.widget.a.b r0 = r2.bG
            r0.sy()
            com.kwad.components.ad.draw.c.a r0 = r2.bF
            r0.aH()
            com.kwad.components.ad.draw.c.a r0 = r2.bF
            com.kwad.components.core.video.k r1 = r2.bL
            r0.a(r1)
            return
    }

    @Override
    public final void ab() {
            r2 = this;
            super.ab()
            com.kwad.components.core.widget.a.b r0 = r2.bG
            if (r0 == 0) goto La
            r0.release()
        La:
            com.kwad.components.ad.draw.c.a r0 = r2.bF
            if (r0 == 0) goto L18
            r0.aI()
            com.kwad.components.ad.draw.c.a r0 = r2.bF
            com.kwad.components.core.video.k r1 = r2.bL
            r0.b(r1)
        L18:
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            if (r0 == 0) goto L1f
            r0.release()
        L1f:
            com.kwad.sdk.mvp.Presenter r0 = r2.mPresenter
            if (r0 == 0) goto L26
            r0.destroy()
        L26:
            return
    }

    public final void setAdInteractionListener(com.kwad.sdk.api.KsDrawAd.AdInteractionListener r1) {
            r0 = this;
            r0.bD = r1
            return
    }

    public final void setPageExitListener(com.kwad.sdk.core.h.b r1) {
            r0 = this;
            r0.bJ = r1
            return
    }
}
