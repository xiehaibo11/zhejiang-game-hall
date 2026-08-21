package com.kwad.components.ad.f;

public final class f extends com.kwad.sdk.widget.KSFrameLayout {
    private com.kwad.components.core.widget.a.b bG;
    private com.kwad.sdk.widget.j ct;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private com.kwad.components.core.video.DetailVideoView mDetailVideoView;
    private com.kwad.components.ad.f.d.a mE;
    private com.kwad.sdk.mvp.Presenter mPresenter;
    private com.kwad.sdk.core.view.AdBasePvFrameLayout mQ;
    private com.kwad.components.ad.f.a.b mV;
    private com.kwad.components.ad.f.c.a mW;
    private com.kwad.sdk.api.KsAdVideoPlayConfig mX;
    private com.kwad.sdk.api.KsNativeAd.VideoPlayListener mz;


    public f(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    private f(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r3 = 0
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    private f(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r3 = 0
            r0.<init>(r1, r2, r3)
            com.kwad.components.ad.f.f$1 r2 = new com.kwad.components.ad.f.f$1
            r2.<init>(r0)
            r0.ct = r2
            r0.D(r1)
            return
    }

    private void D(android.content.Context r2) {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_native_video_layout
            com.kwad.sdk.m.l.inflate(r2, r0, r1)
            int r2 = com.kwad.sdk.R.id.ksad_root_container
            android.view.View r2 = r1.findViewById(r2)
            com.kwad.sdk.core.view.AdBasePvFrameLayout r2 = (com.kwad.sdk.core.view.AdBasePvFrameLayout) r2
            r1.mQ = r2
            int r0 = com.kwad.sdk.R.id.ksad_video_player
            android.view.View r2 = r2.findViewById(r0)
            com.kwad.components.core.video.DetailVideoView r2 = (com.kwad.components.core.video.DetailVideoView) r2
            r1.mDetailVideoView = r2
            r0 = 1
            r2.setAd(r0)
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate a(com.kwad.components.ad.f.f r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    private com.kwad.sdk.mvp.Presenter ad() {
            r3 = this;
            com.kwad.sdk.mvp.Presenter r0 = new com.kwad.sdk.mvp.Presenter
            r0.<init>()
            com.kwad.components.ad.f.b.e r1 = new com.kwad.components.ad.f.b.e
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.f.b.c r1 = new com.kwad.components.ad.f.b.c
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.f.b.i r1 = new com.kwad.components.ad.f.b.i
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.f.b.j r1 = new com.kwad.components.ad.f.b.j
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.f.b.d r1 = new com.kwad.components.ad.f.b.d
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.f.b.b r1 = new com.kwad.components.ad.f.b.b
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.f.b.k r1 = new com.kwad.components.ad.f.b.k
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.f.b.a r1 = new com.kwad.components.ad.f.b.a
            com.kwad.sdk.api.KsAdVideoPlayConfig r2 = r3.mX
            r1.<init>(r2)
            r0.a(r1)
            com.kwad.components.ad.f.b.g r1 = new com.kwad.components.ad.f.b.g
            r1.<init>()
            r0.a(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            boolean r1 = com.kwad.sdk.core.response.b.a.ax(r1)
            if (r1 == 0) goto L61
            com.kwad.components.ad.f.b.f r1 = new com.kwad.components.ad.f.b.f
            r1.<init>()
            goto L66
        L61:
            com.kwad.components.ad.f.b.h r1 = new com.kwad.components.ad.f.b.h
            r1.<init>()
        L66:
            r0.a(r1)
            return r0
    }

    private com.kwad.components.ad.f.a.b eM() {
            r3 = this;
            com.kwad.components.ad.f.a.b r0 = new com.kwad.components.ad.f.a.b
            r0.<init>()
            com.kwad.sdk.core.view.AdBasePvFrameLayout r1 = r3.mQ
            r0.mQ = r1
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            r0.mAdTemplate = r1
            com.kwad.components.ad.f.d$a r1 = r3.mE
            r0.mE = r1
            com.kwad.sdk.api.KsNativeAd$VideoPlayListener r1 = r3.mz
            r0.mz = r1
            com.kwad.components.core.e.d.c r1 = r3.mApkDownloadHelper
            if (r1 != 0) goto L2d
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            boolean r1 = com.kwad.sdk.core.response.b.a.ax(r1)
            if (r1 == 0) goto L2d
            com.kwad.components.core.e.d.c r1 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r2 = r3.mAdTemplate
            r1.<init>(r2)
            goto L2f
        L2d:
            com.kwad.components.core.e.d.c r1 = r3.mApkDownloadHelper
        L2f:
            r0.mApkDownloadHelper = r1
            com.kwad.components.ad.f.c.a r1 = r3.mW
            r0.mW = r1
            return r0
    }

    public final void a(com.kwad.sdk.core.response.model.AdTemplate r1, com.kwad.components.core.e.d.c r2, com.kwad.sdk.api.KsAdVideoPlayConfig r3) {
            r0 = this;
            r0.mAdTemplate = r1
            r0.mApkDownloadHelper = r2
            r0.mX = r3
            com.kwad.sdk.core.view.AdBasePvFrameLayout r1 = r0.mQ
            com.kwad.sdk.widget.j r2 = r0.ct
            r1.setVisibleListener(r2)
            android.view.ViewParent r1 = r0.getParent()
            if (r1 != 0) goto L15
            r1 = r0
            goto L1b
        L15:
            android.view.ViewParent r1 = r0.getParent()
            android.view.View r1 = (android.view.View) r1
        L1b:
            com.kwad.components.core.widget.a.b r2 = new com.kwad.components.core.widget.a.b
            r3 = 30
            r2.<init>(r1, r3)
            r0.bG = r2
            return
    }

    @Override
    public final void aa() {
            r5 = this;
            super.aa()
            com.kwad.components.ad.f.c.a r0 = r5.mW
            if (r0 != 0) goto L16
            com.kwad.components.ad.f.c.a r0 = new com.kwad.components.ad.f.c.a
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            com.kwad.components.core.widget.a.b r2 = r5.bG
            com.kwad.components.core.video.DetailVideoView r3 = r5.mDetailVideoView
            com.kwad.sdk.api.KsAdVideoPlayConfig r4 = r5.mX
            r0.<init>(r1, r2, r3, r4)
            r5.mW = r0
        L16:
            com.kwad.components.ad.f.a.b r0 = r5.eM()
            r5.mV = r0
            com.kwad.sdk.mvp.Presenter r0 = r5.ad()
            r5.mPresenter = r0
            com.kwad.sdk.core.view.AdBasePvFrameLayout r1 = r5.mQ
            r0.F(r1)
            com.kwad.sdk.mvp.Presenter r0 = r5.mPresenter
            com.kwad.components.ad.f.a.b r1 = r5.mV
            r0.k(r1)
            com.kwad.components.core.widget.a.b r0 = r5.bG
            r0.sy()
            com.kwad.components.ad.f.c.a r0 = r5.mW
            r0.aH()
            return
    }

    @Override
    public final void ab() {
            r1 = this;
            super.ab()
            com.kwad.components.core.widget.a.b r0 = r1.bG
            if (r0 == 0) goto La
            r0.release()
        La:
            com.kwad.components.ad.f.c.a r0 = r1.mW
            if (r0 == 0) goto L11
            r0.aI()
        L11:
            com.kwad.components.ad.f.a.b r0 = r1.mV
            if (r0 == 0) goto L18
            r0.release()
        L18:
            com.kwad.sdk.mvp.Presenter r0 = r1.mPresenter
            if (r0 == 0) goto L1f
            r0.destroy()
        L1f:
            return
    }

    public final void setInnerAdInteractionListener(com.kwad.components.ad.f.d.a r1) {
            r0 = this;
            r0.mE = r1
            return
    }

    public final void setVideoPlayListener(com.kwad.sdk.api.KsNativeAd.VideoPlayListener r1) {
            r0 = this;
            r0.mz = r1
            return
    }
}
