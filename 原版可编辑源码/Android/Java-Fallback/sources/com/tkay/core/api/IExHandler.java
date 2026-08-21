package com.tkay.core.api;

public interface IExHandler {
    boolean checkDebuggerDevice(android.content.Context r1, java.lang.String r2);

    int checkDownloadType(com.tkay.core.common.f.h r1, com.tkay.core.common.f.i r2);

    com.tkay.core.api.TYEventInterface createDownloadListener(com.tkay.core.api.TYBaseAdAdapter r1, com.tkay.core.api.BaseAd r2, com.tkay.core.api.TYEventInterface r3);

    java.lang.String fillCDataParam(java.lang.String r1);

    void fillRequestData(org.json.JSONObject r1, com.tkay.core.c.a r2);

    void fillRequestDeviceData(org.json.JSONObject r1, int r2);

    void fillTestDeviceData(org.json.JSONObject r1, com.tkay.core.c.a r2);

    java.lang.String getUniqueId(android.content.Context r1);

    void handleOfferClick(android.content.Context r1, com.tkay.core.common.f.i r2, com.tkay.core.common.f.h r3, java.lang.String r4, java.lang.String r5, java.lang.Runnable r6, com.tkay.core.common.g.b r7);

    void initDeviceInfo(android.content.Context r1);

    void openApkConfirmDialog(android.content.Context r1, com.tkay.core.common.f.h r2, com.tkay.core.common.f.i r3, com.tkay.core.common.g.a r4);
}
