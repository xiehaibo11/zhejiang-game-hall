package com.ymnsdk.replugin.patch.download;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class DownloadState {
    public static final int DOWNLOAD_RESTART_NUM = 5;
    public static final int MAX_MERGE_NUM = 3;
    public static volatile boolean NetWorkAvailable = false;
    public static final int SILENT_DOWNLOAD_RESTART_NUM = 10;
    public static volatile com.ymnsdk.replugin.entity.DownloadEntity downloadEntity;
    private static com.ymnsdk.replugin.patch.download.DownloadState downloadState;
    public static volatile boolean isDownloadRecovery;
    public static volatile boolean isNoNetTimeout;
    public static volatile boolean loading;
    public static volatile boolean openSilentDownload;
    public static volatile int remerge_num;
    public static volatile int restart_num;
    public static volatile int silent_restart_num;

    static {
            com.ymnsdk.replugin.patch.download.DownloadState r0 = new com.ymnsdk.replugin.patch.download.DownloadState
            r0.<init>()
            com.ymnsdk.replugin.patch.download.DownloadState.downloadState = r0
            r0 = 0
            com.ymnsdk.replugin.patch.download.DownloadState.remerge_num = r0
            com.ymnsdk.replugin.patch.download.DownloadState.restart_num = r0
            com.ymnsdk.replugin.patch.download.DownloadState.silent_restart_num = r0
            com.ymnsdk.replugin.patch.download.DownloadState.loading = r0
            com.ymnsdk.replugin.patch.download.DownloadState.isNoNetTimeout = r0
            com.ymnsdk.replugin.patch.download.DownloadState.isDownloadRecovery = r0
            r1 = 1
            com.ymnsdk.replugin.patch.download.DownloadState.NetWorkAvailable = r1
            com.ymnsdk.replugin.patch.download.DownloadState.openSilentDownload = r0
            com.ymnsdk.replugin.entity.DownloadEntity r0 = new com.ymnsdk.replugin.entity.DownloadEntity
            r0.<init>()
            com.ymnsdk.replugin.patch.download.DownloadState.downloadEntity = r0
            return
    }

    public DownloadState() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ymnsdk.replugin.patch.download.DownloadState getInstance() {
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.downloadState
            return r0
    }

    public void downloadEnd() {
            r2 = this;
            com.ymnsdk.replugin.patch.download.DownloadState r0 = getInstance()
            r1 = 0
            r0.setIsDownloadRecovery(r1)
            com.ymnsdk.replugin.patch.download.DownloadState r0 = getInstance()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.setLoadState(r1)
            return
    }

    public com.ymnsdk.replugin.entity.DownloadEntity getDownloadEntity() {
            r1 = this;
            com.ymnsdk.replugin.entity.DownloadEntity r0 = com.ymnsdk.replugin.patch.download.DownloadState.downloadEntity
            return r0
    }

    public boolean getLoadState() {
            r1 = this;
            boolean r0 = com.ymnsdk.replugin.patch.download.DownloadState.loading
            return r0
    }

    public void init(android.app.Activity r2, java.lang.String r3, java.lang.String r4, int r5, long r6, java.lang.String r8, int r9, int r10, com.ymnsdk.replugin.patch.download.DownloadCallback r11) {
            r1 = this;
            com.ymnsdk.replugin.entity.DownloadEntity r0 = com.ymnsdk.replugin.patch.download.DownloadState.downloadEntity
            r0.setActivity(r2)
            com.ymnsdk.replugin.entity.DownloadEntity r2 = com.ymnsdk.replugin.patch.download.DownloadState.downloadEntity
            r2.setPluginId(r3)
            com.ymnsdk.replugin.entity.DownloadEntity r2 = com.ymnsdk.replugin.patch.download.DownloadState.downloadEntity
            r2.setDownloadUri(r4)
            com.ymnsdk.replugin.entity.DownloadEntity r2 = com.ymnsdk.replugin.patch.download.DownloadState.downloadEntity
            r2.setDownloadType(r5)
            com.ymnsdk.replugin.entity.DownloadEntity r2 = com.ymnsdk.replugin.patch.download.DownloadState.downloadEntity
            r2.setDownSize(r6)
            com.ymnsdk.replugin.entity.DownloadEntity r2 = com.ymnsdk.replugin.patch.download.DownloadState.downloadEntity
            r2.setMd5(r8)
            com.ymnsdk.replugin.entity.DownloadEntity r2 = com.ymnsdk.replugin.patch.download.DownloadState.downloadEntity
            r2.setNoNetTimeout(r9)
            com.ymnsdk.replugin.entity.DownloadEntity r2 = com.ymnsdk.replugin.patch.download.DownloadState.downloadEntity
            r2.setWeaknetTimeout(r10)
            com.ymnsdk.replugin.entity.DownloadEntity r2 = com.ymnsdk.replugin.patch.download.DownloadState.downloadEntity
            r2.setCallback(r11)
            return
    }

    public boolean isIsDownloadRecovery() {
            r1 = this;
            boolean r0 = com.ymnsdk.replugin.patch.download.DownloadState.isDownloadRecovery
            return r0
    }

    public boolean isIsNoNetTimeout() {
            r1 = this;
            boolean r0 = com.ymnsdk.replugin.patch.download.DownloadState.isNoNetTimeout
            return r0
    }

    public boolean isNetWorkAvailable() {
            r1 = this;
            boolean r0 = com.ymnsdk.replugin.patch.download.DownloadState.NetWorkAvailable
            return r0
    }

    public boolean isOpenSilentDownload() {
            r1 = this;
            boolean r0 = com.ymnsdk.replugin.patch.download.DownloadState.openSilentDownload
            return r0
    }

    public void setIsDownloadRecovery(boolean r1) {
            r0 = this;
            com.ymnsdk.replugin.patch.download.DownloadState.isDownloadRecovery = r1
            return
    }

    public void setIsNoNetTimeout(boolean r1) {
            r0 = this;
            com.ymnsdk.replugin.patch.download.DownloadState.isNoNetTimeout = r1
            return
    }

    public void setLoadState(java.lang.Boolean r1) {
            r0 = this;
            boolean r1 = r1.booleanValue()
            com.ymnsdk.replugin.patch.download.DownloadState.loading = r1
            return
    }

    public void setNetWorkAvailable(boolean r1) {
            r0 = this;
            com.ymnsdk.replugin.patch.download.DownloadState.NetWorkAvailable = r1
            return
    }

    public void setOpenSilentDownload(boolean r1) {
            r0 = this;
            com.ymnsdk.replugin.patch.download.DownloadState.openSilentDownload = r1
            return
    }
}
