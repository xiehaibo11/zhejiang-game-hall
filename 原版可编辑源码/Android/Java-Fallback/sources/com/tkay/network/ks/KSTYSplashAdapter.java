package com.tkay.network.ks;

public class KSTYSplashAdapter extends com.tkay.splashad.unitgroup.api.CustomSplashAdapter {
    long a;
    com.kwad.sdk.api.KsSplashScreenAd b;
    android.view.View c;
    boolean d;
    android.content.Context e;
    java.lang.String f;
    double g;
    boolean h;
    private final java.lang.String i;
    private boolean j;


    final class 2 implements com.kwad.sdk.api.KsLoadManager.SplashScreenAdListener {
        final com.tkay.network.ks.KSTYSplashAdapter a;

        2(com.tkay.network.ks.KSTYSplashAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onError(int r2, java.lang.String r3) {
                r1 = this;
                com.tkay.network.ks.KSTYSplashAdapter r0 = r1.a
                java.lang.String r2 = java.lang.String.valueOf(r2)
                r0.notifyATLoadFail(r2, r3)
                return
        }

        @Override
        public final void onRequestResult(int r1) {
                r0 = this;
                return
        }

        @Override
        public final void onSplashScreenAdLoad(com.kwad.sdk.api.KsSplashScreenAd r7) {
                r6 = this;
                com.tkay.network.ks.KSTYSplashAdapter r0 = r6.a
                r0.b = r7
                com.tkay.network.ks.KSTYSplashAdapter r0 = r6.a
                boolean r0 = r0.h
                if (r0 == 0) goto L40
                com.tkay.network.ks.KSTYSplashAdapter r0 = r6.a
                com.tkay.core.api.TYBiddingListener r0 = r0.mBiddingListener
                if (r0 == 0) goto L54
                r0 = 0
                int r0 = r7.getECPM()     // Catch: java.lang.Throwable -> L18
                double r0 = (double) r0
                goto L1c
            L18:
                r2 = move-exception
                r2.printStackTrace()
            L1c:
                com.tkay.network.ks.KSTYBiddingNotice r2 = new com.tkay.network.ks.KSTYBiddingNotice
                r2.<init>(r7)
                com.tkay.network.ks.KSTYSplashAdapter r7 = r6.a
                com.tkay.core.api.TYBiddingListener r7 = r7.mBiddingListener
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                long r4 = java.lang.System.currentTimeMillis()
                r3.append(r4)
                java.lang.String r3 = r3.toString()
                com.tkay.core.api.TYAdConst$CURRENCY r4 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
                com.tkay.core.api.TYBiddingResult r0 = com.tkay.core.api.TYBiddingResult.success(r0, r3, r2, r4)
                r1 = 0
                r7.onC2SBiddingResultWithCache(r0, r1)
                return
            L40:
                com.tkay.network.ks.KSTYSplashAdapter r7 = r6.a
                com.tkay.core.api.TYCustomLoadListener r7 = com.tkay.network.ks.KSTYSplashAdapter.b(r7)
                if (r7 == 0) goto L54
                com.tkay.network.ks.KSTYSplashAdapter r7 = r6.a
                com.tkay.core.api.TYCustomLoadListener r7 = com.tkay.network.ks.KSTYSplashAdapter.c(r7)
                r0 = 0
                com.tkay.core.api.BaseAd[] r0 = new com.tkay.core.api.BaseAd[r0]
                r7.onAdCacheLoaded(r0)
            L54:
                return
        }
    }


    public KSTYSplashAdapter() {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.i = r0
            r0 = 0
            r1.j = r0
            r1.h = r0
            return
    }

    private void a() {
            r4 = this;
            com.tkay.network.ks.KSTYSplashAdapter$2 r0 = new com.tkay.network.ks.KSTYSplashAdapter$2
            r0.<init>(r4)
            com.kwad.sdk.api.KsScene$Builder r1 = new com.kwad.sdk.api.KsScene$Builder
            long r2 = r4.a
            r1.<init>(r2)
            r2 = 1
            com.kwad.sdk.api.KsScene$Builder r1 = r1.adNum(r2)
            java.lang.String r2 = r4.f
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L1e
            java.lang.String r2 = r4.f
            r1.setBidResponseV2(r2)
        L1e:
            com.kwad.sdk.api.KsLoadManager r2 = com.kwad.sdk.api.KsAdSDK.getLoadManager()
            com.kwad.sdk.api.KsScene r1 = r1.build()
            r2.loadSplashScreenAd(r1, r0)
            return
    }

    static void a(com.tkay.network.ks.KSTYSplashAdapter r4) {
            com.tkay.network.ks.KSTYSplashAdapter$2 r0 = new com.tkay.network.ks.KSTYSplashAdapter$2
            r0.<init>(r4)
            com.kwad.sdk.api.KsScene$Builder r1 = new com.kwad.sdk.api.KsScene$Builder
            long r2 = r4.a
            r1.<init>(r2)
            r2 = 1
            com.kwad.sdk.api.KsScene$Builder r1 = r1.adNum(r2)
            java.lang.String r2 = r4.f
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L1e
            java.lang.String r4 = r4.f
            r1.setBidResponseV2(r4)
        L1e:
            com.kwad.sdk.api.KsLoadManager r4 = com.kwad.sdk.api.KsAdSDK.getLoadManager()
            com.kwad.sdk.api.KsScene r1 = r1.build()
            r4.loadSplashScreenAd(r1, r0)
            return
    }

    private boolean a(java.util.Map<java.lang.String, java.lang.Object> r4) {
            r3 = this;
            java.lang.String r0 = "app_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r0)
            java.lang.String r1 = "position_id"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L5b
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L19
            goto L5b
        L19:
            long r0 = java.lang.Long.parseLong(r1)     // Catch: java.lang.NumberFormatException -> L1f
            r3.a = r0     // Catch: java.lang.NumberFormatException -> L1f
        L1f:
            java.lang.String r0 = "zoomoutad_sw"
            boolean r1 = r4.containsKey(r0)
            if (r1 == 0) goto L33
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r0)
            java.lang.String r1 = "2"
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            r3.j = r0
        L33:
            java.lang.String r0 = "tkay_gsp"
            boolean r1 = r4.containsKey(r0)
            if (r1 == 0) goto L41
            double r0 = com.tkay.core.api.TYInitMediation.getDoubleFromMap(r4, r0)
            r3.g = r0
        L41:
            java.lang.String r0 = "payload"
            boolean r1 = r4.containsKey(r0)
            if (r1 == 0) goto L59
            java.lang.String r4 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r0)
            com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.getInstance()
            double r1 = r3.g
            java.lang.String r4 = r0.getPayloadInfo(r4, r1)
            r3.f = r4
        L59:
            r4 = 1
            return r4
        L5b:
            r4 = 0
            return r4
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.ks.KSTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    private void b() {
            r1 = this;
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r1.mImpressionListener
            if (r0 == 0) goto L9
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r1.mImpressionListener
            r0.onSplashAdClicked()
        L9:
            return
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.ks.KSTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener d(com.tkay.network.ks.KSTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener e(com.tkay.network.ks.KSTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static java.lang.String f(com.tkay.network.ks.KSTYSplashAdapter r0) {
            java.lang.String r0 = r0.i
            return r0
    }

    static int g(com.tkay.network.ks.KSTYSplashAdapter r1) {
            r0 = 99
            r1.mDismissType = r0
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener h(com.tkay.network.ks.KSTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener i(com.tkay.network.ks.KSTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener j(com.tkay.network.ks.KSTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static int k(com.tkay.network.ks.KSTYSplashAdapter r1) {
            r0 = 3
            r1.mDismissType = r0
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener l(com.tkay.network.ks.KSTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener m(com.tkay.network.ks.KSTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener n(com.tkay.network.ks.KSTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener o(com.tkay.network.ks.KSTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static int p(com.tkay.network.ks.KSTYSplashAdapter r1) {
            r0 = 2
            r1.mDismissType = r0
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener q(com.tkay.network.ks.KSTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener r(com.tkay.network.ks.KSTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    @Override
    public void destory() {
            r1 = this;
            r0 = 0
            r1.b = r0
            return
    }

    @Override
    public void getBidRequestInfo(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5, com.tkay.core.api.TYBidRequestInfoListener r6) {
            r2 = this;
            java.lang.String r0 = "position_id"
            long r0 = com.tkay.core.api.TYInitMediation.getLongFromMap(r4, r0)
            r2.a = r0
            com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.getInstance()
            r0.a(r3, r4, r5, r6)
            return
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkName()
            return r0
    }

    @Override
    public java.lang.String getNetworkPlacementId() {
            r2 = this;
            long r0 = r2.a     // Catch: java.lang.Exception -> L7
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKVersion() {
            r1 = this;
            com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkVersion()
            return r0
    }

    @Override
    public boolean isAdReady() {
            r1 = this;
            com.kwad.sdk.api.KsSplashScreenAd r0 = r1.b
            if (r0 == 0) goto Lc
            boolean r0 = r0.isAdEnable()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            boolean r0 = r2.a(r4)
            if (r0 != 0) goto Le
            java.lang.String r3 = ""
            java.lang.String r4 = "kuaishou app_id or position_id is empty."
            r2.notifyATLoadFail(r3, r4)
            return
        Le:
            android.content.Context r3 = r3.getApplicationContext()
            r2.e = r3
            com.tkay.network.ks.KSTYInitManager r3 = com.tkay.network.ks.KSTYInitManager.getInstance()
            android.content.Context r0 = r2.e
            com.tkay.network.ks.KSTYSplashAdapter$1 r1 = new com.tkay.network.ks.KSTYSplashAdapter$1
            r1.<init>(r2, r4, r5)
            r3.initSDK(r0, r4, r1)
            return
    }

    @Override
    public void show(android.app.Activity r3, android.view.ViewGroup r4) {
            r2 = this;
            com.kwad.sdk.api.KsSplashScreenAd r3 = r2.b
            if (r3 == 0) goto L3b
            android.content.Context r0 = r4.getContext()     // Catch: java.lang.Throwable -> L2e
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L2e
            com.tkay.network.ks.KSTYSplashAdapter$3 r1 = new com.tkay.network.ks.KSTYSplashAdapter$3     // Catch: java.lang.Throwable -> L2e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2e
            android.view.View r3 = r3.getView(r0, r1)     // Catch: java.lang.Throwable -> L2e
            boolean r0 = r2.j     // Catch: java.lang.Throwable -> L2e
            r1 = -1
            if (r0 == 0) goto L25
            r2.c = r3     // Catch: java.lang.Throwable -> L2e
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L2e
            r0.<init>(r1, r1)     // Catch: java.lang.Throwable -> L2e
            r4.addView(r3, r0)     // Catch: java.lang.Throwable -> L2e
            return
        L25:
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L2e
            r0.<init>(r1, r1)     // Catch: java.lang.Throwable -> L2e
            r4.addView(r3, r0)     // Catch: java.lang.Throwable -> L2e
            return
        L2e:
            r3 = move-exception
            java.lang.String r4 = r2.i
            java.lang.String r0 = r3.getMessage()
            android.util.Log.e(r4, r0)
            r3.printStackTrace()
        L3b:
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4, com.tkay.core.api.TYBiddingListener r5) {
            r1 = this;
            r5 = 1
            r1.h = r5
            int r0 = r1.getMixedFormatAdType()
            if (r0 != 0) goto Lb
            r2 = 0
            return r2
        Lb:
            r1.loadCustomNetworkAd(r2, r3, r4)
            return r5
    }
}
