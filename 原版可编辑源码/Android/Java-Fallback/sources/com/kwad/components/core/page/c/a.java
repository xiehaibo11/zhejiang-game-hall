package com.kwad.components.core.page.c;

public final class a implements com.kwad.components.core.l.a.a {
    private com.kwad.components.core.video.b GL;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private android.content.Context mContext;
    private com.kwad.components.core.video.DetailVideoView mDetailVideoView;
    private com.kwad.sdk.api.KsVideoPlayConfig mVideoPlayConfig;
    private com.kwad.sdk.core.response.model.VideoPlayerStatus mVideoPlayerStatus;
    private boolean nw;
    private com.kwad.components.core.video.l ny;
    private java.lang.String yb;
    private boolean yd;
    private final java.util.List<com.kwad.sdk.utils.h.a> ye;
    private com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener yg;




    public a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.core.video.DetailVideoView r3, com.kwad.sdk.api.KsVideoPlayConfig r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.yd = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.ye = r0
            com.kwad.components.core.page.c.a$1 r0 = new com.kwad.components.core.page.c.a$1
            r0.<init>(r1)
            r1.yg = r0
            r1.mVideoPlayConfig = r4
            r1.mAdTemplate = r2
            android.content.Context r4 = r3.getContext()
            r1.mContext = r4
            com.kwad.sdk.core.response.model.VideoPlayerStatus r4 = r2.mVideoPlayerStatus
            r1.mVideoPlayerStatus = r4
            com.kwad.sdk.core.response.model.AdInfo r4 = com.kwad.sdk.core.response.b.d.cg(r2)
            java.lang.String r4 = com.kwad.sdk.core.response.b.a.F(r4)
            int r0 = com.kwad.sdk.core.config.d.zz()
            if (r0 >= 0) goto L45
            com.kwad.sdk.core.diskcache.b.a r0 = com.kwad.sdk.core.diskcache.b.a.Au()
            java.io.File r4 = r0.bR(r4)
            if (r4 == 0) goto L56
            boolean r0 = r4.exists()
            if (r0 == 0) goto L56
            java.lang.String r4 = r4.getAbsolutePath()
            goto L54
        L45:
            if (r0 != 0) goto L48
            goto L54
        L48:
            android.content.Context r0 = r3.getContext()
            com.kwad.sdk.core.videocache.f r0 = com.kwad.sdk.core.videocache.c.a.bj(r0)
            java.lang.String r4 = r0.dN(r4)
        L54:
            r1.yb = r4
        L56:
            r1.mDetailVideoView = r3
            com.kwad.components.core.video.b r4 = new com.kwad.components.core.video.b
            r4.<init>(r3)
            r1.GL = r4
            r1.aJ()
            com.kwad.components.core.page.c.a$2 r3 = new com.kwad.components.core.page.c.a$2
            r3.<init>(r1, r2)
            r1.ny = r3
            com.kwad.components.core.video.b r2 = r1.GL
            r2.c(r3)
            com.kwad.components.core.video.b r2 = r1.GL
            com.kwad.components.core.page.c.a$3 r3 = new com.kwad.components.core.page.c.a$3
            r3.<init>(r1)
            r2.a(r3)
            android.content.Context r2 = r1.mContext
            com.kwad.components.core.t.a r2 = com.kwad.components.core.t.a.al(r2)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r3 = r1.yg
            r2.a(r3)
            return
    }

    static com.kwad.components.core.video.b a(com.kwad.components.core.page.c.a r0) {
            com.kwad.components.core.video.b r0 = r0.GL
            return r0
    }

    static boolean a(com.kwad.components.core.page.c.a r0, boolean r1) {
            r1 = 1
            r0.yd = r1
            return r1
    }

    private void aJ() {
            r3 = this;
            com.kwad.sdk.contentalliance.a.a.b$a r0 = new com.kwad.sdk.contentalliance.a.a.b$a
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            r0.<init>(r1)
            java.lang.String r1 = r3.yb
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.cn(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.PhotoInfo r1 = com.kwad.sdk.core.response.b.d.ch(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.f.b(r1)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.co(r1)
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = r3.mVideoPlayerStatus
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.a(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.sdk.contentalliance.a.a.a r1 = com.kwad.sdk.contentalliance.a.a.a.ap(r1)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.b(r1)
            com.kwad.sdk.contentalliance.a.a.b r0 = r0.yS()
            com.kwad.components.core.video.b r1 = r3.GL
            com.kwad.components.core.video.DetailVideoView r2 = r3.mDetailVideoView
            r1.a(r0, r2)
            com.kwad.sdk.api.KsVideoPlayConfig r0 = r3.mVideoPlayConfig
            if (r0 == 0) goto L42
            boolean r0 = r0.isVideoSoundEnable()
            r1 = 0
            r3.setAudioEnabled(r0, r1)
        L42:
            com.kwad.components.core.video.b r0 = r3.GL
            r0.prepareAsync()
            return
    }

    static java.util.List b(com.kwad.components.core.page.c.a r0) {
            java.util.List<com.kwad.sdk.utils.h$a> r0 = r0.ye
            return r0
    }

    private void pause() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            boolean r0 = r0.mXiaomiAppStoreDetailViewOpen
            if (r0 == 0) goto L18
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.mAdScene
            if (r0 == 0) goto L18
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.mAdScene
            int r0 = r0.getAdStyle()
            r1 = 2
            if (r0 != r1) goto L18
            return
        L18:
            com.kwad.components.core.video.b r0 = r2.GL
            r0.pause()
            return
    }

    private void resume() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.GL
            r0.resume()
            return
    }

    private void setAudioEnabled(boolean r1, boolean r2) {
            r0 = this;
            r0.nw = r1
            com.kwad.components.core.video.b r2 = r0.GL
            r2.setAudioEnabled(r1)
            return
    }

    public final void a(com.kwad.components.core.video.k r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.kwad.components.core.video.b r0 = r1.GL
            r0.c(r2)
            return
    }

    public final void b(com.kwad.components.core.video.k r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.kwad.components.core.video.b r0 = r1.GL
            r0.d(r2)
            return
    }

    @Override
    public final void c(com.kwad.components.core.n.c r1) {
            r0 = this;
            r0.resume()
            return
    }

    @Override
    public final void d(com.kwad.components.core.n.c r1) {
            r0 = this;
            r0.pause()
            return
    }

    @Override
    public final void ge() {
            r1 = this;
            r0 = 0
            r1.yd = r0
            com.kwad.components.core.video.b r0 = r1.GL
            com.kwad.sdk.core.video.a.c r0 = r0.qD()
            if (r0 != 0) goto Le
            r1.aJ()
        Le:
            return
    }

    @Override
    public final void gf() {
            r2 = this;
            r0 = 0
            r2.yd = r0
            com.kwad.components.core.video.b r0 = r2.GL
            if (r0 == 0) goto L11
            com.kwad.components.core.video.l r1 = r2.ny
            r0.d(r1)
            com.kwad.components.core.video.b r0 = r2.GL
            r0.release()
        L11:
            return
    }

    public final void release() {
            r2 = this;
            com.kwad.components.core.video.b r0 = r2.GL
            if (r0 == 0) goto Lc
            r0.clear()
            com.kwad.components.core.video.b r0 = r2.GL
            r0.release()
        Lc:
            android.content.Context r0 = r2.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r1 = r2.yg
            r0.b(r1)
            return
    }
}
