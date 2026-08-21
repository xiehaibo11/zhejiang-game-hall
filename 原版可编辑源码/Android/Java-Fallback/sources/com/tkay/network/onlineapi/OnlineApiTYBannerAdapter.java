package com.tkay.network.onlineapi;

public class OnlineApiTYBannerAdapter extends com.tkay.banner.unitgroup.api.CustomBannerAdapter {
    com.tkay.core.common.f.i a;
    java.lang.String b;
    java.util.Map<java.lang.String, java.lang.Object> c;
    private com.tkay.basead.d.a d;
    private android.view.View e;


    final class 2 implements com.tkay.basead.e.a {
        final com.tkay.network.onlineapi.OnlineApiTYBannerAdapter a;

        2(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onAdClick(int r2) {
                r1 = this;
                com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0 = r1.a
                com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
                if (r0 == 0) goto Lb
                r0.x(r2)
            Lb:
                com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r2 = r1.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r2 = com.tkay.network.onlineapi.OnlineApiTYBannerAdapter.n(r2)
                if (r2 == 0) goto L1c
                com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r2 = r1.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r2 = com.tkay.network.onlineapi.OnlineApiTYBannerAdapter.o(r2)
                r2.onBannerAdClicked()
            L1c:
                return
        }

        @Override
        public final void onAdClosed() {
                r1 = this;
                com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0 = r1.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = com.tkay.network.onlineapi.OnlineApiTYBannerAdapter.l(r0)
                if (r0 == 0) goto L11
                com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0 = r1.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = com.tkay.network.onlineapi.OnlineApiTYBannerAdapter.m(r0)
                r0.onBannerAdClose()
            L11:
                return
        }

        @Override
        public final void onAdShow() {
                r1 = this;
                com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0 = r1.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = com.tkay.network.onlineapi.OnlineApiTYBannerAdapter.j(r0)
                if (r0 == 0) goto L11
                com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0 = r1.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = com.tkay.network.onlineapi.OnlineApiTYBannerAdapter.k(r0)
                r0.onBannerAdShow()
            L11:
                return
        }

        @Override
        public final void onDeeplinkCallback(boolean r2) {
                r1 = this;
                com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0 = r1.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = com.tkay.network.onlineapi.OnlineApiTYBannerAdapter.p(r0)
                if (r0 == 0) goto L11
                com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0 = r1.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = com.tkay.network.onlineapi.OnlineApiTYBannerAdapter.q(r0)
                r0.onDeeplinkCallback(r2)
            L11:
                return
        }

        @Override
        public final void onShowFailed(com.tkay.basead.c.e r1) {
                r0 = this;
                return
        }
    }

    public OnlineApiTYBannerAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.view.View a(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0, android.view.View r1) {
            r0.e = r1
            return r1
    }

    static com.tkay.core.api.TYCustomLoadListener a(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
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
            r4.b = r0
            r0 = 0
            java.lang.String r1 = "close_button"
            boolean r2 = r6.containsKey(r1)
            if (r2 == 0) goto L2c
            java.lang.Object r1 = r6.get(r1)
            if (r1 == 0) goto L2c
            java.lang.String r0 = r1.toString()
            int r0 = java.lang.Integer.parseInt(r0)
        L2c:
            java.lang.String r1 = "size"
            boolean r2 = r6.containsKey(r1)
            if (r2 == 0) goto L3f
            java.lang.Object r1 = r6.get(r1)
            if (r1 == 0) goto L3f
            java.lang.String r1 = r1.toString()
            goto L41
        L3f:
            java.lang.String r1 = "320x50"
        L41:
            java.lang.String r2 = "basead_params"
            java.lang.Object r6 = r6.get(r2)
            com.tkay.core.common.f.i r6 = (com.tkay.core.common.f.i) r6
            r4.a = r6
            com.tkay.basead.d.a r6 = new com.tkay.basead.d.a
            com.tkay.basead.d.b$a r2 = com.tkay.basead.d.b.a.b
            com.tkay.core.common.f.i r3 = r4.a
            r6.<init>(r5, r2, r3)
            r4.d = r6
            com.tkay.basead.d.c$a r5 = new com.tkay.basead.d.c$a
            r5.<init>()
            com.tkay.basead.d.c$a r5 = r5.c(r0)
            com.tkay.basead.d.c$a r5 = r5.b(r1)
            com.tkay.basead.d.c r5 = r5.a()
            r6.a(r5)
            com.tkay.basead.d.a r5 = r4.d
            com.tkay.network.onlineapi.OnlineApiTYBannerAdapter$2 r6 = new com.tkay.network.onlineapi.OnlineApiTYBannerAdapter$2
            r6.<init>(r4)
            r5.a(r6)
            return
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.basead.d.a c(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.basead.d.a r0 = r0.d
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static android.view.View e(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            android.view.View r0 = r0.e
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener f(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener g(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener h(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener i(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener j(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener k(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener l(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener m(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener n(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener o(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener p(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener q(com.tkay.network.onlineapi.OnlineApiTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            r0 = 0
            r2.e = r0
            com.tkay.basead.d.a r1 = r2.d
            if (r1 == 0) goto L11
            r1.a(r0)
            com.tkay.basead.d.a r1 = r2.d
            r1.b()
            r2.d = r0
        L11:
            return
    }

    @Override
    public android.view.View getBannerView() {
            r1 = this;
            android.view.View r0 = r1.e
            if (r0 != 0) goto L16
            com.tkay.basead.d.a r0 = r1.d
            if (r0 == 0) goto L16
            boolean r0 = r0.c()
            if (r0 == 0) goto L16
            com.tkay.basead.d.a r0 = r1.d
            android.view.View r0 = r0.a()
            r1.e = r0
        L16:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.c
            if (r0 != 0) goto L22
            com.tkay.basead.d.a r0 = r1.d
            java.util.Map r0 = com.tkay.basead.b.a(r0)
            r1.c = r0
        L22:
            android.view.View r0 = r1.e
            return r0
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
            java.lang.String r0 = ""
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
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r4, java.util.Map<java.lang.String, java.lang.Object> r5, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r3 = this;
            java.lang.String r6 = "unit_id"
            java.lang.Object r0 = r5.get(r6)
            if (r0 == 0) goto L11
            java.lang.Object r6 = r5.get(r6)
            java.lang.String r6 = r6.toString()
            goto L13
        L11:
            java.lang.String r6 = ""
        L13:
            r3.b = r6
            r6 = 0
            java.lang.String r0 = "close_button"
            boolean r1 = r5.containsKey(r0)
            if (r1 == 0) goto L2c
            java.lang.Object r0 = r5.get(r0)
            if (r0 == 0) goto L2c
            java.lang.String r6 = r0.toString()
            int r6 = java.lang.Integer.parseInt(r6)
        L2c:
            java.lang.String r0 = "size"
            boolean r1 = r5.containsKey(r0)
            if (r1 == 0) goto L3f
            java.lang.Object r0 = r5.get(r0)
            if (r0 == 0) goto L3f
            java.lang.String r0 = r0.toString()
            goto L41
        L3f:
            java.lang.String r0 = "320x50"
        L41:
            java.lang.String r1 = "basead_params"
            java.lang.Object r5 = r5.get(r1)
            com.tkay.core.common.f.i r5 = (com.tkay.core.common.f.i) r5
            r3.a = r5
            com.tkay.basead.d.a r5 = new com.tkay.basead.d.a
            com.tkay.basead.d.b$a r1 = com.tkay.basead.d.b.a.b
            com.tkay.core.common.f.i r2 = r3.a
            r5.<init>(r4, r1, r2)
            r3.d = r5
            com.tkay.basead.d.c$a r4 = new com.tkay.basead.d.c$a
            r4.<init>()
            com.tkay.basead.d.c$a r4 = r4.c(r6)
            com.tkay.basead.d.c$a r4 = r4.b(r0)
            com.tkay.basead.d.c r4 = r4.a()
            r5.a(r4)
            com.tkay.basead.d.a r4 = r3.d
            com.tkay.network.onlineapi.OnlineApiTYBannerAdapter$2 r5 = new com.tkay.network.onlineapi.OnlineApiTYBannerAdapter$2
            r5.<init>(r3)
            r4.a(r5)
            com.tkay.basead.d.a r4 = r3.d
            com.tkay.network.onlineapi.OnlineApiTYBannerAdapter$1 r5 = new com.tkay.network.onlineapi.OnlineApiTYBannerAdapter$1
            r5.<init>(r3)
            r4.a(r5)
            return
    }
}
