package com.ss.android.socialbase.downloader.downloader;

public class Downloader extends com.ss.android.socialbase.downloader.downloader.BaseDownloader {
    private static volatile com.ss.android.socialbase.downloader.downloader.Downloader instance;

    static {
            com.ss.android.socialbase.downloader.downloader.MultiProcCreater r0 = new com.ss.android.socialbase.downloader.downloader.MultiProcCreater
            r0.<init>()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setIndependentServiceCreator(r0)
            r0 = 0
            com.ss.android.socialbase.downloader.downloader.Downloader.instance = r0
            return
    }

    private Downloader() {
            r0 = this;
            r0.<init>()
            return
    }

    Downloader(com.ss.android.socialbase.downloader.downloader.DownloaderBuilder r1) {
            r0 = this;
            r0.<init>()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.initComponent(r1)
            return
    }

    public static com.ss.android.socialbase.downloader.downloader.Downloader getInstance(android.content.Context r2) {
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.instance
            if (r0 != 0) goto L1a
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.Downloader> r0 = com.ss.android.socialbase.downloader.downloader.Downloader.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.downloader.Downloader r1 = com.ss.android.socialbase.downloader.downloader.Downloader.instance     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto L15
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setAppContext(r2)     // Catch: java.lang.Throwable -> L17
            com.ss.android.socialbase.downloader.downloader.Downloader r2 = new com.ss.android.socialbase.downloader.downloader.Downloader     // Catch: java.lang.Throwable -> L17
            r2.<init>()     // Catch: java.lang.Throwable -> L17
            com.ss.android.socialbase.downloader.downloader.Downloader.instance = r2     // Catch: java.lang.Throwable -> L17
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            goto L1a
        L17:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r2
        L1a:
            com.ss.android.socialbase.downloader.downloader.Downloader r2 = com.ss.android.socialbase.downloader.downloader.Downloader.instance
            return r2
    }

    public static synchronized void init(com.ss.android.socialbase.downloader.downloader.DownloaderBuilder r2) {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.Downloader> r0 = com.ss.android.socialbase.downloader.downloader.Downloader.class
            monitor-enter(r0)
            r1 = 0
            initOrCover(r2, r1)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r0)
            return
        L9:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static synchronized void initOrCover(com.ss.android.socialbase.downloader.downloader.DownloaderBuilder r2, boolean r3) {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.Downloader> r0 = com.ss.android.socialbase.downloader.downloader.Downloader.class
            monitor-enter(r0)
            if (r2 != 0) goto L7
            monitor-exit(r0)
            return
        L7:
            com.ss.android.socialbase.downloader.downloader.Downloader r1 = com.ss.android.socialbase.downloader.downloader.Downloader.instance     // Catch: java.lang.Throwable -> L23
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.downloader.Downloader r2 = r2.build()     // Catch: java.lang.Throwable -> L23
            com.ss.android.socialbase.downloader.downloader.Downloader.instance = r2     // Catch: java.lang.Throwable -> L23
            goto L21
        L12:
            boolean r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.isInit()     // Catch: java.lang.Throwable -> L23
            if (r1 != 0) goto L1c
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.initComponent(r2)     // Catch: java.lang.Throwable -> L23
            goto L21
        L1c:
            if (r3 == 0) goto L21
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.coverComponent(r2)     // Catch: java.lang.Throwable -> L23
        L21:
            monitor-exit(r0)
            return
        L23:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    @Override
    public void addMainThreadListener(int r1, com.ss.android.socialbase.downloader.depend.IDownloadListener r2) {
            r0 = this;
            super.addMainThreadListener(r1, r2)
            return
    }

    @Override
    public void addNotificationListener(int r1, com.ss.android.socialbase.downloader.depend.IDownloadListener r2) {
            r0 = this;
            super.addNotificationListener(r1, r2)
            return
    }

    @Override
    public void addSubThreadListener(int r1, com.ss.android.socialbase.downloader.depend.IDownloadListener r2) {
            r0 = this;
            super.addSubThreadListener(r1, r2)
            return
    }

    @Override
    public boolean canResume(int r1) {
            r0 = this;
            boolean r1 = super.canResume(r1)
            return r1
    }

    @Override
    public void cancel(int r1) {
            r0 = this;
            super.cancel(r1)
            return
    }

    @Override
    public void cancel(int r1, boolean r2) {
            r0 = this;
            super.cancel(r1, r2)
            return
    }

    @Override
    public void clearDownloadData(int r1) {
            r0 = this;
            super.clearDownloadData(r1)
            return
    }

    @Override
    public void clearDownloadData(int r1, boolean r2) {
            r0 = this;
            super.clearDownloadData(r1, r2)
            return
    }

    @Override
    public void destoryDownloader() {
            r0 = this;
            super.destoryDownloader()
            return
    }

    @Override
    public void forceDownloadIngoreRecommendSize(int r1) {
            r0 = this;
            super.forceDownloadIngoreRecommendSize(r1)
            return
    }

    @Override
    public java.util.List getAllDownloadInfo() {
            r1 = this;
            java.util.List r0 = super.getAllDownloadInfo()
            return r0
    }

    @Override
    public long getCurBytes(int r3) {
            r2 = this;
            long r0 = super.getCurBytes(r3)
            return r0
    }

    @Override
    public com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider getDownloadFileUriProvider(int r1) {
            r0 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r1 = super.getDownloadFileUriProvider(r1)
            return r1
    }

    @Override
    public int getDownloadId(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            int r1 = super.getDownloadId(r1, r2)
            return r1
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r1) {
            r0 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = super.getDownloadInfo(r1)
            return r1
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = super.getDownloadInfo(r1, r2)
            return r1
    }

    @Override
    public java.util.List getDownloadInfoList(java.lang.String r1) {
            r0 = this;
            java.util.List r1 = super.getDownloadInfoList(r1)
            return r1
    }

    @Override
    public com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener getDownloadNotificationEventListener(int r1) {
            r0 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r1 = super.getDownloadNotificationEventListener(r1)
            return r1
    }

    @Override
    public java.util.List getDownloadingDownloadInfosWithMimeType(java.lang.String r1) {
            r0 = this;
            java.util.List r1 = super.getDownloadingDownloadInfosWithMimeType(r1)
            return r1
    }

    @Override
    public java.util.List getFailedDownloadInfosWithMimeType(java.lang.String r1) {
            r0 = this;
            java.util.List r1 = super.getFailedDownloadInfosWithMimeType(r1)
            return r1
    }

    @Override
    public java.io.File getGlobalSaveDir() {
            r1 = this;
            java.io.File r0 = super.getGlobalSaveDir()
            return r0
    }

    @Override
    public java.io.File getGlobalSaveTempDir() {
            r1 = this;
            java.io.File r0 = super.getGlobalSaveTempDir()
            return r0
    }

    @Override
    public com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener getReserveWifiStatusListener() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener r0 = super.getReserveWifiStatusListener()
            return r0
    }

    @Override
    public int getStatus(int r1) {
            r0 = this;
            int r1 = super.getStatus(r1)
            return r1
    }

    @Override
    public java.util.List getSuccessedDownloadInfosWithMimeType(java.lang.String r1) {
            r0 = this;
            java.util.List r1 = super.getSuccessedDownloadInfosWithMimeType(r1)
            return r1
    }

    @Override
    public java.util.List getUnCompletedDownloadInfosWithMimeType(java.lang.String r1) {
            r0 = this;
            java.util.List r1 = super.getUnCompletedDownloadInfosWithMimeType(r1)
            return r1
    }

    @Override
    public boolean isDownloadCacheSyncSuccess() {
            r1 = this;
            boolean r0 = super.isDownloadCacheSyncSuccess()
            return r0
    }

    @Override
    public boolean isDownloadServiceForeground(int r1) {
            r0 = this;
            boolean r1 = super.isDownloadServiceForeground(r1)
            return r1
    }

    @Override
    public boolean isDownloadSuccessAndFileNotExist(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            r0 = this;
            boolean r1 = super.isDownloadSuccessAndFileNotExist(r1)
            return r1
    }

    @Override
    public boolean isDownloading(int r1) {
            r0 = this;
            boolean r1 = super.isDownloading(r1)
            return r1
    }

    @Override
    public boolean isHttpServiceInit() {
            r1 = this;
            boolean r0 = super.isHttpServiceInit()
            return r0
    }

    @Override
    public void pause(int r1) {
            r0 = this;
            super.pause(r1)
            return
    }

    @Override
    public void pauseAll() {
            r0 = this;
            super.pauseAll()
            return
    }

    @Override
    public void registerDownloadCacheSyncListener(com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener r1) {
            r0 = this;
            super.registerDownloadCacheSyncListener(r1)
            return
    }

    @Override
    public void registerDownloaderProcessConnectedListener(com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener r1) {
            r0 = this;
            super.registerDownloaderProcessConnectedListener(r1)
            return
    }

    @Override
    public void removeMainThreadListener(int r1, com.ss.android.socialbase.downloader.depend.IDownloadListener r2) {
            r0 = this;
            super.removeMainThreadListener(r1, r2)
            return
    }

    @Override
    public void removeNotificationListener(int r1, com.ss.android.socialbase.downloader.depend.IDownloadListener r2) {
            r0 = this;
            super.removeNotificationListener(r1, r2)
            return
    }

    @Override
    public void removeSubThreadListener(int r1, com.ss.android.socialbase.downloader.depend.IDownloadListener r2) {
            r0 = this;
            super.removeSubThreadListener(r1, r2)
            return
    }

    @Override
    @java.lang.Deprecated
    public void removeTaskMainListener(int r1) {
            r0 = this;
            super.removeTaskMainListener(r1)
            return
    }

    @Override
    @java.lang.Deprecated
    public void removeTaskNotificationListener(int r1) {
            r0 = this;
            super.removeTaskNotificationListener(r1)
            return
    }

    @Override
    @java.lang.Deprecated
    public void removeTaskSubListener(int r1) {
            r0 = this;
            super.removeTaskSubListener(r1)
            return
    }

    @Override
    public void restart(int r1) {
            r0 = this;
            super.restart(r1)
            return
    }

    @Override
    public void restartAllFailedDownloadTasks(java.util.List r1) {
            r0 = this;
            super.restartAllFailedDownloadTasks(r1)
            return
    }

    @Override
    public void restartAllPauseReserveOnWifiDownloadTasks(java.util.List r1) {
            r0 = this;
            super.restartAllPauseReserveOnWifiDownloadTasks(r1)
            return
    }

    @Override
    public void resume(int r1) {
            r0 = this;
            super.resume(r1)
            return
    }

    @Override
    public void setDefaultSavePath(java.lang.String r1) {
            r0 = this;
            super.setDefaultSavePath(r1)
            return
    }

    @Override
    public void setDefaultSaveTempPath(java.lang.String r1) {
            r0 = this;
            super.setDefaultSaveTempPath(r1)
            return
    }

    @Override
    public void setDownloadInMultiProcess() {
            r0 = this;
            super.setDownloadInMultiProcess()
            return
    }

    @Override
    public void setDownloadNotificationEventListener(int r1, com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r2) {
            r0 = this;
            super.setDownloadNotificationEventListener(r1, r2)
            return
    }

    @Override
    public void setLogLevel(int r1) {
            r0 = this;
            super.setLogLevel(r1)
            return
    }

    @Override
    @java.lang.Deprecated
    public void setMainThreadListener(int r1, com.ss.android.socialbase.downloader.depend.IDownloadListener r2) {
            r0 = this;
            super.setMainThreadListener(r1, r2)
            return
    }

    @Override
    @java.lang.Deprecated
    public void setMainThreadListener(int r1, com.ss.android.socialbase.downloader.depend.IDownloadListener r2, boolean r3) {
            r0 = this;
            super.setMainThreadListener(r1, r2, r3)
            return
    }

    @Override
    @java.lang.Deprecated
    public void setNotificationListener(int r1, com.ss.android.socialbase.downloader.depend.IDownloadListener r2) {
            r0 = this;
            super.setNotificationListener(r1, r2)
            return
    }

    @Override
    public void setReserveWifiStatusListener(com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener r1) {
            r0 = this;
            super.setReserveWifiStatusListener(r1)
            return
    }

    @Override
    @java.lang.Deprecated
    public void setSubThreadListener(int r1, com.ss.android.socialbase.downloader.depend.IDownloadListener r2) {
            r0 = this;
            super.setSubThreadListener(r1, r2)
            return
    }

    @Override
    public void setThrottleNetSpeed(int r1, long r2) {
            r0 = this;
            super.setThrottleNetSpeed(r1, r2)
            return
    }

    @Override
    public void unRegisterDownloadCacheSyncListener(com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener r1) {
            r0 = this;
            super.unRegisterDownloadCacheSyncListener(r1)
            return
    }

    @Override
    public void unRegisterDownloaderProcessConnectedListener(com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener r1) {
            r0 = this;
            super.unRegisterDownloaderProcessConnectedListener(r1)
            return
    }
}
