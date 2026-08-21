package com.kwad.components.ad.fullscreen.c;

public final class a extends com.kwad.components.ad.reward.presenter.a {
    private final com.kwad.components.ad.reward.e.k gd;
    private com.kwad.components.core.video.l mVideoPlayStateListener;



    public a() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.fullscreen.c.a$1 r0 = new com.kwad.components.ad.fullscreen.c.a$1
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            com.kwad.components.ad.fullscreen.c.a$2 r0 = new com.kwad.components.ad.fullscreen.c.a$2
            r0.<init>(r1)
            r1.gd = r0
            return
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.fullscreen.c.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j b(com.kwad.components.ad.fullscreen.c.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j c(com.kwad.components.ad.fullscreen.c.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            com.kwad.components.ad.reward.d r0 = com.kwad.components.ad.reward.d.fw()
            com.kwad.components.ad.reward.e.k r1 = r2.gd
            r0.a(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            com.kwad.components.ad.reward.d r0 = com.kwad.components.ad.reward.d.fw()
            com.kwad.components.ad.reward.e.k r1 = r2.gd
            r0.b(r1)
            return
    }
}
