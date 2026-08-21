package com.tkay.network.adx;

public class AdxTYInterstitialAdapter extends com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter {
    protected com.tkay.core.common.f.i a;
    protected com.tkay.basead.d.d b;
    java.util.Map<java.lang.String, java.lang.Object> c;



    public AdxTYInterstitialAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener a(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    private void a(android.content.Context r6, java.util.Map<java.lang.String, java.lang.Object> r7) {
            r5 = this;
            java.lang.String r0 = "v_m"
            boolean r1 = r7.containsKey(r0)
            if (r1 == 0) goto L17
            java.lang.Object r0 = r7.get(r0)
            if (r0 == 0) goto L17
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            goto L18
        L17:
            r0 = 0
        L18:
            java.lang.String r1 = "s_c_t"
            boolean r2 = r7.containsKey(r1)
            if (r2 == 0) goto L2f
            java.lang.Object r1 = r7.get(r1)
            if (r1 == 0) goto L2f
            java.lang.String r1 = r1.toString()
            int r1 = java.lang.Integer.parseInt(r1)
            goto L30
        L2f:
            r1 = -1
        L30:
            java.lang.String r2 = "basead_params"
            java.lang.Object r2 = r7.get(r2)
            com.tkay.core.common.f.i r2 = (com.tkay.core.common.f.i) r2
            r5.a = r2
            com.tkay.basead.d.d r2 = new com.tkay.basead.d.d
            com.tkay.basead.d.b$a r3 = com.tkay.basead.d.b.a.a
            com.tkay.core.common.f.i r4 = r5.a
            r2.<init>(r6, r3, r4)
            r5.b = r2
            java.lang.String r6 = "inter_type"
            boolean r2 = r7.containsKey(r6)
            if (r2 == 0) goto L58
            java.lang.Object r6 = r7.get(r6)
            if (r6 == 0) goto L58
            java.lang.String r6 = r6.toString()
            goto L5a
        L58:
            java.lang.String r6 = "1"
        L5a:
            com.tkay.basead.d.d r7 = r5.b
            com.tkay.basead.d.c$a r2 = new com.tkay.basead.d.c$a
            r2.<init>()
            com.tkay.basead.d.c$a r6 = r2.a(r6)
            com.tkay.basead.d.c$a r6 = r6.a(r0)
            com.tkay.basead.d.c$a r6 = r6.b(r1)
            com.tkay.basead.d.c r6 = r6.a()
            r7.a(r6)
            return
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener b(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener c(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener d(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener e(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener f(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener g(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener h(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener i(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener j(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener k(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener l(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener m(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener n(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener o(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener p(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener q(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener r(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener s(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener t(com.tkay.network.adx.AdxTYInterstitialAdapter r0) {
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
    public void getBidRequestInfo(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4, com.tkay.core.api.TYBidRequestInfoListener r5) {
            r1 = this;
            java.lang.String r4 = "basead_params"
            java.lang.Object r4 = r3.get(r4)
            com.tkay.core.common.f.i r4 = (com.tkay.core.common.f.i) r4
            com.tkay.network.adx.AdxBidRequestInfo r0 = new com.tkay.network.adx.AdxBidRequestInfo
            if (r4 == 0) goto Lf
            java.lang.String r4 = r4.b
            goto L11
        Lf:
            java.lang.String r4 = ""
        L11:
            r0.<init>(r2, r4)
            r0.fillInterstitial(r3)
            if (r5 == 0) goto L1c
            r5.onSuccess(r0)
        L1c:
            return
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Object> getNetworkInfoMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.c
            return r0
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            com.tkay.network.adx.AdxTYInitManager r0 = com.tkay.network.adx.AdxTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkName()
            return r0
    }

    @Override
    public java.lang.String getNetworkPlacementId() {
            r1 = this;
            com.tkay.core.common.f.i r0 = r1.a
            if (r0 == 0) goto L7
            java.lang.String r0 = r0.b
            return r0
        L7:
            java.lang.String r0 = ""
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
            java.util.Map<java.lang.String, java.lang.Object> r1 = r2.c
            if (r1 != 0) goto L1b
            com.tkay.basead.d.d r1 = r2.b
            java.util.Map r1 = com.tkay.basead.b.a(r1)
            r2.c = r1
        L1b:
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            r0.a(r1, r2)
            com.tkay.basead.d.d r1 = r0.b
            com.tkay.network.adx.AdxTYInterstitialAdapter$2 r2 = new com.tkay.network.adx.AdxTYInterstitialAdapter$2
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
            com.tkay.network.adx.AdxTYInterstitialAdapter$1 r2 = new com.tkay.network.adx.AdxTYInterstitialAdapter$1
            com.tkay.core.common.f.h r3 = r0.e()
            r2.<init>(r4, r3)
            r0.a(r2)
            com.tkay.basead.d.d r0 = r4.b
            if (r0 == 0) goto L2f
            r0.a(r5, r1)
        L2f:
            return
    }
}
