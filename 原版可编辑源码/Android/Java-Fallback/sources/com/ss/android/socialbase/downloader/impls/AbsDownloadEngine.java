package com.ss.android.socialbase.downloader.impls;

public abstract class AbsDownloadEngine implements com.ss.android.socialbase.downloader.thread.WeakDownloadHandler.IHandler {
    private static final java.lang.String TAG = "AbsDownloadEngine";
    private final com.ss.android.socialbase.downloader.downloader.IDownloadCache downloadCache;
    private final android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> downloadTaskMap;
    private final android.util.SparseArray<android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask>> downloadTaskWithListenerMap;
    private final android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> failedDownloadTaskMap;
    private final android.util.SparseArray<java.lang.Long> lastTaskTryDownloadTime;
    protected final com.ss.android.socialbase.downloader.thread.WeakDownloadHandler mainHandler;
    private final java.util.concurrent.LinkedBlockingDeque<com.ss.android.socialbase.downloader.model.DownloadTask> orderedTaskQueue;
    private final com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.model.DownloadTask> pengingTaskCache;
    private final android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> retryDelayDownloadTaskMap;
    private final android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> successDownloadTaskMap;
    private final android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> waitingAsyncDownloadTaskMap;







    protected AbsDownloadEngine() {
            r2 = this;
            r2.<init>()
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.downloadTaskMap = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.successDownloadTaskMap = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.failedDownloadTaskMap = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.retryDelayDownloadTaskMap = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.waitingAsyncDownloadTaskMap = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.downloadTaskWithListenerMap = r0
            com.ss.android.socialbase.downloader.utils.LruCache r0 = new com.ss.android.socialbase.downloader.utils.LruCache
            r0.<init>()
            r2.pengingTaskCache = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.lastTaskTryDownloadTime = r0
            java.util.concurrent.LinkedBlockingDeque r0 = new java.util.concurrent.LinkedBlockingDeque
            r0.<init>()
            r2.orderedTaskQueue = r0
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler r0 = new com.ss.android.socialbase.downloader.thread.WeakDownloadHandler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1, r2)
            r2.mainHandler = r0
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadCache()
            r2.downloadCache = r0
            return
    }

    static com.ss.android.socialbase.downloader.model.DownloadTask access$000(com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0, int r1) {
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.getDownloadTask(r1)
            return r0
    }

    static void access$100(com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0, int r1, boolean r2) {
            r0.clearDownloadDataInSubThread(r1, r2)
            return
    }

    static void access$200(com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0, int r1, boolean r2) {
            r0.resetDownloadDataInSubThread(r1, r2)
            return
    }

    private void cancelAlarm(com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            r2 = this;
            if (r3 == 0) goto L26
            int r0 = r3.getStatus()     // Catch: java.lang.Throwable -> L22
            r1 = 7
            if (r0 == r1) goto L11
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r0 = r3.getRetryDelayStatus()     // Catch: java.lang.Throwable -> L22
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_NONE     // Catch: java.lang.Throwable -> L22
            if (r0 == r1) goto L26
        L11:
            r0 = 5
            r3.setStatus(r0)     // Catch: java.lang.Throwable -> L22
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r0 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_NONE     // Catch: java.lang.Throwable -> L22
            r3.setRetryDelayStatus(r0)     // Catch: java.lang.Throwable -> L22
            java.lang.String r3 = "AbsDownloadEngine"
            java.lang.String r0 = "cancelAlarm"
            com.ss.android.socialbase.downloader.logger.Logger.d(r3, r0)     // Catch: java.lang.Throwable -> L22
            goto L26
        L22:
            r3 = move-exception
            r3.printStackTrace()
        L26:
            return
    }

    private synchronized void clearDownloadDataInSubThread(int r4, boolean r5) {
            r3 = this;
            monitor-enter(r3)
            java.lang.String r0 = "AbsDownloadEngine"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L77
            r1.<init>()     // Catch: java.lang.Throwable -> L77
            java.lang.String r2 = "clearDownloadDataInSubThread::id="
            r1.append(r2)     // Catch: java.lang.Throwable -> L77
            r1.append(r4)     // Catch: java.lang.Throwable -> L77
            java.lang.String r2 = " deleteTargetFile="
            r1.append(r2)     // Catch: java.lang.Throwable -> L77
            r1.append(r5)     // Catch: java.lang.Throwable -> L77
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L77
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)     // Catch: java.lang.Throwable -> L77
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r3.downloadCache     // Catch: java.lang.Throwable -> L71
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo(r4)     // Catch: java.lang.Throwable -> L71
            if (r0 == 0) goto L3b
            if (r5 == 0) goto L2d
            com.ss.android.socialbase.downloader.utils.DownloadUtils.deleteAllDownloadFiles(r0)     // Catch: java.lang.Throwable -> L71
            goto L38
        L2d:
            java.lang.String r5 = r0.getTempPath()     // Catch: java.lang.Throwable -> L71
            java.lang.String r1 = r0.getTempName()     // Catch: java.lang.Throwable -> L71
            com.ss.android.socialbase.downloader.utils.DownloadUtils.deleteFile(r5, r1)     // Catch: java.lang.Throwable -> L71
        L38:
            r0.erase()     // Catch: java.lang.Throwable -> L71
        L3b:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r5 = r3.downloadCache     // Catch: android.database.sqlite.SQLiteException -> L41 java.lang.Throwable -> L71
            r5.removeDownloadTaskData(r4)     // Catch: android.database.sqlite.SQLiteException -> L41 java.lang.Throwable -> L71
            goto L45
        L41:
            r5 = move-exception
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L71
        L45:
            r5 = 0
            r0 = -4
            r3.refreshDownloadTaskMap(r4, r5, r0)     // Catch: java.lang.Throwable -> L71
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r5 = r3.failedDownloadTaskMap     // Catch: java.lang.Throwable -> L71
            java.lang.Object r5 = r5.get(r4)     // Catch: java.lang.Throwable -> L71
            if (r5 == 0) goto L57
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r5 = r3.failedDownloadTaskMap     // Catch: java.lang.Throwable -> L71
            r5.remove(r4)     // Catch: java.lang.Throwable -> L71
        L57:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r5 = r3.successDownloadTaskMap     // Catch: java.lang.Throwable -> L71
            java.lang.Object r5 = r5.get(r4)     // Catch: java.lang.Throwable -> L71
            if (r5 == 0) goto L64
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r5 = r3.successDownloadTaskMap     // Catch: java.lang.Throwable -> L71
            r5.remove(r4)     // Catch: java.lang.Throwable -> L71
        L64:
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.model.DownloadTask> r5 = r3.pengingTaskCache     // Catch: java.lang.Throwable -> L71
            java.lang.Integer r0 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L71
            r5.remove(r0)     // Catch: java.lang.Throwable -> L71
            com.ss.android.socialbase.downloader.setting.DownloadSetting.removeTaskDownloadSetting(r4)     // Catch: java.lang.Throwable -> L71
            goto L75
        L71:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L77
        L75:
            monitor-exit(r3)
            return
        L77:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    private void enqueue(com.ss.android.socialbase.downloader.model.DownloadTask r5) {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.getDownloadInfo()
            if (r0 != 0) goto La
            return
        La:
            java.util.concurrent.LinkedBlockingDeque<com.ss.android.socialbase.downloader.model.DownloadTask> r1 = r4.orderedTaskQueue     // Catch: java.lang.InterruptedException -> La9
            boolean r1 = r1.isEmpty()     // Catch: java.lang.InterruptedException -> La9
            r2 = 1
            if (r1 == 0) goto L1d
            r4.tryDownload(r5, r2)     // Catch: java.lang.InterruptedException -> La9
            java.util.concurrent.LinkedBlockingDeque<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r4.orderedTaskQueue     // Catch: java.lang.InterruptedException -> La9
            r0.put(r5)     // Catch: java.lang.InterruptedException -> La9
            goto La9
        L1d:
            com.ss.android.socialbase.downloader.constants.EnqueueType r0 = r0.getEnqueueType()     // Catch: java.lang.InterruptedException -> La9
            com.ss.android.socialbase.downloader.constants.EnqueueType r1 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_TAIL     // Catch: java.lang.InterruptedException -> La9
            if (r0 != r1) goto L73
            java.util.concurrent.LinkedBlockingDeque<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r4.orderedTaskQueue     // Catch: java.lang.InterruptedException -> La9
            java.lang.Object r0 = r0.getFirst()     // Catch: java.lang.InterruptedException -> La9
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.InterruptedException -> La9
            int r0 = r0.getDownloadId()     // Catch: java.lang.InterruptedException -> La9
            int r1 = r5.getDownloadId()     // Catch: java.lang.InterruptedException -> La9
            if (r0 != r1) goto L42
            int r0 = r5.getDownloadId()     // Catch: java.lang.InterruptedException -> La9
            boolean r0 = r4.isDownloading(r0)     // Catch: java.lang.InterruptedException -> La9
            if (r0 == 0) goto L42
            return
        L42:
            java.util.concurrent.LinkedBlockingDeque<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r4.orderedTaskQueue     // Catch: java.lang.InterruptedException -> La9
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.InterruptedException -> La9
        L48:
            boolean r1 = r0.hasNext()     // Catch: java.lang.InterruptedException -> La9
            if (r1 == 0) goto L63
            java.lang.Object r1 = r0.next()     // Catch: java.lang.InterruptedException -> La9
            com.ss.android.socialbase.downloader.model.DownloadTask r1 = (com.ss.android.socialbase.downloader.model.DownloadTask) r1     // Catch: java.lang.InterruptedException -> La9
            if (r1 == 0) goto L48
            int r1 = r1.getDownloadId()     // Catch: java.lang.InterruptedException -> La9
            int r2 = r5.getDownloadId()     // Catch: java.lang.InterruptedException -> La9
            if (r1 != r2) goto L48
            r0.remove()     // Catch: java.lang.InterruptedException -> La9
        L63:
            java.util.concurrent.LinkedBlockingDeque<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r4.orderedTaskQueue     // Catch: java.lang.InterruptedException -> La9
            r0.put(r5)     // Catch: java.lang.InterruptedException -> La9
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = new com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler     // Catch: java.lang.InterruptedException -> La9
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler r1 = r4.mainHandler     // Catch: java.lang.InterruptedException -> La9
            r0.<init>(r5, r1)     // Catch: java.lang.InterruptedException -> La9
            r0.onPrepare()     // Catch: java.lang.InterruptedException -> La9
            goto La9
        L73:
            java.util.concurrent.LinkedBlockingDeque<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r4.orderedTaskQueue     // Catch: java.lang.InterruptedException -> La9
            java.lang.Object r0 = r0.getFirst()     // Catch: java.lang.InterruptedException -> La9
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.InterruptedException -> La9
            int r1 = r0.getDownloadId()     // Catch: java.lang.InterruptedException -> La9
            int r3 = r5.getDownloadId()     // Catch: java.lang.InterruptedException -> La9
            if (r1 != r3) goto L90
            int r1 = r5.getDownloadId()     // Catch: java.lang.InterruptedException -> La9
            boolean r1 = r4.isDownloading(r1)     // Catch: java.lang.InterruptedException -> La9
            if (r1 == 0) goto L90
            return
        L90:
            int r1 = r0.getDownloadId()     // Catch: java.lang.InterruptedException -> La9
            r4.pause(r1)     // Catch: java.lang.InterruptedException -> La9
            r4.tryDownload(r5, r2)     // Catch: java.lang.InterruptedException -> La9
            int r0 = r0.getDownloadId()     // Catch: java.lang.InterruptedException -> La9
            int r1 = r5.getDownloadId()     // Catch: java.lang.InterruptedException -> La9
            if (r0 == r1) goto La9
            java.util.concurrent.LinkedBlockingDeque<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r4.orderedTaskQueue     // Catch: java.lang.InterruptedException -> La9
            r0.putFirst(r5)     // Catch: java.lang.InterruptedException -> La9
        La9:
            return
    }

    private com.ss.android.socialbase.downloader.model.DownloadTask getDownloadTask(int r2) {
            r1 = this;
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.downloadTaskMap
            java.lang.Object r0 = r0.get(r2)
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0
            if (r0 != 0) goto L31
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.failedDownloadTaskMap
            java.lang.Object r0 = r0.get(r2)
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0
            if (r0 != 0) goto L31
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.successDownloadTaskMap
            java.lang.Object r0 = r0.get(r2)
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0
            if (r0 != 0) goto L31
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.retryDelayDownloadTaskMap
            java.lang.Object r0 = r0.get(r2)
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0
            if (r0 != 0) goto L31
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.waitingAsyncDownloadTaskMap
            java.lang.Object r2 = r0.get(r2)
            r0 = r2
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0
        L31:
            return r0
    }

    private boolean isPauseReserveOnWifi(com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3.statusInPause()
            if (r1 == 0) goto Lf
            boolean r3 = r3.isPauseReserveOnWifi()
            return r3
        Lf:
            return r0
    }

    private void notifyDownloadTaskStatus(int r5, com.ss.android.socialbase.downloader.exception.BaseException r6, com.ss.android.socialbase.downloader.model.DownloadTask r7) {
            r4 = this;
            if (r7 == 0) goto L29
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r7.getDownloadInfo()
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN
            android.util.SparseArray r1 = r7.getDownloadListeners(r1)
            com.ss.android.socialbase.downloader.constants.ListenerType r2 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION
            android.util.SparseArray r2 = r7.getDownloadListeners(r2)
            boolean r7 = r7.canShowNotification()
            r3 = 1
            if (r7 != 0) goto L22
            boolean r7 = r0.isAutoInstallWithoutNotification()
            if (r7 == 0) goto L20
            goto L22
        L20:
            r7 = 0
            goto L23
        L22:
            r7 = r3
        L23:
            com.ss.android.socialbase.downloader.utils.DownloadListenerUtils.notifyListener(r5, r1, r3, r0, r6)
            com.ss.android.socialbase.downloader.utils.DownloadListenerUtils.notifyListener(r5, r2, r7, r0, r6)
        L29:
            return
    }

    private void removeTask(int r4, int r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "removeTask id: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = " listener hasCode: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AbsDownloadEngine"
            com.ss.android.socialbase.downloader.logger.Logger.d(r1, r0)
            if (r5 != 0) goto L2b
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r5 = r3.downloadTaskMap
            r5.remove(r4)
            android.util.SparseArray<android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask>> r5 = r3.downloadTaskWithListenerMap
            r5.remove(r4)
            goto L66
        L2b:
            android.util.SparseArray<android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask>> r0 = r3.downloadTaskWithListenerMap
            java.lang.Object r0 = r0.get(r4)
            android.util.SparseArray r0 = (android.util.SparseArray) r0
            if (r0 == 0) goto L61
            r0.remove(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r2 = "after downloadTaskWithListenerMap removeTask taskArray.size: "
            r5.append(r2)
            int r2 = r0.size()
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r1, r5)
            int r5 = r0.size()
            if (r5 != 0) goto L66
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r5 = r3.downloadTaskMap
            r5.remove(r4)
            android.util.SparseArray<android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask>> r5 = r3.downloadTaskWithListenerMap
            r5.remove(r4)
            goto L66
        L61:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r5 = r3.downloadTaskMap
            r5.remove(r4)
        L66:
            return
    }

    private void resetDownloadDataInSubThread(int r2, boolean r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache     // Catch: java.lang.Throwable -> L44
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo(r2)     // Catch: java.lang.Throwable -> L44
            if (r0 == 0) goto Le
            com.ss.android.socialbase.downloader.utils.DownloadUtils.deleteAllDownloadFiles(r0, r3)     // Catch: java.lang.Throwable -> L44
            r0.erase()     // Catch: java.lang.Throwable -> L44
        Le:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r3 = r1.downloadCache     // Catch: android.database.sqlite.SQLiteException -> L19 java.lang.Throwable -> L44
            r3.removeAllDownloadChunk(r2)     // Catch: android.database.sqlite.SQLiteException -> L19 java.lang.Throwable -> L44
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r3 = r1.downloadCache     // Catch: android.database.sqlite.SQLiteException -> L19 java.lang.Throwable -> L44
            r3.updateDownloadInfo(r0)     // Catch: android.database.sqlite.SQLiteException -> L19 java.lang.Throwable -> L44
            goto L1d
        L19:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L44
        L1d:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r3 = r1.failedDownloadTaskMap     // Catch: java.lang.Throwable -> L44
            java.lang.Object r3 = r3.get(r2)     // Catch: java.lang.Throwable -> L44
            if (r3 == 0) goto L2a
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r3 = r1.failedDownloadTaskMap     // Catch: java.lang.Throwable -> L44
            r3.remove(r2)     // Catch: java.lang.Throwable -> L44
        L2a:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r3 = r1.successDownloadTaskMap     // Catch: java.lang.Throwable -> L44
            java.lang.Object r3 = r3.get(r2)     // Catch: java.lang.Throwable -> L44
            if (r3 == 0) goto L37
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r3 = r1.successDownloadTaskMap     // Catch: java.lang.Throwable -> L44
            r3.remove(r2)     // Catch: java.lang.Throwable -> L44
        L37:
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.model.DownloadTask> r3 = r1.pengingTaskCache     // Catch: java.lang.Throwable -> L44
            java.lang.Integer r0 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L44
            r3.remove(r0)     // Catch: java.lang.Throwable -> L44
            com.ss.android.socialbase.downloader.setting.DownloadSetting.removeTaskDownloadSetting(r2)     // Catch: java.lang.Throwable -> L44
            goto L48
        L44:
            r2 = move-exception
            r2.printStackTrace()
        L48:
            return
    }

    private void tryCacheSameTaskWithListenerHashCode(com.ss.android.socialbase.downloader.model.DownloadTask r5) {
            r4 = this;
            int r0 = r5.getHashCodeForSameTask()
            if (r0 != 0) goto L10
            boolean r1 = r5.isAutoSetHashCodeForSameTask()
            if (r1 == 0) goto L10
            int r0 = r5.autoCalAndGetHashCodeForSameTask()
        L10:
            if (r0 != 0) goto L13
            return
        L13:
            android.util.SparseArray<android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask>> r1 = r4.downloadTaskWithListenerMap
            int r2 = r5.getDownloadId()
            java.lang.Object r1 = r1.get(r2)
            android.util.SparseArray r1 = (android.util.SparseArray) r1
            if (r1 != 0) goto L2f
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            android.util.SparseArray<android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask>> r2 = r4.downloadTaskWithListenerMap
            int r3 = r5.getDownloadId()
            r2.put(r3, r1)
        L2f:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "tryCacheSameTaskWithListenerHashCode id:"
            r2.append(r3)
            int r3 = r5.getDownloadId()
            r2.append(r3)
            java.lang.String r3 = " listener hasCode:"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "AbsDownloadEngine"
            com.ss.android.socialbase.downloader.logger.Logger.d(r3, r2)
            r1.put(r0, r5)
            return
    }

    private void tryDownload(com.ss.android.socialbase.downloader.model.DownloadTask r9, boolean r10) {
            r8 = this;
            if (r9 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r9.getDownloadInfo()
            if (r0 != 0) goto La
            return
        La:
            boolean r1 = r0.isEntityInvalid()
            r2 = 1003(0x3eb, float:1.406E-42)
            if (r1 == 0) goto L50
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r9 = r9.getMonitorDepend()
            com.ss.android.socialbase.downloader.exception.BaseException r10 = new com.ss.android.socialbase.downloader.exception.BaseException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "downloadInfo is Invalid, url is "
            r1.append(r3)
            java.lang.String r3 = r0.getUrl()
            r1.append(r3)
            java.lang.String r3 = " name is "
            r1.append(r3)
            java.lang.String r3 = r0.getName()
            r1.append(r3)
            java.lang.String r3 = " savePath is "
            r1.append(r3)
            java.lang.String r3 = r0.getSavePath()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r10.<init>(r2, r1)
            int r1 = r0.getStatus()
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSendWithTaskMonitor(r9, r0, r10, r1)
            return
        L50:
            int r1 = r0.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)
            r3 = 0
            java.lang.String r4 = "no_net_opt"
            int r1 = r1.optInt(r4, r3)
            r4 = 1
            if (r1 != r4) goto L86
            android.content.Context r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            boolean r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isNetworkConnected(r1)
            if (r1 != 0) goto L86
            boolean r1 = r0.isFirstDownload()
            if (r1 != 0) goto L86
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r10 = new com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler r0 = r8.mainHandler
            r10.<init>(r9, r0)
            com.ss.android.socialbase.downloader.exception.BaseException r9 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1049(0x419, float:1.47E-42)
            java.lang.String r1 = "network_not_available"
            r9.<init>(r0, r1)
            r10.onError(r9)
            return
        L86:
            int r1 = r0.getId()
            if (r10 == 0) goto L8f
            r8.cancelAlarm(r0)
        L8f:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r10 = r8.failedDownloadTaskMap
            java.lang.Object r10 = r10.get(r1)
            if (r10 == 0) goto L9c
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r10 = r8.failedDownloadTaskMap
            r10.remove(r1)
        L9c:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r10 = r8.successDownloadTaskMap
            java.lang.Object r10 = r10.get(r1)
            if (r10 == 0) goto La9
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r10 = r8.successDownloadTaskMap
            r10.remove(r1)
        La9:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r10 = r8.retryDelayDownloadTaskMap
            java.lang.Object r10 = r10.get(r1)
            if (r10 == 0) goto Lb6
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r10 = r8.retryDelayDownloadTaskMap
            r10.remove(r1)
        Lb6:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r10 = r8.waitingAsyncDownloadTaskMap
            java.lang.Object r10 = r10.get(r1)
            if (r10 == 0) goto Lc3
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r10 = r8.waitingAsyncDownloadTaskMap
            r10.remove(r1)
        Lc3:
            boolean r10 = r8.isDownloading(r1)
            java.lang.String r5 = "AbsDownloadEngine"
            if (r10 == 0) goto Lec
            boolean r10 = r0.canReStartAsyncTask()
            if (r10 != 0) goto Lec
            java.lang.String r10 = "another task with same id is downloading when tryDownload"
            com.ss.android.socialbase.downloader.logger.Logger.d(r5, r10)
            r9.addListenerToDownloadingSameTask()
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r9 = r9.getMonitorDepend()
            com.ss.android.socialbase.downloader.exception.BaseException r10 = new com.ss.android.socialbase.downloader.exception.BaseException
            java.lang.String r1 = "downloadInfo is isDownloading and addListenerToSameTask is false"
            r10.<init>(r2, r1)
            int r1 = r0.getStatus()
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSendWithTaskMonitor(r9, r0, r10, r1)
            return
        Lec:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r2 = "no downloading task :"
            r10.append(r2)
            r10.append(r1)
            java.lang.String r10 = r10.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r5, r10)
            boolean r10 = r0.canReStartAsyncTask()
            if (r10 == 0) goto L10b
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r10 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_RESTART
            r0.setAsyncHandleStatus(r10)
        L10b:
            r10 = 32768(0x8000, float:4.5918E-41)
            boolean r10 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r10)
            if (r10 == 0) goto L125
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.model.DownloadTask> r10 = r8.pengingTaskCache
            java.lang.Integer r0 = java.lang.Integer.valueOf(r1)
            java.lang.Object r10 = r10.remove(r0)
            com.ss.android.socialbase.downloader.model.DownloadTask r10 = (com.ss.android.socialbase.downloader.model.DownloadTask) r10
            if (r10 == 0) goto L125
            r9.copyListenerFromPendingTask(r10)
        L125:
            long r6 = android.os.SystemClock.uptimeMillis()
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r10 = r8.downloadTaskMap
            java.lang.Object r10 = r10.get(r1)
            com.ss.android.socialbase.downloader.model.DownloadTask r10 = (com.ss.android.socialbase.downloader.model.DownloadTask) r10
            if (r10 == 0) goto L145
            com.ss.android.socialbase.downloader.model.DownloadInfo r10 = r10.getDownloadInfo()
            if (r10 == 0) goto L145
            int r10 = r10.getStatus()
            boolean r0 = com.ss.android.socialbase.downloader.constants.DownloadStatus.isDownloading(r10)
            if (r0 == 0) goto L146
            r3 = r4
            goto L146
        L145:
            r10 = r3
        L146:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "can add listener "
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = " , oldTaskStatus is :"
            r0.append(r2)
            r0.append(r10)
            java.lang.String r10 = r0.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r5, r10)
            if (r3 == 0) goto L168
            r9.addListenerToDownloadingSameTask()
            goto L17c
        L168:
            r8.tryCacheSameTaskWithListenerHashCode(r9)
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r10 = r8.downloadTaskMap
            r10.put(r1, r9)
            android.util.SparseArray<java.lang.Long> r10 = r8.lastTaskTryDownloadTime
            java.lang.Long r0 = java.lang.Long.valueOf(r6)
            r10.put(r1, r0)
            r8.doDownload(r1, r9)
        L17c:
            return
    }

    private void tryDownloadNextTaskInQueue(int r2) {
            r1 = this;
            java.util.concurrent.LinkedBlockingDeque<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.orderedTaskQueue
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L9
            return
        L9:
            java.util.concurrent.LinkedBlockingDeque<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.orderedTaskQueue
            java.lang.Object r0 = r0.getFirst()
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0
            if (r0 == 0) goto L1e
            int r0 = r0.getDownloadId()
            if (r0 != r2) goto L1e
            java.util.concurrent.LinkedBlockingDeque<com.ss.android.socialbase.downloader.model.DownloadTask> r2 = r1.orderedTaskQueue
            r2.poll()
        L1e:
            java.util.concurrent.LinkedBlockingDeque<com.ss.android.socialbase.downloader.model.DownloadTask> r2 = r1.orderedTaskQueue
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L27
            return
        L27:
            java.util.concurrent.LinkedBlockingDeque<com.ss.android.socialbase.downloader.model.DownloadTask> r2 = r1.orderedTaskQueue
            java.lang.Object r2 = r2.getFirst()
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = (com.ss.android.socialbase.downloader.model.DownloadTask) r2
            if (r2 == 0) goto L35
            r0 = 1
            r1.tryDownload(r2, r0)
        L35:
            return
    }

    public synchronized void addDownloadListener(int r8, int r9, com.ss.android.socialbase.downloader.depend.IDownloadListener r10, com.ss.android.socialbase.downloader.constants.ListenerType r11, boolean r12) {
            r7 = this;
            monitor-enter(r7)
            r6 = 1
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.addDownloadListener(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r7)
            return
        Ld:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    public synchronized void addDownloadListener(int r3, int r4, com.ss.android.socialbase.downloader.depend.IDownloadListener r5, com.ss.android.socialbase.downloader.constants.ListenerType r6, boolean r7, boolean r8) {
            r2 = this;
            monitor-enter(r2)
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r2.getDownloadTask(r3)     // Catch: java.lang.Throwable -> L72
            if (r0 == 0) goto L39
            r0.addDownloadListener(r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L72
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r0.getDownloadInfo()     // Catch: java.lang.Throwable -> L72
            if (r8 == 0) goto L70
            if (r4 == 0) goto L70
            boolean r3 = r2.isDownloading(r3)     // Catch: java.lang.Throwable -> L72
            if (r3 != 0) goto L70
            com.ss.android.socialbase.downloader.constants.ListenerType r3 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN     // Catch: java.lang.Throwable -> L72
            if (r6 == r3) goto L20
            com.ss.android.socialbase.downloader.constants.ListenerType r3 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION     // Catch: java.lang.Throwable -> L72
            if (r6 != r3) goto L70
        L20:
            r3 = 1
            com.ss.android.socialbase.downloader.constants.ListenerType r7 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION     // Catch: java.lang.Throwable -> L72
            if (r6 != r7) goto L2c
            boolean r6 = r4.canShowNotification()     // Catch: java.lang.Throwable -> L72
            if (r6 != 0) goto L2c
            r3 = 0
        L2c:
            if (r3 == 0) goto L70
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler r3 = r2.mainHandler     // Catch: java.lang.Throwable -> L72
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine$6 r6 = new com.ss.android.socialbase.downloader.impls.AbsDownloadEngine$6     // Catch: java.lang.Throwable -> L72
            r6.<init>(r2, r5, r4)     // Catch: java.lang.Throwable -> L72
            r3.post(r6)     // Catch: java.lang.Throwable -> L72
            goto L70
        L39:
            r8 = 32768(0x8000, float:4.5918E-41)
            boolean r8 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r8)     // Catch: java.lang.Throwable -> L72
            if (r8 == 0) goto L70
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r8 = r2.downloadCache     // Catch: java.lang.Throwable -> L72
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = r8.getDownloadInfo(r3)     // Catch: java.lang.Throwable -> L72
            if (r8 == 0) goto L70
            int r0 = r8.getStatus()     // Catch: java.lang.Throwable -> L72
            r1 = -3
            if (r0 == r1) goto L70
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r2.pengingTaskCache     // Catch: java.lang.Throwable -> L72
            java.lang.Integer r1 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L72
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L72
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L72
            if (r0 != 0) goto L6d
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = new com.ss.android.socialbase.downloader.model.DownloadTask     // Catch: java.lang.Throwable -> L72
            r0.<init>(r8)     // Catch: java.lang.Throwable -> L72
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.model.DownloadTask> r8 = r2.pengingTaskCache     // Catch: java.lang.Throwable -> L72
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L72
            r8.put(r3, r0)     // Catch: java.lang.Throwable -> L72
        L6d:
            r0.addDownloadListener(r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L72
        L70:
            monitor-exit(r2)
            return
        L72:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public synchronized boolean cancel(int r8, boolean r9) {
            r7 = this;
            monitor-enter(r7)
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r7.downloadTaskMap     // Catch: java.lang.Throwable -> L71
            java.lang.Object r0 = r0.get(r8)     // Catch: java.lang.Throwable -> L71
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L71
            r1 = 65536(0x10000, float:9.1835E-41)
            if (r0 != 0) goto L17
            boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r1)     // Catch: java.lang.Throwable -> L71
            if (r2 == 0) goto L17
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r7.getDownloadTask(r8)     // Catch: java.lang.Throwable -> L71
        L17:
            r2 = 1
            if (r0 == 0) goto L4a
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r8)     // Catch: java.lang.Throwable -> L71
            java.lang.String r4 = "fix_on_cancel_call_twice"
            boolean r3 = r3.optBugFix(r4, r2)     // Catch: java.lang.Throwable -> L71
            if (r3 != 0) goto L30
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r3 = new com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler     // Catch: java.lang.Throwable -> L71
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler r4 = r7.mainHandler     // Catch: java.lang.Throwable -> L71
            r3.<init>(r0, r4)     // Catch: java.lang.Throwable -> L71
            r3.onCancel()     // Catch: java.lang.Throwable -> L71
        L30:
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r0.getDownloadInfo()     // Catch: java.lang.Throwable -> L71
            com.ss.android.socialbase.downloader.constants.ListenerType r4 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN     // Catch: java.lang.Throwable -> L71
            android.util.SparseArray r4 = r0.getDownloadListeners(r4)     // Catch: java.lang.Throwable -> L71
            com.ss.android.socialbase.downloader.constants.ListenerType r5 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION     // Catch: java.lang.Throwable -> L71
            android.util.SparseArray r0 = r0.getDownloadListeners(r5)     // Catch: java.lang.Throwable -> L71
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler r5 = r7.mainHandler     // Catch: java.lang.Throwable -> L71
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine$1 r6 = new com.ss.android.socialbase.downloader.impls.AbsDownloadEngine$1     // Catch: java.lang.Throwable -> L71
            r6.<init>(r7, r4, r3, r0)     // Catch: java.lang.Throwable -> L71
            r5.post(r6)     // Catch: java.lang.Throwable -> L71
        L4a:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r7.downloadCache     // Catch: java.lang.Throwable -> L71
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo(r8)     // Catch: java.lang.Throwable -> L71
            boolean r1 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r1)     // Catch: java.lang.Throwable -> L71
            r3 = -4
            if (r1 == 0) goto L5d
            if (r0 == 0) goto L6c
            r0.setStatus(r3)     // Catch: java.lang.Throwable -> L71
            goto L6c
        L5d:
            if (r0 == 0) goto L6c
            int r1 = r0.getStatus()     // Catch: java.lang.Throwable -> L71
            boolean r1 = com.ss.android.socialbase.downloader.constants.DownloadStatus.isDownloading(r1)     // Catch: java.lang.Throwable -> L71
            if (r1 == 0) goto L6c
            r0.setStatus(r3)     // Catch: java.lang.Throwable -> L71
        L6c:
            r7.clearDownloadData(r8, r9)     // Catch: java.lang.Throwable -> L71
            monitor-exit(r7)
            return r2
        L71:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    public void clearDownloadData(int r3, boolean r4) {
            r2 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r2.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo(r3)
            if (r0 == 0) goto Lb
            r2.cancelAlarm(r0)
        Lb:
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler r0 = r2.mainHandler
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine$2 r1 = new com.ss.android.socialbase.downloader.impls.AbsDownloadEngine$2
            r1.<init>(r2, r3)
            r0.post(r1)
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine$3 r0 = new com.ss.android.socialbase.downloader.impls.AbsDownloadEngine$3
            r0.<init>(r2, r3, r4)
            r3 = 0
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.submitCPUTask(r0, r3)
            return
    }

    protected abstract com.ss.android.socialbase.downloader.thread.DownloadRunnable doCancel(int r1);

    protected abstract void doDownload(int r1, com.ss.android.socialbase.downloader.model.DownloadTask r2);

    protected abstract void doPause(int r1);

    public abstract void doSetThrottleNetSpeed(int r1, long r2);

    public synchronized void forceDownloadIgnoreRecommendSize(int r3) {
            r2 = this;
            monitor-enter(r2)
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r2.downloadTaskMap     // Catch: java.lang.Throwable -> L1a
            java.lang.Object r3 = r0.get(r3)     // Catch: java.lang.Throwable -> L1a
            com.ss.android.socialbase.downloader.model.DownloadTask r3 = (com.ss.android.socialbase.downloader.model.DownloadTask) r3     // Catch: java.lang.Throwable -> L1a
            if (r3 == 0) goto L18
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.getDownloadInfo()     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L18
            r1 = 1
            r0.setForceIgnoreRecommendSize(r1)     // Catch: java.lang.Throwable -> L1a
            r2.tryDownload(r3)     // Catch: java.lang.Throwable -> L1a
        L18:
            monitor-exit(r2)
            return
        L1a:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    protected abstract java.util.List<java.lang.Integer> getAllAliveDownloadIds();

    public synchronized com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider getDownloadFileUriProvider(int r2) {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.downloadTaskMap     // Catch: java.lang.Throwable -> L54
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L54
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L54
            if (r0 == 0) goto L11
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r2 = r0.getFileUriProvider()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)
            return r2
        L11:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.successDownloadTaskMap     // Catch: java.lang.Throwable -> L54
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L54
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L54
            if (r0 == 0) goto L21
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r2 = r0.getFileUriProvider()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)
            return r2
        L21:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.failedDownloadTaskMap     // Catch: java.lang.Throwable -> L54
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L54
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L54
            if (r0 == 0) goto L31
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r2 = r0.getFileUriProvider()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)
            return r2
        L31:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.retryDelayDownloadTaskMap     // Catch: java.lang.Throwable -> L54
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L54
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L54
            if (r0 == 0) goto L41
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r2 = r0.getFileUriProvider()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)
            return r2
        L41:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.waitingAsyncDownloadTaskMap     // Catch: java.lang.Throwable -> L54
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L54
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = (com.ss.android.socialbase.downloader.model.DownloadTask) r2     // Catch: java.lang.Throwable -> L54
            if (r2 == 0) goto L51
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r2 = r2.getFileUriProvider()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)
            return r2
        L51:
            r2 = 0
            monitor-exit(r1)
            return r2
        L54:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r3) {
            r2 = this;
            monitor-enter(r2)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r2.downloadCache     // Catch: java.lang.Throwable -> L19
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo(r3)     // Catch: java.lang.Throwable -> L19
            if (r0 != 0) goto L17
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r1 = r2.downloadTaskMap     // Catch: java.lang.Throwable -> L19
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L19
            com.ss.android.socialbase.downloader.model.DownloadTask r3 = (com.ss.android.socialbase.downloader.model.DownloadTask) r3     // Catch: java.lang.Throwable -> L19
            if (r3 == 0) goto L17
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.getDownloadInfo()     // Catch: java.lang.Throwable -> L19
        L17:
            monitor-exit(r2)
            return r0
        L19:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public synchronized java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r6) {
            r5 = this;
            monitor-enter(r5)
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L53
            if (r0 == 0) goto La
            r6 = 0
            monitor-exit(r5)
            return r6
        La:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r5.downloadCache     // Catch: java.lang.Throwable -> L53
            java.util.List r0 = r0.getDownloadInfoList(r6)     // Catch: java.lang.Throwable -> L53
            if (r0 == 0) goto L1b
            boolean r1 = r0.isEmpty()     // Catch: java.lang.Throwable -> L53
            if (r1 == 0) goto L19
            goto L1b
        L19:
            monitor-exit(r5)
            return r0
        L1b:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L53
            r0.<init>()     // Catch: java.lang.Throwable -> L53
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r1 = r5.downloadTaskMap     // Catch: java.lang.Throwable -> L53
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L53
            r2 = 0
        L27:
            if (r2 >= r1) goto L51
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r3 = r5.downloadTaskMap     // Catch: java.lang.Throwable -> L53
            java.lang.Object r3 = r3.valueAt(r2)     // Catch: java.lang.Throwable -> L53
            com.ss.android.socialbase.downloader.model.DownloadTask r3 = (com.ss.android.socialbase.downloader.model.DownloadTask) r3     // Catch: java.lang.Throwable -> L53
            if (r3 == 0) goto L4e
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r3.getDownloadInfo()     // Catch: java.lang.Throwable -> L53
            if (r4 == 0) goto L4e
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r3.getDownloadInfo()     // Catch: java.lang.Throwable -> L53
            java.lang.String r4 = r4.getUrl()     // Catch: java.lang.Throwable -> L53
            boolean r4 = r6.equals(r4)     // Catch: java.lang.Throwable -> L53
            if (r4 == 0) goto L4e
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r3.getDownloadInfo()     // Catch: java.lang.Throwable -> L53
            r0.add(r3)     // Catch: java.lang.Throwable -> L53
        L4e:
            int r2 = r2 + 1
            goto L27
        L51:
            monitor-exit(r5)
            return r0
        L53:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public synchronized com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener getDownloadNotificationEventListener(int r2) {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.downloadTaskMap     // Catch: java.lang.Throwable -> L54
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L54
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L54
            if (r0 == 0) goto L11
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r2 = r0.getNotificationEventListener()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)
            return r2
        L11:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.successDownloadTaskMap     // Catch: java.lang.Throwable -> L54
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L54
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L54
            if (r0 == 0) goto L21
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r2 = r0.getNotificationEventListener()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)
            return r2
        L21:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.failedDownloadTaskMap     // Catch: java.lang.Throwable -> L54
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L54
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L54
            if (r0 == 0) goto L31
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r2 = r0.getNotificationEventListener()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)
            return r2
        L31:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.retryDelayDownloadTaskMap     // Catch: java.lang.Throwable -> L54
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L54
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L54
            if (r0 == 0) goto L41
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r2 = r0.getNotificationEventListener()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)
            return r2
        L41:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.waitingAsyncDownloadTaskMap     // Catch: java.lang.Throwable -> L54
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L54
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = (com.ss.android.socialbase.downloader.model.DownloadTask) r2     // Catch: java.lang.Throwable -> L54
            if (r2 == 0) goto L51
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r2 = r2.getNotificationEventListener()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)
            return r2
        L51:
            r2 = 0
            monitor-exit(r1)
            return r2
        L54:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadingDownloadInfosWithMimeType(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L8
            r5 = 0
            return r5
        L8:
            java.util.List r0 = r4.getAllAliveDownloadIds()
            java.util.Iterator r0 = r0.iterator()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
        L15:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L39
            java.lang.Object r2 = r0.next()
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r4.getDownloadInfo(r2)
            if (r2 == 0) goto L15
            java.lang.String r3 = r2.getMimeType()
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L15
            r1.add(r2)
            goto L15
        L39:
            return r1
    }

    public synchronized com.ss.android.socialbase.downloader.depend.INotificationClickCallback getNotificationClickCallback(int r2) {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.downloadTaskMap     // Catch: java.lang.Throwable -> L54
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L54
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L54
            if (r0 == 0) goto L11
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r2 = r0.getNotificationClickCallback()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)
            return r2
        L11:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.successDownloadTaskMap     // Catch: java.lang.Throwable -> L54
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L54
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L54
            if (r0 == 0) goto L21
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r2 = r0.getNotificationClickCallback()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)
            return r2
        L21:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.failedDownloadTaskMap     // Catch: java.lang.Throwable -> L54
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L54
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L54
            if (r0 == 0) goto L31
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r2 = r0.getNotificationClickCallback()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)
            return r2
        L31:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.retryDelayDownloadTaskMap     // Catch: java.lang.Throwable -> L54
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L54
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L54
            if (r0 == 0) goto L41
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r2 = r0.getNotificationClickCallback()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)
            return r2
        L41:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.waitingAsyncDownloadTaskMap     // Catch: java.lang.Throwable -> L54
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L54
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = (com.ss.android.socialbase.downloader.model.DownloadTask) r2     // Catch: java.lang.Throwable -> L54
            if (r2 == 0) goto L51
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r2 = r2.getNotificationClickCallback()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)
            return r2
        L51:
            r2 = 0
            monitor-exit(r1)
            return r2
        L54:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public void handleMsg(android.os.Message r6) {
            r5 = this;
            int r0 = r6.arg1
            int r1 = r6.arg2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "handleMsg id: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = " listener hasCode: "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "AbsDownloadEngine"
            com.ss.android.socialbase.downloader.logger.Logger.d(r3, r2)
            java.lang.Object r2 = r6.obj
            boolean r2 = r2 instanceof java.lang.Exception
            r3 = 0
            if (r2 == 0) goto L2e
            java.lang.Object r2 = r6.obj
            com.ss.android.socialbase.downloader.exception.BaseException r2 = (com.ss.android.socialbase.downloader.exception.BaseException) r2
            goto L2f
        L2e:
            r2 = r3
        L2f:
            monitor-enter(r5)
            if (r1 != 0) goto L3b
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r3 = r5.downloadTaskMap     // Catch: java.lang.Throwable -> L5b
            java.lang.Object r3 = r3.get(r0)     // Catch: java.lang.Throwable -> L5b
            com.ss.android.socialbase.downloader.model.DownloadTask r3 = (com.ss.android.socialbase.downloader.model.DownloadTask) r3     // Catch: java.lang.Throwable -> L5b
            goto L4b
        L3b:
            android.util.SparseArray<android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask>> r4 = r5.downloadTaskWithListenerMap     // Catch: java.lang.Throwable -> L5b
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> L5b
            android.util.SparseArray r4 = (android.util.SparseArray) r4     // Catch: java.lang.Throwable -> L5b
            if (r4 == 0) goto L4b
            java.lang.Object r3 = r4.get(r1)     // Catch: java.lang.Throwable -> L5b
            com.ss.android.socialbase.downloader.model.DownloadTask r3 = (com.ss.android.socialbase.downloader.model.DownloadTask) r3     // Catch: java.lang.Throwable -> L5b
        L4b:
            if (r3 != 0) goto L4f
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L5b
            return
        L4f:
            int r4 = r6.what     // Catch: java.lang.Throwable -> L5b
            r5.notifyDownloadTaskStatus(r4, r2, r3)     // Catch: java.lang.Throwable -> L5b
            int r6 = r6.what     // Catch: java.lang.Throwable -> L5b
            r5.refreshDownloadTaskMap(r0, r1, r6)     // Catch: java.lang.Throwable -> L5b
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L5b
            return
        L5b:
            r6 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L5b
            throw r6
    }

    public abstract boolean isDownloading(int r1);

    public synchronized boolean isInDownloadTaskPool(int r2) {
            r1 = this;
            monitor-enter(r1)
            if (r2 == 0) goto L18
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.downloadTaskMap     // Catch: java.lang.Throwable -> L15
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L15
            if (r0 != 0) goto L13
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.failedDownloadTaskMap     // Catch: java.lang.Throwable -> L15
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L15
            if (r2 == 0) goto L18
        L13:
            r2 = 1
            goto L19
        L15:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L18:
            r2 = 0
        L19:
            monitor-exit(r1)
            return r2
    }

    public synchronized boolean pause(int r5) {
            r4 = this;
            monitor-enter(r4)
            java.lang.String r0 = "AbsDownloadEngine"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7e
            r1.<init>()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r2 = "pause id="
            r1.append(r2)     // Catch: java.lang.Throwable -> L7e
            r1.append(r5)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L7e
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)     // Catch: java.lang.Throwable -> L7e
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r4.downloadCache     // Catch: java.lang.Throwable -> L7e
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo(r5)     // Catch: java.lang.Throwable -> L7e
            r1 = 0
            if (r0 == 0) goto L2a
            int r2 = r0.getStatus()     // Catch: java.lang.Throwable -> L7e
            r3 = 11
            if (r2 != r3) goto L2a
            monitor-exit(r4)
            return r1
        L2a:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r2 = r4.downloadTaskMap     // Catch: java.lang.Throwable -> L7e
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L7e
            r4.doPause(r5)     // Catch: java.lang.Throwable -> L7b
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L7b
            r2 = 1
            if (r0 != 0) goto L4a
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r4.downloadTaskMap     // Catch: java.lang.Throwable -> L7e
            java.lang.Object r5 = r0.get(r5)     // Catch: java.lang.Throwable -> L7e
            com.ss.android.socialbase.downloader.model.DownloadTask r5 = (com.ss.android.socialbase.downloader.model.DownloadTask) r5     // Catch: java.lang.Throwable -> L7e
            if (r5 == 0) goto L79
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = new com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler     // Catch: java.lang.Throwable -> L7e
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler r1 = r4.mainHandler     // Catch: java.lang.Throwable -> L7e
            r0.<init>(r5, r1)     // Catch: java.lang.Throwable -> L7e
            r0.onPause()     // Catch: java.lang.Throwable -> L7e
            monitor-exit(r4)
            return r2
        L4a:
            r4.cancelAlarm(r0)     // Catch: java.lang.Throwable -> L7e
            int r3 = r0.getStatus()     // Catch: java.lang.Throwable -> L7e
            if (r3 != r2) goto L69
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r4.downloadTaskMap     // Catch: java.lang.Throwable -> L7e
            java.lang.Object r5 = r0.get(r5)     // Catch: java.lang.Throwable -> L7e
            com.ss.android.socialbase.downloader.model.DownloadTask r5 = (com.ss.android.socialbase.downloader.model.DownloadTask) r5     // Catch: java.lang.Throwable -> L7e
            if (r5 == 0) goto L79
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = new com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler     // Catch: java.lang.Throwable -> L7e
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler r1 = r4.mainHandler     // Catch: java.lang.Throwable -> L7e
            r0.<init>(r5, r1)     // Catch: java.lang.Throwable -> L7e
            r0.onPause()     // Catch: java.lang.Throwable -> L7e
            monitor-exit(r4)
            return r2
        L69:
            int r5 = r0.getStatus()     // Catch: java.lang.Throwable -> L7e
            boolean r5 = com.ss.android.socialbase.downloader.constants.DownloadStatus.isDownloading(r5)     // Catch: java.lang.Throwable -> L7e
            if (r5 == 0) goto L79
            r5 = -2
            r0.setStatus(r5)     // Catch: java.lang.Throwable -> L7e
            monitor-exit(r4)
            return r2
        L79:
            monitor-exit(r4)
            return r1
        L7b:
            r5 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L7b
            throw r5     // Catch: java.lang.Throwable -> L7e
        L7e:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public synchronized void refreshDownloadTaskMap(int r2, int r3, int r4) {
            r1 = this;
            monitor-enter(r1)
            r0 = -7
            if (r4 == r0) goto L7e
            r0 = -6
            if (r4 == r0) goto L6d
            r0 = -4
            if (r4 == r0) goto L66
            r0 = -3
            if (r4 == r0) goto L52
            r0 = -1
            if (r4 == r0) goto L7e
            r0 = 7
            if (r4 == r0) goto L34
            r3 = 8
            if (r4 == r3) goto L19
            goto L9b
        L19:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r3 = r1.downloadTaskMap     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r3 = r3.get(r2)     // Catch: java.lang.Throwable -> L9d
            com.ss.android.socialbase.downloader.model.DownloadTask r3 = (com.ss.android.socialbase.downloader.model.DownloadTask) r3     // Catch: java.lang.Throwable -> L9d
            if (r3 == 0) goto L30
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r4 = r1.waitingAsyncDownloadTaskMap     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Throwable -> L9d
            if (r4 != 0) goto L30
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r4 = r1.waitingAsyncDownloadTaskMap     // Catch: java.lang.Throwable -> L9d
            r4.put(r2, r3)     // Catch: java.lang.Throwable -> L9d
        L30:
            r1.tryDownloadNextTaskInQueue(r2)     // Catch: java.lang.Throwable -> L9d
            goto L9b
        L34:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r4 = r1.downloadTaskMap     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Throwable -> L9d
            com.ss.android.socialbase.downloader.model.DownloadTask r4 = (com.ss.android.socialbase.downloader.model.DownloadTask) r4     // Catch: java.lang.Throwable -> L9d
            if (r4 == 0) goto L4e
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.retryDelayDownloadTaskMap     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L9d
            if (r0 != 0) goto L4b
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.retryDelayDownloadTaskMap     // Catch: java.lang.Throwable -> L9d
            r0.put(r2, r4)     // Catch: java.lang.Throwable -> L9d
        L4b:
            r1.removeTask(r2, r3)     // Catch: java.lang.Throwable -> L9d
        L4e:
            r1.tryDownloadNextTaskInQueue(r2)     // Catch: java.lang.Throwable -> L9d
            goto L9b
        L52:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r4 = r1.downloadTaskMap     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Throwable -> L9d
            com.ss.android.socialbase.downloader.model.DownloadTask r4 = (com.ss.android.socialbase.downloader.model.DownloadTask) r4     // Catch: java.lang.Throwable -> L9d
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.successDownloadTaskMap     // Catch: java.lang.Throwable -> L9d
            r0.put(r2, r4)     // Catch: java.lang.Throwable -> L9d
            r1.removeTask(r2, r3)     // Catch: java.lang.Throwable -> L9d
            r1.tryDownloadNextTaskInQueue(r2)     // Catch: java.lang.Throwable -> L9d
            goto L9b
        L66:
            r1.removeTask(r2, r3)     // Catch: java.lang.Throwable -> L9d
            r1.tryDownloadNextTaskInQueue(r2)     // Catch: java.lang.Throwable -> L9d
            goto L9b
        L6d:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r4 = r1.downloadTaskMap     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Throwable -> L9d
            com.ss.android.socialbase.downloader.model.DownloadTask r4 = (com.ss.android.socialbase.downloader.model.DownloadTask) r4     // Catch: java.lang.Throwable -> L9d
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.successDownloadTaskMap     // Catch: java.lang.Throwable -> L9d
            r0.put(r2, r4)     // Catch: java.lang.Throwable -> L9d
            r1.removeTask(r2, r3)     // Catch: java.lang.Throwable -> L9d
            goto L9b
        L7e:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r4 = r1.downloadTaskMap     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Throwable -> L9d
            com.ss.android.socialbase.downloader.model.DownloadTask r4 = (com.ss.android.socialbase.downloader.model.DownloadTask) r4     // Catch: java.lang.Throwable -> L9d
            if (r4 == 0) goto L98
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.failedDownloadTaskMap     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L9d
            if (r0 != 0) goto L95
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.failedDownloadTaskMap     // Catch: java.lang.Throwable -> L9d
            r0.put(r2, r4)     // Catch: java.lang.Throwable -> L9d
        L95:
            r1.removeTask(r2, r3)     // Catch: java.lang.Throwable -> L9d
        L98:
            r1.tryDownloadNextTaskInQueue(r2)     // Catch: java.lang.Throwable -> L9d
        L9b:
            monitor-exit(r1)
            return
        L9d:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void removeDownloadListener(int r2, int r3, com.ss.android.socialbase.downloader.depend.IDownloadListener r4, com.ss.android.socialbase.downloader.constants.ListenerType r5, boolean r6) {
            r1 = this;
            monitor-enter(r1)
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r1.getDownloadTask(r2)     // Catch: java.lang.Throwable -> L1b
            if (r0 != 0) goto L14
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.pengingTaskCache     // Catch: java.lang.Throwable -> L1b
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L1b
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L1b
            r0 = r2
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L1b
        L14:
            if (r0 == 0) goto L19
            r0.removeDownloadListener(r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r1)
            return
        L1b:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public abstract void removeDownloadRunnable(com.ss.android.socialbase.downloader.thread.DownloadRunnable r1);

    public void resetDownloadData(int r3, boolean r4) {
            r2 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r2.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo(r3)
            if (r0 == 0) goto Lb
            r2.cancelAlarm(r0)
        Lb:
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler r0 = r2.mainHandler
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine$4 r1 = new com.ss.android.socialbase.downloader.impls.AbsDownloadEngine$4
            r1.<init>(r2, r3)
            r0.post(r1)
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine$5 r0 = new com.ss.android.socialbase.downloader.impls.AbsDownloadEngine$5
            r0.<init>(r2, r3, r4)
            r3 = 0
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.submitCPUTask(r0, r3)
            return
    }

    public synchronized boolean restart(int r3) {
            r2 = this;
            monitor-enter(r2)
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r2.failedDownloadTaskMap     // Catch: java.lang.Throwable -> L28
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L28
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L14
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r2.retryDelayDownloadTaskMap     // Catch: java.lang.Throwable -> L28
            java.lang.Object r3 = r0.get(r3)     // Catch: java.lang.Throwable -> L28
            r0 = r3
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L28
        L14:
            r3 = 0
            if (r0 == 0) goto L26
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r0.getDownloadInfo()     // Catch: java.lang.Throwable -> L28
            if (r1 == 0) goto L20
            r1.setDownloadFromReserveWifi(r3)     // Catch: java.lang.Throwable -> L28
        L20:
            r2.tryDownload(r0)     // Catch: java.lang.Throwable -> L28
            r3 = 1
            monitor-exit(r2)
            return r3
        L26:
            monitor-exit(r2)
            return r3
        L28:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public synchronized void restartAllFailedDownloadTasks(java.util.List<java.lang.String> r7) {
            r6 = this;
            monitor-enter(r6)
            r0 = 1048576(0x100000, float:1.469368E-39)
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r0)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            r1 = 1
            if (r0 == 0) goto L13
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isWifi(r0)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            goto L14
        L13:
            r0 = r1
        L14:
            r2 = 0
        L15:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r3 = r6.failedDownloadTaskMap     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            if (r2 >= r3) goto L5f
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r3 = r6.failedDownloadTaskMap     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            int r3 = r3.keyAt(r2)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r4 = r6.failedDownloadTaskMap     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            java.lang.Object r3 = r4.get(r3)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            com.ss.android.socialbase.downloader.model.DownloadTask r3 = (com.ss.android.socialbase.downloader.model.DownloadTask) r3     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            if (r3 != 0) goto L2e
            goto L56
        L2e:
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r3.getDownloadInfo()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            if (r4 == 0) goto L56
            java.lang.String r5 = r4.getMimeType()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            if (r5 == 0) goto L56
            java.lang.String r5 = r4.getMimeType()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            boolean r5 = r7.contains(r5)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            if (r5 == 0) goto L56
            boolean r5 = r4.isOnlyWifi()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            if (r5 == 0) goto L4d
            if (r0 != 0) goto L4d
            goto L56
        L4d:
            r4.setAutoResumed(r1)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            r4.setShowNotificationForNetworkResumed(r1)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
            r6.tryDownload(r3)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b
        L56:
            int r2 = r2 + 1
            goto L15
        L59:
            r7 = move-exception
            goto L61
        L5b:
            r7 = move-exception
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L59
        L5f:
            monitor-exit(r6)
            return
        L61:
            monitor-exit(r6)
            throw r7
    }

    public synchronized void restartAllPauseReserveOnWifiDownloadTasks(java.util.List<java.lang.String> r6) {
            r5 = this;
            monitor-enter(r5)
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isWifi(r0)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            if (r0 != 0) goto Ld
            monitor-exit(r5)
            return
        Ld:
            r0 = 0
        Le:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r1 = r5.downloadTaskMap     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            if (r0 >= r1) goto L6d
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r1 = r5.downloadTaskMap     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            int r1 = r1.keyAt(r0)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r2 = r5.downloadTaskMap     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            java.lang.Object r1 = r2.get(r1)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            com.ss.android.socialbase.downloader.model.DownloadTask r1 = (com.ss.android.socialbase.downloader.model.DownloadTask) r1     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            if (r1 != 0) goto L27
            goto L64
        L27:
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.getDownloadInfo()     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            if (r2 == 0) goto L64
            java.lang.String r3 = r2.getMimeType()     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            if (r3 == 0) goto L64
            java.lang.String r3 = r2.getMimeType()     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            boolean r3 = r6.contains(r3)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            if (r3 == 0) goto L64
            boolean r3 = r5.isPauseReserveOnWifi(r2)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            if (r3 != 0) goto L44
            goto L64
        L44:
            r3 = 1
            r2.setAutoResumed(r3)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            r2.setShowNotificationForNetworkResumed(r3)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            r5.tryDownload(r1)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            r2.setDownloadFromReserveWifi(r3)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            android.content.Context r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            com.ss.android.socialbase.downloader.downloader.Downloader r1 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r1)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener r1 = r1.getReserveWifiStatusListener()     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
            if (r1 == 0) goto L64
            r3 = 5
            r4 = 2
            r1.onStatusChanged(r2, r3, r4)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L69
        L64:
            int r0 = r0 + 1
            goto Le
        L67:
            r6 = move-exception
            goto L6f
        L69:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L67
        L6d:
            monitor-exit(r5)
            return
        L6f:
            monitor-exit(r5)
            throw r6
    }

    public synchronized boolean restartAsyncWaitingTask(int r2) {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.waitingAsyncDownloadTaskMap     // Catch: java.lang.Throwable -> L20
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L20
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = (com.ss.android.socialbase.downloader.model.DownloadTask) r2     // Catch: java.lang.Throwable -> L20
            if (r2 == 0) goto L1d
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.getDownloadInfo()     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L1d
            boolean r0 = r0.canReStartAsyncTask()     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L1a
            r1.tryDownload(r2)     // Catch: java.lang.Throwable -> L20
        L1a:
            r2 = 1
            monitor-exit(r1)
            return r2
        L1d:
            r2 = 0
            monitor-exit(r1)
            return r2
        L20:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized boolean resume(int r3) {
            r2 = this;
            monitor-enter(r2)
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r2.downloadTaskMap     // Catch: java.lang.Throwable -> L1f
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L1f
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L19
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r0.getDownloadInfo()     // Catch: java.lang.Throwable -> L1f
            if (r3 == 0) goto L15
            r1 = 0
            r3.setDownloadFromReserveWifi(r1)     // Catch: java.lang.Throwable -> L1f
        L15:
            r2.tryDownload(r0)     // Catch: java.lang.Throwable -> L1f
            goto L1c
        L19:
            r2.restart(r3)     // Catch: java.lang.Throwable -> L1f
        L1c:
            r3 = 1
            monitor-exit(r2)
            return r3
        L1f:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public synchronized boolean retryDelayStart(int r4) {
            r3 = this;
            monitor-enter(r3)
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r3.retryDelayDownloadTaskMap     // Catch: java.lang.Throwable -> L36
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Throwable -> L36
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = (com.ss.android.socialbase.downloader.model.DownloadTask) r0     // Catch: java.lang.Throwable -> L36
            r1 = 0
            if (r0 == 0) goto L1e
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.getDownloadInfo()     // Catch: java.lang.Throwable -> L36
            if (r2 == 0) goto L1e
            boolean r4 = r2.canStartRetryDelayTask()     // Catch: java.lang.Throwable -> L36
            if (r4 == 0) goto L1b
            r3.tryDownload(r0, r1)     // Catch: java.lang.Throwable -> L36
        L1b:
            r4 = 1
            monitor-exit(r3)
            return r4
        L1e:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r3.downloadCache     // Catch: java.lang.Throwable -> L36
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r0.getDownloadInfo(r4)     // Catch: java.lang.Throwable -> L36
            if (r4 == 0) goto L34
            boolean r0 = r4.canStartRetryDelayTask()     // Catch: java.lang.Throwable -> L36
            if (r0 == 0) goto L34
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = new com.ss.android.socialbase.downloader.model.DownloadTask     // Catch: java.lang.Throwable -> L36
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L36
            r3.tryDownload(r0, r1)     // Catch: java.lang.Throwable -> L36
        L34:
            monitor-exit(r3)
            return r1
        L36:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public synchronized void setDownloadNotificationEventListener(int r2, com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r3) {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadTask> r0 = r1.downloadTaskMap     // Catch: java.lang.Throwable -> L10
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L10
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = (com.ss.android.socialbase.downloader.model.DownloadTask) r2     // Catch: java.lang.Throwable -> L10
            if (r2 == 0) goto Le
            r2.setNotificationEventListener(r3)     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r1)
            return
        L10:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public void setThrottleNetSpeed(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo(r2)
            if (r0 == 0) goto Lb
            r0.setThrottleNetSpeed(r3)
        Lb:
            r1.doSetThrottleNetSpeed(r2, r3)
            return
    }

    public void shutDown() {
            r2 = this;
            java.util.List r0 = r2.getAllAliveDownloadIds()
            if (r0 != 0) goto L7
            return
        L7:
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r0.next()
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            r2.pause(r1)
            goto Lb
        L1f:
            return
    }

    public synchronized void tryDownload(com.ss.android.socialbase.downloader.model.DownloadTask r3) {
            r2 = this;
            monitor-enter(r2)
            if (r3 != 0) goto L5
            monitor-exit(r2)
            return
        L5:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.getDownloadInfo()     // Catch: java.lang.Throwable -> L23
            if (r0 != 0) goto Ld
            monitor-exit(r2)
            return
        Ld:
            r1 = 0
            r0.setDownloadFromReserveWifi(r1)     // Catch: java.lang.Throwable -> L23
            com.ss.android.socialbase.downloader.constants.EnqueueType r0 = r0.getEnqueueType()     // Catch: java.lang.Throwable -> L23
            com.ss.android.socialbase.downloader.constants.EnqueueType r1 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_NONE     // Catch: java.lang.Throwable -> L23
            if (r0 == r1) goto L1d
            r2.enqueue(r3)     // Catch: java.lang.Throwable -> L23
            goto L21
        L1d:
            r0 = 1
            r2.tryDownload(r3, r0)     // Catch: java.lang.Throwable -> L23
        L21:
            monitor-exit(r2)
            return
        L23:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }
}
