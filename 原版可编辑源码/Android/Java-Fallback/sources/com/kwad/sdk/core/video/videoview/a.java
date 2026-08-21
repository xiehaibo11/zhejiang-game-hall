package com.kwad.sdk.core.video.videoview;

@java.lang.Deprecated
public final class a extends com.kwad.sdk.core.view.AdBasePvFrameLayout implements android.view.TextureView.SurfaceTextureListener, com.kwad.sdk.core.video.videoview.c {
    private static java.util.concurrent.atomic.AtomicBoolean awa;
    private int RV;
    private com.kwad.sdk.core.video.a.c RW;
    private int RX;
    private long RY;
    private com.kwad.sdk.contentalliance.a.a.b Sa;
    private com.kwad.sdk.core.video.a.c.e Sh;
    private com.kwad.sdk.core.video.a.c.h Si;
    private com.kwad.sdk.core.video.a.c.b Sj;
    private com.kwad.sdk.core.video.a.c.c Sk;
    private com.kwad.sdk.core.video.a.c.d Sl;
    private com.kwad.sdk.core.video.a.c.a Sm;
    private android.graphics.SurfaceTexture St;
    private android.view.Surface Su;
    private android.media.AudioManager avW;
    private com.kwad.sdk.core.video.a avX;
    private com.kwad.sdk.core.video.videoview.b avY;
    private boolean avZ;
    private boolean awb;
    private boolean awc;
    private android.widget.ImageView awd;
    private com.kwad.sdk.contentalliance.a.a.a cT;
    private android.widget.FrameLayout hk;
    private android.content.Context mContext;
    private java.util.Map<java.lang.String, java.lang.String> mHeaders;
    private java.lang.String mUrl;








    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.kwad.sdk.core.video.videoview.a.awa = r0
            return
    }

    public a(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    private a(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r2 = 0
            r0.<init>(r1, r2)
            r2 = 0
            r0.RV = r2
            r0.avZ = r2
            r0.awb = r2
            r0.awc = r2
            com.kwad.sdk.core.video.videoview.a$1 r2 = new com.kwad.sdk.core.video.videoview.a$1
            r2.<init>(r0)
            r0.Sh = r2
            com.kwad.sdk.core.video.videoview.a$2 r2 = new com.kwad.sdk.core.video.videoview.a$2
            r2.<init>(r0)
            r0.Si = r2
            com.kwad.sdk.core.video.videoview.a$3 r2 = new com.kwad.sdk.core.video.videoview.a$3
            r2.<init>(r0)
            r0.Sj = r2
            com.kwad.sdk.core.video.videoview.a$4 r2 = new com.kwad.sdk.core.video.videoview.a$4
            r2.<init>(r0)
            r0.Sk = r2
            com.kwad.sdk.core.video.videoview.a$5 r2 = new com.kwad.sdk.core.video.videoview.a$5
            r2.<init>(r0)
            r0.Sl = r2
            com.kwad.sdk.core.video.videoview.a$6 r2 = new com.kwad.sdk.core.video.videoview.a$6
            r2.<init>(r0)
            r0.Sm = r2
            r0.mContext = r1
            r0.init()
            return
    }

    private void DA() {
            r2 = this;
            android.media.AudioManager r0 = r2.avW
            r1 = 0
            if (r0 == 0) goto La
            r0.abandonAudioFocus(r1)
            r2.avW = r1
        La:
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            if (r0 == 0) goto L13
            r0.release()
            r2.RW = r1
        L13:
            com.kwad.sdk.core.video.videoview.a$7 r0 = new com.kwad.sdk.core.video.videoview.a$7
            r0.<init>(r2)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            android.view.Surface r0 = r2.Su
            if (r0 == 0) goto L24
            r0.release()
            r2.Su = r1
        L24:
            android.graphics.SurfaceTexture r0 = r2.St
            if (r0 == 0) goto L2d
            r0.release()
            r2.St = r1
        L2d:
            r0 = 0
            r2.RV = r0
            return
    }

    private android.widget.ImageView Du() {
            r3 = this;
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r3.mContext
            r0.<init>(r1)
            android.widget.FrameLayout$LayoutParams r1 = new android.widget.FrameLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r3.addView(r0, r1)
            return r0
    }

    private boolean Dv() {
            r2 = this;
            int r0 = r2.RV
            r1 = 6
            if (r0 != r1) goto L7
            r0 = 1
            return r0
        L7:
            r0 = 0
            return r0
    }

    private void Dx() {
            r4 = this;
            com.kwad.sdk.core.video.a.c r0 = r4.RW
            if (r0 != 0) goto L39
            java.lang.Class<com.kwad.sdk.core.video.a.f> r0 = com.kwad.sdk.core.video.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.core.video.a.f r0 = (com.kwad.sdk.core.video.a.f) r0
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L18
            boolean r3 = r0.xs()
            if (r3 == 0) goto L18
            r3 = r1
            goto L19
        L18:
            r3 = r2
        L19:
            if (r0 == 0) goto L22
            boolean r0 = r0.xt()
            if (r0 == 0) goto L22
            goto L23
        L22:
            r1 = r2
        L23:
            android.content.Context r0 = r4.mContext
            com.kwad.sdk.core.video.a.c r0 = com.kwad.sdk.core.video.a.e.a(r0, r2, r3, r1)
            r4.RW = r0
            r1 = 3
            r0.setAudioStreamType(r1)
            boolean r0 = r4.awb
            if (r0 != 0) goto L39
            com.kwad.sdk.core.video.a.c r0 = r4.RW
            r1 = 0
            r0.setVolume(r1, r1)
        L39:
            return
    }

    private void Dy() {
            r4 = this;
            android.widget.FrameLayout r0 = r4.hk
            com.kwad.sdk.core.video.a r1 = r4.avX
            r0.removeView(r1)
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -1
            r2 = 17
            r0.<init>(r1, r1, r2)
            android.widget.FrameLayout r1 = r4.hk
            com.kwad.sdk.core.video.a r2 = r4.avX
            r3 = 0
            r1.addView(r2, r3, r0)
            return
    }

    private void Dz() {
            r4 = this;
            java.lang.String r0 = "KSVideoPlayerViewView"
            android.widget.FrameLayout r1 = r4.hk
            r2 = 1
            r1.setKeepScreenOn(r2)
            com.kwad.sdk.core.video.a.c r1 = r4.RW
            com.kwad.sdk.core.video.a.c$e r3 = r4.Sh
            r1.b(r3)
            com.kwad.sdk.core.video.a.c r1 = r4.RW
            com.kwad.sdk.core.video.a.c$h r3 = r4.Si
            r1.a(r3)
            com.kwad.sdk.core.video.a.c r1 = r4.RW
            com.kwad.sdk.core.video.a.c$b r3 = r4.Sj
            r1.a(r3)
            com.kwad.sdk.core.video.a.c r1 = r4.RW
            com.kwad.sdk.core.video.a.c$c r3 = r4.Sk
            r1.a(r3)
            com.kwad.sdk.core.video.a.c r1 = r4.RW
            com.kwad.sdk.core.video.a.c$d r3 = r4.Sl
            r1.c(r3)
            com.kwad.sdk.core.video.a.c r1 = r4.RW
            com.kwad.sdk.core.video.a.c$a r3 = r4.Sm
            r1.a(r3)
            com.kwad.sdk.contentalliance.a.a.b r1 = r4.Sa     // Catch: java.lang.Exception -> L70
            if (r1 == 0) goto L40
            com.kwad.sdk.contentalliance.a.a.a r1 = r4.cT     // Catch: java.lang.Exception -> L70
            if (r1 == 0) goto L40
            com.kwad.sdk.contentalliance.a.a.b r1 = r4.Sa     // Catch: java.lang.Exception -> L70
            com.kwad.sdk.contentalliance.a.a.a r3 = r4.cT     // Catch: java.lang.Exception -> L70
            r1.aka = r3     // Catch: java.lang.Exception -> L70
        L40:
            com.kwad.sdk.core.video.a.c r1 = r4.RW     // Catch: java.lang.Exception -> L70
            com.kwad.sdk.contentalliance.a.a.b r3 = r4.Sa     // Catch: java.lang.Exception -> L70
            r1.a(r3)     // Catch: java.lang.Exception -> L70
            android.view.Surface r1 = r4.Su     // Catch: java.lang.Exception -> L70
            if (r1 != 0) goto L54
            android.view.Surface r1 = new android.view.Surface     // Catch: java.lang.Exception -> L70
            android.graphics.SurfaceTexture r3 = r4.St     // Catch: java.lang.Exception -> L70
            r1.<init>(r3)     // Catch: java.lang.Exception -> L70
            r4.Su = r1     // Catch: java.lang.Exception -> L70
        L54:
            com.kwad.sdk.core.video.a.c r1 = r4.RW     // Catch: java.lang.Exception -> L70
            android.view.Surface r3 = r4.Su     // Catch: java.lang.Exception -> L70
            r1.setSurface(r3)     // Catch: java.lang.Exception -> L70
            com.kwad.sdk.core.video.a.c r1 = r4.RW     // Catch: java.lang.Exception -> L70
            boolean r1 = r1.prepareAsync()     // Catch: java.lang.Exception -> L70
            if (r1 == 0) goto L6f
            r4.RV = r2     // Catch: java.lang.Exception -> L70
            com.kwad.sdk.core.video.videoview.b r1 = r4.avY     // Catch: java.lang.Exception -> L70
            r1.onPlayStateChanged(r2)     // Catch: java.lang.Exception -> L70
            java.lang.String r1 = "STATE_PREPARING"
            com.kwad.sdk.core.e.c.i(r0, r1)     // Catch: java.lang.Exception -> L70
        L6f:
            return
        L70:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            java.lang.String r2 = "打开播放器发生错误"
            com.kwad.sdk.core.e.c.e(r0, r2, r1)
            return
    }

    static int b(com.kwad.sdk.core.video.videoview.a r0, int r1) {
            r0.RV = r1
            return r1
    }

    static int c(com.kwad.sdk.core.video.videoview.a r0) {
            int r0 = r0.RV
            return r0
    }

    static int c(com.kwad.sdk.core.video.videoview.a r0, int r1) {
            r0.RX = r1
            return r1
    }

    private void cx(com.kwad.sdk.core.response.model.AdTemplate r4) {
            r3 = this;
            java.lang.Class<com.kwad.sdk.service.a.g> r0 = com.kwad.sdk.service.a.g.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.g r0 = (com.kwad.sdk.service.a.g) r0
            if (r0 == 0) goto L13
            android.widget.ImageView r1 = r3.awd
            java.lang.String r2 = com.kwad.sdk.core.response.b.d.ck(r4)
            r0.load(r1, r2, r4)
        L13:
            return
    }

    static com.kwad.sdk.core.video.videoview.b d(com.kwad.sdk.core.video.videoview.a r0) {
            com.kwad.sdk.core.video.videoview.b r0 = r0.avY
            return r0
    }

    static boolean e(com.kwad.sdk.core.video.videoview.a r0) {
            boolean r0 = r0.avZ
            return r0
    }

    static android.content.Context f(com.kwad.sdk.core.video.videoview.a r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    static java.lang.String g(com.kwad.sdk.core.video.videoview.a r0) {
            java.lang.String r0 = r0.mUrl
            return r0
    }

    static long h(com.kwad.sdk.core.video.videoview.a r2) {
            long r0 = r2.RY
            return r0
    }

    static boolean i(com.kwad.sdk.core.video.videoview.a r0) {
            boolean r0 = r0.awc
            return r0
    }

    private void init() {
            r2 = this;
            android.widget.ImageView r0 = r2.Du()
            r2.awd = r0
            android.widget.FrameLayout r0 = new android.widget.FrameLayout
            android.content.Context r1 = r2.mContext
            r0.<init>(r1)
            r2.hk = r0
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            android.widget.FrameLayout r1 = r2.hk
            r2.addView(r1, r0)
            return
    }

    static com.kwad.sdk.core.video.a j(com.kwad.sdk.core.video.videoview.a r0) {
            com.kwad.sdk.core.video.a r0 = r0.avX
            return r0
    }

    static android.widget.FrameLayout k(com.kwad.sdk.core.video.videoview.a r0) {
            android.widget.FrameLayout r0 = r0.hk
            return r0
    }

    private void qJ() {
            r2 = this;
            com.kwad.sdk.core.video.a r0 = r2.avX
            if (r0 != 0) goto L10
            com.kwad.sdk.core.video.a r0 = new com.kwad.sdk.core.video.a
            android.content.Context r1 = r2.mContext
            r0.<init>(r1)
            r2.avX = r0
            r0.setSurfaceTextureListener(r2)
        L10:
            return
    }

    private void setPlayType(int r2) {
            r1 = this;
            com.kwad.sdk.contentalliance.a.a.b r0 = r1.Sa
            if (r0 == 0) goto Le
            com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = r0.videoPlayerStatus
            if (r0 == 0) goto Le
            com.kwad.sdk.contentalliance.a.a.b r0 = r1.Sa
            com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = r0.videoPlayerStatus
            r0.mVideoPlayerType = r2
        Le:
            return
    }

    @Override
    public final boolean Dw() {
            r2 = this;
            int r0 = r2.RV
            r1 = 7
            if (r0 != r1) goto L7
            r0 = 1
            return r0
        L7:
            r0 = 0
            return r0
    }

    public final void a(com.kwad.sdk.contentalliance.a.a.b r1, java.util.Map<java.lang.String, java.lang.String> r2) {
            r0 = this;
            r0.Sa = r1
            java.lang.String r2 = r1.videoUrl
            r0.mUrl = r2
            r2 = 0
            r0.mHeaders = r2
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.adTemplate
            r0.cx(r1)
            return
    }

    @Override
    public final int getBufferPercentage() {
            r1 = this;
            int r0 = r1.RX
            return r0
    }

    public final com.kwad.sdk.core.video.videoview.b getController() {
            r1 = this;
            com.kwad.sdk.core.video.videoview.b r0 = r1.avY
            return r0
    }

    @Override
    public final long getCurrentPosition() {
            r2 = this;
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            if (r0 == 0) goto L9
            long r0 = r0.getCurrentPosition()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final long getDuration() {
            r2 = this;
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            if (r0 == 0) goto L9
            long r0 = r0.getDuration()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public final int getMaxVolume() {
            r2 = this;
            android.media.AudioManager r0 = r2.avW
            if (r0 == 0) goto La
            r1 = 3
            int r0 = r0.getStreamMaxVolume(r1)
            return r0
        La:
            r0 = 0
            return r0
    }

    public final com.kwad.sdk.core.video.videoview.b getVideoController() {
            r1 = this;
            com.kwad.sdk.core.video.videoview.b r0 = r1.avY
            return r0
    }

    public final int getVolume() {
            r2 = this;
            android.media.AudioManager r0 = r2.avW
            if (r0 == 0) goto La
            r1 = 3
            int r0 = r0.getStreamVolume(r1)
            return r0
        La:
            r0 = 0
            return r0
    }

    public final boolean isCompleted() {
            r2 = this;
            int r0 = r2.RV
            r1 = 9
            if (r0 != r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    @Override
    public final boolean isIdle() {
            r1 = this;
            int r0 = r1.RV
            if (r0 != 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    @Override
    public final boolean isPaused() {
            r2 = this;
            int r0 = r2.RV
            r1 = 5
            if (r0 != r1) goto L7
            r0 = 1
            return r0
        L7:
            r0 = 0
            return r0
    }

    public final boolean isPlaying() {
            r2 = this;
            int r0 = r2.RV
            r1 = 4
            if (r0 != r1) goto L7
            r0 = 1
            return r0
        L7:
            r0 = 0
            return r0
    }

    @Override
    public final void onSurfaceTextureAvailable(android.graphics.SurfaceTexture r1, int r2, int r3) {
            r0 = this;
            android.graphics.SurfaceTexture r2 = r0.St
            if (r2 != 0) goto La
            r0.St = r1
            r0.Dz()
            return
        La:
            com.kwad.sdk.core.video.a r1 = r0.avX
            r1.setSurfaceTexture(r2)
            return
    }

    @Override
    public final boolean onSurfaceTextureDestroyed(android.graphics.SurfaceTexture r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public final void onSurfaceTextureSizeChanged(android.graphics.SurfaceTexture r1, int r2, int r3) {
            r0 = this;
            return
    }

    @Override
    public final void onSurfaceTextureUpdated(android.graphics.SurfaceTexture r1) {
            r0 = this;
            return
    }

    @Override
    public final void pause() {
            r4 = this;
            com.kwad.sdk.core.video.a.c r0 = r4.RW
            if (r0 != 0) goto L5
            return
        L5:
            int r1 = r4.RV
            r2 = 4
            java.lang.String r3 = "KSVideoPlayerViewView"
            if (r1 != r2) goto L1d
            r0.pause()
            r0 = 5
            r4.RV = r0
            com.kwad.sdk.core.video.videoview.b r1 = r4.avY
            r1.onPlayStateChanged(r0)
            java.lang.String r0 = "STATE_PAUSED"
        L19:
            com.kwad.sdk.core.e.c.i(r3, r0)
            return
        L1d:
            r2 = 6
            if (r1 != r2) goto L2e
            r0.pause()
            r0 = 7
            r4.RV = r0
            com.kwad.sdk.core.video.videoview.b r1 = r4.avY
            r1.onPlayStateChanged(r0)
            java.lang.String r0 = "STATE_BUFFERING_PAUSED"
            goto L19
        L2e:
            return
    }

    @Override
    public final void release() {
            r4 = this;
            boolean r0 = r4.avZ
            if (r0 == 0) goto L35
            boolean r0 = r4.isPlaying()
            if (r0 != 0) goto L2a
            boolean r0 = r4.Dv()
            if (r0 != 0) goto L2a
            boolean r0 = r4.Dw()
            if (r0 != 0) goto L2a
            boolean r0 = r4.isPaused()
            if (r0 == 0) goto L1d
            goto L2a
        L1d:
            boolean r0 = r4.isCompleted()
            if (r0 == 0) goto L35
            android.content.Context r0 = r4.mContext
            java.lang.String r1 = r4.mUrl
            r2 = 0
            goto L32
        L2a:
            android.content.Context r0 = r4.mContext
            java.lang.String r1 = r4.mUrl
            long r2 = r4.getCurrentPosition()
        L32:
            com.kwad.sdk.utils.y.e(r0, r1, r2)
        L35:
            r4.DA()
            com.kwad.sdk.core.video.videoview.b r0 = r4.avY
            if (r0 == 0) goto L3f
            r0.reset()
        L3f:
            return
    }

    @Override
    public final void restart() {
            r3 = this;
            int r0 = r3.RV
            java.lang.String r1 = "KSVideoPlayerViewView"
            r2 = 5
            if (r0 != r2) goto L1e
            com.kwad.sdk.core.video.a.c r0 = r3.RW
            r0.start()
            r0 = 4
            r3.RV = r0
            com.kwad.sdk.core.video.videoview.b r2 = r3.avY
            r2.onPlayStateChanged(r0)
            r0 = 2
            r3.setPlayType(r0)
            java.lang.String r0 = "STATE_PLAYING"
            com.kwad.sdk.core.e.c.i(r1, r0)
            return
        L1e:
            r2 = 7
            if (r0 != r2) goto L34
            com.kwad.sdk.core.video.a.c r0 = r3.RW
            r0.start()
            r0 = 6
            r3.RV = r0
            com.kwad.sdk.core.video.videoview.b r2 = r3.avY
            r2.onPlayStateChanged(r0)
            java.lang.String r0 = "STATE_BUFFERING_PLAYING"
            com.kwad.sdk.core.e.c.i(r1, r0)
            return
        L34:
            r2 = 9
            if (r0 == r2) goto L55
            r2 = -1
            if (r0 != r2) goto L3c
            goto L55
        L3c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "KSVideoPlayer在状态为 "
            r0.<init>(r2)
            int r2 = r3.RV
            r0.append(r2)
            java.lang.String r2 = " 时不能调用restart()方法."
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.core.e.c.i(r1, r0)
            return
        L55:
            com.kwad.sdk.core.video.a.c r0 = r3.RW
            r0.reset()
            r3.Dz()
            r0 = 3
            r3.setPlayType(r0)
            return
    }

    public final void seekTo(int r4) {
            r3 = this;
            com.kwad.sdk.core.video.a.c r0 = r3.RW
            if (r0 == 0) goto L8
            long r1 = (long) r4
            r0.seekTo(r1)
        L8:
            return
    }

    public final void setController(com.kwad.sdk.core.video.videoview.b r3) {
            r2 = this;
            android.widget.FrameLayout r0 = r2.hk
            com.kwad.sdk.core.video.videoview.b r1 = r2.avY
            r0.removeView(r1)
            r2.avY = r3
            r3.reset()
            android.widget.FrameLayout$LayoutParams r3 = new android.widget.FrameLayout$LayoutParams
            r0 = -1
            r3.<init>(r0, r0)
            android.widget.FrameLayout r0 = r2.hk
            com.kwad.sdk.core.video.videoview.b r1 = r2.avY
            r0.addView(r1, r3)
            return
    }

    @Override
    public final void setKsPlayLogParam(com.kwad.sdk.contentalliance.a.a.a r1) {
            r0 = this;
            r0.cT = r1
            return
    }

    public final void setLooping(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.RW
            if (r0 == 0) goto L7
            r0.setLooping(r2)
        L7:
            return
    }

    public final void setPortraitFullscreen(boolean r1) {
            r0 = this;
            r0.awc = r1
            return
    }

    public final void setVideoSoundEnable(boolean r2) {
            r1 = this;
            r1.awb = r2
            com.kwad.sdk.core.video.a.c r0 = r1.RW
            if (r0 == 0) goto L12
            if (r2 == 0) goto Le
            r2 = 1065353216(0x3f800000, float:1.0)
            r0.setVolume(r2, r2)
            return
        Le:
            r2 = 0
            r0.setVolume(r2, r2)
        L12:
            return
    }

    public final void setVolume(int r4) {
            r3 = this;
            android.media.AudioManager r0 = r3.avW
            if (r0 == 0) goto L9
            r1 = 3
            r2 = 0
            r0.setStreamVolume(r1, r4, r2)
        L9:
            return
    }

    @Override
    public final void start() {
            r2 = this;
            int r0 = r2.RV
            if (r0 != 0) goto L24
            r2.Dx()
            r2.qJ()
            r2.Dy()
            com.kwad.sdk.contentalliance.a.a.b r0 = r2.Sa
            if (r0 == 0) goto L2b
            com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = r0.videoPlayerStatus
            if (r0 == 0) goto L2b
            com.kwad.sdk.contentalliance.a.a.b r0 = r2.Sa
            com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = r0.videoPlayerStatus
            int r0 = r0.mVideoPlayerType
            if (r0 != 0) goto L22
            r0 = 1
        L1e:
            r2.setPlayType(r0)
            return
        L22:
            r0 = 3
            goto L1e
        L24:
            java.lang.String r0 = "KSVideoPlayerViewView"
            java.lang.String r1 = "KSVideoPlayer只有在状态为STATE_IDLE时才能调用start方法."
            com.kwad.sdk.core.e.c.i(r0, r1)
        L2b:
            return
    }
}
