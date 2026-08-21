package com.ss.android.socialbase.downloader.model;

public class DownloadTask {
    private boolean autoSetHashCodeForSameTask;
    private com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator chunkAdjustCalculator;
    private com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator chunkStrategy;
    private com.ss.android.socialbase.downloader.depend.IDownloadDepend depend;
    private com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler diskSpaceHandler;
    private final java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> downloadCompleteHandlers;
    private com.ss.android.socialbase.downloader.model.DownloadInfo downloadInfo;
    private com.ss.android.socialbase.downloader.model.DownloadInfo.Builder downloadInfoBuilder;
    private com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider fileUriProvider;
    private com.ss.android.socialbase.downloader.depend.IDownloadForbiddenHandler forbiddenHandler;
    private int hashCodeForSameTask;
    private com.ss.android.socialbase.downloader.depend.IDownloadInterceptor interceptor;
    private final android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> mainThreadListeners;
    private com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend monitorDepend;
    private boolean needDelayForCacheSync;
    private com.ss.android.socialbase.downloader.depend.INotificationClickCallback notificationClickCallback;
    private com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener notificationEventListener;
    private final android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> notificationListeners;
    private com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator retryDelayTimeCalculator;
    private final android.util.SparseArray<com.ss.android.socialbase.downloader.constants.ListenerType> singleListenerHashCodeMap;
    private final java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> singleListenerMap;
    private final android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> subThreadListeners;



    public DownloadTask() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.singleListenerMap = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1.singleListenerHashCodeMap = r0
            r0 = 0
            r1.needDelayForCacheSync = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.downloadCompleteHandlers = r0
            r0 = 1
            r1.autoSetHashCodeForSameTask = r0
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = new com.ss.android.socialbase.downloader.model.DownloadInfo$Builder
            r0.<init>()
            r1.downloadInfoBuilder = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1.mainThreadListeners = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1.subThreadListeners = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1.notificationListeners = r0
            return
    }

    public DownloadTask(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            r0 = this;
            r0.<init>()
            r0.downloadInfo = r1
            return
    }

    private void addAll(android.util.SparseArray r5, android.util.SparseArray r6) {
            r4 = this;
            if (r5 == 0) goto L1a
            if (r6 != 0) goto L5
            goto L1a
        L5:
            int r0 = r5.size()
            r1 = 0
        La:
            if (r1 >= r0) goto L1a
            int r2 = r5.keyAt(r1)
            java.lang.Object r3 = r5.get(r2)
            r6.put(r2, r3)
            int r1 = r1 + 1
            goto La
        L1a:
            return
    }

    private void addListenerToDownloadingSameTask(com.ss.android.socialbase.downloader.constants.ListenerType r7) {
            r6 = this;
            android.util.SparseArray r0 = r6.getDownloadListeners(r7)
            monitor-enter(r0)
            r1 = 0
            r2 = r1
        L7:
            int r3 = r0.size()     // Catch: java.lang.Throwable -> L29
            if (r2 >= r3) goto L27
            int r3 = r0.keyAt(r2)     // Catch: java.lang.Throwable -> L29
            java.lang.Object r3 = r0.get(r3)     // Catch: java.lang.Throwable -> L29
            com.ss.android.socialbase.downloader.depend.IDownloadListener r3 = (com.ss.android.socialbase.downloader.depend.IDownloadListener) r3     // Catch: java.lang.Throwable -> L29
            if (r3 == 0) goto L24
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r4 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()     // Catch: java.lang.Throwable -> L29
            int r5 = r6.getDownloadId()     // Catch: java.lang.Throwable -> L29
            r4.addDownloadListener(r5, r3, r7, r1)     // Catch: java.lang.Throwable -> L29
        L24:
            int r2 = r2 + 1
            goto L7
        L27:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            return
        L29:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r7
    }

    private void copyListeners(android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r4, android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r5) {
            r3 = this;
            r4.clear()
            r0 = 0
        L4:
            int r1 = r5.size()
            if (r0 >= r1) goto L1c
            int r1 = r5.keyAt(r0)
            java.lang.Object r2 = r5.get(r1)
            com.ss.android.socialbase.downloader.depend.IDownloadListener r2 = (com.ss.android.socialbase.downloader.depend.IDownloadListener) r2
            if (r2 == 0) goto L19
            r4.put(r1, r2)
        L19:
            int r0 = r0 + 1
            goto L4
        L1c:
            return
    }

    private void removeAll(android.util.SparseArray r4, android.util.SparseArray r5) {
            r3 = this;
            if (r4 == 0) goto L16
            if (r5 != 0) goto L5
            goto L16
        L5:
            int r0 = r5.size()
            r1 = 0
        La:
            if (r1 >= r0) goto L16
            int r2 = r5.keyAt(r1)
            r4.remove(r2)
            int r1 = r1 + 1
            goto La
        L16:
            return
    }

    private void setChunkCalculator() {
            r4 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            long r0 = r0.getThrottleNetSpeed()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L14
            com.ss.android.socialbase.downloader.model.DownloadTask$2 r0 = new com.ss.android.socialbase.downloader.model.DownloadTask$2
            r0.<init>(r4)
            r4.chunkStategy(r0)
        L14:
            return
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask addDownloadCompleteHandler(com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler r3) {
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

    public void addDownloadListener(int r2, com.ss.android.socialbase.downloader.depend.IDownloadListener r3, com.ss.android.socialbase.downloader.constants.ListenerType r4, boolean r5) {
            r1 = this;
            if (r3 != 0) goto L3
            return
        L3:
            if (r5 == 0) goto L19
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r5 = r1.singleListenerMap
            if (r5 == 0) goto L19
            r5.put(r4, r3)
            android.util.SparseArray<com.ss.android.socialbase.downloader.constants.ListenerType> r5 = r1.singleListenerHashCodeMap
            monitor-enter(r5)
            android.util.SparseArray<com.ss.android.socialbase.downloader.constants.ListenerType> r0 = r1.singleListenerHashCodeMap     // Catch: java.lang.Throwable -> L16
            r0.put(r2, r4)     // Catch: java.lang.Throwable -> L16
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L16
            goto L19
        L16:
            r2 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L16
            throw r2
        L19:
            android.util.SparseArray r4 = r1.getDownloadListeners(r4)
            if (r4 != 0) goto L20
            return
        L20:
            monitor-enter(r4)
            r4.put(r2, r3)     // Catch: java.lang.Throwable -> L26
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L26
            return
        L26:
            r2 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L26
            throw r2
    }

    public void addListenerToDownloadingSameTask() {
            r5 = this;
            java.lang.String r0 = "DownloadTask"
            java.lang.String r1 = "same task just tryDownloading, so add listener in last task instead of tryDownload"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.downloadInfo
            if (r0 == 0) goto L17
            boolean r0 = r0.isAddListenerToSameTask()
            if (r0 != 0) goto L17
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.downloadInfo
            r1 = 1
            r0.setAddListenerToSameTask(r1)
        L17:
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN
            r5.addListenerToDownloadingSameTask(r0)
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB
            r5.addListenerToDownloadingSameTask(r0)
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r0 = r5.monitorDepend
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r5.downloadInfo
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException
            r3 = 1003(0x3eb, float:1.406E-42)
            java.lang.String r4 = "has another same task, add Listener to old task"
            r2.<init>(r3, r4)
            r3 = 0
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSendWithTaskMonitor(r0, r1, r2, r3)
            return
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask addListenerToSameTask(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.addListenerToSameTask(r2)
            return r1
    }

    public void asyncDownload(com.ss.android.socialbase.downloader.downloader.IDownloadStartCallback r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadTask$1 r0 = new com.ss.android.socialbase.downloader.model.DownloadTask$1
            r0.<init>(r1, r2)
            com.ss.android.socialbase.downloader.thread.DownloadThreadPool.executeOP(r0)
            return
    }

    public synchronized int autoCalAndGetHashCodeForSameTask() {
            r1 = this;
            monitor-enter(r1)
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN     // Catch: java.lang.Throwable -> L1b
            com.ss.android.socialbase.downloader.depend.IDownloadListener r0 = r1.getSingleDownloadListener(r0)     // Catch: java.lang.Throwable -> L1b
            if (r0 != 0) goto Lf
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB     // Catch: java.lang.Throwable -> L1b
            com.ss.android.socialbase.downloader.depend.IDownloadListener r0 = r1.getSingleDownloadListener(r0)     // Catch: java.lang.Throwable -> L1b
        Lf:
            if (r0 == 0) goto L17
            int r0 = r0.hashCode()     // Catch: java.lang.Throwable -> L1b
            r1.hashCodeForSameTask = r0     // Catch: java.lang.Throwable -> L1b
        L17:
            int r0 = r1.hashCodeForSameTask     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r1)
            return r0
        L1b:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask autoResumed(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.autoResumed(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask autoSetHashCodeForSameTask(boolean r1) {
            r0 = this;
            r0.autoSetHashCodeForSameTask = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask backUpUrlRetryCount(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.backUpUrlRetryCount(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask backUpUrls(java.util.List<java.lang.String> r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.backUpUrls(r2)
            return r1
    }

    public boolean canShowNotification() {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo
            if (r0 == 0) goto L9
            boolean r0 = r0.canShowNotification()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask chunkAdjustCalculator(com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r1) {
            r0 = this;
            r0.chunkAdjustCalculator = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask chunkStategy(com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r1) {
            r0 = this;
            r0.chunkStrategy = r1
            return r0
    }

    public void copyInterfaceFromNewTask(com.ss.android.socialbase.downloader.model.DownloadTask r4) {
            r3 = this;
            com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r0 = r4.chunkAdjustCalculator
            r3.chunkAdjustCalculator = r0
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r0 = r4.chunkStrategy
            r3.chunkStrategy = r0
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r3.singleListenerMap
            r0.clear()
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r3.singleListenerMap
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r1 = r4.singleListenerMap
            r0.putAll(r1)
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r3.mainThreadListeners
            monitor-enter(r0)
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r1 = r3.mainThreadListeners     // Catch: java.lang.Throwable -> L82
            r1.clear()     // Catch: java.lang.Throwable -> L82
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r1 = r4.mainThreadListeners     // Catch: java.lang.Throwable -> L82
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r3.mainThreadListeners     // Catch: java.lang.Throwable -> L82
            r3.addAll(r1, r2)     // Catch: java.lang.Throwable -> L82
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L82
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r1 = r3.subThreadListeners
            monitor-enter(r1)
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r3.subThreadListeners     // Catch: java.lang.Throwable -> L7f
            r0.clear()     // Catch: java.lang.Throwable -> L7f
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r4.subThreadListeners     // Catch: java.lang.Throwable -> L7f
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r3.subThreadListeners     // Catch: java.lang.Throwable -> L7f
            r3.addAll(r0, r2)     // Catch: java.lang.Throwable -> L7f
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L7f
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r3.notificationListeners
            monitor-enter(r0)
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r1 = r3.notificationListeners     // Catch: java.lang.Throwable -> L7c
            r1.clear()     // Catch: java.lang.Throwable -> L7c
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r1 = r4.notificationListeners     // Catch: java.lang.Throwable -> L7c
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r3.notificationListeners     // Catch: java.lang.Throwable -> L7c
            r3.addAll(r1, r2)     // Catch: java.lang.Throwable -> L7c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7c
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r0 = r4.notificationEventListener
            r3.notificationEventListener = r0
            com.ss.android.socialbase.downloader.depend.IDownloadInterceptor r0 = r4.interceptor
            r3.interceptor = r0
            com.ss.android.socialbase.downloader.depend.IDownloadDepend r0 = r4.depend
            r3.depend = r0
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r0 = r4.monitorDepend
            r3.monitorDepend = r0
            com.ss.android.socialbase.downloader.depend.IDownloadForbiddenHandler r0 = r4.forbiddenHandler
            r3.forbiddenHandler = r0
            com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler r0 = r4.diskSpaceHandler
            r3.diskSpaceHandler = r0
            com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator r0 = r4.retryDelayTimeCalculator
            r3.retryDelayTimeCalculator = r0
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r0 = r4.notificationClickCallback
            r3.notificationClickCallback = r0
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r0 = r4.fileUriProvider
            r3.fileUriProvider = r0
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r1 = r3.downloadCompleteHandlers
            monitor-enter(r1)
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r0 = r3.downloadCompleteHandlers     // Catch: java.lang.Throwable -> L79
            r0.clear()     // Catch: java.lang.Throwable -> L79
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r0 = r3.downloadCompleteHandlers     // Catch: java.lang.Throwable -> L79
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r4 = r4.downloadCompleteHandlers     // Catch: java.lang.Throwable -> L79
            r0.addAll(r4)     // Catch: java.lang.Throwable -> L79
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L79
            return
        L79:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L79
            throw r4
        L7c:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7c
            throw r4
        L7f:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L7f
            throw r4
        L82:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L82
            throw r4
    }

    public void copyListenerFromPendingTask(com.ss.android.socialbase.downloader.model.DownloadTask r5) {
            r4 = this;
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r5.singleListenerMap
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L33
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            if (r1 != 0) goto L19
            goto La
        L19:
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r4.singleListenerMap
            java.lang.Object r3 = r1.getKey()
            boolean r2 = r2.containsKey(r3)
            if (r2 != 0) goto La
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r4.singleListenerMap
            java.lang.Object r3 = r1.getKey()
            java.lang.Object r1 = r1.getValue()
            r2.put(r3, r1)
            goto La
        L33:
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r5.mainThreadListeners     // Catch: java.lang.Throwable -> L8d
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L8d
            if (r0 == 0) goto L51
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r4.mainThreadListeners     // Catch: java.lang.Throwable -> L8d
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L8d
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r1 = r4.mainThreadListeners     // Catch: java.lang.Throwable -> L4e
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r5.mainThreadListeners     // Catch: java.lang.Throwable -> L4e
            r4.removeAll(r1, r2)     // Catch: java.lang.Throwable -> L4e
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r1 = r5.mainThreadListeners     // Catch: java.lang.Throwable -> L4e
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r4.mainThreadListeners     // Catch: java.lang.Throwable -> L4e
            r4.addAll(r1, r2)     // Catch: java.lang.Throwable -> L4e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4e
            goto L51
        L4e:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4e
            throw r5     // Catch: java.lang.Throwable -> L8d
        L51:
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r5.subThreadListeners     // Catch: java.lang.Throwable -> L8d
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L8d
            if (r0 == 0) goto L6f
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r4.subThreadListeners     // Catch: java.lang.Throwable -> L8d
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L8d
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r1 = r4.subThreadListeners     // Catch: java.lang.Throwable -> L6c
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r5.subThreadListeners     // Catch: java.lang.Throwable -> L6c
            r4.removeAll(r1, r2)     // Catch: java.lang.Throwable -> L6c
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r1 = r5.subThreadListeners     // Catch: java.lang.Throwable -> L6c
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r4.subThreadListeners     // Catch: java.lang.Throwable -> L6c
            r4.addAll(r1, r2)     // Catch: java.lang.Throwable -> L6c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6c
            goto L6f
        L6c:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6c
            throw r5     // Catch: java.lang.Throwable -> L8d
        L6f:
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r5.notificationListeners     // Catch: java.lang.Throwable -> L8d
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L8d
            if (r0 == 0) goto L91
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r4.notificationListeners     // Catch: java.lang.Throwable -> L8d
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L8d
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r1 = r4.notificationListeners     // Catch: java.lang.Throwable -> L8a
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r5.notificationListeners     // Catch: java.lang.Throwable -> L8a
            r4.removeAll(r1, r2)     // Catch: java.lang.Throwable -> L8a
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r5 = r5.notificationListeners     // Catch: java.lang.Throwable -> L8a
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r1 = r4.notificationListeners     // Catch: java.lang.Throwable -> L8a
            r4.addAll(r5, r1)     // Catch: java.lang.Throwable -> L8a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8a
            goto L91
        L8a:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8a
            throw r5     // Catch: java.lang.Throwable -> L8d
        L8d:
            r5 = move-exception
            r5.printStackTrace()
        L91:
            return
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask deleteCacheIfCheckFailed(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.deleteCacheIfCheckFailed(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask depend(com.ss.android.socialbase.downloader.depend.IDownloadDepend r1) {
            r0 = this;
            r0.depend = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask diskSpaceHandler(com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler r1) {
            r0 = this;
            r0.diskSpaceHandler = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask distinctDirectory(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.distinctDirectory(r2)
            return r1
    }

    public int download() {
            r3 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r3.downloadInfoBuilder
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.build()
            r3.downloadInfo = r0
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadCache()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r3.downloadInfo
            int r1 = r1.getId()
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo(r1)
            r1 = 0
            if (r0 != 0) goto L23
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo
            r0.generateTaskId()
            r0 = 0
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSend(r3, r0, r1)
            goto L28
        L23:
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r3.downloadInfo
            r2.copyTaskIdFromCacheData(r0)
        L28:
            r3.setChunkCalculator()
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.tryDownload(r3)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo
            if (r0 != 0) goto L37
            return r1
        L37:
            int r0 = r0.getId()
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask downloadSetting(org.json.JSONObject r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.downloadSetting(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask enqueueType(com.ss.android.socialbase.downloader.constants.EnqueueType r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.enqueueType(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask executorGroup(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.executorGroup(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask expectFileLength(long r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.expectFileLength(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask expiredRedownload(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.expiredRedownload(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask extra(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.extra(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask extraHeaders(java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.extraHeaders(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask extraMonitorStatus(int[] r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.extraMonitorStatus(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask fileUriProvider(com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r1) {
            r0 = this;
            r0.fileUriProvider = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask forbiddenHandler(com.ss.android.socialbase.downloader.depend.IDownloadForbiddenHandler r1) {
            r0 = this;
            r0.forbiddenHandler = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask force(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.force(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator getChunkAdjustCalculator() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r0 = r1.chunkAdjustCalculator
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator getChunkStrategy() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r0 = r1.chunkStrategy
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadDepend getDepend() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadDepend r0 = r1.depend
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler getDiskSpaceHandler() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler r0 = r1.diskSpaceHandler
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler getDownloadCompleteHandlerByIndex(int r3) {
            r2 = this;
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r0 = r2.downloadCompleteHandlers
            monitor-enter(r0)
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r1 = r2.downloadCompleteHandlers     // Catch: java.lang.Throwable -> L18
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L18
            if (r3 >= r1) goto L15
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r1 = r2.downloadCompleteHandlers     // Catch: java.lang.Throwable -> L18
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L18
            com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler r3 = (com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler) r3     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            return r3
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            r3 = 0
            return r3
        L18:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r3
    }

    public java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> getDownloadCompleteHandlers() {
            r1 = this;
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r0 = r1.downloadCompleteHandlers
            return r0
    }

    public int getDownloadId() {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.getId()
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo() {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadListener getDownloadListenerByIndex(com.ss.android.socialbase.downloader.constants.ListenerType r3, int r4) {
            r2 = this;
            android.util.SparseArray r3 = r2.getDownloadListeners(r3)
            r0 = 0
            if (r3 == 0) goto L22
            if (r4 >= 0) goto La
            goto L22
        La:
            monitor-enter(r3)
            int r1 = r3.size()     // Catch: java.lang.Throwable -> L1f
            if (r4 >= r1) goto L1d
            int r4 = r3.keyAt(r4)     // Catch: java.lang.Throwable -> L1f
            java.lang.Object r4 = r3.get(r4)     // Catch: java.lang.Throwable -> L1f
            com.ss.android.socialbase.downloader.depend.IDownloadListener r4 = (com.ss.android.socialbase.downloader.depend.IDownloadListener) r4     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L1f
            return r4
        L1d:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L1f
            return r0
        L1f:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L1f
            throw r4
        L22:
            return r0
    }

    public int getDownloadListenerSize(com.ss.android.socialbase.downloader.constants.ListenerType r2) {
            r1 = this;
            android.util.SparseArray r2 = r1.getDownloadListeners(r2)
            if (r2 != 0) goto L8
            r2 = 0
            return r2
        L8:
            monitor-enter(r2)
            int r0 = r2.size()     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Lf
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Lf
            throw r0
    }

    public android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> getDownloadListeners(com.ss.android.socialbase.downloader.constants.ListenerType r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN
            if (r2 != r0) goto L7
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r1.mainThreadListeners
            return r2
        L7:
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB
            if (r2 != r0) goto Le
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r1.subThreadListeners
            return r2
        Le:
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION
            if (r2 != r0) goto L15
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r1.notificationListeners
            return r2
        L15:
            r2 = 0
            return r2
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider getFileUriProvider() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r0 = r1.fileUriProvider
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadForbiddenHandler getForbiddenHandler() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadForbiddenHandler r0 = r1.forbiddenHandler
            return r0
    }

    public int getHashCodeForSameTask() {
            r1 = this;
            int r0 = r1.hashCodeForSameTask
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadInterceptor getInterceptor() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadInterceptor r0 = r1.interceptor
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend getMonitorDepend() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r0 = r1.monitorDepend
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.INotificationClickCallback getNotificationClickCallback() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r0 = r1.notificationClickCallback
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener getNotificationEventListener() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r0 = r1.notificationEventListener
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator getRetryDelayTimeCalculator() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator r0 = r1.retryDelayTimeCalculator
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadListener getSingleDownloadListener(com.ss.android.socialbase.downloader.constants.ListenerType r2) {
            r1 = this;
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r1.singleListenerMap
            java.lang.Object r2 = r0.get(r2)
            com.ss.android.socialbase.downloader.depend.IDownloadListener r2 = (com.ss.android.socialbase.downloader.depend.IDownloadListener) r2
            return r2
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask hashCodeForSameTask(int r1) {
            r0 = this;
            r0.hashCodeForSameTask = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask headConnectionAvailable(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.headConnectionAvailable(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask iconUrl(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.iconUrl(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask ignoreDataVerify(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.ignoreDataVerify(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask interceptor(com.ss.android.socialbase.downloader.depend.IDownloadInterceptor r1) {
            r0 = this;
            r0.interceptor = r1
            return r0
    }

    public boolean isAutoSetHashCodeForSameTask() {
            r1 = this;
            boolean r0 = r1.autoSetHashCodeForSameTask
            return r0
    }

    public boolean isNeedDelayForCacheSync() {
            r1 = this;
            boolean r0 = r1.needDelayForCacheSync
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask isOpenLimitSpeed(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.isOpenLimitSpeed(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask mainThreadListener(com.ss.android.socialbase.downloader.depend.IDownloadListener r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            int r0 = r2.hashCode()
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r1.mainThreadListenerWithHashCode(r0, r2)
            return r2
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask mainThreadListenerWithHashCode(int r3, com.ss.android.socialbase.downloader.depend.IDownloadListener r4) {
            r2 = this;
            if (r4 == 0) goto L24
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r2.mainThreadListeners
            monitor-enter(r0)
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r1 = r2.mainThreadListeners     // Catch: java.lang.Throwable -> L21
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L21
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r2.singleListenerMap
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN
            r0.put(r1, r4)
            android.util.SparseArray<com.ss.android.socialbase.downloader.constants.ListenerType> r4 = r2.singleListenerHashCodeMap
            monitor-enter(r4)
            android.util.SparseArray<com.ss.android.socialbase.downloader.constants.ListenerType> r0 = r2.singleListenerHashCodeMap     // Catch: java.lang.Throwable -> L1e
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN     // Catch: java.lang.Throwable -> L1e
            r0.put(r3, r1)     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L1e
            goto L24
        L1e:
            r3 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L1e
            throw r3
        L21:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            throw r3
        L24:
            return r2
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask maxBytes(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.maxBytes(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask maxProgressCount(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.maxProgressCount(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask md5(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.md5(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask mimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.mimeType(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask minProgressTimeMsInterval(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.minProgressTimeMsInterval(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask monitorDepend(com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r1) {
            r0 = this;
            r0.monitorDepend = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask monitorScene(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.monitorScene(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask name(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.name(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask needChunkDowngradeRetry(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.needChunkDowngradeRetry(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask needDefaultHttpServiceBackUp(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.needDefaultHttpServiceBackUp(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask needHttpsToHttpRetry(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.needHttpsToHttpRetry(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask needIndependentProcess(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.needIndependentProcess(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask needPostProgress(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.needPostProgress(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask needRetryDelay(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.needRetryDelay(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask needReuseChunkRunnable(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.needReuseChunkRunnable(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask needReuseFirstConnection(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.needReuseFirstConnection(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask needSDKMonitor(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.needSDKMonitor(r2)
            return r1
    }

    @java.lang.Deprecated
    public com.ss.android.socialbase.downloader.model.DownloadTask newSaveTempFileEnable(boolean r1) {
            r0 = this;
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask notificationClickCallback(com.ss.android.socialbase.downloader.depend.INotificationClickCallback r1) {
            r0 = this;
            r0.notificationClickCallback = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask notificationEventListener(com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r1) {
            r0 = this;
            r0.notificationEventListener = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask notificationListener(com.ss.android.socialbase.downloader.depend.IDownloadListener r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            int r0 = r2.hashCode()
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r1.notificationListenerWithHashCode(r0, r2)
            return r2
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask notificationListenerWithHashCode(int r3, com.ss.android.socialbase.downloader.depend.IDownloadListener r4) {
            r2 = this;
            if (r4 == 0) goto L24
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r2.notificationListeners
            monitor-enter(r0)
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r1 = r2.notificationListeners     // Catch: java.lang.Throwable -> L21
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L21
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r2.singleListenerMap
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION
            r0.put(r1, r4)
            android.util.SparseArray<com.ss.android.socialbase.downloader.constants.ListenerType> r4 = r2.singleListenerHashCodeMap
            monitor-enter(r4)
            android.util.SparseArray<com.ss.android.socialbase.downloader.constants.ListenerType> r0 = r2.singleListenerHashCodeMap     // Catch: java.lang.Throwable -> L1e
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION     // Catch: java.lang.Throwable -> L1e
            r0.put(r3, r1)     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L1e
            goto L24
        L1e:
            r3 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L1e
            throw r3
        L21:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            throw r3
        L24:
            return r2
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask onlyWifi(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.onlyWifi(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask outIp(java.lang.String[] r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.outIp(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask outSize(int[] r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.outSize(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask packageName(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.packageName(r2)
            return r1
    }

    public void removeDownloadListener(int r2, com.ss.android.socialbase.downloader.depend.IDownloadListener r3, com.ss.android.socialbase.downloader.constants.ListenerType r4, boolean r5) {
            r1 = this;
            android.util.SparseArray r0 = r1.getDownloadListeners(r4)
            if (r0 != 0) goto L16
            if (r5 == 0) goto L15
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r1.singleListenerMap
            boolean r2 = r2.containsKey(r4)
            if (r2 == 0) goto L15
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r1.singleListenerMap
            r2.remove(r4)
        L15:
            return
        L16:
            monitor-enter(r0)
            if (r5 == 0) goto L41
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r1.singleListenerMap     // Catch: java.lang.Throwable -> L69
            boolean r2 = r2.containsKey(r4)     // Catch: java.lang.Throwable -> L69
            if (r2 == 0) goto L2f
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r1.singleListenerMap     // Catch: java.lang.Throwable -> L69
            java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Throwable -> L69
            r3 = r2
            com.ss.android.socialbase.downloader.depend.IDownloadListener r3 = (com.ss.android.socialbase.downloader.depend.IDownloadListener) r3     // Catch: java.lang.Throwable -> L69
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r2 = r1.singleListenerMap     // Catch: java.lang.Throwable -> L69
            r2.remove(r4)     // Catch: java.lang.Throwable -> L69
        L2f:
            if (r3 == 0) goto L64
            int r2 = r0.indexOfValue(r3)     // Catch: java.lang.Throwable -> L69
            if (r2 < 0) goto L64
            int r3 = r0.size()     // Catch: java.lang.Throwable -> L69
            if (r2 >= r3) goto L64
            r0.removeAt(r2)     // Catch: java.lang.Throwable -> L69
            goto L64
        L41:
            r0.remove(r2)     // Catch: java.lang.Throwable -> L69
            android.util.SparseArray<com.ss.android.socialbase.downloader.constants.ListenerType> r3 = r1.singleListenerHashCodeMap     // Catch: java.lang.Throwable -> L69
            monitor-enter(r3)     // Catch: java.lang.Throwable -> L69
            android.util.SparseArray<com.ss.android.socialbase.downloader.constants.ListenerType> r4 = r1.singleListenerHashCodeMap     // Catch: java.lang.Throwable -> L66
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Throwable -> L66
            com.ss.android.socialbase.downloader.constants.ListenerType r4 = (com.ss.android.socialbase.downloader.constants.ListenerType) r4     // Catch: java.lang.Throwable -> L66
            if (r4 == 0) goto L63
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r5 = r1.singleListenerMap     // Catch: java.lang.Throwable -> L66
            boolean r5 = r5.containsKey(r4)     // Catch: java.lang.Throwable -> L66
            if (r5 == 0) goto L63
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r5 = r1.singleListenerMap     // Catch: java.lang.Throwable -> L66
            r5.remove(r4)     // Catch: java.lang.Throwable -> L66
            android.util.SparseArray<com.ss.android.socialbase.downloader.constants.ListenerType> r4 = r1.singleListenerHashCodeMap     // Catch: java.lang.Throwable -> L66
            r4.remove(r2)     // Catch: java.lang.Throwable -> L66
        L63:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L66
        L64:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L69
            return
        L66:
            r2 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L66
            throw r2     // Catch: java.lang.Throwable -> L69
        L69:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L69
            throw r2
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask retryCount(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.retryCount(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask retryDelayTimeArray(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.retryDelayTimeArray(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask retryDelayTimeCalculator(com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator r1) {
            r0 = this;
            r0.retryDelayTimeCalculator = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask savePath(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.savePath(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask setAutoInstall(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.setAutoInstall(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask setDownloadCompleteHandlers(java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r2) {
            r1 = this;
            if (r2 == 0) goto L1c
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L1c
            java.util.Iterator r2 = r2.iterator()
        Lc:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L1c
            java.lang.Object r0 = r2.next()
            com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler r0 = (com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler) r0
            r1.addDownloadCompleteHandler(r0)
            goto Lc
        L1c:
            return r1
    }

    public void setDownloadListeners(android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r2, com.ss.android.socialbase.downloader.constants.ListenerType r3) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN     // Catch: java.lang.Throwable -> L36
            if (r3 != r0) goto L14
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r3 = r1.mainThreadListeners     // Catch: java.lang.Throwable -> L36
            monitor-enter(r3)     // Catch: java.lang.Throwable -> L36
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r1.mainThreadListeners     // Catch: java.lang.Throwable -> L11
            r1.copyListeners(r0, r2)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L11
            goto L3a
        L11:
            r2 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L11
            throw r2     // Catch: java.lang.Throwable -> L36
        L14:
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB     // Catch: java.lang.Throwable -> L36
            if (r3 != r0) goto L25
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r3 = r1.subThreadListeners     // Catch: java.lang.Throwable -> L36
            monitor-enter(r3)     // Catch: java.lang.Throwable -> L36
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r1.subThreadListeners     // Catch: java.lang.Throwable -> L22
            r1.copyListeners(r0, r2)     // Catch: java.lang.Throwable -> L22
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L22
            goto L3a
        L22:
            r2 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L22
            throw r2     // Catch: java.lang.Throwable -> L36
        L25:
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION     // Catch: java.lang.Throwable -> L36
            if (r3 != r0) goto L3a
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r3 = r1.notificationListeners     // Catch: java.lang.Throwable -> L36
            monitor-enter(r3)     // Catch: java.lang.Throwable -> L36
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r1.notificationListeners     // Catch: java.lang.Throwable -> L33
            r1.copyListeners(r0, r2)     // Catch: java.lang.Throwable -> L33
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L33
            goto L3a
        L33:
            r2 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L33
            throw r2     // Catch: java.lang.Throwable -> L36
        L36:
            r2 = move-exception
            r2.printStackTrace()
        L3a:
            return
    }

    public void setNeedDelayForCacheSync(boolean r1) {
            r0 = this;
            r0.needDelayForCacheSync = r1
            return
    }

    public void setNotificationEventListener(com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r1) {
            r0 = this;
            r0.notificationEventListener = r1
            return
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask showNotification(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.showNotification(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask showNotificationForAutoResumed(boolean r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.showNotificationForAutoResumed(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask subThreadListener(com.ss.android.socialbase.downloader.depend.IDownloadListener r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            int r0 = r2.hashCode()
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r1.subThreadListenerWithHashCode(r0, r2)
            return r2
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask subThreadListenerWithHashCode(int r3, com.ss.android.socialbase.downloader.depend.IDownloadListener r4) {
            r2 = this;
            if (r4 == 0) goto L24
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r2.subThreadListeners
            monitor-enter(r0)
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r1 = r2.subThreadListeners     // Catch: java.lang.Throwable -> L21
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L21
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            java.util.Map<com.ss.android.socialbase.downloader.constants.ListenerType, com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r2.singleListenerMap
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB
            r0.put(r1, r4)
            android.util.SparseArray<com.ss.android.socialbase.downloader.constants.ListenerType> r4 = r2.singleListenerHashCodeMap
            monitor-enter(r4)
            android.util.SparseArray<com.ss.android.socialbase.downloader.constants.ListenerType> r0 = r2.singleListenerHashCodeMap     // Catch: java.lang.Throwable -> L1e
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB     // Catch: java.lang.Throwable -> L1e
            r0.put(r3, r1)     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L1e
            goto L24
        L1e:
            r3 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L1e
            throw r3
        L21:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            throw r3
        L24:
            return r2
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask tempPath(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.tempPath(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask throttleNetSpeed(long r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.throttleNetSpeed(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask title(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.title(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask ttnetProtectTimeout(long r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.ttnetProtectTimeout(r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask url(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = r1.downloadInfoBuilder
            r0.url(r2)
            return r1
    }
}
