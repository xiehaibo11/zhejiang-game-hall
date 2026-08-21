package com.kwad.sdk.api.core;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi("com.kwad.sdk.KsAdSDKImpl")
public interface IKsAdSDK {
    void addHp(java.util.Map<java.lang.String, java.lang.String> r1);

    java.lang.Object dM(java.lang.String r1, java.lang.Object... r2);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void deleteCache();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    com.kwad.sdk.api.KsLoadManager getAdManager();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    java.lang.String getApiVersion();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    int getApiVersionCode();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    java.lang.String getAppId();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    org.json.JSONObject getAppInfo();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    java.lang.String getAppName();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    android.content.Context getContext();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    org.json.JSONObject getDeviceInfo();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    java.lang.String getDid();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    org.json.JSONObject getNetworkInfo();

    java.lang.String getRD(java.lang.String r1);

    java.lang.String getRM(java.lang.String r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    int getSDKType();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    java.lang.String getSDKVersion();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    int getSDKVersionCode();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void init(android.content.Context r1, com.kwad.sdk.api.SdkConfig r2);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    boolean isDebugLogEnable();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    <T extends com.kwad.sdk.api.proxy.IComponentProxy> T newComponentProxy(java.lang.Class<?> r1, java.lang.Object r2);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    <T> T newInstance(java.lang.Class<T> r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void pauseCurrentPlayer();

    void re(java.lang.Object r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    @java.lang.Deprecated
    void reportBatchEvent(int r1, java.util.Map<java.lang.String, java.lang.Object> r2);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void resumeCurrentPlayer();

    void sR(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, java.lang.String r3);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setAdxEnable(boolean r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setApiVersion(java.lang.String r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setApiVersionCode(int r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setAppTag(java.lang.String r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setIsExternal(boolean r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setLaunchTime(long r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setLoadingLottieAnimation(boolean r1, int r2);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setLoadingLottieAnimationColor(boolean r1, int r2);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setPersonalRecommend(boolean r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setProgrammaticRecommend(boolean r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setThemeMode(int r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void unInit();
}
