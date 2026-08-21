package com.kwad.components.ad.reward.presenter.d.a;

public final class c extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.k.b.a {
    private com.kwad.components.ad.k.b bY;
    private com.kwad.sdk.core.webview.d.a.a cH;
    private android.widget.FrameLayout cQ;
    private com.kwad.components.core.video.DetailVideoView mDetailVideoView;
    private final com.kwad.components.ad.reward.e.j mRewardVerifyListener;
    private int td;



    public c() {
            r1 = this;
            r1.<init>()
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1.td = r0
            com.kwad.components.ad.reward.presenter.d.a.c$1 r0 = new com.kwad.components.ad.reward.presenter.d.a.c$1
            r0.<init>(r1)
            r1.mRewardVerifyListener = r0
            com.kwad.components.ad.reward.presenter.d.a.c$2 r0 = new com.kwad.components.ad.reward.presenter.d.a.c$2
            r0.<init>(r1)
            r1.cH = r0
            return
    }

    static com.kwad.components.ad.k.b a(com.kwad.components.ad.reward.presenter.d.a.c r0) {
            com.kwad.components.ad.k.b r0 = r0.bY
            return r0
    }

    static com.kwad.components.ad.reward.j b(com.kwad.components.ad.reward.presenter.d.a.c r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j c(com.kwad.components.ad.reward.presenter.d.a.c r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    @Override
    public final void ah() {
            r7 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r7.qx
            com.kwad.sdk.core.response.model.AdTemplate r4 = r0.mAdTemplate
            com.kwad.components.ad.reward.j r0 = r7.qx
            com.kwad.components.ad.reward.l r0 = r0.oZ
            r7.bY = r0
            if (r0 != 0) goto L10
            return
        L10:
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r7.mRewardVerifyListener
            r0.a(r1)
            com.kwad.components.ad.k.b r0 = r7.bY
            com.kwad.sdk.core.webview.d.a.a r1 = r7.cH
            r0.a(r1)
            com.kwad.components.ad.k.b r1 = r7.bY
            android.widget.FrameLayout r2 = r7.cQ
            com.kwad.components.ad.reward.j r0 = r7.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r3 = r0.mRootContainer
            com.kwad.components.ad.reward.j r0 = r7.qx
            com.kwad.components.core.e.d.c r5 = r0.mApkDownloadHelper
            com.kwad.components.ad.reward.j r0 = r7.qx
            int r6 = r0.mScreenOrientation
            r1.a(r2, r3, r4, r5, r6)
            com.kwad.components.ad.k.b r0 = r7.bY
            r1 = 0
            r0.a(r1)
            com.kwad.components.ad.k.b r0 = r7.bY
            if (r0 == 0) goto L40
            r0.a(r7)
        L40:
            return
    }

    @Override
    public final void iG() {
            r0 = this;
            r0.hw()
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_web_card_container
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.cQ = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_player
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.core.video.DetailVideoView r0 = (com.kwad.components.core.video.DetailVideoView) r0
            r1.mDetailVideoView = r0
            return
    }

    @Override
    public final void onUnbind() {
            r3 = this;
            super.onUnbind()
            com.kwad.components.ad.k.b r0 = r3.bY
            if (r0 == 0) goto Lf
            r0.lV()
            com.kwad.components.ad.k.b r0 = r3.bY
            r0.lI()
        Lf:
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r3.mRewardVerifyListener
            r0.b(r1)
            com.kwad.components.core.video.DetailVideoView r0 = r3.mDetailVideoView
            if (r0 == 0) goto L25
            int r1 = r3.td
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r1 == r2) goto L25
            com.kwad.sdk.d.a.a.n(r0, r1)
        L25:
            return
    }
}
