package com.kwad.sdk.core.video.a;

public final class d extends com.kwad.sdk.core.video.a.a {
    private static volatile boolean avO;
    private static final java.util.Queue<com.kwad.sdk.core.video.a.d> avP = null;
    private com.kwad.sdk.contentalliance.a.a.b Sa;
    private java.lang.String avG;
    private android.media.MediaDataSource avH;
    private final java.lang.Object avI;
    private boolean avJ;
    private final com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper avK;
    private final com.kwad.sdk.core.video.a.d.a avL;
    private boolean avM;
    private boolean avN;
    private boolean avQ;
    private int mSarDen;
    private int mSarNum;


    static class a implements com.kwai.video.ksvodplayerkit.IKSVodPlayer.OnBufferingUpdateListener, com.kwai.video.ksvodplayerkit.IKSVodPlayer.OnErrorListener, com.kwai.video.ksvodplayerkit.IKSVodPlayer.OnEventListener, com.kwai.video.ksvodplayerkit.IKSVodPlayer.OnPreparedListener, com.kwai.video.ksvodplayerkit.IKSVodPlayer.OnVideoSizeChangedListener, com.kwai.video.ksvodplayerkit.IKSVodPlayer.OnVodPlayerReleaseListener {
        final java.lang.ref.WeakReference<com.kwad.sdk.core.video.a.d> mWeakMediaPlayer;

        a(com.kwad.sdk.core.video.a.d r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.mWeakMediaPlayer = r0
                return
        }

        private com.kwad.sdk.core.video.a.d Dr() {
                r1 = this;
                java.lang.ref.WeakReference<com.kwad.sdk.core.video.a.d> r0 = r1.mWeakMediaPlayer
                java.lang.Object r0 = r0.get()
                com.kwad.sdk.core.video.a.d r0 = (com.kwad.sdk.core.video.a.d) r0
                return r0
        }

        public final void onBufferingUpdate(int r2) {
                r1 = this;
                com.kwad.sdk.core.video.a.d r0 = r1.Dr()
                if (r0 == 0) goto L9
                r0.notifyOnBufferingUpdate(r2)
            L9:
                return
        }

        public final void onError(int r3, int r4) {
                r2 = this;
                com.kwad.sdk.core.video.a.d r0 = r2.Dr()
                if (r0 == 0) goto Ld
                r1 = 0
                com.kwad.sdk.core.video.a.d.a(r0, r1)
                r0.notifyOnError(r3, r4)
            Ld:
                return
        }

        public final void onEvent(int r3, int r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "onEvent, what: "
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "KwaiMediaPlayer"
                com.kwad.sdk.core.e.c.i(r1, r0)
                com.kwad.sdk.core.video.a.d r0 = r2.Dr()
                if (r0 == 0) goto L33
                r1 = 10100(0x2774, float:1.4153E-41)
                if (r3 != r1) goto L21
                r0.notifyOnSeekComplete()
                return
            L21:
                r1 = 10101(0x2775, float:1.4155E-41)
                if (r3 != r1) goto L29
                r0.notifyOnCompletion()
                return
            L29:
                r1 = 10209(0x27e1, float:1.4306E-41)
                if (r3 != r1) goto L30
                com.kwad.sdk.core.video.a.d.a(r0)
            L30:
                r0.notifyOnInfo(r3, r4)
            L33:
                return
        }

        public final void onPlayerRelease() {
                r2 = this;
                java.lang.String r0 = "KwaiMediaPlayer"
                java.lang.String r1 = "onPlayerRelease"
                com.kwad.sdk.core.e.c.i(r0, r1)
                return
        }

        public final void onPrepared() {
                r2 = this;
                java.lang.String r0 = "KwaiMediaPlayer"
                java.lang.String r1 = "onPrepared"
                com.kwad.sdk.core.e.c.i(r0, r1)
                com.kwad.sdk.core.video.a.d r0 = r2.Dr()
                if (r0 == 0) goto L10
                r0.notifyOnPrepared()
            L10:
                return
        }

        public final void onVideoSizeChanged(int r3, int r4, int r5, int r6) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "onVideoSizeChanged width: "
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r1 = ", height: "
                r0.append(r1)
                r0.append(r4)
                java.lang.String r1 = ", sarNum:"
                r0.append(r1)
                r0.append(r5)
                java.lang.String r1 = ", sarDen:"
                r0.append(r1)
                r0.append(r6)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "KwaiMediaPlayer"
                com.kwad.sdk.core.e.c.i(r1, r0)
                com.kwad.sdk.core.video.a.d r0 = r2.Dr()
                if (r0 == 0) goto L3a
                r0.u(r3, r4)
                com.kwad.sdk.core.video.a.d.a(r0, r5)
                com.kwad.sdk.core.video.a.d.b(r0, r6)
            L3a:
                return
        }
    }

    static {
            java.util.concurrent.ConcurrentLinkedQueue r0 = new java.util.concurrent.ConcurrentLinkedQueue
            r0.<init>()
            com.kwad.sdk.core.video.a.d.avP = r0
            return
    }

    public d() {
            r4 = this;
            r4.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r4.avI = r0
            r1 = 0
            r4.avN = r1
            r2 = 1
            r4.avQ = r2
            monitor-enter(r0)
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r2 = new com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper     // Catch: java.lang.Throwable -> L2b
            android.app.Application r3 = com.kwad.sdk.m.l.KT()     // Catch: java.lang.Throwable -> L2b
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L2b
            r4.avK = r2     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            com.kwad.sdk.core.video.a.d$a r0 = new com.kwad.sdk.core.video.a.d$a
            r0.<init>(r4)
            r4.avL = r0
            r4.Dn()
            r4.setLooping(r1)
            return
        L2b:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            throw r1
    }

    private void Dm() {
            r1 = this;
            android.media.MediaDataSource r0 = r1.avH
            if (r0 == 0) goto Lf
            r0.close()     // Catch: java.io.IOException -> L8
            goto Lc
        L8:
            r0 = move-exception
            r0.printStackTrace()
        Lc:
            r0 = 0
            r1.avH = r0
        Lf:
            return
    }

    private void Dn() {
            r2 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r2.avK
            com.kwad.sdk.core.video.a.d$a r1 = r2.avL
            r0.setOnPreparedListener(r1)
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r2.avK
            com.kwad.sdk.core.video.a.d$a r1 = r2.avL
            r0.setBufferingUpdateListener(r1)
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r2.avK
            com.kwad.sdk.core.video.a.d$a r1 = r2.avL
            r0.setOnEventListener(r1)
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r2.avK
            com.kwad.sdk.core.video.a.d$a r1 = r2.avL
            r0.setVideoSizeChangedListener(r1)
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r2.avK
            com.kwad.sdk.core.video.a.d$a r1 = r2.avL
            r0.setOnErrorListener(r1)
            return
    }

    private void Do() {
            r2 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r2.avK
            r1 = 0
            r0.setOnPreparedListener(r1)
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r2.avK
            r0.setBufferingUpdateListener(r1)
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r2.avK
            r0.setOnEventListener(r1)
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r2.avK
            r0.setVideoSizeChangedListener(r1)
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r2.avK
            r0.setOnErrorListener(r1)
            return
    }

    private void Dp() {
            r4 = this;
            java.lang.String r0 = "KwaiMediaPlayer"
            boolean r1 = r4.avN
            if (r1 != 0) goto L27
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r1 = r4.avK     // Catch: java.lang.IllegalStateException -> L1e
            int r1 = r1.prepareAsync()     // Catch: java.lang.IllegalStateException -> L1e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.IllegalStateException -> L1e
            java.lang.String r3 = "realPrepare: ret: "
            r2.<init>(r3)     // Catch: java.lang.IllegalStateException -> L1e
            r2.append(r1)     // Catch: java.lang.IllegalStateException -> L1e
            java.lang.String r1 = r2.toString()     // Catch: java.lang.IllegalStateException -> L1e
            com.kwad.sdk.core.e.c.i(r0, r1)     // Catch: java.lang.IllegalStateException -> L1e
            goto L24
        L1e:
            r1 = move-exception
            java.lang.String r2 = "realPrepare failed"
            com.kwad.sdk.core.e.c.e(r0, r2, r1)
        L24:
            r0 = 1
            r4.avN = r0
        L27:
            return
    }

    private void Dq() {
            r4 = this;
            java.util.Queue<com.kwad.sdk.core.video.a.d> r0 = com.kwad.sdk.core.video.a.d.avP
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
            r2 = r1
        L8:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L1a
            java.lang.Object r3 = r0.next()
            com.kwad.sdk.core.video.a.d r3 = (com.kwad.sdk.core.video.a.d) r3
            if (r3 != r4) goto L17
            goto L1b
        L17:
            int r2 = r2 + 1
            goto L8
        L1a:
            r2 = r1
        L1b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r3 = "preloadNextPlayer next player index: "
            r0.<init>(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "KwaiMediaPlayer"
            com.kwad.sdk.core.e.c.i(r3, r0)
            int r2 = r2 + 1
            java.util.Queue<com.kwad.sdk.core.video.a.d> r0 = com.kwad.sdk.core.video.a.d.avP
            int r0 = r0.size()
            if (r2 >= r0) goto L5d
            java.lang.String r0 = "----------------preloadNextPlayer prepare next player----------------"
            com.kwad.sdk.core.e.c.i(r3, r0)
        L3d:
            java.util.Queue<com.kwad.sdk.core.video.a.d> r0 = com.kwad.sdk.core.video.a.d.avP
            if (r1 >= r2) goto L47
            r0.poll()
            int r1 = r1 + 1
            goto L3d
        L47:
            java.lang.Object r0 = r0.poll()
            com.kwad.sdk.core.video.a.d r0 = (com.kwad.sdk.core.video.a.d) r0
            java.util.Queue<com.kwad.sdk.core.video.a.d> r1 = com.kwad.sdk.core.video.a.d.avP
            r1.clear()
            if (r0 == 0) goto L58
            r0.prepareAsync()
            return
        L58:
            java.lang.String r0 = "----------------preloadNextPlayer prepareAsync next player is null----------------"
            com.kwad.sdk.core.e.c.i(r3, r0)
        L5d:
            return
    }

    static int a(com.kwad.sdk.core.video.a.d r0, int r1) {
            r0.mSarNum = r1
            return r1
    }

    static void a(com.kwad.sdk.core.video.a.d r0) {
            r0.Dq()
            return
    }

    static boolean a(com.kwad.sdk.core.video.a.d r0, boolean r1) {
            r1 = 0
            r0.avN = r1
            return r1
    }

    static int b(com.kwad.sdk.core.video.a.d r0, int r1) {
            r0.mSarDen = r1
            return r1
    }

    private void setDataSource(java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            r1 = this;
            r1.avG = r2
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r3 = r1.avK
            r0 = 0
            r3.setDataSource(r2, r0)
            return
    }

    public final void a(com.kwad.sdk.contentalliance.a.a.a r4) {
            r3 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r3.avK
            if (r0 == 0) goto L22
            if (r4 == 0) goto L22
            com.kwai.video.ksvodplayerkit.KSVodVideoContext r0 = new com.kwai.video.ksvodplayerkit.KSVodVideoContext
            r0.<init>()
            long r1 = r4.photoId
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.mVideoId = r1
            long r1 = r4.clickTime
            r0.mClickTime = r1
            java.lang.String r4 = r4.yR()
            r0.mExtra = r4
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r4 = r3.avK
            r4.updateVideoContext(r0)
        L22:
            return
    }

    @Override
    public final void a(com.kwad.sdk.contentalliance.a.a.b r4) {
            r3 = this;
            r3.Sa = r4
            com.kwad.sdk.contentalliance.a.a.a r0 = r4.aka
            r3.a(r0)
            java.lang.Class<com.kwad.sdk.core.video.a.f> r0 = com.kwad.sdk.core.video.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.core.video.a.f r0 = (com.kwad.sdk.core.video.a.f) r0
            java.lang.String r1 = r4.manifest
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r2 = 0
            if (r1 != 0) goto L26
            if (r0 == 0) goto L26
            boolean r0 = r0.sD()
            if (r0 == 0) goto L26
            java.lang.String r4 = r4.manifest
        L22:
            r3.setDataSource(r4, r2)
            return
        L26:
            java.lang.String r4 = r4.videoUrl
            goto L22
    }

    public final void bf(boolean r1) {
            r0 = this;
            r0.avQ = r1
            return
    }

    @Override
    public final int getAudioSessionId() {
            r1 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r1.avK
            com.kwai.video.player.IKwaiMediaPlayer r0 = r0.getKwaiMediaPlayer()
            int r0 = r0.getAudioSessionId()
            return r0
    }

    @Override
    public final java.lang.String getCurrentPlayingUrl() {
            r1 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r1.avK
            if (r0 != 0) goto L7
            java.lang.String r0 = ""
            return r0
        L7:
            java.lang.String r0 = r0.getCurrentPlayUrl()
            return r0
    }

    @Override
    public final long getCurrentPosition() {
            r2 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r2.avK     // Catch: java.lang.IllegalStateException -> L7
            long r0 = r0.getCurrentPosition()     // Catch: java.lang.IllegalStateException -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    @Override
    public final java.lang.String getDataSource() {
            r1 = this;
            java.lang.String r0 = r1.avG
            return r0
    }

    @Override
    public final long getDuration() {
            r2 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r2.avK     // Catch: java.lang.IllegalStateException -> L7
            long r0 = r0.getDuration()     // Catch: java.lang.IllegalStateException -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    @Override
    public final int getMediaPlayerType() {
            r1 = this;
            r0 = 2
            return r0
    }

    @Override
    public final int getVideoHeight() {
            r1 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r1.avK
            com.kwai.video.player.IKwaiMediaPlayer r0 = r0.getKwaiMediaPlayer()
            int r0 = r0.getVideoHeight()
            return r0
    }

    @Override
    public final int getVideoWidth() {
            r1 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r1.avK
            com.kwai.video.player.IKwaiMediaPlayer r0 = r0.getKwaiMediaPlayer()
            int r0 = r0.getVideoWidth()
            return r0
    }

    @Override
    public final boolean isLooping() {
            r1 = this;
            boolean r0 = r1.avM
            return r0
    }

    @Override
    public final boolean isPlaying() {
            r1 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r1.avK     // Catch: java.lang.IllegalStateException -> L7
            boolean r0 = r0.isPlaying()     // Catch: java.lang.IllegalStateException -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    @Override
    public final void pause() {
            r1 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r1.avK
            r0.pause()
            return
    }

    @Override
    public final boolean prepareAsync() {
            r3 = this;
            boolean r0 = r3.avQ
            r1 = 1
            if (r0 == 0) goto L27
            java.util.Queue<com.kwad.sdk.core.video.a.d> r0 = com.kwad.sdk.core.video.a.d.avP
            boolean r0 = r0.contains(r3)
            if (r0 != 0) goto L12
            java.util.Queue<com.kwad.sdk.core.video.a.d> r0 = com.kwad.sdk.core.video.a.d.avP
            r0.offer(r3)
        L12:
            java.util.Queue<com.kwad.sdk.core.video.a.d> r0 = com.kwad.sdk.core.video.a.d.avP
            int r0 = r0.size()
            if (r0 != r1) goto L25
            r3.Dp()
            java.lang.String r0 = "KwaiMediaPlayer"
            java.lang.String r2 = "prepareAsync first"
            com.kwad.sdk.core.e.c.i(r0, r2)
            return r1
        L25:
            r0 = 0
            return r0
        L27:
            r3.Dp()
            return r1
    }

    @Override
    public final void release() {
            r3 = this;
            java.util.Queue<com.kwad.sdk.core.video.a.d> r0 = com.kwad.sdk.core.video.a.d.avP
            boolean r0 = r0.remove(r3)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "release remote player ret: "
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r0 = ", player list size: "
            r1.append(r0)
            java.util.Queue<com.kwad.sdk.core.video.a.d> r0 = com.kwad.sdk.core.video.a.d.avP
            int r0 = r0.size()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "KwaiMediaPlayer"
            com.kwad.sdk.core.e.c.i(r1, r0)
            r0 = 1
            r3.avJ = r0
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r3.avK
            com.kwad.sdk.core.video.a.d$1 r1 = new com.kwad.sdk.core.video.a.d$1
            r1.<init>(r3)
            r0.releaseAsync(r1)
            r3.Dm()
            r3.resetListeners()
            r3.Do()
            return
    }

    @Override
    public final void reset() {
            r1 = this;
            r0 = 0
            r1.avN = r0
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r1.avK     // Catch: java.lang.IllegalStateException -> Le
            com.kwai.video.player.IKwaiMediaPlayer r0 = r0.getKwaiMediaPlayer()     // Catch: java.lang.IllegalStateException -> Le
            if (r0 == 0) goto Le
            r0.reset()     // Catch: java.lang.IllegalStateException -> Le
        Le:
            r1.Dm()
            r1.resetListeners()
            r1.Dn()
            return
    }

    @Override
    public final void seekTo(long r2) {
            r1 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r1.avK
            int r2 = (int) r2
            long r2 = (long) r2
            r0.seekTo(r2)
            return
    }

    @Override
    public final void setAudioStreamType(int r1) {
            r0 = this;
            return
    }

    @Override
    public final void setDataSource(android.content.Context r1, android.net.Uri r2) {
            r0 = this;
            return
    }

    @Override
    public final void setDataSource(android.content.Context r1, android.net.Uri r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            r0 = this;
            return
    }

    @Override
    public final void setDataSource(java.io.FileDescriptor r1) {
            r0 = this;
            return
    }

    @Override
    public final void setDataSource(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.setDataSource(r2, r0)
            return
    }

    @Override
    public final void setDisplay(android.view.SurfaceHolder r3) {
            r2 = this;
            java.lang.Object r0 = r2.avI
            monitor-enter(r0)
            boolean r1 = r2.avJ     // Catch: java.lang.Throwable -> Le
            if (r1 != 0) goto Lc
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r1 = r2.avK     // Catch: java.lang.Throwable -> Le
            r1.setDisplay(r3)     // Catch: java.lang.Throwable -> Le
        Lc:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            return
        Le:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            throw r3
    }

    @Override
    public final void setLooping(boolean r2) {
            r1 = this;
            r1.avM = r2
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r1.avK
            r0.setLooping(r2)
            return
    }

    @Override
    public final void setScreenOnWhilePlaying(boolean r1) {
            r0 = this;
            return
    }

    @Override
    public final void setSpeed(float r2) {
            r1 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r1.avK
            r0.setSpeed(r2)
            return
    }

    @Override
    public final void setSurface(android.view.Surface r2) {
            r1 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r1.avK
            r0.setSurface(r2)
            return
    }

    @Override
    public final void setVolume(float r2, float r3) {
            r1 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r1.avK
            r0.setVolume(r2, r3)
            f(r2)
            return
    }

    @Override
    public final void start() {
            r2 = this;
            java.lang.String r0 = "KwaiMediaPlayer"
            java.lang.String r1 = "start"
            com.kwad.sdk.core.e.c.i(r0, r1)
            r2.Dp()
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r2.avK
            r0.start()
            return
    }

    @Override
    public final void stop() {
            r1 = this;
            com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper r0 = r1.avK
            r0.stop()
            return
    }
}
