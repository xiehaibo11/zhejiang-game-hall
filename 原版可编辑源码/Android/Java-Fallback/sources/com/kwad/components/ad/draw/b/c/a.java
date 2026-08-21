package com.kwad.components.ad.draw.b.c;

public final class a extends com.kwad.components.ad.draw.a.a {
    private com.kwad.components.ad.k.b bY;
    private com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame cO;
    private com.kwad.components.core.video.k mVideoPlayStateListener;


    public a() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.draw.b.c.a$1 r0 = new com.kwad.components.ad.draw.b.c.a$1
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return
    }

    static com.kwad.components.ad.k.b a(com.kwad.components.ad.draw.b.c.a r0) {
            com.kwad.components.ad.k.b r0 = r0.bY
            return r0
    }

    private void aG() {
            r2 = this;
            com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame r0 = r2.cO
            r0.aP()
            com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame r0 = r2.cO
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    static com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame b(com.kwad.components.ad.draw.b.c.a r0) {
            com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame r0 = r0.cO
            return r0
    }

    static void c(com.kwad.components.ad.draw.b.c.a r0) {
            r0.aG()
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.components.ad.k.b r0 = r0.bY
            r2.bY = r0
            com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame r0 = r2.cO
            com.kwad.components.ad.draw.a.b r1 = r2.bE
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r0.b(r1)
            com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame r0 = r2.cO
            com.kwad.components.ad.draw.a.b r1 = r2.bE
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            r0.setAdBaseFrameLayout(r1)
            com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame r0 = r2.cO
            com.kwad.components.ad.draw.a.b r1 = r2.bE
            com.kwad.components.core.e.d.c r1 = r1.mApkDownloadHelper
            r0.setApkDownloadHelper(r1)
            com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame r0 = r2.cO
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame r0 = r2.cO
            com.kwad.components.ad.draw.a.b r1 = r2.bE
            com.kwad.sdk.api.KsDrawAd$AdInteractionListener r1 = r1.bD
            r0.setAdInteractionListener(r1)
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.components.ad.draw.c.a r0 = r0.bF
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_video_tail_frame
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame r0 = (com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame) r0
            r1.cO = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.components.ad.draw.c.a r0 = r0.bF
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame r0 = r2.cO
            r0.release()
            return
    }
}
