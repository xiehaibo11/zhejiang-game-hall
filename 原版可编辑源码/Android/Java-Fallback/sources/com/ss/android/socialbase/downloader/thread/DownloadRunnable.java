package com.ss.android.socialbase.downloader.thread;

public class DownloadRunnable implements com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback, java.lang.Runnable {
    private static final int MAX_RESET_RETAIN_RETRY_TIMES_COUNT = 3;
    private static final java.lang.String TAG = null;
    private boolean acceptPartial;
    private volatile int bytesRetryCount;
    private boolean canResumeFromCache;
    private long curBytesNeedCheckSpaceOverFlow;
    private com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler diskSpaceHandler;
    private final com.ss.android.socialbase.downloader.downloader.IDownloadCache downloadCache;
    private final java.util.ArrayList<com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable> downloadChunkRunnableList;
    private com.ss.android.socialbase.downloader.model.DownloadInfo downloadInfo;
    private final com.ss.android.socialbase.downloader.model.DownloadTask downloadTask;
    private volatile com.ss.android.socialbase.downloader.exception.BaseException errorException;
    private java.lang.String existTargetFileName;
    private com.ss.android.socialbase.downloader.network.IDownloadHttpConnection firstGetConnection;
    private com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection firstHeadConnection;
    private boolean firstHeadConnectionFailed;
    private volatile com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler firstHttpResponseHandler;
    private com.ss.android.socialbase.downloader.depend.IDownloadForbiddenHandler forbiddenHandler;
    private final com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator globalChunkAdjustCalculator;
    private final com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator globalChunkCalculator;
    private final java.util.concurrent.atomic.AtomicBoolean isAlive;
    private boolean isChunked;
    private boolean isResponseFromBegin;
    private boolean isSingleChunk;
    private volatile boolean isTriedFixRangeNotSatisfiable;
    private java.util.concurrent.Future mFuture;
    private boolean needCheckIfModified;
    private boolean needJumpToStart;
    private long prepareDownloadTime;
    private int resetRetainRetryTimesCount;
    private java.util.concurrent.atomic.AtomicInteger retainRetryTimes;
    private com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator retryDelayTimeCalculator;
    private volatile com.ss.android.socialbase.downloader.constants.RunStatus runStatus;
    private volatile com.ss.android.socialbase.downloader.segment.SegmentDispatcher segmentDispatcher;
    private final com.ss.android.socialbase.downloader.setting.DownloadSetting setting;
    private final com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler statusHandler;
    private com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator taskChunkAdjustCalculator;
    private com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator taskChunkCalculator;



    static {
            java.lang.Class<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG = r0
            return
    }

    public DownloadRunnable(com.ss.android.socialbase.downloader.model.DownloadTask r3, android.os.Handler r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.isTriedFixRangeNotSatisfiable = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2.downloadChunkRunnableList = r1
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_NONE
            r2.runStatus = r1
            r1 = 5
            r2.bytesRetryCount = r1
            r2.needJumpToStart = r0
            r2.firstHeadConnectionFailed = r0
            r2.needCheckIfModified = r0
            r2.resetRetainRetryTimesCount = r0
            r0 = 0
            r2.segmentDispatcher = r0
            r2.downloadTask = r3
            if (r3 == 0) goto L54
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.getDownloadInfo()
            r2.downloadInfo = r0
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r0 = r3.getChunkStrategy()
            r2.taskChunkCalculator = r0
            com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r0 = r3.getChunkAdjustCalculator()
            r2.taskChunkAdjustCalculator = r0
            com.ss.android.socialbase.downloader.depend.IDownloadForbiddenHandler r0 = r3.getForbiddenHandler()
            r2.forbiddenHandler = r0
            com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler r0 = r3.getDiskSpaceHandler()
            r2.diskSpaceHandler = r0
            com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator r0 = r2.getRetryDelayTimeCalculator(r3)
            r2.retryDelayTimeCalculator = r0
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            int r0 = r0.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            r2.setting = r0
            goto L5a
        L54:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            r2.setting = r0
        L5a:
            r2.updateRetainRetryTimes()
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadCache()
            r2.downloadCache = r0
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getChunkCntCalculator()
            r2.globalChunkCalculator = r0
            com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getChunkAdjustCalculator()
            r2.globalChunkAdjustCalculator = r0
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = new com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler
            r0.<init>(r3, r4)
            r2.statusHandler = r0
            java.util.concurrent.atomic.AtomicBoolean r3 = new java.util.concurrent.atomic.AtomicBoolean
            r4 = 1
            r3.<init>(r4)
            r2.isAlive = r3
            return
    }

    static void access$000(com.ss.android.socialbase.downloader.thread.DownloadRunnable r0, java.util.List r1) {
            r0.handleForbiddenCallback(r1)
            return
    }

    static void access$100(com.ss.android.socialbase.downloader.thread.DownloadRunnable r0) {
            r0.handleDiskSpaceCallback()
            return
    }

    private int calculateChunkCount(long r7, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r9) {
            r6 = this;
            boolean r0 = r6.isMultiChunkDownloadAvailable()
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L5e
            boolean r0 = r6.canResumeFromCache
            if (r0 == 0) goto L1a
            if (r9 == 0) goto L13
            int r9 = r9.size()
            goto L5c
        L13:
            com.ss.android.socialbase.downloader.model.DownloadInfo r9 = r6.downloadInfo
            int r9 = r9.getChunkCount()
            goto L5c
        L1a:
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r9 = r6.taskChunkCalculator
            if (r9 == 0) goto L23
            int r9 = r9.calculateChunkCount(r7)
            goto L29
        L23:
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r9 = r6.globalChunkCalculator
            int r9 = r9.calculateChunkCount(r7)
        L29:
            com.ss.android.socialbase.downloader.network.NetTrafficManager r0 = com.ss.android.socialbase.downloader.network.NetTrafficManager.getInstance()
            com.ss.android.socialbase.downloader.network.NetworkQuality r0 = r0.getCurrentNetworkQuality()
            java.lang.String r3 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.Object[] r4 = new java.lang.Object[r2]
            java.lang.String r5 = r0.name()
            r4[r1] = r5
            java.lang.String r5 = "NetworkQuality is : %s"
            java.lang.String r4 = java.lang.String.format(r5, r4)
            com.ss.android.socialbase.downloader.logger.Logger.d(r3, r4)
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r6.downloadInfo
            java.lang.String r4 = r0.name()
            r3.setNetworkQuality(r4)
            com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r3 = r6.taskChunkAdjustCalculator
            if (r3 == 0) goto L56
            int r9 = r3.calculateChunkCount(r9, r0)
            goto L5c
        L56:
            com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r3 = r6.globalChunkAdjustCalculator
            int r9 = r3.calculateChunkCount(r9, r0)
        L5c:
            if (r9 > 0) goto L5f
        L5e:
            r9 = r2
        L5f:
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L88
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            r3 = 3
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r4 = java.lang.String.valueOf(r9)
            r3[r1] = r4
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r6.downloadInfo
            java.lang.String r1 = r1.getName()
            r3[r2] = r1
            r1 = 2
            java.lang.String r7 = java.lang.String.valueOf(r7)
            r3[r1] = r7
            java.lang.String r7 = "chunk count : %s for %s contentLen:%s"
            java.lang.String r7 = java.lang.String.format(r7, r3)
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r7)
        L88:
            return r9
    }

    private void cancelAllChunkRunnable() {
            r4 = this;
            java.util.ArrayList<com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable> r0 = r4.downloadChunkRunnableList     // Catch: java.lang.Throwable -> L1e
            java.lang.Object r0 = r0.clone()     // Catch: java.lang.Throwable -> L1e
            java.util.ArrayList r0 = (java.util.ArrayList) r0     // Catch: java.lang.Throwable -> L1e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L1e
        Lc:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto L39
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L1e
            com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable r1 = (com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable) r1     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto Lc
            r1.cancel()     // Catch: java.lang.Throwable -> L1e
            goto Lc
        L1e:
            r0 = move-exception
            java.lang.String r1 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "cancelAllChunkRunnable: "
            r2.append(r3)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r1, r0)
        L39:
            return
    }

    private boolean checkCompletedByteValid() {
            r4 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            boolean r0 = r0.isChunked()
            if (r0 == 0) goto L11
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            long r1 = r0.getCurBytes()
            r0.setTotalBytes(r1)
        L11:
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "checkCompletedByteValid: downloadInfo.getCurBytes() = "
            r1.append(r2)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r4.downloadInfo
            long r2 = r2.getCurBytes()
            r1.append(r2)
            java.lang.String r2 = ",  downloadInfo.getTotalBytes() = "
            r1.append(r2)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r4.downloadInfo
            long r2 = r2.getTotalBytes()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r1)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            long r0 = r0.getCurBytes()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L6c
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            boolean r0 = r0.isIgnoreDataVerify()
            if (r0 != 0) goto L6a
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            long r0 = r0.getTotalBytes()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L6c
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            long r0 = r0.getCurBytes()
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r4.downloadInfo
            long r2 = r2.getTotalBytes()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L6a
            goto L6c
        L6a:
            r0 = 1
            return r0
        L6c:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r1 = com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_RESTART
            r0.setByteInvalidRetryStatus(r1)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            r0.reset()
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r4.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo
            r0.updateDownloadInfo(r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r4.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo
            int r1 = r1.getId()
            r0.removeAllDownloadChunk(r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r4.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo
            int r1 = r1.getId()
            r0.removeSegments(r1)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            com.ss.android.socialbase.downloader.utils.DownloadUtils.deleteAllDownloadFiles(r0)
            r0 = 0
            return r0
    }

    private void checkHasAnotherSameTask() throws com.ss.android.socialbase.downloader.exception.RetryThrowable, com.ss.android.socialbase.downloader.exception.BaseException {
            r5 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.downloadInfo
            int r0 = r0.getId()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r5.downloadInfo
            int r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadId(r1)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r5.downloadInfo
            boolean r2 = r2.isDownloaded()
            if (r2 == 0) goto L2b
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r5.downloadInfo
            boolean r2 = r2.isExpiredRedownload()
            if (r2 != 0) goto L2b
            boolean r2 = r5.needCheckIfModified
            if (r2 == 0) goto L21
            goto L2b
        L21:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1009(0x3f1, float:1.414E-42)
            java.lang.String r2 = "file has downloaded"
            r0.<init>(r1, r2)
            throw r0
        L2b:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r2 = r5.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r2.getDownloadInfo(r1)
            if (r2 == 0) goto La8
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadEngine()
            if (r3 == 0) goto La8
            int r4 = r2.getId()
            if (r4 == r0) goto La8
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r5.downloadInfo
            boolean r4 = r2.equalsTask(r4)
            if (r4 == 0) goto La8
            int r4 = r2.getId()
            boolean r3 = r3.isDownloading(r4)
            if (r3 != 0) goto L99
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r3 = r5.downloadCache
            java.util.List r3 = r3.getDownloadChunk(r1)
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r5.downloadInfo
            com.ss.android.socialbase.downloader.utils.DownloadUtils.deleteAllDownloadFiles(r4)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r4 = r5.downloadCache
            r4.removeDownloadTaskData(r1)
            if (r2 == 0) goto La8
            boolean r1 = r2.isBreakpointAvailable()
            if (r1 == 0) goto La8
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r5.downloadInfo
            r4 = 0
            r1.copyFromCacheData(r2, r4)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r1 = r5.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r5.downloadInfo
            r1.updateDownloadInfo(r2)
            if (r3 == 0) goto L91
            java.util.Iterator r1 = r3.iterator()
        L7c:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L91
            java.lang.Object r2 = r1.next()
            com.ss.android.socialbase.downloader.model.DownloadChunk r2 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r2
            r2.setId(r0)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r3 = r5.downloadCache
            r3.addDownloadChunk(r2)
            goto L7c
        L91:
            com.ss.android.socialbase.downloader.exception.RetryThrowable r0 = new com.ss.android.socialbase.downloader.exception.RetryThrowable
            java.lang.String r1 = "retry task because id generator changed"
            r0.<init>(r1)
            throw r0
        L99:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r1 = r5.downloadCache
            r1.removeDownloadTaskData(r0)
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1025(0x401, float:1.436E-42)
            java.lang.String r2 = "another same task is downloading"
            r0.<init>(r1, r2)
            throw r0
        La8:
            return
    }

    private boolean checkIsStoppedByUser() {
            r2 = this;
            boolean r0 = r2.isStoppedStatus()
            r1 = -2
            if (r0 != 0) goto L12
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            int r0 = r0.getStatus()
            if (r0 != r1) goto L10
            goto L12
        L10:
            r0 = 0
            return r0
        L12:
            boolean r0 = r2.isStoppedStatus()
            if (r0 != 0) goto L32
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            int r0 = r0.getStatus()
            if (r0 != r1) goto L25
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_PAUSE
            r2.runStatus = r0
            goto L32
        L25:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            int r0 = r0.getStatus()
            r1 = -4
            if (r0 != r1) goto L32
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_CANCELED
            r2.runStatus = r0
        L32:
            r0 = 1
            return r0
    }

    private boolean checkNeedRetryDelay() {
            r1 = this;
            r0 = 0
            return r0
    }

    private void checkSavePathValid() throws com.ss.android.socialbase.downloader.exception.BaseException {
            r9 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r9.downloadInfo
            java.lang.String r0 = r0.getSavePath()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L12f
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r9.downloadInfo
            java.lang.String r0 = r0.getName()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L125
            java.io.File r0 = new java.io.File
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r9.downloadInfo
            java.lang.String r1 = r1.getSavePath()
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 != 0) goto Lca
            boolean r1 = r0.mkdirs()
            if (r1 != 0) goto L124
            boolean r2 = r0.exists()
            if (r2 != 0) goto L124
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r9.downloadInfo
            int r2 = r2.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r2)
            r3 = 0
            java.lang.String r4 = "opt_mkdir_failed"
            int r2 = r2.optInt(r4, r3)
            r4 = 1030(0x406, float:1.443E-42)
            r5 = 1
            java.lang.String r6 = "download savePath directory can not created:"
            if (r2 != r5) goto Laf
        L4d:
            if (r1 != 0) goto L5f
            int r2 = r3 + 1
            r5 = 3
            if (r3 >= r5) goto L5f
            r7 = 10
            java.lang.Thread.sleep(r7)     // Catch: java.lang.InterruptedException -> L5f
            boolean r1 = r0.mkdirs()
            r3 = r2
            goto L4d
        L5f:
            if (r1 != 0) goto L124
            boolean r0 = r0.exists()
            if (r0 != 0) goto L124
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r9.downloadInfo
            java.lang.String r0 = r0.getSavePath()
            long r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getAvailableSpaceBytes(r0)
            r2 = 16384(0x4000, double:8.095E-320)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L94
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1006(0x3ee, float:1.41E-42)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r9.downloadInfo
            java.lang.String r3 = r3.getSavePath()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.<init>(r1, r2)
            throw r0
        L94:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r9.downloadInfo
            java.lang.String r2 = r2.getSavePath()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r4, r1)
            throw r0
        Laf:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r9.downloadInfo
            java.lang.String r2 = r2.getSavePath()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r4, r1)
            throw r0
        Lca:
            boolean r1 = r0.isDirectory()
            if (r1 != 0) goto L124
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r9.downloadInfo
            boolean r1 = com.ss.android.socialbase.downloader.utils.DownloadSettingsUtils.isOptimizeSavePath(r1)
            r2 = 1031(0x407, float:1.445E-42)
            if (r1 == 0) goto L107
            r0.delete()
            boolean r1 = r0.mkdirs()
            if (r1 != 0) goto L124
            boolean r0 = r0.exists()
            if (r0 == 0) goto Lea
            goto L124
        Lea:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "download savePath is not directory:path="
            r1.append(r3)
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r9.downloadInfo
            java.lang.String r3 = r3.getSavePath()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.<init>(r2, r1)
            throw r0
        L107:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "download savePath is not a directory:"
            r1.append(r3)
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r9.downloadInfo
            java.lang.String r3 = r3.getSavePath()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.<init>(r2, r1)
            throw r0
        L124:
            return
        L125:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1029(0x405, float:1.442E-42)
            java.lang.String r2 = "download name can not be empty"
            r0.<init>(r1, r2)
            throw r0
        L12f:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1028(0x404, float:1.44E-42)
            java.lang.String r2 = "download savePath can not be empty"
            r0.<init>(r1, r2)
            throw r0
    }

    private void checkSpaceOverflowInProgress() throws com.ss.android.socialbase.downloader.exception.BaseException {
            r16 = this;
            r0 = r16
            r1 = 0
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r0.downloadInfo     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> Lf
            java.lang.String r3 = r3.getTempPath()     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> Lf
            long r3 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getAvailableSpaceBytes(r3)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> Lf
            goto L10
        Lf:
            r3 = r1
        L10:
            java.lang.String r5 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "checkSpaceOverflowInProgress: available = "
            r6.append(r7)
            double r7 = com.ss.android.socialbase.downloader.utils.DownloadUtils.byteToMb(r3)
            r6.append(r7)
            java.lang.String r7 = "MB"
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r5, r6)
            int r5 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r5 <= 0) goto L9e
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r0.downloadInfo
            long r5 = r5.getTotalBytes()
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = r0.downloadInfo
            long r8 = r8.getCurBytes()
            long r5 = r5 - r8
            int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r8 >= 0) goto L9e
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = r0.downloadInfo
            int r8 = r8.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r8 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r8)
            r9 = 100
            java.lang.String r10 = "space_fill_min_keep_mb"
            int r8 = r8.optInt(r10, r9)
            if (r8 <= 0) goto L9e
            long r9 = (long) r8
            r11 = 1048576(0x100000, double:5.180654E-318)
            long r9 = r9 * r11
            long r9 = r3 - r9
            java.lang.String r13 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r15 = "checkSpaceOverflowInProgress: minKeep  = "
            r14.append(r15)
            r14.append(r8)
            java.lang.String r8 = "MB, canDownload = "
            r14.append(r8)
            double r11 = com.ss.android.socialbase.downloader.utils.DownloadUtils.byteToMb(r9)
            r14.append(r11)
            r14.append(r7)
            java.lang.String r7 = r14.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r13, r7)
            int r7 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
            if (r7 <= 0) goto L96
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r0.downloadInfo
            long r1 = r1.getCurBytes()
            r3 = 1048576(0x100000, double:5.180654E-318)
            long r9 = r9 + r3
            long r1 = r1 + r9
            r0.curBytesNeedCheckSpaceOverFlow = r1
            return
        L96:
            r0.curBytesNeedCheckSpaceOverFlow = r1
            com.ss.android.socialbase.downloader.exception.DownloadOutOfSpaceException r1 = new com.ss.android.socialbase.downloader.exception.DownloadOutOfSpaceException
            r1.<init>(r3, r5)
            throw r1
        L9e:
            r0.curBytesNeedCheckSpaceOverFlow = r1
            return
    }

    private void checkTaskCache() throws com.ss.android.socialbase.downloader.exception.DownloadFileExistException {
            r10 = this;
            java.lang.String r0 = "fix_file_exist_update_download_info"
            r1 = 0
            r2 = 1
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r10.downloadInfo     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            int r3 = r3.getId()     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r4 = r10.downloadCache     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            if (r4 == 0) goto L90
            r4 = 2048(0x800, float:2.87E-42)
            boolean r4 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r4)     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            if (r4 == 0) goto L1b
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r4 = r10.downloadCache     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            r4.ensureDownloadCacheSyncSuccess()     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
        L1b:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r4 = r10.downloadCache     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r4.getDownloadInfo(r3)     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            if (r4 == 0) goto L8a
            boolean r5 = r4.isNewTask()     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            if (r5 == 0) goto L2b
            goto L8a
        L2b:
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r10.downloadInfo     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            java.lang.String r5 = r5.getSavePath()     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r10.downloadInfo     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            java.lang.String r6 = r6.getMd5()     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r10.downloadInfo     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            r7.copyFromCacheData(r4, r2)     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            r7 = 4096(0x1000, float:5.74E-42)
            boolean r7 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r7)     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            if (r7 == 0) goto L4a
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r10.downloadInfo     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            if (r4 == r7) goto L4a
            r7 = r2
            goto L4b
        L4a:
            r7 = r1
        L4b:
            java.lang.String r8 = r4.getSavePath()     // Catch: java.lang.Throwable -> L7f com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L84
            boolean r5 = r5.equals(r8)     // Catch: java.lang.Throwable -> L7f com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L84
            if (r5 == 0) goto L6c
            boolean r5 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isFileDownloaded(r4, r1, r6)     // Catch: java.lang.Throwable -> L7f com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L84
            if (r5 != 0) goto L5c
            goto L6c
        L5c:
            com.ss.android.socialbase.downloader.exception.DownloadFileExistException r1 = new com.ss.android.socialbase.downloader.exception.DownloadFileExistException     // Catch: java.lang.Throwable -> L66 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L69
            java.lang.String r3 = r4.getName()     // Catch: java.lang.Throwable -> L66 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L69
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L66 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L69
            throw r1     // Catch: java.lang.Throwable -> L66 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L69
        L66:
            r1 = move-exception
            r3 = r1
            goto L82
        L69:
            r1 = move-exception
            r3 = r1
            goto L87
        L6c:
            int r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadId(r4)     // Catch: java.lang.Throwable -> L7f com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L84
            if (r4 == r3) goto L7d
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r4 = r10.downloadCache     // Catch: android.database.sqlite.SQLiteException -> L78 java.lang.Throwable -> L7f com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L84
            r4.removeDownloadTaskData(r3)     // Catch: android.database.sqlite.SQLiteException -> L78 java.lang.Throwable -> L7f com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L84
            goto L91
        L78:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L7f com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L84
            goto L91
        L7d:
            r2 = r7
            goto L91
        L7f:
            r2 = move-exception
            r3 = r2
            r2 = r1
        L82:
            r1 = r7
            goto Lab
        L84:
            r2 = move-exception
            r3 = r2
            r2 = r1
        L87:
            r1 = r7
            goto Led
        L8a:
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r10.downloadInfo     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            r3.reset()     // Catch: java.lang.Throwable -> La8 com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> Lea
            goto L91
        L90:
            r2 = r1
        L91:
            r10.updateRetainRetryTimes()     // Catch: java.lang.Throwable -> L9e com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> La3
            if (r2 == 0) goto Le9
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r10.downloadCache     // Catch: android.database.sqlite.SQLiteException -> Le5
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r10.downloadInfo     // Catch: android.database.sqlite.SQLiteException -> Le5
            r0.updateDownloadInfo(r1)     // Catch: android.database.sqlite.SQLiteException -> Le5
            goto Le9
        L9e:
            r3 = move-exception
            r9 = r2
            r2 = r1
            r1 = r9
            goto Lab
        La3:
            r3 = move-exception
            r9 = r2
            r2 = r1
            r1 = r9
            goto Led
        La8:
            r2 = move-exception
            r3 = r2
            r2 = r1
        Lab:
            com.ss.android.socialbase.downloader.model.DownloadTask r4 = r10.downloadTask     // Catch: java.lang.Throwable -> Lee
            if (r4 == 0) goto Ld1
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r10.downloadInfo     // Catch: java.lang.Throwable -> Lee
            if (r4 == 0) goto Ld1
            com.ss.android.socialbase.downloader.model.DownloadTask r4 = r10.downloadTask     // Catch: java.lang.Throwable -> Lee
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r4 = r4.getMonitorDepend()     // Catch: java.lang.Throwable -> Lee
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r10.downloadInfo     // Catch: java.lang.Throwable -> Lee
            com.ss.android.socialbase.downloader.exception.BaseException r6 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> Lee
            r7 = 1003(0x3eb, float:1.406E-42)
            java.lang.String r8 = "checkTaskCache"
            java.lang.String r3 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getErrorMsgWithTagPrefix(r3, r8)     // Catch: java.lang.Throwable -> Lee
            r6.<init>(r7, r3)     // Catch: java.lang.Throwable -> Lee
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r10.downloadInfo     // Catch: java.lang.Throwable -> Lee
            int r3 = r3.getStatus()     // Catch: java.lang.Throwable -> Lee
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSendWithTaskMonitor(r4, r5, r6, r3)     // Catch: java.lang.Throwable -> Lee
        Ld1:
            if (r1 == 0) goto Le9
            if (r2 == 0) goto Ldd
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = r10.setting     // Catch: android.database.sqlite.SQLiteException -> Le5
            boolean r0 = r1.optBugFix(r0)     // Catch: android.database.sqlite.SQLiteException -> Le5
            if (r0 == 0) goto Le9
        Ldd:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r10.downloadCache     // Catch: android.database.sqlite.SQLiteException -> Le5
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r10.downloadInfo     // Catch: android.database.sqlite.SQLiteException -> Le5
            r0.updateDownloadInfo(r1)     // Catch: android.database.sqlite.SQLiteException -> Le5
            goto Le9
        Le5:
            r0 = move-exception
            r0.printStackTrace()
        Le9:
            return
        Lea:
            r2 = move-exception
            r3 = r2
            r2 = r1
        Led:
            throw r3     // Catch: java.lang.Throwable -> Lee
        Lee:
            r3 = move-exception
            if (r1 == 0) goto L107
            if (r2 == 0) goto Lfb
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = r10.setting     // Catch: android.database.sqlite.SQLiteException -> L103
            boolean r0 = r1.optBugFix(r0)     // Catch: android.database.sqlite.SQLiteException -> L103
            if (r0 == 0) goto L107
        Lfb:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r10.downloadCache     // Catch: android.database.sqlite.SQLiteException -> L103
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r10.downloadInfo     // Catch: android.database.sqlite.SQLiteException -> L103
            r0.updateDownloadInfo(r1)     // Catch: android.database.sqlite.SQLiteException -> L103
            goto L107
        L103:
            r0 = move-exception
            r0.printStackTrace()
        L107:
            throw r3
    }

    private void checkTaskCanResume() {
            r7 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r7.downloadInfo
            long r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getCurByte(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r7.downloadInfo
            long r2 = r2.getCurBytes()
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L2e
            java.lang.String r4 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "checkTaskCanResume: offset = "
            r5.append(r6)
            r5.append(r0)
            java.lang.String r6 = ", curBytes = "
            r5.append(r6)
            r5.append(r2)
            java.lang.String r2 = r5.toString()
            com.ss.android.socialbase.downloader.logger.Logger.w(r4, r2)
        L2e:
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r7.downloadInfo
            r2.setCurBytes(r0)
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L3b
            r0 = 1
            goto L3c
        L3b:
            r0 = 0
        L3c:
            r7.canResumeFromCache = r0
            if (r0 != 0) goto L66
            boolean r0 = r7.needCheckIfModified
            if (r0 != 0) goto L66
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.String r1 = "checkTaskCanResume: deleteAllDownloadFiles"
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r7.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r7.downloadInfo
            int r1 = r1.getId()
            r0.removeAllDownloadChunk(r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r7.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r7.downloadInfo
            int r1 = r1.getId()
            r0.removeSegments(r1)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r7.downloadInfo
            com.ss.android.socialbase.downloader.utils.DownloadUtils.deleteAllDownloadFiles(r0)
        L66:
            return
    }

    private boolean checkTaskStatusValid() {
            r5 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.downloadInfo
            int r0 = r0.getStatus()
            r1 = 1
            if (r0 == r1) goto L34
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r5.downloadInfo
            boolean r2 = r2.canSkipStatusHandler()
            if (r2 != 0) goto L34
            r1 = -2
            if (r0 == r1) goto L32
            r1 = -4
            if (r0 == r1) goto L32
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r2 = 1000(0x3e8, float:1.401E-42)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "The download Task can't start, because its status is not prepare:"
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r1.<init>(r2, r0)
            r5.onError(r1)
        L32:
            r0 = 0
            return r0
        L34:
            return r1
    }

    private void checkWifiTaskValid() throws com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException {
            r5 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.downloadInfo
            boolean r0 = r0.isOnlyWifi()
            if (r0 == 0) goto L29
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            java.lang.String r1 = "android.permission.ACCESS_NETWORK_STATE"
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.checkPermission(r0, r1)
            if (r0 == 0) goto L15
            goto L29
        L15:
            com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException r0 = new com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException
            r2 = 1019(0x3fb, float:1.428E-42)
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r4 = 0
            r3[r4] = r1
            java.lang.String r1 = "download task need permission:%s"
            java.lang.String r1 = java.lang.String.format(r1, r3)
            r0.<init>(r2, r1)
            throw r0
        L29:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.downloadInfo
            boolean r0 = r0.isDownloadWithWifiValid()
            if (r0 == 0) goto L40
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.downloadInfo
            boolean r0 = r0.isPauseReserveWithWifiValid()
            if (r0 == 0) goto L3a
            return
        L3a:
            com.ss.android.socialbase.downloader.exception.DownloadPauseReserveWifiException r0 = new com.ss.android.socialbase.downloader.exception.DownloadPauseReserveWifiException
            r0.<init>()
            throw r0
        L40:
            com.ss.android.socialbase.downloader.exception.DownloadOnlyWifiException r0 = new com.ss.android.socialbase.downloader.exception.DownloadOnlyWifiException
            r0.<init>()
            throw r0
    }

    private void clearCurrentDownloadData() {
            r3 = this;
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "clearCurrentDownloadData::"
            r1.append(r2)
            java.lang.Throwable r2 = new java.lang.Throwable
            r2.<init>()
            java.lang.String r2 = android.util.Log.getStackTraceString(r2)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.w(r0, r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r3.downloadCache     // Catch: java.lang.Throwable -> L4c
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r3.downloadInfo     // Catch: java.lang.Throwable -> L4c
            int r1 = r1.getId()     // Catch: java.lang.Throwable -> L4c
            r0.removeAllDownloadChunk(r1)     // Catch: java.lang.Throwable -> L4c
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r3.downloadCache     // Catch: java.lang.Throwable -> L4c
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r3.downloadInfo     // Catch: java.lang.Throwable -> L4c
            int r1 = r1.getId()     // Catch: java.lang.Throwable -> L4c
            r0.removeSegments(r1)     // Catch: java.lang.Throwable -> L4c
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo     // Catch: java.lang.Throwable -> L4c
            com.ss.android.socialbase.downloader.utils.DownloadUtils.deleteAllDownloadFiles(r0)     // Catch: java.lang.Throwable -> L4c
            r0 = 0
            r3.canResumeFromCache = r0     // Catch: java.lang.Throwable -> L4c
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo     // Catch: java.lang.Throwable -> L4c
            java.lang.String r1 = ""
            r0.resetDataForEtagEndure(r1)     // Catch: java.lang.Throwable -> L4c
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r3.downloadCache     // Catch: java.lang.Throwable -> L4c
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r3.downloadInfo     // Catch: java.lang.Throwable -> L4c
            r0.updateDownloadInfo(r1)     // Catch: java.lang.Throwable -> L4c
            goto L50
        L4c:
            r0 = move-exception
            r0.printStackTrace()
        L50:
            return
    }

    private void closeConnection() {
            r0 = this;
            r0.closeFirstHeadConnection()
            r0.closeFirstConnection()
            return
    }

    private void closeFirstConnection() {
            r1 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.firstGetConnection
            if (r0 == 0) goto La
            r0.end()
            r0 = 0
            r1.firstGetConnection = r0
        La:
            return
    }

    private void closeFirstHeadConnection() {
            r1 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r0 = r1.firstHeadConnection
            if (r0 == 0) goto La
            r0.cancel()
            r0 = 0
            r1.firstHeadConnection = r0
        La:
            return
    }

    public static com.ss.android.socialbase.downloader.model.DownloadChunk createFirstDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadInfo r3, long r4) {
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r0 = new com.ss.android.socialbase.downloader.model.DownloadChunk$Builder
            int r1 = r3.getId()
            r0.<init>(r1)
            r1 = -1
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r0 = r0.chunkIndex(r1)
            r1 = 0
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r0 = r0.startOffset(r1)
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r0 = r0.oldOffset(r4)
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r0 = r0.currentOffset(r4)
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r0 = r0.endOffset(r1)
            long r1 = r3.getTotalBytes()
            long r1 = r1 - r4
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r3 = r0.contentLength(r1)
            com.ss.android.socialbase.downloader.model.DownloadChunk r3 = r3.build()
            return r3
    }

    private void createFirstGetConnection(java.lang.String r12, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r13) throws com.ss.android.socialbase.downloader.exception.BaseException, com.ss.android.socialbase.downloader.exception.RetryThrowable {
            r11 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r11.firstGetConnection
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 0
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r11.downloadInfo
            int r1 = r1.getChunkCount()
            r2 = 1
            if (r1 != r2) goto L17
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool r0 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool.getInstance()
            com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection r0 = r0.getCachedDownloadConnection(r12, r13)
        L17:
            if (r0 == 0) goto L28
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r12 = r11.firstGetConnection
            r11.setHttpResponseStatus(r12)
            com.ss.android.socialbase.downloader.model.DownloadInfo r12 = r11.downloadInfo
            r13 = 2
            r12.setPreconnectLevel(r13)
            r11.firstGetConnection = r0
            goto Le4
        L28:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r11.downloadInfo     // Catch: java.lang.Throwable -> L57 com.ss.android.socialbase.downloader.exception.BaseException -> Lf8
            boolean r3 = r0.isNeedDefaultHttpServiceBackUp()     // Catch: java.lang.Throwable -> L57 com.ss.android.socialbase.downloader.exception.BaseException -> Lf8
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r11.downloadInfo     // Catch: java.lang.Throwable -> L57 com.ss.android.socialbase.downloader.exception.BaseException -> Lf8
            int r4 = r0.getMaxBytes()     // Catch: java.lang.Throwable -> L57 com.ss.android.socialbase.downloader.exception.BaseException -> Lf8
            r6 = 0
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = r11.setting     // Catch: java.lang.Throwable -> L57 com.ss.android.socialbase.downloader.exception.BaseException -> Lf8
            java.lang.String r1 = "net_lib_strategy"
            int r8 = r0.optInt(r1)     // Catch: java.lang.Throwable -> L57 com.ss.android.socialbase.downloader.exception.BaseException -> Lf8
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = r11.setting     // Catch: java.lang.Throwable -> L57 com.ss.android.socialbase.downloader.exception.BaseException -> Lf8
            java.lang.String r1 = "monitor_download_connect"
            r5 = 0
            int r0 = r0.optInt(r1, r5)     // Catch: java.lang.Throwable -> L57 com.ss.android.socialbase.downloader.exception.BaseException -> Lf8
            if (r0 <= 0) goto L4a
            r9 = r2
            goto L4b
        L4a:
            r9 = r5
        L4b:
            com.ss.android.socialbase.downloader.model.DownloadInfo r10 = r11.downloadInfo     // Catch: java.lang.Throwable -> L57 com.ss.android.socialbase.downloader.exception.BaseException -> Lf8
            r5 = r12
            r7 = r13
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r12 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadWithConnection(r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L57 com.ss.android.socialbase.downloader.exception.BaseException -> Lf8
            r11.firstGetConnection = r12     // Catch: java.lang.Throwable -> L57 com.ss.android.socialbase.downloader.exception.BaseException -> Lf8
            goto Le1
        L57:
            r12 = move-exception
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r11.downloadInfo     // Catch: java.lang.Throwable -> Lfa
            boolean r0 = r0.isExpiredRedownload()     // Catch: java.lang.Throwable -> Lfa
            if (r0 == 0) goto Lc0
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isResponseCode304Error(r12)     // Catch: java.lang.Throwable -> Lfa
            if (r0 == 0) goto Lc0
            boolean r13 = com.ss.android.socialbase.downloader.utils.DownloadUtils.hasDownloadCacheHeader(r13)     // Catch: java.lang.Throwable -> Lfa
            if (r13 == 0) goto Lc0
            java.lang.String r12 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> Lfa
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfa
            r13.<init>()     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r0 = "dcache=execepiton responseCode=304 lastModified not changed, use local file.. old cacheControl="
            r13.append(r0)     // Catch: java.lang.Throwable -> Lfa
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r11.downloadInfo     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r0 = r0.getCacheControl()     // Catch: java.lang.Throwable -> Lfa
            r13.append(r0)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> Lfa
            com.ss.android.socialbase.downloader.logger.Logger.d(r12, r13)     // Catch: java.lang.Throwable -> Lfa
            com.ss.android.socialbase.downloader.model.DownloadInfo r12 = r11.downloadInfo     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r12 = r12.getCacheControl()     // Catch: java.lang.Throwable -> Lfa
            long r12 = com.ss.android.socialbase.downloader.utils.DownloadUtils.parserMaxAge(r12)     // Catch: java.lang.Throwable -> Lfa
            r0 = 0
            int r0 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r0 > 0) goto Lab
            com.ss.android.socialbase.downloader.model.DownloadInfo r12 = r11.downloadInfo     // Catch: java.lang.Throwable -> Lfa
            int r12 = r12.getId()     // Catch: java.lang.Throwable -> Lfa
            com.ss.android.socialbase.downloader.setting.DownloadSetting r12 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r12)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r13 = "default_304_max_age"
            r0 = 300(0x12c, float:4.2E-43)
            int r12 = r12.optInt(r13, r0)     // Catch: java.lang.Throwable -> Lfa
            long r12 = (long) r12     // Catch: java.lang.Throwable -> Lfa
        Lab:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r11.downloadInfo     // Catch: java.lang.Throwable -> Lfa
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lfa
            r3 = 1000(0x3e8, double:4.94E-321)
            long r12 = r12 * r3
            long r1 = r1 + r12
            r0.setCacheExpiredTime(r1)     // Catch: java.lang.Throwable -> Lfa
            com.ss.android.socialbase.downloader.exception.DownloadFileExistException r12 = new com.ss.android.socialbase.downloader.exception.DownloadFileExistException     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r13 = r11.existTargetFileName     // Catch: java.lang.Throwable -> Lfa
            r12.<init>(r13)     // Catch: java.lang.Throwable -> Lfa
            throw r12     // Catch: java.lang.Throwable -> Lfa
        Lc0:
            boolean r13 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isResponseCode416Error(r12)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r0 = ""
            if (r13 == 0) goto Lce
            java.lang.String r12 = "http code 416"
            r11.handleResponseCodeError(r0, r12)     // Catch: java.lang.Throwable -> Lfa
            goto Ldf
        Lce:
            boolean r13 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isResponseCode412Error(r12)     // Catch: java.lang.Throwable -> Lfa
            if (r13 == 0) goto Lda
            java.lang.String r12 = "http code 412"
            r11.handleResponseCodeError(r0, r12)     // Catch: java.lang.Throwable -> Lfa
            goto Ldf
        Lda:
            java.lang.String r13 = "CreateFirstConnection"
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r12, r13)     // Catch: java.lang.Throwable -> Lfa
        Ldf:
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r12 = r11.firstGetConnection
        Le1:
            r11.setHttpResponseStatus(r12)
        Le4:
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r12 = r11.firstGetConnection
            if (r12 == 0) goto Le9
            return
        Le9:
            com.ss.android.socialbase.downloader.exception.BaseException r12 = new com.ss.android.socialbase.downloader.exception.BaseException
            r13 = 1022(0x3fe, float:1.432E-42)
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "download can't continue, firstConnection is null"
            r0.<init>(r1)
            r12.<init>(r13, r0)
            throw r12
        Lf8:
            r12 = move-exception
            throw r12     // Catch: java.lang.Throwable -> Lfa
        Lfa:
            r12 = move-exception
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r13 = r11.firstGetConnection
            r11.setHttpResponseStatus(r13)
            throw r12
    }

    private void createFirstHeadConnection(java.lang.String r4, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r5, long r6) throws com.ss.android.socialbase.downloader.exception.BaseException, com.ss.android.socialbase.downloader.exception.RetryThrowable {
            r3 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r3.downloadInfo
            int r6 = r6.getChunkCount()
            r7 = 1
            if (r6 != r7) goto L1a
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool r6 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool.getInstance()
            com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection r6 = r6.getCachedHeadConnection(r4, r5)
            if (r6 == 0) goto L1a
            r3.firstHeadConnection = r6
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r3.downloadInfo
            r6.setPreconnectLevel(r7)
        L1a:
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r6 = r3.firstHeadConnection
            if (r6 != 0) goto L52
            boolean r6 = r3.firstHeadConnectionFailed
            if (r6 != 0) goto L52
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r3.downloadInfo
            boolean r6 = r6.isHeadConnectionAvailable()
            if (r6 == 0) goto L52
            com.ss.android.socialbase.downloader.setting.DownloadSetting r6 = r3.setting     // Catch: java.lang.Throwable -> L48
            java.lang.String r0 = "net_lib_strategy"
            int r6 = r6.optInt(r0)     // Catch: java.lang.Throwable -> L48
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = r3.setting     // Catch: java.lang.Throwable -> L48
            java.lang.String r1 = "monitor_download_connect"
            r2 = 0
            int r0 = r0.optInt(r1, r2)     // Catch: java.lang.Throwable -> L48
            if (r0 <= 0) goto L3e
            goto L3f
        L3e:
            r7 = r2
        L3f:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo     // Catch: java.lang.Throwable -> L48
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadWithHeadConnection(r4, r5, r6, r7, r0)     // Catch: java.lang.Throwable -> L48
            r3.firstHeadConnection = r4     // Catch: java.lang.Throwable -> L48
            goto L52
        L48:
            r4 = move-exception
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r3.downloadInfo
            java.lang.String r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getThrowableMsg(r4)
            r5.setHeadConnectionException(r4)
        L52:
            return
    }

    private void doFirstConnect(java.lang.String r2, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r3, long r4) throws com.ss.android.socialbase.downloader.exception.BaseException, com.ss.android.socialbase.downloader.exception.RetryThrowable {
            r1 = this;
            r1.createFirstHeadConnection(r2, r3, r4)
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r0 = r1.firstHeadConnection
            if (r0 == 0) goto Le
            r1.handleFirstConnection(r2, r0, r4)     // Catch: java.lang.Throwable -> Lb
            goto Le
        Lb:
            r0 = 1
            r1.firstHeadConnectionFailed = r0
        Le:
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r0 = r1.firstHeadConnection
            if (r0 == 0) goto L16
            boolean r0 = r1.firstHeadConnectionFailed
            if (r0 == 0) goto L1e
        L16:
            r1.createFirstGetConnection(r2, r3)
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r3 = r1.firstGetConnection
            r1.handleFirstConnection(r2, r3, r4)
        L1e:
            return
    }

    private boolean doTaskStatusHandle() {
            r5 = this;
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r5.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_ERROR
            r2 = 1
            if (r0 != r1) goto L10
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = r5.statusHandler
            com.ss.android.socialbase.downloader.exception.BaseException r1 = r5.errorException
            r0.onError(r1)
            goto Lae
        L10:
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r5.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_CANCELED
            if (r0 != r1) goto L1d
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = r5.statusHandler
            r0.onCancel()
            goto Lae
        L1d:
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r5.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_PAUSE
            if (r0 != r1) goto L2a
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = r5.statusHandler
            r0.onPause()
            goto Lae
        L2a:
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r5.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_END_RIGHT_NOW
            if (r0 != r1) goto L3f
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = r5.statusHandler     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L37
            r0.onCompleteForFileExist()     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L37
            goto Lae
        L37:
            r0 = move-exception
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r1 = r5.statusHandler
            r1.onError(r0)
            goto Lae
        L3f:
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r5.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_END_FOR_FILE_EXIST
            if (r0 != r1) goto L54
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = r5.statusHandler     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L4d
            java.lang.String r1 = r5.existTargetFileName     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L4d
            r0.onCompleteForFileExist(r1)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L4d
            goto Lae
        L4d:
            r0 = move-exception
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r1 = r5.statusHandler
            r1.onError(r0)
            goto Lae
        L54:
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r5.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_ALL_CHUNK_RETRY_WITH_RESET
            r3 = 0
            if (r0 != r1) goto L63
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = r5.statusHandler
            com.ss.android.socialbase.downloader.exception.BaseException r1 = r5.errorException
            r0.onRetry(r1, r3)
            return r3
        L63:
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r5.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_WAITING_ASYNC_HANDLER
            if (r0 != r1) goto L6a
            return r2
        L6a:
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r5.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_RETRY_DELAY
            if (r0 != r1) goto L89
            boolean r0 = r5.isAllChunkDownloadComplete()
            if (r0 != 0) goto L89
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.String r1 = "doTaskStatusHandle retryDelay"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            r5.startRetryDelayAlarm()
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r5.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_RETRY_DELAY
            if (r0 != r1) goto L87
            goto L88
        L87:
            r2 = r3
        L88:
            return r2
        L89:
            boolean r0 = r5.checkCompletedByteValid()     // Catch: java.lang.Throwable -> L9d
            if (r0 != 0) goto L90
            return r3
        L90:
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = r5.statusHandler     // Catch: java.lang.Throwable -> L9d
            r0.onCompleted()     // Catch: java.lang.Throwable -> L9d
            com.ss.android.socialbase.downloader.impls.RetryScheduler r0 = com.ss.android.socialbase.downloader.impls.RetryScheduler.getInstance()     // Catch: java.lang.Throwable -> L9d
            r0.scheduleRetryWhenHasTaskSucceed()     // Catch: java.lang.Throwable -> L9d
            goto Lae
        L9d:
            r0 = move-exception
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r3 = 1008(0x3f0, float:1.413E-42)
            java.lang.String r4 = "doTaskStatusHandle onComplete"
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getErrorMsgWithTagPrefix(r0, r4)
            r1.<init>(r3, r0)
            r5.onError(r1)
        Lae:
            return r2
    }

    private void downloadInner() {
            r17 = this;
            r1 = r17
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_NONE     // Catch: java.lang.Throwable -> L307
            r1.runStatus = r0     // Catch: java.lang.Throwable -> L307
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L307
            r0.updateStartDownloadTime()     // Catch: java.lang.Throwable -> L307
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L307
            r0.resetRealStartDownloadTime()     // Catch: java.lang.Throwable -> L307
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L307
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L307
            r4 = -1
            r0.setFirstSpeedTime(r4)     // Catch: java.lang.Throwable -> L307
            r4 = 1
            r5 = 0
            r17.checkTaskCache()     // Catch: com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L22 java.lang.Throwable -> L307
            r0 = r5
            goto L45
        L22:
            r0 = move-exception
            r6 = r0
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L307
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L307
            r7.<init>()     // Catch: java.lang.Throwable -> L307
            java.lang.String r8 = "file exist "
            r7.append(r8)     // Catch: java.lang.Throwable -> L307
            java.lang.String r8 = r6.getExistTargetFileName()     // Catch: java.lang.Throwable -> L307
            r7.append(r8)     // Catch: java.lang.Throwable -> L307
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L307
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r7)     // Catch: java.lang.Throwable -> L307
            java.lang.String r0 = r6.getExistTargetFileName()     // Catch: java.lang.Throwable -> L307
            r1.existTargetFileName = r0     // Catch: java.lang.Throwable -> L307
            r0 = r4
        L45:
            boolean r6 = r1.needJumpToStart     // Catch: java.lang.Throwable -> L307
            if (r6 != 0) goto L4e
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r6 = r1.statusHandler     // Catch: java.lang.Throwable -> L307
            r6.onStart()     // Catch: java.lang.Throwable -> L307
        L4e:
            r1.needJumpToStart = r5     // Catch: java.lang.Throwable -> L307
            boolean r6 = r17.checkIsStoppedByUser()     // Catch: java.lang.Throwable -> L307
            if (r6 == 0) goto L5a
            r17.endDownloadRunnable()
            return
        L5a:
            java.lang.String r6 = r1.existTargetFileName     // Catch: java.lang.Throwable -> L307
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L307
            if (r6 != 0) goto L7f
            if (r0 == 0) goto L7f
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L307
            boolean r0 = r0.isExpiredRedownload()     // Catch: java.lang.Throwable -> L307
            if (r0 == 0) goto L74
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L307
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.cacheExpired(r0)     // Catch: java.lang.Throwable -> L307
            r1.needCheckIfModified = r0     // Catch: java.lang.Throwable -> L307
        L74:
            boolean r0 = r1.needCheckIfModified     // Catch: java.lang.Throwable -> L307
            if (r0 != 0) goto L7f
            r17.finishWithFileExist()     // Catch: java.lang.Throwable -> L307
            r17.endDownloadRunnable()
            return
        L7f:
            boolean r0 = r17.checkIsStoppedByUser()     // Catch: java.lang.Throwable -> L307
            if (r0 == 0) goto L89
            r17.endDownloadRunnable()
            return
        L89:
            r17.checkSavePathValid()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            r17.checkHasAnotherSameTask()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            r17.checkWifiTaskValid()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r1.downloadCache     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            int r8 = r8.getId()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            java.util.List r0 = r0.getDownloadChunk(r8)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            r17.checkTaskCanResume()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            boolean r8 = r17.downloadSegments()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            if (r8 == 0) goto Lb5
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            java.lang.String r8 = "downloadSegments return"
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r8)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            r17.closeConnection()     // Catch: java.lang.Throwable -> L307
            r17.endDownloadRunnable()
            return
        Lb5:
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            java.lang.String r8 = r8.getConnectionUrl()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            boolean r9 = r17.checkIsStoppedByUser()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            if (r9 == 0) goto Lc8
            r17.closeConnection()     // Catch: java.lang.Throwable -> L307
            r17.endDownloadRunnable()
            return
        Lc8:
            boolean r9 = r1.canResumeFromCache     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            if (r9 == 0) goto Ld3
            com.ss.android.socialbase.downloader.model.DownloadInfo r9 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            long r9 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getFirstOffset(r9)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            goto Ld5
        Ld3:
            r9 = 0
        Ld5:
            com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            com.ss.android.socialbase.downloader.model.DownloadChunk r11 = createFirstDownloadChunk(r11, r9)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            java.util.List r12 = r1.getExtraHeaders(r11)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            com.ss.android.socialbase.downloader.model.DownloadInfo r13 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            com.ss.android.socialbase.downloader.utils.DownloadUtils.addThrottleNetSpeed(r12, r13)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            com.ss.android.socialbase.downloader.model.DownloadInfo r13 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            com.ss.android.socialbase.downloader.utils.DownloadUtils.addTTNetProtectTimeout(r12, r13)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            com.ss.android.socialbase.downloader.model.DownloadInfo r13 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            r13.setPreconnectLevel(r5)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            long r13 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            r1.doFirstConnect(r8, r12, r9)     // Catch: java.lang.Throwable -> L1b3
            com.ss.android.socialbase.downloader.model.DownloadInfo r9 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            long r15 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            long r6 = r15 - r13
            r9.increaseAllConnectTime(r6)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            boolean r6 = r17.checkIsStoppedByUser()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            if (r6 == 0) goto L10d
            r17.closeConnection()     // Catch: java.lang.Throwable -> L307
            r17.endDownloadRunnable()
            return
        L10d:
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            long r6 = r6.getTotalBytes()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            r1.checkSpaceOverflow(r6)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            int r9 = r1.calculateChunkCount(r6, r0)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            boolean r10 = r17.checkIsStoppedByUser()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            if (r10 == 0) goto L127
            r17.closeConnection()     // Catch: java.lang.Throwable -> L307
            r17.endDownloadRunnable()
            return
        L127:
            if (r9 <= 0) goto L1a9
            if (r9 != r4) goto L12d
            r10 = r4
            goto L12e
        L12d:
            r10 = r5
        L12e:
            r1.isSingleChunk = r10     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            if (r10 == 0) goto L174
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.firstGetConnection     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            if (r0 != 0) goto L154
            long r13 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L148
            r1.createFirstGetConnection(r8, r12)     // Catch: java.lang.Throwable -> L148
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            long r6 = r6 - r13
            r0.increaseAllConnectTime(r6)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            goto L154
        L148:
            r0 = move-exception
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            long r7 = r7 - r13
            r6.increaseAllConnectTime(r7)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            throw r0     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
        L154:
            boolean r0 = r17.checkIsStoppedByUser()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            if (r0 == 0) goto L161
            r17.closeConnection()     // Catch: java.lang.Throwable -> L307
            r17.endDownloadRunnable()
            return
        L161:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            long r6 = r6 - r2
            r0.setFirstSpeedTime(r6)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            r17.resetRetainRetryTimes()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.firstGetConnection     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            r1.handleResponseWithSingleChunk(r11, r8, r0)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            goto L1a4
        L174:
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            boolean r8 = r8.isNeedReuseFirstConnection()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            if (r8 != 0) goto L17f
            r17.closeFirstConnection()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
        L17f:
            boolean r8 = r17.checkIsStoppedByUser()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            if (r8 == 0) goto L18c
            r17.closeConnection()     // Catch: java.lang.Throwable -> L307
            r17.endDownloadRunnable()
            return
        L18c:
            r17.resetRetainRetryTimes()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            long r10 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            long r10 = r10 - r2
            r8.setFirstSpeedTime(r10)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            boolean r8 = r1.canResumeFromCache     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            if (r8 == 0) goto L1a1
            r1.handleResponseWithMultiChunkFromResume(r9, r0)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            goto L1a4
        L1a1:
            r1.handleResponseMultiChunkFromBegin(r6, r9)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
        L1a4:
            r17.closeConnection()     // Catch: java.lang.Throwable -> L307
            goto L2fe
        L1a9:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            r6 = 1032(0x408, float:1.446E-42)
            java.lang.String r7 = "chunkCount is 0"
            r0.<init>(r6, r7)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            throw r0     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
        L1b3:
            r0 = move-exception
            r6 = r0
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            long r7 = r7 - r13
            r0.increaseAllConnectTime(r7)     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
            throw r6     // Catch: java.lang.Throwable -> L1c0 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L1e8 com.ss.android.socialbase.downloader.exception.BaseException -> L29b com.ss.android.socialbase.downloader.exception.DownloadFileExistException -> L2f9
        L1c0:
            r0 = move-exception
            java.lang.String r2 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L302
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L302
            r3.<init>()     // Catch: java.lang.Throwable -> L302
            java.lang.String r4 = "downloadInner: throwable =  "
            r3.append(r4)     // Catch: java.lang.Throwable -> L302
            r3.append(r0)     // Catch: java.lang.Throwable -> L302
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L302
            com.ss.android.socialbase.downloader.logger.Logger.w(r2, r3)     // Catch: java.lang.Throwable -> L302
            com.ss.android.socialbase.downloader.constants.RunStatus r2 = r1.runStatus     // Catch: java.lang.Throwable -> L302
            com.ss.android.socialbase.downloader.constants.RunStatus r3 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_PAUSE     // Catch: java.lang.Throwable -> L302
            if (r2 == r3) goto L1a4
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L302
            r3 = 1045(0x415, float:1.464E-42)
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L302
            r1.onError(r2)     // Catch: java.lang.Throwable -> L302
            goto L1a4
        L1e8:
            r0 = move-exception
            java.lang.String r6 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L302
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L302
            r7.<init>()     // Catch: java.lang.Throwable -> L302
            java.lang.String r8 = "downloadInner: retry throwable for "
            r7.append(r8)     // Catch: java.lang.Throwable -> L302
            java.lang.String r8 = r0.getErrorMsg()     // Catch: java.lang.Throwable -> L302
            r7.append(r8)     // Catch: java.lang.Throwable -> L302
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L302
            com.ss.android.socialbase.downloader.logger.Logger.w(r6, r7)     // Catch: java.lang.Throwable -> L302
            com.ss.android.socialbase.downloader.constants.RunStatus r6 = r1.runStatus     // Catch: java.lang.Throwable -> L302
            com.ss.android.socialbase.downloader.constants.RunStatus r7 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_PAUSE     // Catch: java.lang.Throwable -> L302
            if (r6 == r7) goto L1a4
            java.util.concurrent.atomic.AtomicInteger r6 = r1.retainRetryTimes     // Catch: java.lang.Throwable -> L302
            r7 = 5
            if (r6 == 0) goto L22b
            java.util.concurrent.atomic.AtomicInteger r6 = r1.retainRetryTimes     // Catch: java.lang.Throwable -> L302
            int r6 = r6.get()     // Catch: java.lang.Throwable -> L302
            if (r6 <= 0) goto L22b
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L302
            java.util.concurrent.atomic.AtomicInteger r6 = r1.retainRetryTimes     // Catch: java.lang.Throwable -> L302
            int r6 = r6.decrementAndGet()     // Catch: java.lang.Throwable -> L302
            r0.updateCurRetryTime(r6)     // Catch: java.lang.Throwable -> L302
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L302
            r0.setStatus(r7)     // Catch: java.lang.Throwable -> L302
        L226:
            r17.closeConnection()     // Catch: java.lang.Throwable -> L307
            goto L7f
        L22b:
            java.util.concurrent.atomic.AtomicInteger r6 = r1.retainRetryTimes     // Catch: java.lang.Throwable -> L302
            if (r6 == 0) goto L27a
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r1.downloadInfo     // Catch: java.lang.Throwable -> L302
            boolean r6 = r6.trySwitchToNextBackupUrl()     // Catch: java.lang.Throwable -> L302
            if (r6 == 0) goto L253
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L302
            r0.setStatus(r7)     // Catch: java.lang.Throwable -> L302
            java.util.concurrent.atomic.AtomicInteger r0 = r1.retainRetryTimes     // Catch: java.lang.Throwable -> L302
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r1.downloadInfo     // Catch: java.lang.Throwable -> L302
            int r6 = r6.getRetryCount()     // Catch: java.lang.Throwable -> L302
            r0.set(r6)     // Catch: java.lang.Throwable -> L302
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L302
            java.util.concurrent.atomic.AtomicInteger r6 = r1.retainRetryTimes     // Catch: java.lang.Throwable -> L302
            int r6 = r6.get()     // Catch: java.lang.Throwable -> L302
            r0.updateCurRetryTime(r6)     // Catch: java.lang.Throwable -> L302
            goto L226
        L253:
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L302
            r3 = 1018(0x3fa, float:1.427E-42)
            java.lang.String r6 = "retry for Throwable, but retry Time %s all used, last error is %s"
            r7 = 2
            java.lang.Object[] r7 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L302
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = r1.downloadInfo     // Catch: java.lang.Throwable -> L302
            int r8 = r8.getRetryCount()     // Catch: java.lang.Throwable -> L302
            java.lang.String r8 = java.lang.String.valueOf(r8)     // Catch: java.lang.Throwable -> L302
            r7[r5] = r8     // Catch: java.lang.Throwable -> L302
            java.lang.String r0 = r0.getErrorMsg()     // Catch: java.lang.Throwable -> L302
            r7[r4] = r0     // Catch: java.lang.Throwable -> L302
            java.lang.String r0 = java.lang.String.format(r6, r7)     // Catch: java.lang.Throwable -> L302
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L302
            r1.onError(r2)     // Catch: java.lang.Throwable -> L302
            goto L1a4
        L27a:
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L302
            r3 = 1043(0x413, float:1.462E-42)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L302
            r4.<init>()     // Catch: java.lang.Throwable -> L302
            java.lang.String r5 = "retry for Throwable, but retain retry time is NULL, last error is"
            r4.append(r5)     // Catch: java.lang.Throwable -> L302
            java.lang.String r0 = r0.getErrorMsg()     // Catch: java.lang.Throwable -> L302
            r4.append(r0)     // Catch: java.lang.Throwable -> L302
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L302
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L302
            r1.onError(r2)     // Catch: java.lang.Throwable -> L302
            goto L1a4
        L29b:
            r0 = move-exception
            java.lang.String r6 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L302
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L302
            r7.<init>()     // Catch: java.lang.Throwable -> L302
            java.lang.String r8 = "downloadInner: baseException = "
            r7.append(r8)     // Catch: java.lang.Throwable -> L302
            r7.append(r0)     // Catch: java.lang.Throwable -> L302
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L302
            com.ss.android.socialbase.downloader.logger.Logger.w(r6, r7)     // Catch: java.lang.Throwable -> L302
            com.ss.android.socialbase.downloader.constants.RunStatus r6 = r1.runStatus     // Catch: java.lang.Throwable -> L302
            com.ss.android.socialbase.downloader.constants.RunStatus r7 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_PAUSE     // Catch: java.lang.Throwable -> L302
            if (r6 == r7) goto L1a4
            int r6 = r0.getErrorCode()     // Catch: java.lang.Throwable -> L302
            r7 = 1025(0x401, float:1.436E-42)
            if (r6 == r7) goto L2ee
            int r6 = r0.getErrorCode()     // Catch: java.lang.Throwable -> L302
            r7 = 1009(0x3f1, float:1.414E-42)
            if (r6 != r7) goto L2c9
            goto L2ee
        L2c9:
            boolean r6 = r1.canRetry(r0)     // Catch: java.lang.Throwable -> L302
            if (r6 == 0) goto L2e9
            boolean r6 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isHttpDataDirtyError(r0)     // Catch: java.lang.Throwable -> L302
            if (r6 == 0) goto L2d8
            r17.clearCurrentDownloadData()     // Catch: java.lang.Throwable -> L302
        L2d8:
            r6 = 0
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r0 = r1.onRetry(r0, r6)     // Catch: java.lang.Throwable -> L302
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r6 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN     // Catch: java.lang.Throwable -> L302
            if (r0 != r6) goto L226
            r17.closeConnection()     // Catch: java.lang.Throwable -> L307
            r17.endDownloadRunnable()
            return
        L2e9:
            r1.onError(r0)     // Catch: java.lang.Throwable -> L302
            goto L1a4
        L2ee:
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_END_RIGHT_NOW     // Catch: java.lang.Throwable -> L302
            r1.runStatus = r0     // Catch: java.lang.Throwable -> L302
            r17.closeConnection()     // Catch: java.lang.Throwable -> L307
            r17.endDownloadRunnable()
            return
        L2f9:
            r17.finishWithFileExist()     // Catch: java.lang.Throwable -> L302
            goto L1a4
        L2fe:
            r17.endDownloadRunnable()
            return
        L302:
            r0 = move-exception
            r17.closeConnection()     // Catch: java.lang.Throwable -> L307
            throw r0     // Catch: java.lang.Throwable -> L307
        L307:
            r0 = move-exception
            r17.endDownloadRunnable()
            throw r0
    }

    private boolean downloadSegments() throws com.ss.android.socialbase.downloader.exception.BaseException, java.lang.InterruptedException {
            r9 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r9.downloadInfo
            boolean r0 = r0.isExpiredRedownload()
            r1 = 0
            if (r0 == 0) goto La
            return r1
        La:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r9.downloadInfo
            int r0 = r0.getChunkCount()
            r2 = 1
            if (r0 != r2) goto L8e
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r9.downloadInfo
            long r3 = r0.getThrottleNetSpeed()
            r5 = 0
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 <= 0) goto L20
            goto L8e
        L20:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r9.downloadInfo
            int r0 = r0.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            java.lang.String r3 = "segment_config"
            org.json.JSONObject r0 = r0.optJSONObject(r3)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r3 = r9.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r9.downloadInfo
            int r4 = r4.getId()
            java.util.List r3 = r3.getSegments(r4)
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r9.downloadInfo
            long r7 = r4.getCurBytes()
            int r4 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r4 <= 0) goto L58
            if (r3 == 0) goto L57
            boolean r4 = r3.isEmpty()
            if (r4 == 0) goto L4f
            goto L57
        L4f:
            if (r0 != 0) goto L58
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            goto L58
        L57:
            return r1
        L58:
            if (r0 != 0) goto L5b
            return r1
        L5b:
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r0 = com.ss.android.socialbase.downloader.segment.SegmentStrategy.from(r0)
            com.ss.android.socialbase.downloader.segment.SegmentDispatcher r1 = new com.ss.android.socialbase.downloader.segment.SegmentDispatcher
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r9.downloadInfo
            r1.<init>(r4, r0, r9)
            r9.segmentDispatcher = r1
            boolean r0 = r9.checkIsStoppedByUser()
            if (r0 == 0) goto L87
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.String r1 = "downloadSegments: is stopped by user"
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r1)
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r9.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_CANCELED
            if (r0 != r1) goto L81
            com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0 = r9.segmentDispatcher
            r0.cancel()
            goto L86
        L81:
            com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0 = r9.segmentDispatcher
            r0.pause()
        L86:
            return r2
        L87:
            com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0 = r9.segmentDispatcher
            boolean r0 = r0.downloadSegments(r3)
            return r0
        L8e:
            return r1
    }

    private void endDownloadRunnable() {
            r7 = this;
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "endDownloadRunnable::runStatus="
            r1.append(r2)
            com.ss.android.socialbase.downloader.constants.RunStatus r2 = r7.runStatus
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r7.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_PAUSE
            r2 = 0
            r3 = 1
            if (r0 == r1) goto L28
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r7.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_CANCELED
            if (r0 == r1) goto L28
            r0 = r3
            goto L29
        L28:
            r0 = r2
        L29:
            boolean r1 = r7.doTaskStatusHandle()     // Catch: java.lang.Exception -> L2f
            r4 = r2
            goto L4a
        L2f:
            r1 = move-exception
            boolean r4 = r1 instanceof com.ss.android.socialbase.downloader.exception.BaseException
            if (r4 == 0) goto L3c
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r4 = r7.statusHandler
            com.ss.android.socialbase.downloader.exception.BaseException r1 = (com.ss.android.socialbase.downloader.exception.BaseException) r1
            r4.onError(r1)
            goto L48
        L3c:
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r4 = r7.statusHandler
            com.ss.android.socialbase.downloader.exception.BaseException r5 = new com.ss.android.socialbase.downloader.exception.BaseException
            r6 = 1046(0x416, float:1.466E-42)
            r5.<init>(r6, r1)
            r4.onError(r5)
        L48:
            r1 = r3
            r4 = r1
        L4a:
            if (r1 != 0) goto L59
            if (r4 == 0) goto L4f
            goto L59
        L4f:
            r7.needJumpToStart = r3
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.String r1 = "jump to restart"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            goto L8e
        L59:
            java.util.concurrent.atomic.AtomicBoolean r1 = r7.isAlive
            r1.set(r2)
            if (r0 == 0) goto L8e
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadEngine()     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L8e
            r0.removeDownloadRunnable(r7)     // Catch: java.lang.Throwable -> L6a
            goto L8e
        L6a:
            r0 = move-exception
            r0.printStackTrace()
            com.ss.android.socialbase.downloader.model.DownloadTask r1 = r7.downloadTask
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r1 = r1.getMonitorDepend()
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r7.downloadInfo
            com.ss.android.socialbase.downloader.exception.BaseException r4 = new com.ss.android.socialbase.downloader.exception.BaseException
            r5 = 1014(0x3f6, float:1.421E-42)
            java.lang.String r6 = "removeDownloadRunnable"
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getErrorMsgWithTagPrefix(r0, r6)
            r4.<init>(r5, r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r7.downloadInfo
            if (r0 == 0) goto L8b
            int r2 = r0.getStatus()
        L8b:
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSendWithTaskMonitor(r1, r3, r4, r2)
        L8e:
            return
    }

    private void finishWithFileExist() {
            r3 = this;
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.String r1 = "finishWithFileExist"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r1 = "fix_end_for_file_exist_error"
            r2 = 1
            boolean r0 = r0.optBugFix(r1, r2)
            if (r0 == 0) goto L2c
            java.lang.String r0 = r3.existTargetFileName
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r3.downloadInfo
            java.lang.String r1 = r1.getName()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L27
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_END_RIGHT_NOW
            r3.runStatus = r0
            goto L43
        L27:
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_END_FOR_FILE_EXIST
            r3.runStatus = r0
            goto L43
        L2c:
            java.lang.String r0 = r3.existTargetFileName
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r3.downloadInfo
            java.lang.String r1 = r1.getTargetFilePath()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3f
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_END_RIGHT_NOW
            r3.runStatus = r0
            goto L43
        L3f:
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_END_FOR_FILE_EXIST
            r3.runStatus = r0
        L43:
            return
    }

    private long getDelayTime() {
            r3 = this;
            com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator r0 = r3.retryDelayTimeCalculator
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r3.downloadInfo
            int r1 = r1.getCurRetryTimeInTotal()
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r3.downloadInfo
            int r2 = r2.getTotalRetryCount()
            long r0 = r0.calculateRetryDelayTime(r1, r2)
            return r0
    }

    private java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> getExtraHeaders(com.ss.android.socialbase.downloader.model.DownloadChunk r4) {
            r3 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo
            java.util.List r0 = r0.getExtraHeaders()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r3.downloadInfo
            java.lang.String r1 = r1.geteTag()
            java.util.List r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.addRangeHeader(r0, r1, r4)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo
            boolean r0 = r0.isExpiredRedownload()
            if (r0 == 0) goto L5a
            boolean r0 = r3.needCheckIfModified
            if (r0 == 0) goto L5a
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo
            java.lang.String r0 = r0.getLastModified()
            if (r0 == 0) goto L5a
            com.ss.android.socialbase.downloader.model.HttpHeader r0 = new com.ss.android.socialbase.downloader.model.HttpHeader
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r3.downloadInfo
            java.lang.String r1 = r1.getLastModified()
            java.lang.String r2 = "if-modified-since"
            r0.<init>(r2, r1)
            r4.add(r0)
            com.ss.android.socialbase.downloader.model.HttpHeader r0 = new com.ss.android.socialbase.downloader.model.HttpHeader
            java.lang.String r1 = "download-tc21-1-15"
            r0.<init>(r1, r1)
            r4.add(r0)
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "dcache::add head IF_MODIFIED_SINCE="
            r1.append(r2)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r3.downloadInfo
            java.lang.String r2 = r2.getLastModified()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
        L5a:
            return r4
    }

    private com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator getRetryDelayTimeCalculator(com.ss.android.socialbase.downloader.model.DownloadTask r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator r0 = r2.getRetryDelayTimeCalculator()
            if (r0 == 0) goto L7
            return r0
        L7:
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r2.getDownloadInfo()
            if (r2 == 0) goto L1d
            java.lang.String r2 = r2.getRetryDelayTimeArray()
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1d
            com.ss.android.socialbase.downloader.impls.RetryDelayTimeParamCalculator r0 = new com.ss.android.socialbase.downloader.impls.RetryDelayTimeParamCalculator
            r0.<init>(r2)
            return r0
        L1d:
            com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getRetryDelayTimeCalculator()
            return r2
    }

    private com.ss.android.socialbase.downloader.model.DownloadChunk getUnCompletedSubChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r9, int r10) {
            r8 = this;
            boolean r0 = r9.isHostChunk()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            r0 = 1
            long r2 = r9.getRetainLength(r0)
            java.lang.String r4 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "reuseChunk retainLen:"
            r5.append(r6)
            r5.append(r2)
            java.lang.String r6 = " chunkIndex:"
            r5.append(r6)
            r5.append(r10)
            java.lang.String r5 = r5.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r4, r5)
            r4 = 0
            boolean r5 = r9.hasChunkDivided()
            if (r5 != 0) goto L68
            long r5 = com.ss.android.socialbase.downloader.constants.DownloadConstants.MIN_CHUNK_REUSE_SIZE
            int r2 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r2 <= 0) goto L68
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r8.downloadInfo
            boolean r2 = r2.isNeedReuseChunkRunnable()
            if (r2 == 0) goto L68
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r8.downloadInfo
            int r2 = r2.getChunkCount()
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r8.downloadInfo
            long r3 = r3.getTotalBytes()
            java.util.List r2 = r9.divideChunkForReuse(r2, r3)
            if (r2 == 0) goto L6e
            java.util.Iterator r2 = r2.iterator()
        L56:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L6e
            java.lang.Object r3 = r2.next()
            com.ss.android.socialbase.downloader.model.DownloadChunk r3 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r3
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r4 = r8.downloadCache
            r4.addSubDownloadChunk(r3)
            goto L56
        L68:
            boolean r2 = r9.hasChunkDivided()
            if (r2 == 0) goto L6f
        L6e:
            r4 = r0
        L6f:
            if (r4 == 0) goto L136
            boolean r2 = r9.hasChunkDivided()
            if (r2 == 0) goto L136
            r2 = r0
        L78:
            java.util.List r3 = r9.getSubChunkList()
            int r3 = r3.size()
            if (r2 >= r3) goto Le3
            java.util.List r3 = r9.getSubChunkList()
            java.lang.Object r3 = r3.get(r2)
            com.ss.android.socialbase.downloader.model.DownloadChunk r3 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r3
            if (r3 == 0) goto Le0
            java.lang.String r4 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "check can checkUnCompletedChunk -- chunkIndex:"
            r5.append(r6)
            int r6 = r3.getChunkIndex()
            r5.append(r6)
            java.lang.String r6 = " currentOffset:"
            r5.append(r6)
            long r6 = r3.getCurrentOffset()
            r5.append(r6)
            java.lang.String r6 = "  startOffset:"
            r5.append(r6)
            long r6 = r3.getStartOffset()
            r5.append(r6)
            java.lang.String r6 = " contentLen:"
            r5.append(r6)
            long r6 = r3.getContentLength()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r4, r5)
            int r4 = r3.getChunkIndex()
            if (r4 < 0) goto Lde
            boolean r4 = r3.hasNoBytesDownload()
            if (r4 != 0) goto Le0
            boolean r4 = r3.isDownloading()
            if (r4 != 0) goto Le0
        Lde:
            r1 = r3
            goto Le3
        Le0:
            int r2 = r2 + 1
            goto L78
        Le3:
            if (r1 == 0) goto L136
            long r2 = r9.getCurrentOffset()
            java.lang.String r4 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "unComplete chunk "
            r5.append(r6)
            int r9 = r9.getChunkIndex()
            r5.append(r9)
            java.lang.String r9 = " curOffset:"
            r5.append(r9)
            r5.append(r2)
            java.lang.String r9 = " reuseChunk chunkIndex:"
            r5.append(r9)
            r5.append(r10)
            java.lang.String r9 = " for subChunk:"
            r5.append(r9)
            int r9 = r1.getChunkIndex()
            r5.append(r9)
            java.lang.String r9 = r5.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r4, r9)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r9 = r8.downloadCache
            int r2 = r1.getId()
            int r3 = r1.getChunkIndex()
            int r4 = r1.getHostChunkIndex()
            r9.updateSubDownloadChunkIndex(r2, r3, r4, r10)
            r1.setChunkIndex(r10)
            r1.setDownloading(r0)
        L136:
            return r1
    }

    private void handleDiskSpaceCallback() {
            r2 = this;
            boolean r0 = r2.checkIsStoppedByUser()
            if (r0 == 0) goto L7
            return
        L7:
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadEngine()
            if (r0 == 0) goto L16
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r2.downloadInfo
            int r1 = r1.getId()
            r0.restartAsyncWaitingTask(r1)
        L16:
            return
    }

    private void handleFirstResponse() throws com.ss.android.socialbase.downloader.exception.BaseException {
            r2 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = r2.firstHttpResponseHandler
            if (r0 == 0) goto L2d
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r2.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_CANCELED
            if (r0 != r1) goto L16
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            r1 = -4
            r0.setStatus(r1)
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = r2.firstHttpResponseHandler
            r0.cancel()
            goto L2d
        L16:
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r2.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_PAUSE
            if (r0 != r1) goto L28
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            r1 = -2
            r0.setStatus(r1)
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = r2.firstHttpResponseHandler
            r0.pause()
            goto L2d
        L28:
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = r2.firstHttpResponseHandler
            r0.handleResponse()
        L2d:
            return
    }

    private void handleForbiddenCallback(java.util.List<java.lang.String> r4) {
            r3 = this;
            if (r4 == 0) goto L26
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto L9
            goto L26
        L9:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = r3.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r2 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_WAITING_ASYNC_HANDLER
            if (r1 != r2) goto L13
            r1 = 1
            goto L14
        L13:
            r1 = 0
        L14:
            r0.setForbiddenBackupUrls(r4, r1)
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadEngine()
            if (r4 == 0) goto L26
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo
            int r0 = r0.getId()
            r4.restartAsyncWaitingTask(r0)
        L26:
            return
    }

    private void handleResponseCodeError(java.lang.String r3, java.lang.String r4) throws com.ss.android.socialbase.downloader.exception.RetryThrowable {
            r2 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r2.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r2.downloadInfo
            int r1 = r1.getId()
            r0.removeAllDownloadChunk(r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r2.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r2.downloadInfo
            int r1 = r1.getId()
            r0.removeSegments(r1)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            com.ss.android.socialbase.downloader.utils.DownloadUtils.deleteAllDownloadFiles(r0)
            r0 = 0
            r2.canResumeFromCache = r0
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            r0.resetDataForEtagEndure(r3)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r3 = r2.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            r3.updateDownloadInfo(r0)
            com.ss.android.socialbase.downloader.exception.RetryThrowable r3 = new com.ss.android.socialbase.downloader.exception.RetryThrowable
            r3.<init>(r4)
            throw r3
    }

    private void handleResponseMultiChunkFromBegin(long r18, int r20) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r17 = this;
            r0 = r17
            r1 = r18
            r3 = r20
            long r4 = (long) r3
            long r4 = r1 / r4
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r0.downloadInfo
            int r6 = r6.getId()
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            r8 = 0
            r10 = 0
            r11 = r8
        L18:
            if (r10 >= r3) goto L4e
            int r13 = r3 + (-1)
            if (r10 != r13) goto L20
            r13 = r8
            goto L25
        L20:
            long r13 = r11 + r4
            r15 = 1
            long r13 = r13 - r15
        L25:
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r15 = new com.ss.android.socialbase.downloader.model.DownloadChunk$Builder
            r15.<init>(r6)
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r15 = r15.chunkIndex(r10)
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r15 = r15.startOffset(r11)
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r15 = r15.oldOffset(r11)
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r15 = r15.currentOffset(r11)
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r13 = r15.endOffset(r13)
            com.ss.android.socialbase.downloader.model.DownloadChunk r13 = r13.build()
            r7.add(r13)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r14 = r0.downloadCache
            r14.addDownloadChunk(r13)
            long r11 = r11 + r4
            int r10 = r10 + 1
            goto L18
        L4e:
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r0.downloadInfo
            r4.setChunkCount(r3)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r4 = r0.downloadCache
            r4.updateChunkCount(r6, r3)
            r0.handleResponseWithMultiChunk(r7, r1)
            return
    }

    private void handleResponseWithMultiChunk(java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r8, long r9) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r7 = this;
            java.util.Iterator r8 = r8.iterator()
        L4:
            boolean r0 = r8.hasNext()
            if (r0 == 0) goto L86
            java.lang.Object r0 = r8.next()
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r0
            if (r0 != 0) goto L13
            goto L4
        L13:
            long r1 = r0.getEndOffset()
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L24
            long r1 = r0.getCurrentOffset()
            long r1 = r9 - r1
            goto L30
        L24:
            long r1 = r0.getEndOffset()
            long r5 = r0.getCurrentOffset()
            long r1 = r1 - r5
            r5 = 1
            long r1 = r1 + r5
        L30:
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 > 0) goto L35
            goto L4
        L35:
            r0.setContentLength(r1)
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r7.downloadInfo
            boolean r1 = r1.isNeedReuseFirstConnection()
            if (r1 == 0) goto L78
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r1 = r7.firstGetConnection
            if (r1 == 0) goto L78
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r7.downloadInfo
            boolean r1 = r1.isHeadConnectionAvailable()
            if (r1 == 0) goto L50
            boolean r1 = r7.firstHeadConnectionFailed
            if (r1 == 0) goto L78
        L50:
            int r1 = r0.getChunkIndex()
            if (r1 != 0) goto L65
            com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable r1 = new com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r7.downloadTask
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r3 = r7.firstGetConnection
            r1.<init>(r0, r2, r3, r7)
            java.util.ArrayList<com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable> r0 = r7.downloadChunkRunnableList
            r0.add(r1)
            goto L4
        L65:
            int r1 = r0.getChunkIndex()
            if (r1 <= 0) goto L4
            com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable r1 = new com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r7.downloadTask
            r1.<init>(r0, r2, r7)
            java.util.ArrayList<com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable> r0 = r7.downloadChunkRunnableList
            r0.add(r1)
            goto L4
        L78:
            com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable r1 = new com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r7.downloadTask
            r1.<init>(r0, r2, r7)
            java.util.ArrayList<com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable> r0 = r7.downloadChunkRunnableList
            r0.add(r1)
            goto L4
        L86:
            r8 = 64
            boolean r8 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r8)
            if (r8 == 0) goto L108
            java.util.ArrayList r8 = new java.util.ArrayList
            java.util.ArrayList<com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable> r9 = r7.downloadChunkRunnableList
            int r9 = r9.size()
            r8.<init>(r9)
            java.util.ArrayList<com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable> r9 = r7.downloadChunkRunnableList
            java.util.Iterator r9 = r9.iterator()
        L9f:
            boolean r10 = r9.hasNext()
            if (r10 == 0) goto Lc3
            java.lang.Object r10 = r9.next()
            com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable r10 = (com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable) r10
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r7.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_CANCELED
            if (r0 != r1) goto Lb5
            r10.cancel()
            goto L9f
        Lb5:
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r7.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_PAUSE
            if (r0 != r1) goto Lbf
            r10.pause()
            goto L9f
        Lbf:
            r8.add(r10)
            goto L9f
        Lc3:
            r9 = 0
            java.lang.Object r9 = r8.remove(r9)
            java.lang.Runnable r9 = (java.lang.Runnable) r9
            java.util.List r8 = com.ss.android.socialbase.downloader.impls.DefaultDownloadEngine.executeFutureTasks(r8)     // Catch: java.lang.Throwable -> L14b
        Lce:
            if (r9 == 0) goto Le4
            boolean r10 = r7.checkIsStoppedByUser()     // Catch: java.lang.Throwable -> L14b
            if (r10 == 0) goto Ld7
            return
        Ld7:
            r9.run()     // Catch: java.lang.Throwable -> Ldb
            goto Ldf
        Ldb:
            r9 = move-exception
            r9.printStackTrace()     // Catch: java.lang.Throwable -> L14b
        Ldf:
            java.lang.Runnable r9 = com.ss.android.socialbase.downloader.impls.DefaultDownloadEngine.getUnstartedTask(r8)     // Catch: java.lang.Throwable -> L14b
            goto Lce
        Le4:
            if (r8 == 0) goto L14b
            boolean r9 = r8.isEmpty()     // Catch: java.lang.Throwable -> L14b
            if (r9 != 0) goto L14b
            java.util.Iterator r8 = r8.iterator()     // Catch: java.lang.Throwable -> L14b
        Lf0:
            boolean r9 = r8.hasNext()     // Catch: java.lang.Throwable -> L14b
            if (r9 == 0) goto L14b
            java.lang.Object r9 = r8.next()     // Catch: java.lang.Throwable -> L14b
            java.util.concurrent.Future r9 = (java.util.concurrent.Future) r9     // Catch: java.lang.Throwable -> L14b
            if (r9 == 0) goto Lf0
            boolean r10 = r9.isDone()     // Catch: java.lang.Throwable -> L14b
            if (r10 != 0) goto Lf0
            r9.get()     // Catch: java.lang.Throwable -> Lf0
            goto Lf0
        L108:
            java.util.ArrayList r8 = new java.util.ArrayList
            java.util.ArrayList<com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable> r9 = r7.downloadChunkRunnableList
            int r9 = r9.size()
            r8.<init>(r9)
            java.util.ArrayList<com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable> r9 = r7.downloadChunkRunnableList
            java.util.Iterator r9 = r9.iterator()
        L119:
            boolean r10 = r9.hasNext()
            if (r10 == 0) goto L141
            java.lang.Object r10 = r9.next()
            com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable r10 = (com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable) r10
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r7.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_CANCELED
            if (r0 != r1) goto L12f
            r10.cancel()
            goto L119
        L12f:
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r7.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_PAUSE
            if (r0 != r1) goto L139
            r10.pause()
            goto L119
        L139:
            java.util.concurrent.Callable r10 = java.util.concurrent.Executors.callable(r10)
            r8.add(r10)
            goto L119
        L141:
            boolean r9 = r7.checkIsStoppedByUser()
            if (r9 == 0) goto L148
            return
        L148:
            com.ss.android.socialbase.downloader.impls.DefaultDownloadEngine.invokeFutureTasks(r8)     // Catch: java.lang.InterruptedException -> L14c
        L14b:
            return
        L14c:
            r8 = move-exception
            com.ss.android.socialbase.downloader.exception.BaseException r9 = new com.ss.android.socialbase.downloader.exception.BaseException
            r10 = 1020(0x3fc, float:1.43E-42)
            r9.<init>(r10, r8)
            throw r9
    }

    private void handleResponseWithMultiChunkFromResume(int r3, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r4) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r2 = this;
            int r0 = r4.size()
            if (r0 != r3) goto L10
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r2.downloadInfo
            long r0 = r3.getTotalBytes()
            r2.handleResponseWithMultiChunk(r4, r0)
            return
        L10:
            com.ss.android.socialbase.downloader.exception.BaseException r3 = new com.ss.android.socialbase.downloader.exception.BaseException
            r4 = 1033(0x409, float:1.448E-42)
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>()
            r3.<init>(r4, r0)
            throw r3
    }

    private void handleResponseWithSingleChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r10, java.lang.String r11, com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r12) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r9 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r9.downloadInfo
            long r0 = r0.getTotalBytes()
            long r2 = r10.getCurrentOffset()
            long r0 = r0 - r2
            r10.setContentLength(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r9.downloadInfo
            r1 = 1
            r0.setChunkCount(r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r9.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r9.downloadInfo
            int r2 = r2.getId()
            r0.updateChunkCount(r2, r1)
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = new com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r9.downloadInfo
            r3 = r0
            r5 = r11
            r6 = r12
            r7 = r10
            r8 = r9
            r3.<init>(r4, r5, r6, r7, r8)
            r9.firstHttpResponseHandler = r0
            r9.handleFirstResponse()
            return
    }

    private boolean handleRetryTime(com.ss.android.socialbase.downloader.exception.BaseException r7) {
            r6 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r6.retainRetryTimes
            r1 = 1
            if (r0 == 0) goto Lb7
            int r0 = r0.get()
            r2 = 0
            if (r0 <= 0) goto L17
            if (r7 == 0) goto L72
            int r0 = r7.getErrorCode()
            r3 = 1070(0x42e, float:1.5E-42)
            if (r0 == r3) goto L17
            goto L72
        L17:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r6.downloadInfo
            boolean r0 = r0.trySwitchToNextBackupUrl()
            if (r0 == 0) goto L36
            java.util.concurrent.atomic.AtomicInteger r7 = r6.retainRetryTimes
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r6.downloadInfo
            int r0 = r0.getBackUpUrlRetryCount()
            r7.set(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r6.downloadInfo
            java.util.concurrent.atomic.AtomicInteger r0 = r6.retainRetryTimes
            int r0 = r0.get()
            r7.updateCurRetryTime(r0)
            goto L71
        L36:
            if (r7 == 0) goto L86
            int r0 = r7.getErrorCode()
            r3 = 1011(0x3f3, float:1.417E-42)
            if (r0 == r3) goto L4e
            java.lang.Throwable r0 = r7.getCause()
            if (r0 == 0) goto L86
            java.lang.Throwable r0 = r7.getCause()
            boolean r0 = r0 instanceof javax.net.ssl.SSLHandshakeException
            if (r0 == 0) goto L86
        L4e:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r6.downloadInfo
            boolean r0 = r0.canReplaceHttpForRetry()
            if (r0 == 0) goto L86
            java.util.concurrent.atomic.AtomicInteger r7 = r6.retainRetryTimes
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r6.downloadInfo
            int r0 = r0.getRetryCount()
            r7.set(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r6.downloadInfo
            java.util.concurrent.atomic.AtomicInteger r0 = r6.retainRetryTimes
            int r0 = r0.get()
            r7.updateCurRetryTime(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r6.downloadInfo
            r7.setHttpsToHttpRetryUsed(r1)
        L71:
            r1 = r2
        L72:
            com.ss.android.socialbase.downloader.constants.RunStatus r7 = r6.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_RETRY_DELAY
            if (r7 == r0) goto L85
            if (r1 == 0) goto L85
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r6.downloadInfo
            java.util.concurrent.atomic.AtomicInteger r0 = r6.retainRetryTimes
            int r0 = r0.decrementAndGet()
            r7.updateCurRetryTime(r0)
        L85:
            return r2
        L86:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            int r3 = r7.getErrorCode()
            r4 = 3
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.util.concurrent.atomic.AtomicInteger r5 = r6.retainRetryTimes
            java.lang.String r5 = java.lang.String.valueOf(r5)
            r4[r2] = r5
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r6.downloadInfo
            int r2 = r2.getRetryCount()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r4[r1] = r2
            r2 = 2
            java.lang.String r7 = r7.getErrorMessage()
            r4[r2] = r7
            java.lang.String r7 = "retry for exception, but current retry time : %s , retry Time %s all used, last error is %s"
            java.lang.String r7 = java.lang.String.format(r7, r4)
            r0.<init>(r3, r7)
            r6.onError(r0)
            return r1
        Lb7:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            r2 = 1043(0x413, float:1.462E-42)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "retry for exception, but retain retry time is null, last error is :"
            r3.append(r4)
            java.lang.String r7 = r7.getErrorMessage()
            r3.append(r7)
            java.lang.String r7 = r3.toString()
            r0.<init>(r2, r7)
            r6.onError(r0)
            return r1
    }

    private boolean isAllChunkDownloadComplete() {
            r7 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r7.downloadInfo
            int r0 = r0.getChunkCount()
            r1 = 0
            r2 = 1
            if (r0 > r2) goto L28
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r7.downloadInfo
            long r3 = r0.getCurBytes()
            r5 = 0
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 <= 0) goto L27
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r7.downloadInfo
            long r3 = r0.getCurBytes()
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r7.downloadInfo
            long r5 = r0.getTotalBytes()
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 != 0) goto L27
            return r2
        L27:
            return r1
        L28:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r7.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r7.downloadInfo
            int r3 = r3.getId()
            java.util.List r0 = r0.getDownloadChunk(r3)
            if (r0 == 0) goto L57
            int r3 = r0.size()
            if (r3 > r2) goto L3d
            goto L57
        L3d:
            java.util.Iterator r0 = r0.iterator()
        L41:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L56
            java.lang.Object r3 = r0.next()
            com.ss.android.socialbase.downloader.model.DownloadChunk r3 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r3
            if (r3 == 0) goto L55
            boolean r3 = r3.hasNoBytesDownload()
            if (r3 != 0) goto L41
        L55:
            return r1
        L56:
            return r2
        L57:
            return r1
    }

    private boolean isMultiChunkDownloadAvailable() {
            r3 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo
            r1 = 0
            if (r0 == 0) goto L2a
            boolean r0 = r0.isExpiredRedownload()
            if (r0 != 0) goto L2a
            boolean r0 = r3.canResumeFromCache
            r2 = 1
            if (r0 == 0) goto L18
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo
            int r0 = r0.getChunkCount()
            if (r0 <= r2) goto L2a
        L18:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo
            boolean r0 = r0.isChunkDowngradeRetryUsed()
            if (r0 == 0) goto L21
            goto L2a
        L21:
            boolean r0 = r3.acceptPartial
            if (r0 == 0) goto L2a
            boolean r0 = r3.isChunked
            if (r0 != 0) goto L2a
            r1 = r2
        L2a:
            return r1
    }

    private boolean isResponseCodeError(int r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            r0 = 1
            r1 = 412(0x19c, float:5.77E-43)
            if (r4 != r1) goto L6
            return r0
        L6:
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L21
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto L21
            boolean r5 = r5.equals(r6)
            if (r5 != 0) goto L21
            boolean r5 = r3.isResponseFromBegin
            if (r5 != 0) goto L20
            boolean r5 = r3.acceptPartial
            if (r5 == 0) goto L21
        L20:
            return r0
        L21:
            r5 = 201(0xc9, float:2.82E-43)
            if (r4 == r5) goto L29
            r5 = 416(0x1a0, float:5.83E-43)
            if (r4 != r5) goto L36
        L29:
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r3.downloadInfo
            long r4 = r4.getCurBytes()
            r1 = 0
            int r4 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r4 <= 0) goto L36
            goto L37
        L36:
            r0 = 0
        L37:
            return r0
    }

    private boolean isStoppedStatus() {
            r2 = this;
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r2.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_CANCELED
            if (r0 == r1) goto Lf
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = r2.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_PAUSE
            if (r0 != r1) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    private void resetRetainRetryTimes() {
            r3 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r3.downloadInfo
            int r0 = r0.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            java.lang.String r1 = "reset_retain_retry_times"
            r2 = 0
            int r0 = r0.optInt(r1, r2)
            r1 = 1
            if (r0 != r1) goto L38
            int r0 = r3.resetRetainRetryTimesCount
            r2 = 3
            if (r0 >= r2) goto L38
            java.util.concurrent.atomic.AtomicInteger r0 = r3.retainRetryTimes
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r3.downloadInfo
            boolean r2 = r2.isBackUpUrlUsed()
            if (r2 == 0) goto L2a
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r3.downloadInfo
            int r2 = r2.getBackUpUrlRetryCount()
            goto L30
        L2a:
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r3.downloadInfo
            int r2 = r2.getRetryCount()
        L30:
            r0.set(r2)
            int r0 = r3.resetRetainRetryTimesCount
            int r0 = r0 + r1
            r3.resetRetainRetryTimesCount = r0
        L38:
            return
    }

    private void runInner() {
            r7 = this;
            r0 = 10
            android.os.Process.setThreadPriority(r0)
            r0 = 0
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r7.downloadInfo     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L1d
            long r2 = r7.prepareDownloadTime     // Catch: java.lang.Throwable -> L1d
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 <= 0) goto L1d
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r7.downloadInfo     // Catch: java.lang.Throwable -> L1d
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1d
            long r5 = r7.prepareDownloadTime     // Catch: java.lang.Throwable -> L1d
            long r3 = r3 - r5
            r2.increaseDownloadPrepareTime(r3)     // Catch: java.lang.Throwable -> L1d
        L1d:
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r7.downloadTask     // Catch: java.lang.Throwable -> L31
            com.ss.android.socialbase.downloader.depend.IDownloadInterceptor r2 = r2.getInterceptor()     // Catch: java.lang.Throwable -> L31
            if (r2 == 0) goto L35
            boolean r2 = r2.intercepte()     // Catch: java.lang.Throwable -> L31
            if (r2 == 0) goto L35
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = r7.statusHandler
            r0.onIntercept()
            return
        L31:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L11f
        L35:
            boolean r2 = r7.checkTaskStatusValid()
            if (r2 != 0) goto L5a
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r7.downloadTask
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r0 = r0.getMonitorDepend()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r7.downloadInfo
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException
            r3 = 1003(0x3eb, float:1.406E-42)
            java.lang.String r4 = "task status is invalid"
            r2.<init>(r3, r4)
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r7.downloadInfo
            if (r3 == 0) goto L55
            int r3 = r3.getStatus()
            goto L56
        L55:
            r3 = 0
        L56:
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSendWithTaskMonitor(r0, r1, r2, r3)
            return
        L5a:
            r7.downloadInner()
            boolean r2 = r7.needJumpToStart
            if (r2 != 0) goto L63
            goto L11e
        L63:
            int r2 = r7.bytesRetryCount
            if (r2 <= 0) goto L6e
            int r2 = r7.bytesRetryCount
            int r2 = r2 + (-1)
            r7.bytesRetryCount = r2
            goto L5a
        L6e:
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r7.downloadInfo
            long r2 = r2.getCurBytes()
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r7.downloadInfo
            long r4 = r4.getTotalBytes()
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto Lad
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r7.downloadInfo
            java.lang.String r1 = r1.getErrorBytesLog()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = r7.statusHandler
            com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException r1 = new com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException
            r2 = 1027(0x403, float:1.439E-42)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "current bytes is not equals to total bytes, bytes invalid retry status is : "
            r3.append(r4)
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r7.downloadInfo
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r4 = r4.getByteInvalidRetryStatus()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r1.<init>(r2, r3)
            r0.onError(r1)
            goto L11e
        Lad:
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r7.downloadInfo
            long r2 = r2.getCurBytes()
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 > 0) goto Le6
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r7.downloadInfo
            java.lang.String r1 = r1.getErrorBytesLog()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = r7.statusHandler
            com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException r1 = new com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException
            r2 = 1026(0x402, float:1.438E-42)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "curBytes is 0, bytes invalid retry status is : "
            r3.append(r4)
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r7.downloadInfo
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r4 = r4.getByteInvalidRetryStatus()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r1.<init>(r2, r3)
            r0.onError(r1)
            goto L11e
        Le6:
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r7.downloadInfo
            long r2 = r2.getTotalBytes()
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 > 0) goto L5a
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r7.downloadInfo
            java.lang.String r1 = r1.getErrorBytesLog()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = r7.statusHandler
            com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException r1 = new com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException
            r2 = 1044(0x414, float:1.463E-42)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "TotalBytes is 0, bytes invalid retry status is : "
            r3.append(r4)
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r7.downloadInfo
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r4 = r4.getByteInvalidRetryStatus()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r1.<init>(r2, r3)
            r0.onError(r1)
        L11e:
            return
        L11f:
            r0 = move-exception
            throw r0
    }

    private void startRetryDelayAlarm() {
            r1 = this;
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_NONE
            r1.runStatus = r0
            return
    }

    private void updateRetainRetryTimes() {
            r2 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            if (r0 != 0) goto L5
            return
        L5:
            int r0 = r0.getRetryCount()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r2.downloadInfo
            int r1 = r1.getCurRetryTime()
            int r0 = r0 - r1
            if (r0 >= 0) goto L13
            r0 = 0
        L13:
            java.util.concurrent.atomic.AtomicInteger r1 = r2.retainRetryTimes
            if (r1 != 0) goto L1f
            java.util.concurrent.atomic.AtomicInteger r1 = new java.util.concurrent.atomic.AtomicInteger
            r1.<init>(r0)
            r2.retainRetryTimes = r1
            goto L22
        L1f:
            r1.set(r0)
        L22:
            return
    }

    @Override
    public boolean canRetry(com.ss.android.socialbase.downloader.exception.BaseException r5) {
            r4 = this;
            com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0 = r4.segmentDispatcher
            r1 = 0
            if (r0 == 0) goto L1a
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isNetworkError(r5)
            if (r0 == 0) goto L1a
            java.util.concurrent.atomic.AtomicInteger r0 = r4.retainRetryTimes
            int r0 = r0.get()
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r4.downloadInfo
            int r2 = r2.getRetryCount()
            if (r0 >= r2) goto L1a
            return r1
        L1a:
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isResponseCodeError(r5)
            r2 = 1
            if (r0 == 0) goto L31
            boolean r5 = r4.isSingleChunk
            if (r5 == 0) goto L30
            boolean r5 = r4.isTriedFixRangeNotSatisfiable
            if (r5 != 0) goto L30
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r4.downloadInfo
            com.ss.android.socialbase.downloader.utils.DownloadUtils.deleteAllDownloadFiles(r5)
            r4.isTriedFixRangeNotSatisfiable = r2
        L30:
            return r2
        L31:
            java.util.concurrent.atomic.AtomicInteger r0 = r4.retainRetryTimes
            if (r0 == 0) goto L3b
            int r0 = r0.get()
            if (r0 > 0) goto L63
        L3b:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            boolean r0 = r0.hasNextBackupUrl()
            if (r0 != 0) goto L63
            if (r5 == 0) goto L68
            int r0 = r5.getErrorCode()
            r3 = 1011(0x3f3, float:1.417E-42)
            if (r0 == r3) goto L5b
            java.lang.Throwable r0 = r5.getCause()
            if (r0 == 0) goto L68
            java.lang.Throwable r0 = r5.getCause()
            boolean r0 = r0 instanceof javax.net.ssl.SSLHandshakeException
            if (r0 == 0) goto L68
        L5b:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            boolean r0 = r0.canReplaceHttpForRetry()
            if (r0 == 0) goto L68
        L63:
            boolean r5 = r5 instanceof com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException
            if (r5 != 0) goto L68
            r1 = r2
        L68:
            return r1
    }

    public void cancel() {
            r1 = this;
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_CANCELED
            r1.runStatus = r0
            com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0 = r1.segmentDispatcher
            if (r0 == 0) goto Ld
            com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0 = r1.segmentDispatcher
            r0.cancel()
        Ld:
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = r1.firstHttpResponseHandler
            if (r0 == 0) goto L16
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = r1.firstHttpResponseHandler
            r0.cancel()
        L16:
            com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0 = r1.segmentDispatcher
            if (r0 != 0) goto L28
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = r1.firstHttpResponseHandler
            if (r0 != 0) goto L28
            r1.closeConnection()
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_CANCELED
            r1.runStatus = r0
            r1.endDownloadRunnable()
        L28:
            r1.cancelAllChunkRunnable()
            return
    }

    @Override
    public void checkSpaceOverflow(long r24) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r23 = this;
            r1 = r23
            r2 = r24
            java.lang.String r0 = "MB"
            java.lang.String r4 = ", mustSetLength = "
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r1.downloadInfo
            java.lang.String r5 = r5.getTempPath()
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r1.downloadInfo
            java.lang.String r6 = r6.getTempName()
            boolean r7 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isChunkedTask(r24)
            if (r7 == 0) goto L1b
            return
        L1b:
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r1.downloadInfo
            r8 = -1
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r7 = com.ss.android.socialbase.downloader.utils.DownloadUtils.createOutputStream(r7, r5, r6, r8)
            r8 = 0
            java.io.File r10 = new java.io.File     // Catch: java.lang.Throwable -> L1e1
            r10.<init>(r5, r6)     // Catch: java.lang.Throwable -> L1e1
            long r10 = r10.length()     // Catch: java.lang.Throwable -> L1e1
            long r12 = r2 - r10
            long r5 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getAvailableSpaceBytes(r5)     // Catch: java.lang.Throwable -> L1e1
            com.ss.android.socialbase.downloader.model.DownloadInfo r14 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1e1
            int r14 = r14.getId()     // Catch: java.lang.Throwable -> L1e1
            com.ss.android.socialbase.downloader.setting.DownloadSetting r14 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r14)     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r15 = "space_fill_part_download"
            int r15 = r14.optInt(r15, r8)     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r8 = " 0"
            java.lang.String r16 = "="
            java.lang.String r17 = "<"
            java.lang.String r9 = "availableSpace "
            r18 = r4
            r19 = r5
            r4 = 0
            r6 = 1
            if (r15 != r6) goto L13b
            r1.curBytesNeedCheckSpaceOverFlow = r4     // Catch: java.lang.Throwable -> L1e1
            int r6 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r6 > 0) goto L67
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1e1
            long r12 = r6.getTotalBytes()     // Catch: java.lang.Throwable -> L1e1
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1e1
            long r21 = r6.getCurBytes()     // Catch: java.lang.Throwable -> L1e1
            long r12 = r12 - r21
        L67:
            int r6 = (r19 > r12 ? 1 : (r19 == r12 ? 0 : -1))
            if (r6 >= 0) goto L167
            java.lang.String r6 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L1e1
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1e1
            r15.<init>()     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r4 = "checkSpaceOverflow: contentLength = "
            r15.append(r4)     // Catch: java.lang.Throwable -> L1e1
            double r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.byteToMb(r24)     // Catch: java.lang.Throwable -> L1e1
            r15.append(r4)     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r4 = "MB, downloaded = "
            r15.append(r4)     // Catch: java.lang.Throwable -> L1e1
            double r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.byteToMb(r10)     // Catch: java.lang.Throwable -> L1e1
            r15.append(r4)     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r4 = "MB, required = "
            r15.append(r4)     // Catch: java.lang.Throwable -> L1e1
            double r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.byteToMb(r12)     // Catch: java.lang.Throwable -> L1e1
            r15.append(r4)     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r4 = "MB, available = "
            r15.append(r4)     // Catch: java.lang.Throwable -> L1e1
            double r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.byteToMb(r19)     // Catch: java.lang.Throwable -> L1e1
            r15.append(r4)     // Catch: java.lang.Throwable -> L1e1
            r15.append(r0)     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r4 = r15.toString()     // Catch: java.lang.Throwable -> L1e1
            com.ss.android.socialbase.downloader.logger.Logger.w(r6, r4)     // Catch: java.lang.Throwable -> L1e1
            r4 = 0
            int r6 = (r19 > r4 ? 1 : (r19 == r4 ? 0 : -1))
            if (r6 <= 0) goto L10d
            java.lang.String r4 = "space_fill_min_keep_mb"
            r5 = 100
            int r4 = r14.optInt(r4, r5)     // Catch: java.lang.Throwable -> L1e1
            if (r4 <= 0) goto L100
            long r5 = (long) r4     // Catch: java.lang.Throwable -> L1e1
            r8 = 1048576(0x100000, double:5.180654E-318)
            long r5 = r5 * r8
            long r5 = r19 - r5
            java.lang.String r8 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L1e1
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1e1
            r9.<init>()     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r14 = "checkSpaceOverflow: minKeep = "
            r9.append(r14)     // Catch: java.lang.Throwable -> L1e1
            r9.append(r4)     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r4 = "MB, canDownload = "
            r9.append(r4)     // Catch: java.lang.Throwable -> L1e1
            double r14 = com.ss.android.socialbase.downloader.utils.DownloadUtils.byteToMb(r5)     // Catch: java.lang.Throwable -> L1e1
            r9.append(r14)     // Catch: java.lang.Throwable -> L1e1
            r9.append(r0)     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r0 = r9.toString()     // Catch: java.lang.Throwable -> L1e1
            com.ss.android.socialbase.downloader.logger.Logger.w(r8, r0)     // Catch: java.lang.Throwable -> L1e1
            r8 = 0
            int r0 = (r5 > r8 ? 1 : (r5 == r8 ? 0 : -1))
            if (r0 <= 0) goto Lf8
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1e1
            long r8 = r0.getCurBytes()     // Catch: java.lang.Throwable -> L1e1
            long r8 = r8 + r5
            r1.curBytesNeedCheckSpaceOverFlow = r8     // Catch: java.lang.Throwable -> L1e1
            goto L103
        Lf8:
            com.ss.android.socialbase.downloader.exception.DownloadOutOfSpaceException r0 = new com.ss.android.socialbase.downloader.exception.DownloadOutOfSpaceException     // Catch: java.lang.Throwable -> L1e1
            r4 = r19
            r0.<init>(r4, r12)     // Catch: java.lang.Throwable -> L1e1
            throw r0     // Catch: java.lang.Throwable -> L1e1
        L100:
            r4 = r19
            r5 = r4
        L103:
            int r0 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r0 >= 0) goto L167
            long r5 = r5 + r10
            int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r0 <= 0) goto L168
            goto L167
        L10d:
            java.lang.String r0 = "download_when_space_negative"
            r4 = 0
            int r0 = r14.optInt(r0, r4)     // Catch: java.lang.Throwable -> L1e1
            r4 = 1
            if (r0 != r4) goto L11a
            r5 = r2
            r4 = 0
            goto L169
        L11a:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L1e1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1e1
            r2.<init>()     // Catch: java.lang.Throwable -> L1e1
            r2.append(r9)     // Catch: java.lang.Throwable -> L1e1
            if (r6 != 0) goto L129
            r3 = r16
            goto L12b
        L129:
            r3 = r17
        L12b:
            r2.append(r3)     // Catch: java.lang.Throwable -> L1e1
            r2.append(r8)     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1e1
            r3 = 1052(0x41c, float:1.474E-42)
            r0.<init>(r3, r2)     // Catch: java.lang.Throwable -> L1e1
            throw r0     // Catch: java.lang.Throwable -> L1e1
        L13b:
            r14 = r4
            r4 = r19
            int r0 = (r4 > r14 ? 1 : (r4 == r14 ? 0 : -1))
            if (r0 > 0) goto L163
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L1e1
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1e1
            r3.<init>()     // Catch: java.lang.Throwable -> L1e1
            r3.append(r9)     // Catch: java.lang.Throwable -> L1e1
            if (r0 != 0) goto L151
            r0 = r16
            goto L153
        L151:
            r0 = r17
        L153:
            r3.append(r0)     // Catch: java.lang.Throwable -> L1e1
            r3.append(r8)     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L1e1
            r3 = 1052(0x41c, float:1.474E-42)
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L1e1
            throw r2     // Catch: java.lang.Throwable -> L1e1
        L163:
            int r0 = (r4 > r12 ? 1 : (r4 == r12 ? 0 : -1))
            if (r0 < 0) goto L1db
        L167:
            r5 = r2
        L168:
            r4 = 1
        L169:
            r7.setLength(r2)     // Catch: java.lang.Throwable -> L16e
        L16c:
            r2 = 1
            goto L1cc
        L16e:
            r0 = move-exception
            r8 = r0
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L1e1
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1e1
            r9.<init>()     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r12 = "checkSpaceOverflow: setLength1 e = "
            r9.append(r12)     // Catch: java.lang.Throwable -> L1e1
            r9.append(r8)     // Catch: java.lang.Throwable -> L1e1
            r12 = r18
            r9.append(r12)     // Catch: java.lang.Throwable -> L1e1
            r9.append(r4)     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L1e1
            com.ss.android.socialbase.downloader.logger.Logger.e(r0, r9)     // Catch: java.lang.Throwable -> L1e1
            int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            r2 = 1040(0x410, float:1.457E-42)
            if (r0 >= 0) goto L1c9
            r13 = 0
            int r0 = (r5 > r13 ? 1 : (r5 == r13 ? 0 : -1))
            if (r0 <= 0) goto L1c9
            int r0 = (r5 > r10 ? 1 : (r5 == r10 ? 0 : -1))
            if (r0 <= 0) goto L1c9
            r7.setLength(r5)     // Catch: java.lang.Throwable -> L1a2
            goto L16c
        L1a2:
            r0 = move-exception
            r3 = r0
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L1e1
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1e1
            r5.<init>()     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r6 = "checkSpaceOverflow: setLength2 ex = "
            r5.append(r6)     // Catch: java.lang.Throwable -> L1e1
            r5.append(r3)     // Catch: java.lang.Throwable -> L1e1
            r5.append(r12)     // Catch: java.lang.Throwable -> L1e1
            r5.append(r4)     // Catch: java.lang.Throwable -> L1e1
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L1e1
            com.ss.android.socialbase.downloader.logger.Logger.e(r0, r5)     // Catch: java.lang.Throwable -> L1e1
            if (r4 != 0) goto L1c3
            goto L16c
        L1c3:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L1e1
            r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> L1e1
            throw r0     // Catch: java.lang.Throwable -> L1e1
        L1c9:
            if (r4 != 0) goto L1d5
            goto L16c
        L1cc:
            java.io.Closeable[] r0 = new java.io.Closeable[r2]
            r2 = 0
            r0[r2] = r7
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r0)
            return
        L1d5:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L1e1
            r0.<init>(r2, r8)     // Catch: java.lang.Throwable -> L1e1
            throw r0     // Catch: java.lang.Throwable -> L1e1
        L1db:
            com.ss.android.socialbase.downloader.exception.DownloadOutOfSpaceException r0 = new com.ss.android.socialbase.downloader.exception.DownloadOutOfSpaceException     // Catch: java.lang.Throwable -> L1e1
            r0.<init>(r4, r12)     // Catch: java.lang.Throwable -> L1e1
            throw r0     // Catch: java.lang.Throwable -> L1e1
        L1e1:
            r0 = move-exception
            r2 = 1
            java.io.Closeable[] r2 = new java.io.Closeable[r2]
            r3 = 0
            r2[r3] = r7
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r2)
            throw r0
    }

    public int getDownloadId() {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo
            if (r0 == 0) goto L9
            int r0 = r0.getId()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadTask getDownloadTask() {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r1.downloadTask
            return r0
    }

    public java.util.concurrent.Future getFuture() {
            r1 = this;
            java.util.concurrent.Future r0 = r1.mFuture
            return r0
    }

    @Override
    public synchronized com.ss.android.socialbase.downloader.model.DownloadChunk getUnCompletedSubChunk(int r5) {
            r4 = this;
            monitor-enter(r4)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo     // Catch: java.lang.Throwable -> L41
            int r0 = r0.getChunkCount()     // Catch: java.lang.Throwable -> L41
            r1 = 2
            r2 = 0
            if (r0 >= r1) goto Ld
            monitor-exit(r4)
            return r2
        Ld:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r4.downloadCache     // Catch: java.lang.Throwable -> L41
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.downloadInfo     // Catch: java.lang.Throwable -> L41
            int r1 = r1.getId()     // Catch: java.lang.Throwable -> L41
            java.util.List r0 = r0.getDownloadChunk(r1)     // Catch: java.lang.Throwable -> L41
            if (r0 == 0) goto L3f
            boolean r1 = r0.isEmpty()     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L22
            goto L3f
        L22:
            r1 = 0
        L23:
            int r3 = r0.size()     // Catch: java.lang.Throwable -> L41
            if (r1 >= r3) goto L3d
            java.lang.Object r3 = r0.get(r1)     // Catch: java.lang.Throwable -> L41
            com.ss.android.socialbase.downloader.model.DownloadChunk r3 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r3     // Catch: java.lang.Throwable -> L41
            if (r3 != 0) goto L32
            goto L3a
        L32:
            com.ss.android.socialbase.downloader.model.DownloadChunk r3 = r4.getUnCompletedSubChunk(r3, r5)     // Catch: java.lang.Throwable -> L41
            if (r3 == 0) goto L3a
            monitor-exit(r4)
            return r3
        L3a:
            int r1 = r1 + 1
            goto L23
        L3d:
            monitor-exit(r4)
            return r2
        L3f:
            monitor-exit(r4)
            return r2
        L41:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    @Override
    public void handleFirstConnection(java.lang.String r20, com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r21, long r22) throws com.ss.android.socialbase.downloader.exception.BaseException, com.ss.android.socialbase.downloader.exception.RetryThrowable {
            r19 = this;
            r1 = r19
            r2 = r21
            r3 = r22
            java.lang.String r5 = " before="
            java.lang.String r6 = " cur="
            java.lang.String r7 = "dcache=responseCode="
            if (r2 != 0) goto Lf
            return
        Lf:
            com.ss.android.socialbase.downloader.model.HttpResponse r8 = new com.ss.android.socialbase.downloader.model.HttpResponse     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r9 = r20
            r8.<init>(r9, r2)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            int r9 = r8.responseCode     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r10 = r8.getContentType()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r11 = r11.getMimeType()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            boolean r11 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r11 == 0) goto L33
            boolean r11 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r11 != 0) goto L33
            com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r11.setMimeType(r10)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
        L33:
            boolean r10 = r8.acceptPartial()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r1.acceptPartial = r10     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r11.setSupportPartial(r10)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            boolean r10 = r8.isResponseDataFromBegin()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r1.isResponseFromBegin = r10     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.model.DownloadInfo r10 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r10 = r10.geteTag()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r11 = r8.getEtag()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r12 = r8.getLastModified()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r13 = r8.getCacheControl()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r14 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r15.<init>()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r15.append(r7)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r15.append(r9)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r2 = " last_modified="
            r15.append(r2)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r15.append(r12)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r2 = " CACHE_CONTROL="
            r15.append(r2)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r15.append(r13)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r2 = " max-age="
            r15.append(r2)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r20 = r10
            r2 = r11
            long r10 = r8.getMaxAge()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r15.append(r10)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r10 = " isDeleteCacheIfCheckFailed="
            r15.append(r10)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.model.DownloadInfo r10 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            boolean r10 = r10.isDeleteCacheIfCheckFailed()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r15.append(r10)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r10 = r15.toString()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.logger.Logger.d(r14, r10)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r10 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r11.<init>()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r14 = "dcache=firstOffset="
            r11.append(r14)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r11.append(r3)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r11.append(r6)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r11.append(r12)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r11.append(r5)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.model.DownloadInfo r14 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r14 = r14.getLastModified()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r11.append(r14)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r11.append(r6)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            long r14 = r8.getTotalLength()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r11.append(r14)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r11.append(r5)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            long r5 = r5.getTotalBytes()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r11.append(r5)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r5 = r11.toString()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.logger.Logger.d(r10, r5)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            boolean r5 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r10 = 0
            if (r5 != 0) goto Lfc
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r5.setCacheControl(r13)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            long r5 = r8.getMaxAge()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            int r5 = (r5 > r10 ? 1 : (r5 == r10 ? 0 : -1))
            if (r5 <= 0) goto Lfc
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            long r13 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            long r15 = r8.getMaxAge()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r17 = 1000(0x3e8, double:4.94E-321)
            long r15 = r15 * r17
            long r13 = r13 + r15
            r5.setCacheExpiredTime(r13)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
        Lfc:
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            boolean r5 = r5.isExpiredRedownload()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r5 == 0) goto L165
            boolean r5 = r1.needCheckIfModified     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r5 == 0) goto L165
            java.lang.String r5 = r1.existTargetFileName     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r5 != 0) goto L165
            r5 = 304(0x130, float:4.26E-43)
            r13 = 0
            if (r9 != r5) goto L117
        L115:
            r13 = 1
            goto L139
        L117:
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r5 = r5.getLastModified()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r5 == 0) goto L12c
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            boolean r5 = r5.isDeleteCacheIfCheckFailed()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r5 == 0) goto L12c
            goto L139
        L12c:
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r5 = r5.getLastModified()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            boolean r5 = android.text.TextUtils.equals(r12, r5)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r5 == 0) goto L139
            goto L115
        L139:
            if (r13 != 0) goto L141
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.utils.DownloadUtils.deleteAllDownloadFiles(r5)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            goto L165
        L141:
            java.lang.String r2 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r3.<init>()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r3.append(r7)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r3.append(r9)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r4 = " lastModified not changed, use local file  "
            r3.append(r4)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r3.append(r12)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.logger.Logger.d(r2, r3)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.exception.DownloadFileExistException r2 = new com.ss.android.socialbase.downloader.exception.DownloadFileExistException     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r3 = r1.existTargetFileName     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            throw r2     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
        L165:
            int r5 = (r3 > r10 ? 1 : (r3 == r10 ? 0 : -1))
            java.lang.String r7 = ""
            if (r5 <= 0) goto L18b
            com.ss.android.socialbase.downloader.model.DownloadInfo r13 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            boolean r13 = r13.isExpiredRedownload()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r13 == 0) goto L18b
            com.ss.android.socialbase.downloader.model.DownloadInfo r13 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r13 = r13.getLastModified()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            boolean r13 = android.text.TextUtils.equals(r12, r13)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r13 != 0) goto L18b
            java.lang.String r13 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r14 = "dcache cdn file change, so retry"
            com.ss.android.socialbase.downloader.logger.Logger.d(r13, r14)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r13 = "cdn file changed"
            r1.handleResponseCodeError(r7, r13)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
        L18b:
            boolean r13 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r13 != 0) goto L196
            com.ss.android.socialbase.downloader.model.DownloadInfo r13 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r13.setLastModified(r12)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
        L196:
            r12 = r20
            boolean r13 = r1.isResponseCodeError(r9, r12, r2)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r13 == 0) goto L1bf
            r13 = r21
            boolean r14 = r13 instanceof com.ss.android.socialbase.downloader.network.IDownloadHttpConnection     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r14 == 0) goto L1b7
            boolean r14 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r14 != 0) goto L1b1
            boolean r12 = r12.equals(r2)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r12 == 0) goto L1b1
            r2 = r7
        L1b1:
            java.lang.String r12 = "eTag of server file changed"
            r1.handleResponseCodeError(r2, r12)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            goto L1c1
        L1b7:
            com.ss.android.socialbase.downloader.exception.DownloadHttpException r2 = new com.ss.android.socialbase.downloader.exception.DownloadHttpException     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r3 = 1002(0x3ea, float:1.404E-42)
            r2.<init>(r3, r9, r7)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            throw r2     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
        L1bf:
            r13 = r21
        L1c1:
            boolean r12 = r1.acceptPartial     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r14 = 1004(0x3ec, float:1.407E-42)
            if (r12 != 0) goto L1f1
            boolean r12 = r1.isResponseFromBegin     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r12 == 0) goto L1cc
            goto L1f1
        L1cc:
            r2 = 403(0x193, float:5.65E-43)
            if (r9 != r2) goto L1da
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r3 = 1047(0x417, float:1.467E-42)
            java.lang.String r4 = "response code error : 403"
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            throw r2     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
        L1da:
            com.ss.android.socialbase.downloader.exception.DownloadHttpException r2 = new com.ss.android.socialbase.downloader.exception.DownloadHttpException     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r3.<init>()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r4 = "response code error : "
            r3.append(r4)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r3.append(r9)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r2.<init>(r14, r9, r3)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            throw r2     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
        L1f1:
            boolean r9 = r1.isResponseFromBegin     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r9 == 0) goto L209
            if (r5 <= 0) goto L209
            boolean r5 = r13 instanceof com.ss.android.socialbase.downloader.network.IDownloadHttpConnection     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r5 == 0) goto L201
            java.lang.String r5 = "http head request not support"
            r1.handleResponseCodeError(r7, r5)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            goto L209
        L201:
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r3 = "isResponseFromBegin but firstOffset > 0"
            r2.<init>(r14, r3)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            throw r2     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
        L209:
            r20 = r7
            long r6 = r8.getContentLength()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            boolean r9 = r13 instanceof com.ss.android.socialbase.downloader.network.IDownloadHttpConnection     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r9 != 0) goto L228
            int r9 = (r6 > r10 ? 1 : (r6 == r10 ? 0 : -1))
            if (r9 >= 0) goto L228
            com.ss.android.socialbase.downloader.model.DownloadInfo r9 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            boolean r9 = com.ss.android.socialbase.downloader.utils.DownloadSettingsUtils.isOptimizeHeadRequest(r9)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r9 != 0) goto L220
            goto L228
        L220:
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r9 = r20
            r2.<init>(r14, r9)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            throw r2     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
        L228:
            r9 = r20
            com.ss.android.socialbase.downloader.model.DownloadInfo r12 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r12 = r12.getName()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            boolean r12 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r12 == 0) goto L241
            com.ss.android.socialbase.downloader.model.DownloadInfo r12 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r12 = r12.getUrl()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r12 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getFileNameFromConnection(r13, r12)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            goto L242
        L241:
            r12 = r9
        L242:
            boolean r8 = r8.isChunked()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r1.isChunked = r8     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r8 != 0) goto L259
            int r8 = (r6 > r10 ? 1 : (r6 == r10 ? 0 : -1))
            if (r8 != 0) goto L259
            boolean r8 = r13 instanceof com.ss.android.socialbase.downloader.network.IDownloadHttpConnection     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r8 == 0) goto L253
            goto L259
        L253:
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r2.<init>(r14, r9)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            throw r2     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
        L259:
            boolean r8 = r1.isChunked     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r8 != 0) goto L2c5
            java.lang.String r8 = "Content-Range"
            java.lang.String r8 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getRespHeadFieldIgnoreCase(r13, r8)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r9 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r13.<init>()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r14 = "firstConnection: contentRange = "
            r13.append(r14)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r13.append(r8)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.logger.Logger.i(r9, r13)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            boolean r9 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r9 != 0) goto L2a5
            com.ss.android.socialbase.downloader.setting.DownloadSetting r9 = r1.setting     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r13 = "fix_get_total_bytes"
            r5 = 1
            boolean r9 = r9.optBugFix(r13, r5)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r9 == 0) goto L2a5
            long r3 = com.ss.android.socialbase.downloader.utils.DownloadUtils.parseContentRangeOfInstanceLength(r8)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r6 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r7.<init>()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r8 = "firstConnection: 1 totalLength = "
            r7.append(r8)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r7.append(r3)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.logger.Logger.i(r6, r7)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            goto L2c7
        L2a5:
            long r3 = r3 + r6
            java.lang.String r8 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r9.<init>()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r13 = "firstConnection: 2 totalLength = "
            r9.append(r13)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r9.append(r3)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r13 = ", contentLength = "
            r9.append(r13)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r9.append(r6)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r6 = r9.toString()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.logger.Logger.e(r8, r6)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            goto L2c7
        L2c5:
            r3 = -1
        L2c7:
            boolean r6 = r19.checkIsStoppedByUser()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            if (r6 == 0) goto L2ce
            return
        L2ce:
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            long r6 = r6.getExpectFileLength()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            int r6 = (r6 > r10 ? 1 : (r6 == r10 ? 0 : -1))
            if (r6 <= 0) goto L31d
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            int r6 = r6.getId()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.setting.DownloadSetting r6 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r6)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r7 = "force_check_file_length"
            int r6 = r6.optInt(r7)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r5 = 1
            if (r6 != r5) goto L31d
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            long r5 = r5.getExpectFileLength()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            int r5 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r5 != 0) goto L2f6
            goto L31d
        L2f6:
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r5 = 1070(0x42e, float:1.5E-42)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r6.<init>()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r7 = "expectFileLength = "
            r6.append(r7)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r1.downloadInfo     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            long r7 = r7.getExpectFileLength()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r6.append(r7)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r7 = " , totalLength = "
            r6.append(r7)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r6.append(r3)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            java.lang.String r3 = r6.toString()     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r2.<init>(r5, r3)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            throw r2     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
        L31d:
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r5 = r1.statusHandler     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            r5.onFirstConnectionSuccessed(r3, r2, r12)     // Catch: java.lang.Throwable -> L323 com.ss.android.socialbase.downloader.exception.RetryThrowable -> L32b com.ss.android.socialbase.downloader.exception.BaseException -> L32e
            goto L32a
        L323:
            r0 = move-exception
            r2 = r0
            java.lang.String r3 = "HandleFirstConnection"
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r2, r3)
        L32a:
            return
        L32b:
            r0 = move-exception
            r2 = r0
            throw r2
        L32e:
            r0 = move-exception
            r2 = r0
            throw r2
    }

    public boolean isAlive() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.isAlive
            boolean r0 = r0.get()
            return r0
    }

    @Override
    public void onAllChunkRetryWithReset(com.ss.android.socialbase.downloader.exception.BaseException r3, boolean r4) {
            r2 = this;
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.String r1 = "onAllChunkRetryWithReset"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_ALL_CHUNK_RETRY_WITH_RESET
            r2.runStatus = r0
            r2.errorException = r3
            r2.cancelAllChunkRunnable()
            if (r4 == 0) goto L17
            boolean r3 = r2.handleRetryTime(r3)
            goto L18
        L17:
            r3 = 0
        L18:
            if (r3 != 0) goto L1d
            r2.clearCurrentDownloadData()
        L1d:
            return
    }

    @Override
    public void onChunkDowngradeRetry(com.ss.android.socialbase.downloader.exception.BaseException r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            if (r0 == 0) goto L8
            r1 = 1
            r0.setChunkDowngradeRetryUsed(r1)
        L8:
            r0 = 0
            r2.onAllChunkRetryWithReset(r3, r0)
            return
    }

    @Override
    public void onCompleted(com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable r2) {
            r1 = this;
            boolean r0 = r1.isSingleChunk
            if (r0 != 0) goto Lf
            monitor-enter(r1)
            java.util.ArrayList<com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable> r0 = r1.downloadChunkRunnableList     // Catch: java.lang.Throwable -> Lc
            r0.remove(r2)     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lc
            goto Lf
        Lc:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lc
            throw r2
        Lf:
            return
    }

    @Override
    public void onError(com.ss.android.socialbase.downloader.exception.BaseException r4) {
            r3 = this;
            java.lang.String r0 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onError:"
            r1.append(r2)
            java.lang.String r2 = r4.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_ERROR
            r3.runStatus = r0
            r3.errorException = r4
            r3.cancelAllChunkRunnable()
            return
    }

    @Override
    public boolean onProgress(long r5) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r4 = this;
            long r0 = r4.curBytesNeedCheckSpaceOverFlow
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L17
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            long r0 = r0.getCurBytes()
            long r2 = r4.curBytesNeedCheckSpaceOverFlow
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L17
            r4.checkSpaceOverflowInProgress()
        L17:
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = r4.statusHandler
            boolean r5 = r0.onProgress(r5)
            return r5
    }

    @Override
    public com.ss.android.socialbase.downloader.exception.RetryCheckStatus onRetry(com.ss.android.socialbase.downloader.exception.BaseException r8, long r9) {
            r7 = this;
            r7.errorException = r8
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r7.downloadInfo
            long r9 = -r9
            r0.increaseCurBytes(r9)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r9 = r7.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r10 = r7.downloadInfo
            r9.updateDownloadInfo(r10)
            boolean r9 = r7.isStoppedStatus()
            if (r9 == 0) goto L18
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r8 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN
            return r8
        L18:
            r9 = 1
            r10 = 0
            if (r8 == 0) goto L61
            int r0 = r8.getErrorCode()
            r1 = 1047(0x417, float:1.467E-42)
            if (r0 != r1) goto L61
            com.ss.android.socialbase.downloader.depend.IDownloadForbiddenHandler r0 = r7.forbiddenHandler
            if (r0 == 0) goto L58
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r7.downloadInfo
            boolean r0 = r0.isForbiddenRetryed()
            if (r0 == 0) goto L31
            goto L58
        L31:
            com.ss.android.socialbase.downloader.thread.DownloadRunnable$1 r0 = new com.ss.android.socialbase.downloader.thread.DownloadRunnable$1
            r0.<init>(r7)
            com.ss.android.socialbase.downloader.depend.IDownloadForbiddenHandler r1 = r7.forbiddenHandler
            boolean r1 = r1.onForbidden(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r7.downloadInfo
            r2.setForbiddenRetryed()
            if (r1 == 0) goto Lf8
            boolean r0 = r0.hasCallback()
            if (r0 != 0) goto Ld9
            r7.cancelAllChunkRunnable()
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r8 = r7.statusHandler
            r8.handleWaitingAsyncHandler()
            com.ss.android.socialbase.downloader.constants.RunStatus r8 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_WAITING_ASYNC_HANDLER
            r7.runStatus = r8
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r8 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN
            return r8
        L58:
            boolean r0 = r7.handleRetryTime(r8)
            if (r0 == 0) goto Lf8
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r8 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN
            return r8
        L61:
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isInsufficientSpaceError(r8)
            if (r0 == 0) goto Lef
            com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler r0 = r7.diskSpaceHandler
            if (r0 != 0) goto L71
            r7.onError(r8)
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r8 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN
            return r8
        L71:
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>(r10)
            com.ss.android.socialbase.downloader.thread.DownloadRunnable$2 r6 = new com.ss.android.socialbase.downloader.thread.DownloadRunnable$2
            r6.<init>(r7, r0)
            boolean r1 = r8 instanceof com.ss.android.socialbase.downloader.exception.DownloadOutOfSpaceException
            if (r1 == 0) goto L8b
            r1 = r8
            com.ss.android.socialbase.downloader.exception.DownloadOutOfSpaceException r1 = (com.ss.android.socialbase.downloader.exception.DownloadOutOfSpaceException) r1
            long r2 = r1.getAvaliableSpaceBytes()
            long r4 = r1.getRequiredSpaceBytes()
            goto L95
        L8b:
            r1 = -1
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r7.downloadInfo
            long r3 = r3.getTotalBytes()
            r4 = r3
            r2 = r1
        L95:
            monitor-enter(r7)
            com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler r1 = r7.diskSpaceHandler     // Catch: java.lang.Throwable -> Lec
            boolean r1 = r1.cleanUpDisk(r2, r4, r6)     // Catch: java.lang.Throwable -> Lec
            if (r1 == 0) goto Ldb
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r7.downloadInfo     // Catch: java.lang.Throwable -> Lec
            int r1 = r1.getId()     // Catch: java.lang.Throwable -> Lec
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)     // Catch: java.lang.Throwable -> Lec
            java.lang.String r2 = "not_delete_when_clean_space"
            boolean r1 = r1.optBugFix(r2, r10)     // Catch: java.lang.Throwable -> Lec
            if (r1 != 0) goto Lb3
            r7.checkCompletedByteValid()     // Catch: java.lang.Throwable -> Lec
        Lb3:
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> Lec
            if (r0 != 0) goto Lcf
            com.ss.android.socialbase.downloader.constants.RunStatus r8 = r7.runStatus     // Catch: java.lang.Throwable -> Lec
            com.ss.android.socialbase.downloader.constants.RunStatus r9 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_WAITING_ASYNC_HANDLER     // Catch: java.lang.Throwable -> Lec
            if (r8 == r9) goto Lcb
            com.ss.android.socialbase.downloader.constants.RunStatus r8 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_WAITING_ASYNC_HANDLER     // Catch: java.lang.Throwable -> Lec
            r7.runStatus = r8     // Catch: java.lang.Throwable -> Lec
            r7.cancelAllChunkRunnable()     // Catch: java.lang.Throwable -> Lec
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r8 = r7.statusHandler     // Catch: java.lang.Throwable -> Lec
            r8.handleWaitingAsyncHandler()     // Catch: java.lang.Throwable -> Lec
        Lcb:
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r8 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN     // Catch: java.lang.Throwable -> Lec
            monitor-exit(r7)     // Catch: java.lang.Throwable -> Lec
            return r8
        Lcf:
            monitor-exit(r7)     // Catch: java.lang.Throwable -> Lec
            boolean r0 = r7.handleRetryTime(r8)
            if (r0 == 0) goto Ld9
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r8 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN
            return r8
        Ld9:
            r0 = r9
            goto Lf9
        Ldb:
            com.ss.android.socialbase.downloader.constants.RunStatus r9 = r7.runStatus     // Catch: java.lang.Throwable -> Lec
            com.ss.android.socialbase.downloader.constants.RunStatus r10 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_WAITING_ASYNC_HANDLER     // Catch: java.lang.Throwable -> Lec
            if (r9 != r10) goto Le5
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r8 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN     // Catch: java.lang.Throwable -> Lec
            monitor-exit(r7)     // Catch: java.lang.Throwable -> Lec
            return r8
        Le5:
            r7.onError(r8)     // Catch: java.lang.Throwable -> Lec
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r8 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN     // Catch: java.lang.Throwable -> Lec
            monitor-exit(r7)     // Catch: java.lang.Throwable -> Lec
            return r8
        Lec:
            r8 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> Lec
            throw r8
        Lef:
            boolean r0 = r7.handleRetryTime(r8)
            if (r0 == 0) goto Lf8
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r8 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN
            return r8
        Lf8:
            r0 = r10
        Lf9:
            if (r0 != 0) goto L104
            boolean r0 = r7.checkNeedRetryDelay()
            if (r0 == 0) goto L104
            r7.cancelAllChunkRunnable()
        L104:
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = r7.statusHandler
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = r7.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r2 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_RETRY_DELAY
            if (r1 != r2) goto L10d
            goto L10e
        L10d:
            r9 = r10
        L10e:
            r0.onRetry(r8, r9)
            com.ss.android.socialbase.downloader.constants.RunStatus r8 = r7.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r9 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_RETRY_DELAY
            if (r8 != r9) goto L11a
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r8 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN
            goto L11c
        L11a:
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r8 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.CONTINUE
        L11c:
            return r8
    }

    @Override
    public com.ss.android.socialbase.downloader.exception.RetryCheckStatus onSingleChunkRetry(com.ss.android.socialbase.downloader.model.DownloadChunk r3, com.ss.android.socialbase.downloader.exception.BaseException r4, long r5) {
            r2 = this;
            boolean r0 = r2.isStoppedStatus()
            if (r0 == 0) goto L9
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r3 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN
            return r3
        L9:
            if (r4 == 0) goto L1e
            int r0 = r4.getErrorCode()
            r1 = 1047(0x417, float:1.467E-42)
            if (r0 == r1) goto L19
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isInsufficientSpaceError(r4)
            if (r0 == 0) goto L1e
        L19:
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r3 = r2.onRetry(r4, r5)
            return r3
        L1e:
            r2.errorException = r4
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo
            long r5 = -r5
            r0.increaseCurBytes(r5)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r5 = r2.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r2.downloadInfo
            r5.updateDownloadInfo(r6)
            boolean r5 = r2.handleRetryTime(r4)
            if (r5 == 0) goto L36
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r3 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN
            return r3
        L36:
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r5 = r2.statusHandler
            com.ss.android.socialbase.downloader.constants.RunStatus r6 = r2.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_RETRY_DELAY
            if (r6 != r0) goto L40
            r6 = 1
            goto L41
        L40:
            r6 = 0
        L41:
            r5.onSingleChunkRetry(r3, r4, r6)
            com.ss.android.socialbase.downloader.constants.RunStatus r3 = r2.runStatus
            com.ss.android.socialbase.downloader.constants.RunStatus r4 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_RETRY_DELAY
            if (r3 == r4) goto L91
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r2.downloadInfo
            boolean r3 = r3.isNeedRetryDelay()
            if (r3 == 0) goto L91
            long r3 = r2.getDelayTime()
            r5 = 0
            int r5 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r5 <= 0) goto L91
            java.lang.String r5 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "onSingleChunkRetry with delay time "
            r6.append(r0)
            r6.append(r3)
            java.lang.String r6 = r6.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r5, r6)
            java.lang.Thread.sleep(r3)     // Catch: java.lang.Throwable -> L76
            goto L91
        L76:
            r3 = move-exception
            java.lang.String r4 = com.ss.android.socialbase.downloader.thread.DownloadRunnable.TAG
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "onSingleChunkRetry:"
            r5.append(r6)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.ss.android.socialbase.downloader.logger.Logger.w(r4, r3)
        L91:
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r3 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.CONTINUE
            return r3
    }

    public void pause() {
            r2 = this;
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_PAUSE
            r2.runStatus = r0
            com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0 = r2.segmentDispatcher
            if (r0 == 0) goto Ld
            com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0 = r2.segmentDispatcher
            r0.pause()
        Ld:
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = r2.firstHttpResponseHandler
            if (r0 == 0) goto L16
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = r2.firstHttpResponseHandler
            r0.pause()
        L16:
            com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0 = r2.segmentDispatcher
            if (r0 != 0) goto L28
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = r2.firstHttpResponseHandler
            if (r0 != 0) goto L28
            r2.closeConnection()
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_PAUSE
            r2.runStatus = r0
            r2.endDownloadRunnable()
        L28:
            java.util.ArrayList<com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable> r0 = r2.downloadChunkRunnableList     // Catch: java.lang.Throwable -> L46
            java.lang.Object r0 = r0.clone()     // Catch: java.lang.Throwable -> L46
            java.util.ArrayList r0 = (java.util.ArrayList) r0     // Catch: java.lang.Throwable -> L46
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L46
        L34:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L46
            if (r1 == 0) goto L4a
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L46
            com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable r1 = (com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable) r1     // Catch: java.lang.Throwable -> L46
            if (r1 == 0) goto L34
            r1.pause()     // Catch: java.lang.Throwable -> L46
            goto L34
        L46:
            r0 = move-exception
            r0.printStackTrace()
        L4a:
            return
    }

    public void prepareDownload() {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r2.prepareDownloadTime = r0
            com.ss.android.socialbase.downloader.downloader.DownloadStatusHandler r0 = r2.statusHandler
            r0.onPrepare()
            return
    }

    @Override
    public void run() {
            r2 = this;
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r2.downloadTask
            r1 = 3
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.onDownloadTaskStart(r0, r1)
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler r0 = com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.getInstance()     // Catch: java.lang.Throwable -> L1d
            r0.startSampling()     // Catch: java.lang.Throwable -> L1d
            r2.runInner()     // Catch: java.lang.Throwable -> L1d
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler r0 = com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.getInstance()
            r0.stopSampling()
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r2.downloadTask
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.onDownloadTaskFinish(r0, r1)
            return
        L1d:
            r0 = move-exception
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler r1 = com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.getInstance()
            r1.stopSampling()
            throw r0
    }

    public void setFuture(java.util.concurrent.Future r1) {
            r0 = this;
            r0.mFuture = r1
            return
    }

    @Override
    public void setHttpResponseStatus(com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r2) {
            r1 = this;
            if (r2 == 0) goto L1a
            int r2 = r2.getResponseCode()     // Catch: java.lang.Throwable -> L16
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L16
            r0.setHttpStatusCode(r2)     // Catch: java.lang.Throwable -> L16
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L16
            java.lang.String r2 = com.ss.android.socialbase.downloader.utils.DownloadHttpUtils.httpCodeToMessage(r2)     // Catch: java.lang.Throwable -> L16
            r0.setHttpStatusMessage(r2)     // Catch: java.lang.Throwable -> L16
            r2 = 1
            goto L1b
        L16:
            r2 = move-exception
            r2.printStackTrace()
        L1a:
            r2 = 0
        L1b:
            if (r2 != 0) goto L2a
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.downloadInfo
            r0 = -1
            r2.setHttpStatusCode(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.downloadInfo
            java.lang.String r0 = ""
            r2.setHttpStatusMessage(r0)
        L2a:
            return
    }

    public void setThrottleNetSpeed(long r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r2.firstGetConnection
            if (r0 != 0) goto L5
            return
        L5:
            boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection
            if (r1 == 0) goto L13
            com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection r0 = (com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection) r0     // Catch: java.lang.Throwable -> Lf
            r0.setThrottleNetSpeedWhenRunning(r3)     // Catch: java.lang.Throwable -> Lf
            goto L13
        Lf:
            r3 = move-exception
            r3.printStackTrace()
        L13:
            return
    }
}
