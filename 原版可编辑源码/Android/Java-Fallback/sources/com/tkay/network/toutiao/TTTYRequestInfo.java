package com.tkay.network.toutiao;

public class TTTYRequestInfo extends com.tkay.core.api.TYMediationRequestInfo {
    java.util.HashMap<java.lang.String, java.lang.Object> a;

    public TTTYRequestInfo(java.lang.String r3, java.lang.String r4, boolean r5) {
            r2 = this;
            r2.<init>()
            r0 = 15
            r2.networkFirmId = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.a = r0
            java.lang.String r1 = "app_id"
            r0.put(r1, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r3 = r2.a
            java.lang.String r0 = "slot_id"
            r3.put(r0, r4)
            java.util.HashMap<java.lang.String, java.lang.Object> r3 = r2.a
            if (r5 == 0) goto L21
            java.lang.String r4 = "1"
            goto L23
        L21:
            java.lang.String r4 = "0"
        L23:
            java.lang.String r5 = "personalized_template"
            r3.put(r5, r4)
            return
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Object> getRequestParamMap() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r1.a
            return r0
    }

    @Override
    public void setFormat(java.lang.String r3) {
            r2 = this;
            int r0 = r3.hashCode()
            r1 = 52
            if (r0 == r1) goto L9
            goto L13
        L9:
            java.lang.String r0 = "4"
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L13
            r3 = 0
            goto L14
        L13:
            r3 = -1
        L14:
            if (r3 == 0) goto L17
            goto L1f
        L17:
            java.lang.Class<com.tkay.network.toutiao.TTTYSplashAdapter> r3 = com.tkay.network.toutiao.TTTYSplashAdapter.class
            java.lang.String r3 = r3.getName()
            r2.className = r3
        L1f:
            return
    }
}
