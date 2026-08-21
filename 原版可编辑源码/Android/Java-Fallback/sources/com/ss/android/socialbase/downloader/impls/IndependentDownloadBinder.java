package com.ss.android.socialbase.downloader.impls;

public class IndependentDownloadBinder extends com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub {
    private static final java.lang.String TAG = null;
    private final com.ss.android.socialbase.downloader.downloader.IDownloadProxy downloadProxy;

    static {
            java.lang.Class<com.ss.android.socialbase.downloader.impls.IndependentDownloadBinder> r0 = com.ss.android.socialbase.downloader.impls.IndependentDownloadBinder.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.impls.IndependentDownloadBinder.TAG = r0
            return
    }

    public IndependentDownloadBinder() {
            r2 = this;
            r2.<init>()
            com.ss.android.socialbase.downloader.impls.ProcessDownloadHandler r0 = new com.ss.android.socialbase.downloader.impls.ProcessDownloadHandler
            r1 = 1
            r0.<init>(r1)
            r2.downloadProxy = r0
            return
    }

    @Override
    public void addDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.addDownloadChunk(r2)
            return
    }

    @Override
    public void addDownloadListener(int r7, int r8, com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r9, int r10, boolean r11) throws android.os.RemoteException {
            r6 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r6.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.depend.IDownloadListener r3 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertListenerFromAidl(r9)
            com.ss.android.socialbase.downloader.constants.ListenerType r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.convertListenerType(r10)
            r1 = r7
            r2 = r8
            r5 = r11
            r0.addDownloadListener(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public void addDownloadListener1(int r8, int r9, com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r10, int r11, boolean r12, boolean r13) throws android.os.RemoteException {
            r7 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r7.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.depend.IDownloadListener r3 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertListenerFromAidl(r10)
            com.ss.android.socialbase.downloader.constants.ListenerType r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.convertListenerType(r11)
            r1 = r8
            r2 = r9
            r5 = r12
            r6 = r13
            r0.addDownloadListener(r1, r2, r3, r4, r5, r6)
            return
    }

    @Override
    public void addProcessCallback(com.ss.android.socialbase.downloader.depend.ProcessAidlCallback r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.depend.ProcessCallback r2 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertProcessAidlCallbackFromAidl(r2)
            r0.addProcessCallback(r2)
            return
    }

    @Override
    public boolean canResume(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            boolean r2 = r0.canResume(r2)
            return r2
    }

    @Override
    public void cancel(int r2, boolean r3) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.cancel(r2, r3)
            return
    }

    @Override
    public void clearData() throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.clearData()
            return
    }

    @Override
    public void clearDownloadData(int r2, boolean r3) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.clearDownloadData(r2, r3)
            return
    }

    @Override
    public void dispatchProcessCallback(int r2, int r3) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.dispatchProcessCallback(r2, r3)
            return
    }

    @Override
    public void forceDownloadIngoreRecommendSize(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.forceDownloadIngoreRecommendSize(r2)
            return
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo() throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.util.List r0 = r0.getAllDownloadInfo()
            return r0
    }

    @Override
    public long getCurBytes(int r3) throws android.os.RemoteException {
            r2 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r2.downloadProxy
            if (r0 != 0) goto L7
            r0 = 0
            return r0
        L7:
            long r0 = r0.getCurBytes(r3)
            return r0
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> getDownloadChunk(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.util.List r2 = r0.getDownloadChunk(r2)
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider getDownloadFileUriProvider(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r2 = r0.getDownloadFileUriProvider(r2)
            com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r2 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertFileProviderToAidl(r2)
            return r2
    }

    @Override
    public int getDownloadId(java.lang.String r2, java.lang.String r3) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            int r2 = r0.getDownloadId(r2, r3)
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.getDownloadInfo(r2)
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfoByUrlAndPath(java.lang.String r2, java.lang.String r3) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.getDownloadInfo(r2, r3)
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.util.List r2 = r0.getDownloadInfoList(r2)
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener getDownloadNotificationEventListener(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r2 = r0.getDownloadNotificationEventListener(r2)
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r2 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertDownloadNotificationEventListenerToAidl(r2)
            return r2
    }

    @Override
    public int getDownloadWithIndependentProcessStatus(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            int r2 = r0.getDownloadWithIndependentProcessStatusInner(r2)
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadingDownloadInfosWithMimeType(java.lang.String r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.util.List r2 = r0.getDownloadingDownloadInfosWithMimeType(r2)
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.util.List r2 = r0.getFailedDownloadInfosWithMimeType(r2)
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback getNotificationClickCallback(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r2 = r0.getNotificationClickCallback(r2)
            com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r2 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertNotificationClickCallbackToAidl(r2)
            return r2
    }

    @Override
    public int getStatus(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            int r2 = r0.getStatus(r2)
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.util.List r2 = r0.getSuccessedDownloadInfosWithMimeType(r2)
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getUnCompletedDownloadInfosWithMimeType(java.lang.String r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.util.List r2 = r0.getUnCompletedDownloadInfosWithMimeType(r2)
            return r2
    }

    @Override
    public boolean isDownloadCacheSyncSuccess() throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = r0.isDownloadCacheSyncSuccess()
            return r0
    }

    @Override
    public boolean isDownloadSuccessAndFileNotExist(com.ss.android.socialbase.downloader.model.DownloadInfo r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            boolean r2 = r0.isDownloadSuccessAndFileNotExist(r2)
            return r2
    }

    @Override
    public boolean isDownloading(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            boolean r2 = r0.isDownloading(r2)
            return r2
    }

    @Override
    public boolean isHttpServiceInit() throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = r0.isHttpServiceInit()
            return r0
    }

    @Override
    public boolean isServiceForeground() throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = r0.isServiceForeground()
            return r0
    }

    @Override
    public void pause(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.pause(r2)
            return
    }

    @Override
    public void pauseAll() throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.pauseAll()
            return
    }

    @Override
    public void removeAllDownloadChunk(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.removeAllDownloadChunk(r2)
            return
    }

    @Override
    public boolean removeDownloadInfo(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            boolean r2 = r0.removeDownloadInfo(r2)
            return r2
    }

    @Override
    public void removeDownloadListener(int r7, int r8, com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r9, int r10, boolean r11) throws android.os.RemoteException {
            r6 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r6.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.depend.IDownloadListener r3 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertListenerFromAidl(r9)
            com.ss.android.socialbase.downloader.constants.ListenerType r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.convertListenerType(r10)
            r1 = r7
            r2 = r8
            r5 = r11
            r0.removeDownloadListener(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public boolean removeDownloadTaskData(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            boolean r2 = r0.removeDownloadTaskData(r2)
            return r2
    }

    @Override
    public void resetDownloadData(int r2, boolean r3) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.clearDownloadData(r2, r3)
            return
    }

    @Override
    public void restart(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.restart(r2)
            return
    }

    @Override
    public void restartAllFailedDownloadTasks(java.util.List<java.lang.String> r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.restartAllFailedDownloadTasks(r2)
            return
    }

    @Override
    public void restartAllPauseReserveOnWifiDownloadTasks(java.util.List<java.lang.String> r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 == 0) goto L7
            r0.restartAllPauseReserveOnWifiDownloadTasks(r2)
        L7:
            return
    }

    @Override
    public void resume(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.resume(r2)
            return
    }

    @Override
    public boolean retryDelayStart(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            boolean r2 = r0.retryDelayStart(r2)
            return r2
    }

    @Override
    public void setDownloadNotificationEventListener(int r2, com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r3) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r3 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertDownloadNotificationEventListenerFromAidl(r3)
            r0.setDownloadNotificationEventListener(r2, r3)
            return
    }

    @Override
    public void setDownloadWithIndependentProcessStatus(int r2, boolean r3) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.setDownloadIndependentProcessStatus(r2, r3)
            return
    }

    @Override
    public void setLogLevel(int r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.setLogLevel(r2)
            return
    }

    @Override
    public void setThrottleNetSpeed(int r2, long r3) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.setThrottleNetSpeed(r2, r3)
            return
    }

    @Override
    public void startForeground(int r2, android.app.Notification r3) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.startForeground(r2, r3)
            return
    }

    @Override
    public void stopForeground(boolean r3) throws android.os.RemoteException {
            r2 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r2.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r1 = 1
            r0.stopForeground(r1, r3)
            return
    }

    @Override
    public void syncDownloadChunks(int r2, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.syncDownloadChunks(r2, r3)
            return
    }

    @Override
    public void syncDownloadInfoFromOtherCache(int r2, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.syncDownloadInfoFromOtherCache(r2, r3)
            return
    }

    @Override
    public void tryDownload(com.ss.android.socialbase.downloader.model.DownloadAidlTask r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertDownloadTaskFromAidl(r2)
            r0.tryDownloadWithEngine(r2)
            return
    }

    @Override
    public void updateDownloadChunk(int r2, int r3, long r4) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.updateDownloadChunk(r2, r3, r4)
            return
    }

    @Override
    public boolean updateDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r2) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            boolean r2 = r0.updateDownloadInfo(r2)
            return r2
    }

    @Override
    public void updateSubDownloadChunk(int r7, int r8, int r9, long r10) throws android.os.RemoteException {
            r6 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r6.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.updateSubDownloadChunk(r1, r2, r3, r4)
            return
    }

    @Override
    public void updateSubDownloadChunkIndex(int r2, int r3, int r4, int r5) throws android.os.RemoteException {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            if (r0 != 0) goto L5
            return
        L5:
            r0.updateSubDownloadChunkIndex(r2, r3, r4, r5)
            return
    }
}
