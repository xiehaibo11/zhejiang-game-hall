package com.tkay.network.myoffer;

public class MyOfferTYAdapter extends com.tkay.nativead.unitgroup.api.CustomNativeAdapter {
    com.tkay.basead.f.e a;
    com.tkay.core.common.f.i b;
    private java.lang.String c;
    private boolean d;


    public MyOfferTYAdapter() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.c = r0
            r0 = 0
            r1.d = r0
            return
    }

    static com.tkay.core.api.TYCustomLoadListener a(com.tkay.network.myoffer.MyOfferTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    private void a(android.content.Context r5) {
            r4 = this;
            com.tkay.basead.f.e r0 = new com.tkay.basead.f.e
            com.tkay.core.common.f.i r1 = r4.b
            java.lang.String r2 = r4.c
            boolean r3 = r4.d
            r0.<init>(r5, r1, r2, r3)
            r4.a = r0
            return
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.myoffer.MyOfferTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.myoffer.MyOfferTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.myoffer.MyOfferTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            com.tkay.basead.f.e r0 = r2.a
            if (r0 == 0) goto La
            r1 = 0
            r0.a(r1)
            r2.a = r1
        La:
            return
    }

    @Override
    public com.tkay.core.api.BaseAd getBaseAdObject(android.content.Context r3) {
            r2 = this;
            com.tkay.basead.f.e r0 = r2.a
            if (r0 == 0) goto L12
            boolean r0 = r0.a()
            if (r0 == 0) goto L12
            com.tkay.network.myoffer.MyOfferTYNativeAd r0 = new com.tkay.network.myoffer.MyOfferTYNativeAd
            com.tkay.basead.f.e r1 = r2.a
            r0.<init>(r3, r1)
            return r0
        L12:
            r3 = 0
            return r3
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
    public boolean initNetworkObjectByPlacementId(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            java.lang.String r5 = "my_oid"
            boolean r0 = r4.containsKey(r5)
            if (r0 == 0) goto L12
            java.lang.Object r5 = r4.get(r5)
            java.lang.String r5 = r5.toString()
            r2.c = r5
        L12:
            java.lang.String r5 = "basead_params"
            boolean r0 = r4.containsKey(r5)
            if (r0 == 0) goto L22
            java.lang.Object r5 = r4.get(r5)
            com.tkay.core.common.f.i r5 = (com.tkay.core.common.f.i) r5
            r2.b = r5
        L22:
            java.lang.String r5 = "isDefaultOffer"
            boolean r0 = r4.containsKey(r5)
            if (r0 == 0) goto L36
            java.lang.Object r4 = r4.get(r5)
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            boolean r4 = r4.booleanValue()
            r2.d = r4
        L36:
            com.tkay.basead.f.e r4 = new com.tkay.basead.f.e
            com.tkay.core.common.f.i r5 = r2.b
            java.lang.String r0 = r2.c
            boolean r1 = r2.d
            r4.<init>(r3, r5, r0, r1)
            r2.a = r4
            r3 = 1
            return r3
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            java.lang.String r5 = "my_oid"
            boolean r0 = r4.containsKey(r5)
            if (r0 == 0) goto L12
            java.lang.Object r5 = r4.get(r5)
            java.lang.String r5 = r5.toString()
            r2.c = r5
        L12:
            java.lang.String r5 = "basead_params"
            boolean r0 = r4.containsKey(r5)
            if (r0 == 0) goto L22
            java.lang.Object r4 = r4.get(r5)
            com.tkay.core.common.f.i r4 = (com.tkay.core.common.f.i) r4
            r2.b = r4
        L22:
            com.tkay.basead.f.e r4 = new com.tkay.basead.f.e
            com.tkay.core.common.f.i r5 = r2.b
            java.lang.String r0 = r2.c
            boolean r1 = r2.d
            r4.<init>(r3, r5, r0, r1)
            r2.a = r4
            android.content.Context r3 = r3.getApplicationContext()
            com.tkay.basead.f.e r4 = r2.a
            com.tkay.network.myoffer.MyOfferTYAdapter$1 r5 = new com.tkay.network.myoffer.MyOfferTYAdapter$1
            r5.<init>(r2, r3)
            r4.a(r5)
            return
    }
}
