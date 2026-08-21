package com.ymnsdk.replugin.listener;

import com.ymnsdk.replugin.patch.download.DownloadCode;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public interface InstallPluginStatusListener {
    void onDownloadFailure(DownloadCode.Code code);

    void onDownloading(long j);

    void onFailure(String str);

    void onSuccess();
}
