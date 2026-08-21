package com.tkay.network.gdt;

public class GDTTYSplashAdapter extends com.tkay.splashad.unitgroup.api.CustomSplashAdapter implements com.qq.e.ads.splash.SplashADZoomOutListener {
    final java.lang.String a;
    boolean b;
    com.tkay.network.gdt.GDTTYSplashEyeAd c;
    android.view.ViewGroup d;
    java.lang.String e;
    boolean f;
    private java.lang.String g;
    private java.lang.String h;
    private boolean i;
    private com.qq.e.ads.splash.SplashAD j;
    private boolean k;
    private boolean l;



    public GDTTYSplashAdapter() {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.tkay.network.gdt.GDTTYSplashAdapter> r0 = com.tkay.network.gdt.GDTTYSplashAdapter.class
            java.lang.String r0 = r0.getSimpleName()
            r1.a = r0
            r0 = 0
            r1.l = r0
            r1.f = r0
            return
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener a(com.tkay.network.gdt.GDTTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    private void a(android.content.Context r8, java.util.Map<java.lang.String, java.lang.Object> r9) {
            r7 = this;
            java.lang.String r0 = r7.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1e
            boolean r0 = r7.f
            if (r0 == 0) goto Ld
            goto L1e
        Ld:
            com.qq.e.ads.splash.SplashAD r9 = new com.qq.e.ads.splash.SplashAD
            java.lang.String r3 = r7.h
            int r5 = r7.mFetchAdTimeout
            java.lang.String r6 = r7.e
            r1 = r9
            r2 = r8
            r4 = r7
            r1.<init>(r2, r3, r4, r5, r6)
            r7.j = r9
            goto L33
        L1e:
            com.qq.e.ads.splash.SplashAD r0 = new com.qq.e.ads.splash.SplashAD
            java.lang.String r1 = r7.h
            int r2 = r7.mFetchAdTimeout
            r0.<init>(r8, r1, r7, r2)
            r7.j = r0
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.qq.e.comm.constants.LoadAdParams r8 = com.tkay.network.gdt.GDTTYInitManager.a(r9)
            r0.setLoadAdParams(r8)
        L33:
            com.qq.e.ads.splash.SplashAD r8 = r7.j
            r8.fetchAdOnly()
            return
    }

    static void a(com.tkay.network.gdt.GDTTYSplashAdapter r7, android.content.Context r8, java.util.Map r9) {
            java.lang.String r0 = r7.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1e
            boolean r0 = r7.f
            if (r0 == 0) goto Ld
            goto L1e
        Ld:
            com.qq.e.ads.splash.SplashAD r9 = new com.qq.e.ads.splash.SplashAD
            java.lang.String r3 = r7.h
            int r5 = r7.mFetchAdTimeout
            java.lang.String r6 = r7.e
            r1 = r9
            r2 = r8
            r4 = r7
            r1.<init>(r2, r3, r4, r5, r6)
            r7.j = r9
            goto L33
        L1e:
            com.qq.e.ads.splash.SplashAD r0 = new com.qq.e.ads.splash.SplashAD
            java.lang.String r1 = r7.h
            int r2 = r7.mFetchAdTimeout
            r0.<init>(r8, r1, r7, r2)
            r7.j = r0
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.qq.e.comm.constants.LoadAdParams r8 = com.tkay.network.gdt.GDTTYInitManager.a(r9)
            r0.setLoadAdParams(r8)
        L33:
            com.qq.e.ads.splash.SplashAD r7 = r7.j
            r7.fetchAdOnly()
            return
    }

    private void a(java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r2 = this;
            java.lang.String r0 = "app_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r0)
            r2.g = r0
            java.lang.String r0 = "unit_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r0)
            r2.h = r0
            java.lang.String r0 = "payload"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r0)
            r2.e = r0
            r0 = 0
            r2.i = r0
            java.lang.String r1 = "ad_click_confirm_status"
            boolean r4 = com.tkay.core.api.TYInitMediation.getBooleanFromMap(r4, r1, r0)
            r2.k = r4
            java.lang.String r4 = "zoomoutad_sw"
            boolean r0 = r3.containsKey(r4)
            if (r0 == 0) goto L37
            java.lang.String r3 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r4)
            java.lang.String r4 = "2"
            boolean r3 = android.text.TextUtils.equals(r4, r3)
            r2.l = r3
        L37:
            return
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener b(com.tkay.network.gdt.GDTTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    @Override
    public void destory() {
            r1 = this;
            r0 = 0
            r1.j = r0
            return
    }

    @Override
    public void getBidRequestInfo(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4, com.tkay.core.api.TYBidRequestInfoListener r5) {
            r1 = this;
            java.lang.String r0 = "unit_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r0)
            r1.h = r0
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            r0.a(r2, r3, r4, r5)
            return
    }

    @Override
    public com.tkay.core.api.TYInitMediation getMediationInitManager() {
            r1 = this;
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            return r0
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkName()
            return r0
    }

    @Override
    public java.lang.String getNetworkPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKVersion() {
            r1 = this;
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkVersion()
            return r0
    }

    @Override
    public com.tkay.splashad.api.ITYSplashEyeAd getSplashEyeAd() {
            r1 = this;
            com.tkay.network.gdt.GDTTYSplashEyeAd r0 = r1.c
            return r0
    }

    @Override
    public boolean isAdReady() {
            r1 = this;
            boolean r0 = r1.i
            return r0
    }

    @Override
    public boolean isSupportZoomOut() {
            r1 = this;
            boolean r0 = r1.l
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r9, java.util.Map<java.lang.String, java.lang.Object> r10, java.util.Map<java.lang.String, java.lang.Object> r11) {
            r8 = this;
            java.lang.String r0 = "app_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r10, r0)
            r8.g = r0
            java.lang.String r0 = "unit_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r10, r0)
            r8.h = r0
            java.lang.String r0 = "payload"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r10, r0)
            r8.e = r0
            r0 = 0
            r8.i = r0
            java.lang.String r1 = "ad_click_confirm_status"
            boolean r0 = com.tkay.core.api.TYInitMediation.getBooleanFromMap(r11, r1, r0)
            r8.k = r0
            java.lang.String r0 = "zoomoutad_sw"
            boolean r1 = r10.containsKey(r0)
            if (r1 == 0) goto L37
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r10, r0)
            java.lang.String r1 = "2"
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            r8.l = r0
        L37:
            java.lang.String r0 = r8.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L5e
            java.lang.String r0 = r8.h
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L48
            goto L5e
        L48:
            android.content.Context r6 = r9.getApplicationContext()
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.tkay.network.gdt.GDTTYSplashAdapter$1 r7 = new com.tkay.network.gdt.GDTTYSplashAdapter$1
            r1 = r7
            r2 = r8
            r3 = r10
            r4 = r9
            r5 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            r0.initSDK(r9, r10, r7)
            return
        L5e:
            java.lang.String r9 = ""
            java.lang.String r10 = "GTD appid or unitId is empty."
            r8.notifyATLoadFail(r9, r10)
            return
    }

    @Override
    public void onADClicked() {
            r1 = this;
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r1.mImpressionListener
            if (r0 == 0) goto L9
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r1.mImpressionListener
            r0.onSplashAdClicked()
        L9:
            return
    }

    @Override
    public void onADDismissed() {
            r3 = this;
            boolean r0 = r3.l
            if (r0 == 0) goto L19
            boolean r0 = r3.b
            if (r0 == 0) goto L19
            com.tkay.network.gdt.GDTTYSplashEyeAd r0 = r3.c
            if (r0 == 0) goto L22
            com.tkay.splashad.api.TYSplashEyeAdListener r0 = r0.getSplashEyeAdListener()
            if (r0 == 0) goto L18
            r1 = 1
            java.lang.String r2 = ""
            r0.onAdDismiss(r1, r2)
        L18:
            return
        L19:
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r3.mImpressionListener
            if (r0 == 0) goto L22
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r3.mImpressionListener
            r0.onSplashAdDismiss()
        L22:
            return
    }

    @Override
    public void onADExposure() {
            r4 = this;
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L16
            com.tkay.core.common.f.d r1 = r4.getTrackingInfo()     // Catch: java.lang.Throwable -> L16
            java.lang.String r1 = r1.l()     // Catch: java.lang.Throwable -> L16
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L16
            com.qq.e.ads.splash.SplashAD r3 = r4.j     // Catch: java.lang.Throwable -> L16
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L16
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L16
        L16:
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r4.mImpressionListener
            if (r0 == 0) goto L1f
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r4.mImpressionListener
            r0.onSplashAdShow()
        L1f:
            return
    }

    @Override
    public void onADLoaded(long r6) {
            r5 = this;
            r6 = 1
            r5.i = r6
            com.qq.e.ads.splash.SplashAD r6 = r5.j
            if (r6 == 0) goto L13
            boolean r7 = r5.k
            if (r7 == 0) goto L13
            com.tkay.network.gdt.GDTTYSplashAdapter$2 r7 = new com.tkay.network.gdt.GDTTYSplashAdapter$2
            r7.<init>(r5)
            r6.setDownloadConfirmListener(r7)
        L13:
            boolean r6 = r5.f
            if (r6 == 0) goto L50
            com.tkay.core.api.TYBiddingListener r6 = r5.mBiddingListener
            if (r6 == 0) goto L5c
            com.qq.e.ads.splash.SplashAD r6 = r5.j
            if (r6 == 0) goto L48
            int r6 = r6.getECPM()
            double r6 = (double) r6
            com.tkay.network.gdt.GDTTYBiddingNotice r0 = new com.tkay.network.gdt.GDTTYBiddingNotice
            com.qq.e.ads.splash.SplashAD r1 = r5.j
            r0.<init>(r1)
            com.tkay.core.api.TYBiddingListener r1 = r5.mBiddingListener
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            long r3 = java.lang.System.currentTimeMillis()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.tkay.core.api.TYAdConst$CURRENCY r3 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
            com.tkay.core.api.TYBiddingResult r6 = com.tkay.core.api.TYBiddingResult.success(r6, r2, r0, r3)
            r7 = 0
            r1.onC2SBiddingResultWithCache(r6, r7)
            return
        L48:
            java.lang.String r6 = ""
            java.lang.String r7 = "GDT: SplashAD had been destroy."
            r5.notifyATLoadFail(r6, r7)
            return
        L50:
            com.tkay.core.api.TYCustomLoadListener r6 = r5.mLoadListener
            if (r6 == 0) goto L5c
            com.tkay.core.api.TYCustomLoadListener r6 = r5.mLoadListener
            r7 = 0
            com.tkay.core.api.BaseAd[] r7 = new com.tkay.core.api.BaseAd[r7]
            r6.onAdCacheLoaded(r7)
        L5c:
            return
    }

    @Override
    public void onADPresent() {
            r0 = this;
            return
    }

    @Override
    public void onADTick(long r1) {
            r0 = this;
            return
    }

    @Override
    public void onNoAD(com.qq.e.comm.util.AdError r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r4.getErrorCode()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = r4.getErrorMsg()
            r3.notifyATLoadFail(r0, r1)
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r3.mImpressionListener
            if (r0 == 0) goto L6b
            java.lang.String r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "GDT Splash show fail:[errorCode:"
            r1.<init>(r2)
            int r2 = r4.getErrorCode()
            r1.append(r2)
            java.lang.String r2 = ",errorMsg:"
            r1.append(r2)
            java.lang.String r2 = r4.getErrorMsg()
            r1.append(r2)
            java.lang.String r2 = "]"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.e(r0, r1)
            r0 = 99
            r3.mDismissType = r0
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r3.mImpressionListener
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r2 = r4.getErrorCode()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r4 = r4.getErrorMsg()
            java.lang.String r2 = "4006"
            com.tkay.core.api.AdError r4 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r1, r4)
            r0.onSplashAdShowFail(r4)
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r4 = r3.mImpressionListener
            r4.onSplashAdDismiss()
        L6b:
            return
    }

    @Override
    public void onZoomOut() {
            r2 = this;
            r0 = 1
            r2.b = r0
            boolean r0 = r2.l
            if (r0 == 0) goto L1e
            com.tkay.network.gdt.GDTTYSplashEyeAd r0 = new com.tkay.network.gdt.GDTTYSplashEyeAd
            com.qq.e.ads.splash.SplashAD r1 = r2.j
            r0.<init>(r2, r1)
            r2.c = r0
            android.view.ViewGroup r1 = r2.d
            r0.setSplashView(r1)
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r2.mImpressionListener
            if (r0 == 0) goto L1e
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r2.mImpressionListener
            r0.onSplashAdDismiss()
        L1e:
            return
    }

    @Override
    public void onZoomOutPlayFinish() {
            r0 = this;
            return
    }

    @Override
    public void show(android.app.Activity r3, android.view.ViewGroup r4) {
            r2 = this;
            boolean r3 = r2.i
            if (r3 == 0) goto L2b
            com.qq.e.ads.splash.SplashAD r3 = r2.j
            if (r3 == 0) goto L2b
            boolean r0 = r2.l
            if (r0 == 0) goto L28
            android.widget.FrameLayout r3 = new android.widget.FrameLayout
            android.content.Context r0 = r4.getContext()
            r3.<init>(r0)
            r2.d = r3
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r4.addView(r3, r0)
            com.qq.e.ads.splash.SplashAD r3 = r2.j
            android.view.ViewGroup r4 = r2.d
            r3.showAd(r4)
            return
        L28:
            r3.showAd(r4)
        L2b:
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4, com.tkay.core.api.TYBiddingListener r5) {
            r1 = this;
            r5 = 1
            r1.f = r5
            int r0 = r1.getMixedFormatAdType()
            if (r0 != 0) goto Lb
            r2 = 0
            return r2
        Lb:
            r1.loadCustomNetworkAd(r2, r3, r4)
            return r5
    }
}
