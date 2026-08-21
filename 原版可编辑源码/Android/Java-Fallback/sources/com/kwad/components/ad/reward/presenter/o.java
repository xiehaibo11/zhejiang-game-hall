package com.kwad.components.ad.reward.presenter;

public final class o extends com.kwad.components.ad.reward.presenter.a {
    private com.kwad.components.core.playable.a oX;
    private com.kwad.components.core.playable.PlayableSource sF;
    private final com.kwad.components.ad.reward.e.h sG;




    public o() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.o$1 r0 = new com.kwad.components.ad.reward.presenter.o$1
            r0.<init>(r1)
            r1.sG = r0
            return
    }

    static com.kwad.components.core.playable.PlayableSource a(com.kwad.components.ad.reward.presenter.o r0, com.kwad.components.core.playable.PlayableSource r1) {
            r0.sF = r1
            return r1
    }

    static com.kwad.components.core.playable.a a(com.kwad.components.ad.reward.presenter.o r0) {
            com.kwad.components.core.playable.a r0 = r0.oX
            return r0
    }

    @Override
    public final void ah() {
            r4 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.components.core.playable.a r0 = r0.oX
            r4.oX = r0
            com.kwad.components.ad.reward.j r1 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.components.ad.reward.j r2 = r4.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r2 = r2.mRootContainer
            com.kwad.components.ad.reward.j r3 = r4.qx
            com.kwad.components.core.e.d.c r3 = r3.mApkDownloadHelper
            r0.a(r1, r2, r3)
            com.kwad.components.ad.reward.j r0 = r4.qx
            boolean r0 = r0.pj
            java.lang.String r1 = "playable"
            com.kwad.components.ad.reward.monitor.a.a(r0, r1)
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.components.ad.reward.j r2 = r4.qx
            boolean r2 = r2.pj
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.bB(r0)
            com.kwad.components.ad.reward.monitor.a.a(r2, r1, r0)
            com.kwad.components.core.playable.a r0 = r4.oX
            r0.pw()
            com.kwad.components.core.playable.a r0 = r4.oX
            com.kwad.components.ad.reward.presenter.o$2 r1 = new com.kwad.components.ad.reward.presenter.o$2
            r1.<init>(r4)
            r0.a(r1)
            com.kwad.components.core.playable.a r0 = r4.oX
            com.kwad.components.ad.reward.presenter.o$3 r1 = new com.kwad.components.ad.reward.presenter.o$3
            r1.<init>(r4)
            r0.a(r1)
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            com.kwad.components.ad.reward.e.h r1 = r4.sG
            r0.a(r1)
            return
    }

    public final void e(com.kwad.components.core.playable.PlayableSource r2) {
            r1 = this;
            com.kwad.components.core.playable.a r0 = r1.oX
            if (r0 == 0) goto Lf
            if (r2 == 0) goto La
            r0.e(r2)
            return
        La:
            com.kwad.components.core.playable.PlayableSource r2 = r1.sF
            r0.e(r2)
        Lf:
            return
    }

    public final void hH() {
            r1 = this;
            com.kwad.components.core.playable.a r0 = r1.oX
            if (r0 == 0) goto L7
            r0.hH()
        L7:
            return
    }

    @Override
    public final void onCreate() {
            r2 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_playable_webview
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = (com.kwad.sdk.core.webview.KsAdWebView) r0
            r1 = 4
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.playable.a r0 = r2.oX
            r0.pv()
            com.kwad.components.core.playable.a r0 = r2.oX
            r0.hH()
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            com.kwad.components.ad.reward.e.h r1 = r2.sG
            r0.b(r1)
            return
    }
}
