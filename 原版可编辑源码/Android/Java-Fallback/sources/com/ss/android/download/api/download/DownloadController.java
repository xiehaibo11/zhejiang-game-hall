package com.ss.android.download.api.download;

public interface DownloadController {
    boolean enableAH();

    boolean enableAM();

    boolean enableNewActivity();

    boolean enableShowComplianceDialog();

    @java.lang.Deprecated
    int getDowloadChunkCount();

    int getDownloadMode();

    java.lang.Object getExtraClickOperation();

    org.json.JSONObject getExtraJson();

    java.lang.Object getExtraObject();

    int getInterceptFlag();

    int getLinkMode();

    boolean isAddToDownloadManage();

    boolean isAutoDownloadOnCardShow();

    boolean isEnableBackDialog();

    @java.lang.Deprecated
    boolean isEnableMultipleDownload();

    void setDownloadMode(int r1);

    void setEnableNewActivity(boolean r1);

    void setEnableShowComplianceDialog(boolean r1);

    void setLinkMode(int r1);

    boolean shouldUseNewWebView();
}
