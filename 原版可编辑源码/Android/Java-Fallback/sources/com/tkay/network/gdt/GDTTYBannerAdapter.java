package com.tkay.network.gdt;

public class GDTTYBannerAdapter extends com.tkay.banner.unitgroup.api.CustomBannerAdapter {
    java.lang.String a;
    java.lang.String b;
    java.lang.String c;
    com.qq.e.ads.banner2.UnifiedBannerView d;
    int e;
    int f;
    boolean g;
    boolean h;
    com.qq.e.comm.compliance.DownloadConfirmListener i;
    private final java.lang.String j;


    final class 2 implements com.qq.e.ads.banner2.UnifiedBannerADListener {
        final com.tkay.network.gdt.GDTTYBannerAdapter a;

        2(com.tkay.network.gdt.GDTTYBannerAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onADClicked() {
                r1 = this;
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r1.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = com.tkay.network.gdt.GDTTYBannerAdapter.i(r0)
                if (r0 == 0) goto L11
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r1.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = com.tkay.network.gdt.GDTTYBannerAdapter.j(r0)
                r0.onBannerAdClicked()
            L11:
                return
        }

        @Override
        public final void onADClosed() {
                r1 = this;
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r1.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = com.tkay.network.gdt.GDTTYBannerAdapter.g(r0)
                if (r0 == 0) goto L11
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r1.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = com.tkay.network.gdt.GDTTYBannerAdapter.h(r0)
                r0.onBannerAdClose()
            L11:
                return
        }

        @Override
        public final void onADExposure() {
                r4 = this;
                com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L1a
                com.tkay.network.gdt.GDTTYBannerAdapter r1 = r4.a     // Catch: java.lang.Throwable -> L1a
                com.tkay.core.common.f.d r1 = r1.getTrackingInfo()     // Catch: java.lang.Throwable -> L1a
                java.lang.String r1 = r1.l()     // Catch: java.lang.Throwable -> L1a
                java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L1a
                com.tkay.network.gdt.GDTTYBannerAdapter r3 = r4.a     // Catch: java.lang.Throwable -> L1a
                com.qq.e.ads.banner2.UnifiedBannerView r3 = r3.d     // Catch: java.lang.Throwable -> L1a
                r2.<init>(r3)     // Catch: java.lang.Throwable -> L1a
                r0.a(r1, r2)     // Catch: java.lang.Throwable -> L1a
            L1a:
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r4.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = com.tkay.network.gdt.GDTTYBannerAdapter.e(r0)
                if (r0 == 0) goto L2b
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r4.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = com.tkay.network.gdt.GDTTYBannerAdapter.f(r0)
                r0.onBannerAdShow()
            L2b:
                return
        }

        @Override
        public final void onADLeftApplication() {
                r0 = this;
                return
        }

        @Override
        public final void onADReceive() {
                r7 = this;
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r7.a
                boolean r0 = r0.g
                if (r0 == 0) goto L17
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r7.a
                com.qq.e.ads.banner2.UnifiedBannerView r0 = r0.d
                if (r0 == 0) goto L17
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r7.a
                com.qq.e.ads.banner2.UnifiedBannerView r0 = r0.d
                com.tkay.network.gdt.GDTTYBannerAdapter r1 = r7.a
                com.qq.e.comm.compliance.DownloadConfirmListener r1 = r1.i
                r0.setDownloadConfirmListener(r1)
            L17:
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r7.a
                boolean r0 = r0.h
                if (r0 == 0) goto L64
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r7.a
                com.tkay.core.api.TYBiddingListener r0 = r0.mBiddingListener
                if (r0 == 0) goto L78
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r7.a
                com.qq.e.ads.banner2.UnifiedBannerView r0 = r0.d
                if (r0 == 0) goto L5a
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r7.a
                com.qq.e.ads.banner2.UnifiedBannerView r0 = r0.d
                int r0 = r0.getECPM()
                double r0 = (double) r0
                com.tkay.network.gdt.GDTTYBiddingNotice r2 = new com.tkay.network.gdt.GDTTYBiddingNotice
                com.tkay.network.gdt.GDTTYBannerAdapter r3 = r7.a
                com.qq.e.ads.banner2.UnifiedBannerView r3 = r3.d
                r2.<init>(r3)
                com.tkay.network.gdt.GDTTYBannerAdapter r3 = r7.a
                com.tkay.core.api.TYBiddingListener r3 = r3.mBiddingListener
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                long r5 = java.lang.System.currentTimeMillis()
                r4.append(r5)
                java.lang.String r4 = r4.toString()
                com.tkay.core.api.TYAdConst$CURRENCY r5 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
                com.tkay.core.api.TYBiddingResult r0 = com.tkay.core.api.TYBiddingResult.success(r0, r4, r2, r5)
                r1 = 0
                r3.onC2SBiddingResultWithCache(r0, r1)
                return
            L5a:
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r7.a
                java.lang.String r1 = ""
                java.lang.String r2 = "GDT: Offer had been destroy."
                r0.notifyATLoadFail(r1, r2)
                return
            L64:
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r7.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYBannerAdapter.c(r0)
                if (r0 == 0) goto L78
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r7.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYBannerAdapter.d(r0)
                r1 = 0
                com.tkay.core.api.BaseAd[] r1 = new com.tkay.core.api.BaseAd[r1]
                r0.onAdCacheLoaded(r1)
            L78:
                return
        }

        @Override
        public final void onNoAD(com.qq.e.comm.util.AdError r3) {
                r2 = this;
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r2.a
                r1 = 0
                r0.d = r1
                com.tkay.network.gdt.GDTTYBannerAdapter r0 = r2.a
                int r1 = r3.getErrorCode()
                java.lang.String r1 = java.lang.String.valueOf(r1)
                java.lang.String r3 = r3.getErrorMsg()
                r0.notifyATLoadFail(r1, r3)
                return
        }
    }


    public GDTTYBannerAdapter() {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.tkay.network.gdt.GDTTYBannerAdapter> r0 = com.tkay.network.gdt.GDTTYBannerAdapter.class
            java.lang.String r0 = r0.getSimpleName()
            r1.j = r0
            r0 = 0
            r1.e = r0
            com.tkay.network.gdt.GDTTYBannerAdapter$1 r0 = new com.tkay.network.gdt.GDTTYBannerAdapter$1
            r0.<init>(r1)
            r1.i = r0
            return
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener a(com.tkay.network.gdt.GDTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    private void a(android.app.Activity r7, java.util.Map<java.lang.String, java.lang.Object> r8) {
            r6 = this;
            com.tkay.network.gdt.GDTTYBannerAdapter$2 r3 = new com.tkay.network.gdt.GDTTYBannerAdapter$2
            r3.<init>(r6)
            java.lang.String r0 = r6.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1f
            boolean r0 = r6.h
            if (r0 == 0) goto L12
            goto L1f
        L12:
            com.qq.e.ads.banner2.UnifiedBannerView r8 = new com.qq.e.ads.banner2.UnifiedBannerView
            java.lang.String r2 = r6.b
            r4 = 0
            java.lang.String r5 = r6.c
            r0 = r8
            r1 = r7
            r0.<init>(r1, r2, r3, r4, r5)
            goto L31
        L1f:
            com.qq.e.ads.banner2.UnifiedBannerView r0 = new com.qq.e.ads.banner2.UnifiedBannerView
            java.lang.String r1 = r6.b
            r0.<init>(r7, r1, r3)
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.qq.e.comm.constants.LoadAdParams r7 = com.tkay.network.gdt.GDTTYInitManager.a(r8)
            r0.setLoadAdParams(r7)
            r8 = r0
        L31:
            int r7 = r6.f
            if (r7 <= 0) goto L39
            r8.setRefresh(r7)
            goto L3d
        L39:
            r7 = 0
            r8.setRefresh(r7)
        L3d:
            r6.d = r8
            android.view.ViewGroup$LayoutParams r7 = r8.getLayoutParams()
            if (r7 != 0) goto L51
            com.qq.e.ads.banner2.UnifiedBannerView r7 = r6.d
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -1
            r2 = -2
            r0.<init>(r1, r2)
            r7.setLayoutParams(r0)
        L51:
            r8.loadAD()
            return
    }

    static void a(com.tkay.network.gdt.GDTTYBannerAdapter r6, android.app.Activity r7, java.util.Map r8) {
            com.tkay.network.gdt.GDTTYBannerAdapter$2 r3 = new com.tkay.network.gdt.GDTTYBannerAdapter$2
            r3.<init>(r6)
            java.lang.String r0 = r6.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1f
            boolean r0 = r6.h
            if (r0 == 0) goto L12
            goto L1f
        L12:
            com.qq.e.ads.banner2.UnifiedBannerView r8 = new com.qq.e.ads.banner2.UnifiedBannerView
            java.lang.String r2 = r6.b
            r4 = 0
            java.lang.String r5 = r6.c
            r0 = r8
            r1 = r7
            r0.<init>(r1, r2, r3, r4, r5)
            goto L31
        L1f:
            com.qq.e.ads.banner2.UnifiedBannerView r0 = new com.qq.e.ads.banner2.UnifiedBannerView
            java.lang.String r1 = r6.b
            r0.<init>(r7, r1, r3)
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.qq.e.comm.constants.LoadAdParams r7 = com.tkay.network.gdt.GDTTYInitManager.a(r8)
            r0.setLoadAdParams(r7)
            r8 = r0
        L31:
            int r7 = r6.f
            if (r7 <= 0) goto L39
            r8.setRefresh(r7)
            goto L3d
        L39:
            r7 = 0
            r8.setRefresh(r7)
        L3d:
            r6.d = r8
            android.view.ViewGroup$LayoutParams r7 = r8.getLayoutParams()
            if (r7 != 0) goto L51
            com.qq.e.ads.banner2.UnifiedBannerView r6 = r6.d
            android.widget.FrameLayout$LayoutParams r7 = new android.widget.FrameLayout$LayoutParams
            r0 = -1
            r1 = -2
            r7.<init>(r0, r1)
            r6.setLayoutParams(r7)
        L51:
            r8.loadAD()
            return
    }

    private void a(java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r3 = this;
            java.lang.String r0 = "nw_rft"
            java.lang.String r1 = "app_id"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r1)
            r3.a = r1
            java.lang.String r1 = "unit_id"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r1)
            r3.b = r1
            java.lang.String r1 = "unit_version"
            int r1 = com.tkay.core.api.TYInitMediation.getIntFromMap(r4, r1)
            r3.e = r1
            java.lang.String r1 = "payload"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r1)
            r3.c = r1
            r1 = 0
            java.lang.String r2 = "ad_click_confirm_status"
            boolean r5 = com.tkay.core.api.TYInitMediation.getBooleanFromMap(r5, r2, r1)
            r3.g = r5
            r3.f = r1
            boolean r5 = r4.containsKey(r0)     // Catch: java.lang.Throwable -> L41
            if (r5 == 0) goto L40
            int r4 = com.tkay.core.api.TYInitMediation.getIntFromMap(r4, r0)     // Catch: java.lang.Throwable -> L41
            r3.f = r4     // Catch: java.lang.Throwable -> L41
            float r4 = (float) r4     // Catch: java.lang.Throwable -> L41
            r5 = 1148846080(0x447a0000, float:1000.0)
            float r4 = r4 / r5
            int r4 = (int) r4     // Catch: java.lang.Throwable -> L41
            r3.f = r4     // Catch: java.lang.Throwable -> L41
        L40:
            return
        L41:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener b(com.tkay.network.gdt.GDTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.gdt.GDTTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.gdt.GDTTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener e(com.tkay.network.gdt.GDTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener f(com.tkay.network.gdt.GDTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener g(com.tkay.network.gdt.GDTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener h(com.tkay.network.gdt.GDTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener i(com.tkay.network.gdt.GDTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener j(com.tkay.network.gdt.GDTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            com.qq.e.ads.banner2.UnifiedBannerView r0 = r2.d
            if (r0 == 0) goto Le
            boolean r1 = r0 instanceof com.qq.e.ads.banner2.UnifiedBannerView
            if (r1 == 0) goto Lb
            r0.destroy()
        Lb:
            r0 = 0
            r2.d = r0
        Le:
            return
    }

    @Override
    public android.view.View getBannerView() {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerView r0 = r1.d
            return r0
    }

    @Override
    public void getBidRequestInfo(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4, com.tkay.core.api.TYBidRequestInfoListener r5) {
            r1 = this;
            java.lang.String r0 = "unit_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r0)
            r1.b = r0
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
            java.lang.String r0 = r1.b
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
    public void loadCustomNetworkAd(android.content.Context r4, java.util.Map<java.lang.String, java.lang.Object> r5, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r3 = this;
            java.lang.String r0 = "nw_rft"
            java.lang.String r1 = "app_id"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r1)
            r3.a = r1
            java.lang.String r1 = "unit_id"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r1)
            r3.b = r1
            java.lang.String r1 = "unit_version"
            int r1 = com.tkay.core.api.TYInitMediation.getIntFromMap(r5, r1)
            r3.e = r1
            java.lang.String r1 = "payload"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r1)
            r3.c = r1
            r1 = 0
            java.lang.String r2 = "ad_click_confirm_status"
            boolean r6 = com.tkay.core.api.TYInitMediation.getBooleanFromMap(r6, r2, r1)
            r3.g = r6
            r3.f = r1
            boolean r6 = r5.containsKey(r0)     // Catch: java.lang.Throwable -> L41
            if (r6 == 0) goto L45
            int r6 = com.tkay.core.api.TYInitMediation.getIntFromMap(r5, r0)     // Catch: java.lang.Throwable -> L41
            r3.f = r6     // Catch: java.lang.Throwable -> L41
            float r6 = (float) r6     // Catch: java.lang.Throwable -> L41
            r0 = 1148846080(0x447a0000, float:1000.0)
            float r6 = r6 / r0
            int r6 = (int) r6     // Catch: java.lang.Throwable -> L41
            r3.f = r6     // Catch: java.lang.Throwable -> L41
            goto L45
        L41:
            r6 = move-exception
            r6.printStackTrace()
        L45:
            java.lang.String r6 = r3.a
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            java.lang.String r0 = ""
            if (r6 != 0) goto L6b
            java.lang.String r6 = r3.b
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto L58
            goto L6b
        L58:
            boolean r6 = r4 instanceof android.app.Activity
            if (r6 != 0) goto L62
            java.lang.String r4 = "Context must be activity."
            r3.notifyATLoadFail(r0, r4)
            return
        L62:
            com.tkay.network.gdt.GDTTYBannerAdapter$3 r6 = new com.tkay.network.gdt.GDTTYBannerAdapter$3
            r6.<init>(r3, r4, r5)
            r3.runOnNetworkRequestThread(r6)
            return
        L6b:
            java.lang.String r4 = "GTD appid or unitId is empty."
            r3.notifyATLoadFail(r0, r4)
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r4 = 1
            r0.h = r4
            r0.loadCustomNetworkAd(r1, r2, r3)
            return r4
    }
}
