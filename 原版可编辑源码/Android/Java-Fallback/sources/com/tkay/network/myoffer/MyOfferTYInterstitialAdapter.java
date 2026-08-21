package com.tkay.network.myoffer;

public class MyOfferTYInterstitialAdapter extends com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter {
    com.tkay.core.common.f.i a;
    java.util.Map<java.lang.String, java.lang.Object> b;
    private java.lang.String c;
    private com.tkay.basead.f.d d;
    private boolean e;



    public MyOfferTYInterstitialAdapter() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.c = r0
            r0 = 0
            r1.e = r0
            return
    }

    static com.tkay.basead.f.d a(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.basead.f.d r0 = r0.d
            return r0
    }

    private void a(android.content.Context r5) {
            r4 = this;
            com.tkay.basead.f.d r0 = new com.tkay.basead.f.d
            com.tkay.core.common.f.i r1 = r4.a
            java.lang.String r2 = r4.c
            boolean r3 = r4.e
            r0.<init>(r5, r1, r2, r3)
            r4.d = r0
            return
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener f(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener g(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener h(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener i(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener j(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener k(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener l(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener m(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener n(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener o(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener p(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener q(com.tkay.network.myoffer.MyOfferTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            com.tkay.basead.f.d r0 = r2.d
            if (r0 == 0) goto La
            r1 = 0
            r0.a(r1)
            r2.d = r1
        La:
            return
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Object> getNetworkInfoMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.b
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
            java.lang.String r0 = r1.c
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKVersion() {
            r1 = this;
            java.lang.String r0 = com.tkay.core.common.l.g.a()
            return r0
    }

    @Override
    public boolean initNetworkObjectByPlacementId(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r1 = this;
            java.lang.String r4 = "my_oid"
            boolean r0 = r3.containsKey(r4)
            if (r0 == 0) goto L12
            java.lang.Object r4 = r3.get(r4)
            java.lang.String r4 = r4.toString()
            r1.c = r4
        L12:
            java.lang.String r4 = "basead_params"
            boolean r0 = r3.containsKey(r4)
            if (r0 == 0) goto L22
            java.lang.Object r4 = r3.get(r4)
            com.tkay.core.common.f.i r4 = (com.tkay.core.common.f.i) r4
            r1.a = r4
        L22:
            java.lang.String r4 = "isDefaultOffer"
            boolean r0 = r3.containsKey(r4)
            if (r0 == 0) goto L36
            java.lang.Object r3 = r3.get(r4)
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            r1.e = r3
        L36:
            r1.a(r2)
            r2 = 1
            return r2
    }

    @Override
    public boolean isAdReady() {
            r2 = this;
            com.tkay.basead.f.d r0 = r2.d
            if (r0 == 0) goto Lc
            boolean r0 = r0.a()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            if (r0 == 0) goto L1b
            java.util.Map<java.lang.String, java.lang.Object> r1 = r2.b
            if (r1 != 0) goto L1b
            com.tkay.basead.f.d r1 = r2.d
            java.util.Map r1 = com.tkay.basead.b.a(r1)
            r2.b = r1
        L1b:
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
            r1.c = r4
        L12:
            java.lang.String r4 = "basead_params"
            boolean r0 = r3.containsKey(r4)
            if (r0 == 0) goto L22
            java.lang.Object r3 = r3.get(r4)
            com.tkay.core.common.f.i r3 = (com.tkay.core.common.f.i) r3
            r1.a = r3
        L22:
            r1.a(r2)
            com.tkay.basead.f.d r2 = r1.d
            com.tkay.network.myoffer.MyOfferTYInterstitialAdapter$1 r3 = new com.tkay.network.myoffer.MyOfferTYInterstitialAdapter$1
            r3.<init>(r1)
            r2.a(r3)
            return
    }

    @Override
    public void show(android.app.Activity r5) {
            r4 = this;
            boolean r0 = r4.isAdReady()
            if (r0 == 0) goto L38
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 1
            r0.<init>(r1)
            int r1 = com.tkay.core.common.l.d.g(r5)
            com.tkay.core.common.f.i r2 = r4.a
            java.lang.String r2 = r2.d
            java.lang.String r3 = "extra_request_id"
            r0.put(r3, r2)
            java.lang.String r2 = r4.mScenario
            java.lang.String r3 = "extra_scenario"
            r0.put(r3, r2)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "extra_orientation"
            r0.put(r2, r1)
            com.tkay.basead.f.d r1 = r4.d
            com.tkay.network.myoffer.MyOfferTYInterstitialAdapter$2 r2 = new com.tkay.network.myoffer.MyOfferTYInterstitialAdapter$2
            r2.<init>(r4)
            r1.a(r2)
            com.tkay.basead.f.d r1 = r4.d
            r1.a(r5, r0)
        L38:
            return
    }
}
