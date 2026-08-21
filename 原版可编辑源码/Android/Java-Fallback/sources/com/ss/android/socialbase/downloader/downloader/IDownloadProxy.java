package com.ss.android.socialbase.downloader.downloader;

public interface IDownloadProxy {
    void addDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r1);

    void addDownloadListener(int r1, int r2, com.ss.android.socialbase.downloader.depend.IDownloadListener r3, com.ss.android.socialbase.downloader.constants.ListenerType r4, boolean r5);

    void addDownloadListener(int r1, int r2, com.ss.android.socialbase.downloader.depend.IDownloadListener r3, com.ss.android.socialbase.downloader.constants.ListenerType r4, boolean r5, boolean r6);

    void addProcessCallback(com.ss.android.socialbase.downloader.depend.ProcessCallback r1);

    boolean canResume(int r1);

    void cancel(int r1, boolean r2);

    void clearData();

    void clearDownloadData(int r1, boolean r2);

    void dispatchProcessCallback(int r1, int r2);

    void forceDownloadIngoreRecommendSize(int r1);

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo();

    long getCurBytes(int r1);

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> getDownloadChunk(int r1);

    com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider getDownloadFileUriProvider(int r1);

    int getDownloadId(java.lang.String r1, java.lang.String r2);

    com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r1);

    com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(java.lang.String r1, java.lang.String r2);

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r1);

    com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener getDownloadNotificationEventListener(int r1);

    int getDownloadWithIndependentProcessStatus(int r1);

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadingDownloadInfosWithMimeType(java.lang.String r1);

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r1);

    com.ss.android.socialbase.downloader.depend.INotificationClickCallback getNotificationClickCallback(int r1);

    int getStatus(int r1);

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r1);

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getUnCompletedDownloadInfosWithMimeType(java.lang.String r1);

    boolean isDownloadCacheSyncSuccess();

    boolean isDownloadSuccessAndFileNotExist(com.ss.android.socialbase.downloader.model.DownloadInfo r1);

    boolean isDownloading(int r1);

    boolean isHttpServiceInit();

    boolean isServiceAlive();

    boolean isServiceForeground();

    void pause(int r1);

    void pauseAll();

    void removeAllDownloadChunk(int r1);

    boolean removeDownloadInfo(int r1);

    void removeDownloadListener(int r1, int r2, com.ss.android.socialbase.downloader.depend.IDownloadListener r3, com.ss.android.socialbase.downloader.constants.ListenerType r4, boolean r5);

    boolean removeDownloadTaskData(int r1);

    void resetDownloadData(int r1, boolean r2);

    void restart(int r1);

    void restartAllFailedDownloadTasks(java.util.List<java.lang.String> r1);

    void restartAllPauseReserveOnWifiDownloadTasks(java.util.List<java.lang.String> r1);

    void resume(int r1);

    boolean retryDelayStart(int r1);

    void setDownloadNotificationEventListener(int r1, com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r2);

    void setDownloadWithIndependentProcessStatus(int r1, boolean r2);

    void setLogLevel(int r1);

    void setThrottleNetSpeed(int r1, long r2);

    void startForeground(int r1, android.app.Notification r2);

    void startService();

    void stopForeground(boolean r1, boolean r2);

    void syncDownloadChunks(int r1, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r2);

    void syncDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r1);

    void syncDownloadInfoFromOtherCache(int r1, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r2);

    void tryDownload(com.ss.android.socialbase.downloader.model.DownloadTask r1);

    void tryDownloadWithEngine(com.ss.android.socialbase.downloader.model.DownloadTask r1);

    void updateDownloadChunk(int r1, int r2, long r3);

    boolean updateDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r1);

    void updateSubDownloadChunk(int r1, int r2, int r3, long r4);

    void updateSubDownloadChunkIndex(int r1, int r2, int r3, int r4);
}
