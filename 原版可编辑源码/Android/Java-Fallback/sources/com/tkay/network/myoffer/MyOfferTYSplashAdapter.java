package com.tkay.network.myoffer;

public class MyOfferTYSplashAdapter extends com.tkay.splashad.unitgroup.api.CustomSplashAdapter {
    java.lang.String a;
    com.tkay.basead.f.g b;
    com.tkay.core.common.f.i c;
    java.util.Map<java.lang.String, java.lang.Object> d;


    final class 2 implements com.tkay.basead.e.a {
        final com.tkay.network.myoffer.MyOfferTYSplashAdapter a;

        2(com.tkay.network.myoffer.MyOfferTYSplashAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onAdClick(int r2) {
                r1 = this;
                com.tkay.network.myoffer.MyOfferTYSplashAdapter r0 = r1.a
                com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
                if (r0 == 0) goto Lb
                r0.x(r2)
            Lb:
                com.tkay.network.myoffer.MyOfferTYSplashAdapter r2 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r2 = com.tkay.network.myoffer.MyOfferTYSplashAdapter.i(r2)
                if (r2 == 0) goto L1c
                com.tkay.network.myoffer.MyOfferTYSplashAdapter r2 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r2 = com.tkay.network.myoffer.MyOfferTYSplashAdapter.j(r2)
                r2.onSplashAdClicked()
            L1c:
                return
        }

        @Override
        public final void onAdClosed() {
                r1 = this;
                com.tkay.network.myoffer.MyOfferTYSplashAdapter r0 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.myoffer.MyOfferTYSplashAdapter.g(r0)
                if (r0 == 0) goto L11
                com.tkay.network.myoffer.MyOfferTYSplashAdapter r0 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.myoffer.MyOfferTYSplashAdapter.h(r0)
                r0.onSplashAdDismiss()
            L11:
                return
        }

        @Override
        public final void onAdShow() {
                r1 = this;
                com.tkay.network.myoffer.MyOfferTYSplashAdapter r0 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.myoffer.MyOfferTYSplashAdapter.e(r0)
                if (r0 == 0) goto L11
                com.tkay.network.myoffer.MyOfferTYSplashAdapter r0 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.myoffer.MyOfferTYSplashAdapter.f(r0)
                r0.onSplashAdShow()
            L11:
                return
        }

        @Override
        public final void onDeeplinkCallback(boolean r1) {
                r0 = this;
                return
        }

        @Override
        public final void onShowFailed(com.tkay.basead.c.e r4) {
                r3 = this;
                com.tkay.network.myoffer.MyOfferTYSplashAdapter r0 = r3.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.myoffer.MyOfferTYSplashAdapter.k(r0)
                if (r0 == 0) goto L1f
                com.tkay.network.myoffer.MyOfferTYSplashAdapter r0 = r3.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.myoffer.MyOfferTYSplashAdapter.l(r0)
                java.lang.String r1 = r4.a()
                java.lang.String r4 = r4.b()
                java.lang.String r2 = "4006"
                com.tkay.core.api.AdError r4 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r1, r4)
                r0.onSplashAdShowFail(r4)
            L1f:
                return
        }
    }

    public MyOfferTYSplashAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.tkay.core.api.TYCustomLoadListener a(com.tkay.network.myoffer.MyOfferTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    private void a(android.content.Context r4) {
            r3 = this;
            com.tkay.basead.f.g r0 = new com.tkay.basead.f.g
            com.tkay.core.common.f.i r1 = r3.c
            java.lang.String r2 = r3.a
            r0.<init>(r4, r1, r2)
            r3.b = r0
            com.tkay.network.myoffer.MyOfferTYSplashAdapter$2 r4 = new com.tkay.network.myoffer.MyOfferTYSplashAdapter$2
            r4.<init>(r3)
            r0.a(r4)
            return
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.myoffer.MyOfferTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.myoffer.MyOfferTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.myoffer.MyOfferTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener e(com.tkay.network.myoffer.MyOfferTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener f(com.tkay.network.myoffer.MyOfferTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener g(com.tkay.network.myoffer.MyOfferTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener h(com.tkay.network.myoffer.MyOfferTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener i(com.tkay.network.myoffer.MyOfferTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener j(com.tkay.network.myoffer.MyOfferTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener k(com.tkay.network.myoffer.MyOfferTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener l(com.tkay.network.myoffer.MyOfferTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            com.tkay.basead.f.g r0 = r2.b
            r1 = 0
            if (r0 == 0) goto La
            r0.f()
            r2.b = r1
        La:
            r2.c = r1
            return
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Object> getNetworkInfoMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.d
            return r0
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            java.lang.String r0 = "MyOffer"
            return r0
    }

    @Override
    public java.lang.String getNetworkPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKVersion() {
            r1 = this;
            java.lang.String r0 = com.tkay.core.common.l.g.a()
            return r0
    }

    @Override
    public boolean isAdReady() {
            r2 = this;
            com.tkay.basead.f.g r0 = r2.b
            if (r0 == 0) goto Lc
            boolean r0 = r0.a()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            if (r0 == 0) goto L1b
            java.util.Map<java.lang.String, java.lang.Object> r1 = r2.d
            if (r1 != 0) goto L1b
            com.tkay.basead.f.g r1 = r2.b
            java.util.Map r1 = com.tkay.basead.b.a(r1)
            r2.d = r1
        L1b:
            return r0
    }

    @Override
    public boolean isSupportCustomSkipView() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r1 = this;
            java.lang.String r4 = "my_oid"
            boolean r0 = r3.containsKey(r4)
            if (r0 == 0) goto L12
            java.lang.Object r4 = r3.get(r4)
            java.lang.String r4 = r4.toString()
            r1.a = r4
        L12:
            java.lang.String r4 = "basead_params"
            boolean r0 = r3.containsKey(r4)
            if (r0 == 0) goto L22
            java.lang.Object r3 = r3.get(r4)
            com.tkay.core.common.f.i r3 = (com.tkay.core.common.f.i) r3
            r1.c = r3
        L22:
            com.tkay.basead.f.g r3 = new com.tkay.basead.f.g
            com.tkay.core.common.f.i r4 = r1.c
            java.lang.String r0 = r1.a
            r3.<init>(r2, r4, r0)
            r1.b = r3
            com.tkay.network.myoffer.MyOfferTYSplashAdapter$2 r2 = new com.tkay.network.myoffer.MyOfferTYSplashAdapter$2
            r2.<init>(r1)
            r3.a(r2)
            com.tkay.basead.f.g r2 = r1.b
            com.tkay.network.myoffer.MyOfferTYSplashAdapter$1 r3 = new com.tkay.network.myoffer.MyOfferTYSplashAdapter$1
            r3.<init>(r1)
            r2.a(r3)
            return
    }

    @Override
    public void show(android.app.Activity r1, android.view.ViewGroup r2) {
            r0 = this;
            com.tkay.basead.f.g r1 = r0.b
            if (r1 == 0) goto L14
            boolean r1 = r0.isCustomSkipView()
            if (r1 == 0) goto Lf
            com.tkay.basead.f.g r1 = r0.b
            r1.b()
        Lf:
            com.tkay.basead.f.g r1 = r0.b
            r1.a(r2)
        L14:
            return
    }
}
