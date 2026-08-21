package com.kwad.components.ad.f.b;

public final class i extends com.kwad.components.ad.f.a.a implements android.view.View.OnClickListener {
    private com.kwad.components.core.video.DetailVideoView mDetailVideoView;



    public i() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.kwad.components.core.video.DetailVideoView a(com.kwad.components.ad.f.b.i r0) {
            com.kwad.components.core.video.DetailVideoView r0 = r0.mDetailVideoView
            return r0
    }

    static com.kwad.components.ad.f.a.b b(com.kwad.components.ad.f.b.i r0) {
            com.kwad.components.ad.f.a.b r0 = r0.mV
            return r0
    }

    static com.kwad.components.ad.f.a.b c(com.kwad.components.ad.f.b.i r0) {
            com.kwad.components.ad.f.a.b r0 = r0.mV
            return r0
    }

    private void eR() {
            r2 = this;
            com.kwad.components.core.e.d.a$a r0 = new com.kwad.components.core.e.d.a$a
            com.kwad.components.core.video.DetailVideoView r1 = r2.mDetailVideoView
            android.content.Context r1 = r1.getContext()
            r0.<init>(r1)
            com.kwad.components.ad.f.a.b r1 = r2.mV
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.components.core.e.d.a$a r0 = r0.P(r1)
            com.kwad.components.ad.f.a.b r1 = r2.mV
            com.kwad.components.core.e.d.c r1 = r1.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r0 = r0.b(r1)
            com.kwad.components.ad.f.b.i$2 r1 = new com.kwad.components.ad.f.b.i$2
            r1.<init>(r2)
            com.kwad.components.core.e.d.a$a r0 = r0.a(r1)
            com.kwad.components.core.e.d.a.a(r0)
            return
    }

    private void notifyAdClick() {
            r2 = this;
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.components.ad.f.d$a r0 = r0.mE
            com.kwad.components.core.video.DetailVideoView r1 = r2.mDetailVideoView
            r0.l(r1)
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.f.b.i$1 r0 = new com.kwad.components.ad.f.b.i$1
            r0.<init>(r2)
            r2.mVideoPlayStateListener = r0
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.components.ad.f.c.a r0 = r0.mW
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            return
    }

    @Override
    public final void onClick(android.view.View r2) {
            r1 = this;
            com.kwad.components.core.video.DetailVideoView r0 = r1.mDetailVideoView
            if (r2 != r0) goto La
            r1.eR()
            r1.notifyAdClick()
        La:
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_video_player
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.core.video.DetailVideoView r0 = (com.kwad.components.core.video.DetailVideoView) r0
            r1.mDetailVideoView = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.video.DetailVideoView r0 = r2.mDetailVideoView
            r1 = 0
            r0.setOnClickListener(r1)
            return
    }
}
