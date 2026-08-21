package com.bytedance.android.live.saas.middleware.applog;

public interface IAppLog {
    java.lang.String addCommonParams(java.lang.String r1, boolean r2);

    void addCustomHeader(java.lang.String r1, java.lang.String r2);

    java.lang.String getAbSdkVersion();

    java.lang.String getDid();

    java.lang.String getInstallId();

    boolean isTob();

    void log(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2);

    void observeIdChanged(com.bytedance.android.live.saas.middleware.applog.IdChangedCallback r1);

    void onEventV3(java.lang.String r1, org.json.JSONObject r2);

    void putCommonParams(java.util.Map<java.lang.String, java.lang.String> r1, boolean r2);

    void tryWaitDeviceInit();
}
