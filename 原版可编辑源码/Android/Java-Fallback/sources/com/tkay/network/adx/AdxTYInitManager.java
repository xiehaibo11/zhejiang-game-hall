package com.tkay.network.adx;

public class AdxTYInitManager extends com.tkay.core.api.TYInitMediation {
    private static volatile com.tkay.network.adx.AdxTYInitManager a;

    public AdxTYInitManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.network.adx.AdxTYInitManager getInstance() {
            com.tkay.network.adx.AdxTYInitManager r0 = com.tkay.network.adx.AdxTYInitManager.a
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.network.adx.AdxTYInitManager> r0 = com.tkay.network.adx.AdxTYInitManager.class
            monitor-enter(r0)
            com.tkay.network.adx.AdxTYInitManager r1 = com.tkay.network.adx.AdxTYInitManager.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.network.adx.AdxTYInitManager r1 = new com.tkay.network.adx.AdxTYInitManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.network.adx.AdxTYInitManager.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.network.adx.AdxTYInitManager r0 = com.tkay.network.adx.AdxTYInitManager.a
            return r0
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            java.lang.String r0 = "Adx"
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKClass() {
            r1 = this;
            java.lang.String r0 = "com.tkay.core.api.TYSDK"
            return r0
    }

    @Override
    public java.util.List getResourceStatus() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "tkay_myoffer_full_screen"
            r0.add(r1)
            java.lang.String r1 = "tkay_myoffer_splash_ad_layout_asseblem_vertical_port"
            r0.add(r1)
            return r0
    }

    @Override
    public void initSDK(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, com.tkay.core.api.MediationInitCallback r3) {
            r0 = this;
            return
    }
}
