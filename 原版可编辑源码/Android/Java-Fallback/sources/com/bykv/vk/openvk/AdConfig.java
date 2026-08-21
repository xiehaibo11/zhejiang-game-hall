package com.bykv.vk.openvk;

public interface AdConfig {

    public interface SdkInfo {
        boolean isPlugin();

        java.lang.String pluginName();

        int sdkVersionCode();

        java.lang.String sdkVersionName();
    }

    java.lang.String getAppId();

    java.lang.String getAppName();

    com.bykv.vk.openvk.TTCustomController getCustomController();

    java.lang.String getData();

    int[] getDirectDownloadNetworkType();

    @java.lang.Deprecated
    java.lang.Object getExtra(java.lang.String r1);

    com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth getInjectionAuth();

    java.lang.String getKeywords();

    @java.lang.Deprecated
    java.lang.String[] getNeedClearTaskReset();

    com.bykv.vk.openvk.AdConfig.SdkInfo getSdkInfo();

    int getTitleBarTheme();

    boolean isAllowShowNotify();

    boolean isAllowShowPageWhenScreenLock();

    boolean isAsyncInit();

    boolean isDebug();

    boolean isPaid();

    boolean isSupportMultiProcess();

    boolean isUseTextureView();

    @java.lang.Deprecated
    java.lang.Object removeExtra(java.lang.String r1);

    void setAgeGroup(int r1);

    @java.lang.Deprecated
    void setExtra(java.lang.String r1, java.lang.Object r2);
}
