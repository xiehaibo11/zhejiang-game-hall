package com.ss.android.socialbase.downloader.downloader;

public class DownloadStatusHandler {
    private static final java.lang.String TAG = null;
    private final com.ss.android.socialbase.downloader.downloader.IDownloadCache downloadCache;
    private com.ss.android.socialbase.downloader.depend.IDownloadDepend downloadDepend;
    private com.ss.android.socialbase.downloader.model.DownloadInfo downloadInfo;
    private com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend downloadMonitorDepend;
    private com.ss.android.socialbase.downloader.model.DownloadTask downloadTask;
    private final boolean fixStartWithFileExistUpdateError;
    private boolean forceRefreshProcess;
    private boolean hasSyncProgressBefore;
    private volatile long lastSyncProgressTime;
    private final android.os.Handler mainThreadHandler;
    private android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> mainThreadListeners;
    private long minByteIntervalForSyncProgress;
    private int minTimeIntervalForSyncProgress;
    private final java.util.concurrent.atomic.AtomicLong msgPostDataBuffer;
    private android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> notificationListeners;
    private android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> subThreadListeners;



    static {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler> r0 = com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler.TAG = r0
            return
    }

    public DownloadStatusHandler(com.ss.android.socialbase.downloader.model.DownloadTask r4, android.os.Handler r5) {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.forceRefreshProcess = r0
            r1 = 0
            r3.lastSyncProgressTime = r1
            java.util.concurrent.atomic.AtomicLong r1 = new java.util.concurrent.atomic.AtomicLong
            r1.<init>()
            r3.msgPostDataBuffer = r1
            r3.hasSyncProgressBefore = r0
            r3.downloadTask = r4
            r3.checkInit()
            r3.mainThreadHandler = r5
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r5 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadCache()
            r3.downloadCache = r5
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r4.getDownloadInfo()
            if (r4 == 0) goto L37
            int r4 = r4.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r4)
            java.lang.String r5 = "fix_start_with_file_exist_update_error"
            boolean r4 = r4.optBugFix(r5)
            r3.fixStartWithFileExistUpdateError = r4
            goto L39
        L37:
            r3.fixStartWithFileExistUpdateError = r0
        L39:
            return
    }

    static com.ss.android.socialbase.downloader.model.DownloadInfo access$000(com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0) {
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.downloadInfo
            return r0
    }

    static com.ss.android.socialbase.downloader.downloader.IDownloadCache access$100(com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0) {
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r0.downloadCache
            return r0
    }

    static void access$200(com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0, int r1, com.ss.android.socialbase.downloader.exception.BaseException r2) {
            r0.onStatusChanged(r1, r2)
            return
    }

    static void access$300(com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0) {
            r0.onSaveTempFileSuccess()
            return
    }

    static java.lang.String access$400() {
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler.TAG
            return r0
    }

    private void checkInit() {
            r2 = this;
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r2.downloadTask
            if (r0 == 0) goto L38
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo()
            r2.downloadInfo = r0
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r2.downloadTask
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN
            android.util.SparseArray r0 = r0.getDownloadListeners(r1)
            r2.mainThreadListeners = r0
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r2.downloadTask
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION
            android.util.SparseArray r0 = r0.getDownloadListeners(r1)
            r2.notificationListeners = r0
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r2.downloadTask
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB
            android.util.SparseArray r0 = r0.getDownloadListeners(r1)
            r2.subThreadListeners = r0
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r2.downloadTask
            com.ss.android.socialbase.downloader.depend.IDownloadDepend r0 = r0.getDepend()
            r2.downloadDepend = r0
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r2.downloadTask
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r0 = r0.getMonitorDepend()
            r2.downloadMonitorDepend = r0
        L38:
            return
    }

    private void downloadCompleteProcess() throws com.ss.android.socialbase.downloader.exception.BaseException {
            r4 = this;
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r4.downloadTask
            java.util.List r0 = r0.getDownloadCompleteHandlers()
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L43
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo
            r2 = 11
            r3 = 0
            r4.onStatusChanged(r2, r3)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r2 = r4.downloadCache
            r2.updateDownloadInfo(r1)
            java.util.Iterator r0 = r0.iterator()
        L1d:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L43
            java.lang.Object r2 = r0.next()
            com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler r2 = (com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler) r2
            boolean r3 = r2.needHandle(r1)     // Catch: java.lang.Throwable -> L38 com.ss.android.socialbase.downloader.exception.BaseException -> L41
            if (r3 == 0) goto L1d
            r2.handle(r1)     // Catch: java.lang.Throwable -> L38 com.ss.android.socialbase.downloader.exception.BaseException -> L41
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r2 = r4.downloadCache     // Catch: java.lang.Throwable -> L38 com.ss.android.socialbase.downloader.exception.BaseException -> L41
            r2.updateDownloadInfo(r1)     // Catch: java.lang.Throwable -> L38 com.ss.android.socialbase.downloader.exception.BaseException -> L41
            goto L1d
        L38:
            r0 = move-exception
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r2 = 1071(0x42f, float:1.501E-42)
            r1.<init>(r2, r0)
            throw r1
        L41:
            r0 = move-exception
            throw r0
        L43:
            return
    }

    private void handleError(com.ss.android.socialbase.downloader.exception.BaseException r5) {
            r4 = this;
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "handleError::"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r2 = " \r\n"
            r1.append(r2)
            java.lang.Throwable r2 = new java.lang.Throwable
            r2.<init>()
            java.lang.String r2 = android.util.Log.getStackTraceString(r2)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.d(r0, r1)
            if (r5 == 0) goto L48
            java.lang.Throwable r0 = r5.getCause()
            if (r0 == 0) goto L48
            java.lang.Throwable r0 = r5.getCause()
            boolean r0 = r0 instanceof android.database.sqlite.SQLiteFullException
            if (r0 == 0) goto L48
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r4.downloadCache     // Catch: android.database.sqlite.SQLiteException -> L43
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo     // Catch: android.database.sqlite.SQLiteException -> L43
            int r1 = r1.getId()     // Catch: android.database.sqlite.SQLiteException -> L43
            r0.removeDownloadTaskData(r1)     // Catch: android.database.sqlite.SQLiteException -> L43
            goto L6a
        L43:
            r0 = move-exception
            r0.printStackTrace()
            goto L6a
        L48:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r4.downloadCache     // Catch: android.database.sqlite.SQLiteException -> L5a
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo     // Catch: android.database.sqlite.SQLiteException -> L5a
            int r1 = r1.getId()     // Catch: android.database.sqlite.SQLiteException -> L5a
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r4.downloadInfo     // Catch: android.database.sqlite.SQLiteException -> L5a
            long r2 = r2.getCurBytes()     // Catch: android.database.sqlite.SQLiteException -> L5a
            r0.OnDownloadTaskError(r1, r2)     // Catch: android.database.sqlite.SQLiteException -> L5a
            goto L6a
        L5a:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r4.downloadCache     // Catch: android.database.sqlite.SQLiteException -> L66
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo     // Catch: android.database.sqlite.SQLiteException -> L66
            int r1 = r1.getId()     // Catch: android.database.sqlite.SQLiteException -> L66
            r0.removeDownloadTaskData(r1)     // Catch: android.database.sqlite.SQLiteException -> L66
            goto L6a
        L66:
            r0 = move-exception
            r0.printStackTrace()
        L6a:
            com.ss.android.socialbase.downloader.exception.BaseException r5 = r4.reviseFailedException(r5)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            r0.setFailedException(r5)
            boolean r0 = r5 instanceof com.ss.android.socialbase.downloader.exception.DownloadPauseReserveWifiException
            if (r0 == 0) goto L79
            r0 = -2
            goto L7a
        L79:
            r0 = -1
        L7a:
            r4.onStatusChanged(r0, r5)
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r4.downloadInfo
            int r5 = r5.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r5 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r5)
            r0 = 0
            java.lang.String r1 = "retry_schedule"
            int r5 = r5.optInt(r1, r0)
            if (r5 <= 0) goto L99
            com.ss.android.socialbase.downloader.impls.RetryScheduler r5 = com.ss.android.socialbase.downloader.impls.RetryScheduler.getInstance()
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            r5.tryStartScheduleRetry(r0)
        L99:
            return
    }

    private void handlePrepare() {
            r2 = this;
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getCPUThreadExecutor()
            if (r0 == 0) goto Le
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler$1 r1 = new com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler$1
            r1.<init>(r2)
            r0.execute(r1)
        Le:
            return
    }

    private boolean handleProgress(long r3, boolean r5) {
            r2 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r2.downloadInfo
            long r3 = r3.getCurBytes()
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            long r0 = r0.getTotalBytes()
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            r4 = 0
            if (r3 != 0) goto L28
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r3 = r2.downloadCache     // Catch: java.lang.Exception -> L23
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r2.downloadInfo     // Catch: java.lang.Exception -> L23
            int r5 = r5.getId()     // Catch: java.lang.Exception -> L23
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo     // Catch: java.lang.Exception -> L23
            long r0 = r0.getCurBytes()     // Catch: java.lang.Exception -> L23
            r3.OnDownloadTaskProgress(r5, r0)     // Catch: java.lang.Exception -> L23
            goto L27
        L23:
            r3 = move-exception
            r3.printStackTrace()
        L27:
            return r4
        L28:
            boolean r3 = r2.forceRefreshProcess
            r0 = 4
            if (r3 == 0) goto L34
            r2.forceRefreshProcess = r4
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r2.downloadInfo
            r3.setStatus(r0)
        L34:
            r3 = 0
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r2.downloadInfo
            boolean r1 = r1.isNeedPostProgress()
            if (r1 == 0) goto L40
            if (r5 == 0) goto L40
            r4 = 1
        L40:
            r2.onStatusChanged(r0, r3, r4)
            return r5
    }

    private void handleRetry(com.ss.android.socialbase.downloader.exception.BaseException r3, boolean r4) {
            r2 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r2.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r2.downloadInfo
            int r1 = r1.getId()
            r0.OnDownloadTaskRetry(r1)
            if (r4 == 0) goto Lf
            r4 = 7
            goto L10
        Lf:
            r4 = 5
        L10:
            r2.onStatusChanged(r4, r3)
            return
    }

    private boolean needSyncProgress(long r9) {
            r8 = this;
            boolean r0 = r8.hasSyncProgressBefore
            r1 = 1
            if (r0 != 0) goto L8
            r8.hasSyncProgressBefore = r1
            return r1
        L8:
            long r2 = r8.lastSyncProgressTime
            long r2 = r9 - r2
            java.util.concurrent.atomic.AtomicLong r0 = r8.msgPostDataBuffer
            long r4 = r0.get()
            long r6 = r8.minByteIntervalForSyncProgress
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 >= 0) goto L21
            int r0 = r8.minTimeIntervalForSyncProgress
            long r4 = (long) r0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 < 0) goto L20
            goto L21
        L20:
            r1 = 0
        L21:
            if (r1 == 0) goto L2c
            r8.lastSyncProgressTime = r9
            java.util.concurrent.atomic.AtomicLong r9 = r8.msgPostDataBuffer
            r2 = 0
            r9.set(r2)
        L2c:
            return r1
    }

    private void onSaveTempFileSuccess() {
            r4 = this;
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler.TAG     // Catch: java.lang.Throwable -> L47
            java.lang.String r1 = "saveFileAsTargetName onSuccess"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)     // Catch: java.lang.Throwable -> L47
            r4.downloadCompleteProcess()     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L42 java.lang.Throwable -> L47
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo     // Catch: java.lang.Throwable -> L47
            r1 = 0
            r0.setFirstSuccess(r1)     // Catch: java.lang.Throwable -> L47
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo     // Catch: java.lang.Throwable -> L47
            r0.setSuccessByCache(r1)     // Catch: java.lang.Throwable -> L47
            r0 = -3
            r1 = 0
            r4.onStatusChanged(r0, r1)     // Catch: java.lang.Throwable -> L47
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r4.downloadCache     // Catch: java.lang.Throwable -> L47
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo     // Catch: java.lang.Throwable -> L47
            int r1 = r1.getId()     // Catch: java.lang.Throwable -> L47
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r4.downloadInfo     // Catch: java.lang.Throwable -> L47
            long r2 = r2.getTotalBytes()     // Catch: java.lang.Throwable -> L47
            r0.OnDownloadTaskCompleted(r1, r2)     // Catch: java.lang.Throwable -> L47
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r4.downloadCache     // Catch: java.lang.Throwable -> L47
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo     // Catch: java.lang.Throwable -> L47
            int r1 = r1.getId()     // Catch: java.lang.Throwable -> L47
            r0.removeAllDownloadChunk(r1)     // Catch: java.lang.Throwable -> L47
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r4.downloadCache     // Catch: java.lang.Throwable -> L47
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo     // Catch: java.lang.Throwable -> L47
            int r1 = r1.getId()     // Catch: java.lang.Throwable -> L47
            r0.removeSegments(r1)     // Catch: java.lang.Throwable -> L47
            goto L58
        L42:
            r0 = move-exception
            r4.onError(r0)     // Catch: java.lang.Throwable -> L47
            return
        L47:
            r0 = move-exception
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r2 = 1008(0x3f0, float:1.413E-42)
            java.lang.String r3 = "onCompleted"
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getErrorMsgWithTagPrefix(r0, r3)
            r1.<init>(r2, r0)
            r4.onError(r1)
        L58:
            return
    }

    private void onStatusChanged(int r2, com.ss.android.socialbase.downloader.exception.BaseException r3) {
            r1 = this;
            r0 = 1
            r1.onStatusChanged(r2, r3, r0)
            return
    }

    private void onStatusChanged(int r5, com.ss.android.socialbase.downloader.exception.BaseException r6, boolean r7) {
            r4 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            int r0 = r0.getStatus()
            r1 = 4
            r2 = -3
            if (r0 != r2) goto Ld
            if (r5 != r1) goto Ld
            return
        Ld:
            r4.checkInit()
            if (r5 == r1) goto L29
            boolean r1 = com.ss.android.socialbase.downloader.constants.DownloadStatus.isRealTimeUploadStatus(r5)
            if (r1 == 0) goto L29
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo
            r3 = 0
            r1.updateRealDownloadTime(r3)
            boolean r1 = com.ss.android.socialbase.downloader.constants.DownloadStatus.isTimeUploadStatus(r5)
            if (r1 == 0) goto L29
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo
            r1.updateDownloadTime()
        L29:
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo
            boolean r1 = r1.isAddListenerToSameTask()
            if (r1 != 0) goto L36
            com.ss.android.socialbase.downloader.model.DownloadTask r1 = r4.downloadTask
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSend(r1, r6, r5)
        L36:
            r1 = 6
            if (r5 != r1) goto L40
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo
            r3 = 2
            r1.setStatus(r3)
            goto L4e
        L40:
            r1 = -6
            if (r5 != r1) goto L49
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo
            r1.setStatus(r2)
            goto L4e
        L49:
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo
            r1.setStatus(r5)
        L4e:
            if (r0 == r2) goto L53
            r1 = -1
            if (r0 != r1) goto L86
        L53:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r0 = r0.getRetryDelayStatus()
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_DOWNLOADING
            if (r0 != r1) goto L64
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_DOWNLOADED
            r0.setRetryDelayStatus(r1)
        L64:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r0 = r0.getAsyncHandleStatus()
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r1 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_DOWNLOADING
            if (r0 != r1) goto L75
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r1 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_DOWNLOADED
            r0.setAsyncHandleStatus(r1)
        L75:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r0 = r0.getByteInvalidRetryStatus()
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r1 = com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_DOWNLOADING
            if (r0 != r1) goto L86
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r1 = com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_DOWNLOADED
            r0.setByteInvalidRetryStatus(r1)
        L86:
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r0 = r4.subThreadListeners
            r1 = 1
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r4.downloadInfo
            com.ss.android.socialbase.downloader.utils.DownloadListenerUtils.notifyListener(r5, r0, r1, r2, r6)
            r0 = -4
            if (r5 != r0) goto L92
            return
        L92:
            if (r7 == 0) goto Ld2
            android.os.Handler r7 = r4.mainThreadHandler
            if (r7 == 0) goto Ld2
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r7 = r4.mainThreadListeners
            if (r7 == 0) goto La2
            int r7 = r7.size()
            if (r7 > 0) goto Lbc
        La2:
            android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r7 = r4.notificationListeners
            if (r7 == 0) goto Ld2
            int r7 = r7.size()
            if (r7 <= 0) goto Ld2
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r4.downloadInfo
            boolean r7 = r7.canShowNotification()
            if (r7 != 0) goto Lbc
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r4.downloadInfo
            boolean r7 = r7.isAutoInstallWithoutNotification()
            if (r7 == 0) goto Ld2
        Lbc:
            android.os.Handler r7 = r4.mainThreadHandler
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            int r0 = r0.getId()
            com.ss.android.socialbase.downloader.model.DownloadTask r1 = r4.downloadTask
            int r1 = r1.getHashCodeForSameTask()
            android.os.Message r5 = r7.obtainMessage(r5, r0, r1, r6)
            r5.sendToTarget()
            goto Le7
        Ld2:
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r6 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadEngine()
            if (r6 == 0) goto Le7
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r4.downloadInfo
            int r7 = r7.getId()
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r4.downloadTask
            int r0 = r0.getHashCodeForSameTask()
            r6.refreshDownloadTaskMap(r7, r0, r5)
        Le7:
            return
    }

    private com.ss.android.socialbase.downloader.exception.BaseException reviseFailedException(com.ss.android.socialbase.downloader.exception.BaseException r4) {
            r3 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo
            int r0 = r0.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            r1 = 1
            java.lang.String r2 = "download_failed_check_net"
            int r0 = r0.optInt(r2, r1)
            if (r0 != r1) goto L3c
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isNetworkError(r4)
            if (r0 == 0) goto L3c
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            if (r0 == 0) goto L3c
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isNetworkConnected(r0)
            if (r0 != 0) goto L3c
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r3.downloadInfo
            boolean r1 = r1.isOnlyWifi()
            if (r1 == 0) goto L32
            r1 = 1013(0x3f5, float:1.42E-42)
            goto L34
        L32:
            r1 = 1049(0x419, float:1.47E-42)
        L34:
            java.lang.String r4 = r4.getErrorMessage()
            r0.<init>(r1, r4)
            return r0
        L3c:
            return r4
    }

    public long getMinByteIntervalForSyncCache() {
            r4 = this;
            long r0 = r4.minByteIntervalForSyncProgress
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r4.downloadInfo
            int r2 = r2.getChunkCount()
            long r2 = (long) r2
            long r0 = r0 / r2
            return r0
    }

    public int getMinTimeIntervalForSyncCache() {
            r2 = this;
            int r0 = r2.minTimeIntervalForSyncProgress
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r2.downloadInfo
            int r1 = r1.getChunkCount()
            int r0 = r0 / r1
            return r0
    }

    public void handleWaitingAsyncHandler() {
            r4 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            r1 = 8
            r0.setStatus(r1)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r2 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_WAITING
            r0.setAsyncHandleStatus(r2)
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadEngine()
            if (r0 == 0) goto L23
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r4.downloadInfo
            int r2 = r2.getId()
            com.ss.android.socialbase.downloader.model.DownloadTask r3 = r4.downloadTask
            int r3 = r3.getHashCodeForSameTask()
            r0.refreshDownloadTaskMap(r2, r3, r1)
        L23:
            return
    }

    public void onCancel() {
            r2 = this;
            r0 = -4
            r1 = 0
            r2.onStatusChanged(r0, r1)
            return
    }

    public void onCompleteForFileExist() throws com.ss.android.socialbase.downloader.exception.BaseException {
            r5 = this;
            boolean r0 = r5.fixStartWithFileExistUpdateError
            r1 = 0
            r2 = -3
            r3 = 1
            java.lang.String r4 = "onCompleteForFileExist"
            if (r0 == 0) goto L48
            r5.downloadCompleteProcess()
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler.TAG
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r4)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.downloadInfo
            r0.setSuccessByCache(r3)
            r5.onStatusChanged(r2, r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r5.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r5.downloadInfo
            int r1 = r1.getId()
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r5.downloadInfo
            long r2 = r2.getTotalBytes()
            r0.OnDownloadTaskCompleted(r1, r2)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r5.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r5.downloadInfo
            int r1 = r1.getId()
            r0.removeAllDownloadChunk(r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r5.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r5.downloadInfo
            r0.updateDownloadInfo(r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r5.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r5.downloadInfo
            int r1 = r1.getId()
            r0.removeSegments(r1)
            goto L7f
        L48:
            r5.downloadCompleteProcess()
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler.TAG
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r4)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.downloadInfo
            r0.setSuccessByCache(r3)
            r5.onStatusChanged(r2, r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r5.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r5.downloadInfo
            int r1 = r1.getId()
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r5.downloadInfo
            long r2 = r2.getTotalBytes()
            r0.OnDownloadTaskCompleted(r1, r2)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r5.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r5.downloadInfo
            int r1 = r1.getId()
            r0.removeAllDownloadChunk(r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r5.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r5.downloadInfo
            int r1 = r1.getId()
            r0.removeSegments(r1)
        L7f:
            return
    }

    public void onCompleteForFileExist(java.lang.String r6) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r5 = this;
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onCompleteForFileExist existTargetFileName is "
            r1.append(r2)
            r1.append(r6)
            java.lang.String r2 = " but curName is "
            r1.append(r2)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r5.downloadInfo
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            boolean r0 = r5.fixStartWithFileExistUpdateError
            r1 = 0
            r2 = -3
            r3 = 1
            if (r0 == 0) goto L43
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.downloadInfo
            com.ss.android.socialbase.downloader.utils.DownloadUtils.copyFileFromExistFileWithSameName(r0, r6)
            r5.downloadCompleteProcess()
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r5.downloadInfo
            r6.setSuccessByCache(r3)
            r5.onStatusChanged(r2, r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r6 = r5.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.downloadInfo
            r6.updateDownloadInfo(r0)
            goto L5a
        L43:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r5.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r5.downloadInfo
            r0.updateDownloadInfo(r4)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.downloadInfo
            com.ss.android.socialbase.downloader.utils.DownloadUtils.copyFileFromExistFileWithSameName(r0, r6)
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r5.downloadInfo
            r6.setSuccessByCache(r3)
            r5.downloadCompleteProcess()
            r5.onStatusChanged(r2, r1)
        L5a:
            return
    }

    public void onCompleted() {
            r4 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            r1 = 0
            r0.setFirstDownload(r1)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            boolean r0 = r0.isIgnoreDataVerify()
            if (r0 != 0) goto L4b
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            long r0 = r0.getCurBytes()
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r4.downloadInfo
            long r2 = r2.getTotalBytes()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L4b
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler.TAG
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo
            java.lang.String r1 = r1.getErrorBytesLog()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException r0 = new com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException
            r1 = 1027(0x403, float:1.439E-42)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "current bytes is not equals to total bytes, bytes changed with process : "
            r2.append(r3)
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r4.downloadInfo
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r3 = r3.getByteInvalidRetryStatus()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.<init>(r1, r2)
            r4.onError(r0)
            return
        L4b:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            long r0 = r0.getCurBytes()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L84
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler.TAG
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo
            java.lang.String r1 = r1.getErrorBytesLog()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException r0 = new com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException
            r1 = 1026(0x402, float:1.438E-42)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "curBytes is 0, bytes changed with process : "
            r2.append(r3)
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r4.downloadInfo
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r3 = r3.getByteInvalidRetryStatus()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.<init>(r1, r2)
            r4.onError(r0)
            return
        L84:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            boolean r0 = r0.isIgnoreDataVerify()
            if (r0 != 0) goto Lc3
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            long r0 = r0.getTotalBytes()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto Lc3
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler.TAG
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo
            java.lang.String r1 = r1.getErrorBytesLog()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException r0 = new com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException
            r1 = 1044(0x414, float:1.463E-42)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "TotalBytes is 0, bytes changed with process : "
            r2.append(r3)
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r4.downloadInfo
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r3 = r3.getByteInvalidRetryStatus()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.<init>(r1, r2)
            r4.onError(r0)
            return
        Lc3:
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ""
            r1.append(r2)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r4.downloadInfo
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = " onCompleted start save file as target name"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r0 = r4.downloadMonitorDepend
            com.ss.android.socialbase.downloader.model.DownloadTask r1 = r4.downloadTask
            if (r1 == 0) goto Lee
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r0 = r1.getMonitorDepend()
        Lee:
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler$2 r2 = new com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler$2
            r2.<init>(r4)
            com.ss.android.socialbase.downloader.utils.DownloadUtils.saveFileAsTargetName(r1, r0, r2)
            return
    }

    public void onError(com.ss.android.socialbase.downloader.exception.BaseException r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            r1 = 0
            r0.setFirstDownload(r1)
            r2.handleError(r3)
            return
    }

    public void onFirstConnectionSuccessed(long r8, java.lang.String r10, java.lang.String r11) {
            r7 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r7.downloadInfo
            r0.setTotalBytes(r8)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r7.downloadInfo
            r0.seteTag(r10)
            boolean r0 = android.text.TextUtils.isEmpty(r11)
            if (r0 != 0) goto L21
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r7.downloadInfo
            java.lang.String r0 = r0.getName()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L21
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r7.downloadInfo
            r0.setName(r11)
        L21:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r1 = r7.downloadCache     // Catch: java.lang.Exception -> L30
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r7.downloadInfo     // Catch: java.lang.Exception -> L30
            int r2 = r0.getId()     // Catch: java.lang.Exception -> L30
            r3 = r8
            r5 = r10
            r6 = r11
            r1.OnDownloadTaskConnected(r2, r3, r5, r6)     // Catch: java.lang.Exception -> L30
            goto L34
        L30:
            r10 = move-exception
            r10.printStackTrace()
        L34:
            r10 = 3
            r11 = 0
            r7.onStatusChanged(r10, r11)
            com.ss.android.socialbase.downloader.model.DownloadInfo r10 = r7.downloadInfo
            long r8 = r10.getMinByteIntervalForPostToMainThread(r8)
            r7.minByteIntervalForSyncProgress = r8
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = r7.downloadInfo
            int r8 = r8.getMinProgressTimeMsInterval()
            r7.minTimeIntervalForSyncProgress = r8
            r8 = 1
            r7.forceRefreshProcess = r8
            com.ss.android.socialbase.downloader.impls.RetryScheduler r8 = com.ss.android.socialbase.downloader.impls.RetryScheduler.getInstance()
            r8.scheduleRetryWhenHasTaskConnected()
            return
    }

    public void onIntercept() {
            r3 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo
            r1 = -7
            r0.setStatus(r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r3.downloadCache     // Catch: android.database.sqlite.SQLiteException -> L12
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r3.downloadInfo     // Catch: android.database.sqlite.SQLiteException -> L12
            int r2 = r2.getId()     // Catch: android.database.sqlite.SQLiteException -> L12
            r0.OnDownloadTaskIntercept(r2)     // Catch: android.database.sqlite.SQLiteException -> L12
            goto L16
        L12:
            r0 = move-exception
            r0.printStackTrace()
        L16:
            r0 = 0
            r3.onStatusChanged(r1, r0)
            return
    }

    public void onPause() {
            r5 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.downloadInfo
            r1 = -2
            r0.setStatus(r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r5.downloadCache     // Catch: android.database.sqlite.SQLiteException -> L18
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r5.downloadInfo     // Catch: android.database.sqlite.SQLiteException -> L18
            int r2 = r2.getId()     // Catch: android.database.sqlite.SQLiteException -> L18
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r5.downloadInfo     // Catch: android.database.sqlite.SQLiteException -> L18
            long r3 = r3.getCurBytes()     // Catch: android.database.sqlite.SQLiteException -> L18
            r0.OnDownloadTaskPause(r2, r3)     // Catch: android.database.sqlite.SQLiteException -> L18
            goto L1c
        L18:
            r0 = move-exception
            r0.printStackTrace()
        L1c:
            r0 = 0
            r5.onStatusChanged(r1, r0)
            return
    }

    public void onPrepare() {
            r2 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            boolean r0 = r0.canSkipStatusHandler()
            if (r0 == 0) goto L9
            return
        L9:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            r1 = 1
            r0.setStatus(r1)
            r2.handlePrepare()
            return
    }

    public boolean onProgress(long r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r1.msgPostDataBuffer
            r0.addAndGet(r2)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo
            r0.increaseCurBytes(r2)
            long r2 = android.os.SystemClock.uptimeMillis()
            boolean r0 = r1.needSyncProgress(r2)
            boolean r2 = r1.handleProgress(r2, r0)
            return r2
    }

    public void onRetry(com.ss.android.socialbase.downloader.exception.BaseException r4, boolean r5) {
            r3 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo
            r1 = 0
            r0.setFirstDownload(r1)
            java.util.concurrent.atomic.AtomicLong r0 = r3.msgPostDataBuffer
            r1 = 0
            r0.set(r1)
            r3.handleRetry(r4, r5)
            return
    }

    public void onSingleChunkRetry(com.ss.android.socialbase.downloader.model.DownloadChunk r3, com.ss.android.socialbase.downloader.exception.BaseException r4, boolean r5) {
            r2 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r2.downloadInfo
            r0 = 0
            r3.setFirstDownload(r0)
            java.util.concurrent.atomic.AtomicLong r3 = r2.msgPostDataBuffer
            r0 = 0
            r3.set(r0)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r3 = r2.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            int r0 = r0.getId()
            r3.OnDownloadTaskRetry(r0)
            if (r5 == 0) goto L1d
            r3 = 10
            goto L1f
        L1d:
            r3 = 9
        L1f:
            r5 = 1
            r2.onStatusChanged(r3, r4, r5)
            return
    }

    public void onStart() {
            r2 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            boolean r0 = r0.canSkipStatusHandler()
            if (r0 == 0) goto Le
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            r0.changeSkipStatus()
            return
        Le:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r2.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r2.downloadInfo
            int r1 = r1.getId()
            r0.onDownloadTaskStart(r1)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            boolean r0 = r0.isFirstDownload()
            r1 = 0
            if (r0 == 0) goto L26
            r0 = 6
            r2.onStatusChanged(r0, r1)
        L26:
            r0 = 2
            r2.onStatusChanged(r0, r1)
            return
    }
}
