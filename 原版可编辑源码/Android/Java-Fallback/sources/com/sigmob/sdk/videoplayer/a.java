package com.sigmob.sdk.videoplayer;

public class a extends android.widget.RelativeLayout implements com.sigmob.sdk.videoplayer.i {
    private static final int u = 6000;
    com.sigmob.sdk.videoplayer.j a;
    java.lang.Class b;
    com.sigmob.sdk.videoplayer.m c;
    public com.sigmob.sdk.videoplayer.h d;
    public com.sigmob.sdk.videoplayer.e e;
    private android.view.ViewGroup f;
    private int g;
    private java.util.Timer h;
    private com.sigmob.sdk.videoplayer.a.a i;
    private boolean j;
    private boolean k;
    private android.os.Handler l;
    private boolean m;
    private boolean n;
    private int o;
    private int p;
    private float q;
    private com.sigmob.sdk.videoplayer.l r;
    private int s;
    private java.lang.String t;


    public class a extends java.util.TimerTask {
        final com.sigmob.sdk.videoplayer.a a;


        public a(com.sigmob.sdk.videoplayer.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r2 = this;
                com.sigmob.sdk.videoplayer.a r0 = r2.a
                com.sigmob.sdk.videoplayer.e r0 = r0.e
                com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.h
                if (r0 == r1) goto L10
                com.sigmob.sdk.videoplayer.a r0 = r2.a
                com.sigmob.sdk.videoplayer.e r0 = r0.e
                com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.i
                if (r0 != r1) goto L1a
            L10:
                com.sigmob.sdk.videoplayer.a r0 = r2.a
                com.sigmob.sdk.videoplayer.a$a$1 r1 = new com.sigmob.sdk.videoplayer.a$a$1
                r1.<init>(r2)
                r0.post(r1)
            L1a:
                return
        }
    }

    public a(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            com.sigmob.sdk.videoplayer.e r0 = com.sigmob.sdk.videoplayer.e.a
            r2.e = r0
            com.sigmob.sdk.videoplayer.a$1 r0 = new com.sigmob.sdk.videoplayer.a$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.l = r0
            android.widget.FrameLayout r0 = new android.widget.FrameLayout
            r0.<init>(r3)
            r2.f = r0
            r3 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0.setBackgroundColor(r3)
            android.view.ViewGroup r3 = r2.f
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r2.addView(r3, r0)
            return
    }

    static boolean a(com.sigmob.sdk.videoplayer.a r0) {
            boolean r0 = r0.j
            return r0
    }

    static boolean a(com.sigmob.sdk.videoplayer.a r0, boolean r1) {
            r0.j = r1
            return r1
    }

    static com.sigmob.sdk.videoplayer.l b(com.sigmob.sdk.videoplayer.a r0) {
            com.sigmob.sdk.videoplayer.l r0 = r0.r
            return r0
    }

    private void r() {
            r5 = this;
            com.sigmob.sdk.videoplayer.j r0 = r5.a     // Catch: java.lang.Throwable -> L2e
            if (r0 == 0) goto L9
            com.sigmob.sdk.videoplayer.j r0 = r5.a     // Catch: java.lang.Throwable -> L2e
            r0.f()     // Catch: java.lang.Throwable -> L2e
        L9:
            java.lang.Class r0 = r5.b     // Catch: java.lang.Throwable -> L2e
            if (r0 != 0) goto L15
            com.sigmob.sdk.videoplayer.k r0 = new com.sigmob.sdk.videoplayer.k     // Catch: java.lang.Throwable -> L2e
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2e
        L12:
            r5.a = r0     // Catch: java.lang.Throwable -> L2e
            goto L32
        L15:
            java.lang.Class r0 = r5.b     // Catch: java.lang.Throwable -> L2e
            r1 = 1
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Throwable -> L2e
            java.lang.Class<com.sigmob.sdk.videoplayer.a> r3 = com.sigmob.sdk.videoplayer.a.class
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

    public void a() {
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
            r2.r()     // Catch: java.lang.Throwable -> L21
            goto L25
        L21:
            r0 = move-exception
            r0.printStackTrace()
        L25:
            android.content.Context r0 = r2.getContext()
            android.view.Window r0 = com.sigmob.sdk.videoplayer.d.c(r0)
            if (r0 == 0) goto L39
            r1 = 16777216(0x1000000, float:2.3509887E-38)
            r0.setFlags(r1, r1)
            r1 = 128(0x80, float:1.8E-43)
            r0.addFlags(r1)
        L39:
            r2.l()
            r2.b()
            return
    }

    public void a(int r4) {
            r3 = this;
            com.sigmob.sdk.videoplayer.e r0 = r3.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.i
            if (r0 == r1) goto L1c
            com.sigmob.sdk.videoplayer.e r0 = r3.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.g
            if (r0 == r1) goto L1c
            com.sigmob.sdk.videoplayer.e r0 = r3.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.j
            if (r0 == r1) goto L1c
            com.sigmob.sdk.videoplayer.e r0 = r3.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.h
            if (r0 != r1) goto L19
            goto L1c
        L19:
            r3.g = r4
            goto L24
        L1c:
            com.sigmob.sdk.videoplayer.j r0 = r3.a
            if (r0 == 0) goto L24
            long r1 = (long) r4
            r0.a(r1)
        L24:
            return
    }

    @Override
    public void a(int r2, int r3) {
            r1 = this;
            r1.s = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = ""
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.t = r2
            com.sigmob.sdk.videoplayer.e r2 = com.sigmob.sdk.videoplayer.e.l
            r1.setState(r2)
            return
    }

    public void a(com.sigmob.sdk.videoplayer.h r1, int r2) {
            r0 = this;
            r0.d = r1
            r0.c()
            return
    }

    public void b() {
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
            com.sigmob.sdk.videoplayer.e r0 = com.sigmob.sdk.videoplayer.e.e
            r2.setState(r0)
            return
    }

    @Override
    public void b(int r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onInfo() called with: what = ["
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = "], extra = ["
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = "]"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r4)
            r4 = 3
            if (r3 == r4) goto L36
            r4 = 701(0x2bd, float:9.82E-43)
            if (r3 == r4) goto L30
            r4 = 702(0x2be, float:9.84E-43)
            if (r3 == r4) goto L2d
            goto L4c
        L2d:
            com.sigmob.sdk.videoplayer.e r3 = com.sigmob.sdk.videoplayer.e.d
            goto L32
        L30:
            com.sigmob.sdk.videoplayer.e r3 = com.sigmob.sdk.videoplayer.e.c
        L32:
            r2.setState(r3)
            goto L4c
        L36:
            boolean r3 = r2.k
            if (r3 != 0) goto L44
            r3 = 1
            r2.k = r3
            android.os.Handler r3 = r2.l
            r4 = 6000(0x1770, float:8.408E-42)
            r3.removeMessages(r4)
        L44:
            boolean r3 = r2.j
            if (r3 == 0) goto L4c
            r3 = 0
            r2.j = r3
            goto L2d
        L4c:
            return
    }

    public void c() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onStateNormal stat"
            r0.append(r1)
            com.sigmob.sdk.videoplayer.e r1 = r2.e
            r0.append(r1)
            java.lang.String r1 = " ["
            r0.append(r1)
            int r1 = r2.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            com.sigmob.sdk.videoplayer.e r0 = com.sigmob.sdk.videoplayer.e.b
            r2.setState(r0)
            com.sigmob.sdk.videoplayer.j r0 = r2.a
            if (r0 == 0) goto L33
            r0.f()
        L33:
            return
    }

    @Override
    public void c(int r4, int r5) {
            r3 = this;
            r3.o = r5
            r3.p = r4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onVideoSizeChanged  ["
            r0.append(r1)
            int r1 = r3.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            com.sigmob.sdk.videoplayer.m r0 = r3.c
            if (r0 == 0) goto L34
            float r1 = r3.q
            r2 = 0
            int r2 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r2 == 0) goto L2f
            r0.setRotation(r1)
        L2f:
            com.sigmob.sdk.videoplayer.m r0 = r3.c
            r0.a(r4, r5)
        L34:
            return
    }

    public void d() {
            r2 = this;
            r0 = 0
            r2.n = r0
            com.sigmob.sdk.videoplayer.e r0 = r2.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.b
            if (r0 == r1) goto L2e
            com.sigmob.sdk.videoplayer.j r0 = r2.a
            if (r0 == 0) goto L2e
            com.sigmob.sdk.videoplayer.e r0 = r2.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.i
            if (r0 == r1) goto L25
            com.sigmob.sdk.videoplayer.e r0 = r2.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.d
            if (r0 == r1) goto L25
            com.sigmob.sdk.videoplayer.e r0 = r2.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.j
            if (r0 == r1) goto L25
            com.sigmob.sdk.videoplayer.e r0 = r2.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.g
            if (r0 != r1) goto L31
        L25:
            com.sigmob.sdk.videoplayer.j r0 = r2.a
            r0.a()
            r2.e()
            goto L31
        L2e:
            r2.a()
        L31:
            return
    }

    public void e() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onStatePlaying  ["
            r0.append(r1)
            int r1 = r4.hashCode()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            com.sigmob.sdk.videoplayer.e r0 = r4.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.g
            if (r0 != r1) goto L3d
            int r0 = r4.g
            if (r0 == 0) goto L30
            com.sigmob.sdk.videoplayer.j r1 = r4.a
            long r2 = (long) r0
            r1.a(r2)
            r0 = 0
            r4.g = r0
        L30:
            boolean r0 = r4.k
            if (r0 != 0) goto L3d
            android.os.Handler r0 = r4.l
            r1 = 6000(0x1770, float:8.408E-42)
            r2 = 1500(0x5dc, double:7.41E-321)
            r0.sendEmptyMessageDelayed(r1, r2)
        L3d:
            com.sigmob.sdk.videoplayer.e r0 = com.sigmob.sdk.videoplayer.e.h
            r4.setState(r0)
            r4.f()
            return
    }

    public void f() {
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
            r7.k()
            java.util.Timer r0 = new java.util.Timer
            r0.<init>()
            r7.h = r0
            com.sigmob.sdk.videoplayer.a$a r2 = new com.sigmob.sdk.videoplayer.a$a
            r2.<init>(r7)
            r7.i = r2
            java.util.Timer r1 = r7.h
            r3 = 0
            r5 = 300(0x12c, double:1.48E-321)
            r1.schedule(r2, r3, r5)
            return
    }

    public void g() {
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
            r2.k()
            r2.c()
            android.view.ViewGroup r0 = r2.f
            r0.removeAllViews()
            android.content.Context r0 = r2.getContext()
            android.view.Window r0 = com.sigmob.sdk.videoplayer.d.c(r0)
            if (r0 == 0) goto L37
            r1 = 128(0x80, float:1.8E-43)
            r0.clearFlags(r1)
        L37:
            com.sigmob.sdk.videoplayer.j r0 = r2.a
            if (r0 == 0) goto L3e
            r0.f()
        L3e:
            return
    }

    public long getCurrentPositionWhenPlaying() {
            r4 = this;
            com.sigmob.sdk.videoplayer.e r0 = r4.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.h
            r2 = 0
            if (r0 == r1) goto Le
            com.sigmob.sdk.videoplayer.e r0 = r4.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.i
            if (r0 != r1) goto L14
        Le:
            com.sigmob.sdk.videoplayer.j r0 = r4.a     // Catch: java.lang.IllegalStateException -> L15
            long r2 = r0.g()     // Catch: java.lang.IllegalStateException -> L15
        L14:
            return r2
        L15:
            r0 = move-exception
            r0.printStackTrace()
            return r2
    }

    public long getDuration() {
            r2 = this;
            com.sigmob.sdk.videoplayer.j r0 = r2.a     // Catch: java.lang.IllegalStateException -> L7
            long r0 = r0.j()     // Catch: java.lang.IllegalStateException -> L7
            return r0
        L7:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public int getErrorCode() {
            r1 = this;
            int r0 = r1.s
            return r0
    }

    public java.lang.String getErrorMessage() {
            r1 = this;
            java.lang.String r0 = r1.t
            return r0
    }

    public int getVideoHeight() {
            r1 = this;
            int r0 = r1.o
            return r0
    }

    @Override
    public com.sigmob.sdk.videoplayer.h getVideoPlayerDataSource() {
            r1 = this;
            com.sigmob.sdk.videoplayer.h r0 = r1.d
            return r0
    }

    public int getVideoWidth() {
            r1 = this;
            int r0 = r1.p
            return r0
    }

    public void h() {
            r1 = this;
            com.sigmob.sdk.videoplayer.e r0 = com.sigmob.sdk.videoplayer.e.k
            r1.setState(r0)
            r1.g()
            return
    }

    public void i() {
            r2 = this;
            com.sigmob.sdk.videoplayer.e r0 = r2.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.j
            if (r0 == r1) goto L2c
            com.sigmob.sdk.videoplayer.e r0 = r2.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.b
            if (r0 == r1) goto L2c
            com.sigmob.sdk.videoplayer.e r0 = r2.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.e
            if (r0 == r1) goto L2c
            com.sigmob.sdk.videoplayer.e r0 = r2.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.l
            if (r0 != r1) goto L19
            goto L2c
        L19:
            com.sigmob.sdk.videoplayer.e r0 = r2.e
            com.sigmob.sdk.videoplayer.e r1 = com.sigmob.sdk.videoplayer.e.i
            if (r0 == r1) goto L2f
            com.sigmob.sdk.videoplayer.j r0 = r2.a
            if (r0 == 0) goto L2f
            r2.j()
            com.sigmob.sdk.videoplayer.j r0 = r2.a
            r0.d()
            goto L2f
        L2c:
            r2.g()
        L2f:
            return
    }

    public void j() {
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
            com.sigmob.sdk.videoplayer.e r0 = com.sigmob.sdk.videoplayer.e.i
            r2.setState(r0)
            r2.f()
            return
    }

    public void k() {
            r1 = this;
            java.util.Timer r0 = r1.h
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            com.sigmob.sdk.videoplayer.a$a r0 = r1.i
            if (r0 == 0) goto Le
            r0.cancel()
        Le:
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
            com.sigmob.sdk.videoplayer.m r0 = r3.c
            if (r0 == 0) goto L26
            android.view.ViewGroup r1 = r3.f
            r1.removeView(r0)
        L26:
            com.sigmob.sdk.videoplayer.m r0 = new com.sigmob.sdk.videoplayer.m
            android.content.Context r1 = r3.getContext()
            android.content.Context r1 = r1.getApplicationContext()
            r0.<init>(r1)
            r3.c = r0
            com.sigmob.sdk.videoplayer.j r1 = r3.a
            r0.setSurfaceTextureListener(r1)
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = 17
            r2 = -1
            r0.<init>(r2, r2, r1)
            android.view.ViewGroup r1 = r3.f
            com.sigmob.sdk.videoplayer.m r2 = r3.c
            r1.addView(r2, r0)
            return
    }

    public void m() {
            r1 = this;
            r0 = 1
            r1.n = r0
            r1.a()
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
            com.sigmob.sdk.videoplayer.e r0 = com.sigmob.sdk.videoplayer.e.g
            r2.setState(r0)
            boolean r0 = r2.n
            if (r0 != 0) goto L36
            java.lang.String r0 = "mediaInterface start"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r2.e()
            com.sigmob.sdk.videoplayer.j r0 = r2.a
            r0.a()
            r0 = 0
            r2.n = r0
        L36:
            return
    }

    @Override
    public void o() {
            r1 = this;
            com.sigmob.sdk.videoplayer.e r0 = com.sigmob.sdk.videoplayer.e.j
            r1.setState(r0)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            java.lang.String r0 = "onAttachedToWindow"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            return
    }

    @Override
    public void p() {
            r0 = this;
            return
    }

    public void q() {
            r1 = this;
            r0 = 0
            r1.r = r0
            r1.g()
            return
    }

    @Override
    public void setBufferProgress(int r1) {
            r0 = this;
            return
    }

    public void setMute(boolean r2) {
            r1 = this;
            r1.m = r2
            if (r2 == 0) goto La
            com.sigmob.sdk.videoplayer.j r2 = r1.a
            if (r2 == 0) goto L13
            r0 = 0
            goto L10
        La:
            com.sigmob.sdk.videoplayer.j r2 = r1.a
            if (r2 == 0) goto L13
            r0 = 1065353216(0x3f800000, float:1.0)
        L10:
            r2.a(r0)
        L13:
            return
    }

    public void setState(com.sigmob.sdk.videoplayer.e r2) {
            r1 = this;
            r1.e = r2
            com.sigmob.sdk.videoplayer.l r0 = r1.r
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            return
    }

    @Override
    public void setSurfaceTexture(android.graphics.SurfaceTexture r2) {
            r1 = this;
            com.sigmob.sdk.videoplayer.m r0 = r1.c
            if (r0 == 0) goto L7
            r0.setSurfaceTexture(r2)
        L7:
            return
    }

    public void setTextureViewContainer(android.view.ViewGroup r1) {
            r0 = this;
            r0.f = r1
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

    public void setVideoPlayerStatusListener(com.sigmob.sdk.videoplayer.l r1) {
            r0 = this;
            r0.r = r1
            return
    }
}
