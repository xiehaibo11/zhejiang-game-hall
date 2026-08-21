package com.kwad.components.ad.draw.c;

public final class a extends com.kwad.components.ad.j.b {
    private com.kwad.components.core.widget.a.b bG;
    private long cS;
    private com.kwad.sdk.contentalliance.a.a.a cT;
    private boolean cU;
    private final com.kwad.sdk.core.h.c cV;
    private android.content.Context mContext;



    public a(com.kwad.sdk.core.response.model.AdTemplate r3, com.kwad.components.core.widget.a.b r4, com.kwad.components.core.video.DetailVideoView r5) {
            r2 = this;
            r2.<init>(r3, r5)
            com.kwad.components.ad.draw.c.a$2 r3 = new com.kwad.components.ad.draw.c.a$2
            r3.<init>(r2)
            r2.cV = r3
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            long r0 = com.kwad.sdk.core.response.b.a.T(r3)
            r2.cS = r0
            r2.bG = r4
            android.content.Context r3 = r5.getContext()
            r2.mContext = r3
            r2.aJ()
            com.kwad.components.core.video.b r3 = r2.GL
            com.kwad.components.ad.draw.c.a$1 r4 = new com.kwad.components.ad.draw.c.a$1
            r4.<init>(r2)
            r3.a(r4)
            return
    }

    static com.kwad.sdk.contentalliance.a.a.a a(com.kwad.components.ad.draw.c.a r0, com.kwad.sdk.contentalliance.a.a.a r1) {
            r0.cT = r1
            return r1
    }

    static com.kwad.sdk.core.response.model.AdTemplate a(com.kwad.components.ad.draw.c.a r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static void a(com.kwad.components.ad.draw.c.a r0, long r1) {
            r0.start(r1)
            return
    }

    private void aJ() {
            r5 = this;
            com.kwad.sdk.contentalliance.a.a.b$a r0 = new com.kwad.sdk.contentalliance.a.a.b$a
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            r0.<init>(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            java.lang.String r1 = com.kwad.sdk.core.response.b.d.ci(r1)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.cn(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            com.kwad.sdk.core.response.model.PhotoInfo r1 = com.kwad.sdk.core.response.b.d.ch(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.f.b(r1)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.co(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = r1.mVideoPlayerStatus
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.a(r1)
            com.kwad.sdk.contentalliance.a.a.a r1 = new com.kwad.sdk.contentalliance.a.a.a
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.mAdTemplate
            long r3 = java.lang.System.currentTimeMillis()
            r1.<init>(r2, r3)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.b(r1)
            com.kwad.sdk.contentalliance.a.a.b r0 = r0.yS()
            com.kwad.components.core.video.b r1 = r5.GL
            com.kwad.components.core.video.DetailVideoView r2 = r5.mDetailVideoView
            r1.a(r0, r2)
            com.kwad.components.core.video.b r0 = r5.GL
            r0.prepareAsync()
            return
    }

    static com.kwad.sdk.contentalliance.a.a.a b(com.kwad.components.ad.draw.c.a r0) {
            com.kwad.sdk.contentalliance.a.a.a r0 = r0.cT
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate c(com.kwad.components.ad.draw.c.a r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.components.core.video.b d(com.kwad.components.ad.draw.c.a r0) {
            com.kwad.components.core.video.b r0 = r0.GL
            return r0
    }

    static boolean e(com.kwad.components.ad.draw.c.a r0) {
            boolean r0 = r0.cU
            return r0
    }

    private void start(long r3) {
            r2 = this;
            com.kwad.components.core.widget.a.b r0 = r2.bG
            boolean r0 = r0.ep()
            if (r0 == 0) goto L19
            com.kwad.sdk.contentalliance.a.a.a r0 = new com.kwad.sdk.contentalliance.a.a.a
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.<init>(r1, r3)
            com.kwad.components.core.video.b r3 = r2.GL
            r3.a(r0)
            com.kwad.components.core.video.b r3 = r2.GL
            r3.start()
        L19:
            return
    }

    public final void aH() {
            r3 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            long r0 = com.kwad.sdk.utils.l.cC(r0)
            com.kwad.components.core.video.b r2 = r3.GL
            com.kwad.sdk.core.video.a.c r2 = r2.qD()
            if (r2 != 0) goto L11
            r3.aJ()
        L11:
            r3.start(r0)
            com.kwad.components.core.widget.a.b r0 = r3.bG
            com.kwad.sdk.core.h.c r1 = r3.cV
            r0.a(r1)
            return
    }

    public final void aI() {
            r2 = this;
            r0 = 0
            r2.cT = r0
            com.kwad.components.core.widget.a.b r0 = r2.bG
            com.kwad.sdk.core.h.c r1 = r2.cV
            r0.b(r1)
            com.kwad.components.core.video.b r0 = r2.GL
            r0.release()
            return
    }

    public final void f(boolean r1) {
            r0 = this;
            r0.cU = r1
            return
    }

    @Override
    public final void resume() {
            r2 = this;
            super.resume()
            android.content.Context r0 = r2.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            r1 = 0
            r0.aJ(r1)
            return
    }
}
