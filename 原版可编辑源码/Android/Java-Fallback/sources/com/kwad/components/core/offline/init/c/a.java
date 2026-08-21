package com.kwad.components.core.offline.init.c;

final class a implements com.kwad.components.offline.api.core.video.IKsMediaPlayer {
    private com.kwad.components.core.video.b LS;
    private com.kwad.components.core.offline.init.c.c LT;
    private com.kwad.components.offline.api.core.video.listener.VideoMuteStateChangeListener LU;
    private boolean LV;
    private int LW;
    private android.content.Context mContext;
    private com.kwad.components.core.video.DetailVideoView mDetailVideoView;
    private boolean nw;
    private boolean yd;
    private com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener yg;



    a() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.nw = r0
            r0 = -1
            r1.LW = r0
            return
    }

    static com.kwad.components.core.video.b a(com.kwad.components.core.offline.init.c.a r0) {
            com.kwad.components.core.video.b r0 = r0.LS
            return r0
    }

    static boolean a(com.kwad.components.core.offline.init.c.a r0, boolean r1) {
            r1 = 1
            r0.yd = r1
            return r1
    }

    static com.kwad.components.offline.api.core.video.listener.VideoMuteStateChangeListener b(com.kwad.components.core.offline.init.c.a r0) {
            com.kwad.components.offline.api.core.video.listener.VideoMuteStateChangeListener r0 = r0.LU
            return r0
    }

    private com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener op() {
            r1 = this;
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r0 = r1.yg
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.c.a$2 r0 = new com.kwad.components.core.offline.init.c.a$2
            r0.<init>(r1)
            r1.yg = r0
        Lb:
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r0 = r1.yg
            return r0
    }

    public final com.kwad.components.core.offline.init.c.a a(com.kwad.components.core.video.b r1) {
            r0 = this;
            com.kwad.sdk.utils.ao.checkNotNull(r1)
            r0.LS = r1
            return r0
    }

    @Override
    public final void addOnInfoListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnInfoListener r3) {
            r2 = this;
            com.kwad.components.core.video.b r0 = r2.LS
            com.kwad.components.offline.api.core.video.IMediaPlayer r1 = r2.getMediaPlayer()
            com.kwad.sdk.core.video.a.c$d r3 = com.kwad.components.core.offline.init.c.d.a(r1, r3)
            r0.a(r3)
            return
    }

    @Override
    public final void addOnPreparedListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnPreparedListener r3) {
            r2 = this;
            com.kwad.components.core.video.b r0 = r2.LS
            com.kwad.components.offline.api.core.video.IMediaPlayer r1 = r2.getMediaPlayer()
            com.kwad.sdk.core.video.a.c$e r3 = com.kwad.components.core.offline.init.c.d.a(r1, r3)
            r0.a(r3)
            return
    }

    @Override
    public final void clear() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            r0.clear()
            return
    }

    @Override
    public final int getBufferPercentage() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            int r0 = r0.getBufferPercentage()
            return r0
    }

    @Override
    public final java.lang.String getCurrentPlayingUrl() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            java.lang.String r0 = r0.getCurrentPlayingUrl()
            return r0
    }

    @Override
    public final long getCurrentPosition() {
            r2 = this;
            com.kwad.components.core.video.b r0 = r2.LS
            long r0 = r0.getCurrentPosition()
            return r0
    }

    @Override
    public final long getDuration() {
            r2 = this;
            com.kwad.components.core.video.b r0 = r2.LS
            long r0 = r0.getDuration()
            return r0
    }

    @Override
    public final int getMaxVolume() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.video.IMediaPlayer getMediaPlayer() {
            r2 = this;
            com.kwad.components.core.video.b r0 = r2.LS
            com.kwad.sdk.core.video.a.c r0 = r0.qD()
            if (r0 != 0) goto La
            r0 = 0
            return r0
        La:
            com.kwad.components.core.offline.init.c.c r1 = r2.LT
            if (r1 == 0) goto L14
            com.kwad.sdk.core.video.a.c r1 = r1.or()
            if (r1 == r0) goto L1f
        L14:
            com.kwad.components.core.offline.init.c.c r1 = new com.kwad.components.core.offline.init.c.c
            r1.<init>()
            com.kwad.components.core.offline.init.c.c r0 = r1.b(r0)
            r2.LT = r0
        L1f:
            com.kwad.components.core.offline.init.c.c r0 = r2.LT
            return r0
    }

    @Override
    public final int getMediaPlayerType() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            int r0 = r0.getMediaPlayerType()
            return r0
    }

    @Override
    public final long getPlayDuration() {
            r2 = this;
            com.kwad.components.core.video.b r0 = r2.LS
            long r0 = r0.getPlayDuration()
            return r0
    }

    @Override
    public final java.lang.String getStateString(int r1) {
            r0 = this;
            java.lang.String r1 = com.kwad.components.core.video.b.getStateString(r1)
            return r1
    }

    @Override
    public final int getVideoHeight() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            int r0 = r0.getVideoHeight()
            return r0
    }

    @Override
    public final int getVideoWidth() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            int r0 = r0.getVideoWidth()
            return r0
    }

    @Override
    public final int getVolume() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final void initMediaPlayer(com.kwad.components.offline.api.core.video.mdoel.PlayVideoInfo r2, com.kwad.components.offline.api.core.video.IKsMediaPlayerView r3) {
            r1 = this;
            boolean r0 = r3 instanceof com.kwad.components.core.offline.init.c.b
            if (r0 != 0) goto Lc
            java.lang.String r2 = "KsMediaPlayer"
            java.lang.String r3 = "videoView not instanceof KsMediaPlayerView"
            com.kwad.sdk.core.e.c.e(r2, r3)
            return
        Lc:
            com.kwad.components.core.offline.init.c.b r3 = (com.kwad.components.core.offline.init.c.b) r3
            com.kwad.components.core.video.DetailVideoView r3 = r3.oq()
            r1.mDetailVideoView = r3
            android.content.Context r3 = r3.getContext()
            android.content.Context r3 = r3.getApplicationContext()
            r1.mContext = r3
            com.kwad.components.core.video.b r3 = r1.LS
            com.kwad.sdk.contentalliance.a.a.b r2 = com.kwad.components.core.offline.init.c.d.a(r2)
            com.kwad.components.core.video.DetailVideoView r0 = r1.mDetailVideoView
            r3.a(r2, r0)
            int r2 = r1.LW
            r3 = -1
            if (r2 == r3) goto L31
            r1.setVideoAdaptStrategy(r2)
        L31:
            return
    }

    @Override
    public final void initMediaPlayer(com.kwad.components.offline.api.core.video.mdoel.PlayVideoInfo r2, boolean r3, boolean r4, com.kwad.components.offline.api.core.video.IKsMediaPlayerView r5) {
            r1 = this;
            boolean r0 = r5 instanceof com.kwad.components.core.offline.init.c.b
            if (r0 != 0) goto Lc
            java.lang.String r2 = "KsMediaPlayer"
            java.lang.String r3 = "videoView not instanceof KsMediaPlayerView"
            com.kwad.sdk.core.e.c.e(r2, r3)
            return
        Lc:
            com.kwad.components.core.video.b r0 = r1.LS
            com.kwad.sdk.contentalliance.a.a.b r2 = com.kwad.components.core.offline.init.c.d.a(r2)
            com.kwad.components.core.offline.init.c.b r5 = (com.kwad.components.core.offline.init.c.b) r5
            com.kwad.components.core.video.DetailVideoView r5 = r5.oq()
            r0.a(r2, r3, r4, r5)
            return
    }

    @Override
    public final boolean isPlaying() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            boolean r0 = r0.isPlaying()
            return r0
    }

    @Override
    public final boolean isPrepared() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            boolean r0 = r0.isPrepared()
            return r0
    }

    @Override
    public final boolean isPreparing() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            boolean r0 = r0.isPreparing()
            return r0
    }

    @Override
    public final void notifyOnInfoListener(com.kwad.components.offline.api.core.video.IMediaPlayer r2, int r3, int r4) {
            r1 = this;
            boolean r0 = r2 instanceof com.kwad.components.core.offline.init.c.c
            if (r0 != 0) goto Lc
            java.lang.String r2 = "KsMediaPlayer"
            java.lang.String r3 = "videoView not instanceof KsMediaPlayerView"
            com.kwad.sdk.core.e.c.e(r2, r3)
            return
        Lc:
            com.kwad.components.core.video.b r0 = r1.LS
            com.kwad.components.core.offline.init.c.c r2 = (com.kwad.components.core.offline.init.c.c) r2
            com.kwad.sdk.core.video.a.c r2 = r2.or()
            r0.a(r2, r3, r4)
            return
    }

    @Override
    public final void onPlayStateChanged(int r2) {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            r0.onPlayStateChanged(r2)
            return
    }

    public final com.kwad.components.core.video.b oo() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            return r0
    }

    @Override
    public final boolean pause() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            boolean r0 = r0.pause()
            return r0
    }

    @Override
    public final void prepareAsync() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            r0.prepareAsync()
            return
    }

    @Override
    public final void registerVideoMuteStateListener(com.kwad.components.offline.api.core.video.listener.VideoMuteStateChangeListener r1) {
            r0 = this;
            r0.LU = r1
            return
    }

    @Override
    public final void registerVideoPlayStateListener(com.kwad.components.offline.api.core.video.listener.OfflineVideoPlayStateListener r2) {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            com.kwad.components.core.video.k r2 = com.kwad.components.core.offline.init.c.d.a(r2)
            r0.c(r2)
            return
    }

    @Override
    public final void release() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            r0.release()
            return
    }

    @Override
    public final void release(com.kwad.components.offline.api.core.video.listener.ReleaseCallback r2) {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            com.kwad.components.core.video.b$a r2 = com.kwad.components.core.offline.init.c.d.a(r2)
            r0.a(r2)
            return
    }

    @Override
    public final void release(com.kwad.components.offline.api.core.video.listener.ReleaseCallback r2, boolean r3) {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            com.kwad.components.core.video.b$a r2 = com.kwad.components.core.offline.init.c.d.a(r2)
            r0.a(r2, r3)
            return
    }

    @Override
    public final void releaseSync() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            r0.releaseSync()
            return
    }

    @Override
    public final void removeInfoListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnInfoListener r3) {
            r2 = this;
            com.kwad.components.core.video.b r0 = r2.LS
            com.kwad.components.offline.api.core.video.IMediaPlayer r1 = r2.getMediaPlayer()
            com.kwad.sdk.core.video.a.c$d r3 = com.kwad.components.core.offline.init.c.d.a(r1, r3)
            r0.b(r3)
            return
    }

    @Override
    public final void resetAndPlay(com.kwad.components.offline.api.core.video.mdoel.PlayVideoInfo r2) {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            com.kwad.components.core.offline.init.c.d.a(r2)
            r0.qG()
            return
    }

    @Override
    public final void restart() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            r0.restart()
            return
    }

    @Override
    public final void resume() {
            r2 = this;
            com.kwad.components.core.video.b r0 = r2.LS
            r0.resume()
            boolean r0 = r2.nw
            if (r0 != 0) goto L11
            boolean r0 = r2.LV
            if (r0 == 0) goto L3f
            boolean r0 = r2.yd
            if (r0 == 0) goto L3f
        L11:
            android.content.Context r0 = r2.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            boolean r1 = r2.LV
            r0.aJ(r1)
            boolean r0 = r2.LV
            r1 = 0
            if (r0 == 0) goto L2e
            boolean r0 = r2.yd
            if (r0 == 0) goto L2e
            r2.yd = r1
            r0 = 1
            r2.setAudioEnabled(r0)
            r2.nw = r0
            return
        L2e:
            android.content.Context r0 = r2.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            boolean r0 = r0.qh()
            if (r0 == 0) goto L3f
            r2.nw = r1
            r2.setAudioEnabled(r1)
        L3f:
            return
    }

    @Override
    public final void seekTo(long r2) {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            r0.seekTo(r2)
            return
    }

    @Override
    public final void setAudioEnabled(boolean r3) {
            r2 = this;
            if (r3 == 0) goto Lc
            android.content.Context r0 = r2.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            r1 = 1
            r0.aJ(r1)
        Lc:
            boolean r0 = r2.nw
            if (r3 != r0) goto L16
            java.lang.String r3 = "autoVoice"
            com.kwad.sdk.core.video.a.a.a.dI(r3)
            return
        L16:
            r2.nw = r3
            com.kwad.components.core.offline.init.c.a$1 r0 = new com.kwad.components.core.offline.init.c.a$1
            r0.<init>(r2, r3)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }

    @Override
    public final void setDataSource(com.kwad.components.offline.api.core.video.mdoel.PlayVideoInfo r2) {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            com.kwad.sdk.contentalliance.a.a.b r2 = com.kwad.components.core.offline.init.c.d.a(r2)
            r0.a(r2)
            return
    }

    @Override
    public final void setForceGetAudioFocus(boolean r2) {
            r1 = this;
            r1.LV = r2
            android.content.Context r2 = r1.mContext
            if (r2 == 0) goto L11
            com.kwad.components.core.t.a r2 = com.kwad.components.core.t.a.al(r2)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r0 = r1.op()
            r2.a(r0)
        L11:
            return
    }

    @Override
    public final void setRadius(float r2, float r3, float r4, float r5) {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            r0.setRadius(r2, r3, r4, r5)
            return
    }

    @Override
    public final void setSpeed(float r2) {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            r0.setSpeed(r2)
            return
    }

    @Override
    public final void setSurface(android.view.Surface r2) {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            r0.setSurface(r2)
            return
    }

    @Override
    public final void setVideoAdaptStrategy(int r3) {
            r2 = this;
            r2.LW = r3
            com.kwad.components.core.video.DetailVideoView r0 = r2.mDetailVideoView
            if (r0 == 0) goto La
            r1 = 1
            r0.f(r1, r3)
        La:
            return
    }

    @Override
    public final void setVolume(float r2, float r3) {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            r0.setVolume(r2, r3)
            return
    }

    @Override
    public final void start() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            r0.start()
            return
    }

    @Override
    public final void start(long r2) {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            r0.start(r2)
            return
    }

    @Override
    public final void stopAndPrepareAsync() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            r0.stopAndPrepareAsync()
            return
    }

    @Override
    public final void unRegisterVideoPlayStateListener(com.kwad.components.offline.api.core.video.listener.OfflineVideoPlayStateListener r2) {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            com.kwad.components.core.video.k r2 = com.kwad.components.core.offline.init.c.d.a(r2)
            r0.d(r2)
            return
    }

    @Override
    public final void updateKsPlayLogParam(com.kwad.components.offline.api.core.video.mdoel.KsPlayerLogParams r2) {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.LS
            com.kwad.sdk.contentalliance.a.a.a r2 = com.kwad.components.core.offline.init.c.d.a(r2)
            r0.a(r2)
            return
    }
}
