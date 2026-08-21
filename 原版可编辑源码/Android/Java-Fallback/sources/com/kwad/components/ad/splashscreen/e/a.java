package com.kwad.components.ad.splashscreen.e;

public final class a extends com.kwad.components.ad.j.b implements com.kwad.sdk.core.h.c {
    private boolean EG;
    private android.content.Context mContext;
    private com.kwad.sdk.api.KsVideoPlayConfig mVideoPlayConfig;
    private com.kwad.sdk.core.response.model.VideoPlayerStatus mVideoPlayerStatus;
    private boolean nw;
    private java.lang.String yb;
    private final java.util.List<com.kwad.sdk.utils.h.a> ye;
    private com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener yg;



    public a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.core.video.DetailVideoView r3, com.kwad.sdk.api.KsVideoPlayConfig r4) {
            r1 = this;
            r1.<init>(r2, r3)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.ye = r0
            com.kwad.components.ad.splashscreen.e.a$1 r0 = new com.kwad.components.ad.splashscreen.e.a$1
            r0.<init>(r1)
            r1.yg = r0
            r1.mVideoPlayConfig = r4
            android.content.Context r4 = r3.getContext()
            r1.mContext = r4
            com.kwad.sdk.core.response.model.AdInfo r4 = com.kwad.sdk.core.response.b.d.cg(r2)
            java.lang.String r4 = com.kwad.sdk.core.response.b.a.aS(r4)
            com.kwad.sdk.core.response.model.VideoPlayerStatus r2 = r2.mVideoPlayerStatus
            r1.mVideoPlayerStatus = r2
            com.kwad.sdk.core.diskcache.b.a r2 = com.kwad.sdk.core.diskcache.b.a.Au()
            java.io.File r2 = r2.bR(r4)
            if (r2 == 0) goto L3b
            boolean r4 = r2.exists()
            if (r4 == 0) goto L3b
            java.lang.String r2 = r2.getAbsolutePath()
            r1.yb = r2
        L3b:
            com.kwad.components.core.video.b r2 = r1.GL
            com.kwad.components.ad.splashscreen.e.a$2 r4 = new com.kwad.components.ad.splashscreen.e.a$2
            r4.<init>(r1, r3)
            r2.a(r4)
            android.content.Context r2 = r1.mContext
            com.kwad.components.core.t.a r2 = com.kwad.components.core.t.a.al(r2)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r3 = r1.yg
            r2.a(r3)
            return
    }

    static java.util.List a(com.kwad.components.ad.splashscreen.e.a r0) {
            java.util.List<com.kwad.sdk.utils.h$a> r0 = r0.ye
            return r0
    }

    private void aJ() {
            r3 = this;
            com.kwad.sdk.contentalliance.a.a.b$a r0 = new com.kwad.sdk.contentalliance.a.a.b$a
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            r0.<init>(r1)
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = r3.mVideoPlayerStatus
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.a(r1)
            java.lang.String r1 = r3.yb
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.cn(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.PhotoInfo r1 = com.kwad.sdk.core.response.b.d.ch(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.f.b(r1)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.co(r1)
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

    static com.kwad.components.core.video.b b(com.kwad.components.ad.splashscreen.e.a r0) {
            com.kwad.components.core.video.b r0 = r0.GL
            return r0
    }

    public final void a(com.kwad.sdk.utils.h.a r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.utils.h$a> r0 = r1.ye
            r0.add(r2)
            return
    }

    @Override
    public final void aK() {
            r0 = this;
            r0.resume()
            return
    }

    @Override
    public final void aL() {
            r0 = this;
            r0.pause()
            return
    }

    public final void ag(boolean r1) {
            r0 = this;
            r1 = 1
            r0.EG = r1
            return
    }

    public final void b(com.kwad.sdk.utils.h.a r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.utils.h$a> r0 = r1.ye
            r0.remove(r2)
            return
    }

    public final long getCurrentPosition() {
            r2 = this;
            com.kwad.components.core.video.b r0 = r2.GL
            long r0 = r0.getCurrentPosition()
            return r0
    }

    public final void lB() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.GL
            com.kwad.sdk.core.video.a.c r0 = r0.qD()
            if (r0 != 0) goto Lb
            r1.aJ()
        Lb:
            com.kwad.components.core.video.b r0 = r1.GL
            r0.start()
            return
    }

    @Override
    public final void release() {
            r2 = this;
            super.release()
            android.content.Context r0 = r2.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r1 = r2.yg
            r0.b(r1)
            return
    }

    @Override
    public final void resume() {
            r2 = this;
            super.resume()
            boolean r0 = r2.nw
            if (r0 == 0) goto L26
            boolean r0 = r2.EG
            if (r0 == 0) goto L26
            android.content.Context r0 = r2.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            r1 = 0
            r0.aJ(r1)
            android.content.Context r0 = r2.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            boolean r0 = r0.qh()
            if (r0 == 0) goto L26
            r2.nw = r1
            r2.setAudioEnabled(r1, r1)
        L26:
            return
    }

    @Override
    public final void setAudioEnabled(boolean r2, boolean r3) {
            r1 = this;
            r1.nw = r2
            if (r2 == 0) goto L10
            if (r3 == 0) goto L10
            android.content.Context r3 = r1.mContext
            com.kwad.components.core.t.a r3 = com.kwad.components.core.t.a.al(r3)
            r0 = 1
            r3.aJ(r0)
        L10:
            com.kwad.components.core.video.b r3 = r1.GL
            r3.setAudioEnabled(r2)
            return
    }
}
