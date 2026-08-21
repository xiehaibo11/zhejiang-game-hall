package com.tkay.network.adx;

public class AdxTYAdapter extends com.tkay.nativead.unitgroup.api.CustomNativeAdapter {
    com.tkay.basead.d.e a;
    com.tkay.core.common.f.i b;
    private boolean c;


    public AdxTYAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r2 = this;
            java.lang.String r0 = "basead_params"
            java.lang.Object r4 = r4.get(r0)
            com.tkay.core.common.f.i r4 = (com.tkay.core.common.f.i) r4
            r2.b = r4
            com.tkay.basead.d.e r4 = new com.tkay.basead.d.e
            com.tkay.basead.d.b$a r0 = com.tkay.basead.d.b.a.a
            com.tkay.core.common.f.i r1 = r2.b
            r4.<init>(r3, r0, r1)
            r2.a = r4
            return
    }

    static boolean a(com.tkay.network.adx.AdxTYAdapter r0) {
            boolean r0 = r0.c
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.adx.AdxTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.adx.AdxTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.adx.AdxTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.adx.AdxTYAdapter r0) {
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
            java.lang.String r2 = "layout_type"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r2)
            java.lang.String r3 = "1"
            boolean r2 = android.text.TextUtils.equals(r3, r2)
            r1.c = r2
            if (r2 == 0) goto L27
            r0.fillAdAcceptType()
        L27:
            if (r5 == 0) goto L2c
            r5.onSuccess(r0)
        L2c:
            return
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
    public void loadCustomNetworkAd(android.content.Context r12, java.util.Map<java.lang.String, java.lang.Object> r13, java.util.Map<java.lang.String, java.lang.Object> r14) {
            r11 = this;
            java.lang.String r0 = "basead_params"
            java.lang.Object r0 = r13.get(r0)
            com.tkay.core.common.f.i r0 = (com.tkay.core.common.f.i) r0
            r11.b = r0
            com.tkay.basead.d.e r0 = new com.tkay.basead.d.e
            com.tkay.basead.d.b$a r1 = com.tkay.basead.d.b.a.a
            com.tkay.core.common.f.i r2 = r11.b
            r0.<init>(r12, r1, r2)
            r11.a = r0
            java.lang.String r0 = "layout_type"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r13, r0)
            java.lang.String r1 = "1"
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            r11.c = r0
            java.lang.String r0 = "0"
            java.lang.String r2 = "close_button"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r13, r2, r0)
            boolean r10 = android.text.TextUtils.equals(r0, r2)
            java.lang.String r2 = "v_m"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r13, r2, r0)
            boolean r7 = android.text.TextUtils.equals(r0, r2)
            java.lang.String r0 = "video_autoplay"
            java.lang.String r8 = com.tkay.core.api.TYInitMediation.getStringFromMap(r13, r0, r1)
            r13 = -1
            if (r14 == 0) goto L4f
            java.lang.String r13 = "key_width"
            int r13 = com.tkay.core.api.TYInitMediation.getIntFromMap(r14, r13)
            java.lang.String r0 = "key_height"
            int r14 = com.tkay.core.api.TYInitMediation.getIntFromMap(r14, r0)
            goto L50
        L4f:
            r14 = r13
        L50:
            android.content.res.Resources r0 = r12.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r0 = r0.widthPixels
            android.content.res.Resources r1 = r12.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            int r1 = r1.heightPixels
            if (r13 > 0) goto L6a
            int r13 = java.lang.Math.min(r0, r1)
        L6a:
            if (r14 > 0) goto L70
            int r14 = r13 * 3
            int r14 = r14 / 4
        L70:
            if (r13 <= r0) goto L74
            r5 = r0
            goto L75
        L74:
            r5 = r13
        L75:
            if (r14 <= r1) goto L79
            r6 = r1
            goto L7a
        L79:
            r6 = r14
        L7a:
            android.content.Context r9 = r12.getApplicationContext()
            com.tkay.basead.d.e r12 = r11.a
            com.tkay.network.adx.AdxTYAdapter$1 r13 = new com.tkay.network.adx.AdxTYAdapter$1
            r3 = r13
            r4 = r11
            r3.<init>(r4, r5, r6, r7, r8, r9, r10)
            r12.a(r13)
            return
    }
}
