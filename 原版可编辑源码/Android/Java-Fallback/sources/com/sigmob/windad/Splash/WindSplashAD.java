package com.sigmob.windad.Splash;

public final class WindSplashAD extends com.sigmob.sdk.base.g implements com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener, com.sigmob.windad.Splash.WindSplashADListener {
    public com.czhj.sdk.common.models.AdStatus adStatus;
    private com.sigmob.windad.Splash.WindSplashADListener b;
    private android.view.ViewGroup c;
    private int d;
    private android.widget.RelativeLayout e;
    private boolean f;
    private boolean g;
    private boolean h;
    private com.sigmob.sdk.splash.g i;
    private android.os.Handler j;



    public WindSplashAD(com.sigmob.windad.Splash.WindSplashAdRequest r3, com.sigmob.windad.Splash.WindSplashADListener r4) {
            r2 = this;
            r0 = 0
            r2.<init>(r3, r0)
            com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusNone
            r2.adStatus = r1
            r1 = 5
            r2.d = r1
            r2.g = r0
            r2.b = r4
            android.os.Handler r4 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r4.<init>(r0)
            r2.j = r4
            com.sigmob.sdk.splash.g r4 = new com.sigmob.sdk.splash.g
            r4.<init>(r3, r2)
            r2.i = r4
            int r4 = r3.getFetchDelay()
            r2.d = r4
            boolean r3 = r3.isDisableAutoHideAd()
            r2.f = r3
            return
    }

    static android.widget.RelativeLayout a(com.sigmob.windad.Splash.WindSplashAD r0) {
            android.widget.RelativeLayout r0 = r0.e
            return r0
    }

    private void a(com.sigmob.windad.WindAdError r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onSplashError: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = " :placementId: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            boolean r0 = r2.g
            if (r0 != 0) goto L33
            android.os.Handler r0 = r2.j
            r1 = 1
            r0.removeMessages(r1)
            android.os.Handler r0 = r2.j
            com.sigmob.windad.Splash.WindSplashAD$2 r1 = new com.sigmob.windad.Splash.WindSplashAD$2
            r1.<init>(r2, r3, r4)
            r0.post(r1)
            r2.h()
        L33:
            return
    }

    static boolean a(com.sigmob.windad.Splash.WindSplashAD r0, boolean r1) {
            r0.g = r1
            return r1
    }

    static com.sigmob.sdk.splash.g b(com.sigmob.windad.Splash.WindSplashAD r0) {
            com.sigmob.sdk.splash.g r0 = r0.i
            return r0
    }

    static com.sigmob.windad.Splash.WindSplashADListener c(com.sigmob.windad.Splash.WindSplashAD r0) {
            com.sigmob.windad.Splash.WindSplashADListener r0 = r0.b
            return r0
    }

    private void d() {
            r3 = this;
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            android.view.ViewGroup r1 = r3.c
            android.content.Context r1 = r1.getContext()
            r0.<init>(r1)
            r3.e = r0
            r1 = 4
            r0.setVisibility(r1)
            android.widget.RelativeLayout r0 = r3.e
            int r1 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r0.setId(r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            android.view.ViewGroup r1 = r3.c
            android.widget.RelativeLayout r2 = r3.e
            r1.addView(r2, r0)
            return
    }

    private void e() {
            r2 = this;
            com.sigmob.sdk.splash.g r0 = r2.i
            if (r0 != 0) goto Le
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_SPLASH_NOT_READY
            java.lang.String r1 = r2.a()
            r2.a(r0, r1)
            return
        Le:
            r2.d()
            android.widget.RelativeLayout r0 = r2.e
            if (r0 == 0) goto L19
            r1 = 0
            r0.setVisibility(r1)
        L19:
            android.os.Handler r0 = r2.j
            com.sigmob.windad.Splash.WindSplashAD$1 r1 = new com.sigmob.windad.Splash.WindSplashAD$1
            r1.<init>(r2)
            r0.post(r1)
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusPlaying
            r2.adStatus = r0
            return
    }

    private boolean f() {
            r7 = this;
            boolean r0 = r7.loadAdFilter()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            com.czhj.sdk.common.utils.AdLifecycleManager r0 = com.czhj.sdk.common.utils.AdLifecycleManager.getInstance()
            r0.addLifecycleListener(r7)
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusLoading
            r7.adStatus = r0
            com.sigmob.sdk.splash.g r0 = r7.i
            boolean r0 = r0.g()
            if (r0 != 0) goto L1e
            r7.b()
        L1e:
            com.sigmob.sdk.splash.g r1 = r7.i
            java.lang.String r2 = r7.getBid_token()
            int r3 = r7.getBidFloor()
            java.lang.String r4 = r7.getCurrency()
            int r5 = r7.d
            r6 = 0
            r1.a(r2, r3, r4, r5, r6)
            r0 = 1
            return r0
    }

    private void g() {
            r3 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L24
            android.view.ViewGroup r0 = r3.c
            if (r0 == 0) goto L24
            android.app.Activity r0 = com.czhj.sdk.common.utils.ViewUtil.getActivityFromViewTop(r0)
            if (r0 == 0) goto L24
            android.view.Window r0 = r0.getWindow()
            android.view.WindowManager$LayoutParams r1 = r0.getAttributes()
            r2 = 2050(0x802, float:2.873E-42)
            r1.systemUiVisibility = r2
            r0.setAttributes(r1)
            r1 = 1024(0x400, float:1.435E-42)
            r0.addFlags(r1)
        L24:
            return
    }

    private void h() {
            r2 = this;
            boolean r0 = r2.f
            if (r0 != 0) goto Ld
            android.widget.RelativeLayout r0 = r2.e
            if (r0 == 0) goto Ld
            r1 = 8
            r0.setVisibility(r1)
        Ld:
            return
    }

    @Override
    protected void a(com.sigmob.windad.WindAdError r3) {
            r2 = this;
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusNone
            r2.adStatus = r0
            com.sigmob.windad.Splash.WindSplashADListener r0 = r2.b
            if (r0 == 0) goto Lf
            java.lang.String r1 = r2.a()
            r0.onSplashAdLoadFail(r3, r1)
        Lf:
            return
    }

    @Override
    protected java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> c() {
            r1 = this;
            com.sigmob.sdk.splash.g r0 = r1.i
            if (r0 == 0) goto L9
            java.util.List r0 = r0.j()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public void destroy() {
            r2 = this;
            com.sigmob.sdk.splash.g r0 = r2.i
            if (r0 == 0) goto Lc
            android.os.Handler r0 = r2.j
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            r2.b = r1
        Lc:
            return
    }

    @Override
    public java.lang.String getEcpm() {
            r1 = this;
            com.sigmob.sdk.splash.g r0 = r1.i
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.i()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public boolean isReady() {
            r2 = this;
            com.czhj.sdk.common.models.AdStatus r0 = r2.adStatus
            com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusReady
            if (r0 != r1) goto L10
            com.sigmob.sdk.splash.g r0 = r2.i
            boolean r0 = r0.g()
            if (r0 == 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    @Override
    public boolean loadAd() {
            r1 = this;
            r0 = 0
            r1.h = r0
            super.loadAd()
            boolean r0 = r1.f()
            return r0
    }

    @Override
    public boolean loadAd(java.lang.String r1) {
            r0 = this;
            super.loadAd(r1)
            boolean r1 = r0.f()
            return r1
    }

    public void loadAndShow(android.view.ViewGroup r1) {
            r0 = this;
            if (r1 != 0) goto L8
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_ADCONTAINER_IS_NULL
            r0.a(r1)
            return
        L8:
            super.loadAd()
            r0.c = r1
            r1 = 1
            r0.h = r1
            r0.f()
            return
    }

    public void loadAndShow(java.lang.String r1, android.view.ViewGroup r2) {
            r0 = this;
            if (r2 != 0) goto L8
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_ADCONTAINER_IS_NULL
            r0.a(r1)
            return
        L8:
            super.loadAd(r1)
            r0.c = r2
            r1 = 1
            r0.h = r1
            r0.f()
            return
    }

    @Override
    public void onCreate(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void onDestroy(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void onPause(android.app.Activity r2) {
            r1 = this;
            com.sigmob.sdk.splash.g r0 = r1.i
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public void onResume(android.app.Activity r2) {
            r1 = this;
            com.sigmob.sdk.splash.g r0 = r1.i
            if (r0 == 0) goto L7
            r0.b(r2)
        L7:
            return
    }

    @Override
    public void onSplashAdClick(java.lang.String r2) {
            r1 = this;
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusClick
            r1.adStatus = r0
            com.sigmob.windad.Splash.WindSplashADListener r0 = r1.b
            if (r0 == 0) goto Lb
            r0.onSplashAdClick(r2)
        Lb:
            return
    }

    @Override
    public void onSplashAdClose(java.lang.String r2) {
            r1 = this;
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusClose
            r1.adStatus = r0
            com.sigmob.windad.Splash.WindSplashADListener r0 = r1.b
            if (r0 == 0) goto Lb
            r0.onSplashAdClose(r2)
        Lb:
            r1.h()
            return
    }

    @Override
    public void onSplashAdLoadFail(com.sigmob.windad.WindAdError r2, java.lang.String r3) {
            r1 = this;
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusNone
            r1.adStatus = r0
            com.sigmob.windad.Splash.WindSplashADListener r0 = r1.b
            if (r0 == 0) goto Lb
            r0.onSplashAdLoadFail(r2, r3)
        Lb:
            return
    }

    @Override
    public void onSplashAdLoadSuccess(java.lang.String r2) {
            r1 = this;
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusReady
            r1.adStatus = r0
            com.sigmob.windad.Splash.WindSplashADListener r0 = r1.b
            if (r0 == 0) goto Lb
            r0.onSplashAdLoadSuccess(r2)
        Lb:
            boolean r2 = r1.h
            if (r2 == 0) goto L12
            r1.e()
        L12:
            return
    }

    @Override
    public void onSplashAdShow(java.lang.String r2) {
            r1 = this;
            com.sigmob.windad.Splash.WindSplashADListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onSplashAdShow(r2)
        L7:
            return
    }

    @Override
    public void onSplashAdShowError(com.sigmob.windad.WindAdError r2, java.lang.String r3) {
            r1 = this;
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusNone
            r1.adStatus = r0
            com.sigmob.windad.Splash.WindSplashADListener r0 = r1.b
            if (r0 == 0) goto Lb
            r0.onSplashAdShowError(r2, r3)
        Lb:
            return
    }

    @Override
    public void onSplashAdSkip(java.lang.String r2) {
            r1 = this;
            com.sigmob.windad.Splash.WindSplashADListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onSplashAdSkip(r2)
        L7:
            return
    }

    @Override
    public void onStart(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void onStop(android.app.Activity r1) {
            r0 = this;
            return
    }

    public void show(android.view.ViewGroup r3) {
            r2 = this;
            boolean r0 = r2.h
            if (r0 == 0) goto L5
            return
        L5:
            com.czhj.sdk.common.models.AdStatus r0 = r2.adStatus
            com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusReady
            if (r0 == r1) goto L15
            com.sigmob.windad.WindAdError r3 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_SPLASH_NOT_READY
            java.lang.String r0 = r2.a()
            r2.a(r3, r0)
            return
        L15:
            if (r3 != 0) goto L21
            com.sigmob.windad.WindAdError r3 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_ADCONTAINER_IS_NULL
            java.lang.String r0 = r2.a()
            r2.onSplashAdShowError(r3, r0)
            return
        L21:
            r2.c = r3
            r2.e()
            return
    }
}
