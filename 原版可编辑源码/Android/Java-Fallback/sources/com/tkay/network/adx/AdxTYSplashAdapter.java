package com.tkay.network.adx;

public class AdxTYSplashAdapter extends com.tkay.splashad.unitgroup.api.CustomSplashAdapter {
    com.tkay.basead.d.g a;
    com.tkay.core.common.f.i b;
    java.util.Map<java.lang.String, java.lang.Object> c;



    public AdxTYSplashAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.tkay.core.api.TYCustomLoadListener a(com.tkay.network.adx.AdxTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    private void a(android.content.Context r6, java.util.Map<java.lang.String, java.lang.Object> r7) {
            r5 = this;
            java.lang.String r0 = "orientation"
            boolean r1 = r7.containsKey(r0)
            r2 = 1
            if (r1 == 0) goto L18
            java.lang.Object r0 = r7.get(r0)
            if (r0 == 0) goto L18
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            goto L19
        L18:
            r0 = r2
        L19:
            java.lang.String r1 = "countdown"
            boolean r3 = r7.containsKey(r1)
            if (r3 == 0) goto L32
            java.lang.Object r1 = r7.get(r1)
            if (r1 == 0) goto L32
            java.lang.String r1 = r1.toString()
            int r1 = java.lang.Integer.parseInt(r1)
            int r1 = r1 * 1000
            goto L33
        L32:
            r1 = 5
        L33:
            java.lang.String r3 = "allows_skip"
            boolean r4 = r7.containsKey(r3)
            if (r4 == 0) goto L51
            java.lang.Object r3 = r7.get(r3)
            if (r3 == 0) goto L51
            java.lang.String r3 = r3.toString()
            int r3 = java.lang.Integer.parseInt(r3)
            if (r3 != 0) goto L4c
            goto L51
        L4c:
            if (r3 != r2) goto L50
            r2 = 0
            goto L51
        L50:
            r2 = r3
        L51:
            java.lang.String r3 = "basead_params"
            java.lang.Object r7 = r7.get(r3)
            com.tkay.core.common.f.i r7 = (com.tkay.core.common.f.i) r7
            r5.b = r7
            com.tkay.basead.d.g r7 = new com.tkay.basead.d.g
            com.tkay.basead.d.b$a r3 = com.tkay.basead.d.b.a.a
            com.tkay.core.common.f.i r4 = r5.b
            r7.<init>(r6, r3, r4)
            r5.a = r7
            com.tkay.basead.d.c$a r6 = new com.tkay.basead.d.c$a
            r6.<init>()
            com.tkay.basead.d.c$a r6 = r6.d(r0)
            com.tkay.basead.d.c$a r6 = r6.e(r1)
            com.tkay.basead.d.c$a r6 = r6.f(r2)
            com.tkay.basead.d.c r6 = r6.a()
            r7.a(r6)
            return
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.adx.AdxTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.adx.AdxTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.adx.AdxTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.adx.AdxTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener f(com.tkay.network.adx.AdxTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener g(com.tkay.network.adx.AdxTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener h(com.tkay.network.adx.AdxTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener i(com.tkay.network.adx.AdxTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener j(com.tkay.network.adx.AdxTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener k(com.tkay.network.adx.AdxTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener l(com.tkay.network.adx.AdxTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener m(com.tkay.network.adx.AdxTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener n(com.tkay.network.adx.AdxTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener o(com.tkay.network.adx.AdxTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener p(com.tkay.network.adx.AdxTYSplashAdapter r0) {
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
    public void getBidRequestInfo(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBidRequestInfoListener r4) {
            r0 = this;
            java.lang.String r3 = "basead_params"
            java.lang.Object r2 = r2.get(r3)
            com.tkay.core.common.f.i r2 = (com.tkay.core.common.f.i) r2
            com.tkay.network.adx.AdxBidRequestInfo r3 = new com.tkay.network.adx.AdxBidRequestInfo
            if (r2 == 0) goto Lf
            java.lang.String r2 = r2.b
            goto L11
        Lf:
            java.lang.String r2 = ""
        L11:
            r3.<init>(r1, r2)
            r3.fillSplashData()
            if (r4 == 0) goto L1c
            r4.onSuccess(r3)
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
            com.tkay.core.common.f.i r0 = r1.b
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
            java.util.Map<java.lang.String, java.lang.Object> r1 = r2.c
            if (r1 != 0) goto L1b
            com.tkay.basead.d.g r1 = r2.a
            java.util.Map r1 = com.tkay.basead.b.a(r1)
            r2.c = r1
        L1b:
            return r0
    }

    @Override
    public boolean isSupportCustomSkipView() {
            r1 = this;
            com.tkay.basead.d.g r0 = r1.a
            if (r0 == 0) goto Lc
            boolean r0 = r0.f()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r5, java.util.Map<java.lang.String, java.lang.Object> r6, java.util.Map<java.lang.String, java.lang.Object> r7) {
            r4 = this;
            java.lang.String r7 = "orientation"
            boolean r0 = r6.containsKey(r7)
            r1 = 1
            if (r0 == 0) goto L18
            java.lang.Object r7 = r6.get(r7)
            if (r7 == 0) goto L18
            java.lang.String r7 = r7.toString()
            int r7 = java.lang.Integer.parseInt(r7)
            goto L19
        L18:
            r7 = r1
        L19:
            java.lang.String r0 = "countdown"
            boolean r2 = r6.containsKey(r0)
            if (r2 == 0) goto L32
            java.lang.Object r0 = r6.get(r0)
            if (r0 == 0) goto L32
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            int r0 = r0 * 1000
            goto L33
        L32:
            r0 = 5
        L33:
            java.lang.String r2 = "allows_skip"
            boolean r3 = r6.containsKey(r2)
            if (r3 == 0) goto L51
            java.lang.Object r2 = r6.get(r2)
            if (r2 == 0) goto L51
            java.lang.String r2 = r2.toString()
            int r2 = java.lang.Integer.parseInt(r2)
            if (r2 != 0) goto L4c
            goto L51
        L4c:
            if (r2 != r1) goto L50
            r1 = 0
            goto L51
        L50:
            r1 = r2
        L51:
            java.lang.String r2 = "basead_params"
            java.lang.Object r6 = r6.get(r2)
            com.tkay.core.common.f.i r6 = (com.tkay.core.common.f.i) r6
            r4.b = r6
            com.tkay.basead.d.g r6 = new com.tkay.basead.d.g
            com.tkay.basead.d.b$a r2 = com.tkay.basead.d.b.a.a
            com.tkay.core.common.f.i r3 = r4.b
            r6.<init>(r5, r2, r3)
            r4.a = r6
            com.tkay.basead.d.c$a r5 = new com.tkay.basead.d.c$a
            r5.<init>()
            com.tkay.basead.d.c$a r5 = r5.d(r7)
            com.tkay.basead.d.c$a r5 = r5.e(r0)
            com.tkay.basead.d.c$a r5 = r5.f(r1)
            com.tkay.basead.d.c r5 = r5.a()
            r6.a(r5)
            com.tkay.basead.d.g r5 = r4.a
            com.tkay.network.adx.AdxTYSplashAdapter$1 r6 = new com.tkay.network.adx.AdxTYSplashAdapter$1
            r6.<init>(r4)
            r5.a(r6)
            return
    }

    @Override
    public void show(android.app.Activity r3, android.view.ViewGroup r4) {
            r2 = this;
            com.tkay.basead.d.g r3 = r2.a
            if (r3 == 0) goto L20
            com.tkay.network.adx.AdxTYSplashAdapter$2 r0 = new com.tkay.network.adx.AdxTYSplashAdapter$2
            com.tkay.core.common.f.h r1 = r3.e()
            r0.<init>(r2, r1)
            r3.a(r0)
            boolean r3 = r2.isCustomSkipView()
            if (r3 == 0) goto L1b
            com.tkay.basead.d.g r3 = r2.a
            r3.a()
        L1b:
            com.tkay.basead.d.g r3 = r2.a
            r3.a(r4)
        L20:
            return
    }
}
