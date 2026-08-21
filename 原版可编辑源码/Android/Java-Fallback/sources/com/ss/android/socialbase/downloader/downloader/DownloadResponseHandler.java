package com.ss.android.socialbase.downloader.downloader;

public class DownloadResponseHandler {
    private static final boolean DEBUG = false;
    public static final int MIN_SYNC_STEP_BYTE = 65536;
    public static final long MIN_SYNC_TIME_MS = 500;
    private static java.lang.String TAG = "ResponseHandler";
    private final com.ss.android.socialbase.downloader.common.AppStatusManager appStatusManager;
    private final boolean bugfixCancelThenUpdate;
    private final com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback callback;
    private volatile boolean canceled;
    private long curOffset;
    private com.ss.android.socialbase.downloader.downloader.IDownloadCache customCache;
    private long debugReadTimeNs;
    private long debugSyncTimeNs;
    private long debugTotalTimeNs;
    private long debugWriteTimeNs;
    private com.ss.android.socialbase.downloader.impls.DownloadCache downloadCache;
    private final com.ss.android.socialbase.downloader.model.DownloadChunk downloadChunk;
    private volatile long downloadChunkContentLen;
    private final com.ss.android.socialbase.downloader.model.DownloadInfo downloadInfo;
    private volatile long endOffset;
    private com.ss.android.socialbase.downloader.exception.BaseException exception;
    private long handleStartOffset;
    private final boolean hasSyncStrategy;
    private final com.ss.android.socialbase.downloader.network.IDownloadHttpConnection httpConnection;
    private final boolean isMonitorRw;
    private volatile long lastSyncBytes;
    private volatile long lastSyncTimestamp;
    boolean openLimitSpeed;
    private com.ss.android.socialbase.downloader.model.RandomAccessOutputStream outputStream;
    private volatile boolean paused;
    private boolean rwConcurrent;
    private final com.ss.android.socialbase.downloader.setting.DownloadSetting setting;
    private com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache sqlDownloadCache;
    private final long syncIntervalMsBg;
    private final long syncIntervalMsFg;
    private final java.lang.String url;


    static {
            return
    }

    public DownloadResponseHandler(com.ss.android.socialbase.downloader.model.DownloadInfo r6, java.lang.String r7, com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r8, com.ss.android.socialbase.downloader.model.DownloadChunk r9, com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r10) {
            r5 = this;
            r5.<init>()
            r0 = 0
            r5.openLimitSpeed = r0
            r1 = 0
            r5.lastSyncBytes = r1
            r5.lastSyncTimestamp = r1
            r5.downloadInfo = r6
            r5.url = r7
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r7 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadCache()
            r5.customCache = r7
            boolean r3 = r7 instanceof com.ss.android.socialbase.downloader.impls.DefaultDownloadCache
            if (r3 == 0) goto L28
            com.ss.android.socialbase.downloader.impls.DefaultDownloadCache r7 = (com.ss.android.socialbase.downloader.impls.DefaultDownloadCache) r7
            com.ss.android.socialbase.downloader.impls.DownloadCache r3 = r7.getDownloadCache()
            r5.downloadCache = r3
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r7 = r7.getSqlDownloadCache()
            r5.sqlDownloadCache = r7
        L28:
            r5.httpConnection = r8
            r5.downloadChunk = r9
            r5.callback = r10
            long r7 = r9.getCurrentOffset()
            r5.curOffset = r7
            r5.handleStartOffset = r7
            boolean r7 = r9.isHostChunk()
            if (r7 == 0) goto L43
            long r7 = r9.getContentLength()
            r5.downloadChunkContentLen = r7
            goto L49
        L43:
            long r7 = r9.getRetainLength(r0)
            r5.downloadChunkContentLen = r7
        L49:
            long r7 = r9.getEndOffset()
            r5.endOffset = r7
            com.ss.android.socialbase.downloader.common.AppStatusManager r7 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            r5.appStatusManager = r7
            int r6 = r6.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r6 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r6)
            r5.setting = r6
            java.lang.String r7 = "sync_strategy"
            int r6 = r6.optInt(r7, r0)
            r7 = 1
            if (r6 != r7) goto L6a
            r6 = r7
            goto L6b
        L6a:
            r6 = r0
        L6b:
            r5.hasSyncStrategy = r6
            if (r6 == 0) goto L94
            com.ss.android.socialbase.downloader.setting.DownloadSetting r6 = r5.setting
            r8 = 5000(0x1388, float:7.006E-42)
            java.lang.String r9 = "sync_interval_ms_fg"
            int r6 = r6.optInt(r9, r8)
            long r8 = (long) r6
            com.ss.android.socialbase.downloader.setting.DownloadSetting r6 = r5.setting
            r10 = 1000(0x3e8, float:1.401E-42)
            java.lang.String r1 = "sync_interval_ms_bg"
            int r6 = r6.optInt(r1, r10)
            long r1 = (long) r6
            r3 = 500(0x1f4, double:2.47E-321)
            long r8 = java.lang.Math.max(r8, r3)
            r5.syncIntervalMsFg = r8
            long r8 = java.lang.Math.max(r1, r3)
            r5.syncIntervalMsBg = r8
            goto L98
        L94:
            r5.syncIntervalMsFg = r1
            r5.syncIntervalMsBg = r1
        L98:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r6 = r5.setting
            java.lang.String r8 = "monitor_rw"
            int r6 = r6.optInt(r8)
            if (r6 != r7) goto La3
            r0 = r7
        La3:
            r5.isMonitorRw = r0
            r6 = 65536(0x10000, float:9.1835E-41)
            boolean r6 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r6)
            r5.bugfixCancelThenUpdate = r6
            return
    }

    static com.ss.android.socialbase.downloader.network.IDownloadHttpConnection access$000(com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0) {
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r0.httpConnection
            return r0
    }

    private boolean canReuseConnection() {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo
            boolean r0 = r0.isNeedReuseFirstConnection()
            if (r0 == 0) goto L12
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = r1.downloadChunk
            boolean r0 = r0.isReuseingFirstConnection()
            if (r0 == 0) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            return r0
    }

    private void cancelConnection() {
            r2 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r2.httpConnection
            if (r0 != 0) goto L5
            return
        L5:
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getCPUThreadExecutor()
            if (r0 == 0) goto L13
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler$1 r1 = new com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler$1
            r1.<init>(r2)
            r0.execute(r1)
        L13:
            return
    }

    private void checkAndSync(boolean r9) {
            r8 = this;
            long r0 = android.os.SystemClock.uptimeMillis()
            long r2 = r8.lastSyncTimestamp
            long r2 = r0 - r2
            boolean r4 = r8.hasSyncStrategy
            if (r4 == 0) goto L23
            com.ss.android.socialbase.downloader.common.AppStatusManager r9 = r8.appStatusManager
            boolean r9 = r9.isAppForeground()
            if (r9 == 0) goto L17
            long r4 = r8.syncIntervalMsFg
            goto L19
        L17:
            long r4 = r8.syncIntervalMsBg
        L19:
            int r9 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r9 <= 0) goto L35
            r8.sync()
            r8.lastSyncTimestamp = r0
            goto L35
        L23:
            long r4 = r8.curOffset
            long r6 = r8.lastSyncBytes
            long r4 = r4 - r6
            if (r9 != 0) goto L30
            boolean r9 = r8.isNeedSync(r4, r2)
            if (r9 == 0) goto L35
        L30:
            r8.sync()
            r8.lastSyncTimestamp = r0
        L35:
            return
    }

    private com.ss.android.socialbase.downloader.reader.IStreamReader createStreamReader(java.io.InputStream r9) {
            r8 = this;
            int r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getWriteBufferSize()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = r8.setting
            r2 = 0
            java.lang.String r3 = "rw_concurrent"
            int r1 = r1.optInt(r3, r2)
            r3 = 1
            if (r1 != r3) goto L3a
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r8.downloadInfo
            int r1 = r1.getChunkCount()
            if (r1 != r3) goto L3a
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r8.downloadInfo
            long r4 = r1.getTotalBytes()
            r6 = 20971520(0x1400000, double:1.03613076E-316)
            int r1 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r1 <= 0) goto L3a
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = r8.setting
            r4 = 4
            java.lang.String r5 = "rw_concurrent_max_buffer_count"
            int r1 = r1.optInt(r5, r4)
            com.ss.android.socialbase.downloader.reader.AsyncStreamReader r4 = new com.ss.android.socialbase.downloader.reader.AsyncStreamReader     // Catch: java.lang.Throwable -> L36
            r4.<init>(r9, r0, r1)     // Catch: java.lang.Throwable -> L36
            r8.rwConcurrent = r3     // Catch: java.lang.Throwable -> L36
            return r4
        L36:
            r1 = move-exception
            r1.printStackTrace()
        L3a:
            com.ss.android.socialbase.downloader.reader.SyncStreamReader r1 = new com.ss.android.socialbase.downloader.reader.SyncStreamReader
            r1.<init>(r9, r0)
            r8.rwConcurrent = r2
            return r1
    }

    private boolean isNeedSync(long r3, long r5) {
            r2 = this;
            r0 = 65536(0x10000, double:3.2379E-319)
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 <= 0) goto Lf
            r3 = 500(0x1f4, double:2.47E-321)
            int r3 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r3 <= 0) goto Lf
            r3 = 1
            goto L10
        Lf:
            r3 = 0
        L10:
            return r3
    }

    private boolean isStoppedStatus() {
            r1 = this;
            boolean r0 = r1.paused
            if (r0 != 0) goto Lb
            boolean r0 = r1.canceled
            if (r0 == 0) goto L9
            goto Lb
        L9:
            r0 = 0
            goto Lc
        Lb:
            r0 = 1
        Lc:
            return r0
    }

    private void sync() {
            r6 = this;
            boolean r0 = r6.isMonitorRw
            if (r0 == 0) goto L9
            long r0 = java.lang.System.nanoTime()
            goto Lb
        L9:
            r0 = 0
        Lb:
            r2 = 0
            r3 = 1
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r4 = r6.outputStream     // Catch: java.lang.Exception -> L14
            r4.flushAndSync()     // Catch: java.lang.Exception -> L14
            r4 = r3
            goto L15
        L14:
            r4 = r2
        L15:
            if (r4 == 0) goto L67
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r6.downloadInfo
            r4.updateRealDownloadTime(r3)
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r6.downloadInfo
            int r4 = r4.getChunkCount()
            if (r4 <= r3) goto L25
            r2 = r3
        L25:
            boolean r3 = com.ss.android.socialbase.downloader.utils.DownloadUtils.needNotifyDownloaderProcess()
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r3 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r3)
            if (r2 == 0) goto L4e
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r2 = r6.sqlDownloadCache
            r6.updateDownloadChunk(r2)
            if (r3 == 0) goto L3c
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r6.downloadInfo
            r3.updateDownloadInfo(r2)
            goto L63
        L3c:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r2 = r6.sqlDownloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r6.downloadInfo
            int r3 = r3.getId()
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r6.downloadInfo
            long r4 = r4.getCurBytes()
            r2.OnDownloadTaskProgress(r3, r4)
            goto L63
        L4e:
            if (r3 == 0) goto L56
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r6.downloadInfo
            r3.updateDownloadInfo(r2)
            goto L63
        L56:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r2 = r6.sqlDownloadCache
            com.ss.android.socialbase.downloader.model.DownloadChunk r3 = r6.downloadChunk
            int r3 = r3.getId()
            long r4 = r6.curOffset
            r2.OnDownloadTaskProgress(r3, r4)
        L63:
            long r2 = r6.curOffset
            r6.lastSyncBytes = r2
        L67:
            boolean r2 = r6.isMonitorRw
            if (r2 == 0) goto L75
            long r2 = java.lang.System.nanoTime()
            long r2 = r2 - r0
            long r0 = r6.debugSyncTimeNs
            long r0 = r0 + r2
            r6.debugSyncTimeNs = r0
        L75:
            return
    }

    private void updateDownloadChunk(com.ss.android.socialbase.downloader.downloader.IDownloadCache r17) {
            r16 = this;
            r0 = r16
            r7 = r17
            if (r7 != 0) goto L7
            return
        L7:
            r1 = 0
            boolean r8 = r7 instanceof com.ss.android.socialbase.downloader.db.SqlDownloadCache
            if (r8 == 0) goto L17
            boolean r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.needNotifyDownloaderProcess()
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r1)
            if (r1 != 0) goto L17
            return
        L17:
            r15 = r1
            com.ss.android.socialbase.downloader.model.DownloadChunk r1 = r0.downloadChunk
            boolean r1 = r1.isHostChunk()
            if (r1 == 0) goto L27
            com.ss.android.socialbase.downloader.model.DownloadChunk r1 = r0.downloadChunk
            com.ss.android.socialbase.downloader.model.DownloadChunk r1 = r1.getFirstReuseChunk()
            goto L29
        L27:
            com.ss.android.socialbase.downloader.model.DownloadChunk r1 = r0.downloadChunk
        L29:
            r5 = r1
            if (r5 == 0) goto Lb3
            long r1 = r0.curOffset
            r5.setCurrentOffset(r1)
            if (r8 == 0) goto L49
            if (r15 == 0) goto L49
            int r10 = r5.getId()
            int r11 = r5.getChunkIndex()
            int r12 = r5.getHostChunkIndex()
            long r13 = r0.curOffset
            r9 = r15
            r9.updateSubDownloadChunk(r10, r11, r12, r13)
            r11 = r5
            goto L5e
        L49:
            int r2 = r5.getId()
            int r3 = r5.getChunkIndex()
            int r4 = r5.getHostChunkIndex()
            long r9 = r0.curOffset
            r1 = r17
            r11 = r5
            r5 = r9
            r1.updateSubDownloadChunk(r2, r3, r4, r5)
        L5e:
            boolean r1 = r11.canRefreshCurOffsetForReuseChunk()
            if (r1 == 0) goto Le2
            r1 = 0
            boolean r2 = r11.hasNoBytesDownload()
            if (r2 == 0) goto L91
            long r2 = r11.getNextChunkCurOffset()
            long r4 = r0.curOffset
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 <= 0) goto L91
            if (r8 == 0) goto L85
            if (r15 == 0) goto L85
            int r1 = r11.getId()
            int r4 = r11.getHostChunkIndex()
            r15.updateDownloadChunk(r1, r4, r2)
            goto L90
        L85:
            int r1 = r11.getId()
            int r4 = r11.getHostChunkIndex()
            r7.updateDownloadChunk(r1, r4, r2)
        L90:
            r1 = 1
        L91:
            if (r1 != 0) goto Le2
            if (r8 == 0) goto La5
            if (r15 == 0) goto La5
            int r1 = r11.getId()
            int r2 = r11.getHostChunkIndex()
            long r3 = r0.curOffset
            r15.updateDownloadChunk(r1, r2, r3)
            goto Le2
        La5:
            int r1 = r11.getId()
            int r2 = r11.getHostChunkIndex()
            long r3 = r0.curOffset
            r7.updateDownloadChunk(r1, r2, r3)
            goto Le2
        Lb3:
            com.ss.android.socialbase.downloader.model.DownloadChunk r1 = r0.downloadChunk
            boolean r1 = r1.isHostChunk()
            if (r1 == 0) goto Le2
            if (r8 == 0) goto Ld1
            if (r15 == 0) goto Ld1
            com.ss.android.socialbase.downloader.model.DownloadChunk r1 = r0.downloadChunk
            int r1 = r1.getId()
            com.ss.android.socialbase.downloader.model.DownloadChunk r2 = r0.downloadChunk
            int r2 = r2.getChunkIndex()
            long r3 = r0.curOffset
            r15.updateDownloadChunk(r1, r2, r3)
            goto Le2
        Ld1:
            com.ss.android.socialbase.downloader.model.DownloadChunk r1 = r0.downloadChunk
            int r1 = r1.getId()
            com.ss.android.socialbase.downloader.model.DownloadChunk r2 = r0.downloadChunk
            int r2 = r2.getChunkIndex()
            long r3 = r0.curOffset
            r7.updateDownloadChunk(r1, r2, r3)
        Le2:
            return
    }

    public void cancel() {
            r2 = this;
            boolean r0 = r2.canceled
            if (r0 == 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r0 = r2.callback
            monitor-enter(r0)
            r1 = 1
            r2.canceled = r1     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            r2.cancelConnection()
            return
        L10:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r1
    }

    public long getCurOffset() {
            r2 = this;
            long r0 = r2.curOffset
            return r0
    }

    public long getLastSyncBytes() {
            r2 = this;
            long r0 = r2.lastSyncBytes
            return r0
    }

    public void handleResponse() throws com.ss.android.socialbase.downloader.exception.BaseException {
            r34 = this;
            r1 = r34
            boolean r0 = r34.isStoppedStatus()
            if (r0 != 0) goto L57e
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = r1.downloadChunk
            if (r0 != 0) goto Le
            goto L57e
        Le:
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection
            long r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getContentLength(r0)
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L574
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = r1.downloadChunk
            long r6 = r0.getStartOffset()
            long r8 = java.lang.System.nanoTime()
            boolean r15 = r1.isMonitorRw
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection
            boolean r11 = r0 instanceof com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection
            r14 = 1
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            com.ss.android.socialbase.downloader.model.DownloadInfo r12 = r1.downloadInfo     // Catch: java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            java.lang.String r12 = r12.getTempPath()     // Catch: java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            com.ss.android.socialbase.downloader.model.DownloadInfo r10 = r1.downloadInfo     // Catch: java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            java.lang.String r10 = r10.getTempName()     // Catch: java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = r1.setting     // Catch: java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            java.lang.String r5 = "flush_buffer_size_byte"
            r13 = -1
            int r4 = r4.optInt(r5, r13)     // Catch: java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.createOutputStream(r0, r12, r10, r4)     // Catch: java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            r1.outputStream = r0     // Catch: java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            long r4 = r1.curOffset     // Catch: java.io.IOException -> L2da java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            r0.seek(r4)     // Catch: java.io.IOException -> L2da java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection     // Catch: java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            java.io.InputStream r0 = r0.getInputStream()     // Catch: java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            if (r0 == 0) goto L2c3
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r1.downloadInfo     // Catch: java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            r4.updateRealStartDownloadTime()     // Catch: java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            com.ss.android.socialbase.downloader.reader.IStreamReader r10 = r1.createStreamReader(r0)     // Catch: java.lang.Throwable -> L2f0 com.ss.android.socialbase.downloader.exception.BaseException -> L474
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L2b2 com.ss.android.socialbase.downloader.exception.BaseException -> L2bc
            boolean r4 = r1.rwConcurrent     // Catch: java.lang.Throwable -> L2b2 com.ss.android.socialbase.downloader.exception.BaseException -> L2bc
            r0.setIsRwConcurrent(r4)     // Catch: java.lang.Throwable -> L2b2 com.ss.android.socialbase.downloader.exception.BaseException -> L2bc
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L2b2 com.ss.android.socialbase.downloader.exception.BaseException -> L2bc
            boolean r0 = r0.getOpenLimitSpeed()     // Catch: java.lang.Throwable -> L2b2 com.ss.android.socialbase.downloader.exception.BaseException -> L2bc
            r1.openLimitSpeed = r0     // Catch: java.lang.Throwable -> L2b2 com.ss.android.socialbase.downloader.exception.BaseException -> L2bc
            long r4 = com.ss.android.socialbase.downloader.constants.DownloadConstants.LIMIT_SPEED_EVERTS_ECOND     // Catch: java.lang.Throwable -> L2b2 com.ss.android.socialbase.downloader.exception.BaseException -> L2bc
            long r18 = com.ss.android.socialbase.downloader.constants.DownloadConstants.LIMIT_INTERVSL     // Catch: java.lang.Throwable -> L2b2 com.ss.android.socialbase.downloader.exception.BaseException -> L2bc
            r20 = 1000(0x3e8, double:4.94E-321)
            long r20 = r20 / r18
            long r4 = r4 / r20
            long r20 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L2b2 com.ss.android.socialbase.downloader.exception.BaseException -> L2bc
            r22 = 0
            r24 = 0
        L7f:
            boolean r0 = r34.isStoppedStatus()     // Catch: java.lang.Throwable -> L2b2 com.ss.android.socialbase.downloader.exception.BaseException -> L2bc
            if (r0 == 0) goto L107
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection
            if (r0 == 0) goto L8c
            r0.end()
        L8c:
            if (r10 == 0) goto L91
            r10.close()
        L91:
            boolean r0 = r1.bugfixCancelThenUpdate     // Catch: java.lang.Throwable -> Lfb
            if (r0 == 0) goto Lad
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r2 = r1.callback     // Catch: java.lang.Throwable -> Lfb
            monitor-enter(r2)     // Catch: java.lang.Throwable -> Lfb
            boolean r0 = r1.canceled     // Catch: java.lang.Throwable -> Laa
            if (r0 != 0) goto La8
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache     // Catch: java.lang.Throwable -> Laa
            r1.updateDownloadChunk(r0)     // Catch: java.lang.Throwable -> Laa
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r0 = r1.outputStream     // Catch: java.lang.Throwable -> Laa
            if (r0 == 0) goto La8
            r34.sync()     // Catch: java.lang.Throwable -> Laa
        La8:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Laa
            goto Lb9
        Laa:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Laa
            throw r0     // Catch: java.lang.Throwable -> Lfb
        Lad:
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache     // Catch: java.lang.Throwable -> Lfb
            r1.updateDownloadChunk(r0)     // Catch: java.lang.Throwable -> Lfb
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r0 = r1.outputStream     // Catch: java.lang.Throwable -> Lfb
            if (r0 == 0) goto Lb9
            r34.sync()     // Catch: java.lang.Throwable -> Lfb
        Lb9:
            java.io.Closeable[] r0 = new java.io.Closeable[r14]
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r2 = r1.outputStream
            r3 = 0
            r0[r3] = r2
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r0)
            long r2 = java.lang.System.nanoTime()
            long r2 = r2 - r8
            r1.debugTotalTimeNs = r2
            com.ss.android.socialbase.downloader.setting.DownloadSetting r10 = r1.setting
            com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r1.downloadInfo
            java.lang.String r12 = r1.url
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r13 = r1.httpConnection
            boolean r14 = r1.paused
            boolean r0 = r1.canceled
            r29 = r15
            r15 = r0
        Ld9:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = r1.exception
            r16 = r0
            long r2 = r1.curOffset
            long r4 = r1.handleStartOffset
            long r17 = r2 - r4
            long r2 = r1.debugTotalTimeNs
            r19 = r2
            long r2 = r1.debugReadTimeNs
            r22 = r2
            long r2 = r1.debugWriteTimeNs
            r24 = r2
            long r2 = r1.debugSyncTimeNs
            r26 = r2
            r28 = 0
            r21 = r29
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorDownloadIO(r10, r11, r12, r13, r14, r15, r16, r17, r19, r21, r22, r24, r26, r28)
            return
        Lfb:
            r0 = move-exception
            java.io.Closeable[] r2 = new java.io.Closeable[r14]
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r3 = r1.outputStream
            r4 = 0
            r2[r4] = r3
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r2)
            throw r0
        L107:
            r29 = r15
            if (r29 == 0) goto L10f
            long r22 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L2a8 com.ss.android.socialbase.downloader.exception.BaseException -> L2af
        L10f:
            com.ss.android.socialbase.downloader.segment.Buffer r0 = r10.read()     // Catch: java.lang.Throwable -> L2a8 com.ss.android.socialbase.downloader.exception.BaseException -> L2af
            if (r29 == 0) goto L121
            long r14 = r1.debugReadTimeNs     // Catch: java.lang.Throwable -> L29a com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r27 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L29a com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r27 = r27 - r22
            long r14 = r14 + r27
            r1.debugReadTimeNs = r14     // Catch: java.lang.Throwable -> L29a com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
        L121:
            int r12 = r0.size     // Catch: java.lang.Throwable -> L29a com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            if (r12 != r13) goto L12b
            r30 = r2
            r32 = r6
            goto L1e3
        L12b:
            com.ss.android.socialbase.downloader.model.DownloadInfo r14 = r1.downloadInfo     // Catch: java.lang.Throwable -> L29a com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            boolean r14 = r14.isIgnoreDataVerify()     // Catch: java.lang.Throwable -> L29a com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            if (r14 != 0) goto L163
            long r14 = r1.downloadChunkContentLen     // Catch: java.lang.Throwable -> L29a com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            r30 = r14
            long r13 = r1.curOffset     // Catch: java.lang.Throwable -> L29a com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            r32 = r6
            long r6 = r1.handleStartOffset     // Catch: java.lang.Throwable -> L15e com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r13 = r13 - r6
            int r6 = (r30 > r13 ? 1 : (r30 == r13 ? 0 : -1))
            if (r6 <= 0) goto L15b
            long r6 = r1.downloadChunkContentLen     // Catch: java.lang.Throwable -> L15e com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r13 = r1.curOffset     // Catch: java.lang.Throwable -> L15e com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            r30 = r2
            long r2 = r1.handleStartOffset     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r13 = r13 - r2
            long r2 = (long) r12     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r13 = r13 + r2
            int r2 = (r6 > r13 ? 1 : (r6 == r13 ? 0 : -1))
            if (r2 >= 0) goto L167
            long r2 = r1.downloadChunkContentLen     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r6 = r1.curOffset     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r12 = r1.handleStartOffset     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r6 = r6 - r12
            long r2 = r2 - r6
            int r12 = (int) r2     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            goto L167
        L15b:
            r30 = r2
            goto L167
        L15e:
            r0 = move-exception
            r30 = r2
            goto L29f
        L163:
            r30 = r2
            r32 = r6
        L167:
            if (r29 == 0) goto L16f
            long r2 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            r22 = r2
        L16f:
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r2 = r1.outputStream     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            byte[] r3 = r0.data     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            r6 = 0
            r2.write(r3, r6, r12)     // Catch: java.lang.Throwable -> L292 com.ss.android.socialbase.downloader.exception.BaseException -> L295
            if (r29 == 0) goto L184
            long r2 = r1.debugWriteTimeNs     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r6 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r6 = r6 - r22
            long r2 = r2 + r6
            r1.debugWriteTimeNs = r2     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
        L184:
            r10.recycle(r0)     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r2 = r1.curOffset     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r6 = (long) r12     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r2 = r2 + r6
            r1.curOffset = r2     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r24 = r24 + r6
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r2 = r1.callback     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            boolean r0 = r1.bugfixCancelThenUpdate     // Catch: java.lang.Throwable -> L285
            if (r0 == 0) goto L1a9
            boolean r0 = r1.canceled     // Catch: java.lang.Throwable -> L285
            if (r0 != 0) goto L1b7
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r0 = r1.callback     // Catch: java.lang.Throwable -> L285
            boolean r0 = r0.onProgress(r6)     // Catch: java.lang.Throwable -> L285
            com.ss.android.socialbase.downloader.impls.DownloadCache r3 = r1.downloadCache     // Catch: java.lang.Throwable -> L285
            r1.updateDownloadChunk(r3)     // Catch: java.lang.Throwable -> L285
            r1.checkAndSync(r0)     // Catch: java.lang.Throwable -> L285
            goto L1b7
        L1a9:
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r0 = r1.callback     // Catch: java.lang.Throwable -> L285
            boolean r0 = r0.onProgress(r6)     // Catch: java.lang.Throwable -> L285
            com.ss.android.socialbase.downloader.impls.DownloadCache r3 = r1.downloadCache     // Catch: java.lang.Throwable -> L285
            r1.updateDownloadChunk(r3)     // Catch: java.lang.Throwable -> L285
            r1.checkAndSync(r0)     // Catch: java.lang.Throwable -> L285
        L1b7:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L285
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            boolean r0 = r0.isDownloadWithWifiValid()     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            if (r0 == 0) goto L27d
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            boolean r0 = r0.isPauseReserveWithWifiValid()     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            if (r0 == 0) goto L275
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            boolean r0 = r0.isIgnoreDataVerify()     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            if (r0 != 0) goto L244
            long r2 = r1.downloadChunkContentLen     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            r6 = 0
            int r0 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r0 < 0) goto L244
            long r2 = r1.downloadChunkContentLen     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r6 = r1.curOffset     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r12 = r1.handleStartOffset     // Catch: java.lang.Throwable -> L298 com.ss.android.socialbase.downloader.exception.BaseException -> L2a3
            long r6 = r6 - r12
            int r0 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r0 > 0) goto L244
        L1e3:
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection
            if (r0 == 0) goto L1ea
            r0.end()
        L1ea:
            if (r10 == 0) goto L1ef
            r10.close()
        L1ef:
            boolean r0 = r1.bugfixCancelThenUpdate     // Catch: java.lang.Throwable -> L237
            if (r0 == 0) goto L20b
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r2 = r1.callback     // Catch: java.lang.Throwable -> L237
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L237
            boolean r0 = r1.canceled     // Catch: java.lang.Throwable -> L208
            if (r0 != 0) goto L206
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache     // Catch: java.lang.Throwable -> L208
            r1.updateDownloadChunk(r0)     // Catch: java.lang.Throwable -> L208
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r0 = r1.outputStream     // Catch: java.lang.Throwable -> L208
            if (r0 == 0) goto L206
            r34.sync()     // Catch: java.lang.Throwable -> L208
        L206:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L208
            goto L217
        L208:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L208
            throw r0     // Catch: java.lang.Throwable -> L237
        L20b:
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache     // Catch: java.lang.Throwable -> L237
            r1.updateDownloadChunk(r0)     // Catch: java.lang.Throwable -> L237
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r0 = r1.outputStream     // Catch: java.lang.Throwable -> L237
            if (r0 == 0) goto L217
            r34.sync()     // Catch: java.lang.Throwable -> L237
        L217:
            r2 = 1
            java.io.Closeable[] r0 = new java.io.Closeable[r2]
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r3 = r1.outputStream
            r4 = 0
            r0[r4] = r3
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r0)
            long r5 = java.lang.System.nanoTime()
            long r5 = r5 - r8
            r1.debugTotalTimeNs = r5
            com.ss.android.socialbase.downloader.setting.DownloadSetting r10 = r1.setting
            com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r1.downloadInfo
            java.lang.String r12 = r1.url
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r13 = r1.httpConnection
            r3 = r4
            boolean r14 = r1.paused
            r6 = r2
            goto L3d8
        L237:
            r0 = move-exception
            r3 = 0
            r6 = 1
            java.io.Closeable[] r2 = new java.io.Closeable[r6]
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r4 = r1.outputStream
            r2[r3] = r4
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r2)
            throw r0
        L244:
            r3 = 0
            r6 = 1
            boolean r0 = r1.openLimitSpeed     // Catch: java.lang.Throwable -> L28a com.ss.android.socialbase.downloader.exception.BaseException -> L28d
            if (r0 == 0) goto L26b
            int r0 = (r24 > r4 ? 1 : (r24 == r4 ? 0 : -1))
            if (r0 <= 0) goto L26b
            long r12 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L28a com.ss.android.socialbase.downloader.exception.BaseException -> L28d
            long r12 = r12 - r20
            int r0 = (r12 > r18 ? 1 : (r12 == r18 ? 0 : -1))
            if (r0 >= 0) goto L263
            long r12 = r18 - r12
            java.lang.Thread.sleep(r12)     // Catch: java.lang.InterruptedException -> L25e java.lang.Throwable -> L28a com.ss.android.socialbase.downloader.exception.BaseException -> L28d
            goto L263
        L25e:
            r0 = move-exception
            r2 = r0
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L28a com.ss.android.socialbase.downloader.exception.BaseException -> L28d
        L263:
            long r12 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L28a com.ss.android.socialbase.downloader.exception.BaseException -> L28d
            r20 = r12
            r24 = 0
        L26b:
            r14 = r6
            r15 = r29
            r2 = r30
            r6 = r32
            r13 = -1
            goto L7f
        L275:
            r3 = 0
            r6 = 1
            com.ss.android.socialbase.downloader.exception.DownloadPauseReserveWifiException r0 = new com.ss.android.socialbase.downloader.exception.DownloadPauseReserveWifiException     // Catch: java.lang.Throwable -> L28a com.ss.android.socialbase.downloader.exception.BaseException -> L28d
            r0.<init>()     // Catch: java.lang.Throwable -> L28a com.ss.android.socialbase.downloader.exception.BaseException -> L28d
            throw r0     // Catch: java.lang.Throwable -> L28a com.ss.android.socialbase.downloader.exception.BaseException -> L28d
        L27d:
            r3 = 0
            r6 = 1
            com.ss.android.socialbase.downloader.exception.DownloadOnlyWifiException r0 = new com.ss.android.socialbase.downloader.exception.DownloadOnlyWifiException     // Catch: java.lang.Throwable -> L28a com.ss.android.socialbase.downloader.exception.BaseException -> L28d
            r0.<init>()     // Catch: java.lang.Throwable -> L28a com.ss.android.socialbase.downloader.exception.BaseException -> L28d
            throw r0     // Catch: java.lang.Throwable -> L28a com.ss.android.socialbase.downloader.exception.BaseException -> L28d
        L285:
            r0 = move-exception
            r3 = 0
            r6 = 1
        L288:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L290
            throw r0     // Catch: java.lang.Throwable -> L28a com.ss.android.socialbase.downloader.exception.BaseException -> L28d
        L28a:
            r0 = move-exception
            goto L2fa
        L28d:
            r0 = move-exception
            goto L47a
        L290:
            r0 = move-exception
            goto L288
        L292:
            r0 = move-exception
            r3 = r6
            goto L2a0
        L295:
            r0 = move-exception
            r3 = r6
            goto L2a5
        L298:
            r0 = move-exception
            goto L29f
        L29a:
            r0 = move-exception
            r30 = r2
            r32 = r6
        L29f:
            r3 = 0
        L2a0:
            r6 = 1
            goto L2fa
        L2a3:
            r0 = move-exception
            r3 = 0
        L2a5:
            r6 = 1
            goto L47a
        L2a8:
            r0 = move-exception
            r30 = r2
            r32 = r6
            r6 = r14
            goto L2ba
        L2af:
            r0 = move-exception
            r6 = r14
            goto L2c0
        L2b2:
            r0 = move-exception
            r30 = r2
            r32 = r6
            r6 = r14
            r29 = r15
        L2ba:
            r3 = 0
            goto L2fa
        L2bc:
            r0 = move-exception
            r6 = r14
            r29 = r15
        L2c0:
            r3 = 0
            goto L47a
        L2c3:
            r30 = r2
            r32 = r6
            r6 = r14
            r29 = r15
            r3 = 0
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L2eb com.ss.android.socialbase.downloader.exception.BaseException -> L2ed
            r2 = 1042(0x412, float:1.46E-42)
            java.io.IOException r4 = new java.io.IOException     // Catch: java.lang.Throwable -> L2eb com.ss.android.socialbase.downloader.exception.BaseException -> L2ed
            java.lang.String r5 = "inputStream is null"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L2eb com.ss.android.socialbase.downloader.exception.BaseException -> L2ed
            r0.<init>(r2, r4)     // Catch: java.lang.Throwable -> L2eb com.ss.android.socialbase.downloader.exception.BaseException -> L2ed
            throw r0     // Catch: java.lang.Throwable -> L2eb com.ss.android.socialbase.downloader.exception.BaseException -> L2ed
        L2da:
            r0 = move-exception
            r30 = r2
            r32 = r6
            r6 = r14
            r29 = r15
            r3 = 0
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L2eb com.ss.android.socialbase.downloader.exception.BaseException -> L2ed
            r4 = 1054(0x41e, float:1.477E-42)
            r2.<init>(r4, r0)     // Catch: java.lang.Throwable -> L2eb com.ss.android.socialbase.downloader.exception.BaseException -> L2ed
            throw r2     // Catch: java.lang.Throwable -> L2eb com.ss.android.socialbase.downloader.exception.BaseException -> L2ed
        L2eb:
            r0 = move-exception
            goto L2f9
        L2ed:
            r0 = move-exception
            goto L479
        L2f0:
            r0 = move-exception
            r30 = r2
            r32 = r6
            r6 = r14
            r29 = r15
            r3 = 0
        L2f9:
            r10 = 0
        L2fa:
            if (r11 == 0) goto L303
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r2 = r1.httpConnection     // Catch: java.lang.Throwable -> L4f6
            com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection r2 = (com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection) r2     // Catch: java.lang.Throwable -> L4f6
            r2.onThrowable(r0)     // Catch: java.lang.Throwable -> L4f6
        L303:
            java.lang.String r2 = com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler.TAG     // Catch: java.lang.Throwable -> L4f6
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4f6
            r4.<init>()     // Catch: java.lang.Throwable -> L4f6
            java.lang.String r5 = "handleResponse: e = "
            r4.append(r5)     // Catch: java.lang.Throwable -> L4f6
            r4.append(r0)     // Catch: java.lang.Throwable -> L4f6
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L4f6
            com.ss.android.socialbase.downloader.logger.Logger.w(r2, r4)     // Catch: java.lang.Throwable -> L4f6
            boolean r2 = r34.isStoppedStatus()     // Catch: java.lang.Throwable -> L4f6
            if (r2 == 0) goto L37c
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection
            if (r0 == 0) goto L326
            r0.end()
        L326:
            if (r10 == 0) goto L32b
            r10.close()
        L32b:
            boolean r0 = r1.bugfixCancelThenUpdate     // Catch: java.lang.Throwable -> L371
            if (r0 == 0) goto L347
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r2 = r1.callback     // Catch: java.lang.Throwable -> L371
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L371
            boolean r0 = r1.canceled     // Catch: java.lang.Throwable -> L344
            if (r0 != 0) goto L342
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache     // Catch: java.lang.Throwable -> L344
            r1.updateDownloadChunk(r0)     // Catch: java.lang.Throwable -> L344
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r0 = r1.outputStream     // Catch: java.lang.Throwable -> L344
            if (r0 == 0) goto L342
            r34.sync()     // Catch: java.lang.Throwable -> L344
        L342:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L344
            goto L353
        L344:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L344
            throw r0     // Catch: java.lang.Throwable -> L371
        L347:
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache     // Catch: java.lang.Throwable -> L371
            r1.updateDownloadChunk(r0)     // Catch: java.lang.Throwable -> L371
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r0 = r1.outputStream     // Catch: java.lang.Throwable -> L371
            if (r0 == 0) goto L353
            r34.sync()     // Catch: java.lang.Throwable -> L371
        L353:
            java.io.Closeable[] r0 = new java.io.Closeable[r6]
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r2 = r1.outputStream
            r0[r3] = r2
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r0)
        L35c:
            long r2 = java.lang.System.nanoTime()
            long r2 = r2 - r8
            r1.debugTotalTimeNs = r2
            com.ss.android.socialbase.downloader.setting.DownloadSetting r10 = r1.setting
            com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r1.downloadInfo
            java.lang.String r12 = r1.url
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r13 = r1.httpConnection
            boolean r14 = r1.paused
            boolean r15 = r1.canceled
            goto Ld9
        L371:
            r0 = move-exception
            java.io.Closeable[] r2 = new java.io.Closeable[r6]
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r4 = r1.outputStream
            r2[r3] = r4
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r2)
            throw r0
        L37c:
            boolean r2 = com.ss.android.socialbase.downloader.logger.Logger.debug()     // Catch: java.lang.Throwable -> L4f6
            if (r2 == 0) goto L385
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L4f6
        L385:
            java.lang.String r2 = "ResponseHandler"
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r0, r2)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L470 java.lang.Throwable -> L4f6
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection
            if (r0 == 0) goto L391
            r0.end()
        L391:
            if (r10 == 0) goto L396
            r10.close()
        L396:
            boolean r0 = r1.bugfixCancelThenUpdate     // Catch: java.lang.Throwable -> L465
            if (r0 == 0) goto L3b2
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r2 = r1.callback     // Catch: java.lang.Throwable -> L465
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L465
            boolean r0 = r1.canceled     // Catch: java.lang.Throwable -> L3af
            if (r0 != 0) goto L3ad
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache     // Catch: java.lang.Throwable -> L3af
            r1.updateDownloadChunk(r0)     // Catch: java.lang.Throwable -> L3af
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r0 = r1.outputStream     // Catch: java.lang.Throwable -> L3af
            if (r0 == 0) goto L3ad
            r34.sync()     // Catch: java.lang.Throwable -> L3af
        L3ad:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L3af
            goto L3be
        L3af:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L3af
            throw r0     // Catch: java.lang.Throwable -> L465
        L3b2:
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache     // Catch: java.lang.Throwable -> L465
            r1.updateDownloadChunk(r0)     // Catch: java.lang.Throwable -> L465
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r0 = r1.outputStream     // Catch: java.lang.Throwable -> L465
            if (r0 == 0) goto L3be
            r34.sync()     // Catch: java.lang.Throwable -> L465
        L3be:
            java.io.Closeable[] r0 = new java.io.Closeable[r6]
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r2 = r1.outputStream
            r0[r3] = r2
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r0)
            long r4 = java.lang.System.nanoTime()
            long r4 = r4 - r8
            r1.debugTotalTimeNs = r4
            com.ss.android.socialbase.downloader.setting.DownloadSetting r10 = r1.setting
            com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r1.downloadInfo
            java.lang.String r12 = r1.url
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r13 = r1.httpConnection
            boolean r14 = r1.paused
        L3d8:
            boolean r15 = r1.canceled
            com.ss.android.socialbase.downloader.exception.BaseException r0 = r1.exception
            r16 = r0
            long r4 = r1.curOffset
            long r7 = r1.handleStartOffset
            long r17 = r4 - r7
            long r4 = r1.debugTotalTimeNs
            r19 = r4
            long r4 = r1.debugReadTimeNs
            r22 = r4
            long r4 = r1.debugWriteTimeNs
            r24 = r4
            long r4 = r1.debugSyncTimeNs
            r26 = r4
            r28 = 0
            r21 = r29
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorDownloadIO(r10, r11, r12, r13, r14, r15, r16, r17, r19, r21, r22, r24, r26, r28)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo
            boolean r0 = r0.isIgnoreDataVerify()
            if (r0 == 0) goto L404
            return
        L404:
            long r4 = r1.curOffset
            long r7 = r1.handleStartOffset
            long r4 = r4 - r7
            r7 = 0
            int r0 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r0 < 0) goto L464
            long r9 = r1.downloadChunkContentLen
            int r0 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r0 < 0) goto L464
            long r7 = r1.downloadChunkContentLen
            int r0 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r0 != 0) goto L41c
            goto L464
        L41c:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            r2 = 1051(0x41b, float:1.473E-42)
            r7 = 7
            java.lang.Object[] r7 = new java.lang.Object[r7]
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r7[r3] = r4
            java.lang.Long r3 = java.lang.Long.valueOf(r30)
            r7[r6] = r3
            r3 = 2
            long r4 = r1.downloadChunkContentLen
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r7[r3] = r4
            r3 = 3
            java.lang.Long r4 = java.lang.Long.valueOf(r32)
            r7[r3] = r4
            r3 = 4
            long r4 = r1.endOffset
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r7[r3] = r4
            r3 = 5
            long r4 = r1.curOffset
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r7[r3] = r4
            r3 = 6
            long r4 = r1.handleStartOffset
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r7[r3] = r4
            java.lang.String r3 = "handle data length[%d] != content length[%d] downloadChunkContentLen[%d], range[%d, %d) , current offset[%d] , handle start from %d"
            java.lang.String r3 = java.lang.String.format(r3, r7)
            r0.<init>(r2, r3)
            throw r0
        L464:
            return
        L465:
            r0 = move-exception
            java.io.Closeable[] r2 = new java.io.Closeable[r6]
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r4 = r1.outputStream
            r2[r3] = r4
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r2)
            throw r0
        L470:
            r0 = move-exception
            r1.exception = r0     // Catch: java.lang.Throwable -> L4f6
            throw r0     // Catch: java.lang.Throwable -> L4f6
        L474:
            r0 = move-exception
            r6 = r14
            r29 = r15
            r3 = 0
        L479:
            r10 = 0
        L47a:
            java.lang.String r2 = com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler.TAG     // Catch: java.lang.Throwable -> L4f6
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4f6
            r4.<init>()     // Catch: java.lang.Throwable -> L4f6
            java.lang.String r5 = "handleResponse: BaseException e = "
            r4.append(r5)     // Catch: java.lang.Throwable -> L4f6
            r4.append(r0)     // Catch: java.lang.Throwable -> L4f6
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L4f6
            com.ss.android.socialbase.downloader.logger.Logger.w(r2, r4)     // Catch: java.lang.Throwable -> L4f6
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = r1.setting     // Catch: java.lang.Throwable -> L4f6
            java.lang.String r4 = "ignore_base_ex_on_stop_status"
            boolean r2 = r2.optBugFix(r4)     // Catch: java.lang.Throwable -> L4f6
            if (r2 == 0) goto L4ea
            boolean r2 = r34.isStoppedStatus()     // Catch: java.lang.Throwable -> L4f6
            if (r2 == 0) goto L4ea
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection
            if (r0 == 0) goto L4a7
            r0.end()
        L4a7:
            if (r10 == 0) goto L4ac
            r10.close()
        L4ac:
            boolean r0 = r1.bugfixCancelThenUpdate     // Catch: java.lang.Throwable -> L4df
            if (r0 == 0) goto L4c8
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r2 = r1.callback     // Catch: java.lang.Throwable -> L4df
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L4df
            boolean r0 = r1.canceled     // Catch: java.lang.Throwable -> L4c5
            if (r0 != 0) goto L4c3
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache     // Catch: java.lang.Throwable -> L4c5
            r1.updateDownloadChunk(r0)     // Catch: java.lang.Throwable -> L4c5
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r0 = r1.outputStream     // Catch: java.lang.Throwable -> L4c5
            if (r0 == 0) goto L4c3
            r34.sync()     // Catch: java.lang.Throwable -> L4c5
        L4c3:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L4c5
            goto L4d4
        L4c5:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L4c5
            throw r0     // Catch: java.lang.Throwable -> L4df
        L4c8:
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache     // Catch: java.lang.Throwable -> L4df
            r1.updateDownloadChunk(r0)     // Catch: java.lang.Throwable -> L4df
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r0 = r1.outputStream     // Catch: java.lang.Throwable -> L4df
            if (r0 == 0) goto L4d4
            r34.sync()     // Catch: java.lang.Throwable -> L4df
        L4d4:
            java.io.Closeable[] r0 = new java.io.Closeable[r6]
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r2 = r1.outputStream
            r0[r3] = r2
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r0)
            goto L35c
        L4df:
            r0 = move-exception
            java.io.Closeable[] r2 = new java.io.Closeable[r6]
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r4 = r1.outputStream
            r2[r3] = r4
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r2)
            throw r0
        L4ea:
            boolean r2 = com.ss.android.socialbase.downloader.logger.Logger.debug()     // Catch: java.lang.Throwable -> L4f6
            if (r2 == 0) goto L4f3
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L4f6
        L4f3:
            r1.exception = r0     // Catch: java.lang.Throwable -> L4f6
            throw r0     // Catch: java.lang.Throwable -> L4f6
        L4f6:
            r0 = move-exception
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r2 = r1.httpConnection
            if (r2 == 0) goto L4fe
            r2.end()
        L4fe:
            if (r10 == 0) goto L503
            r10.close()
        L503:
            boolean r2 = r1.bugfixCancelThenUpdate     // Catch: java.lang.Throwable -> L569
            if (r2 == 0) goto L51f
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r2 = r1.callback     // Catch: java.lang.Throwable -> L569
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L569
            boolean r4 = r1.canceled     // Catch: java.lang.Throwable -> L51c
            if (r4 != 0) goto L51a
            com.ss.android.socialbase.downloader.impls.DownloadCache r4 = r1.downloadCache     // Catch: java.lang.Throwable -> L51c
            r1.updateDownloadChunk(r4)     // Catch: java.lang.Throwable -> L51c
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r4 = r1.outputStream     // Catch: java.lang.Throwable -> L51c
            if (r4 == 0) goto L51a
            r34.sync()     // Catch: java.lang.Throwable -> L51c
        L51a:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L51c
            goto L52b
        L51c:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L51c
            throw r0     // Catch: java.lang.Throwable -> L569
        L51f:
            com.ss.android.socialbase.downloader.impls.DownloadCache r2 = r1.downloadCache     // Catch: java.lang.Throwable -> L569
            r1.updateDownloadChunk(r2)     // Catch: java.lang.Throwable -> L569
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r2 = r1.outputStream     // Catch: java.lang.Throwable -> L569
            if (r2 == 0) goto L52b
            r34.sync()     // Catch: java.lang.Throwable -> L569
        L52b:
            java.io.Closeable[] r2 = new java.io.Closeable[r6]
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r4 = r1.outputStream
            r2[r3] = r4
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r2)
            long r2 = java.lang.System.nanoTime()
            long r2 = r2 - r8
            r1.debugTotalTimeNs = r2
            com.ss.android.socialbase.downloader.setting.DownloadSetting r10 = r1.setting
            com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r1.downloadInfo
            java.lang.String r12 = r1.url
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r13 = r1.httpConnection
            boolean r14 = r1.paused
            boolean r15 = r1.canceled
            com.ss.android.socialbase.downloader.exception.BaseException r2 = r1.exception
            r16 = r2
            long r2 = r1.curOffset
            long r4 = r1.handleStartOffset
            long r17 = r2 - r4
            long r2 = r1.debugTotalTimeNs
            r19 = r2
            long r2 = r1.debugReadTimeNs
            r22 = r2
            long r2 = r1.debugWriteTimeNs
            r24 = r2
            long r2 = r1.debugSyncTimeNs
            r26 = r2
            r28 = 0
            r21 = r29
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorDownloadIO(r10, r11, r12, r13, r14, r15, r16, r17, r19, r21, r22, r24, r26, r28)
            throw r0
        L569:
            r0 = move-exception
            java.io.Closeable[] r2 = new java.io.Closeable[r6]
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r4 = r1.outputStream
            r2[r3] = r4
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r2)
            throw r0
        L574:
            com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException r0 = new com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException
            r2 = 1004(0x3ec, float:1.407E-42)
            java.lang.String r3 = "the content-length is 0"
            r0.<init>(r2, r3)
            throw r0
        L57e:
            return
    }

    public void pause() {
            r1 = this;
            boolean r0 = r1.paused
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r1.paused = r0
            r1.cancelConnection()
            return
    }

    public void setChunkOffset(long r1, long r3, long r5) {
            r0 = this;
            r0.curOffset = r1
            r0.handleStartOffset = r1
            r0.endOffset = r3
            r0.downloadChunkContentLen = r5
            return
    }

    public void setEndOffset(long r1, long r3) {
            r0 = this;
            r0.endOffset = r1
            r0.downloadChunkContentLen = r3
            return
    }
}
