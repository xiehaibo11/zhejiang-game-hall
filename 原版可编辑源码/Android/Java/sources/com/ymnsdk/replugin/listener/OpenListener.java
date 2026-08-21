package com.ymnsdk.replugin.listener;

import com.ymnsdk.replugin.patch.download.DownloadCode;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public interface OpenListener {
    void installFail(String str);

    void installSuccess();

    void onDownloadFailure(DownloadCode.Code code);

    void onDownloading(long j);

    void onDownloadingInStart(long j);

    void openFail(String str);

    void openSuccess();
}
