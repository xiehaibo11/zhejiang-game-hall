package com.kwad.components.core.video;

public final class b {
    private static boolean RT;
    private static final java.util.concurrent.atomic.AtomicInteger RU = null;
    private int RE;
    private int RF;
    private volatile int RV;
    private com.kwad.sdk.core.video.a.c RW;
    private int RX;
    private long RY;
    private java.lang.Runnable RZ;
    private com.kwad.sdk.contentalliance.a.a.b Sa;
    private int Sb;
    private java.util.List<com.kwad.sdk.core.video.a.c.d> Sc;
    private final java.util.concurrent.atomic.AtomicBoolean Sd;
    private boolean Se;
    private volatile java.util.List<com.kwad.components.core.video.k> Sf;
    private volatile java.util.List<com.kwad.sdk.core.video.a.c.e> Sg;
    private com.kwad.sdk.core.video.a.c.e Sh;
    private com.kwad.sdk.core.video.a.c.h Si;
    private com.kwad.sdk.core.video.a.c.b Sj;
    private com.kwad.sdk.core.video.a.c.c Sk;
    private com.kwad.sdk.core.video.a.c.d Sl;
    private com.kwad.sdk.core.video.a.c.a Sm;
    private java.lang.String TAG;
    private android.content.Context mContext;
    private com.kwad.components.core.video.DetailVideoView mDetailVideoView;
    private android.os.Handler mHandler;
    private long mStartTime;











    public interface a {
        void onReleaseSuccess();
    }

    static {
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 0
            r0.<init>(r1)
            com.kwad.components.core.video.b.RU = r0
            return
    }

    public b(com.kwad.components.core.video.DetailVideoView r4) {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = "MediaPlayerImpl"
            r3.TAG = r0
            r0 = 0
            r3.RV = r0
            android.os.Handler r1 = new android.os.Handler
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            r1.<init>(r2)
            r3.mHandler = r1
            r1 = 0
            r3.mStartTime = r1
            r3.Sb = r0
            java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
            r1.<init>()
            r3.Sc = r1
            java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
            r1.<init>(r0)
            r3.Sd = r1
            r3.Se = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r3.Sf = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r3.Sg = r0
            com.kwad.components.core.video.b$1 r0 = new com.kwad.components.core.video.b$1
            r0.<init>(r3)
            r3.Sh = r0
            com.kwad.components.core.video.b$3 r0 = new com.kwad.components.core.video.b$3
            r0.<init>(r3)
            r3.Si = r0
            com.kwad.components.core.video.b$4 r0 = new com.kwad.components.core.video.b$4
            r0.<init>(r3)
            r3.Sj = r0
            com.kwad.components.core.video.b$5 r0 = new com.kwad.components.core.video.b$5
            r0.<init>(r3)
            r3.Sk = r0
            com.kwad.components.core.video.b$6 r0 = new com.kwad.components.core.video.b$6
            r0.<init>(r3)
            r3.Sl = r0
            com.kwad.components.core.video.b$7 r0 = new com.kwad.components.core.video.b$7
            r0.<init>(r3)
            r3.Sm = r0
            r3.mDetailVideoView = r4
            if (r4 == 0) goto L71
            android.content.Context r4 = r4.getContext()
            android.content.Context r4 = r4.getApplicationContext()
            r3.mContext = r4
        L71:
            return
    }

    static int a(com.kwad.components.core.video.b r0, int r1) {
            r0.RV = r1
            return r1
    }

    static void a(com.kwad.components.core.video.b r0, com.kwad.sdk.core.video.a.c r1, com.kwad.components.core.video.b.a r2) {
            a(r1, r2)
            return
    }

    private void a(com.kwad.sdk.contentalliance.a.a.b r3, boolean r4, com.kwad.components.core.video.DetailVideoView r5, com.kwad.sdk.core.video.a.c r6) {
            r2 = this;
            java.lang.String r0 = r2.TAG
            java.lang.String r1 = "initMediaPlayer"
            com.kwad.sdk.core.e.c.i(r0, r1)
            if (r3 == 0) goto L83
            if (r5 == 0) goto L83
            if (r6 != 0) goto Le
            goto L83
        Le:
            android.content.Context r0 = r2.mContext
            if (r0 != 0) goto L1c
            android.content.Context r0 = r5.getContext()
            android.content.Context r0 = r0.getApplicationContext()
            r2.mContext = r0
        L1c:
            r2.Se = r4
            r2.Sa = r3
            com.kwad.components.core.video.DetailVideoView r3 = r2.mDetailVideoView
            if (r3 == r5) goto L3e
            java.lang.String r4 = r2.TAG
            java.lang.String r0 = "initMediaPlayer videoView changed"
            com.kwad.sdk.core.e.c.i(r4, r0)
            if (r3 == 0) goto L3c
            r4 = 0
            r3.setMediaPlayer(r4)
            boolean r4 = r3.getKeepScreenOn()
            r5.setKeepScreenOn(r4)
            r4 = 0
            r3.setKeepScreenOn(r4)
        L3c:
            r2.mDetailVideoView = r5
        L3e:
            r5.setMediaPlayer(r2)
            com.kwad.sdk.core.video.a.c r3 = r2.RW
            if (r3 == r6) goto L6c
            java.lang.String r3 = r2.TAG
            java.lang.String r4 = "initMediaPlayer mediaPlayer changed"
            com.kwad.sdk.core.e.c.i(r3, r4)
            com.kwad.sdk.core.video.a.c r3 = r2.RW
            if (r3 == 0) goto L5f
            boolean r3 = r3.isLooping()
            r6.setLooping(r3)
            r2.qF()
            com.kwad.sdk.core.video.a.c r3 = r2.RW
            r3.release()
        L5f:
            r2.RW = r6
            r2.reset()
            r2.qE()
            r3 = 3
            r6.setAudioStreamType(r3)
            goto L7c
        L6c:
            java.lang.String r3 = r2.TAG
            java.lang.String r4 = "initMediaPlayer mediaPlayer not changed"
            com.kwad.sdk.core.e.c.i(r3, r4)
            r2.reset()
            r2.qF()
            r2.qE()
        L7c:
            com.kwad.sdk.core.video.a.c r3 = r2.RW
            android.view.Surface r4 = r5.Su
            r3.setSurface(r4)
        L83:
            return
    }

    private static void a(com.kwad.sdk.core.video.a.c r0, com.kwad.components.core.video.b.a r1) {
            if (r0 != 0) goto L3
            return
        L3:
            r0.release()     // Catch: java.lang.Exception -> Lc
            if (r1 == 0) goto Lb
            r1.onReleaseSuccess()     // Catch: java.lang.Exception -> Lc
        Lb:
            return
        Lc:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            return
    }

    static int b(com.kwad.components.core.video.b r0, int r1) {
            r0.RE = r1
            return r1
    }

    static java.lang.String b(com.kwad.components.core.video.b r0) {
            java.lang.String r0 = r0.TAG
            return r0
    }

    static int c(com.kwad.components.core.video.b r0) {
            int r0 = r0.RV
            return r0
    }

    static int c(com.kwad.components.core.video.b r0, int r1) {
            r0.RF = r1
            return r1
    }

    static int d(com.kwad.components.core.video.b r0, int r1) {
            r0.RX = r1
            return r1
    }

    static java.util.List d(com.kwad.components.core.video.b r0) {
            java.util.List<com.kwad.sdk.core.video.a.c$e> r0 = r0.Sg
            return r0
    }

    static com.kwad.sdk.core.video.a.c e(com.kwad.components.core.video.b r0) {
            com.kwad.sdk.core.video.a.c r0 = r0.RW
            return r0
    }

    static com.kwad.components.core.video.DetailVideoView f(com.kwad.components.core.video.b r0) {
            com.kwad.components.core.video.DetailVideoView r0 = r0.mDetailVideoView
            return r0
    }

    static long g(com.kwad.components.core.video.b r2) {
            long r0 = r2.mStartTime
            return r0
    }

    public static java.lang.String getStateString(int r0) {
            switch(r0) {
                case -1: goto L24;
                case 0: goto L21;
                case 1: goto L1e;
                case 2: goto L1b;
                case 3: goto L18;
                case 4: goto L15;
                case 5: goto L12;
                case 6: goto Lf;
                case 7: goto Lc;
                case 8: goto L9;
                case 9: goto L6;
                default: goto L3;
            }
        L3:
            java.lang.String r0 = "STATE_UNKNOWN"
            return r0
        L6:
            java.lang.String r0 = "STATE_COMPLETED"
            return r0
        L9:
            java.lang.String r0 = "PLAYER_STATE_STOPPED"
            return r0
        Lc:
            java.lang.String r0 = "STATE_BUFFERING_PAUSED"
            return r0
        Lf:
            java.lang.String r0 = "STATE_BUFFERING_PLAYING"
            return r0
        L12:
            java.lang.String r0 = "STATE_PAUSED"
            return r0
        L15:
            java.lang.String r0 = "STATE_PLAYING"
            return r0
        L18:
            java.lang.String r0 = "STATE_STARTED"
            return r0
        L1b:
            java.lang.String r0 = "STATE_PREPARED"
            return r0
        L1e:
            java.lang.String r0 = "STATE_PREPARING"
            return r0
        L21:
            java.lang.String r0 = "STATE_IDLE"
            return r0
        L24:
            java.lang.String r0 = "STATE_ERROR"
            return r0
    }

    static com.kwad.sdk.contentalliance.a.a.b h(com.kwad.components.core.video.b r0) {
            com.kwad.sdk.contentalliance.a.a.b r0 = r0.Sa
            return r0
    }

    static android.os.Handler i(com.kwad.components.core.video.b r0) {
            android.os.Handler r0 = r0.mHandler
            return r0
    }

    static java.util.concurrent.atomic.AtomicBoolean j(com.kwad.components.core.video.b r0) {
            java.util.concurrent.atomic.AtomicBoolean r0 = r0.Sd
            return r0
    }

    static void k(com.kwad.components.core.video.b r0) {
            r0.qB()
            return
    }

    static java.lang.Runnable l(com.kwad.components.core.video.b r0) {
            java.lang.Runnable r0 = r0.RZ
            return r0
    }

    private void qB() {
            r6 = this;
            long r0 = r6.getCurrentPosition()
            long r2 = r6.getDuration()
            java.util.List<com.kwad.components.core.video.k> r4 = r6.Sf
            if (r4 == 0) goto L22
            java.util.List<com.kwad.components.core.video.k> r4 = r6.Sf
            java.util.Iterator r4 = r4.iterator()
        L12:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L22
            java.lang.Object r5 = r4.next()
            com.kwad.components.core.video.k r5 = (com.kwad.components.core.video.k) r5
            r5.onMediaPlayProgress(r2, r0)
            goto L12
        L22:
            return
    }

    private void qE() {
            r2 = this;
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            com.kwad.sdk.core.video.a.c$e r1 = r2.Sh
            r0.b(r1)
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            com.kwad.sdk.core.video.a.c$h r1 = r2.Si
            r0.a(r1)
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            com.kwad.sdk.core.video.a.c$b r1 = r2.Sj
            r0.a(r1)
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            com.kwad.sdk.core.video.a.c$c r1 = r2.Sk
            r0.a(r1)
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            com.kwad.sdk.core.video.a.c$d r1 = r2.Sl
            r0.c(r1)
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            com.kwad.sdk.core.video.a.c$a r1 = r2.Sm
            r0.a(r1)
            return
    }

    private void qF() {
            r2 = this;
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            if (r0 != 0) goto L5
            return
        L5:
            r1 = 0
            r0.a(r1)
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            r0.a(r1)
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            r0.b(r1)
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            r0.a(r1)
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            r0.c(r1)
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            r0.a(r1)
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            r0.a(r1)
            return
    }

    private void qH() {
            r2 = this;
            r2.qI()
            java.lang.Runnable r0 = r2.RZ
            if (r0 != 0) goto Le
            com.kwad.components.core.video.b$2 r0 = new com.kwad.components.core.video.b$2
            r0.<init>(r2)
            r2.RZ = r0
        Le:
            android.os.Handler r0 = r2.mHandler
            java.lang.Runnable r1 = r2.RZ
            r0.post(r1)
            return
    }

    private void qI() {
            r2 = this;
            java.lang.Runnable r0 = r2.RZ
            if (r0 == 0) goto Lc
            android.os.Handler r1 = r2.mHandler
            r1.removeCallbacks(r0)
            r0 = 0
            r2.RZ = r0
        Lc:
            return
    }

    private void reset() {
            r3 = this;
            java.lang.String r0 = r3.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "reset:"
            r1.<init>(r2)
            int r2 = r3.RV
            java.lang.String r2 = getStateString(r2)
            r1.append(r2)
            java.lang.String r2 = "->STATE_IDLE"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.i(r0, r1)
            com.kwad.sdk.core.video.a.c r0 = r3.RW
            r0.reset()
            r0 = 0
            r3.RV = r0
            return
    }

    private void setKeepScreenOn(boolean r2) {
            r1 = this;
            com.kwad.components.core.video.DetailVideoView r0 = r1.mDetailVideoView
            if (r0 == 0) goto L7
            r0.setKeepScreenOn(r2)
        L7:
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

    public final void a(com.kwad.components.core.video.b.a r2) {
            r1 = this;
            r0 = 1
            r1.a(r2, r0)
            return
    }

    public final void a(com.kwad.components.core.video.b.a r4, boolean r5) {
            r3 = this;
            com.kwad.sdk.core.video.a.c r0 = r3.RW
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
            r3.setKeepScreenOn(r0)
            android.os.Handler r1 = r3.mHandler
            r2 = 0
            r1.removeCallbacksAndMessages(r2)
            r3.qI()
            r3.qF()
            r3.mDetailVideoView = r2
            com.kwad.sdk.core.video.a.c r1 = r3.RW
            if (r1 == 0) goto L2b
            if (r5 == 0) goto L26
            com.kwad.components.core.video.b$10 r5 = new com.kwad.components.core.video.b$10
            r5.<init>(r3, r1, r4)
            com.kwad.sdk.utils.g.execute(r5)
            goto L29
        L26:
            a(r1, r4)
        L29:
            r3.RW = r2
        L2b:
            java.lang.String r4 = r3.TAG
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r1 = "release:"
            r5.<init>(r1)
            int r1 = r3.RV
            java.lang.String r1 = getStateString(r1)
            r5.append(r1)
            java.lang.String r1 = "->STATE_IDLE"
            r5.append(r1)
            java.lang.String r5 = r5.toString()
            com.kwad.sdk.core.e.c.i(r4, r5)
            r3.RV = r0
            r3.Sb = r0
            return
    }

    public final void a(com.kwad.sdk.contentalliance.a.a.a r3) {
            r2 = this;
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            boolean r1 = r0 instanceof com.kwad.sdk.core.video.a.d
            if (r1 == 0) goto Lb
            com.kwad.sdk.core.video.a.d r0 = (com.kwad.sdk.core.video.a.d) r0
            r0.a(r3)
        Lb:
            return
    }

    public final void a(com.kwad.sdk.contentalliance.a.a.b r4) {
            r3 = this;
            java.lang.String r0 = r4.videoUrl     // Catch: java.lang.Exception -> L2b
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L2b
            if (r0 != 0) goto L23
            java.lang.String r0 = r3.TAG     // Catch: java.lang.Exception -> L2b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2b
            java.lang.String r2 = "videoUrl="
            r1.<init>(r2)     // Catch: java.lang.Exception -> L2b
            java.lang.String r2 = r4.videoUrl     // Catch: java.lang.Exception -> L2b
            r1.append(r2)     // Catch: java.lang.Exception -> L2b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L2b
            com.kwad.sdk.core.e.c.d(r0, r1)     // Catch: java.lang.Exception -> L2b
            com.kwad.sdk.core.video.a.c r0 = r3.RW     // Catch: java.lang.Exception -> L2b
            r0.a(r4)     // Catch: java.lang.Exception -> L2b
            goto L2f
        L23:
            java.lang.String r4 = r3.TAG     // Catch: java.lang.Exception -> L2b
            java.lang.String r0 = "videoUrl is null"
            com.kwad.sdk.core.e.c.e(r4, r0)     // Catch: java.lang.Exception -> L2b
            return
        L2b:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)
        L2f:
            return
    }

    public final void a(com.kwad.sdk.contentalliance.a.a.b r3, com.kwad.components.core.video.DetailVideoView r4) {
            r2 = this;
            r0 = 1
            r1 = 0
            r2.a(r3, r0, r1, r4)
            return
    }

    public final void a(com.kwad.sdk.contentalliance.a.a.b r4, boolean r5, boolean r6, com.kwad.components.core.video.DetailVideoView r7) {
            r3 = this;
            java.lang.String r0 = r3.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "initMediaPlayer enablePreLoad:"
            r1.<init>(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.i(r0, r1)
            if (r4 == 0) goto L2d
            if (r7 != 0) goto L18
            goto L2d
        L18:
            android.content.Context r0 = r3.mContext
            boolean r1 = com.kwad.sdk.core.config.d.xs()
            boolean r2 = com.kwad.sdk.core.config.d.xt()
            com.kwad.sdk.core.video.a.c r5 = com.kwad.sdk.core.video.a.e.a(r0, r5, r1, r2)
            r0 = 0
            r5.setLooping(r0)
            r3.a(r4, r6, r7, r5)
        L2d:
            return
    }

    public final void a(com.kwad.sdk.core.video.a.c.d r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<com.kwad.sdk.core.video.a.c$d> r0 = r1.Sc
            r0.add(r2)
            return
    }

    public final void a(com.kwad.sdk.core.video.a.c.e r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.core.video.a.c$e> r0 = r1.Sg
            r0.add(r2)
            return
    }

    public final void a(com.kwad.sdk.core.video.a.c r2, int r3, int r4) {
            r1 = this;
            java.util.List<com.kwad.sdk.core.video.a.c$d> r2 = r1.Sc
            java.util.Iterator r2 = r2.iterator()
        L6:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L1c
            java.lang.Object r0 = r2.next()
            com.kwad.sdk.core.video.a.c$d r0 = (com.kwad.sdk.core.video.a.c.d) r0
            if (r0 != 0) goto L18
            r2.remove()
            goto L6
        L18:
            r0.k(r3, r4)
            goto L6
        L1c:
            return
    }

    public final void b(com.kwad.sdk.core.video.a.c.d r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<com.kwad.sdk.core.video.a.c$d> r0 = r1.Sc
            r0.remove(r2)
            return
    }

    public final void c(com.kwad.components.core.video.k r2) {
            r1 = this;
            java.util.List<com.kwad.components.core.video.k> r0 = r1.Sf
            r0.add(r2)
            return
    }

    public final void clear() {
            r1 = this;
            java.util.List<com.kwad.components.core.video.k> r0 = r1.Sf
            r0.clear()
            return
    }

    public final void d(com.kwad.components.core.video.k r2) {
            r1 = this;
            java.util.List<com.kwad.components.core.video.k> r0 = r1.Sf
            r0.remove(r2)
            return
    }

    public final int getBufferPercentage() {
            r1 = this;
            int r0 = r1.RX
            return r0
    }

    public final java.lang.String getCurrentPlayingUrl() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.RW
            if (r0 != 0) goto L7
            java.lang.String r0 = ""
            return r0
        L7:
            java.lang.String r0 = r0.getCurrentPlayingUrl()
            return r0
    }

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

    public final int getMediaPlayerType() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.RW
            if (r0 == 0) goto L9
            int r0 = r0.getMediaPlayerType()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public final long getPlayDuration() {
            r2 = this;
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            if (r0 == 0) goto L9
            long r0 = r0.getCurrentPosition()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public final int getVideoHeight() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.RW
            if (r0 == 0) goto L9
            int r0 = r0.getVideoHeight()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public final int getVideoWidth() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.RW
            if (r0 == 0) goto L9
            int r0 = r0.getVideoWidth()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public final boolean isPlaying() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.RW
            if (r0 == 0) goto L9
            boolean r0 = r0.isPlaying()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public final boolean isPrepared() {
            r2 = this;
            int r0 = r2.RV
            r1 = 2
            if (r0 == r1) goto L1e
            int r0 = r2.RV
            r1 = 3
            if (r0 == r1) goto L1e
            int r0 = r2.RV
            r1 = 5
            if (r0 == r1) goto L1e
            int r0 = r2.RV
            r1 = 8
            if (r0 == r1) goto L1e
            int r0 = r2.RV
            r1 = 9
            if (r0 != r1) goto L1c
            goto L1e
        L1c:
            r0 = 0
            return r0
        L1e:
            r0 = 1
            return r0
    }

    public final boolean isPreparing() {
            r2 = this;
            int r0 = r2.RV
            r1 = 1
            if (r0 != r1) goto L6
            return r1
        L6:
            r0 = 0
            return r0
    }

    public final void onPlayStateChanged(int r5) {
            r4 = this;
            java.util.List<com.kwad.components.core.video.k> r0 = r4.Sf
            if (r0 != 0) goto L5
            return
        L5:
            java.util.List<com.kwad.components.core.video.k> r0 = r4.Sf
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L6d
            java.lang.Object r1 = r0.next()
            com.kwad.components.core.video.k r1 = (com.kwad.components.core.video.k) r1
            if (r1 == 0) goto Lb
            r2 = 1
            r3 = 0
            switch(r5) {
                case -1: goto L5a;
                case 0: goto L1e;
                case 1: goto L56;
                case 2: goto L52;
                case 3: goto L4b;
                case 4: goto L44;
                case 5: goto L3d;
                case 6: goto L39;
                case 7: goto L35;
                case 8: goto L1e;
                case 9: goto L1f;
                default: goto L1e;
            }
        L1e:
            goto Lb
        L1f:
            com.kwad.sdk.core.video.a.c r2 = r4.RW     // Catch: java.lang.Exception -> L68
            if (r2 == 0) goto L31
            com.kwad.sdk.core.video.a.c r2 = r4.RW     // Catch: java.lang.Exception -> L68
            boolean r2 = r2.isLooping()     // Catch: java.lang.Exception -> L68
            if (r2 != 0) goto L31
            r4.setKeepScreenOn(r3)     // Catch: java.lang.Exception -> L68
            r4.qI()     // Catch: java.lang.Exception -> L68
        L31:
            r1.onMediaPlayCompleted()     // Catch: java.lang.Exception -> L68
            goto Lb
        L35:
            r1.onVideoPlayBufferingPaused()     // Catch: java.lang.Exception -> L68
            goto Lb
        L39:
            r1.onVideoPlayBufferingPlaying()     // Catch: java.lang.Exception -> L68
            goto Lb
        L3d:
            r4.setKeepScreenOn(r3)     // Catch: java.lang.Exception -> L68
            r1.onMediaPlayPaused()     // Catch: java.lang.Exception -> L68
            goto Lb
        L44:
            r4.setKeepScreenOn(r2)     // Catch: java.lang.Exception -> L68
            r1.onMediaPlaying()     // Catch: java.lang.Exception -> L68
            goto Lb
        L4b:
            r4.setKeepScreenOn(r2)     // Catch: java.lang.Exception -> L68
            r1.onMediaPlayStart()     // Catch: java.lang.Exception -> L68
            goto Lb
        L52:
            r1.onMediaPrepared()     // Catch: java.lang.Exception -> L68
            goto Lb
        L56:
            r1.onMediaPreparing()     // Catch: java.lang.Exception -> L68
            goto Lb
        L5a:
            r4.setKeepScreenOn(r3)     // Catch: java.lang.Exception -> L68
            r4.qI()     // Catch: java.lang.Exception -> L68
            int r2 = r4.RE     // Catch: java.lang.Exception -> L68
            int r3 = r4.RF     // Catch: java.lang.Exception -> L68
            r1.onMediaPlayError(r2, r3)     // Catch: java.lang.Exception -> L68
            goto Lb
        L68:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
            goto Lb
        L6d:
            return
    }

    public final boolean pause() {
            r6 = this;
            java.lang.String r0 = r6.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "pause mCurrentState: "
            r1.<init>(r2)
            int r2 = r6.RV
            java.lang.String r2 = getStateString(r2)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.i(r0, r1)
            int r0 = r6.RV
            java.lang.String r1 = "videoPausePlay"
            r2 = 5
            r3 = 1
            r4 = 4
            if (r0 != r4) goto L3a
            com.kwad.sdk.core.video.a.c r0 = r6.RW
            r0.pause()
            java.lang.String r0 = r6.TAG
            java.lang.String r4 = "pause STATE_PLAYING->STATE_PAUSED"
            com.kwad.sdk.core.e.c.i(r0, r4)
            r6.RV = r2
            int r0 = r6.RV
            r6.onPlayStateChanged(r0)
            com.kwad.sdk.core.video.a.a.a.dI(r1)
            r0 = r3
            goto L3b
        L3a:
            r0 = 0
        L3b:
            int r4 = r6.RV
            r5 = 6
            if (r4 != r5) goto L55
            com.kwad.sdk.core.video.a.c r0 = r6.RW
            r0.pause()
            java.lang.String r0 = r6.TAG
            java.lang.String r4 = "pause STATE_BUFFERING_PLAYING->STATE_PAUSED"
            com.kwad.sdk.core.e.c.i(r0, r4)
            r0 = 7
            r6.RV = r0
            int r0 = r6.RV
            r6.onPlayStateChanged(r0)
            r0 = r3
        L55:
            int r4 = r6.RV
            r5 = 3
            if (r4 != r5) goto L71
            com.kwad.sdk.core.video.a.c r0 = r6.RW
            r0.pause()
            java.lang.String r0 = r6.TAG
            java.lang.String r4 = "pause STATE_STARTED->STATE_PAUSED"
            com.kwad.sdk.core.e.c.i(r0, r4)
            r6.RV = r2
            int r0 = r6.RV
            r6.onPlayStateChanged(r0)
            com.kwad.sdk.core.video.a.a.a.dI(r1)
            r0 = r3
        L71:
            int r1 = r6.RV
            r4 = 9
            if (r1 != r4) goto Laa
            com.kwad.sdk.core.video.a.c r1 = r6.RW
            boolean r1 = r1.isLooping()
            if (r1 == 0) goto Laa
            com.kwad.sdk.core.video.a.c r0 = r6.RW
            r0.pause()
            java.lang.String r0 = r6.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r4 = "pause "
            r1.<init>(r4)
            int r4 = r6.RV
            java.lang.String r4 = getStateString(r4)
            r1.append(r4)
            java.lang.String r4 = "->STATE_PAUSED"
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.i(r0, r1)
            r6.RV = r2
            int r0 = r6.RV
            r6.onPlayStateChanged(r0)
            goto Lab
        Laa:
            r3 = r0
        Lab:
            return r3
    }

    public final void prepareAsync() {
            r4 = this;
            com.kwad.sdk.core.video.a.c r0 = r4.RW
            if (r0 != 0) goto L5
            return
        L5:
            boolean r0 = r4.Se
            r1 = 1
            if (r0 == 0) goto L1d
            java.util.concurrent.atomic.AtomicBoolean r0 = r4.Sd
            r2 = 0
            boolean r0 = r0.compareAndSet(r2, r1)
            if (r0 != 0) goto L14
            return
        L14:
            com.kwad.components.core.video.b$8 r0 = new com.kwad.components.core.video.b$8
            r0.<init>(r4)
            com.kwad.sdk.utils.g.execute(r0)
            return
        L1d:
            com.kwad.sdk.contentalliance.a.a.b r0 = r4.Sa     // Catch: java.lang.Throwable -> L58
            r4.a(r0)     // Catch: java.lang.Throwable -> L58
            com.kwad.sdk.core.video.a.c r0 = r4.RW     // Catch: java.lang.Throwable -> L58
            boolean r0 = r0.prepareAsync()     // Catch: java.lang.Throwable -> L58
            if (r0 == 0) goto L50
            java.lang.String r0 = r4.TAG     // Catch: java.lang.Throwable -> L58
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L58
            java.lang.String r3 = "prepareAsync:"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L58
            int r3 = r4.RV     // Catch: java.lang.Throwable -> L58
            java.lang.String r3 = getStateString(r3)     // Catch: java.lang.Throwable -> L58
            r2.append(r3)     // Catch: java.lang.Throwable -> L58
            java.lang.String r3 = "->STATE_PREPARING"
            r2.append(r3)     // Catch: java.lang.Throwable -> L58
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L58
            com.kwad.sdk.core.e.c.i(r0, r2)     // Catch: java.lang.Throwable -> L58
            r4.RV = r1     // Catch: java.lang.Throwable -> L58
            int r0 = r4.RV     // Catch: java.lang.Throwable -> L58
            r4.onPlayStateChanged(r0)     // Catch: java.lang.Throwable -> L58
            goto L88
        L50:
            java.lang.String r0 = r4.TAG     // Catch: java.lang.Throwable -> L58
            java.lang.String r1 = "prepareAsync failed"
            com.kwad.sdk.core.e.c.e(r0, r1)     // Catch: java.lang.Throwable -> L58
            return
        L58:
            r0 = move-exception
            int r1 = r4.getMediaPlayerType()
            r2 = 2
            if (r1 == r2) goto L6c
            int r1 = r4.Sb
            int r2 = r1 + 1
            r4.Sb = r2
            r2 = 4
            if (r1 > r2) goto L6c
            r4.qG()
        L6c:
            java.lang.String r1 = r4.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "prepareAsync Exception:"
            r2.<init>(r3)
            int r3 = r4.RV
            java.lang.String r3 = getStateString(r3)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.kwad.sdk.core.e.c.i(r1, r2)
            com.kwad.sdk.core.e.c.printStackTrace(r0)
        L88:
            return
    }

    public final com.kwad.sdk.core.video.a.c qD() {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.RW
            return r0
    }

    public final void qG() {
            r3 = this;
            com.kwad.sdk.core.video.a.c r0 = r3.RW
            java.lang.String r1 = "resetAndPlay"
            if (r0 != 0) goto Lc
            java.lang.String r0 = "mMediaPlayer is null"
            com.kwad.sdk.core.e.c.w(r1, r0)
            return
        Lc:
            int r0 = r3.RV
            r2 = 2
            if (r0 == r2) goto L2e
            int r0 = r3.RV
            r2 = 3
            if (r0 == r2) goto L2e
            int r0 = r3.RV
            r2 = 4
            if (r0 == r2) goto L2e
            int r0 = r3.RV
            r2 = 5
            if (r0 != r2) goto L21
            goto L2e
        L21:
            r3.reset()
            r3.qF()
            r3.qE()
            r3.prepareAsync()
            return
        L2e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "can not resetAndPlay in sate:"
            r0.<init>(r2)
            int r2 = r3.RV
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.core.e.c.w(r1, r0)
            return
    }

    public final void release() {
            r1 = this;
            r0 = 0
            r1.a(r0)
            return
    }

    public final void releaseSync() {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.a(r0, r1)
            return
    }

    public final void restart() {
            r2 = this;
            com.kwad.sdk.core.video.a.c r0 = r2.RW
            if (r0 == 0) goto Ld
            int r0 = r2.RV
            r1 = 9
            if (r0 != r1) goto Ld
            r2.start()
        Ld:
            r0 = 3
            r2.setPlayType(r0)
            return
    }

    public final void resume() {
            r4 = this;
            com.kwad.sdk.core.video.a.c r0 = r4.RW
            if (r0 != 0) goto Lc
            java.lang.String r0 = r4.TAG
            java.lang.String r1 = "resume but mMediaPlayer is null"
            com.kwad.sdk.core.e.c.e(r0, r1)
            return
        Lc:
            java.lang.String r0 = r4.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "resume mCurrentState: "
            r1.<init>(r2)
            int r2 = r4.RV
            java.lang.String r2 = getStateString(r2)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.i(r0, r1)
            int r0 = r4.RV
            r1 = 2
            java.lang.String r2 = "resume:"
            if (r0 == r1) goto Lbc
            int r0 = r4.RV
            if (r0 != 0) goto L32
            goto Lbc
        L32:
            int r0 = r4.RV
            r3 = 5
            if (r0 != r3) goto L69
            com.kwad.sdk.core.video.a.c r0 = r4.RW
            r0.start()
            java.lang.String r0 = r4.TAG
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r2)
            int r2 = r4.RV
            java.lang.String r2 = getStateString(r2)
            r3.append(r2)
            java.lang.String r2 = "->STATE_PLAYING"
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.kwad.sdk.core.e.c.i(r0, r2)
            r0 = 4
            r4.RV = r0
            int r0 = r4.RV
            r4.onPlayStateChanged(r0)
            r4.setPlayType(r1)
            java.lang.String r0 = "videoResumePlay"
            com.kwad.sdk.core.video.a.a.a.dI(r0)
            return
        L69:
            int r0 = r4.RV
            r1 = 7
            if (r0 != r1) goto L98
            com.kwad.sdk.core.video.a.c r0 = r4.RW
            r0.start()
            java.lang.String r0 = r4.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r2)
            int r2 = r4.RV
            java.lang.String r2 = getStateString(r2)
            r1.append(r2)
            java.lang.String r2 = "->STATE_BUFFERING_PLAYING"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.i(r0, r1)
            r0 = 6
            r4.RV = r0
            int r0 = r4.RV
            r4.onPlayStateChanged(r0)
            return
        L98:
            int r0 = r4.RV
            r1 = 1
            if (r0 == r1) goto Lbb
            java.lang.String r0 = r4.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "resume: "
            r1.<init>(r2)
            int r2 = r4.RV
            java.lang.String r2 = getStateString(r2)
            r1.append(r2)
            java.lang.String r2 = " 此时不能调用resume()方法."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.w(r0, r1)
        Lbb:
            return
        Lbc:
            java.lang.String r0 = r4.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r2)
            int r2 = r4.RV
            java.lang.String r2 = getStateString(r2)
            r1.append(r2)
            java.lang.String r2 = "->start()"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.i(r0, r1)
            r4.start()
            return
    }

    public final void seekTo(long r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.RW
            if (r0 == 0) goto L7
            r0.seekTo(r2)
        L7:
            return
    }

    public final void setAudioEnabled(boolean r1) {
            r0 = this;
            if (r1 == 0) goto L8
            r1 = 1065353216(0x3f800000, float:1.0)
        L4:
            r0.setVolume(r1, r1)
            return
        L8:
            r1 = 0
            goto L4
    }

    public final void setRadius(float r2, float r3, float r4, float r5) {
            r1 = this;
            com.kwad.components.core.video.DetailVideoView r0 = r1.mDetailVideoView
            r0.setRadius(r2, r3, r4, r5)
            return
    }

    public final void setSpeed(float r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.RW
            if (r0 != 0) goto L5
            return
        L5:
            r0.setSpeed(r2)
            return
    }

    public final void setSurface(android.view.Surface r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.RW
            if (r0 == 0) goto L7
            r0.setSurface(r2)
        L7:
            return
    }

    public final void setVolume(float r2, float r3) {
            r1 = this;
            com.kwad.sdk.core.video.a.c r0 = r1.RW
            if (r0 != 0) goto L5
            return
        L5:
            r0.setVolume(r2, r3)     // Catch: java.lang.Throwable -> L9
            return
        L9:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            return
    }

    public final void start() {
            r6 = this;
            java.lang.String r0 = r6.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "start mCurrentState: "
            r1.<init>(r2)
            int r2 = r6.RV
            java.lang.String r2 = getStateString(r2)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.i(r0, r1)
            int r0 = r6.RV
            java.lang.String r1 = "videoStartPlay"
            r2 = 2
            if (r0 != 0) goto L4e
            java.lang.String r0 = r6.TAG
            java.lang.String r3 = "start, still not prepared well, prepare again"
            com.kwad.sdk.core.e.c.i(r0, r3)
            r6.prepareAsync()
            int r0 = r6.getMediaPlayerType()
            if (r0 != r2) goto L4d
            boolean r0 = r6.Se
            if (r0 == 0) goto L45
            java.util.concurrent.atomic.AtomicBoolean r0 = r6.Sd
            boolean r0 = r0.get()
            if (r0 == 0) goto L45
            com.kwad.components.core.video.b$9 r0 = new com.kwad.components.core.video.b$9
            r0.<init>(r6)
            com.kwad.sdk.utils.g.execute(r0)
            return
        L45:
            com.kwad.sdk.core.video.a.c r0 = r6.RW
            r0.start()
            com.kwad.sdk.core.video.a.a.a.dI(r1)
        L4d:
            return
        L4e:
            int r0 = r6.RV
            r3 = 9
            if (r0 == r2) goto L58
            int r0 = r6.RV
            if (r0 != r3) goto Lbe
        L58:
            long r4 = java.lang.System.currentTimeMillis()
            r6.mStartTime = r4
            com.kwad.sdk.core.video.a.c r0 = r6.RW
            r0.start()
            com.kwad.sdk.core.video.a.a.a.dI(r1)
            long r0 = r6.RY
            r4 = 0
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 == 0) goto L75
            com.kwad.sdk.core.video.a.c r4 = r6.RW
            int r0 = (int) r0
            long r0 = (long) r0
            r4.seekTo(r0)
        L75:
            java.lang.String r0 = r6.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r4 = "start:"
            r1.<init>(r4)
            int r4 = r6.RV
            java.lang.String r4 = getStateString(r4)
            r1.append(r4)
            java.lang.String r4 = "->STATE_STARTED"
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.i(r0, r1)
            com.kwad.sdk.contentalliance.a.a.b r0 = r6.Sa
            r1 = 3
            if (r0 == 0) goto Lb4
            com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = r0.videoPlayerStatus
            if (r0 == 0) goto Lb4
            int r0 = r6.RV
            if (r0 != r2) goto Lad
            com.kwad.sdk.contentalliance.a.a.b r0 = r6.Sa
            com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = r0.videoPlayerStatus
            int r0 = r0.mVideoPlayerType
            if (r0 != 0) goto Lb1
            r0 = 1
            r6.setPlayType(r0)
            goto Lb4
        Lad:
            int r0 = r6.RV
            if (r0 != r3) goto Lb4
        Lb1:
            r6.setPlayType(r1)
        Lb4:
            r6.RV = r1
            int r0 = r6.RV
            r6.onPlayStateChanged(r0)
            r6.qH()
        Lbe:
            return
    }

    public final void start(long r1) {
            r0 = this;
            r0.RY = r1
            r0.start()
            return
    }

    public final void stopAndPrepareAsync() {
            r4 = this;
            java.lang.String r0 = r4.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "stopAndPrepareAsync mCurrentState:"
            r1.<init>(r2)
            int r3 = r4.RV
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.i(r0, r1)
            int r0 = r4.RV
            r1 = 1
            if (r0 == r1) goto L70
            int r0 = r4.RV
            r1 = 2
            if (r0 != r1) goto L20
            goto L70
        L20:
            int r0 = r4.RV
            r1 = 3
            r3 = 8
            if (r0 == r1) goto L4a
            int r0 = r4.RV
            r1 = 4
            if (r0 == r1) goto L4a
            int r0 = r4.RV
            r1 = 5
            if (r0 == r1) goto L4a
            int r0 = r4.RV
            r1 = 6
            if (r0 == r1) goto L4a
            int r0 = r4.RV
            r1 = 7
            if (r0 == r1) goto L4a
            int r0 = r4.RV
            if (r0 == r3) goto L4a
            int r0 = r4.RV
            r1 = 9
            if (r0 != r1) goto L46
            goto L4a
        L46:
            r4.release()
            return
        L4a:
            com.kwad.sdk.core.video.a.c r0 = r4.RW     // Catch: java.lang.Exception -> L5a
            r0.stop()     // Catch: java.lang.Exception -> L5a
            r4.RV = r3     // Catch: java.lang.Exception -> L5a
            int r0 = r4.RV     // Catch: java.lang.Exception -> L5a
            r4.onPlayStateChanged(r0)     // Catch: java.lang.Exception -> L5a
            r4.prepareAsync()     // Catch: java.lang.Exception -> L5a
            return
        L5a:
            r4.release()
            java.lang.String r0 = r4.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r2)
            int r2 = r4.RV
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.e(r0, r1)
        L70:
            return
    }
}
