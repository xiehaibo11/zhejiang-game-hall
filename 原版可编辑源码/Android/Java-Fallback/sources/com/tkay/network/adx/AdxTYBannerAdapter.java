package com.tkay.network.adx;

public class AdxTYBannerAdapter extends com.tkay.banner.unitgroup.api.CustomBannerAdapter {
    com.tkay.core.common.f.i a;
    java.util.Map<java.lang.String, java.lang.Object> b;
    private com.tkay.basead.d.a c;
    private android.view.View d;


    public AdxTYBannerAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.view.View a(com.tkay.network.adx.AdxTYBannerAdapter r0, android.view.View r1) {
            r0.d = r1
            return r1
    }

    static com.tkay.core.api.TYCustomLoadListener a(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    private void a(android.content.Context r6, java.util.Map<java.lang.String, java.lang.Object> r7, java.util.Map<java.lang.String, java.lang.Object> r8) {
            r5 = this;
            java.lang.String r0 = "close_button"
            boolean r1 = r7.containsKey(r0)
            r2 = 0
            if (r1 == 0) goto L18
            java.lang.Object r0 = r7.get(r0)
            if (r0 == 0) goto L18
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            goto L19
        L18:
            r0 = r2
        L19:
            java.lang.String r1 = "size"
            boolean r3 = r7.containsKey(r1)
            if (r3 == 0) goto L2c
            java.lang.Object r1 = r7.get(r1)
            if (r1 == 0) goto L2c
            java.lang.String r1 = r1.toString()
            goto L2e
        L2c:
            java.lang.String r1 = "320x50"
        L2e:
            if (r8 == 0) goto L4a
            java.lang.String r3 = "key_height"
            boolean r4 = r8.containsKey(r3)
            if (r4 == 0) goto L4a
            java.lang.Object r8 = r8.get(r3)
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L46
            double r2 = java.lang.Double.parseDouble(r8)     // Catch: java.lang.Throwable -> L46
            int r2 = (int) r2
            goto L4a
        L46:
            r8 = move-exception
            r8.printStackTrace()
        L4a:
            java.lang.String r8 = "basead_params"
            java.lang.Object r7 = r7.get(r8)
            com.tkay.core.common.f.i r7 = (com.tkay.core.common.f.i) r7
            r5.a = r7
            com.tkay.basead.d.a r7 = new com.tkay.basead.d.a
            com.tkay.basead.d.b$a r8 = com.tkay.basead.d.b.a.a
            com.tkay.core.common.f.i r3 = r5.a
            r7.<init>(r6, r8, r3)
            r5.c = r7
            com.tkay.basead.d.c$a r6 = new com.tkay.basead.d.c$a
            r6.<init>()
            com.tkay.basead.d.c$a r6 = r6.c(r0)
            com.tkay.basead.d.c$a r6 = r6.b(r1)
            com.tkay.basead.d.c$a r6 = r6.g(r2)
            com.tkay.basead.d.c r6 = r6.a()
            r7.a(r6)
            return
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.basead.d.a c(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.basead.d.a r0 = r0.c
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener e(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener f(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener g(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener h(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener i(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener j(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener k(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener l(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static android.view.View m(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            android.view.View r0 = r0.d
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener n(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener o(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener p(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener q(com.tkay.network.adx.AdxTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            r0 = 0
            r2.d = r0
            com.tkay.basead.d.a r1 = r2.c
            if (r1 == 0) goto L11
            r1.a(r0)
            com.tkay.basead.d.a r1 = r2.c
            r1.b()
            r2.c = r0
        L11:
            return
    }

    @Override
    public android.view.View getBannerView() {
            r1 = this;
            android.view.View r0 = r1.d
            return r0
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
            r0.fillBannerData(r3)
            if (r5 == 0) goto L1c
            r5.onSuccess(r0)
        L1c:
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
    public void loadCustomNetworkAd(android.content.Context r6, java.util.Map<java.lang.String, java.lang.Object> r7, java.util.Map<java.lang.String, java.lang.Object> r8) {
            r5 = this;
            java.lang.String r0 = "close_button"
            boolean r1 = r7.containsKey(r0)
            r2 = 0
            if (r1 == 0) goto L18
            java.lang.Object r0 = r7.get(r0)
            if (r0 == 0) goto L18
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            goto L19
        L18:
            r0 = r2
        L19:
            java.lang.String r1 = "size"
            boolean r3 = r7.containsKey(r1)
            if (r3 == 0) goto L2c
            java.lang.Object r1 = r7.get(r1)
            if (r1 == 0) goto L2c
            java.lang.String r1 = r1.toString()
            goto L2e
        L2c:
            java.lang.String r1 = "320x50"
        L2e:
            if (r8 == 0) goto L4a
            java.lang.String r3 = "key_height"
            boolean r4 = r8.containsKey(r3)
            if (r4 == 0) goto L4a
            java.lang.Object r8 = r8.get(r3)
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L46
            double r2 = java.lang.Double.parseDouble(r8)     // Catch: java.lang.Throwable -> L46
            int r2 = (int) r2
            goto L4a
        L46:
            r8 = move-exception
            r8.printStackTrace()
        L4a:
            java.lang.String r8 = "basead_params"
            java.lang.Object r7 = r7.get(r8)
            com.tkay.core.common.f.i r7 = (com.tkay.core.common.f.i) r7
            r5.a = r7
            com.tkay.basead.d.a r7 = new com.tkay.basead.d.a
            com.tkay.basead.d.b$a r8 = com.tkay.basead.d.b.a.a
            com.tkay.core.common.f.i r3 = r5.a
            r7.<init>(r6, r8, r3)
            r5.c = r7
            com.tkay.basead.d.c$a r6 = new com.tkay.basead.d.c$a
            r6.<init>()
            com.tkay.basead.d.c$a r6 = r6.c(r0)
            com.tkay.basead.d.c$a r6 = r6.b(r1)
            com.tkay.basead.d.c$a r6 = r6.g(r2)
            com.tkay.basead.d.c r6 = r6.a()
            r7.a(r6)
            com.tkay.basead.d.a r6 = r5.c
            com.tkay.network.adx.AdxTYBannerAdapter$1 r7 = new com.tkay.network.adx.AdxTYBannerAdapter$1
            r7.<init>(r5)
            r6.a(r7)
            return
    }
}
