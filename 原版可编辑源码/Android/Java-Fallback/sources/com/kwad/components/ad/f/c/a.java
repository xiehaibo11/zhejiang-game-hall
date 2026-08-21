package com.kwad.components.ad.f.c;

public final class a extends com.kwad.components.ad.j.b {
    private com.kwad.components.core.widget.a.b bG;
    private final com.kwad.sdk.core.h.c cV;
    private com.kwad.sdk.api.KsAdVideoPlayConfig dJ;
    private boolean eA;
    private com.kwad.components.core.j.a.b eI;
    private com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener eK;
    private boolean hasNoCache;
    private final com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private android.content.Context mContext;
    private boolean nw;
    private boolean nx;
    private com.kwad.components.core.video.l ny;






    public a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.core.widget.a.b r3, com.kwad.components.core.video.DetailVideoView r4, com.kwad.sdk.api.KsAdVideoPlayConfig r5) {
            r1 = this;
            r1.<init>(r2, r4)
            r0 = 0
            r1.hasNoCache = r0
            com.kwad.components.ad.f.c.a$3 r0 = new com.kwad.components.ad.f.c.a$3
            r0.<init>(r1)
            r1.cV = r0
            com.kwad.components.ad.f.c.a$5 r0 = new com.kwad.components.ad.f.c.a$5
            r0.<init>(r1)
            r1.eK = r0
            r1.bG = r3
            com.kwad.sdk.core.response.model.AdTemplate r3 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            r1.mAdInfo = r3
            boolean r3 = r5 instanceof com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl
            if (r3 == 0) goto L30
            r3 = r5
            com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r3 = (com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl) r3
            int r3 = r3.getVideoSoundValue()
            if (r3 == 0) goto L30
            boolean r3 = r5.isVideoSoundEnable()
            goto L36
        L30:
            com.kwad.sdk.core.response.model.AdInfo r3 = r1.mAdInfo
            boolean r3 = com.kwad.sdk.core.response.b.a.bH(r3)
        L36:
            r1.nw = r3
            r1.dJ = r5
            android.content.Context r3 = r4.getContext()
            r1.mContext = r3
            if (r5 == 0) goto L4d
            boolean r3 = r5.isNoCache()     // Catch: java.lang.Throwable -> L49
            r1.hasNoCache = r3     // Catch: java.lang.Throwable -> L49
            goto L4d
        L49:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
        L4d:
            com.kwad.components.ad.f.c.a$1 r3 = new com.kwad.components.ad.f.c.a$1
            r3.<init>(r1, r2)
            r1.ny = r3
            com.kwad.components.core.video.b r2 = r1.GL
            com.kwad.components.core.video.l r3 = r1.ny
            r2.c(r3)
            r1.aJ()
            com.kwad.components.core.video.b r2 = r1.GL
            com.kwad.components.ad.f.c.a$2 r3 = new com.kwad.components.ad.f.c.a$2
            r3.<init>(r1)
            r2.a(r3)
            return
    }

    static boolean a(com.kwad.components.ad.f.c.a r0) {
            boolean r0 = r0.eU()
            return r0
    }

    static boolean a(com.kwad.components.ad.f.c.a r0, boolean r1) {
            boolean r0 = r0.g(r1)
            return r0
    }

    private void aJ() {
            r4 = this;
            com.kwad.sdk.contentalliance.a.a.b$a r0 = new com.kwad.sdk.contentalliance.a.a.b$a
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            r0.<init>(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            java.lang.String r1 = com.kwad.sdk.core.response.b.d.ci(r1)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.cn(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.PhotoInfo r1 = com.kwad.sdk.core.response.b.d.ch(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.f.b(r1)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.co(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = r1.mVideoPlayerStatus
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.a(r1)
            boolean r1 = r4.hasNoCache
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.bd(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            com.kwad.sdk.contentalliance.a.a.a r1 = com.kwad.sdk.contentalliance.a.a.a.ap(r1)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.b(r1)
            com.kwad.sdk.contentalliance.a.a.b r0 = r0.yS()
            com.kwad.components.core.video.b r1 = r4.GL
            com.kwad.components.core.video.DetailVideoView r2 = r4.mDetailVideoView
            r3 = 1
            r1.a(r0, r3, r3, r2)
            boolean r0 = r4.nw
            boolean r0 = r4.g(r0)
            r4.setAudioEnabled(r0)
            boolean r0 = r4.eU()
            if (r0 != 0) goto L53
            return
        L53:
            com.kwad.components.core.video.b r0 = r4.GL
            r0.prepareAsync()
            android.content.Context r0 = r4.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r1 = r4.eK
            r0.a(r1)
            return
    }

    static com.kwad.components.core.widget.a.b b(com.kwad.components.ad.f.c.a r0) {
            com.kwad.components.core.widget.a.b r0 = r0.bG
            return r0
    }

    static void b(com.kwad.components.ad.f.c.a r0, boolean r1) {
            r0.setAudioEnabled(r1)
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate c(com.kwad.components.ad.f.c.a r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static boolean c(com.kwad.components.ad.f.c.a r0, boolean r1) {
            r1 = 0
            r0.eA = r1
            return r1
    }

    static com.kwad.components.core.video.b d(com.kwad.components.ad.f.c.a r0) {
            com.kwad.components.core.video.b r0 = r0.GL
            return r0
    }

    static com.kwad.components.core.j.a.b e(com.kwad.components.ad.f.c.a r0) {
            com.kwad.components.core.j.a$b r0 = r0.getCurrentVoiceItem()
            return r0
    }

    private boolean eU() {
            r5 = this;
            boolean r0 = r5.nx
            r1 = 1
            if (r0 == 0) goto L6
            return r1
        L6:
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r5.dJ
            boolean r2 = r0 instanceof com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl
            r3 = 0
            if (r2 == 0) goto L51
            com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r0 = (com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl) r0
            int r2 = r0.getVideoAutoPlayType()
            if (r2 != r1) goto L1c
            android.content.Context r0 = r5.mContext
            boolean r0 = com.kwad.sdk.utils.ag.isNetworkConnected(r0)
            return r0
        L1c:
            int r2 = r0.getVideoAutoPlayType()
            r4 = 2
            if (r2 != r4) goto L2a
            android.content.Context r0 = r5.mContext
            boolean r0 = com.kwad.sdk.utils.ag.isWifiConnected(r0)
            return r0
        L2a:
            int r2 = r0.getVideoAutoPlayType()
            r4 = 3
            if (r2 != r4) goto L32
            return r3
        L32:
            int r2 = r0.getDataFlowAutoStartValue()
            if (r2 == 0) goto L51
            android.content.Context r2 = r5.mContext
            boolean r2 = com.kwad.sdk.utils.ag.isWifiConnected(r2)
            if (r2 != 0) goto L50
            boolean r0 = r0.isDataFlowAutoStart()
            if (r0 == 0) goto L4f
            android.content.Context r0 = r5.mContext
            boolean r0 = com.kwad.sdk.utils.ag.isMobileConnected(r0)
            if (r0 == 0) goto L4f
            goto L50
        L4f:
            return r3
        L50:
            return r1
        L51:
            com.kwad.sdk.core.response.model.AdInfo r0 = r5.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.bI(r0)
            if (r0 == 0) goto L62
            android.content.Context r0 = r5.mContext
            boolean r0 = com.kwad.sdk.utils.ag.isNetworkConnected(r0)
            if (r0 == 0) goto L62
            return r1
        L62:
            com.kwad.sdk.core.response.model.AdInfo r0 = r5.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.bJ(r0)
            if (r0 == 0) goto L73
            android.content.Context r0 = r5.mContext
            boolean r0 = com.kwad.sdk.utils.ag.isWifiConnected(r0)
            if (r0 == 0) goto L73
            return r1
        L73:
            return r3
    }

    static com.kwad.components.core.video.b f(com.kwad.components.ad.f.c.a r0) {
            com.kwad.components.core.video.b r0 = r0.GL
            return r0
    }

    static com.kwad.components.core.j.a.b g(com.kwad.components.ad.f.c.a r0) {
            com.kwad.components.core.j.a$b r0 = r0.eI
            return r0
    }

    private boolean g(boolean r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            com.kwad.components.core.j.a$b r3 = r2.eI
            if (r3 == 0) goto L14
            com.kwad.components.core.j.a.oa()
            com.kwad.components.core.j.a$b r3 = r2.eI
            boolean r3 = com.kwad.components.core.j.a.b(r3)
            if (r3 != 0) goto L14
            return r0
        L14:
            boolean r3 = com.kwad.sdk.core.config.d.gF()
            r1 = 1
            if (r3 != 0) goto L40
            android.content.Context r3 = r2.mContext
            com.kwad.components.core.t.a r3 = com.kwad.components.core.t.a.al(r3)
            boolean r3 = r3.qi()
            if (r3 != 0) goto L32
            android.content.Context r3 = r2.mContext
            com.kwad.components.core.t.a r3 = com.kwad.components.core.t.a.al(r3)
            boolean r3 = r3.aJ(r0)
            return r3
        L32:
            android.content.Context r3 = r2.mContext
            com.kwad.components.core.t.a r3 = com.kwad.components.core.t.a.al(r3)
            boolean r3 = r3.qh()
            if (r3 != 0) goto L3f
            return r1
        L3f:
            return r0
        L40:
            boolean r3 = r2.eA
            if (r3 != 0) goto L50
            android.content.Context r3 = r2.mContext
            com.kwad.components.core.t.a r3 = com.kwad.components.core.t.a.al(r3)
            boolean r3 = r3.aJ(r1)
            r2.eA = r3
        L50:
            boolean r3 = r2.eA
            return r3
    }

    private com.kwad.components.core.j.a.b getCurrentVoiceItem() {
            r2 = this;
            com.kwad.components.core.j.a$b r0 = r2.eI
            if (r0 != 0) goto L10
            com.kwad.components.core.j.a$b r0 = new com.kwad.components.core.j.a$b
            com.kwad.components.ad.f.c.a$4 r1 = new com.kwad.components.ad.f.c.a$4
            r1.<init>(r2)
            r0.<init>(r1)
            r2.eI = r0
        L10:
            com.kwad.components.core.j.a$b r0 = r2.eI
            return r0
    }

    static boolean h(com.kwad.components.ad.f.c.a r0) {
            boolean r0 = r0.nw
            return r0
    }

    private void setAudioEnabled(boolean r2) {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.GL
            r0.setAudioEnabled(r2)
            return
    }

    public final void aH() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.utils.l.cB(r0)
            com.kwad.components.core.video.b r0 = r2.GL
            com.kwad.sdk.core.video.a.c r0 = r0.qD()
            if (r0 != 0) goto L10
            r2.aJ()
        L10:
            boolean r0 = r2.eU()
            if (r0 == 0) goto L39
            com.kwad.components.core.widget.a.b r0 = r2.bG
            boolean r0 = r0.ep()
            if (r0 == 0) goto L39
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.contentalliance.a.a.a r0 = com.kwad.sdk.contentalliance.a.a.a.ap(r0)
            com.kwad.components.core.video.b r1 = r2.GL
            r1.a(r0)
            com.kwad.components.core.j.a r0 = com.kwad.components.core.j.a.oa()
            com.kwad.components.core.j.a$b r1 = r2.getCurrentVoiceItem()
            r0.a(r1)
            com.kwad.components.core.video.b r0 = r2.GL
            r0.start()
        L39:
            com.kwad.components.core.widget.a.b r0 = r2.bG
            com.kwad.sdk.core.h.c r1 = r2.cV
            r0.a(r1)
            return
    }

    public final void aI() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.utils.l.cz(r0)
            com.kwad.components.core.widget.a.b r0 = r2.bG
            com.kwad.sdk.core.h.c r1 = r2.cV
            r0.b(r1)
            com.kwad.components.core.video.b r0 = r2.GL
            r0.release()
            com.kwad.components.core.j.a r0 = com.kwad.components.core.j.a.oa()
            com.kwad.components.core.j.a$b r1 = r2.eI
            r0.c(r1)
            android.content.Context r0 = r2.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r1 = r2.eK
            r0.b(r1)
            return
    }

    public final void eV() {
            r2 = this;
            r0 = 1
            r2.nx = r0
            com.kwad.components.core.widget.a.b r0 = r2.bG
            boolean r0 = r0.ep()
            if (r0 == 0) goto L2b
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.utils.l.cA(r0)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.contentalliance.a.a.a r0 = com.kwad.sdk.contentalliance.a.a.a.ap(r0)
            com.kwad.components.core.video.b r1 = r2.GL
            r1.a(r0)
            com.kwad.components.core.j.a r0 = com.kwad.components.core.j.a.oa()
            com.kwad.components.core.j.a$b r1 = r2.getCurrentVoiceItem()
            r0.a(r1)
            com.kwad.components.core.video.b r0 = r2.GL
            r0.start()
        L2b:
            return
    }

    @Override
    public final void resume() {
            r2 = this;
            com.kwad.components.core.j.a r0 = com.kwad.components.core.j.a.oa()
            com.kwad.components.core.j.a$b r1 = r2.getCurrentVoiceItem()
            r0.a(r1)
            boolean r0 = r2.nw
            boolean r0 = r2.g(r0)
            r2.setAudioEnabled(r0)
            boolean r0 = r2.eU()
            if (r0 != 0) goto L1b
            return
        L1b:
            super.resume()
            return
    }
}
