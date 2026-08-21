package com.ymnsdk.replugin.listener;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public interface OpenListener {
    void installFail(java.lang.String r1);

    void installSuccess();

    void onDownloadFailure(com.ymnsdk.replugin.patch.download.DownloadCode.Code r1);

    void onDownloading(long r1);

    void onDownloadingInStart(long r1);

    void openFail(java.lang.String r1);

    void openSuccess();
}
