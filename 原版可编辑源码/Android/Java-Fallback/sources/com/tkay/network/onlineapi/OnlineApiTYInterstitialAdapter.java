package com.tkay.network.onlineapi;

public class OnlineApiTYInterstitialAdapter extends com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter {
    com.tkay.core.common.f.i a;
    com.tkay.basead.d.d b;
    java.lang.String c;
    java.util.Map<java.lang.String, java.lang.Object> d;



    public OnlineApiTYInterstitialAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener a(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    private void a(android.content.Context r6, java.util.Map<java.lang.String, java.lang.Object> r7) {
            r5 = this;
            java.lang.String r0 = "unit_id"
            java.lang.Object r1 = r7.get(r0)
            if (r1 == 0) goto L11
            java.lang.Object r0 = r7.get(r0)
            java.lang.String r0 = r0.toString()
            goto L13
        L11:
            java.lang.String r0 = ""
        L13:
            r5.c = r0
            r0 = 0
            r1 = -1
            java.lang.String r2 = "v_m"
            boolean r3 = r7.containsKey(r2)
            if (r3 == 0) goto L2d
            java.lang.Object r2 = r7.get(r2)
            if (r2 == 0) goto L2d
            java.lang.String r0 = r2.toString()
            int r0 = java.lang.Integer.parseInt(r0)
        L2d:
            java.lang.String r2 = "s_c_t"
            boolean r3 = r7.containsKey(r2)
            if (r3 == 0) goto L43
            java.lang.Object r2 = r7.get(r2)
            if (r2 == 0) goto L43
            java.lang.String r1 = r2.toString()
            int r1 = java.lang.Integer.parseInt(r1)
        L43:
            java.lang.String r2 = "basead_params"
            java.lang.Object r2 = r7.get(r2)
            com.tkay.core.common.f.i r2 = (com.tkay.core.common.f.i) r2
            r5.a = r2
            com.tkay.basead.d.d r2 = new com.tkay.basead.d.d
            com.tkay.basead.d.b$a r3 = com.tkay.basead.d.b.a.b
            com.tkay.core.common.f.i r4 = r5.a
            r2.<init>(r6, r3, r4)
            r5.b = r2
            com.tkay.basead.d.c$a r6 = new com.tkay.basead.d.c$a
            r6.<init>()
            com.tkay.basead.d.c$a r6 = r6.a(r0)
            com.tkay.basead.d.c$a r6 = r6.b(r1)
            com.tkay.basead.d.c r6 = r6.a()
            r2.a(r6)
            java.lang.String r6 = "unit_type"
            java.lang.String r6 = com.tkay.core.api.TYInitMediation.getStringFromMap(r7, r6)
            boolean r7 = android.text.TextUtils.isEmpty(r6)
            if (r7 != 0) goto L7d
            com.tkay.basead.d.d r7 = r5.b
            r7.a(r6)
        L7d:
            return
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener b(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener c(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener d(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener e(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener f(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener g(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener h(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener i(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener j(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener k(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener l(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener m(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener n(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener o(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener p(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener q(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener r(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener s(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener t(com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    @Override
    public void destory() {
            r1 = this;
            com.tkay.basead.d.d r0 = r1.b
            if (r0 == 0) goto La
            r0.b()
            r0 = 0
            r1.b = r0
        La:
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
            java.lang.String r0 = ""
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
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public boolean initNetworkObjectByPlacementId(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            r0.a(r1, r2)
            r1 = 1
            return r1
    }

    @Override
    public boolean isAdReady() {
            r2 = this;
            com.tkay.basead.d.d r0 = r2.b
            if (r0 == 0) goto Lc
            boolean r0 = r0.c()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            if (r0 == 0) goto L1b
            java.util.Map<java.lang.String, java.lang.Object> r1 = r2.d
            if (r1 != 0) goto L1b
            com.tkay.basead.d.d r1 = r2.b
            java.util.Map r1 = com.tkay.basead.b.a(r1)
            r2.d = r1
        L1b:
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            r0.a(r1, r2)
            com.tkay.basead.d.d r1 = r0.b
            com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter$2 r2 = new com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter$2
            r2.<init>(r0)
            r1.a(r2)
            return
    }

    @Override
    public void show(android.app.Activity r5) {
            r4 = this;
            int r0 = com.tkay.core.common.l.d.g(r5)
            java.util.HashMap r1 = new java.util.HashMap
            r2 = 1
            r1.<init>(r2)
            java.lang.String r2 = r4.mScenario
            java.lang.String r3 = "extra_scenario"
            r1.put(r3, r2)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r2 = "extra_orientation"
            r1.put(r2, r0)
            com.tkay.basead.d.d r0 = r4.b
            com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter$1 r2 = new com.tkay.network.onlineapi.OnlineApiTYInterstitialAdapter$1
            r2.<init>(r4)
            r0.a(r2)
            com.tkay.basead.d.d r0 = r4.b
            if (r0 == 0) goto L2b
            r0.a(r5, r1)
        L2b:
            return
    }
}
