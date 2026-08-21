package com.ymnsdk.replugin.patch.download;

import com.ymnsdk.replugin.patch.download.DownloadCode;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public interface DownloadCallback {
    void downloadFail(DownloadCode.Code code);

    void downloadSuccess(String str);

    void downloading(long j);
}
