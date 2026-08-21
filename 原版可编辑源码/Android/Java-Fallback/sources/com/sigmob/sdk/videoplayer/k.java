package com.sigmob.sdk.videoplayer;

public class k extends com.sigmob.sdk.videoplayer.j implements android.media.MediaPlayer.OnBufferingUpdateListener, android.media.MediaPlayer.OnCompletionListener, android.media.MediaPlayer.OnErrorListener, android.media.MediaPlayer.OnInfoListener, android.media.MediaPlayer.OnPreparedListener, android.media.MediaPlayer.OnSeekCompleteListener, android.media.MediaPlayer.OnVideoSizeChangedListener {
    private static final java.lang.String g = "VideoPlayerMediaSystem";
    public android.media.MediaPlayer f;
    private boolean h;














    public k(com.sigmob.sdk.videoplayer.i r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static boolean a(com.sigmob.sdk.videoplayer.k r0, boolean r1) {
            r0.h = r1
            return r1
    }

    @Override
    public void a() {
            r2 = this;
            android.os.Handler r0 = r2.c
            if (r0 != 0) goto L5
            return
        L5:
            android.os.Handler r0 = r2.c
            com.sigmob.sdk.videoplayer.k$6 r1 = new com.sigmob.sdk.videoplayer.k$6
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    @Override
    public void a(float r3) {
            r2 = this;
            android.os.Handler r0 = r2.c
            if (r0 != 0) goto L5
            return
        L5:
            android.os.Handler r0 = r2.c
            com.sigmob.sdk.videoplayer.k$10 r1 = new com.sigmob.sdk.videoplayer.k$10
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    @Override
    public void a(long r3) {
            r2 = this;
            android.os.Handler r0 = r2.c
            if (r0 != 0) goto L5
            return
        L5:
            android.os.Handler r0 = r2.c
            com.sigmob.sdk.videoplayer.k$8 r1 = new com.sigmob.sdk.videoplayer.k$8
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    @Override
    public void a(android.view.Surface r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setSurface() called with: surface = ["
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            android.media.MediaPlayer r0 = r2.f
            if (r0 != 0) goto L1e
            return
        L1e:
            r0.setSurface(r3)
            return
    }

    @Override
    public void b() {
            r1 = this;
            r1.c()
            r0 = 1
            r1.h = r0
            return
    }

    @Override
    public void b(float r3) {
            r2 = this;
            android.media.MediaPlayer r0 = r2.f
            if (r0 != 0) goto L5
            return
        L5:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L19
            android.media.MediaPlayer r0 = r2.f
            android.media.PlaybackParams r0 = r0.getPlaybackParams()
            r0.setSpeed(r3)
            android.media.MediaPlayer r3 = r2.f
            r3.setPlaybackParams(r0)
        L19:
            return
    }

    @Override
    public void c() {
            r3 = this;
            boolean r0 = r3.h
            if (r0 == 0) goto L1c
            android.media.MediaPlayer r0 = r3.f
            if (r0 == 0) goto L1c
            android.graphics.SurfaceTexture r0 = r3.a
            if (r0 == 0) goto L1c
            r0 = 0
            r3.h = r0
            android.media.MediaPlayer r0 = r3.f
            android.view.Surface r1 = new android.view.Surface
            android.graphics.SurfaceTexture r2 = r3.a
            r1.<init>(r2)
            r0.setSurface(r1)
            return
        L1c:
            r3.f()
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "VideoPlayerMediaSystem"
            r0.<init>(r1)
            r3.b = r0
            android.os.HandlerThread r0 = r3.b
            r0.start()
            android.os.Handler r0 = new android.os.Handler
            android.os.HandlerThread r1 = r3.b
            android.os.Looper r1 = r1.getLooper()
            r0.<init>(r1)
            r3.c = r0
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            r3.d = r0
            android.os.Handler r0 = r3.c
            com.sigmob.sdk.videoplayer.k$1 r1 = new com.sigmob.sdk.videoplayer.k$1
            r1.<init>(r3)
            r0.post(r1)
            return
    }

    @Override
    public void d() {
            r2 = this;
            android.os.Handler r0 = r2.c
            if (r0 == 0) goto L13
            android.media.MediaPlayer r0 = r2.f
            if (r0 != 0) goto L9
            goto L13
        L9:
            android.os.Handler r0 = r2.c
            com.sigmob.sdk.videoplayer.k$7 r1 = new com.sigmob.sdk.videoplayer.k$7
            r1.<init>(r2)
            r0.post(r1)
        L13:
            return
    }

    @Override
    public boolean e() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.f
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = r0.isPlaying()
            return r0
    }

    @Override
    public void f() {
            r4 = this;
            android.os.Handler r0 = r4.c
            if (r0 == 0) goto L1d
            android.os.HandlerThread r0 = r4.b
            if (r0 == 0) goto L1d
            android.media.MediaPlayer r0 = r4.f
            if (r0 == 0) goto L1d
            android.os.HandlerThread r0 = r4.b
            android.media.MediaPlayer r1 = r4.f
            android.os.Handler r2 = r4.c
            com.sigmob.sdk.videoplayer.k$9 r3 = new com.sigmob.sdk.videoplayer.k$9
            r3.<init>(r4, r1, r0)
            r2.post(r3)
            r0 = 0
            r4.f = r0
        L1d:
            return
    }

    @Override
    public long g() {
            r2 = this;
            android.media.MediaPlayer r0 = r2.f
            if (r0 == 0) goto La
            int r0 = r0.getCurrentPosition()
            long r0 = (long) r0
            return r0
        La:
            r0 = 0
            return r0
    }

    @Override
    public int h() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.f
            if (r0 == 0) goto L7
            r0.getVideoWidth()
        L7:
            r0 = 0
            return r0
    }

    @Override
    public int i() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.f
            if (r0 == 0) goto L7
            r0.getVideoHeight()
        L7:
            r0 = 0
            return r0
    }

    @Override
    public long j() {
            r2 = this;
            android.media.MediaPlayer r0 = r2.f
            if (r0 == 0) goto La
            int r0 = r0.getDuration()
            long r0 = (long) r0
            return r0
        La:
            r0 = 0
            return r0
    }

    @Override
    public void onBufferingUpdate(android.media.MediaPlayer r2, int r3) {
            r1 = this;
            android.os.Handler r2 = r1.d
            if (r2 != 0) goto L5
            return
        L5:
            android.os.Handler r2 = r1.d
            com.sigmob.sdk.videoplayer.k$13 r0 = new com.sigmob.sdk.videoplayer.k$13
            r0.<init>(r1, r3)
            r2.post(r0)
            return
    }

    @Override
    public void onCompletion(android.media.MediaPlayer r2) {
            r1 = this;
            android.os.Handler r2 = r1.d
            if (r2 != 0) goto L5
            return
        L5:
            android.os.Handler r2 = r1.d
            com.sigmob.sdk.videoplayer.k$12 r0 = new com.sigmob.sdk.videoplayer.k$12
            r0.<init>(r1)
            r2.post(r0)
            return
    }

    @Override
    public boolean onError(android.media.MediaPlayer r2, int r3, int r4) {
            r1 = this;
            android.os.Handler r2 = r1.d
            if (r2 != 0) goto L6
            r2 = 0
            return r2
        L6:
            android.os.Handler r2 = r1.d
            com.sigmob.sdk.videoplayer.k$3 r0 = new com.sigmob.sdk.videoplayer.k$3
            r0.<init>(r1, r3, r4)
            r2.post(r0)
            r2 = 1
            return r2
    }

    @Override
    public boolean onInfo(android.media.MediaPlayer r3, int r4, int r5) {
            r2 = this;
            android.os.Handler r3 = r2.d
            r0 = 0
            if (r3 == 0) goto L14
            com.sigmob.sdk.videoplayer.i r3 = r2.e
            if (r3 != 0) goto La
            goto L14
        La:
            android.os.Handler r3 = r2.d
            com.sigmob.sdk.videoplayer.k$4 r1 = new com.sigmob.sdk.videoplayer.k$4
            r1.<init>(r2, r4, r5)
            r3.post(r1)
        L14:
            return r0
    }

    @Override
    public void onPrepared(android.media.MediaPlayer r2) {
            r1 = this;
            android.os.Handler r2 = r1.d
            if (r2 != 0) goto L5
            return
        L5:
            android.os.Handler r2 = r1.d
            com.sigmob.sdk.videoplayer.k$11 r0 = new com.sigmob.sdk.videoplayer.k$11
            r0.<init>(r1)
            r2.post(r0)
            return
    }

    @Override
    public void onSeekComplete(android.media.MediaPlayer r2) {
            r1 = this;
            android.os.Handler r2 = r1.d
            if (r2 != 0) goto L5
            return
        L5:
            android.os.Handler r2 = r1.d
            com.sigmob.sdk.videoplayer.k$2 r0 = new com.sigmob.sdk.videoplayer.k$2
            r0.<init>(r1)
            r2.post(r0)
            return
    }

    @Override
    public void onSurfaceTextureAvailable(android.graphics.SurfaceTexture r3, int r4, int r5) {
            r2 = this;
            com.sigmob.sdk.videoplayer.i r0 = r2.e
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onSurfaceTextureAvailable() called with: surface = ["
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = "], width = ["
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = "], height = ["
            r0.append(r4)
            r0.append(r5)
            java.lang.String r4 = "]"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r4)
            android.graphics.SurfaceTexture r4 = r2.a
            if (r4 != 0) goto L38
            r2.a = r3
            r2.c()
            goto L3f
        L38:
            com.sigmob.sdk.videoplayer.i r3 = r2.e
            android.graphics.SurfaceTexture r4 = r2.a
            r3.setSurfaceTexture(r4)
        L3f:
            return
    }

    @Override
    public boolean onSurfaceTextureDestroyed(android.graphics.SurfaceTexture r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onSurfaceTextureDestroyed() called with: surface = ["
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "]"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r3)
            r3 = 0
            return r3
    }

    @Override
    public void onSurfaceTextureSizeChanged(android.graphics.SurfaceTexture r3, int r4, int r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onSurfaceTextureSizeChanged() called with: surface = ["
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "], width = ["
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = "], height = ["
            r0.append(r3)
            r0.append(r5)
            java.lang.String r3 = "]"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r3)
            return
    }

    @Override
    public void onSurfaceTextureUpdated(android.graphics.SurfaceTexture r1) {
            r0 = this;
            return
    }

    @Override
    public void onVideoSizeChanged(android.media.MediaPlayer r2, int r3, int r4) {
            r1 = this;
            android.os.Handler r2 = r1.d
            if (r2 != 0) goto L5
            return
        L5:
            android.os.Handler r2 = r1.d
            com.sigmob.sdk.videoplayer.k$5 r0 = new com.sigmob.sdk.videoplayer.k$5
            r0.<init>(r1, r3, r4)
            r2.post(r0)
            return
    }
}
