package com.ss.android.download.api.download;

public interface DownloadModel {
    boolean autoInstallWithoutNotification();

    boolean distinctDir();

    boolean enablePause();

    void forceHideNotification();

    void forceHideToast();

    void forceWifi();

    java.lang.String getAppIcon();

    java.util.List<java.lang.String> getBackupUrls();

    java.util.List<java.lang.String> getClickTrackUrl();

    com.ss.android.download.api.model.DeepLink getDeepLink();

    com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider getDownloadFileUriProvider();

    org.json.JSONObject getDownloadSettings();

    java.lang.String getDownloadUrl();

    int getExecutorGroup();

    long getExpectFileLength();

    org.json.JSONObject getExtra();

    long getExtraValue();

    java.lang.String getFileName();

    java.lang.String getFilePath();

    int getFunnelType();

    java.util.Map<java.lang.String, java.lang.String> getHeaders();

    long getId();

    java.lang.String getLogExtra();

    java.lang.String getMd5();

    java.lang.String getMimeType();

    int getModelType();

    java.lang.String getName();

    java.lang.String getNotificationJumpUrl();

    java.lang.String getPackageName();

    com.ss.android.download.api.model.q getQuickAppModel();

    java.lang.String getSdkMonitorScene();

    java.lang.String getStartToast();

    int getVersionCode();

    java.lang.String getVersionName();

    boolean isAd();

    boolean isAutoInstall();

    boolean isInExternalPublicDir();

    boolean isNeedWifi();

    boolean isShowNotification();

    boolean isShowToast();

    boolean isVisibleInDownloadsUi();

    boolean needIndependentProcess();

    com.ss.android.download.api.download.DownloadModel setFilePath(java.lang.String r1);

    boolean shouldDownloadWithPatchApply();
}
