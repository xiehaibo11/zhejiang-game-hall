package com.tkay.network.sigmob;

@java.lang.Deprecated
public class SigmobiTYRequestInfo extends com.tkay.core.api.TYMediationRequestInfo {
    java.util.HashMap<java.lang.String, java.lang.Object> a;

    public SigmobiTYRequestInfo(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            r2.<init>()
            r0 = 29
            r2.networkFirmId = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.a = r0
            java.lang.String r1 = "app_id"
            r0.put(r1, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r3 = r2.a
            java.lang.String r0 = "app_key"
            r3.put(r0, r4)
            java.util.HashMap<java.lang.String, java.lang.Object> r3 = r2.a
            java.lang.String r4 = "placement_id"
            r3.put(r4, r5)
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
            java.lang.Class<com.tkay.network.sigmob.SigmobTYSplashAdapter> r3 = com.tkay.network.sigmob.SigmobTYSplashAdapter.class
            java.lang.String r3 = r3.getName()
            r2.className = r3
        L1f:
            return
    }
}
