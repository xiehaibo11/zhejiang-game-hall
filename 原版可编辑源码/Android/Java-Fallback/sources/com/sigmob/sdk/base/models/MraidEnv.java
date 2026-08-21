package com.sigmob.sdk.base.models;

public class MraidEnv {
    public final java.lang.String appId;
    public final java.lang.Boolean coppa;
    public final java.lang.String ifa;
    public final java.lang.Boolean limitAdTracking;
    public final java.lang.String sdk;
    public final java.lang.String sdkVersion;
    public final java.lang.String version;

    public MraidEnv() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "2.0"
            r2.version = r0
            java.lang.String r0 = "sigmob"
            r2.sdk = r0
            java.lang.String r0 = "4.9.0"
            r2.sdkVersion = r0
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = r0.getAppPackageName()
            r2.appId = r0
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = r0.getAdvertisingId()
            r2.ifa = r0
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            boolean r0 = r0.getLimitAdTrackingEnabled()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            r2.limitAdTracking = r0
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()
            int r0 = r0.c()
            r1 = 1
            if (r0 != r1) goto L3d
            goto L3e
        L3d:
            r1 = 0
        L3e:
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r1)
            r2.coppa = r0
            return
    }
}
