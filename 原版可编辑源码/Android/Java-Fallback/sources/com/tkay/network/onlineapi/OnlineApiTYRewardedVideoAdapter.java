package com.tkay.network.onlineapi;

public class OnlineApiTYRewardedVideoAdapter extends com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter {
    com.tkay.core.common.f.i a;
    com.tkay.basead.d.f b;
    java.lang.String c;
    java.util.Map<java.lang.String, java.lang.Object> d;



    public OnlineApiTYRewardedVideoAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener a(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    private void a(android.content.Context r5, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r4 = this;
            java.lang.String r0 = "unit_id"
            java.lang.Object r1 = r6.get(r0)
            if (r1 == 0) goto L11
            java.lang.Object r0 = r6.get(r0)
            java.lang.String r0 = r0.toString()
            goto L13
        L11:
            java.lang.String r0 = ""
        L13:
            r4.c = r0
            r0 = 0
            r1 = -1
            java.lang.String r2 = "v_m"
            boolean r3 = r6.containsKey(r2)
            if (r3 == 0) goto L2d
            java.lang.Object r2 = r6.get(r2)
            if (r2 == 0) goto L2d
            java.lang.String r0 = r2.toString()
            int r0 = java.lang.Integer.parseInt(r0)
        L2d:
            java.lang.String r2 = "s_c_t"
            boolean r3 = r6.containsKey(r2)
            if (r3 == 0) goto L43
            java.lang.Object r2 = r6.get(r2)
            if (r2 == 0) goto L43
            java.lang.String r1 = r2.toString()
            int r1 = java.lang.Integer.parseInt(r1)
        L43:
            java.lang.String r2 = "basead_params"
            java.lang.Object r6 = r6.get(r2)
            com.tkay.core.common.f.i r6 = (com.tkay.core.common.f.i) r6
            r4.a = r6
            com.tkay.basead.d.f r6 = new com.tkay.basead.d.f
            com.tkay.basead.d.b$a r2 = com.tkay.basead.d.b.a.b
            com.tkay.core.common.f.i r3 = r4.a
            r6.<init>(r5, r2, r3)
            r4.b = r6
            com.tkay.basead.d.c$a r5 = new com.tkay.basead.d.c$a
            r5.<init>()
            com.tkay.basead.d.c$a r5 = r5.a(r0)
            com.tkay.basead.d.c$a r5 = r5.b(r1)
            com.tkay.basead.d.c r5 = r5.a()
            r6.a(r5)
            return
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener b(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener c(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener d(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener e(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener f(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener g(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener h(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener i(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener j(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener k(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener l(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener m(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener n(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener o(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener p(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener q(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener r(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener s(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener t(com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    @Override
    public void destory() {
            r1 = this;
            com.tkay.basead.d.f r0 = r1.b
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
            com.tkay.basead.d.f r0 = r2.b
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
            com.tkay.basead.d.f r1 = r2.b
            java.util.Map r1 = com.tkay.basead.b.a(r1)
            r2.d = r1
        L1b:
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            r0.a(r1, r2)
            com.tkay.basead.d.f r1 = r0.b
            com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter$2 r2 = new com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter$2
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
            com.tkay.basead.d.f r0 = r4.b
            com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter$1 r2 = new com.tkay.network.onlineapi.OnlineApiTYRewardedVideoAdapter$1
            r2.<init>(r4)
            r0.a(r2)
            com.tkay.basead.d.f r0 = r4.b
            if (r0 == 0) goto L2b
            r0.a(r5, r1)
        L2b:
            return
    }
}
