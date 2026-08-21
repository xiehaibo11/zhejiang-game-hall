package com.kwad.components.ad.reward.l;

public final class c extends com.kwad.components.ad.j.b implements com.kwad.components.ad.reward.j.a {
    private boolean kU;
    private android.content.Context mContext;
    private com.kwad.sdk.api.KsVideoPlayConfig mVideoPlayConfig;
    private com.kwad.sdk.core.response.model.VideoPlayerStatus mVideoPlayerStatus;
    private boolean nw;
    private com.kwad.components.core.video.l ny;
    private com.kwad.components.ad.reward.j qx;
    private java.lang.String yb;
    private java.util.concurrent.atomic.AtomicBoolean yc;
    private boolean yd;
    private final java.util.List<com.kwad.sdk.utils.h.a> ye;
    private final java.util.List<com.kwad.components.ad.reward.l.b> yf;
    private com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener yg;




    public c(com.kwad.components.ad.reward.j r2, com.kwad.components.core.video.DetailVideoView r3) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            r1.<init>(r0, r3)
            java.util.concurrent.atomic.AtomicBoolean r3 = new java.util.concurrent.atomic.AtomicBoolean
            r0 = 0
            r3.<init>(r0)
            r1.yc = r3
            r1.yd = r0
            r1.kU = r0
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r1.ye = r3
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r1.yf = r3
            com.kwad.components.ad.reward.l.c$1 r3 = new com.kwad.components.ad.reward.l.c$1
            r3.<init>(r1)
            r1.yg = r3
            r1.qx = r2
            android.content.Context r3 = r2.mContext
            r1.mContext = r3
            com.kwad.sdk.api.KsVideoPlayConfig r2 = r2.mVideoPlayConfig
            r1.mVideoPlayConfig = r2
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r2 = r2.mVideoPlayerStatus
            r1.mVideoPlayerStatus = r2
            java.lang.String r2 = r1.getVideoUrl()
            r1.yb = r2
            return
    }

    static com.kwad.components.core.video.b a(com.kwad.components.ad.reward.l.c r0) {
            com.kwad.components.core.video.b r0 = r0.GL
            return r0
    }

    static boolean a(com.kwad.components.ad.reward.l.c r0, boolean r1) {
            r1 = 1
            r0.yd = r1
            return r1
    }

    private void aJ() {
            r3 = this;
            boolean r0 = r3.jP()
            if (r0 == 0) goto L7
            return
        L7:
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
            if (r0 == 0) goto L49
            boolean r0 = r0.isVideoSoundEnable()
            r1 = 0
            r3.setAudioEnabled(r0, r1)
        L49:
            com.kwad.components.core.video.b r0 = r3.GL
            r0.prepareAsync()
            return
    }

    static com.kwad.components.core.video.b b(com.kwad.components.ad.reward.l.c r0) {
            com.kwad.components.core.video.b r0 = r0.GL
            return r0
    }

    static java.util.List c(com.kwad.components.ad.reward.l.c r0) {
            java.util.List<com.kwad.sdk.utils.h$a> r0 = r0.ye
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate d(com.kwad.components.ad.reward.l.c r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.components.core.video.b e(com.kwad.components.ad.reward.l.c r0) {
            com.kwad.components.core.video.b r0 = r0.GL
            return r0
    }

    private java.lang.String getVideoUrl() {
            r3 = this;
            boolean r0 = r3.jP()
            if (r0 == 0) goto L9
            java.lang.String r0 = ""
            return r0
        L9:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.F(r0)
            com.kwad.sdk.core.diskcache.b.a r1 = com.kwad.sdk.core.diskcache.b.a.Au()
            java.io.File r1 = r1.bR(r0)
            if (r1 == 0) goto L28
            boolean r2 = r1.exists()
            if (r2 == 0) goto L28
            java.lang.String r0 = r1.getAbsolutePath()
            goto L38
        L28:
            int r1 = com.kwad.sdk.core.config.d.zz()
            if (r1 <= 0) goto L38
            android.content.Context r1 = r3.mContext
            com.kwad.sdk.core.videocache.f r1 = com.kwad.sdk.core.videocache.c.a.bj(r1)
            java.lang.String r0 = r1.dN(r0)
        L38:
            return r0
    }

    private boolean jP() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.cw(r0)
            if (r0 == 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    private void stop() {
            r1 = this;
            r1.pause()
            r0 = 1
            r1.kU = r0
            return
    }

    public final void a(com.kwad.components.ad.reward.l.b r2) {
            r1 = this;
            java.util.List<com.kwad.components.ad.reward.l.b> r0 = r1.yf
            r0.add(r2)
            return
    }

    public final void a(com.kwad.sdk.utils.h.a r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.utils.h$a> r0 = r1.ye
            r0.add(r2)
            return
    }

    public final void b(com.kwad.components.ad.reward.l.b r2) {
            r1 = this;
            java.util.List<com.kwad.components.ad.reward.l.b> r0 = r1.yf
            r0.remove(r2)
            return
    }

    public final void b(com.kwad.sdk.utils.h.a r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.utils.h$a> r0 = r1.ye
            r0.remove(r2)
            return
    }

    @Override
    public final long getPlayDuration() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.yc
            boolean r0 = r0.get()
            if (r0 == 0) goto Ld
            long r0 = super.getPlayDuration()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    @Override
    public final void gj() {
            r1 = this;
            r0 = 0
            r1.yd = r0
            return
    }

    @Override
    public final void gk() {
            r2 = this;
            boolean r0 = r2.kU
            if (r0 == 0) goto L5
            return
        L5:
            r2.resume()
            boolean r0 = r2.nw
            if (r0 != 0) goto L16
            boolean r0 = com.kwad.components.ad.reward.a.b.gF()
            if (r0 == 0) goto L4e
            boolean r0 = r2.yd
            if (r0 == 0) goto L4e
        L16:
            android.content.Context r0 = r2.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            boolean r1 = com.kwad.components.ad.reward.a.b.gF()
            r0.aJ(r1)
            boolean r0 = com.kwad.components.ad.reward.a.b.gF()
            r1 = 0
            if (r0 == 0) goto L37
            boolean r0 = r2.yd
            if (r0 == 0) goto L37
            r2.yd = r1
            r0 = 1
            r2.nw = r0
            r2.setAudioEnabled(r0, r1)
            return
        L37:
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = r0.oU
            if (r0 != 0) goto L4e
            android.content.Context r0 = r2.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            boolean r0 = r0.qh()
            if (r0 == 0) goto L4e
            r2.nw = r1
            r2.setAudioEnabled(r1, r1)
        L4e:
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
            r2 = this;
            r0 = 0
            r2.yd = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.yc
            boolean r0 = r0.get()
            if (r0 == 0) goto L1b
            com.kwad.components.core.video.b r0 = r2.GL
            if (r0 == 0) goto L1b
            com.kwad.components.core.video.b r0 = r2.GL
            com.kwad.components.core.video.l r1 = r2.ny
            r0.d(r1)
            com.kwad.components.core.video.b r0 = r2.GL
            r0.release()
        L1b:
            return
    }

    public final void jN() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.yc
            boolean r0 = r0.get()
            if (r0 == 0) goto L9
            return
        L9:
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.yc
            r1 = 1
            r0.set(r1)
            r2.aJ()
            com.kwad.components.ad.reward.l.c$2 r0 = new com.kwad.components.ad.reward.l.c$2
            r0.<init>(r2)
            r2.ny = r0
            com.kwad.components.core.video.b r0 = r2.GL
            com.kwad.components.core.video.l r1 = r2.ny
            r0.c(r1)
            com.kwad.components.core.video.b r0 = r2.GL
            com.kwad.components.ad.reward.l.c$3 r1 = new com.kwad.components.ad.reward.l.c$3
            r1.<init>(r2)
            r0.a(r1)
            android.content.Context r0 = r2.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r1 = r2.yg
            r0.a(r1)
            return
    }

    public final void jO() {
            r2 = this;
            java.util.List<com.kwad.components.ad.reward.l.b> r0 = r2.yf
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.reward.l.b r1 = (com.kwad.components.ad.reward.l.b) r1
            r1.jh()
            goto L6
        L16:
            return
    }

    @Override
    public final void pause() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.yc
            boolean r0 = r0.get()
            if (r0 == 0) goto L1f
            com.kwad.components.core.video.b r0 = r1.GL
            if (r0 == 0) goto L1f
            boolean r0 = r1.jP()
            if (r0 == 0) goto L13
            goto L1f
        L13:
            com.kwad.components.ad.reward.j r0 = r1.qx
            boolean r0 = com.kwad.components.ad.reward.j.e(r0)
            if (r0 == 0) goto L1c
            return
        L1c:
            super.pause()
        L1f:
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
            r1 = this;
            r0 = 0
            r1.kU = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.yc
            boolean r0 = r0.get()
            if (r0 == 0) goto L22
            com.kwad.components.core.video.b r0 = r1.GL
            if (r0 == 0) goto L22
            boolean r0 = r1.jP()
            if (r0 == 0) goto L16
            goto L22
        L16:
            com.kwad.components.ad.reward.j r0 = r1.qx
            boolean r0 = com.kwad.components.ad.reward.j.e(r0)
            if (r0 == 0) goto L1f
            return
        L1f:
            super.resume()
        L22:
            return
    }

    @Override
    public final void setAudioEnabled(boolean r2, boolean r3) {
            r1 = this;
            r1.nw = r2
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.yc
            boolean r0 = r0.get()
            if (r0 == 0) goto L22
            com.kwad.components.core.video.b r0 = r1.GL
            if (r0 != 0) goto Lf
            goto L22
        Lf:
            if (r2 == 0) goto L1d
            if (r3 == 0) goto L1d
            android.content.Context r3 = r1.mContext
            com.kwad.components.core.t.a r3 = com.kwad.components.core.t.a.al(r3)
            r0 = 1
            r3.aJ(r0)
        L1d:
            com.kwad.components.core.video.b r3 = r1.GL
            r3.setAudioEnabled(r2)
        L22:
            return
    }

    @Override
    @java.lang.Deprecated
    public final void skipToEnd() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.yc
            boolean r0 = r0.get()
            if (r0 == 0) goto L17
            com.kwad.components.core.video.b r0 = r2.GL
            if (r0 != 0) goto Ld
            goto L17
        Ld:
            com.kwad.components.core.video.b r0 = r2.GL
            r1 = 9
            r0.onPlayStateChanged(r1)
            r2.stop()
        L17:
            return
    }
}
