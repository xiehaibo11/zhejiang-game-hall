package com.sigmob.sdk.videoplayer;

public class g extends android.widget.RelativeLayout implements android.view.View.OnClickListener, android.view.View.OnTouchListener, android.widget.SeekBar.OnSeekBarChangeListener, com.sigmob.sdk.videoplayer.i {
    private static final java.lang.String V = "android.media.VOLUME_CHANGED_ACTION";
    private static final java.lang.String W = "android.media.EXTRA_VOLUME_STREAM_TYPE";
    public static final java.lang.String a = "VideoPlayerView";
    public static final int b = -1;
    public static final int c = 0;
    public static final int d = 1;
    public static final int e = 2;
    public static final int f = 3;
    public static final int g = 4;
    public static final int h = 5;
    public static final int i = 6;
    public static final int j = 7;
    public static final int k = 1;
    public static final int l = 2;
    public static final int m = 3;
    public static final int n = 0;
    public static final int o = 80;
    public static boolean p = true;
    public static int q = 6;
    public static int r = 1;
    public static boolean s = false;
    public static boolean t = true;
    public static int u;
    public int A;
    public java.lang.Class B;
    public boolean C;
    public com.sigmob.sdk.videoplayer.j D;
    public int E;
    public int F;
    public int G;
    public long H;
    public android.widget.ImageView I;
    public android.widget.ImageView J;
    public android.widget.ImageView K;
    public boolean L;
    protected long M;
    protected java.util.Timer N;
    protected int O;
    protected int P;
    protected android.media.AudioManager Q;
    protected com.sigmob.sdk.videoplayer.g.a R;
    protected boolean S;
    com.sigmob.sdk.videoplayer.m T;
    public android.media.AudioManager.OnAudioFocusChangeListener U;
    private android.view.ViewGroup aa;
    private android.view.ViewGroup ab;
    private android.view.ViewGroup ac;
    private android.view.ViewGroup ad;
    private android.view.ViewGroup ae;
    private android.view.ViewGroup af;
    private android.view.ViewGroup ag;
    private android.view.ViewGroup ah;
    private android.widget.ProgressBar ai;
    private android.widget.ImageView aj;
    private com.sigmob.sdk.nativead.h ak;
    private boolean al;
    private com.sigmob.sdk.videoplayer.c am;
    private android.widget.ImageView an;
    private int ao;
    private int ap;
    private com.sigmob.sdk.videoplayer.g.c aq;
    private boolean ar;
    private android.view.View as;
    private boolean at;
    private android.view.View au;
    public com.sigmob.sdk.videoplayer.g v;
    public int w;
    public int x;
    public com.sigmob.sdk.videoplayer.h y;
    public int z;



    static class 3 {
        static final int[] a = null;

        static {
                com.sigmob.sdk.videoplayer.f[] r0 = com.sigmob.sdk.videoplayer.f.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.sigmob.sdk.videoplayer.g.3.a = r0
                com.sigmob.sdk.videoplayer.f r1 = com.sigmob.sdk.videoplayer.f.a     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.sigmob.sdk.videoplayer.g.3.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.sigmob.sdk.videoplayer.f r1 = com.sigmob.sdk.videoplayer.f.b     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.sigmob.sdk.videoplayer.g.3.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.sigmob.sdk.videoplayer.f r1 = com.sigmob.sdk.videoplayer.f.d     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.sigmob.sdk.videoplayer.g.3.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.sigmob.sdk.videoplayer.f r1 = com.sigmob.sdk.videoplayer.f.c     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.sigmob.sdk.videoplayer.g.3.a     // Catch: java.lang.NoSuchFieldError -> L3e
                com.sigmob.sdk.videoplayer.f r1 = com.sigmob.sdk.videoplayer.f.e     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r0 = com.sigmob.sdk.videoplayer.g.3.a     // Catch: java.lang.NoSuchFieldError -> L49
                com.sigmob.sdk.videoplayer.f r1 = com.sigmob.sdk.videoplayer.f.f     // Catch: java.lang.NoSuchFieldError -> L49
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                return
        }
    }

    public class a extends java.util.TimerTask {
        final com.sigmob.sdk.videoplayer.g a;


        public a(com.sigmob.sdk.videoplayer.g r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r2 = this;
                com.sigmob.sdk.videoplayer.g r0 = r2.a
                int r0 = r0.w
                r1 = 4
                if (r0 == r1) goto Le
                com.sigmob.sdk.videoplayer.g r0 = r2.a
                int r0 = r0.w
                r1 = 5
                if (r0 != r1) goto L18
            Le:
                com.sigmob.sdk.videoplayer.g r0 = r2.a
                com.sigmob.sdk.videoplayer.g$a$1 r1 = new com.sigmob.sdk.videoplayer.g$a$1
                r1.<init>(r2)
                r0.post(r1)
            L18:
                return
        }
    }

    private interface b {
        void a(int r1);
    }

    private class c extends android.content.BroadcastReceiver {
        com.sigmob.sdk.videoplayer.g.b a;
        final com.sigmob.sdk.videoplayer.g b;

        public c(com.sigmob.sdk.videoplayer.g r1, com.sigmob.sdk.videoplayer.g.b r2) {
                r0 = this;
                r0.b = r1
                r0.<init>()
                r0.a = r2
                return
        }

        @Override
        public void onReceive(android.content.Context r2, android.content.Intent r3) {
                r1 = this;
                java.lang.String r2 = r3.getAction()
                java.lang.String r0 = "android.media.VOLUME_CHANGED_ACTION"
                boolean r2 = r0.equals(r2)
                if (r2 == 0) goto L33
                r2 = -1
                java.lang.String r0 = "android.media.EXTRA_VOLUME_STREAM_TYPE"
                int r2 = r3.getIntExtra(r0, r2)
                r3 = 3
                if (r2 != r3) goto L33
                com.sigmob.sdk.videoplayer.g$b r2 = r1.a
                if (r2 == 0) goto L33
                com.sigmob.sdk.videoplayer.g r2 = r1.b
                android.content.Context r2 = r2.getApplicationContext()
                java.lang.String r0 = "audio"
                java.lang.Object r2 = r2.getSystemService(r0)
                android.media.AudioManager r2 = (android.media.AudioManager) r2
                int r2 = r2.getStreamVolume(r3)
                if (r2 < 0) goto L33
                com.sigmob.sdk.videoplayer.g$b r3 = r1.a
                r3.a(r2)
            L33:
                return
        }
    }

    static {
            return
    }

    public g(android.content.Context r6) {
            r5 = this;
            r5.<init>(r6)
            r0 = -1
            r5.w = r0
            r5.x = r0
            r1 = 0
            r5.z = r1
            r5.A = r1
            r2 = 1
            r5.C = r2
            r5.E = r0
            r5.F = r1
            r5.G = r0
            r3 = 0
            r5.H = r3
            r5.L = r1
            r5.M = r3
            com.sigmob.sdk.videoplayer.g$1 r0 = new com.sigmob.sdk.videoplayer.g$1
            r0.<init>(r5)
            r5.U = r0
            r5.al = r2
            r5.ar = r1
            r5.a(r6)
            return
    }

    public g(android.content.Context r5, android.util.AttributeSet r6) {
            r4 = this;
            r4.<init>(r5, r6)
            r6 = -1
            r4.w = r6
            r4.x = r6
            r0 = 0
            r4.z = r0
            r4.A = r0
            r1 = 1
            r4.C = r1
            r4.E = r6
            r4.F = r0
            r4.G = r6
            r2 = 0
            r4.H = r2
            r4.L = r0
            r4.M = r2
            com.sigmob.sdk.videoplayer.g$1 r6 = new com.sigmob.sdk.videoplayer.g$1
            r6.<init>(r4)
            r4.U = r6
            r4.al = r1
            r4.ar = r0
            r4.a(r5)
            return
    }

    private void F() {
            r5 = this;
            com.sigmob.sdk.videoplayer.j r0 = r5.D     // Catch: java.lang.Throwable -> L2e
            if (r0 == 0) goto L9
            com.sigmob.sdk.videoplayer.j r0 = r5.D     // Catch: java.lang.Throwable -> L2e
            r0.f()     // Catch: java.lang.Throwable -> L2e
        L9:
            java.lang.Class r0 = r5.B     // Catch: java.lang.Throwable -> L2e
            if (r0 != 0) goto L15
            com.sigmob.sdk.videoplayer.k r0 = new com.sigmob.sdk.videoplayer.k     // Catch: java.lang.Throwable -> L2e
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2e
        L12:
            r5.D = r0     // Catch: java.lang.Throwable -> L2e
            goto L32
        L15:
            java.lang.Class r0 = r5.B     // Catch: java.lang.Throwable -> L2e
            r1 = 1
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Throwable -> L2e
            java.lang.Class<com.sigmob.sdk.videoplayer.g> r3 = com.sigmob.sdk.videoplayer.g.class
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.Throwable -> L2e
            java.lang.reflect.Constructor r0 = r0.getConstructor(r2)     // Catch: java.lang.Throwable -> L2e
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L2e
            r1[r4] = r5     // Catch: java.lang.Throwable -> L2e
            java.lang.Object r0 = r0.newInstance(r1)     // Catch: java.lang.Throwable -> L2e
            com.sigmob.sdk.videoplayer.j r0 = (com.sigmob.sdk.videoplayer.j) r0     // Catch: java.lang.Throwable -> L2e
            goto L12
        L2e:
            r0 = move-exception
            r0.printStackTrace()
        L32:
            return
    }

    private void a(android.view.View r1, int r2) {
            r0 = this;
            if (r1 == 0) goto L5
            r1.setVisibility(r2)
        L5:
            return
    }

    static boolean a(com.sigmob.sdk.videoplayer.g r0) {
            boolean r0 = r0.al
            return r0
    }

    public void A() {
            r0 = this;
            return
    }

    public void B() {
            r0 = this;
            return
    }

    public void C() {
            r2 = this;
            com.sigmob.sdk.videoplayer.g r0 = r2.v
            if (r0 == 0) goto L36
            int r0 = r0.w
            if (r0 == 0) goto L36
            r1 = 5
            if (r0 != r1) goto L1f
            com.sigmob.sdk.nativead.h r0 = r2.ak
            if (r0 == 0) goto L12
            r0.onVideoResume()
        L12:
            com.sigmob.sdk.videoplayer.g r0 = r2.v
            r0.f()
            com.sigmob.sdk.videoplayer.g r0 = r2.v
            com.sigmob.sdk.videoplayer.j r0 = r0.D
            r0.a()
            goto L39
        L1f:
            r1 = 3
            if (r0 != r1) goto L39
            com.sigmob.sdk.nativead.h r0 = r2.ak
            if (r0 == 0) goto L29
            r0.onVideoStart()
        L29:
            com.sigmob.sdk.videoplayer.g r0 = r2.v
            com.sigmob.sdk.videoplayer.j r0 = r0.D
            r0.a()
            com.sigmob.sdk.videoplayer.g r0 = r2.v
            r0.f()
            goto L39
        L36:
            r2.k()
        L39:
            return
    }

    public void D() {
            r3 = this;
            com.sigmob.sdk.videoplayer.g r0 = r3.v
            if (r0 == 0) goto L23
            int r1 = r0.w
            r2 = 6
            if (r1 == r2) goto L20
            if (r1 == 0) goto L20
            r2 = 1
            if (r1 == r2) goto L20
            r2 = 7
            if (r1 != r2) goto L12
            goto L20
        L12:
            r2 = 5
            if (r1 == r2) goto L23
            r0.g()
            com.sigmob.sdk.videoplayer.g r0 = r3.v
            com.sigmob.sdk.videoplayer.j r0 = r0.D
            r0.d()
            goto L23
        L20:
            r3.E()
        L23:
            return
    }

    public void E() {
            r1 = this;
            java.lang.String r0 = "releaseAllVideos"
            com.czhj.sdk.logger.SigmobLog.i(r0)
            com.sigmob.sdk.videoplayer.g r0 = r1.v
            if (r0 == 0) goto Lf
            r0.j()
            r0 = 0
            r1.v = r0
        Lf:
            return
    }

    public void a() {
            r2 = this;
            r2.E()
            com.sigmob.sdk.videoplayer.g$c r0 = r2.aq
            if (r0 == 0) goto L13
            android.content.Context r0 = r2.getContext()
            com.sigmob.sdk.videoplayer.g$c r1 = r2.aq
            r0.unregisterReceiver(r1)
            r0 = 0
            r2.aq = r0
        L13:
            return
    }

    public void a(float r2) {
            r1 = this;
            com.sigmob.sdk.videoplayer.g r2 = r1.v
            if (r2 == 0) goto L17
            int r2 = r1.w
            r0 = 4
            if (r2 == r0) goto Lc
            r0 = 5
            if (r2 != r0) goto L17
        Lc:
            int r2 = r1.x
            r0 = 1
            if (r2 == r0) goto L17
            r0 = 2
            if (r2 == r0) goto L17
            r1.t()
        L17:
            return
    }

    public void a(float r1, int r2) {
            r0 = this;
            return
    }

    public void a(float r1, java.lang.String r2, long r3, java.lang.String r5, long r6) {
            r0 = this;
            return
    }

    public void a(int r1) {
            r0 = this;
            return
    }

    @Override
    public void a(int r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onError "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = " - "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = " ["
            r0.append(r1)
            int r1 = r2.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            com.sigmob.sdk.nativead.h r0 = r2.ak
            if (r0 == 0) goto L36
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_PLAY_VIDEO
            r0.onVideoError(r1)
        L36:
            r0 = 38
            if (r3 == r0) goto L4e
            r1 = -38
            if (r4 == r1) goto L4e
            if (r3 == r1) goto L4e
            if (r4 == r0) goto L4e
            r3 = -19
            if (r4 == r3) goto L4e
            r2.h()
            com.sigmob.sdk.videoplayer.j r3 = r2.D
            r3.f()
        L4e:
            return
    }

    public void a(int r3, int r4, int r5) {
            r2 = this;
            if (r3 == 0) goto L2e
            r0 = 1
            if (r3 == r0) goto L2a
            r0 = 2
            if (r3 == r0) goto L25
            r4 = 4
            if (r3 == r4) goto L21
            r4 = 5
            if (r3 == r4) goto L1d
            r4 = 6
            if (r3 == r4) goto L19
            r4 = 7
            if (r3 == r4) goto L15
            goto L31
        L15:
            r2.h()
            goto L31
        L19:
            r2.i()
            goto L31
        L1d:
            r2.g()
            goto L31
        L21:
            r2.f()
            goto L31
        L25:
            long r0 = (long) r5
            r2.a(r4, r0)
            goto L31
        L2a:
            r2.c()
            goto L31
        L2e:
            r2.b()
        L31:
            return
    }

    public void a(int r2, long r3) {
            r1 = this;
            r0 = 2
            r1.w = r0
            r1.H = r3
            com.sigmob.sdk.videoplayer.h r3 = r1.y
            r3.b = r2
            com.sigmob.sdk.videoplayer.j r2 = r1.D
            r3 = 0
            r2.a(r3)
            com.sigmob.sdk.videoplayer.j r2 = r1.D
            r2.f()
            com.sigmob.sdk.videoplayer.j r2 = r1.D
            r2.c()
            return
    }

    public void a(int r3, long r4, long r6) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onProgress: progress="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = " position="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = " duration="
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            boolean r0 = r2.S
            if (r0 != 0) goto L3c
            int r0 = r2.G
            r1 = -1
            if (r0 == r1) goto L33
            if (r0 <= r3) goto L30
            return
        L30:
            r2.G = r1
            goto L3c
        L33:
            if (r3 == 0) goto L3c
            android.widget.ProgressBar r0 = r2.ai
            if (r0 == 0) goto L3c
            r0.setProgress(r3)
        L3c:
            com.sigmob.sdk.nativead.h r3 = r2.ak
            if (r3 == 0) goto L43
            r3.a(r4, r6)
        L43:
            return
    }

    public void a(android.content.Context r3) {
            r2 = this;
            int r0 = r2.getLayoutId()
            android.view.View.inflate(r3, r0, r2)
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_sound_rl"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r2.ae = r0
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_start_rl"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r2.ab = r0
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_fullscreen_rl"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r2.ac = r0
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_replay_rl"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r2.ad = r0
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_sound_btn"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.K = r0
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_start_btn"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.I = r0
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_fullscreen_btn"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.J = r0
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_surface_container"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r2.aa = r0
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_app_container"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r2.ah = r0
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_bottom_progress"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ProgressBar r0 = (android.widget.ProgressBar) r0
            r2.ai = r0
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_big_replay"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r2.af = r0
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_thumb"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.aj = r0
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_blurImageView"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.an = r0
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_back_rl"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r2.ag = r0
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_layout_top"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            r2.as = r0
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_native_video_layout_bottom"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r2.findViewById(r0)
            r2.au = r0
            android.view.ViewGroup r0 = r2.ad
            r0.setOnClickListener(r2)
            android.view.ViewGroup r0 = r2.ae
            r0.setOnClickListener(r2)
            android.view.ViewGroup r0 = r2.ab
            r0.setOnClickListener(r2)
            android.view.ViewGroup r0 = r2.ac
            r0.setOnClickListener(r2)
            android.view.ViewGroup r0 = r2.af
            r0.setOnClickListener(r2)
            android.content.Context r0 = r2.getContext()
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r0 = r0.widthPixels
            r2.O = r0
            android.content.Context r0 = r2.getContext()
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r0 = r0.heightPixels
            r2.P = r0
            com.sigmob.sdk.videoplayer.g$c r0 = new com.sigmob.sdk.videoplayer.g$c
            com.sigmob.sdk.videoplayer.g$2 r1 = new com.sigmob.sdk.videoplayer.g$2
            r1.<init>(r2)
            r0.<init>(r2, r1)
            r2.aq = r0
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r1 = "android.media.VOLUME_CHANGED_ACTION"
            r0.addAction(r1)
            com.sigmob.sdk.videoplayer.g$c r1 = r2.aq
            r3.registerReceiver(r1, r0)
            r3 = -1
            r2.w = r3
            return
    }

    public void a(android.view.ViewGroup r6) {
            r5 = this;
            java.lang.Class r0 = r5.getClass()     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            r1 = 1
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            java.lang.Class<android.content.Context> r3 = android.content.Context.class
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            java.lang.reflect.Constructor r0 = r0.getConstructor(r2)     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            r1[r4] = r2     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            java.lang.Object r0 = r0.newInstance(r1)     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            com.sigmob.sdk.videoplayer.g r0 = (com.sigmob.sdk.videoplayer.g) r0     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            int r1 = r5.getId()     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            r0.setId(r1)     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            r6.addView(r0)     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            com.sigmob.sdk.videoplayer.h r6 = r5.y     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            com.sigmob.sdk.videoplayer.h r6 = r6.c()     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            java.lang.Class r1 = r5.B     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            r0.a(r6, r4, r1)     // Catch: java.lang.NoSuchMethodException -> L34 java.lang.reflect.InvocationTargetException -> L39 java.lang.InstantiationException -> L3e java.lang.IllegalAccessException -> L43
            goto L47
        L34:
            r6 = move-exception
            r6.printStackTrace()
            goto L47
        L39:
            r6 = move-exception
            r6.printStackTrace()
            goto L47
        L3e:
            r6 = move-exception
            r6.printStackTrace()
            goto L47
        L43:
            r6 = move-exception
            r6.printStackTrace()
        L47:
            return
    }

    public void a(com.sigmob.sdk.videoplayer.f r3, boolean r4) {
            r2 = this;
            int[] r0 = com.sigmob.sdk.videoplayer.g.3.a
            int r3 = r3.ordinal()
            r3 = r0[r3]
            r0 = 0
            r1 = 4
            switch(r3) {
                case 1: goto L27;
                case 2: goto L22;
                case 3: goto L1d;
                case 4: goto L18;
                case 5: goto L13;
                case 6: goto Le;
                default: goto Ld;
            }
        Ld:
            goto L30
        Le:
            android.view.ViewGroup r3 = r2.ag
            if (r4 == 0) goto L2c
            goto L2d
        L13:
            android.view.ViewGroup r3 = r2.af
            if (r4 == 0) goto L2c
            goto L2d
        L18:
            android.view.ViewGroup r3 = r2.ac
            if (r4 == 0) goto L2c
            goto L2d
        L1d:
            android.view.ViewGroup r3 = r2.ae
            if (r4 == 0) goto L2c
            goto L2d
        L22:
            android.view.ViewGroup r3 = r2.ad
            if (r4 == 0) goto L2c
            goto L2d
        L27:
            android.view.ViewGroup r3 = r2.ab
            if (r4 == 0) goto L2c
            goto L2d
        L2c:
            r0 = r1
        L2d:
            r2.a(r3, r0)
        L30:
            return
    }

    public void a(com.sigmob.sdk.videoplayer.h r2, int r3) {
            r1 = this;
            r0 = 0
            r1.a(r2, r3, r0)
            return
    }

    public void a(com.sigmob.sdk.videoplayer.h r5, int r6, java.lang.Class r7) {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.M
            long r0 = r0 - r2
            r2 = 200(0xc8, double:9.9E-322)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto Le
            return
        Le:
            r4.y = r5
            r4.x = r6
            r4.b()
            r4.B = r7
            return
    }

    public void a(com.sigmob.sdk.videoplayer.h r2, long r3) {
            r1 = this;
            r0 = 2
            r1.w = r0
            r1.H = r3
            r1.y = r2
            com.sigmob.sdk.videoplayer.j r2 = r1.D
            r3 = 0
            r2.a(r3)
            com.sigmob.sdk.videoplayer.j r2 = r1.D
            r2.f()
            com.sigmob.sdk.videoplayer.j r2 = r1.D
            r2.c()
            return
    }

    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.sigmob.sdk.videoplayer.h r0 = new com.sigmob.sdk.videoplayer.h
            r0.<init>(r2, r3)
            r2 = 0
            r1.a(r0, r2)
            return
    }

    public void a(java.lang.String r2, java.lang.String r3, int r4) {
            r1 = this;
            com.sigmob.sdk.videoplayer.h r0 = new com.sigmob.sdk.videoplayer.h
            r0.<init>(r2, r3)
            r1.a(r0, r4)
            return
    }

    public void a(java.lang.String r2, java.lang.String r3, int r4, java.lang.Class r5) {
            r1 = this;
            com.sigmob.sdk.videoplayer.h r0 = new com.sigmob.sdk.videoplayer.h
            r0.<init>(r2, r3)
            r1.a(r0, r4, r5)
            return
    }

    public void a(java.lang.String r2, java.lang.String r3, long r4) {
            r1 = this;
            com.sigmob.sdk.videoplayer.h r0 = new com.sigmob.sdk.videoplayer.h
            r0.<init>(r2, r3)
            r1.a(r0, r4)
            return
    }

    public void a(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L6
            android.view.ViewGroup r2 = r1.ac
            r0 = 0
            goto L9
        L6:
            android.view.ViewGroup r2 = r1.ac
            r0 = 4
        L9:
            r1.a(r2, r0)
            return
    }

    public void b() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onStateNormal stat"
            r0.append(r1)
            int r1 = r2.w
            r0.append(r1)
            java.lang.String r1 = " ["
            r0.append(r1)
            int r1 = r2.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r0 = 0
            r2.w = r0
            android.widget.ImageView r1 = r2.aj
            r2.a(r1, r0)
            android.view.ViewGroup r1 = r2.ab
            r2.a(r1, r0)
            r2.r()
            com.sigmob.sdk.videoplayer.j r0 = r2.D
            if (r0 == 0) goto L3e
            r0.f()
        L3e:
            return
    }

    @Override
    public void b(int r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onInfo what - "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = " extra - "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r4)
            r4 = 3
            if (r3 == r4) goto L50
            r4 = 701(0x2bd, float:9.82E-43)
            if (r3 == r4) goto L3a
            r4 = 702(0x2be, float:9.84E-43)
            if (r3 == r4) goto L28
            goto L5a
        L28:
            boolean r3 = r2.at
            if (r3 == 0) goto L37
            r3 = 0
            r2.at = r3
            com.sigmob.sdk.videoplayer.j r3 = r2.D
            r3.a()
            r2.f()
        L37:
            java.lang.String r3 = "MEDIA_INFO_BUFFERING_END"
            goto L4c
        L3a:
            int r3 = r2.w
            r4 = 4
            if (r3 != r4) goto L4a
            r3 = 1
            r2.at = r3
            com.sigmob.sdk.videoplayer.j r3 = r2.D
            r3.d()
            r2.g()
        L4a:
            java.lang.String r3 = "MEDIA_INFO_BUFFERING_START"
        L4c:
            com.czhj.sdk.logger.SigmobLog.d(r3)
            goto L5a
        L50:
            int r3 = r2.w
            if (r3 == r4) goto L57
            r4 = 2
            if (r3 != r4) goto L5a
        L57:
            r2.f()
        L5a:
            return
    }

    public void b(boolean r1) {
            r0 = this;
            r0.ar = r1
            return
    }

    public void c() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onStatePreparing  ["
            r0.append(r1)
            int r1 = r2.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r0 = 1
            r2.w = r0
            r2.s()
            return
    }

    @Override
    public void c(int r3, int r4) {
            r2 = this;
            r2.ao = r4
            r2.ap = r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onVideoSizeChanged  ["
            r0.append(r1)
            int r1 = r2.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            com.sigmob.sdk.videoplayer.m r0 = r2.T
            if (r0 == 0) goto L32
            int r1 = r2.F
            if (r1 == 0) goto L2d
            float r1 = (float) r1
            r0.setRotation(r1)
        L2d:
            com.sigmob.sdk.videoplayer.m r0 = r2.T
            r0.a(r3, r4)
        L32:
            return
    }

    public void d() {
            r1 = this;
            r0 = 1
            r1.L = r0
            r1.k()
            return
    }

    public void e() {
            r2 = this;
            int r0 = r2.w
            r1 = 3
            if (r0 != r1) goto Lb
            com.sigmob.sdk.videoplayer.j r0 = r2.D
            r0.a()
            goto L11
        Lb:
            r0 = 0
            r2.L = r0
            r2.k()
        L11:
            return
    }

    public void f() {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onStatePlaying  ["
            r0.append(r1)
            int r1 = r6.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            android.widget.ImageView r0 = r6.aj
            r1 = 4
            r6.a(r0, r1)
            android.view.ViewGroup r0 = r6.ab
            r6.a(r0, r1)
            int r0 = r6.w
            r2 = 3
            if (r0 != r2) goto L3c
            long r2 = r6.H
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L3c
            com.sigmob.sdk.videoplayer.j r0 = r6.D
            r0.a(r2)
            r6.H = r4
        L3c:
            r6.w = r1
            r6.q()
            return
    }

    public void g() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onStatePause  ["
            r0.append(r1)
            int r1 = r2.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.i(r0)
            r0 = 5
            r2.w = r0
            android.view.ViewGroup r0 = r2.ab
            r1 = 0
            r2.a(r0, r1)
            com.sigmob.sdk.nativead.h r0 = r2.ak
            if (r0 == 0) goto L2d
            r0.onVideoPause()
        L2d:
            r2.q()
            return
    }

    public android.view.ViewGroup getAppContainer() {
            r1 = this;
            android.view.ViewGroup r0 = r1.ah
            return r0
    }

    public android.content.Context getApplicationContext() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            if (r0 == 0) goto Ld
            android.content.Context r1 = r0.getApplicationContext()
            if (r1 == 0) goto Ld
            return r1
        Ld:
            return r0
    }

    public android.widget.ImageView getBlurImageView() {
            r1 = this;
            android.widget.ImageView r0 = r1.an
            return r0
    }

    public android.view.View getBottomLayoutView() {
            r1 = this;
            android.view.View r0 = r1.au
            return r0
    }

    public long getCurrentPositionWhenPlaying() {
            r4 = this;
            int r0 = r4.w
            r1 = 0
            r3 = 4
            if (r0 == r3) goto La
            r3 = 5
            if (r0 != r3) goto L10
        La:
            com.sigmob.sdk.videoplayer.j r0 = r4.D     // Catch: java.lang.IllegalStateException -> L11
            long r1 = r0.g()     // Catch: java.lang.IllegalStateException -> L11
        L10:
            return r1
        L11:
            r0 = move-exception
            r0.printStackTrace()
            return r1
    }

    public long getDuration() {
            r2 = this;
            com.sigmob.sdk.videoplayer.j r0 = r2.D     // Catch: java.lang.IllegalStateException -> L7
            long r0 = r0.j()     // Catch: java.lang.IllegalStateException -> L7
            return r0
        L7:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public int getLayoutId() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_video_player_layout"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getLayoutId(r0, r1)
            return r0
    }

    public android.view.ViewGroup getSigAdView() {
            r2 = this;
            android.view.ViewParent r0 = r2.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
        L6:
            boolean r1 = r0 instanceof com.sigmob.sdk.nativead.i
            if (r1 == 0) goto Lb
            goto L13
        Lb:
            android.view.ViewParent r0 = r2.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            if (r0 != 0) goto L6
        L13:
            return r0
    }

    public android.graphics.Bitmap getTextureBitmap() {
            r1 = this;
            com.sigmob.sdk.videoplayer.m r0 = r1.T
            if (r0 == 0) goto L9
            android.graphics.Bitmap r0 = r0.getBitmap()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public android.widget.ImageView getThumbView() {
            r1 = this;
            android.widget.ImageView r0 = r1.aj
            return r0
    }

    public android.view.View getTopLayoutView() {
            r1 = this;
            android.view.View r0 = r1.as
            return r0
    }

    public int getVideoHeight() {
            r1 = this;
            int r0 = r1.ao
            return r0
    }

    @Override
    public com.sigmob.sdk.videoplayer.h getVideoPlayerDataSource() {
            r1 = this;
            com.sigmob.sdk.videoplayer.h r0 = r1.y
            return r0
    }

    public int getVideoSurferViewHeight() {
            r1 = this;
            com.sigmob.sdk.videoplayer.m r0 = r1.T
            if (r0 == 0) goto L9
            int r0 = r0.getHeight()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public int getVideoWidth() {
            r1 = this;
            int r0 = r1.ap
            return r0
    }

    public void h() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onStateError  ["
            r0.append(r1)
            int r1 = r3.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r0 = 7
            r3.w = r0
            r3.r()
            int r0 = r3.x
            r1 = 0
            r2 = 1
            if (r0 != r2) goto L2c
            android.view.ViewGroup r0 = r3.ab
            goto L2e
        L2c:
            android.view.ViewGroup r0 = r3.ad
        L2e:
            r3.a(r0, r1)
            return
    }

    public void i() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onStateAutoComplete  ["
            r0.append(r1)
            int r1 = r2.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.i(r0)
            r0 = 6
            r2.w = r0
            r2.r()
            android.widget.ProgressBar r0 = r2.ai
            if (r0 == 0) goto L2c
            r1 = 100
            r0.setProgress(r1)
        L2c:
            return
    }

    public void j() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "reset  ["
            r0.append(r1)
            int r1 = r2.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r2.r()
            r2.s()
            r2.B()
            r2.z()
            r2.A()
            r2.b()
            android.view.ViewGroup r0 = r2.aa
            r0.removeAllViews()
            android.content.Context r0 = r2.getContext()
            android.view.Window r0 = com.sigmob.sdk.videoplayer.d.c(r0)
            if (r0 == 0) goto L43
            r1 = 128(0x80, float:1.8E-43)
            r0.clearFlags(r1)
        L43:
            com.sigmob.sdk.videoplayer.j r0 = r2.D
            if (r0 == 0) goto L4a
            r0.f()
        L4a:
            return
    }

    public void k() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "startVideo ["
            r0.append(r1)
            int r1 = r2.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r2.setCurrentVideoAdView(r2)
            r2.F()     // Catch: java.lang.Throwable -> L2f
            android.view.ViewGroup r0 = r2.ad     // Catch: java.lang.Throwable -> L2f
            r1 = 4
            r2.a(r0, r1)     // Catch: java.lang.Throwable -> L2f
            android.view.ViewGroup r0 = r2.af     // Catch: java.lang.Throwable -> L2f
            r2.a(r0, r1)     // Catch: java.lang.Throwable -> L2f
            goto L33
        L2f:
            r0 = move-exception
            r0.printStackTrace()
        L33:
            android.content.Context r0 = r2.getContext()
            android.view.Window r0 = com.sigmob.sdk.videoplayer.d.c(r0)
            if (r0 == 0) goto L47
            r1 = 16777216(0x1000000, float:2.3509887E-38)
            r0.setFlags(r1, r1)
            r1 = 128(0x80, float:1.8E-43)
            r0.addFlags(r1)
        L47:
            r2.l()
            r2.c()
            return
    }

    public void l() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "addTextureView ["
            r0.append(r1)
            int r1 = r3.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            com.sigmob.sdk.videoplayer.m r0 = r3.T
            if (r0 == 0) goto L26
            android.view.ViewGroup r1 = r3.aa
            r1.removeView(r0)
        L26:
            com.sigmob.sdk.videoplayer.m r0 = new com.sigmob.sdk.videoplayer.m
            android.content.Context r1 = r3.getContext()
            android.content.Context r1 = r1.getApplicationContext()
            r0.<init>(r1)
            r3.T = r0
            com.sigmob.sdk.videoplayer.j r1 = r3.D
            r0.setSurfaceTextureListener(r1)
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = 17
            r2 = -1
            r0.<init>(r2, r2, r1)
            android.view.ViewGroup r1 = r3.aa
            com.sigmob.sdk.videoplayer.m r2 = r3.T
            r1.addView(r2, r0)
            return
    }

    public void m() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            android.view.Window r0 = com.sigmob.sdk.videoplayer.d.c(r0)
            if (r0 == 0) goto L16
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r0 = r0.findViewById(r1)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.removeView(r2)
        L16:
            return
    }

    @Override
    public void n() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onPrepared  ["
            r0.append(r1)
            int r1 = r2.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r0 = 3
            r2.w = r0
            boolean r0 = r2.al
            r2.setSoundChange(r0)
            com.sigmob.sdk.nativead.h r0 = r2.ak
            if (r0 == 0) goto L2c
            r0.onVideoLoad()
        L2c:
            boolean r0 = r2.L
            if (r0 != 0) goto L48
            com.sigmob.sdk.nativead.h r0 = r2.ak
            if (r0 == 0) goto L37
            r0.onVideoStart()
        L37:
            java.lang.String r0 = "mediaInterface start"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r2.f()
            com.sigmob.sdk.videoplayer.j r0 = r2.D
            r0.a()
            r0 = 0
            r2.L = r0
            goto L57
        L48:
            boolean r0 = r2.ar
            if (r0 == 0) goto L57
            android.widget.ImageView r0 = r2.aj
            com.sigmob.sdk.videoplayer.m r1 = r2.T
            android.graphics.Bitmap r1 = r1.getBitmap()
            r0.setImageBitmap(r1)
        L57:
            com.sigmob.sdk.videoplayer.h r0 = r2.y
            java.lang.Object r0 = r0.a()
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = r0.toLowerCase()
            java.lang.String r1 = "mp3"
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto Lc5
            com.sigmob.sdk.videoplayer.h r0 = r2.y
            java.lang.Object r0 = r0.a()
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = r0.toLowerCase()
            java.lang.String r1 = "wma"
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto Lc5
            com.sigmob.sdk.videoplayer.h r0 = r2.y
            java.lang.Object r0 = r0.a()
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = r0.toLowerCase()
            java.lang.String r1 = "aac"
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto Lc5
            com.sigmob.sdk.videoplayer.h r0 = r2.y
            java.lang.Object r0 = r0.a()
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = r0.toLowerCase()
            java.lang.String r1 = "m4a"
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto Lc5
            com.sigmob.sdk.videoplayer.h r0 = r2.y
            java.lang.Object r0 = r0.a()
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = r0.toLowerCase()
            java.lang.String r1 = "wav"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto Lc8
        Lc5:
            r2.f()
        Lc8:
            return
    }

    @Override
    public void o() {
            r2 = this;
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            r0.gc()
            com.sigmob.sdk.nativead.h r0 = r2.ak
            if (r0 == 0) goto Le
            r0.onVideoCompleted()
        Le:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onAutoCompletion  ["
            r0.append(r1)
            int r1 = r2.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r2.r()
            r2.B()
            r2.z()
            r2.A()
            r2.i()
            android.content.Context r0 = r2.getContext()
            android.view.Window r0 = com.sigmob.sdk.videoplayer.d.c(r0)
            if (r0 == 0) goto L49
            r1 = 128(0x80, float:1.8E-43)
            r0.clearFlags(r1)
        L49:
            r2.s()
            r0 = 0
            r2.v = r0
            return
    }

    @Override
    public void onClick(android.view.View r2) {
            r1 = this;
            r0 = 0
            r1.onTouch(r2, r0)
            return
    }

    @Override
    protected void onMeasure(int r3, int r4) {
            r2 = this;
            int r0 = r2.x
            r1 = 1
            if (r0 == r1) goto L39
            r1 = 2
            if (r0 != r1) goto L9
            goto L39
        L9:
            int r0 = r2.z
            if (r0 == 0) goto L35
            int r0 = r2.A
            if (r0 == 0) goto L35
            int r3 = android.view.View.MeasureSpec.getSize(r3)
            float r4 = (float) r3
            int r0 = r2.A
            float r0 = (float) r0
            float r4 = r4 * r0
            int r0 = r2.z
            float r0 = (float) r0
            float r4 = r4 / r0
            int r4 = (int) r4
            r2.setMeasuredDimension(r3, r4)
            r0 = 1073741824(0x40000000, float:2.0)
            int r3 = android.view.View.MeasureSpec.makeMeasureSpec(r3, r0)
            int r4 = android.view.View.MeasureSpec.makeMeasureSpec(r4, r0)
            r0 = 0
            android.view.View r0 = r2.getChildAt(r0)
            r0.measure(r3, r4)
            goto L38
        L35:
            super.onMeasure(r3, r4)
        L38:
            return
        L39:
            super.onMeasure(r3, r4)
            return
    }

    @Override
    public void onProgressChanged(android.widget.SeekBar r1, int r2, boolean r3) {
            r0 = this;
            if (r3 == 0) goto L5
            r0.getDuration()
        L5:
            return
    }

    @Override
    public void onStartTrackingTouch(android.widget.SeekBar r2) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "bottomProgress onStartTrackingTouch ["
            r2.append(r0)
            int r0 = r1.hashCode()
            r2.append(r0)
            java.lang.String r0 = "] "
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.czhj.sdk.logger.SigmobLog.d(r2)
            r1.r()
            android.view.ViewParent r2 = r1.getParent()
        L24:
            if (r2 == 0) goto L2f
            r0 = 1
            r2.requestDisallowInterceptTouchEvent(r0)
            android.view.ViewParent r2 = r2.getParent()
            goto L24
        L2f:
            return
    }

    @Override
    public void onStopTrackingTouch(android.widget.SeekBar r7) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "bottomProgress onStopTrackingTouch ["
            r0.append(r1)
            int r1 = r6.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r6.q()
            android.view.ViewParent r0 = r6.getParent()
        L24:
            if (r0 == 0) goto L2f
            r2 = 0
            r0.requestDisallowInterceptTouchEvent(r2)
            android.view.ViewParent r0 = r0.getParent()
            goto L24
        L2f:
            int r0 = r6.w
            r2 = 4
            if (r0 == r2) goto L38
            r2 = 5
            if (r0 == r2) goto L38
            return
        L38:
            int r0 = r7.getProgress()
            long r2 = (long) r0
            long r4 = r6.getDuration()
            long r2 = r2 * r4
            r4 = 100
            long r2 = r2 / r4
            int r7 = r7.getProgress()
            r6.G = r7
            com.sigmob.sdk.videoplayer.j r7 = r6.D
            r7.a(r2)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "seekTo "
            r7.append(r0)
            r7.append(r2)
            java.lang.String r0 = " ["
            r7.append(r0)
            int r0 = r6.hashCode()
            r7.append(r0)
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            com.czhj.sdk.logger.SigmobLog.d(r7)
            return
    }

    @Override
    public boolean onTouch(android.view.View r2, android.view.MotionEvent r3) {
            r1 = this;
            r0 = 1
            if (r3 == 0) goto L9
            int r3 = r3.getAction()
            if (r3 != r0) goto Ld4
        L9:
            android.view.ViewGroup r3 = r1.ac
            if (r2 != r3) goto L1f
            int r2 = r1.x
            if (r2 == 0) goto L1a
            if (r2 == r0) goto L15
            goto Ld4
        L15:
            r1.u()
            goto Ld4
        L1a:
            r1.t()
            goto Ld4
        L1f:
            android.view.ViewGroup r3 = r1.ae
            if (r2 != r3) goto L2b
            boolean r2 = r1.al
            r2 = r2 ^ r0
            r1.setSoundChange(r2)
            goto Ld4
        L2b:
            android.view.ViewGroup r3 = r1.ad
            if (r2 == r3) goto Lca
            android.view.ViewGroup r3 = r1.af
            if (r2 != r3) goto L35
            goto Lca
        L35:
            android.view.ViewGroup r3 = r1.ab
            if (r2 != r3) goto Ld4
            int r2 = r1.w
            if (r2 != 0) goto L77
            boolean r2 = com.sigmob.sdk.videoplayer.g.t
            if (r2 != 0) goto L73
            com.sigmob.sdk.videoplayer.h r2 = r1.y
            java.lang.Object r2 = r2.a()
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "file"
            boolean r2 = r2.startsWith(r3)
            if (r2 != 0) goto L73
            com.sigmob.sdk.videoplayer.h r2 = r1.y
            java.lang.Object r2 = r2.a()
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "/"
            boolean r2 = r2.startsWith(r3)
            if (r2 != 0) goto L73
            android.content.Context r2 = r1.getContext()
            boolean r2 = com.sigmob.sdk.videoplayer.d.a(r2)
            if (r2 != 0) goto L73
            r1.y()
            return r0
        L73:
            r1.k()
            goto Lc9
        L77:
            r3 = 4
            if (r2 != r3) goto La0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "pauseVideo ["
            r2.append(r3)
            int r3 = r1.hashCode()
            r2.append(r3)
            java.lang.String r3 = "] "
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.czhj.sdk.logger.SigmobLog.d(r2)
            com.sigmob.sdk.videoplayer.j r2 = r1.D
            r2.d()
            r1.g()
            goto Lc9
        La0:
            r3 = 5
            if (r2 != r3) goto Lb3
            com.sigmob.sdk.nativead.h r2 = r1.ak
            if (r2 == 0) goto Laa
            r2.onVideoResume()
        Laa:
            com.sigmob.sdk.videoplayer.j r2 = r1.D
            r2.a()
            r1.f()
            goto Lc9
        Lb3:
            r3 = 6
            if (r2 != r3) goto Lb7
            goto L73
        Lb7:
            r3 = 3
            if (r2 != r3) goto Lc9
            com.sigmob.sdk.videoplayer.j r2 = r1.D
            r2.a()
            r1.f()
            com.sigmob.sdk.nativead.h r2 = r1.ak
            if (r2 == 0) goto Lc9
            r2.onVideoStart()
        Lc9:
            return r0
        Lca:
            com.sigmob.sdk.nativead.h r2 = r1.ak
            if (r2 == 0) goto Ld1
            r2.a()
        Ld1:
            r1.k()
        Ld4:
            r2 = 0
            return r2
    }

    @Override
    public void p() {
            r0 = this;
            return
    }

    public void q() {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "startProgressTimer:  ["
            r0.append(r1)
            int r1 = r7.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r7.r()
            java.util.Timer r0 = new java.util.Timer
            r0.<init>()
            r7.N = r0
            com.sigmob.sdk.videoplayer.g$a r2 = new com.sigmob.sdk.videoplayer.g$a
            r2.<init>(r7)
            r7.R = r2
            java.util.Timer r1 = r7.N
            r3 = 0
            r5 = 300(0x12c, double:1.48E-321)
            r1.schedule(r2, r3, r5)
            return
    }

    public void r() {
            r1 = this;
            java.util.Timer r0 = r1.N
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            com.sigmob.sdk.videoplayer.g$a r0 = r1.R
            if (r0 == 0) goto Le
            r0.cancel()
        Le:
            return
    }

    public void s() {
            r2 = this;
            android.widget.ProgressBar r0 = r2.ai
            if (r0 == 0) goto L8
            r1 = 0
            r0.setProgress(r1)
        L8:
            return
    }

    public void setBackClickListener(android.view.View.OnClickListener r2) {
            r1 = this;
            android.view.ViewGroup r0 = r1.ag
            if (r0 == 0) goto L7
            r0.setOnClickListener(r2)
        L7:
            return
    }

    @Override
    public void setBufferProgress(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setBufferProgress() called with: bufferProgress = ["
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "]"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r3)
            return
    }

    public void setCurrentVideoAdView(com.sigmob.sdk.videoplayer.g r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public void setHolderImageResource(int r1) {
            r0 = this;
            return
    }

    public void setMediaInterface(java.lang.Class r1) {
            r0 = this;
            r0.j()
            r0.B = r1
            return
    }

    @Override
    public void setRotation(float r2) {
            r1 = this;
            com.sigmob.sdk.videoplayer.m r0 = r1.T
            r0.setRotation(r2)
            return
    }

    public void setScreen(int r2) {
            r1 = this;
            if (r2 == 0) goto L11
            r0 = 1
            if (r2 == r0) goto Ld
            r0 = 2
            if (r2 == r0) goto L9
            goto L14
        L9:
            r1.x()
            goto L14
        Ld:
            r1.w()
            goto L14
        L11:
            r1.v()
        L14:
            return
    }

    public void setSoundChange(boolean r3) {
            r2 = this;
            r2.al = r3
            if (r3 == 0) goto L15
            com.sigmob.sdk.videoplayer.j r3 = r2.D
            if (r3 == 0) goto Lc
            r0 = 0
            r3.a(r0)
        Lc:
            android.widget.ImageView r3 = r2.K
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_image_video_mute"
            goto L26
        L15:
            com.sigmob.sdk.videoplayer.j r3 = r2.D
            if (r3 == 0) goto L1e
            r0 = 1065353216(0x3f800000, float:1.0)
            r3.a(r0)
        L1e:
            android.widget.ImageView r3 = r2.K
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_image_video_unmute"
        L26:
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getDrawableId(r0, r1)
            r3.setImageResource(r0)
            return
    }

    public void setState(int r2) {
            r1 = this;
            r0 = 0
            r1.a(r2, r0, r0)
            return
    }

    @Override
    public void setSurfaceTexture(android.graphics.SurfaceTexture r2) {
            r1 = this;
            com.sigmob.sdk.videoplayer.m r0 = r1.T
            if (r0 == 0) goto L7
            r0.setSurfaceTexture(r2)
        L7:
            return
    }

    public void setTextureViewRotation(int r2) {
            r1 = this;
            com.sigmob.sdk.videoplayer.g r0 = r1.v
            if (r0 == 0) goto Lc
            com.sigmob.sdk.videoplayer.m r0 = r0.T
            if (r0 == 0) goto Lc
            float r2 = (float) r2
            r0.setRotation(r2)
        Lc:
            return
    }

    public void setUp(java.lang.String r3) {
            r2 = this;
            com.sigmob.sdk.videoplayer.h r0 = new com.sigmob.sdk.videoplayer.h
            r1 = 0
            r0.<init>(r3, r1)
            r3 = 0
            r2.a(r0, r3)
            return
    }

    public void setVideoAdStatusListener(com.sigmob.sdk.nativead.h r1) {
            r0 = this;
            r0.ak = r1
            return
    }

    public void setVideoAdViewListener(com.sigmob.sdk.videoplayer.c r1) {
            r0 = this;
            r0.am = r1
            return
    }

    public void setVideoImageDisplayType(int r1) {
            r0 = this;
            com.sigmob.sdk.videoplayer.g.u = r1
            com.sigmob.sdk.videoplayer.g r1 = r0.v
            if (r1 == 0) goto Ld
            com.sigmob.sdk.videoplayer.m r1 = r1.T
            if (r1 == 0) goto Ld
            r1.requestLayout()
        Ld:
            return
    }

    public void t() {
            r3 = this;
            com.sigmob.sdk.videoplayer.c r0 = r3.am
            if (r0 == 0) goto L7
            r0.g()
        L7:
            r3.w()
            android.widget.ImageView r0 = r3.J
            android.content.Context r1 = r3.getContext()
            java.lang.String r2 = "sig_image_video_small"
            int r1 = com.czhj.sdk.common.utils.ResourceUtil.getDrawableId(r1, r2)
            r0.setImageResource(r1)
            return
    }

    public void u() {
            r3 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r3.M = r0
            com.sigmob.sdk.videoplayer.c r0 = r3.am
            if (r0 == 0) goto Ld
            r0.f()
        Ld:
            r3.v()
            android.widget.ImageView r0 = r3.J
            android.content.Context r1 = r3.getContext()
            java.lang.String r2 = "sig_image_video_fullscreen"
            int r1 = com.czhj.sdk.common.utils.ResourceUtil.getDrawableId(r1, r2)
            r0.setImageResource(r1)
            return
    }

    public void v() {
            r1 = this;
            r0 = 0
            r1.x = r0
            return
    }

    public void w() {
            r1 = this;
            r0 = 1
            r1.x = r0
            return
    }

    public void x() {
            r1 = this;
            r0 = 2
            r1.x = r0
            return
    }

    public void y() {
            r0 = this;
            return
    }

    public void z() {
            r0 = this;
            return
    }
}
