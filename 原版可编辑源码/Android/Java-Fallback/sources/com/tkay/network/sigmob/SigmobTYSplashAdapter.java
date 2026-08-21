package com.tkay.network.sigmob;

public class SigmobTYSplashAdapter extends com.tkay.splashad.unitgroup.api.CustomSplashAdapter {
    private static final java.lang.String a = null;
    private java.lang.String b;
    private com.sigmob.windad.Splash.WindSplashAD c;
    private com.sigmob.windad.Splash.WindSplashAdRequest d;
    private com.sigmob.windad.Splash.WindSplashADListener e;
    private java.lang.String f;
    private volatile boolean g;


    final class 2 implements java.lang.Runnable {
        final com.tkay.network.sigmob.SigmobTYSplashAdapter a;


        2(com.tkay.network.sigmob.SigmobTYSplashAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r5 = this;
                com.tkay.network.sigmob.SigmobTYSplashAdapter r0 = r5.a
                com.sigmob.windad.Splash.WindSplashAdRequest r1 = new com.sigmob.windad.Splash.WindSplashAdRequest
                com.tkay.network.sigmob.SigmobTYSplashAdapter r2 = r5.a
                java.lang.String r2 = com.tkay.network.sigmob.SigmobTYSplashAdapter.b(r2)
                java.lang.String r3 = ""
                r4 = 0
                r1.<init>(r2, r3, r4)
                com.tkay.network.sigmob.SigmobTYSplashAdapter.a(r0, r1)
                com.tkay.network.sigmob.SigmobTYSplashAdapter r0 = r5.a
                com.sigmob.windad.Splash.WindSplashAdRequest r0 = com.tkay.network.sigmob.SigmobTYSplashAdapter.d(r0)
                com.tkay.network.sigmob.SigmobTYSplashAdapter r1 = r5.a
                int r1 = com.tkay.network.sigmob.SigmobTYSplashAdapter.c(r1)
                int r1 = r1 / 1000
                r0.setFetchDelay(r1)
                com.tkay.network.sigmob.SigmobTYSplashAdapter r0 = r5.a
                com.sigmob.windad.Splash.WindSplashAdRequest r0 = com.tkay.network.sigmob.SigmobTYSplashAdapter.d(r0)
                r1 = 1
                r0.setDisableAutoHideAd(r1)
                com.tkay.network.sigmob.SigmobTYSplashAdapter r0 = r5.a
                com.tkay.network.sigmob.SigmobTYSplashAdapter$2$1 r1 = new com.tkay.network.sigmob.SigmobTYSplashAdapter$2$1
                r1.<init>(r5)
                com.tkay.network.sigmob.SigmobTYSplashAdapter.a(r0, r1)
                com.tkay.network.sigmob.SigmobTYSplashAdapter r0 = r5.a
                com.sigmob.windad.Splash.WindSplashAD r1 = new com.sigmob.windad.Splash.WindSplashAD
                com.tkay.network.sigmob.SigmobTYSplashAdapter r2 = r5.a
                com.sigmob.windad.Splash.WindSplashAdRequest r2 = com.tkay.network.sigmob.SigmobTYSplashAdapter.d(r2)
                com.tkay.network.sigmob.SigmobTYSplashAdapter r3 = r5.a
                com.sigmob.windad.Splash.WindSplashADListener r3 = com.tkay.network.sigmob.SigmobTYSplashAdapter.s(r3)
                r1.<init>(r2, r3)
                com.tkay.network.sigmob.SigmobTYSplashAdapter.a(r0, r1)
                com.tkay.network.sigmob.SigmobTYSplashAdapter r0 = r5.a
                boolean r0 = com.tkay.network.sigmob.SigmobTYSplashAdapter.g(r0)
                if (r0 == 0) goto L6b
                com.tkay.network.sigmob.SigmobTYSplashAdapter r0 = r5.a
                com.sigmob.windad.Splash.WindSplashAD r0 = com.tkay.network.sigmob.SigmobTYSplashAdapter.h(r0)
                java.lang.String r1 = "USD"
                r0.setCurrency(r1)
                com.tkay.network.sigmob.SigmobTYSplashAdapter r0 = r5.a
                com.sigmob.windad.Splash.WindSplashAD r0 = com.tkay.network.sigmob.SigmobTYSplashAdapter.h(r0)
                r0.loadAd()
                return
            L6b:
                com.tkay.network.sigmob.SigmobTYSplashAdapter r0 = r5.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYSplashAdapter.t(r0)
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L87
                com.tkay.network.sigmob.SigmobTYSplashAdapter r0 = r5.a
                com.sigmob.windad.Splash.WindSplashAD r0 = com.tkay.network.sigmob.SigmobTYSplashAdapter.h(r0)
                com.tkay.network.sigmob.SigmobTYSplashAdapter r1 = r5.a
                java.lang.String r1 = com.tkay.network.sigmob.SigmobTYSplashAdapter.t(r1)
                r0.loadAd(r1)
                return
            L87:
                com.tkay.network.sigmob.SigmobTYSplashAdapter r0 = r5.a
                com.sigmob.windad.Splash.WindSplashAD r0 = com.tkay.network.sigmob.SigmobTYSplashAdapter.h(r0)
                r0.loadAd()
                return
        }
    }

    static {
            java.lang.Class<com.tkay.network.sigmob.SigmobTYSplashAdapter> r0 = com.tkay.network.sigmob.SigmobTYSplashAdapter.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.network.sigmob.SigmobTYSplashAdapter.a = r0
            return
    }

    public SigmobTYSplashAdapter() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.b = r0
            return
    }

    static com.sigmob.windad.Splash.WindSplashAD a(com.tkay.network.sigmob.SigmobTYSplashAdapter r0, com.sigmob.windad.Splash.WindSplashAD r1) {
            r0.c = r1
            return r1
    }

    static com.sigmob.windad.Splash.WindSplashADListener a(com.tkay.network.sigmob.SigmobTYSplashAdapter r0, com.sigmob.windad.Splash.WindSplashADListener r1) {
            r0.e = r1
            return r1
    }

    static com.sigmob.windad.Splash.WindSplashAdRequest a(com.tkay.network.sigmob.SigmobTYSplashAdapter r0, com.sigmob.windad.Splash.WindSplashAdRequest r1) {
            r0.d = r1
            return r1
    }

    private void a() {
            r1 = this;
            com.tkay.network.sigmob.SigmobTYSplashAdapter$2 r0 = new com.tkay.network.sigmob.SigmobTYSplashAdapter$2
            r0.<init>(r1)
            r1.postOnMainThread(r0)
            return
    }

    static void a(com.tkay.network.sigmob.SigmobTYSplashAdapter r1) {
            com.tkay.network.sigmob.SigmobTYSplashAdapter$2 r0 = new com.tkay.network.sigmob.SigmobTYSplashAdapter$2
            r0.<init>(r1)
            r1.postOnMainThread(r0)
            return
    }

    static void a(com.tkay.network.sigmob.SigmobTYSplashAdapter r0, java.lang.String r1, java.lang.String r2) {
            r0.a(r1, r2)
            return
    }

    private void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = r3.g
            com.tkay.core.api.TYBiddingListener r1 = r3.mBiddingListener
            com.tkay.core.api.TYCustomLoadListener r2 = r3.mLoadListener
            com.tkay.network.sigmob.SigmobTYInitManager.onAdLoadError(r4, r5, r0, r1, r2)
            return
    }

    static java.lang.String b(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    static int c(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            int r0 = r0.mFetchAdTimeout
            return r0
    }

    static com.sigmob.windad.Splash.WindSplashAdRequest d(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            com.sigmob.windad.Splash.WindSplashAdRequest r0 = r0.d
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener e(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener f(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static boolean g(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            boolean r0 = r0.g
            return r0
    }

    static com.sigmob.windad.Splash.WindSplashAD h(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            com.sigmob.windad.Splash.WindSplashAD r0 = r0.c
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener i(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener j(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener k(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener l(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static int m(com.tkay.network.sigmob.SigmobTYSplashAdapter r1) {
            r0 = 3
            r1.mDismissType = r0
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener n(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener o(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static int p(com.tkay.network.sigmob.SigmobTYSplashAdapter r1) {
            r0 = 2
            r1.mDismissType = r0
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener q(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener r(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.sigmob.windad.Splash.WindSplashADListener s(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            com.sigmob.windad.Splash.WindSplashADListener r0 = r0.e
            return r0
    }

    static java.lang.String t(com.tkay.network.sigmob.SigmobTYSplashAdapter r0) {
            java.lang.String r0 = r0.f
            return r0
    }

    @Override
    public void destory() {
            r1 = this;
            r0 = 0
            r1.c = r0
            r1.d = r0
            r1.e = r0
            return
    }

    @Override
    public void getBidRequestInfo(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4, com.tkay.core.api.TYBidRequestInfoListener r5) {
            r1 = this;
            java.lang.String r0 = "placement_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r0)
            r1.b = r0
            com.tkay.network.sigmob.SigmobTYInitManager r0 = com.tkay.network.sigmob.SigmobTYInitManager.getInstance()
            r0.a(r2, r3, r4, r5)
            return
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            com.tkay.network.sigmob.SigmobTYInitManager r0 = com.tkay.network.sigmob.SigmobTYInitManager.getInstance()
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
            com.tkay.network.sigmob.SigmobTYInitManager r0 = com.tkay.network.sigmob.SigmobTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkVersion()
            return r0
    }

    @Override
    public boolean isAdReady() {
            r1 = this;
            com.sigmob.windad.Splash.WindSplashAD r0 = r1.c
            if (r0 == 0) goto Lc
            boolean r0 = r0.isReady()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r4, java.util.Map<java.lang.String, java.lang.Object> r5, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r3 = this;
            java.lang.String r0 = "app_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r0)
            java.lang.String r1 = "app_key"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r1)
            java.lang.String r2 = "placement_id"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r2)
            r3.b = r2
            java.lang.String r2 = "payload"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r2)
            r3.f = r2
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3e
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L3e
            java.lang.String r0 = r3.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L31
            goto L3e
        L31:
            com.tkay.network.sigmob.SigmobTYInitManager r0 = com.tkay.network.sigmob.SigmobTYInitManager.getInstance()
            com.tkay.network.sigmob.SigmobTYSplashAdapter$1 r1 = new com.tkay.network.sigmob.SigmobTYSplashAdapter$1
            r1.<init>(r3, r4, r5, r6)
            r0.initSDK(r4, r5, r1)
            return
        L3e:
            java.lang.String r4 = ""
            java.lang.String r5 = "app_id、app_key、placement_id could not be null."
            r3.a(r4, r5)
            return
    }

    @Override
    public void show(android.app.Activity r2, android.view.ViewGroup r3) {
            r1 = this;
            com.sigmob.windad.Splash.WindSplashAD r2 = r1.c
            if (r2 != 0) goto L5
            return
        L5:
            boolean r2 = r1.isAdReady()
            if (r2 == 0) goto L1d
            boolean r2 = r1.g
            if (r2 == 0) goto L18
            com.sigmob.windad.Splash.WindSplashAD r2 = r1.c
            int r0 = com.tkay.network.sigmob.SigmobTYInitManager.getEcpmInt(r2)
            r2.setBidEcpm(r0)
        L18:
            com.sigmob.windad.Splash.WindSplashAD r2 = r1.c
            r2.show(r3)
        L1d:
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r4 = 1
            r0.g = r4
            r0.loadCustomNetworkAd(r1, r2, r3)
            return r4
    }
}
