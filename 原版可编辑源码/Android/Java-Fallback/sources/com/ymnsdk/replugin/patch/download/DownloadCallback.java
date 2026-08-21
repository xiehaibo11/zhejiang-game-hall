package com.ymnsdk.replugin.patch.download;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public interface DownloadCallback {
    void downloadFail(com.ymnsdk.replugin.patch.download.DownloadCode.Code r1);

    void downloadSuccess(java.lang.String r1);

    void downloading(long r1);
}
