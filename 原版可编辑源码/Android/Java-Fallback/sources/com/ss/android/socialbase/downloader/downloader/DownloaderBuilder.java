package com.ss.android.socialbase.downloader.downloader;

public class DownloaderBuilder {
    private com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator chunkAdjustCalculator;
    private com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator chunkCntCalculator;
    private java.util.concurrent.ExecutorService chunkDownloadExecutor;
    private final android.content.Context context;
    private java.util.concurrent.ExecutorService cpuThreadExecutor;
    private java.util.concurrent.ExecutorService dbThreadExecutor;
    private com.ss.android.socialbase.downloader.downloader.IDownloadCache downloadCache;
    private java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> downloadCompleteHandlers;
    private com.ss.android.socialbase.downloader.network.IDownloadDns downloadDns;
    private int downloadExpSwitch;
    private boolean downloadInMultiProcess;
    private com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler downloadLaunchHandler;
    private com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener downloadMonitorListener;
    private com.ss.android.socialbase.downloader.depend.IDownloadSettings downloadSetting;
    private com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService headHttpService;
    private com.ss.android.socialbase.downloader.network.IDownloadHttpService httpService;
    private com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator idGenerator;
    private java.util.concurrent.ExecutorService ioThreadExecutor;
    private int maxDownloadPoolSize;
    private java.util.concurrent.ExecutorService mixApkDownloadExecutor;
    private java.util.concurrent.ExecutorService mixDefaultDownloadExecutor;
    private java.util.concurrent.ExecutorService mixFrequentDownloadExecutor;
    private com.ss.android.socialbase.downloader.downloader.IMonitorConfig monitorConfig;
    private boolean needAutoRefreshUnSuccessTask;
    private com.ss.android.socialbase.downloader.depend.INotificationClickCallback notificationClickCallback;
    private java.util.concurrent.ExecutorService okHttpDispatcherExecutor;
    private com.ss.android.socialbase.downloader.downloader.ITTNetHandler ttNetHandler;
    private int writeBufferSize;

    public DownloaderBuilder(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.downloadCompleteHandlers = r0
            r0 = 1
            r1.needAutoRefreshUnSuccessTask = r0
            r0 = 1056964607(0x3effffff, float:0.49999997)
            r1.downloadExpSwitch = r0
            r1.context = r2
            return
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder addDownloadCompleteHandler(com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler r3) {
            r2 = this;
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r0 = r2.downloadCompleteHandlers
            monitor-enter(r0)
            if (r3 == 0) goto L15
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r1 = r2.downloadCompleteHandlers     // Catch: java.lang.Throwable -> L17
            boolean r1 = r1.contains(r3)     // Catch: java.lang.Throwable -> L17
            if (r1 == 0) goto Le
            goto L15
        Le:
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r1 = r2.downloadCompleteHandlers     // Catch: java.lang.Throwable -> L17
            r1.add(r3)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return r2
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return r2
        L17:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r3
    }

    public com.ss.android.socialbase.downloader.downloader.Downloader build() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = new com.ss.android.socialbase.downloader.downloader.Downloader
            r0.<init>(r1)
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder chunkAdjustCalculator(com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r1) {
            r0 = this;
            r0.chunkAdjustCalculator = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder chunkCntCalculator(com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r1) {
            r0 = this;
            r0.chunkCntCalculator = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder chunkThreadExecutor(java.util.concurrent.ExecutorService r1) {
            r0 = this;
            r0.chunkDownloadExecutor = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder cpuThreadExecutor(java.util.concurrent.ExecutorService r1) {
            r0 = this;
            r0.cpuThreadExecutor = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder dbThreadExecutor(java.util.concurrent.ExecutorService r1) {
            r0 = this;
            r0.dbThreadExecutor = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder downloadCache(com.ss.android.socialbase.downloader.downloader.IDownloadCache r1) {
            r0 = this;
            r0.downloadCache = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder downloadDns(com.ss.android.socialbase.downloader.network.IDownloadDns r1) {
            r0 = this;
            r0.downloadDns = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder downloadExpSwitch(int r1) {
            r0 = this;
            r0.downloadExpSwitch = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder downloadInMultiProcess(boolean r1) {
            r0 = this;
            r0.downloadInMultiProcess = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder downloadLaunchHandler(com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler r1) {
            r0 = this;
            r0.downloadLaunchHandler = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder downloadMonitorListener(com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener r1) {
            r0 = this;
            r0.downloadMonitorListener = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder downloadSetting(com.ss.android.socialbase.downloader.depend.IDownloadSettings r1) {
            r0 = this;
            r0.downloadSetting = r1
            return r0
    }

    public java.util.concurrent.ExecutorService getCPUThreadExecutor() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.cpuThreadExecutor
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator getChunkAdjustCalculator() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r0 = r1.chunkAdjustCalculator
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator getChunkCntCalculator() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r0 = r1.chunkCntCalculator
            return r0
    }

    public java.util.concurrent.ExecutorService getChunkThreadExecutor() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.chunkDownloadExecutor
            return r0
    }

    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.context
            return r0
    }

    public java.util.concurrent.ExecutorService getDBThreadExecutor() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.dbThreadExecutor
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.IDownloadCache getDownloadCache() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            return r0
    }

    public java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> getDownloadCompleteHandlers() {
            r1 = this;
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r0 = r1.downloadCompleteHandlers
            return r0
    }

    public com.ss.android.socialbase.downloader.network.IDownloadDns getDownloadDns() {
            r1 = this;
            com.ss.android.socialbase.downloader.network.IDownloadDns r0 = r1.downloadDns
            return r0
    }

    public int getDownloadExpSwitch() {
            r1 = this;
            int r0 = r1.downloadExpSwitch
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler getDownloadLaunchHandler() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler r0 = r1.downloadLaunchHandler
            return r0
    }

    public com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener getDownloadMonitorListener() {
            r1 = this;
            com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener r0 = r1.downloadMonitorListener
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadSettings getDownloadSetting() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadSettings r0 = r1.downloadSetting
            return r0
    }

    public com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService getHeadHttpService() {
            r1 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService r0 = r1.headHttpService
            return r0
    }

    public com.ss.android.socialbase.downloader.network.IDownloadHttpService getHttpService() {
            r1 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHttpService r0 = r1.httpService
            return r0
    }

    public java.util.concurrent.ExecutorService getIOThreadExecutor() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.ioThreadExecutor
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator getIdGenerator() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator r0 = r1.idGenerator
            return r0
    }

    public int getMaxDownloadPoolSize() {
            r1 = this;
            int r0 = r1.maxDownloadPoolSize
            return r0
    }

    public java.util.concurrent.ExecutorService getMixApkDownloadExecutor() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.mixApkDownloadExecutor
            return r0
    }

    public java.util.concurrent.ExecutorService getMixDefaultDownloadExecutor() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.mixDefaultDownloadExecutor
            return r0
    }

    public java.util.concurrent.ExecutorService getMixFrequentDownloadExecutor() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.mixFrequentDownloadExecutor
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.IMonitorConfig getMonitorConfig() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IMonitorConfig r0 = r1.monitorConfig
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.INotificationClickCallback getNotificationClickCallback() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r0 = r1.notificationClickCallback
            return r0
    }

    public java.util.concurrent.ExecutorService getOkHttpDispatcherExecutor() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.okHttpDispatcherExecutor
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.ITTNetHandler getTTNetHandler() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.ITTNetHandler r0 = r1.ttNetHandler
            return r0
    }

    public int getWriteBufferSize() {
            r1 = this;
            int r0 = r1.writeBufferSize
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder headHttpService(com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService r1) {
            r0 = this;
            r0.headHttpService = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder httpService(com.ss.android.socialbase.downloader.network.IDownloadHttpService r1) {
            r0 = this;
            r0.httpService = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder idGenerator(com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator r1) {
            r0 = this;
            r0.idGenerator = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder ioThreadExecutor(java.util.concurrent.ExecutorService r1) {
            r0 = this;
            r0.ioThreadExecutor = r1
            return r0
    }

    public boolean isDownloadInMultiProcess() {
            r1 = this;
            boolean r0 = r1.downloadInMultiProcess
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder maxDownloadPoolSize(int r1) {
            r0 = this;
            r0.maxDownloadPoolSize = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder mixApkDownloadExecutor(java.util.concurrent.ExecutorService r1) {
            r0 = this;
            r0.mixApkDownloadExecutor = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder mixDefaultDownloadExecutor(java.util.concurrent.ExecutorService r1) {
            r0 = this;
            r0.mixDefaultDownloadExecutor = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder mixFrequentDownloadExecutor(java.util.concurrent.ExecutorService r1) {
            r0 = this;
            r0.mixFrequentDownloadExecutor = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder monitorConfig(com.ss.android.socialbase.downloader.downloader.IMonitorConfig r1) {
            r0 = this;
            r0.monitorConfig = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder needAutoRefreshUnSuccessTask(boolean r1) {
            r0 = this;
            r0.needAutoRefreshUnSuccessTask = r1
            return r0
    }

    public boolean needAutoRefreshUnSuccessTask() {
            r1 = this;
            boolean r0 = r1.needAutoRefreshUnSuccessTask
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder notificationClickCallback(com.ss.android.socialbase.downloader.depend.INotificationClickCallback r1) {
            r0 = this;
            r0.notificationClickCallback = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder okHttpDispatcherExecutor(java.util.concurrent.ExecutorService r1) {
            r0 = this;
            r0.okHttpDispatcherExecutor = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder ttNetHandler(com.ss.android.socialbase.downloader.downloader.ITTNetHandler r1) {
            r0 = this;
            r0.ttNetHandler = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.DownloaderBuilder writeBufferSize(int r1) {
            r0 = this;
            r0.writeBufferSize = r1
            return r0
    }
}
