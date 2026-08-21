package com.tkay.network.myoffer;

public class MyOfferTYBannerAdapter extends com.tkay.banner.unitgroup.api.CustomBannerAdapter {
    java.lang.String a;
    com.tkay.core.common.f.i b;
    java.util.Map<java.lang.String, java.lang.Object> c;
    private com.tkay.basead.f.b d;
    private android.view.View e;
    private boolean f;



    public MyOfferTYBannerAdapter() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.f = r0
            return
    }

    static android.view.View a(com.tkay.network.myoffer.MyOfferTYBannerAdapter r0, android.view.View r1) {
            r0.e = r1
            return r1
    }

    static com.tkay.basead.f.b a(com.tkay.network.myoffer.MyOfferTYBannerAdapter r0) {
            com.tkay.basead.f.b r0 = r0.d
            return r0
    }

    private void a(android.content.Context r5) {
            r4 = this;
            com.tkay.basead.f.b r0 = new com.tkay.basead.f.b
            com.tkay.core.common.f.i r1 = r4.b
            java.lang.String r2 = r4.a
            boolean r3 = r4.f
            r0.<init>(r5, r1, r2, r3)
            r4.d = r0
            com.tkay.network.myoffer.MyOfferTYBannerAdapter$2 r5 = new com.tkay.network.myoffer.MyOfferTYBannerAdapter$2
            r5.<init>(r4)
            r0.a(r5)
            return
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.myoffer.MyOfferTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static android.view.View c(com.tkay.network.myoffer.MyOfferTYBannerAdapter r0) {
            android.view.View r0 = r0.e
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.myoffer.MyOfferTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.myoffer.MyOfferTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener f(com.tkay.network.myoffer.MyOfferTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener g(com.tkay.network.myoffer.MyOfferTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener h(com.tkay.network.myoffer.MyOfferTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener i(com.tkay.network.myoffer.MyOfferTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener j(com.tkay.network.myoffer.MyOfferTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener k(com.tkay.network.myoffer.MyOfferTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener l(com.tkay.network.myoffer.MyOfferTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener m(com.tkay.network.myoffer.MyOfferTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            r0 = 0
            r2.e = r0
            com.tkay.basead.f.b r1 = r2.d
            if (r1 == 0) goto L11
            r1.a(r0)
            com.tkay.basead.f.b r1 = r2.d
            r1.c()
            r2.d = r0
        L11:
            return
    }

    @Override
    public android.view.View getBannerView() {
            r1 = this;
            android.view.View r0 = r1.e
            if (r0 != 0) goto L22
            com.tkay.basead.f.b r0 = r1.d
            if (r0 == 0) goto L22
            boolean r0 = r0.a()
            if (r0 == 0) goto L22
            com.tkay.basead.f.b r0 = r1.d
            android.view.View r0 = r0.b()
            r1.e = r0
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.c
            if (r0 != 0) goto L22
            com.tkay.basead.f.b r0 = r1.d
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
    public boolean initNetworkObjectByPlacementId(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
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
            java.lang.Object r4 = r3.get(r4)
            com.tkay.core.common.f.i r4 = (com.tkay.core.common.f.i) r4
            r1.b = r4
        L22:
            java.lang.String r4 = "isDefaultOffer"
            boolean r0 = r3.containsKey(r4)
            if (r0 == 0) goto L36
            java.lang.Object r3 = r3.get(r4)
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            r1.f = r3
        L36:
            r1.a(r2)
            r2 = 1
            return r2
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
            r1.b = r3
        L22:
            r1.a(r2)
            com.tkay.basead.f.b r2 = r1.d
            com.tkay.network.myoffer.MyOfferTYBannerAdapter$1 r3 = new com.tkay.network.myoffer.MyOfferTYBannerAdapter$1
            r3.<init>(r1)
            r2.a(r3)
            return
    }
}
