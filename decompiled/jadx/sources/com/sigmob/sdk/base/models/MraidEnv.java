package com.sigmob.sdk.base.models;

import com.czhj.sdk.common.ClientMetadata;
import com.sigmob.sdk.base.c;

/* JADX INFO: loaded from: classes3.dex */
public class MraidEnv {
    public final Boolean coppa;
    public final String version = "2.0";
    public final String sdk = "sigmob";
    public final String sdkVersion = "4.9.0";
    public final String appId = ClientMetadata.getInstance().getAppPackageName();
    public final String ifa = ClientMetadata.getInstance().getAdvertisingId();
    public final Boolean limitAdTracking = Boolean.valueOf(ClientMetadata.getInstance().getLimitAdTrackingEnabled());

    public MraidEnv() {
        this.coppa = Boolean.valueOf(c.a().c() == 1);
    }
}
