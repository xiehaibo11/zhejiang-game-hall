package com.ss.android.socialbase.downloader.impls;

public class ProcessDownloadHandler implements com.ss.android.socialbase.downloader.downloader.IDownloadProxy {
    private final boolean bugFixServiceAlive;
    private final com.ss.android.socialbase.downloader.downloader.IDownloadCache downloadCache;
    private final com.ss.android.socialbase.downloader.impls.AbsDownloadEngine downloadEngine;
    private final com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler downloadServiceHandler;

    public ProcessDownloadHandler() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public ProcessDownloadHandler(boolean r3) {
            r2 = this;
            r2.<init>()
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadEngine()
            r2.downloadEngine = r0
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadCache()
            r2.downloadCache = r0
            if (r3 != 0) goto L18
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadServiceHandler()
            r2.downloadServiceHandler = r3
            goto L1e
        L18:
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getIndependentDownloadServiceHandler()
            r2.downloadServiceHandler = r3
        L1e:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            r0 = 0
            java.lang.String r1 = "service_alive"
            boolean r3 = r3.optBugFix(r1, r0)
            r2.bugFixServiceAlive = r3
            return
    }

    @Override
    public void addDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            r0.addDownloadChunk(r2)
            return
    }

    @Override
    public void addDownloadListener(int r7, int r8, com.ss.android.socialbase.downloader.depend.IDownloadListener r9, com.ss.android.socialbase.downloader.constants.ListenerType r10, boolean r11) {
            r6 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r6.downloadEngine
            if (r0 == 0) goto Lc
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.addDownloadListener(r1, r2, r3, r4, r5)
        Lc:
            return
    }

    @Override
    public void addDownloadListener(int r8, int r9, com.ss.android.socialbase.downloader.depend.IDownloadListener r10, com.ss.android.socialbase.downloader.constants.ListenerType r11, boolean r12, boolean r13) {
            r7 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r7.downloadEngine
            if (r0 == 0) goto Ld
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.addDownloadListener(r1, r2, r3, r4, r5, r6)
        Ld:
            return
    }

    @Override
    public void addProcessCallback(com.ss.android.socialbase.downloader.depend.ProcessCallback r1) {
            r0 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.addProcessCallback(r1)
            return
    }

    @Override
    public boolean canResume(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L9
            boolean r2 = r0.isInDownloadTaskPool(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public void cancel(int r2, boolean r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L7
            r0.cancel(r2, r3)
        L7:
            return
    }

    @Override
    public void clearData() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            r0.clearData()
            return
    }

    @Override
    public void clearDownloadData(int r2, boolean r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L7
            r0.clearDownloadData(r2, r3)
        L7:
            return
    }

    @Override
    public void dispatchProcessCallback(int r3, int r4) {
            r2 = this;
            java.util.List r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getProcessCallbacks()
            if (r0 == 0) goto L20
            java.util.List r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getProcessCallbacks()
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.ss.android.socialbase.downloader.depend.ProcessCallback r1 = (com.ss.android.socialbase.downloader.depend.ProcessCallback) r1
            if (r1 == 0) goto Le
            r1.callback(r4, r3)
            goto Le
        L20:
            return
    }

    @Override
    public void forceDownloadIngoreRecommendSize(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L7
            r0.forceDownloadIgnoreRecommendSize(r2)
        L7:
            return
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            if (r0 == 0) goto L9
            java.util.List r0 = r0.getAllDownloadInfo()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public long getCurBytes(int r6) {
            r5 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r5.downloadCache
            r1 = 0
            if (r0 != 0) goto L7
            return r1
        L7:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo(r6)
            if (r0 != 0) goto Le
            return r1
        Le:
            int r3 = r0.getChunkCount()
            r4 = 1
            if (r3 > r4) goto L1a
            long r0 = r0.getCurBytes()
            return r0
        L1a:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r5.downloadCache
            java.util.List r6 = r0.getDownloadChunk(r6)
            if (r6 == 0) goto L2e
            int r0 = r6.size()
            if (r0 == r3) goto L29
            goto L2e
        L29:
            long r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getTotalOffset(r6)
            return r0
        L2e:
            return r1
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> getDownloadChunk(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            java.util.List r2 = r0.getDownloadChunk(r2)
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider getDownloadFileUriProvider(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L9
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r2 = r0.getDownloadFileUriProvider(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public int getDownloadId(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            int r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadId(r1, r2)
            return r1
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L9
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.getDownloadInfo(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            int r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadId(r1, r2)
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r0.getDownloadInfo(r1)
            return r1
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L9
            java.util.List r2 = r0.getDownloadInfoList(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener getDownloadNotificationEventListener(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L9
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r2 = r0.getDownloadNotificationEventListener(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public int getDownloadWithIndependentProcessStatus(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            int r2 = r0.getDownloadWithIndependentProcessStatus(r2)
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadingDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L9
            java.util.List r2 = r0.getDownloadingDownloadInfosWithMimeType(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            if (r0 == 0) goto L9
            java.util.List r2 = r0.getFailedDownloadInfosWithMimeType(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.depend.INotificationClickCallback getNotificationClickCallback(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L9
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r2 = r0.getNotificationClickCallback(r2)
            goto La
        L9:
            r2 = 0
        La:
            if (r2 != 0) goto L10
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getNotificationClickCallback()
        L10:
            return r2
    }

    @Override
    public int getStatus(int r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r2.downloadEngine
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r0.getDownloadInfo(r3)
            if (r3 != 0) goto Ld
            return r1
        Ld:
            int r3 = r3.getStatus()
            return r3
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            if (r0 == 0) goto L9
            java.util.List r2 = r0.getSuccessedDownloadInfosWithMimeType(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getUnCompletedDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            if (r0 == 0) goto L9
            java.util.List r2 = r0.getUnCompletedDownloadInfosWithMimeType(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public boolean isDownloadCacheSyncSuccess() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            boolean r0 = r0.isDownloadCacheSyncSuccess()
            return r0
    }

    @Override
    public boolean isDownloadSuccessAndFileNotExist(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            int r0 = r4.getStatus()
            java.lang.String r1 = r4.getSavePath()
            java.lang.String r2 = r4.getName()
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isDownloadSuccessAndFileNotExist(r0, r1, r2)
            if (r0 == 0) goto L2e
            r1 = 33554432(0x2000000, float:9.403955E-38)
            boolean r1 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r1)
            r2 = 1
            if (r1 == 0) goto L27
            int r4 = r4.getId()
            r3.clearDownloadData(r4, r2)
            goto L2e
        L27:
            int r4 = r4.getId()
            r3.resetDownloadData(r4, r2)
        L2e:
            return r0
    }

    @Override
    public boolean isDownloading(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L9
            boolean r2 = r0.isDownloading(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public boolean isHttpServiceInit() {
            r1 = this;
            boolean r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.isHttpServiceInit()
            return r0
    }

    @Override
    public boolean isServiceAlive() {
            r2 = this;
            boolean r0 = r2.bugFixServiceAlive
            r1 = 0
            if (r0 == 0) goto L10
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = r2.downloadServiceHandler
            if (r0 == 0) goto L10
            boolean r0 = r0.isServiceAlive()
            if (r0 == 0) goto L10
            r1 = 1
        L10:
            return r1
    }

    @Override
    public boolean isServiceForeground() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = r1.downloadServiceHandler
            if (r0 == 0) goto L9
            boolean r0 = r0.isServiceForeground()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public void pause(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L7
            r0.pause(r2)
        L7:
            return
    }

    @Override
    public void pauseAll() {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L7
            r0.shutDown()
        L7:
            return
    }

    @Override
    public void removeAllDownloadChunk(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            r0.removeAllDownloadChunk(r2)
            return
    }

    @Override
    public boolean removeDownloadInfo(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            boolean r2 = r0.removeDownloadInfo(r2)
            return r2
    }

    @Override
    public void removeDownloadListener(int r7, int r8, com.ss.android.socialbase.downloader.depend.IDownloadListener r9, com.ss.android.socialbase.downloader.constants.ListenerType r10, boolean r11) {
            r6 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r6.downloadEngine
            if (r0 == 0) goto Lc
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.removeDownloadListener(r1, r2, r3, r4, r5)
        Lc:
            return
    }

    @Override
    public boolean removeDownloadTaskData(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            boolean r2 = r0.removeDownloadTaskData(r2)
            return r2
    }

    @Override
    public void resetDownloadData(int r2, boolean r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L7
            r0.resetDownloadData(r2, r3)
        L7:
            return
    }

    @Override
    public void restart(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L7
            r0.restart(r2)
        L7:
            return
    }

    @Override
    public void restartAllFailedDownloadTasks(java.util.List<java.lang.String> r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L7
            r0.restartAllFailedDownloadTasks(r2)
        L7:
            return
    }

    @Override
    public void restartAllPauseReserveOnWifiDownloadTasks(java.util.List<java.lang.String> r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L7
            r0.restartAllPauseReserveOnWifiDownloadTasks(r2)
        L7:
            return
    }

    @Override
    public void resume(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L7
            r0.resume(r2)
        L7:
            return
    }

    @Override
    public boolean retryDelayStart(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L9
            boolean r2 = r0.retryDelayStart(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public void setDownloadNotificationEventListener(int r2, com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L7
            r0.setDownloadNotificationEventListener(r2, r3)
        L7:
            return
    }

    @Override
    public void setDownloadWithIndependentProcessStatus(int r2, boolean r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.setDownloadWithIndependentProcessStatus(r2, r3)
            return
    }

    @Override
    public void setLogLevel(int r1) {
            r0 = this;
            com.ss.android.socialbase.downloader.logger.Logger.setLogLevel(r1)
            return
    }

    @Override
    public void setThrottleNetSpeed(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = r1.downloadEngine
            if (r0 == 0) goto L7
            r0.setThrottleNetSpeed(r2, r3)
        L7:
            return
    }

    @Override
    public void startForeground(int r2, android.app.Notification r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = r1.downloadServiceHandler
            if (r0 == 0) goto L7
            r0.startForeground(r2, r3)
        L7:
            return
    }

    @Override
    public void startService() {
            r0 = this;
            return
    }

    @Override
    public void stopForeground(boolean r1, boolean r2) {
            r0 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r1 = r0.downloadServiceHandler
            if (r1 == 0) goto L7
            r1.stopForeground(r2)
        L7:
            return
    }

    @Override
    public void syncDownloadChunks(int r2, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            r0.syncDownloadChunks(r2, r3)
            return
    }

    @Override
    public void syncDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            r0.syncDownloadInfo(r2)
            return
    }

    @Override
    public void syncDownloadInfoFromOtherCache(int r2, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            r0.syncDownloadInfoFromOtherCache(r2, r3)
            return
    }

    @Override
    public void tryDownload(com.ss.android.socialbase.downloader.model.DownloadTask r6) {
            r5 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = r5.downloadServiceHandler
            if (r0 == 0) goto L8
            r0.tryDownload(r6)
            goto L2e
        L8:
            if (r6 == 0) goto L2e
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r0 = r6.getMonitorDepend()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r6.getDownloadInfo()
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException
            r3 = 1003(0x3eb, float:1.406E-42)
            java.lang.String r4 = "downloadServiceHandler is null"
            r2.<init>(r3, r4)
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r6.getDownloadInfo()
            if (r3 == 0) goto L2a
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r6.getDownloadInfo()
            int r6 = r6.getStatus()
            goto L2b
        L2a:
            r6 = 0
        L2b:
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSendWithTaskMonitor(r0, r1, r2, r6)
        L2e:
            return
    }

    @Override
    public void tryDownloadWithEngine(com.ss.android.socialbase.downloader.model.DownloadTask r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = r1.downloadServiceHandler
            if (r0 == 0) goto L7
            r0.tryDownloadWithEngine(r2)
        L7:
            return
    }

    @Override
    public void updateDownloadChunk(int r2, int r3, long r4) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            r0.updateDownloadChunk(r2, r3, r4)
            return
    }

    @Override
    public boolean updateDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            boolean r2 = r0.updateDownloadInfo(r2)
            return r2
    }

    @Override
    public void updateSubDownloadChunk(int r7, int r8, int r9, long r10) {
            r6 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r6.downloadCache
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.updateSubDownloadChunk(r1, r2, r3, r4)
            return
    }

    @Override
    public void updateSubDownloadChunkIndex(int r2, int r3, int r4, int r5) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            r0.updateSubDownloadChunkIndex(r2, r3, r4, r5)
            return
    }
}
