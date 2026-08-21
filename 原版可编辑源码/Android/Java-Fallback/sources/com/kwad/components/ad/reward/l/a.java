package com.kwad.components.ad.reward.l;

public final class a extends com.kwad.components.ad.j.a<com.kwad.components.core.video.h> implements com.kwad.components.ad.reward.j.a {
    private com.kwad.components.core.g.c ya;

    public a(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r2 = this;
            r2.<init>(r3)
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            long r0 = com.kwad.sdk.core.response.b.a.H(r3)
            com.kwad.components.core.g.c r3 = new com.kwad.components.core.g.c
            r3.<init>()
            r2.ya = r3
            r3.v(r0)
            return
    }

    public final android.widget.FrameLayout Q(android.content.Context r3) {
            r2 = this;
            com.kwad.components.core.g.c r0 = r2.ya
            android.widget.FrameLayout r3 = r0.getImagePlayerView(r3)
            com.kwad.components.core.g.c r0 = r2.ya
            android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.FIT_CENTER
            r0.setImageScaleType(r1)
            return r3
    }

    @Override
    public final void a(com.kwad.components.core.video.h r2) {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.ya
            r0.d(r2)
            return
    }

    @Override
    public final void b(com.kwad.components.core.video.h r2) {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.ya
            r0.c(r2)
            return
    }

    @Override
    public final long getPlayDuration() {
            r2 = this;
            com.kwad.components.core.g.c r0 = r2.ya
            long r0 = r0.getPlayDuration()
            return r0
    }

    @Override
    public final void gj() {
            r0 = this;
            return
    }

    @Override
    public final void gk() {
            r0 = this;
            r0.resume()
            return
    }

    @Override
    public final void gl() {
            r0 = this;
            r0.pause()
            return
    }

    @Override
    public final void gm() {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.ya
            r0.destroy()
            return
    }

    public final void jN() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.util.List r0 = com.kwad.sdk.core.response.b.a.aT(r0)
            com.kwad.components.core.g.c r1 = r2.ya
            r1.setURLs(r0)
            com.kwad.components.core.g.c r0 = r2.ya
            r0.play()
            return
    }

    @Override
    public final void pause() {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.ya
            r0.pause()
            return
    }

    @Override
    public final void release() {
            r1 = this;
            super.release()
            com.kwad.components.core.g.c r0 = r1.ya
            r0.destroy()
            return
    }

    @Override
    public final void resume() {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.ya
            r0.resume()
            return
    }

    @Override
    public final void skipToEnd() {
            r1 = this;
            com.kwad.components.core.g.c r0 = r1.ya
            r0.skipToEnd()
            return
    }
}
