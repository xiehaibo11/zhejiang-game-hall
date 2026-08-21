package com.ymnsdk.replugin.listener;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public interface InstallPluginStatusListener {
    void onDownloadFailure(com.ymnsdk.replugin.patch.download.DownloadCode.Code r1);

    void onDownloading(long r1);

    void onFailure(java.lang.String r1);

    void onSuccess();
}
