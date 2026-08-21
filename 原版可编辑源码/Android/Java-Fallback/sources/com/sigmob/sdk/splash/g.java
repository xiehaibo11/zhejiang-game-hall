package com.sigmob.sdk.splash;

public final class g implements com.sigmob.sdk.base.common.f.b, com.sigmob.sdk.base.network.d.a, com.sigmob.sdk.splash.f.a {
    private static final int n = 131073;
    private final com.sigmob.sdk.base.models.LoadAdRequest a;
    private final java.lang.Runnable b;
    private android.os.Handler c;
    private com.sigmob.sdk.splash.f d;
    private com.sigmob.windad.Splash.WindSplashADListener e;
    private int f;
    private com.czhj.sdk.common.models.AdStatus g;
    private com.sigmob.sdk.splash.i h;
    private com.sigmob.sdk.base.models.BaseAdUnit i;
    private int j;
    private int k;
    private int l;
    private int m;
    private java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> o;




    public g(com.sigmob.windad.Splash.WindSplashAdRequest r2, com.sigmob.windad.Splash.WindSplashADListener r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.j = r0
            r1.k = r0
            r1.l = r0
            r1.m = r0
            com.sigmob.sdk.splash.g$1 r0 = new com.sigmob.sdk.splash.g$1
            r0.<init>(r1)
            r1.b = r0
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusNone
            r1.g = r0
            com.sigmob.sdk.base.models.LoadAdRequest r0 = new com.sigmob.sdk.base.models.LoadAdRequest
            r0.<init>(r2)
            r1.a = r0
            r1.e = r3
            com.sigmob.sdk.splash.f r2 = new com.sigmob.sdk.splash.f
            r2.<init>(r1)
            r1.d = r2
            return
    }

    static android.os.Handler a(com.sigmob.sdk.splash.g r0) {
            android.os.Handler r0 = r0.c
            return r0
    }

    static void a(com.sigmob.sdk.splash.g r0, com.sigmob.windad.WindAdError r1, boolean r2) {
            r0.a(r1, r2)
            return
    }

    private void a(com.sigmob.windad.WindAdError r4, boolean r5) {
            r3 = this;
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusNone
            r3.g = r0
            android.os.Handler r0 = r3.c
            r1 = 0
            if (r0 == 0) goto Le
            r0.removeCallbacksAndMessages(r1)
            r3.c = r1
        Le:
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r3.a
            int r0 = r0.getRequest_scene_type()
            com.sigmob.sdk.rewardVideoAd.a r2 = com.sigmob.sdk.rewardVideoAd.a.e
            java.lang.Integer r2 = r2.a()
            int r2 = r2.intValue()
            if (r0 == r2) goto L3b
            com.sigmob.windad.Splash.WindSplashADListener r0 = r3.e
            if (r0 == 0) goto L3b
            if (r5 == 0) goto L30
            com.sigmob.sdk.base.models.LoadAdRequest r5 = r3.a
            java.lang.String r5 = r5.getPlacementId()
            r0.onSplashAdLoadFail(r4, r5)
            goto L39
        L30:
            com.sigmob.sdk.base.models.LoadAdRequest r5 = r3.a
            java.lang.String r5 = r5.getPlacementId()
            r0.onSplashAdShowError(r4, r5)
        L39:
            r3.e = r1
        L3b:
            com.sigmob.sdk.splash.f r4 = r3.d
            if (r4 == 0) goto L44
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r3.i
            r4.b(r5)
        L44:
            return
    }

    private boolean a(android.content.Context r3, com.sigmob.sdk.base.models.BaseAdUnit r4) {
            r2 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            com.sigmob.sdk.splash.i r1 = new com.sigmob.sdk.splash.i
            android.content.Context r3 = r3.getApplicationContext()
            r1.<init>(r3)
            r2.h = r1
            if (r1 != 0) goto L12
            return r0
        L12:
            r1.b()
            com.sigmob.sdk.splash.i r3 = r2.h
            int r1 = r2.j
            if (r1 == 0) goto L1c
            r0 = 1
        L1c:
            r3.setShowAppLogo(r0)
            com.sigmob.sdk.splash.i r3 = r2.h
            boolean r3 = r3.a(r4)
            return r3
    }

    static com.sigmob.sdk.splash.i b(com.sigmob.sdk.splash.g r0) {
            com.sigmob.sdk.splash.i r0 = r0.h
            return r0
    }

    static int c(com.sigmob.sdk.splash.g r0) {
            int r0 = r0.f
            return r0
    }

    static int d(com.sigmob.sdk.splash.g r2) {
            int r0 = r2.f
            int r1 = r0 + (-1)
            r2.f = r1
            return r0
    }

    static int e(com.sigmob.sdk.splash.g r0) {
            int r0 = r0.l
            return r0
    }

    static int f(com.sigmob.sdk.splash.g r0) {
            int r0 = r0.m
            return r0
    }

    static int g(com.sigmob.sdk.splash.g r0) {
            int r0 = r0.k
            return r0
    }

    static java.lang.Runnable h(com.sigmob.sdk.splash.g r0) {
            java.lang.Runnable r0 = r0.b
            return r0
    }

    static com.sigmob.sdk.base.models.BaseAdUnit i(com.sigmob.sdk.splash.g r0) {
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.i
            return r0
    }

    static com.sigmob.sdk.base.models.LoadAdRequest j(com.sigmob.sdk.splash.g r0) {
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r0.a
            return r0
    }

    private android.app.Activity k() {
            r1 = this;
            com.sigmob.sdk.splash.i r0 = r1.h
            android.app.Activity r0 = com.czhj.sdk.common.utils.ViewUtil.getActivityFromViewTop(r0)
            return r0
    }

    static com.sigmob.windad.Splash.WindSplashADListener k(com.sigmob.sdk.splash.g r0) {
            com.sigmob.windad.Splash.WindSplashADListener r0 = r0.e
            return r0
    }

    private void l() {
            r4 = this;
            com.sigmob.sdk.splash.f r0 = r4.d
            if (r0 == 0) goto L1d
            com.sigmob.sdk.splash.c r0 = r0.d
            if (r0 == 0) goto L16
            com.sigmob.sdk.splash.f r0 = r4.d
            com.sigmob.sdk.splash.c r0 = r0.d
            android.content.Context r1 = com.sigmob.sdk.b.b()
            r2 = 0
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r4.i
            r0.b(r1, r2, r3)
        L16:
            com.sigmob.sdk.splash.f r0 = r4.d
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r4.i
            r0.b(r1)
        L1d:
            android.os.Handler r0 = r4.c
            r1 = 0
            if (r0 == 0) goto L27
            r0.removeCallbacksAndMessages(r1)
            r4.c = r1
        L27:
            com.sigmob.sdk.splash.i r0 = r4.h
            if (r0 == 0) goto L30
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r0)
            r4.h = r1
        L30:
            r4.i = r1
            r4.e = r1
            return
    }

    @Override
    public void a() {
            r0 = this;
            return
    }

    @Override
    public void a(int r3, java.lang.String r4, java.lang.String r5, com.sigmob.sdk.base.models.LoadAdRequest r6) {
            r2 = this;
            com.sigmob.windad.WindAdError r5 = com.sigmob.windad.WindAdError.getWindAdError(r3)
            if (r5 != 0) goto Lb
            com.sigmob.windad.WindAdError r5 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST
            r5.setErrorMessage(r3, r4)
        Lb:
            java.lang.String r0 = "respond"
            java.lang.String r1 = "0"
            com.sigmob.sdk.base.common.z.a(r0, r1, r6)
            r0 = 0
            java.lang.String r1 = "request"
            com.sigmob.sdk.base.common.z.a(r1, r0, r3, r4, r6)
            r3 = 1
            r2.a(r5, r3)
            return
    }

    public void a(android.app.Activity r2) {
            r1 = this;
            com.sigmob.sdk.splash.i r0 = r1.h
            if (r0 == 0) goto L19
            android.app.Activity r0 = r1.k()
            if (r2 != r0) goto L19
            com.sigmob.sdk.splash.i r2 = r1.h
            r2.e()
            android.os.Handler r2 = r1.c
            if (r2 == 0) goto L19
            r0 = 0
            r2.removeCallbacksAndMessages(r0)
            r1.c = r0
        L19:
            return
    }

    public void a(android.view.ViewGroup r3) {
            r2 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.Integer r0 = r0.getOrientationInt()
            int r0 = r0.intValue()
            r1 = 1
            if (r1 != r0) goto L10
            goto L11
        L10:
            r1 = 0
        L11:
            if (r1 != 0) goto L17
            r2.h()
            return
        L17:
            if (r3 == 0) goto L6d
            r3.removeAllViews()
            android.content.Context r0 = r3.getContext()
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r2.i
            boolean r0 = r2.a(r0, r1)
            if (r0 != 0) goto L2c
            r2.c()
            return
        L2c:
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            com.sigmob.sdk.splash.i r1 = r2.h
            r3.addView(r1, r0)
            com.sigmob.sdk.splash.f r3 = r2.d
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r2.i
            r1 = 0
            r3.a(r0, r1)
            com.sigmob.sdk.splash.f r3 = r2.d
            com.sigmob.sdk.splash.c r3 = r3.d
            int r3 = r3.l()
            r2.f = r3
            com.sigmob.sdk.splash.f r3 = r2.d
            com.sigmob.sdk.splash.c r3 = r3.d
            int r3 = r3.n()
            r2.l = r3
            com.sigmob.sdk.splash.f r3 = r2.d
            com.sigmob.sdk.splash.c r3 = r3.d
            int r3 = r3.o()
            r2.m = r3
            com.sigmob.sdk.splash.i r3 = r2.h
            int r0 = r2.f
            r3.setDuration(r0)
            com.sigmob.sdk.splash.i r3 = r2.h
            boolean r3 = r3.c()
            if (r3 == 0) goto L6d
            return
        L6d:
            r2.c()
            return
    }

    @Override
    public void a(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            return
    }

    @Override
    public void a(com.sigmob.sdk.base.models.BaseAdUnit r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = " loadEnd"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L65
            com.sigmob.sdk.base.models.LoadAdRequest r4 = r2.a
            r0 = 0
            java.lang.String r1 = "ready"
            com.sigmob.sdk.base.common.z.a(r1, r0, r3, r4, r0)
            com.czhj.sdk.common.models.AdStatus r4 = r2.g
            com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusClose
            if (r4 != r1) goto L2b
            java.lang.String r4 = " next load"
            com.czhj.sdk.logger.SigmobLog.d(r4)
            com.sigmob.sdk.base.models.LoadAdRequest r4 = r2.a
            java.lang.String r4 = r4.getPlacementId()
            java.lang.String r4 = com.sigmob.sdk.base.utils.b.a(r4)
            com.czhj.sdk.common.utils.FileUtil.writeToCache(r3, r4)
        L2b:
            com.czhj.sdk.common.models.AdStatus r3 = r2.g
            com.czhj.sdk.common.models.AdStatus r4 = com.czhj.sdk.common.models.AdStatus.AdStatusLoading
            if (r3 == r4) goto L32
            return
        L32:
            com.czhj.sdk.common.ClientMetadata r3 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.Integer r3 = r3.getOrientationInt()
            int r3 = r3.intValue()
            r4 = 1
            if (r4 != r3) goto L42
            goto L43
        L42:
            r4 = 0
        L43:
            if (r4 != 0) goto L49
            r2.h()
            return
        L49:
            android.os.Handler r3 = r2.c
            if (r3 == 0) goto L50
            r3.removeCallbacksAndMessages(r0)
        L50:
            com.czhj.sdk.common.models.AdStatus r3 = com.czhj.sdk.common.models.AdStatus.AdStatusReady
            r2.g = r3
            com.sigmob.windad.WindAds r3 = com.sigmob.windad.WindAds.sharedAds()
            android.os.Handler r3 = r3.getHandler()
            com.sigmob.sdk.splash.g$3 r4 = new com.sigmob.sdk.splash.g$3
            r4.<init>(r2)
            r3.post(r4)
            goto L6a
        L65:
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r2.i
            r2.b(r3, r4)
        L6a:
            return
    }

    public void a(java.lang.String r4, int r5, java.lang.String r6, int r7, boolean r8) {
            r3 = this;
            if (r8 != 0) goto L30
            com.czhj.sdk.common.models.AdStatus r8 = com.czhj.sdk.common.models.AdStatus.AdStatusLoading
            r3.g = r8
            boolean r8 = r3.g()
            if (r8 == 0) goto L20
            com.sigmob.sdk.splash.f r8 = r3.d
            if (r8 == 0) goto L20
            r4 = 0
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r3.i
            r8.a(r4, r5)
            com.sigmob.sdk.base.common.f r4 = com.sigmob.sdk.base.common.f.e()
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r3.i
            r4.a(r5, r3)
            return
        L20:
            com.sigmob.sdk.base.models.LoadAdRequest r8 = r3.a
            com.sigmob.sdk.rewardVideoAd.a r0 = com.sigmob.sdk.rewardVideoAd.a.c
            java.lang.Integer r0 = r0.a()
            int r0 = r0.intValue()
            r8.setRequest_scene_type(r0)
            goto L48
        L30:
            com.sigmob.sdk.base.models.LoadAdRequest r8 = r3.a
            com.sigmob.sdk.rewardVideoAd.a r0 = com.sigmob.sdk.rewardVideoAd.a.e
            java.lang.Integer r0 = r0.a()
            int r0 = r0.intValue()
            r8.setRequest_scene_type(r0)
            com.sigmob.sdk.base.models.LoadAdRequest r8 = r3.a
            java.lang.String r0 = "request"
            java.lang.String r1 = "play"
            com.sigmob.sdk.base.common.z.a(r0, r1, r8)
        L48:
            com.sigmob.sdk.splash.g$2 r8 = new com.sigmob.sdk.splash.g$2
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r8.<init>(r3, r0)
            r3.c = r8
            r0 = 131073(0x20001, float:1.83672E-40)
            int r7 = r7 * 1000
            long r1 = (long) r7
            r8.sendEmptyMessageDelayed(r0, r1)
            com.sigmob.sdk.base.models.LoadAdRequest r7 = r3.a
            r7.setBidToken(r4)
            com.sigmob.sdk.base.models.LoadAdRequest r4 = r3.a
            r4.setBidFloor(r5)
            com.sigmob.sdk.base.models.LoadAdRequest r4 = r3.a
            r4.setCurrency(r6)
            com.sigmob.sdk.base.models.LoadAdRequest r4 = r3.a
            com.sigmob.sdk.base.network.d.a(r4, r3)
            return
    }

    @Override
    public void a(java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r3, com.sigmob.sdk.base.models.LoadAdRequest r4) {
            r2 = this;
            r4 = 0
            java.lang.Object r4 = r3.get(r4)
            com.sigmob.sdk.base.models.BaseAdUnit r4 = (com.sigmob.sdk.base.models.BaseAdUnit) r4
            java.lang.String r0 = "respond"
            java.lang.String r1 = "1"
            com.sigmob.sdk.base.common.z.b(r0, r1, r4)
            com.sigmob.sdk.splash.f r0 = r2.d
            boolean r0 = r0.a(r4)
            if (r0 != 0) goto L1d
            com.sigmob.windad.WindAdError r3 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INFORMATION_LOSE
            r4 = 1
            r2.a(r3, r4)
            return
        L1d:
            r2.i = r4
            r2.o = r3
            com.sigmob.sdk.splash.f r3 = r2.d
            if (r3 == 0) goto L29
            r0 = 0
            r3.a(r0, r4)
        L29:
            com.sigmob.sdk.base.common.f r3 = com.sigmob.sdk.base.common.f.e()
            com.sigmob.sdk.base.models.BaseAdUnit r4 = r2.i
            r3.a(r4, r2)
            return
    }

    @Override
    public void b() {
            r3 = this;
            android.content.Context r0 = com.sigmob.sdk.b.b()
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r3.i
            java.lang.String r1 = r1.getUuid()
            java.lang.String r2 = "com.sigmob.action.interstitial.dismiss"
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r0, r1, r2)
            return
    }

    public void b(android.app.Activity r2) {
            r1 = this;
            com.sigmob.sdk.splash.i r0 = r1.h
            if (r0 == 0) goto L25
            android.app.Activity r0 = r1.k()
            if (r2 != r0) goto L25
            com.sigmob.sdk.splash.i r2 = r1.h
            r2.f()
            android.os.Handler r2 = r1.c
            if (r2 != 0) goto L1e
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r2.<init>(r0)
            r1.c = r2
        L1e:
            android.os.Handler r2 = r1.c
            java.lang.Runnable r0 = r1.b
            r2.post(r0)
        L25:
            return
    }

    @Override
    public void b(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r1 = this;
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusPlaying
            r1.g = r0
            com.sigmob.sdk.base.common.f.b(r2)
            com.sigmob.sdk.splash.i r2 = r1.h
            int r2 = r2.getDuration()
            if (r2 <= 0) goto L21
            com.sigmob.sdk.splash.i r2 = r1.h
            int r2 = r2.getDuration()
            int r0 = r1.f
            if (r2 >= r0) goto L21
            com.sigmob.sdk.splash.i r2 = r1.h
            int r2 = r2.getDuration()
            r1.f = r2
        L21:
            com.sigmob.sdk.splash.i r2 = r1.h
            if (r2 == 0) goto L30
            int r0 = r1.f
            r2.setDuration(r0)
            com.sigmob.sdk.splash.i r2 = r1.h
            r0 = 0
            r2.setVisibility(r0)
        L30:
            com.sigmob.windad.Splash.WindSplashADListener r2 = r1.e
            if (r2 == 0) goto L3d
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r1.a
            java.lang.String r0 = r0.getPlacementId()
            r2.onSplashAdShow(r0)
        L3d:
            android.os.Handler r2 = r1.c
            if (r2 != 0) goto L4c
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r2.<init>(r0)
            r1.c = r2
        L4c:
            int r2 = r1.f
            r1.k = r2
            android.os.Handler r2 = r1.c
            java.lang.Runnable r0 = r1.b
            r2.post(r0)
            return
    }

    @Override
    public void b(com.sigmob.sdk.base.models.BaseAdUnit r2, java.lang.String r3) {
            r1 = this;
            com.sigmob.windad.WindAdError r2 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_FILE_DOWNLOAD
            r2.setMessage(r3)
            r3 = 1
            r1.a(r2, r3)
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r1.i
            java.lang.String r0 = "load"
            com.sigmob.sdk.base.common.z.a(r0, r2, r3)
            return
    }

    @Override
    public void c() {
            r3 = this;
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r3.i
            java.lang.String r2 = "play"
            com.sigmob.sdk.base.common.z.a(r2, r0, r1)
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE
            r1 = 0
            r3.a(r0, r1)
            r3.l()
            return
    }

    public void c(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void c(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r1 = this;
            com.czhj.sdk.common.models.AdStatus r2 = com.czhj.sdk.common.models.AdStatus.AdStatusClick
            r1.g = r2
            com.sigmob.windad.Splash.WindSplashADListener r2 = r1.e
            if (r2 == 0) goto L11
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r1.a
            java.lang.String r0 = r0.getPlacementId()
            r2.onSplashAdClick(r0)
        L11:
            return
    }

    @Override
    public void d() {
            r4 = this;
            com.sigmob.sdk.splash.f r0 = r4.d
            r1 = 0
            if (r0 == 0) goto L16
            com.sigmob.sdk.splash.c r0 = r0.d
            if (r0 == 0) goto L16
            com.sigmob.sdk.splash.f r0 = r4.d
            com.sigmob.sdk.splash.c r0 = r0.d
            android.content.Context r2 = com.sigmob.sdk.b.b()
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r4.i
            r0.c(r2, r1, r3)
        L16:
            com.sigmob.sdk.splash.i r0 = r4.h
            r0.setDuration(r1)
            com.sigmob.windad.Splash.WindSplashADListener r0 = r4.e
            if (r0 == 0) goto L28
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r4.a
            java.lang.String r1 = r1.getPlacementId()
            r0.onSplashAdSkip(r1)
        L28:
            return
    }

    @Override
    public void d(com.sigmob.sdk.base.models.BaseAdUnit r7) {
            r6 = this;
            com.sigmob.windad.Splash.WindSplashADListener r0 = r6.e
            if (r0 == 0) goto Ld
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r6.a
            java.lang.String r1 = r1.getPlacementId()
            r0.onSplashAdClose(r1)
        Ld:
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusClose
            r6.g = r0
            r6.l()
            com.sigmob.sdk.base.common.f.c(r7)
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r6.a
            java.lang.String r0 = r0.getBidToken()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L32
            com.sigmob.sdk.base.models.rtb.BiddingResponse r7 = r7.bidding_response
            if (r7 != 0) goto L32
            r1 = 0
            r2 = 0
            r4 = 45
            r5 = 1
            java.lang.String r3 = "CNY"
            r0 = r6
            r0.a(r1, r2, r3, r4, r5)
        L32:
            return
    }

    @Override
    public void e() {
            r0 = this;
            return
    }

    @Override
    public void e(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            return
    }

    @Override
    public void f() {
            r2 = this;
            android.os.Handler r0 = r2.c
            if (r0 == 0) goto La
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            r2.c = r1
        La:
            return
    }

    public boolean g() {
            r8 = this;
            r0 = 0
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r8.i     // Catch: java.lang.Exception -> L76
            if (r1 != 0) goto L31
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r8.a     // Catch: java.lang.Exception -> L76
            java.lang.String r1 = r1.getPlacementId()     // Catch: java.lang.Exception -> L76
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.a(r1)     // Catch: java.lang.Exception -> L76
            java.lang.Object r1 = com.czhj.sdk.common.utils.FileUtil.readFromCache(r1)     // Catch: java.lang.Exception -> L76
            boolean r2 = r1 instanceof com.sigmob.sdk.base.models.BaseAdUnit     // Catch: java.lang.Exception -> L76
            if (r2 == 0) goto L31
            r2 = r1
            com.sigmob.sdk.base.models.BaseAdUnit r2 = (com.sigmob.sdk.base.models.BaseAdUnit) r2     // Catch: java.lang.Exception -> L76
            com.sigmob.sdk.base.models.rtb.Ad r2 = r2.getAd()     // Catch: java.lang.Exception -> L76
            if (r2 == 0) goto L31
            com.sigmob.sdk.base.models.LoadAdRequest r2 = r8.a     // Catch: java.lang.Exception -> L76
            java.lang.String r2 = r2.getPlacementId()     // Catch: java.lang.Exception -> L76
            java.lang.String r2 = com.sigmob.sdk.base.utils.b.a(r2)     // Catch: java.lang.Exception -> L76
            com.czhj.sdk.common.utils.FileUtil.deleteFile(r2)     // Catch: java.lang.Exception -> L76
            com.sigmob.sdk.base.models.BaseAdUnit r1 = (com.sigmob.sdk.base.models.BaseAdUnit) r1     // Catch: java.lang.Exception -> L76
            r8.i = r1     // Catch: java.lang.Exception -> L76
        L31:
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r8.i     // Catch: java.lang.Exception -> L76
            if (r1 == 0) goto L7e
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L76
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r8.i     // Catch: java.lang.Exception -> L76
            java.lang.String r2 = r2.getSplashFilePath()     // Catch: java.lang.Exception -> L76
            r1.<init>(r2)     // Catch: java.lang.Exception -> L76
            boolean r1 = r1.canRead()     // Catch: java.lang.Exception -> L76
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r8.i     // Catch: java.lang.Exception -> L76
            com.sigmob.sdk.base.models.rtb.Ad r2 = r2.getAd()     // Catch: java.lang.Exception -> L76
            java.lang.Integer r2 = r2.expired_time     // Catch: java.lang.Exception -> L76
            int r2 = r2.intValue()     // Catch: java.lang.Exception -> L76
            r3 = 1
            if (r2 == 0) goto L6f
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L76
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r8.i     // Catch: java.lang.Exception -> L76
            long r6 = r2.getCreate_time()     // Catch: java.lang.Exception -> L76
            long r4 = r4 - r6
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r8.i     // Catch: java.lang.Exception -> L76
            java.lang.Integer r2 = r2.getAdExpiredTime()     // Catch: java.lang.Exception -> L76
            int r2 = r2.intValue()     // Catch: java.lang.Exception -> L76
            long r6 = (long) r2
            int r2 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r2 <= 0) goto L6f
            r2 = r3
            goto L70
        L6f:
            r2 = r0
        L70:
            if (r1 == 0) goto L75
            if (r2 != 0) goto L75
            r0 = r3
        L75:
            return r0
        L76:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
        L7e:
            return r0
    }

    public void h() {
            r3 = this;
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_SPLASH_UNSUPPORT_ORIENTATION
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r3.i
            java.lang.String r2 = "play"
            com.sigmob.sdk.base.common.z.a(r2, r0, r1)
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_SPLASH_UNSUPPORT_ORIENTATION
            r1 = 0
            r3.a(r0, r1)
            r3.l()
            return
    }

    public java.lang.String i() {
            r1 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r1.i
            if (r0 == 0) goto L13
            com.sigmob.sdk.base.models.rtb.BiddingResponse r0 = r0.bidding_response
            if (r0 == 0) goto L13
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r1.i
            com.sigmob.sdk.base.models.rtb.BiddingResponse r0 = r0.bidding_response
            java.lang.Integer r0 = r0.ecpm
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
        L13:
            r0 = 0
            return r0
    }

    public java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> j() {
            r1 = this;
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r1.o
            return r0
    }
}
