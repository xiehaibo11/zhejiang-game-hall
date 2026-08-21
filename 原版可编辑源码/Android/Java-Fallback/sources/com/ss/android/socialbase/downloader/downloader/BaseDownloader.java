package com.ss.android.socialbase.downloader.downloader;

class BaseDownloader {
    private java.lang.String globalDefaultSavePath;
    private java.lang.String globalDefaultSaveTempPath;

    BaseDownloader() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.io.File getGlobalSaveDir(java.lang.String r3, boolean r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L28
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L28
            boolean r3 = r0.exists()     // Catch: java.lang.Throwable -> L27
            if (r3 != 0) goto L17
            r0.mkdirs()     // Catch: java.lang.Throwable -> L27
            goto L29
        L17:
            boolean r3 = r0.isDirectory()     // Catch: java.lang.Throwable -> L27
            if (r3 != 0) goto L29
            if (r4 == 0) goto L26
            r0.delete()     // Catch: java.lang.Throwable -> L27
            r0.mkdirs()     // Catch: java.lang.Throwable -> L27
            goto L29
        L26:
            return r1
        L27:
            r1 = r0
        L28:
            r0 = r1
        L29:
            return r0
    }

    public static com.ss.android.socialbase.downloader.model.DownloadTask with(android.content.Context r0) {
            com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = new com.ss.android.socialbase.downloader.model.DownloadTask
            r0.<init>()
            return r0
    }

    public void addMainThreadListener(int r4, com.ss.android.socialbase.downloader.depend.IDownloadListener r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN
            r2 = 0
            r0.addDownloadListener(r4, r5, r1, r2)
            return
    }

    public void addNotificationListener(int r4, com.ss.android.socialbase.downloader.depend.IDownloadListener r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION
            r2 = 0
            r0.addDownloadListener(r4, r5, r1, r2)
            return
    }

    public void addSubThreadListener(int r4, com.ss.android.socialbase.downloader.depend.IDownloadListener r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB
            r2 = 0
            r0.addDownloadListener(r4, r5, r1, r2)
            return
    }

    public boolean canResume(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            boolean r2 = r0.canResume(r2)
            return r2
    }

    public void cancel(int r2) {
            r1 = this;
            r0 = 1
            r1.cancel(r2, r0)
            return
    }

    public void cancel(int r2, boolean r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.cancel(r2, r3)
            return
    }

    public void clearDownloadData(int r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r1 = 1
            r0.clearDownloadData(r3, r1)
            return
    }

    public void clearDownloadData(int r2, boolean r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.clearDownloadData(r2, r3)
            return
    }

    public void destoryDownloader() {
            r0 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.unRegisterDownloadReceiver()
            return
    }

    public void forceDownloadIngoreRecommendSize(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.forceDownloadIngoreRecommendSize(r2)
            return
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            java.util.List r0 = r0.getAllDownloadInfo()
            return r0
    }

    public long getCurBytes(int r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            long r0 = r0.getCurBytes(r3)
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider getDownloadFileUriProvider(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r2 = r0.getDownloadFileUriProvider(r2)
            return r2
    }

    public int getDownloadId(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            int r2 = r0.getDownloadId(r2, r3)
            return r2
    }

    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.getDownloadInfo(r2)
            return r2
    }

    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.getDownloadInfo(r2, r3)
            return r2
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            java.util.List r2 = r0.getDownloadInfoList(r2)
            return r2
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener getDownloadNotificationEventListener(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r2 = r0.getDownloadNotificationEventListener(r2)
            return r2
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadingDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            java.util.List r2 = r0.getDownloadingDownloadInfosWithMimeType(r2)
            return r2
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            java.util.List r2 = r0.getFailedDownloadInfosWithMimeType(r2)
            return r2
    }

    public java.io.File getGlobalSaveDir() {
            r2 = this;
            java.lang.String r0 = r2.globalDefaultSavePath
            r1 = 1
            java.io.File r0 = r2.getGlobalSaveDir(r0, r1)
            return r0
    }

    public java.io.File getGlobalSaveTempDir() {
            r2 = this;
            java.lang.String r0 = r2.globalDefaultSaveTempPath
            r1 = 0
            java.io.File r0 = r2.getGlobalSaveDir(r0, r1)
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener getReserveWifiStatusListener() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getReserveWifiStatusListener()
            return r0
    }

    public int getStatus(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            int r2 = r0.getStatus(r2)
            return r2
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            java.util.List r2 = r0.getSuccessedDownloadInfosWithMimeType(r2)
            return r2
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getUnCompletedDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            java.util.List r2 = r0.getUnCompletedDownloadInfosWithMimeType(r2)
            return r2
    }

    public boolean isDownloadCacheSyncSuccess() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            boolean r0 = r0.isDownloadCacheSyncSuccess()
            return r0
    }

    public boolean isDownloadServiceForeground(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r2 = r0.getDownloadHandler(r2)
            boolean r2 = r2.isServiceForeground()
            return r2
    }

    public boolean isDownloadSuccessAndFileNotExist(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            boolean r2 = r0.isDownloadSuccessAndFileNotExist(r2)
            return r2
    }

    public boolean isDownloading(int r2) {
            r1 = this;
            r0 = 4194304(0x400000, float:5.877472E-39)
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r0)
            if (r0 == 0) goto L16
            monitor-enter(r1)
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()     // Catch: java.lang.Throwable -> L13
            boolean r2 = r0.isDownloading(r2)     // Catch: java.lang.Throwable -> L13
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L13
            return r2
        L13:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L13
            throw r2
        L16:
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            boolean r2 = r0.isDownloading(r2)
            return r2
    }

    public boolean isHttpServiceInit() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            boolean r0 = r0.isHttpServiceInit()
            return r0
    }

    public void pause(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.pause(r2)
            return
    }

    public void pauseAll() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.pauseAll()
            return
    }

    public void registerDownloadCacheSyncListener(com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.registerDownloadCacheSyncListener(r2)
            return
    }

    public void registerDownloaderProcessConnectedListener(com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.registerDownloaderProcessConnectedListener(r2)
            return
    }

    public void removeMainThreadListener(int r4, com.ss.android.socialbase.downloader.depend.IDownloadListener r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN
            r2 = 0
            r0.removeDownloadListener(r4, r5, r1, r2)
            return
    }

    public void removeNotificationListener(int r4, com.ss.android.socialbase.downloader.depend.IDownloadListener r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION
            r2 = 0
            r0.removeDownloadListener(r4, r5, r1, r2)
            return
    }

    public void removeSubThreadListener(int r4, com.ss.android.socialbase.downloader.depend.IDownloadListener r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB
            r2 = 0
            r0.removeDownloadListener(r4, r5, r1, r2)
            return
    }

    @java.lang.Deprecated
    public void removeTaskMainListener(int r5) {
            r4 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN
            r2 = 0
            r3 = 1
            r0.removeDownloadListener(r5, r2, r1, r3)
            return
    }

    @java.lang.Deprecated
    public void removeTaskNotificationListener(int r5) {
            r4 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION
            r2 = 0
            r3 = 1
            r0.removeDownloadListener(r5, r2, r1, r3)
            return
    }

    @java.lang.Deprecated
    public void removeTaskSubListener(int r5) {
            r4 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB
            r2 = 0
            r3 = 1
            r0.removeDownloadListener(r5, r2, r1, r3)
            return
    }

    public void restart(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.restart(r2)
            return
    }

    public void restartAllFailedDownloadTasks(java.util.List<java.lang.String> r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.restartAllFailedDownloadTasks(r2)
            return
    }

    public void restartAllPauseReserveOnWifiDownloadTasks(java.util.List<java.lang.String> r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.restartAllPauseReserveOnWifiDownloadTasks(r2)
            return
    }

    public void resume(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.resume(r2)
            return
    }

    public void setDefaultSavePath(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L8
            r1.globalDefaultSavePath = r2
        L8:
            return
    }

    public void setDefaultSaveTempPath(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L8
            r1.globalDefaultSaveTempPath = r2
        L8:
            return
    }

    public void setDownloadInMultiProcess() {
            r1 = this;
            r0 = 4194304(0x400000, float:5.877472E-39)
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r0)
            if (r0 == 0) goto L11
            monitor-enter(r1)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setDownloadInMultiProcess()     // Catch: java.lang.Throwable -> Le
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Le
            goto L14
        Le:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Le
            throw r0
        L11:
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setDownloadInMultiProcess()
        L14:
            return
    }

    public void setDownloadNotificationEventListener(int r2, com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.setDownloadNotificationEventListener(r2, r3)
            return
    }

    public void setLogLevel(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.setLogLevel(r2)
            return
    }

    @java.lang.Deprecated
    public void setMainThreadListener(int r4, com.ss.android.socialbase.downloader.depend.IDownloadListener r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN
            r2 = 1
            r0.addDownloadListener(r4, r5, r1, r2)
            return
    }

    @java.lang.Deprecated
    public void setMainThreadListener(int r7, com.ss.android.socialbase.downloader.depend.IDownloadListener r8, boolean r9) {
            r6 = this;
            if (r8 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.constants.ListenerType r3 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN
            r4 = 1
            r1 = r7
            r2 = r8
            r5 = r9
            r0.addDownloadListener(r1, r2, r3, r4, r5)
            return
    }

    @java.lang.Deprecated
    public void setNotificationListener(int r4, com.ss.android.socialbase.downloader.depend.IDownloadListener r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION
            r2 = 1
            r0.addDownloadListener(r4, r5, r1, r2)
            return
    }

    public void setReserveWifiStatusListener(com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener r1) {
            r0 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setReserveWifiStatusListener(r1)
            return
    }

    @java.lang.Deprecated
    public void setSubThreadListener(int r4, com.ss.android.socialbase.downloader.depend.IDownloadListener r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB
            r2 = 1
            r0.addDownloadListener(r4, r5, r1, r2)
            return
    }

    public void setThrottleNetSpeed(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.setThrottleNetSpeed(r2, r3)
            return
    }

    public void unRegisterDownloadCacheSyncListener(com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.unRegisterDownloadCacheSyncListener(r2)
            return
    }

    public void unRegisterDownloaderProcessConnectedListener(com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.unRegisterDownloaderProcessConnectedListener(r2)
            return
    }
}
