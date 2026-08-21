package com.ymnsdk.replugin.patch.download;

import android.app.Activity;
import com.ymnsdk.replugin.entity.DownloadEntity;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class DownloadState {
    public static final int DOWNLOAD_RESTART_NUM = 5;
    public static final int MAX_MERGE_NUM = 3;
    public static final int SILENT_DOWNLOAD_RESTART_NUM = 10;
    private static DownloadState downloadState = new DownloadState();
    public static volatile int remerge_num = 0;
    public static volatile int restart_num = 0;
    public static volatile int silent_restart_num = 0;
    public static volatile boolean loading = false;
    public static volatile boolean isNoNetTimeout = false;
    public static volatile boolean isDownloadRecovery = false;
    public static volatile boolean NetWorkAvailable = true;
    public static volatile boolean openSilentDownload = false;
    public static volatile DownloadEntity downloadEntity = new DownloadEntity();

    public static DownloadState getInstance() {
        return downloadState;
    }

    public void setLoadState(Boolean bool) {
        loading = bool.booleanValue();
    }

    public boolean getLoadState() {
        return loading;
    }

    public boolean isIsNoNetTimeout() {
        return isNoNetTimeout;
    }

    public void setIsNoNetTimeout(boolean z) {
        isNoNetTimeout = z;
    }

    public boolean isIsDownloadRecovery() {
        return isDownloadRecovery;
    }

    public void setIsDownloadRecovery(boolean z) {
        isDownloadRecovery = z;
    }

    public boolean isNetWorkAvailable() {
        return NetWorkAvailable;
    }

    public void setNetWorkAvailable(boolean z) {
        NetWorkAvailable = z;
    }

    public boolean isOpenSilentDownload() {
        return openSilentDownload;
    }

    public void setOpenSilentDownload(boolean z) {
        openSilentDownload = z;
    }

    public void init(Activity activity, String str, String str2, int i, long j, String str3, int i2, int i3, DownloadCallback downloadCallback) {
        downloadEntity.setActivity(activity);
        downloadEntity.setPluginId(str);
        downloadEntity.setDownloadUri(str2);
        downloadEntity.setDownloadType(i);
        downloadEntity.setDownSize(j);
        downloadEntity.setMd5(str3);
        downloadEntity.setNoNetTimeout(i2);
        downloadEntity.setWeaknetTimeout(i3);
        downloadEntity.setCallback(downloadCallback);
    }

    public DownloadEntity getDownloadEntity() {
        return downloadEntity;
    }

    public void downloadEnd() {
        getInstance().setIsDownloadRecovery(false);
        getInstance().setLoadState(false);
    }
}
