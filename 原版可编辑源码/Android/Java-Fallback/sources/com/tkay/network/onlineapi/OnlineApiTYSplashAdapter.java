package com.tkay.network.onlineapi;

public class OnlineApiTYSplashAdapter extends com.tkay.splashad.unitgroup.api.CustomSplashAdapter {
    com.tkay.basead.d.g a;
    com.tkay.core.common.f.i b;
    java.lang.String c;
    java.util.Map<java.lang.String, java.lang.Object> d;


    final class 2 implements com.tkay.basead.e.a {
        final com.tkay.network.onlineapi.OnlineApiTYSplashAdapter a;

        2(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onAdClick(int r2) {
                r1 = this;
                com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0 = r1.a
                com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
                if (r0 == 0) goto Lb
                r0.x(r2)
            Lb:
                com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r2 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r2 = com.tkay.network.onlineapi.OnlineApiTYSplashAdapter.k(r2)
                if (r2 == 0) goto L1c
                com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r2 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r2 = com.tkay.network.onlineapi.OnlineApiTYSplashAdapter.l(r2)
                r2.onSplashAdClicked()
            L1c:
                return
        }

        @Override
        public final void onAdClosed() {
                r1 = this;
                com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.onlineapi.OnlineApiTYSplashAdapter.i(r0)
                if (r0 == 0) goto L11
                com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.onlineapi.OnlineApiTYSplashAdapter.j(r0)
                r0.onSplashAdDismiss()
            L11:
                return
        }

        @Override
        public final void onAdShow() {
                r1 = this;
                com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.onlineapi.OnlineApiTYSplashAdapter.g(r0)
                if (r0 == 0) goto L11
                com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.onlineapi.OnlineApiTYSplashAdapter.h(r0)
                r0.onSplashAdShow()
            L11:
                return
        }

        @Override
        public final void onDeeplinkCallback(boolean r2) {
                r1 = this;
                com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.onlineapi.OnlineApiTYSplashAdapter.m(r0)
                if (r0 == 0) goto L11
                com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.onlineapi.OnlineApiTYSplashAdapter.n(r0)
                r0.onDeeplinkCallback(r2)
            L11:
                return
        }

        @Override
        public final void onShowFailed(com.tkay.basead.c.e r4) {
                r3 = this;
                com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0 = r3.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.onlineapi.OnlineApiTYSplashAdapter.o(r0)
                if (r0 == 0) goto L1f
                com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0 = r3.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.onlineapi.OnlineApiTYSplashAdapter.p(r0)
                java.lang.String r1 = r4.a()
                java.lang.String r4 = r4.b()
                java.lang.String r2 = "4006"
                com.tkay.core.api.AdError r4 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r1, r4)
                r0.onSplashAdShowFail(r4)
            L1f:
                return
        }
    }

    public OnlineApiTYSplashAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.tkay.core.api.TYCustomLoadListener a(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
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
            r0 = 5
            java.lang.String r1 = "orientation"
            boolean r2 = r7.containsKey(r1)
            r3 = 1
            if (r2 == 0) goto L2e
            java.lang.Object r1 = r7.get(r1)
            if (r1 == 0) goto L2e
            java.lang.String r1 = r1.toString()
            int r1 = java.lang.Integer.parseInt(r1)
            goto L2f
        L2e:
            r1 = r3
        L2f:
            java.lang.String r2 = "countdown"
            boolean r4 = r7.containsKey(r2)
            if (r4 == 0) goto L47
            java.lang.Object r2 = r7.get(r2)
            if (r2 == 0) goto L47
            java.lang.String r0 = r2.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            int r0 = r0 * 1000
        L47:
            java.lang.String r2 = "allows_skip"
            boolean r4 = r7.containsKey(r2)
            if (r4 == 0) goto L65
            java.lang.Object r2 = r7.get(r2)
            if (r2 == 0) goto L65
            java.lang.String r2 = r2.toString()
            int r2 = java.lang.Integer.parseInt(r2)
            if (r2 != 0) goto L60
            goto L65
        L60:
            if (r2 != r3) goto L64
            r3 = 0
            goto L65
        L64:
            r3 = r2
        L65:
            java.lang.String r2 = "basead_params"
            java.lang.Object r7 = r7.get(r2)
            com.tkay.core.common.f.i r7 = (com.tkay.core.common.f.i) r7
            r5.b = r7
            com.tkay.basead.d.g r7 = new com.tkay.basead.d.g
            com.tkay.basead.d.b$a r2 = com.tkay.basead.d.b.a.b
            com.tkay.core.common.f.i r4 = r5.b
            r7.<init>(r6, r2, r4)
            r5.a = r7
            com.tkay.basead.d.c$a r6 = new com.tkay.basead.d.c$a
            r6.<init>()
            com.tkay.basead.d.c$a r6 = r6.d(r1)
            com.tkay.basead.d.c$a r6 = r6.e(r0)
            com.tkay.basead.d.c$a r6 = r6.f(r3)
            com.tkay.basead.d.c r6 = r6.a()
            r7.a(r6)
            com.tkay.basead.d.g r6 = r5.a
            com.tkay.network.onlineapi.OnlineApiTYSplashAdapter$2 r7 = new com.tkay.network.onlineapi.OnlineApiTYSplashAdapter$2
            r7.<init>(r5)
            r6.a(r7)
            return
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener f(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener g(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener h(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener i(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener j(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener k(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener l(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener m(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener n(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener o(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener p(com.tkay.network.onlineapi.OnlineApiTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            com.tkay.basead.d.g r0 = r2.a
            r1 = 0
            if (r0 == 0) goto La
            r0.b()
            r2.a = r1
        La:
            r2.b = r1
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
    public boolean isAdReady() {
            r2 = this;
            com.tkay.basead.d.g r0 = r2.a
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
            com.tkay.basead.d.g r1 = r2.a
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
    public void loadCustomNetworkAd(android.content.Context r5, java.util.Map<java.lang.String, java.lang.Object> r6, java.util.Map<java.lang.String, java.lang.Object> r7) {
            r4 = this;
            java.lang.String r7 = "unit_id"
            java.lang.Object r0 = r6.get(r7)
            if (r0 == 0) goto L11
            java.lang.Object r7 = r6.get(r7)
            java.lang.String r7 = r7.toString()
            goto L13
        L11:
            java.lang.String r7 = ""
        L13:
            r4.c = r7
            r7 = 5
            java.lang.String r0 = "orientation"
            boolean r1 = r6.containsKey(r0)
            r2 = 1
            if (r1 == 0) goto L2e
            java.lang.Object r0 = r6.get(r0)
            if (r0 == 0) goto L2e
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            goto L2f
        L2e:
            r0 = r2
        L2f:
            java.lang.String r1 = "countdown"
            boolean r3 = r6.containsKey(r1)
            if (r3 == 0) goto L47
            java.lang.Object r1 = r6.get(r1)
            if (r1 == 0) goto L47
            java.lang.String r7 = r1.toString()
            int r7 = java.lang.Integer.parseInt(r7)
            int r7 = r7 * 1000
        L47:
            java.lang.String r1 = "allows_skip"
            boolean r3 = r6.containsKey(r1)
            if (r3 == 0) goto L65
            java.lang.Object r1 = r6.get(r1)
            if (r1 == 0) goto L65
            java.lang.String r1 = r1.toString()
            int r1 = java.lang.Integer.parseInt(r1)
            if (r1 != 0) goto L60
            goto L65
        L60:
            if (r1 != r2) goto L64
            r2 = 0
            goto L65
        L64:
            r2 = r1
        L65:
            java.lang.String r1 = "basead_params"
            java.lang.Object r6 = r6.get(r1)
            com.tkay.core.common.f.i r6 = (com.tkay.core.common.f.i) r6
            r4.b = r6
            com.tkay.basead.d.g r6 = new com.tkay.basead.d.g
            com.tkay.basead.d.b$a r1 = com.tkay.basead.d.b.a.b
            com.tkay.core.common.f.i r3 = r4.b
            r6.<init>(r5, r1, r3)
            r4.a = r6
            com.tkay.basead.d.c$a r5 = new com.tkay.basead.d.c$a
            r5.<init>()
            com.tkay.basead.d.c$a r5 = r5.d(r0)
            com.tkay.basead.d.c$a r5 = r5.e(r7)
            com.tkay.basead.d.c$a r5 = r5.f(r2)
            com.tkay.basead.d.c r5 = r5.a()
            r6.a(r5)
            com.tkay.basead.d.g r5 = r4.a
            com.tkay.network.onlineapi.OnlineApiTYSplashAdapter$2 r6 = new com.tkay.network.onlineapi.OnlineApiTYSplashAdapter$2
            r6.<init>(r4)
            r5.a(r6)
            com.tkay.basead.d.g r5 = r4.a
            com.tkay.network.onlineapi.OnlineApiTYSplashAdapter$1 r6 = new com.tkay.network.onlineapi.OnlineApiTYSplashAdapter$1
            r6.<init>(r4)
            r5.a(r6)
            return
    }

    @Override
    public void show(android.app.Activity r1, android.view.ViewGroup r2) {
            r0 = this;
            com.tkay.basead.d.g r1 = r0.a
            if (r1 == 0) goto L14
            boolean r1 = r0.isCustomSkipView()
            if (r1 == 0) goto Lf
            com.tkay.basead.d.g r1 = r0.a
            r1.a()
        Lf:
            com.tkay.basead.d.g r1 = r0.a
            r1.a(r2)
        L14:
            return
    }
}
