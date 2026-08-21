package com.tkay.network.onlineapi;

public class OnlineApiTYAdapter extends com.tkay.nativead.unitgroup.api.CustomNativeAdapter {
    com.tkay.basead.d.e a;
    com.tkay.core.common.f.i b;
    java.lang.String c;


    public OnlineApiTYAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.tkay.core.api.TYCustomLoadListener a(com.tkay.network.onlineapi.OnlineApiTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    private void a(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r2 = this;
            java.lang.String r0 = "unit_id"
            java.lang.Object r1 = r4.get(r0)
            if (r1 == 0) goto L11
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = r0.toString()
            goto L13
        L11:
            java.lang.String r0 = ""
        L13:
            r2.c = r0
            java.lang.String r0 = "basead_params"
            java.lang.Object r4 = r4.get(r0)
            com.tkay.core.common.f.i r4 = (com.tkay.core.common.f.i) r4
            r2.b = r4
            com.tkay.basead.d.e r4 = new com.tkay.basead.d.e
            com.tkay.basead.d.b$a r0 = com.tkay.basead.d.b.a.b
            com.tkay.core.common.f.i r1 = r2.b
            r4.<init>(r3, r0, r1)
            r2.a = r4
            return
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.onlineapi.OnlineApiTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.onlineapi.OnlineApiTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.onlineapi.OnlineApiTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    @Override
    public void destory() {
            r1 = this;
            com.tkay.basead.d.e r0 = r1.a
            if (r0 == 0) goto L7
            r0 = 0
            r1.a = r0
        L7:
            return
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
    public void loadCustomNetworkAd(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            java.lang.String r0 = "unit_id"
            java.lang.Object r1 = r4.get(r0)
            if (r1 == 0) goto L11
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = r0.toString()
            goto L13
        L11:
            java.lang.String r0 = ""
        L13:
            r2.c = r0
            java.lang.String r0 = "basead_params"
            java.lang.Object r4 = r4.get(r0)
            com.tkay.core.common.f.i r4 = (com.tkay.core.common.f.i) r4
            r2.b = r4
            com.tkay.basead.d.e r4 = new com.tkay.basead.d.e
            com.tkay.basead.d.b$a r0 = com.tkay.basead.d.b.a.b
            com.tkay.core.common.f.i r1 = r2.b
            r4.<init>(r3, r0, r1)
            r2.a = r4
            r4 = -1
            if (r5 == 0) goto L4e
            java.lang.String r0 = "key_width"
            java.lang.Object r0 = r5.get(r0)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L3c
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L3c
            goto L3d
        L3c:
            r0 = r4
        L3d:
            java.lang.String r1 = "key_height"
            java.lang.Object r5 = r5.get(r1)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L4b
            int r4 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Throwable -> L4b
        L4b:
            r5 = r4
            r4 = r0
            goto L4f
        L4e:
            r5 = r4
        L4f:
            android.content.res.Resources r0 = r3.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r0 = r0.widthPixels
            android.content.res.Resources r1 = r3.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            int r1 = r1.heightPixels
            if (r4 > 0) goto L69
            int r4 = java.lang.Math.min(r0, r1)
        L69:
            if (r5 > 0) goto L6f
            int r5 = r4 * 3
            int r5 = r5 / 4
        L6f:
            if (r4 <= r0) goto L72
            goto L73
        L72:
            r0 = r4
        L73:
            if (r5 <= r1) goto L76
            goto L77
        L76:
            r1 = r5
        L77:
            android.content.Context r3 = r3.getApplicationContext()
            com.tkay.basead.d.e r4 = r2.a
            com.tkay.network.onlineapi.OnlineApiTYAdapter$1 r5 = new com.tkay.network.onlineapi.OnlineApiTYAdapter$1
            r5.<init>(r2, r0, r1, r3)
            r4.a(r5)
            return
    }
}
