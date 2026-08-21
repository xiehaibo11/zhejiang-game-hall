package com.iab.omid.library.mmadbridge.adsession;

import com.bianfeng.libuniverse.Device;
import com.kwad.sdk.api.model.AdnName;

/* JADX INFO: loaded from: classes2.dex */
public enum DeviceCategory {
    CTV("ctv"),
    MOBILE(Device.NETWORN_MOBILE),
    OTHER(AdnName.OTHER);

    private final String deviceCategory;

    DeviceCategory(String str) {
        this.deviceCategory = str;
    }

    @Override // java.lang.Enum
    public String toString() {
        return this.deviceCategory;
    }
}
