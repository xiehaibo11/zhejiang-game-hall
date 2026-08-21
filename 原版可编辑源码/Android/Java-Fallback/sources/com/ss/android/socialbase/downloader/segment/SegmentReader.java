package com.ss.android.socialbase.downloader.segment;

class SegmentReader implements java.lang.Runnable {
    private static final int SEGMENT_APPLY_RETRY_MAX_COUNT = 50;
    private static final int SWITCH_URL_MAX_COUNT = 30;
    private static final java.lang.String TAG = "SegmentReader";
    private volatile boolean changeSegment;
    private volatile boolean closed;
    volatile long connectEndTime;
    volatile long connectStartTime;
    java.lang.String curHostIp;
    java.lang.String curHostRealIp;
    private int curRetryCount;
    volatile com.ss.android.socialbase.downloader.segment.Segment curSegment;
    private volatile long curSegmentReadOffset;
    java.lang.String curUrl;
    private final com.ss.android.socialbase.downloader.model.DownloadInfo downloadInfo;
    private volatile long endOffsetInConnection;
    private boolean exited;
    private boolean failed;
    private com.ss.android.socialbase.downloader.exception.BaseException failedException;
    private java.util.concurrent.Future future;
    private final com.ss.android.socialbase.downloader.segment.ISegmentCallback host;
    private com.ss.android.socialbase.downloader.network.IDownloadHttpConnection httpConnection;
    private com.ss.android.socialbase.downloader.model.HttpResponse httpResponse;
    private boolean httpsToHttpRetryUsed;
    private long lastConnectStartTime;
    private final com.ss.android.socialbase.downloader.segment.IBufferPool pool;
    private volatile long readBytes;
    volatile long readEndTime;
    volatile long readStartTime;
    private volatile boolean reconnect;
    private int retryCount;
    private int segmentApplyRetryTimes;
    private volatile long segmentNewEndOffset;
    private final com.ss.android.socialbase.downloader.setting.DownloadSetting setting;
    private long startOffsetInConnection;
    private com.ss.android.socialbase.downloader.utils.DownloadStenographer stenographer;
    private final java.util.List<com.ss.android.socialbase.downloader.segment.Segment> succeedSegments;
    private int switchUrlTimes;
    private java.lang.Thread thread;
    private volatile boolean threadDirty;
    final int threadIndex;
    com.ss.android.socialbase.downloader.segment.UrlRecord urlRecord;

    SegmentReader(com.ss.android.socialbase.downloader.model.DownloadInfo r3, com.ss.android.socialbase.downloader.segment.SegmentDispatcher r4, com.ss.android.socialbase.downloader.segment.IBufferPool r5, com.ss.android.socialbase.downloader.segment.UrlRecord r6, int r7) {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.succeedSegments = r0
            r0 = -1
            r2.curSegmentReadOffset = r0
            r2.downloadInfo = r3
            r2.host = r4
            r2.pool = r5
            int r3 = r3.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)
            r2.setting = r3
            r2.urlRecord = r6
            r2.threadIndex = r7
            return
    }

    private boolean checkCanUseHttpsToHttpRetry(com.ss.android.socialbase.downloader.exception.BaseException r3) {
            r2 = this;
            boolean r3 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isHttpsError(r3)
            r0 = 0
            if (r3 != 0) goto L8
            return r0
        L8:
            com.ss.android.socialbase.downloader.segment.UrlRecord r3 = r2.urlRecord
            java.lang.String r3 = r3.url
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L30
            java.lang.String r1 = "https"
            boolean r3 = r3.startsWith(r1)
            if (r3 != 0) goto L1b
            goto L30
        L1b:
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r2.downloadInfo
            boolean r3 = r3.isNeedHttpsToHttpRetry()
            if (r3 != 0) goto L24
            return r0
        L24:
            boolean r3 = r2.httpsToHttpRetryUsed
            if (r3 == 0) goto L29
            return r0
        L29:
            r3 = 1
            r2.httpsToHttpRetryUsed = r3
            r2.resetRetryTimes()
            return r3
        L30:
            return r0
    }

    private void closeConnection() {
            r4 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r4.httpConnection
            if (r0 == 0) goto L22
            java.lang.String r1 = "SegmentReader"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L22
            r2.<init>()     // Catch: java.lang.Throwable -> L22
            java.lang.String r3 = "closeConnection: thread = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L22
            int r3 = r4.threadIndex     // Catch: java.lang.Throwable -> L22
            r2.append(r3)     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L22
            com.ss.android.socialbase.downloader.logger.Logger.i(r1, r2)     // Catch: java.lang.Throwable -> L22
            r0.end()     // Catch: java.lang.Throwable -> L22
            r0.cancel()     // Catch: java.lang.Throwable -> L22
        L22:
            return
    }

    private void createConnection(com.ss.android.socialbase.downloader.segment.Segment r25) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r24 = this;
            r1 = r24
            r0 = r25
            java.lang.String r2 = ", threadIndex = "
            java.lang.String r3 = ", ip = "
            java.lang.String r4 = "https"
            java.lang.String r5 = "SegmentReader"
            java.lang.String r6 = "createConn"
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r9 = 0
            r1.connectEndTime = r9     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r1.connectStartTime = r7     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            long r11 = r25.getCurrentOffsetRead()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r1.startOffsetInConnection = r11     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            long r11 = r25.getEndOffset()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r1.endOffsetInConnection = r11     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            long r11 = r1.endOffsetInConnection     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            int r9 = (r11 > r9 ? 1 : (r11 == r9 ? 0 : -1))
            if (r9 <= 0) goto L4b
            long r9 = r1.startOffsetInConnection     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            long r11 = r1.endOffsetInConnection     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            int r9 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            if (r9 > 0) goto L33
            goto L4b
        L33:
            com.ss.android.socialbase.downloader.segment.SegmentApplyException r2 = new com.ss.android.socialbase.downloader.segment.SegmentApplyException     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r3 = 6
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r4.<init>()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r5 = "createConn, "
            r4.append(r5)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r4.append(r0)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            throw r2     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
        L4b:
            com.ss.android.socialbase.downloader.utils.DownloadStenographer r9 = new com.ss.android.socialbase.downloader.utils.DownloadStenographer     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r9.<init>()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r1.stenographer = r9     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            com.ss.android.socialbase.downloader.model.DownloadInfo r9 = r1.downloadInfo     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.util.List r10 = r9.getExtraHeaders()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            com.ss.android.socialbase.downloader.model.DownloadInfo r9 = r1.downloadInfo     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r11 = r9.geteTag()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            long r12 = r1.startOffsetInConnection     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            long r14 = r1.endOffsetInConnection     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.util.List r9 = com.ss.android.socialbase.downloader.utils.DownloadUtils.addRangeHeader(r10, r11, r12, r14)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            com.ss.android.socialbase.downloader.model.HttpHeader r10 = new com.ss.android.socialbase.downloader.model.HttpHeader     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r11 = "Segment-Index"
            int r12 = r25.getIndex()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r12 = java.lang.String.valueOf(r12)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r10.<init>(r11, r12)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r9.add(r10)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            com.ss.android.socialbase.downloader.model.HttpHeader r10 = new com.ss.android.socialbase.downloader.model.HttpHeader     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r11 = "Thread-Index"
            int r12 = r1.threadIndex     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r12 = java.lang.String.valueOf(r12)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r10.<init>(r11, r12)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r9.add(r10)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            com.ss.android.socialbase.downloader.model.DownloadInfo r10 = r1.downloadInfo     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            com.ss.android.socialbase.downloader.utils.DownloadUtils.addThrottleNetSpeed(r9, r10)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            com.ss.android.socialbase.downloader.model.DownloadInfo r10 = r1.downloadInfo     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            com.ss.android.socialbase.downloader.utils.DownloadUtils.addTTNetProtectTimeout(r9, r10)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            com.ss.android.socialbase.downloader.segment.UrlRecord r10 = r1.urlRecord     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r10 = r10.url     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            boolean r11 = r1.httpsToHttpRetryUsed     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            if (r11 == 0) goto Lac
            boolean r11 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            if (r11 != 0) goto Lac
            boolean r11 = r10.startsWith(r4)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            if (r11 == 0) goto Lac
            java.lang.String r11 = "http"
            java.lang.String r10 = r10.replaceFirst(r4, r11)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
        Lac:
            com.ss.android.socialbase.downloader.segment.UrlRecord r4 = r1.urlRecord     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r4 = r4.ip     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r11.<init>()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r12 = "createConnectionBegin: url = "
            r11.append(r12)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r11.append(r10)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r11.append(r3)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r11.append(r4)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r12 = ", segment = "
            r11.append(r12)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r11.append(r0)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r11.append(r2)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            int r0 = r1.threadIndex     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r11.append(r0)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r0 = r11.toString()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            com.ss.android.socialbase.downloader.logger.Logger.i(r5, r0)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r1.curUrl = r10     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r1.curHostIp = r4     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            boolean r16 = r0.isNeedDefaultHttpServiceBackUp()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            int r17 = r0.getMaxBytes()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r21 = 0
            long r11 = r1.lastConnectStartTime     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            long r7 = r7 - r11
            r11 = 3000(0xbb8, double:1.482E-320)
            int r0 = (r7 > r11 ? 1 : (r7 == r11 ? 0 : -1))
            if (r0 <= 0) goto L101
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = r1.setting     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r7 = "monitor_download_connect"
            int r0 = r0.optInt(r7)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            if (r0 <= 0) goto L101
            r0 = 1
            goto L102
        L101:
            r0 = 0
        L102:
            r22 = r0
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r18 = r10
            r19 = r4
            r20 = r9
            r23 = r0
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadWithConnection(r16, r17, r18, r19, r20, r21, r22, r23)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            if (r0 == 0) goto L160
            r1.httpConnection = r0     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            com.ss.android.socialbase.downloader.model.HttpResponse r7 = new com.ss.android.socialbase.downloader.model.HttpResponse     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r7.<init>(r10, r0)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r1.httpResponse = r7     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            boolean r7 = r1.closed     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            if (r7 != 0) goto L15a
            boolean r7 = r0 instanceof com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            if (r7 == 0) goto L12d
            com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection r0 = (com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection) r0     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r0 = r0.getHostIp()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r1.curHostRealIp = r0     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
        L12d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r0.<init>()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r7 = "createConnectionSuccess: url = "
            r0.append(r7)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r0.append(r10)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r0.append(r3)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r0.append(r4)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r3 = ", hostRealIp = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r3 = r1.curHostRealIp     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r0.append(r3)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r0.append(r2)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            int r2 = r1.threadIndex     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r0.append(r2)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            android.util.Log.i(r5, r0)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            goto L173
        L15a:
            com.ss.android.socialbase.downloader.segment.StreamClosedException r0 = new com.ss.android.socialbase.downloader.segment.StreamClosedException     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r0.<init>(r6)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            throw r0     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
        L160:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r2 = 1022(0x3fe, float:1.432E-42)
            java.io.IOException r3 = new java.io.IOException     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            java.lang.String r4 = "download can't continue, chunk connection is null"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
            throw r0     // Catch: java.lang.Throwable -> L16f com.ss.android.socialbase.downloader.exception.BaseException -> L17a
        L16f:
            r0 = move-exception
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r0, r6)     // Catch: java.lang.Throwable -> L17c
        L173:
            long r2 = java.lang.System.currentTimeMillis()
            r1.connectEndTime = r2
            return
        L17a:
            r0 = move-exception
            throw r0     // Catch: java.lang.Throwable -> L17c
        L17c:
            r0 = move-exception
            long r2 = java.lang.System.currentTimeMillis()
            r1.connectEndTime = r2
            throw r0
    }

    private void doConnect(com.ss.android.socialbase.downloader.segment.Segment r4) throws com.ss.android.socialbase.downloader.exception.BaseException, com.ss.android.socialbase.downloader.exception.RetryThrowable {
            r3 = this;
            r3.createConnection(r4)
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r0 = r3.host
            com.ss.android.socialbase.downloader.segment.UrlRecord r1 = r3.urlRecord
            com.ss.android.socialbase.downloader.model.HttpResponse r2 = r3.httpResponse
            r0.onSegmentConnected(r3, r4, r1, r2)
            com.ss.android.socialbase.downloader.segment.UrlRecord r4 = r3.urlRecord
            r4.recordSucceed()
            return
    }

    private boolean download(com.ss.android.socialbase.downloader.segment.Segment r6) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r5 = this;
            r5.initParams()
        L3:
            r5.doConnect(r6)     // Catch: java.lang.Throwable -> Le com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L8b
            r5.loopAndRead(r6)     // Catch: java.lang.Throwable -> Le com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L8b
            r6 = 1
            r5.releaseDownload()
            return r6
        Le:
            r0 = move-exception
            java.lang.String r1 = "SegmentReader"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8f
            r2.<init>()     // Catch: java.lang.Throwable -> L8f
            java.lang.String r3 = "download: e = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L8f
            r2.append(r0)     // Catch: java.lang.Throwable -> L8f
            java.lang.String r3 = ", threadIndex = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L8f
            int r3 = r5.threadIndex     // Catch: java.lang.Throwable -> L8f
            r2.append(r3)     // Catch: java.lang.Throwable -> L8f
            java.lang.String r3 = ", reconnect = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L8f
            boolean r3 = r5.reconnect     // Catch: java.lang.Throwable -> L8f
            r2.append(r3)     // Catch: java.lang.Throwable -> L8f
            java.lang.String r3 = ", closed = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L8f
            boolean r3 = r5.closed     // Catch: java.lang.Throwable -> L8f
            r2.append(r3)     // Catch: java.lang.Throwable -> L8f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L8f
            com.ss.android.socialbase.downloader.logger.Logger.e(r1, r2)     // Catch: java.lang.Throwable -> L8f
            boolean r1 = r5.closed     // Catch: java.lang.Throwable -> L8f
            r2 = 0
            if (r1 == 0) goto L4c
            r5.releaseDownload()
            return r2
        L4c:
            boolean r1 = r5.reconnect     // Catch: java.lang.Throwable -> L8f
            java.lang.String r3 = "download"
            if (r1 == 0) goto L6d
            r5.reconnect = r2     // Catch: java.lang.Throwable -> L8f
            java.lang.Thread.interrupted()     // Catch: java.lang.Throwable -> L58
            goto L5c
        L58:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L8f
        L5c:
            boolean r0 = r5.changeSegment     // Catch: java.lang.Throwable -> L8f
            if (r0 != 0) goto L64
        L60:
            r5.releaseDownload()
            goto L3
        L64:
            r5.changeSegment = r2     // Catch: java.lang.Throwable -> L8f
            com.ss.android.socialbase.downloader.segment.SegmentApplyException r6 = new com.ss.android.socialbase.downloader.segment.SegmentApplyException     // Catch: java.lang.Throwable -> L8f
            r0 = 5
            r6.<init>(r0, r3)     // Catch: java.lang.Throwable -> L8f
            throw r6     // Catch: java.lang.Throwable -> L8f
        L6d:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L8f
            r1 = 0
            boolean r4 = r0 instanceof com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L8f
            if (r4 == 0) goto L79
            r1 = r0
            com.ss.android.socialbase.downloader.exception.BaseException r1 = (com.ss.android.socialbase.downloader.exception.BaseException) r1     // Catch: java.lang.Throwable -> L8f
            goto L7e
        L79:
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r0, r3)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L7d java.lang.Throwable -> L8f
            goto L7e
        L7d:
            r1 = move-exception
        L7e:
            if (r1 == 0) goto L87
            boolean r0 = r5.handleFailedAndCheckRetry(r6, r1)     // Catch: java.lang.Throwable -> L8f
            if (r0 == 0) goto L87
            goto L60
        L87:
            r5.releaseDownload()
            return r2
        L8b:
            r6 = move-exception
            r5.failedException = r6     // Catch: java.lang.Throwable -> L8f
            throw r6     // Catch: java.lang.Throwable -> L8f
        L8f:
            r6 = move-exception
            r5.releaseDownload()
            throw r6
    }

    private boolean handleFailedAndCheckRetry(com.ss.android.socialbase.downloader.segment.Segment r9, com.ss.android.socialbase.downloader.exception.BaseException r10) {
            r8 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "handleDownloadFailed:  e = "
            r0.append(r1)
            r0.append(r10)
            java.lang.String r1 = ", curRetryCount = "
            r0.append(r1)
            int r1 = r8.curRetryCount
            r0.append(r1)
            java.lang.String r1 = ", retryCount = "
            r0.append(r1)
            int r1 = r8.retryCount
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SegmentReader"
            com.ss.android.socialbase.downloader.logger.Logger.e(r1, r0)
            r8.failedException = r10
            com.ss.android.socialbase.downloader.segment.UrlRecord r0 = r8.urlRecord
            r0.recordFailed()
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r1 = r8.host
            com.ss.android.socialbase.downloader.segment.UrlRecord r3 = r8.urlRecord
            int r6 = r8.curRetryCount
            int r7 = r8.retryCount
            r2 = r8
            r4 = r9
            r5 = r10
            r1.onSegmentRetry(r2, r3, r4, r5, r6, r7)
            int r0 = r8.curRetryCount
            int r1 = r8.retryCount
            r2 = 1
            if (r0 >= r1) goto L4a
            int r0 = r0 + r2
            r8.curRetryCount = r0
            return r2
        L4a:
            boolean r0 = r8.checkCanUseHttpsToHttpRetry(r10)
            if (r0 == 0) goto L51
            return r2
        L51:
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r0 = r8.host
            com.ss.android.socialbase.downloader.segment.UrlRecord r1 = r8.urlRecord
            r0.onSegmentFailed(r8, r1, r9, r10)
            r9 = 0
            return r9
    }

    private void initParams() {
            r1 = this;
            r0 = 0
            r1.httpsToHttpRetryUsed = r0
            r1.resetRetryTimes()
            return
    }

    private void loopAndRead(com.ss.android.socialbase.downloader.segment.Segment r32) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r31 = this;
            r1 = r31
            r2 = r32
            com.ss.android.socialbase.downloader.segment.IBufferPool r3 = r1.pool
            long r4 = java.lang.System.currentTimeMillis()
            r1.readStartTime = r4
            long r4 = r32.getCurrentOffsetRead()
            r6 = -1
            r7 = 1
            r8 = 0
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection     // Catch: java.lang.Throwable -> L2da com.ss.android.socialbase.downloader.exception.BaseException -> L376
            java.io.InputStream r10 = r0.getInputStream()     // Catch: java.lang.Throwable -> L2da com.ss.android.socialbase.downloader.exception.BaseException -> L376
            if (r10 == 0) goto L2cb
            com.ss.android.socialbase.downloader.model.HttpResponse r0 = r1.httpResponse     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
            long r11 = r0.getContentLength()     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
            r13 = 0
            int r0 = (r11 > r13 ? 1 : (r11 == r13 ? 0 : -1))
            if (r0 == 0) goto L2a9
            com.ss.android.socialbase.downloader.segment.Buffer r15 = r1.probeFirstBuffer(r3, r10)     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
            boolean r9 = r1.reconnect     // Catch: java.lang.Throwable -> L2a0 com.ss.android.socialbase.downloader.exception.BaseException -> L2a4
            if (r9 != 0) goto L298
            boolean r9 = r1.closed     // Catch: java.lang.Throwable -> L2a0 com.ss.android.socialbase.downloader.exception.BaseException -> L2a4
            if (r9 != 0) goto L298
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r9 = r1.host     // Catch: java.lang.Throwable -> L2a0 com.ss.android.socialbase.downloader.exception.BaseException -> L2a4
            r9.applySegment(r1, r2)     // Catch: java.lang.Throwable -> L2a0 com.ss.android.socialbase.downloader.exception.BaseException -> L2a4
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r9 = r1.host     // Catch: java.lang.Throwable -> L2a0 com.ss.android.socialbase.downloader.exception.BaseException -> L2a4
            com.ss.android.socialbase.downloader.segment.IOutput r9 = r9.createOutput(r1, r2)     // Catch: java.lang.Throwable -> L2a0 com.ss.android.socialbase.downloader.exception.BaseException -> L2a4
            long r17 = r32.getEndOffset()     // Catch: java.lang.Throwable -> L291 com.ss.android.socialbase.downloader.exception.BaseException -> L294
            int r19 = (r17 > r13 ? 1 : (r17 == r13 ? 0 : -1))
            r20 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r22 = 1
            if (r19 <= 0) goto L4e
            goto L56
        L4e:
            if (r0 <= 0) goto L54
            long r11 = r11 + r4
            long r17 = r11 - r22
            goto L56
        L54:
            r17 = r20
        L56:
            int r0 = r15.size     // Catch: java.lang.Throwable -> L291 com.ss.android.socialbase.downloader.exception.BaseException -> L294
            long r11 = (long) r0
            long r13 = r4 + r11
            int r19 = (r13 > r17 ? 1 : (r13 == r17 ? 0 : -1))
            if (r19 <= 0) goto Lda
            long r17 = r17 + r22
            int r19 = (r13 > r17 ? 1 : (r13 == r17 ? 0 : -1))
            if (r19 <= 0) goto L72
            long r19 = r13 - r17
            long r11 = r11 - r19
            int r11 = (int) r11
            if (r11 <= 0) goto L72
            if (r11 >= r0) goto L72
            r15.size = r11     // Catch: java.lang.Throwable -> L28c com.ss.android.socialbase.downloader.exception.BaseException -> L28e
            r13 = r17
        L72:
            r1.curSegmentReadOffset = r13     // Catch: java.lang.Throwable -> L28c com.ss.android.socialbase.downloader.exception.BaseException -> L28e
            r9.write(r15)     // Catch: java.lang.Throwable -> L28c com.ss.android.socialbase.downloader.exception.BaseException -> L28e
            java.io.Closeable[] r0 = new java.io.Closeable[r7]
            r0[r8] = r10
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r0)
            if (r9 == 0) goto L8c
            com.ss.android.socialbase.downloader.segment.Buffer r0 = r3.obtain()     // Catch: java.lang.Throwable -> L8c
            r0.size = r6     // Catch: java.lang.Throwable -> L8a
            r9.write(r0)     // Catch: java.lang.Throwable -> L8a
            goto L8c
        L8a:
            r9 = r0
            goto L8d
        L8c:
            r9 = 0
        L8d:
            if (r9 == 0) goto L92
            r3.recycle(r9)
        L92:
            long r9 = java.lang.System.currentTimeMillis()
            r1.readEndTime = r9
            int r0 = (r13 > r4 ? 1 : (r13 == r4 ? 0 : -1))
            if (r0 <= 0) goto Ld4
            com.ss.android.socialbase.downloader.setting.DownloadSetting r15 = r1.setting
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo
            java.lang.String r3 = r1.curUrl
            java.lang.String r6 = r1.curHostIp
            java.lang.String r9 = r1.curHostRealIp
            boolean r10 = r1.closed
            if (r10 != 0) goto Lb2
            boolean r10 = r1.reconnect
            if (r10 == 0) goto Laf
            goto Lb2
        Laf:
            r20 = r8
            goto Lb4
        Lb2:
            r20 = r7
        Lb4:
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r7 = r1.httpConnection
            com.ss.android.socialbase.downloader.exception.BaseException r8 = r1.failedException
            long r23 = r13 - r4
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS
            long r10 = r1.readEndTime
            long r12 = r1.readStartTime
            long r10 = r10 - r12
            long r25 = r4.toNanos(r10)
            r16 = r0
            r17 = r3
            r18 = r6
            r19 = r9
            r21 = r7
            r22 = r8
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSegmentIO(r15, r16, r17, r18, r19, r20, r21, r22, r23, r25)
        Ld4:
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r0 = r1.host
            r0.unApplySegment(r1, r2)
            return
        Lda:
            r1.curSegmentReadOffset = r13     // Catch: java.lang.Throwable -> L28c com.ss.android.socialbase.downloader.exception.BaseException -> L28e
            r9.write(r15)     // Catch: java.lang.Throwable -> L28c com.ss.android.socialbase.downloader.exception.BaseException -> L28e
            r11 = r17
        Le1:
            boolean r0 = r1.threadDirty     // Catch: java.lang.Throwable -> L287 com.ss.android.socialbase.downloader.exception.BaseException -> L289
            if (r0 == 0) goto L16a
            monitor-enter(r31)     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            r1.threadDirty = r8     // Catch: java.lang.Throwable -> L167
            boolean r0 = r1.reconnect     // Catch: java.lang.Throwable -> L167
            if (r0 != 0) goto L15f
            boolean r0 = r1.closed     // Catch: java.lang.Throwable -> L167
            if (r0 != 0) goto L15f
            monitor-exit(r31)     // Catch: java.lang.Throwable -> L167
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r15 = r1.host     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            monitor-enter(r15)     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            long r7 = r1.segmentNewEndOffset     // Catch: java.lang.Throwable -> L15c
            r24 = 0
            int r0 = (r7 > r24 ? 1 : (r7 == r24 ? 0 : -1))
            if (r0 == 0) goto L15a
            java.lang.String r0 = "SegmentReader"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15c
            r7.<init>()     // Catch: java.lang.Throwable -> L15c
            java.lang.String r8 = "loopAndRead:  change readEnd = "
            r7.append(r8)     // Catch: java.lang.Throwable -> L15c
            r7.append(r11)     // Catch: java.lang.Throwable -> L15c
            java.lang.String r8 = ", segmentNewEndOffset = "
            r7.append(r8)     // Catch: java.lang.Throwable -> L15c
            long r11 = r1.segmentNewEndOffset     // Catch: java.lang.Throwable -> L15c
            r7.append(r11)     // Catch: java.lang.Throwable -> L15c
            java.lang.String r8 = ", segment = "
            r7.append(r8)     // Catch: java.lang.Throwable -> L15c
            r7.append(r2)     // Catch: java.lang.Throwable -> L15c
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L15c
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r7)     // Catch: java.lang.Throwable -> L15c
            long r11 = r31.refreshSegmentEndOffset()     // Catch: java.lang.Throwable -> L15c
            int r0 = (r13 > r11 ? 1 : (r13 == r11 ? 0 : -1))
            if (r0 <= 0) goto L158
            long r7 = r11 + r22
            r26 = r11
            long r11 = r13 - r7
            r22 = 0
            int r0 = (r11 > r22 ? 1 : (r11 == r22 ? 0 : -1))
            if (r0 <= 0) goto L14e
            java.lang.String r0 = "SegmentReader"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15c
            r6.<init>()     // Catch: java.lang.Throwable -> L15c
            java.lang.String r2 = "loopAndRead: redundant = "
            r6.append(r2)     // Catch: java.lang.Throwable -> L15c
            r6.append(r11)     // Catch: java.lang.Throwable -> L15c
            java.lang.String r2 = r6.toString()     // Catch: java.lang.Throwable -> L15c
            com.ss.android.socialbase.downloader.logger.Logger.e(r0, r2)     // Catch: java.lang.Throwable -> L15c
        L14e:
            r1.curSegmentReadOffset = r7     // Catch: java.lang.Throwable -> L155
            monitor-exit(r15)     // Catch: java.lang.Throwable -> L155
            r13 = r7
            r11 = r26
            goto L1c2
        L155:
            r0 = move-exception
            r13 = r7
            goto L15d
        L158:
            r26 = r11
        L15a:
            monitor-exit(r15)     // Catch: java.lang.Throwable -> L15c
            goto L16a
        L15c:
            r0 = move-exception
        L15d:
            monitor-exit(r15)     // Catch: java.lang.Throwable -> L15c
            throw r0     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
        L15f:
            com.ss.android.socialbase.downloader.segment.StreamClosedException r0 = new com.ss.android.socialbase.downloader.segment.StreamClosedException     // Catch: java.lang.Throwable -> L167
            java.lang.String r2 = "loopAndRead"
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L167
            throw r0     // Catch: java.lang.Throwable -> L167
        L167:
            r0 = move-exception
            monitor-exit(r31)     // Catch: java.lang.Throwable -> L167
            throw r0     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
        L16a:
            com.ss.android.socialbase.downloader.segment.Buffer r15 = r3.obtain()     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            byte[] r0 = r15.data     // Catch: java.lang.Throwable -> L274 com.ss.android.socialbase.downloader.exception.BaseException -> L279
            int r0 = r10.read(r0)     // Catch: java.lang.Throwable -> L274 com.ss.android.socialbase.downloader.exception.BaseException -> L279
            r15.size = r0     // Catch: java.lang.Throwable -> L274 com.ss.android.socialbase.downloader.exception.BaseException -> L279
            r2 = -1
            if (r0 != r2) goto L180
            r9.write(r15)     // Catch: java.lang.Throwable -> L274 com.ss.android.socialbase.downloader.exception.BaseException -> L279
            r6 = 0
            r9 = 0
            goto L1c4
        L180:
            long r6 = (long) r0     // Catch: java.lang.Throwable -> L274 com.ss.android.socialbase.downloader.exception.BaseException -> L279
            long r13 = r13 + r6
            int r2 = (r13 > r11 ? 1 : (r13 == r11 ? 0 : -1))
            if (r2 <= 0) goto L266
            long r22 = r11 + r22
            int r2 = (r13 > r22 ? 1 : (r13 == r22 ? 0 : -1))
            if (r2 <= 0) goto L199
            long r26 = r13 - r22
            long r6 = r6 - r26
            int r2 = (int) r6     // Catch: java.lang.Throwable -> L274 com.ss.android.socialbase.downloader.exception.BaseException -> L279
            if (r2 <= 0) goto L199
            if (r2 >= r0) goto L199
            r15.size = r2     // Catch: java.lang.Throwable -> L274 com.ss.android.socialbase.downloader.exception.BaseException -> L279
            r13 = r22
        L199:
            r1.curSegmentReadOffset = r13     // Catch: java.lang.Throwable -> L274 com.ss.android.socialbase.downloader.exception.BaseException -> L279
            r9.write(r15)     // Catch: java.lang.Throwable -> L274 com.ss.android.socialbase.downloader.exception.BaseException -> L279
            java.lang.String r0 = "SegmentReader"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            r2.<init>()     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            java.lang.String r6 = "loopAndRead: bytesRead = "
            r2.append(r6)     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            long r6 = r13 - r4
            r2.append(r6)     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            java.lang.String r6 = ", url = "
            r2.append(r6)     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            com.ss.android.socialbase.downloader.segment.UrlRecord r6 = r1.urlRecord     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            java.lang.String r6 = r6.url     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            r2.append(r6)     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r2)     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
        L1c2:
            r6 = 0
        L1c4:
            int r0 = (r11 > r6 ? 1 : (r11 == r6 ? 0 : -1))
            if (r0 <= 0) goto L1fe
            int r0 = (r11 > r20 ? 1 : (r11 == r20 ? 0 : -1))
            if (r0 == 0) goto L1fe
            int r0 = (r13 > r11 ? 1 : (r13 == r11 ? 0 : -1))
            if (r0 <= 0) goto L1d1
            goto L1fe
        L1d1:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            r2 = 1051(0x41b, float:1.473E-42)
            java.lang.String r6 = "range[%d, %d] , but readCurrent[%d] , readStart[%d]"
            r7 = 4
            java.lang.Object[] r7 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            java.lang.Long r8 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            r15 = 0
            r7[r15] = r8     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            java.lang.Long r8 = java.lang.Long.valueOf(r11)     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            r11 = 1
            r7[r11] = r8     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            r8 = 2
            java.lang.Long r11 = java.lang.Long.valueOf(r13)     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            r7[r8] = r11     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            r8 = 3
            java.lang.Long r11 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            r7[r8] = r11     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            java.lang.String r6 = java.lang.String.format(r6, r7)     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            r0.<init>(r2, r6)     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
            throw r0     // Catch: java.lang.Throwable -> L27e com.ss.android.socialbase.downloader.exception.BaseException -> L282
        L1fe:
            r2 = 1
            java.io.Closeable[] r0 = new java.io.Closeable[r2]
            r2 = 0
            r0[r2] = r10
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r0)
            if (r9 == 0) goto L216
            com.ss.android.socialbase.downloader.segment.Buffer r0 = r3.obtain()     // Catch: java.lang.Throwable -> L216
            r2 = -1
            r0.size = r2     // Catch: java.lang.Throwable -> L214
            r9.write(r0)     // Catch: java.lang.Throwable -> L214
            goto L216
        L214:
            r9 = r0
            goto L217
        L216:
            r9 = 0
        L217:
            if (r9 == 0) goto L21c
            r3.recycle(r9)
        L21c:
            long r2 = java.lang.System.currentTimeMillis()
            r1.readEndTime = r2
            int r0 = (r13 > r4 ? 1 : (r13 == r4 ? 0 : -1))
            if (r0 <= 0) goto L260
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = r1.setting
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.downloadInfo
            java.lang.String r3 = r1.curUrl
            java.lang.String r6 = r1.curHostIp
            java.lang.String r7 = r1.curHostRealIp
            boolean r8 = r1.closed
            if (r8 != 0) goto L23c
            boolean r8 = r1.reconnect
            if (r8 == 0) goto L239
            goto L23c
        L239:
            r24 = 0
            goto L23e
        L23c:
            r24 = 1
        L23e:
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r8 = r1.httpConnection
            com.ss.android.socialbase.downloader.exception.BaseException r9 = r1.failedException
            long r27 = r13 - r4
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS
            long r10 = r1.readEndTime
            long r12 = r1.readStartTime
            long r10 = r10 - r12
            long r29 = r4.toNanos(r10)
            r19 = r0
            r20 = r2
            r21 = r3
            r22 = r6
            r23 = r7
            r25 = r8
            r26 = r9
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSegmentIO(r19, r20, r21, r22, r23, r24, r25, r26, r27, r29)
        L260:
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r0 = r1.host
            r2 = r32
            goto L36e
        L266:
            r2 = r32
            r6 = 0
            r1.curSegmentReadOffset = r13     // Catch: java.lang.Throwable -> L28c com.ss.android.socialbase.downloader.exception.BaseException -> L28e
            r9.write(r15)     // Catch: java.lang.Throwable -> L28c com.ss.android.socialbase.downloader.exception.BaseException -> L28e
            r6 = -1
            r7 = 1
            r8 = 0
            goto Le1
        L274:
            r0 = move-exception
            r2 = r32
            goto L2df
        L279:
            r0 = move-exception
            r2 = r32
            goto L37b
        L27e:
            r0 = move-exception
            r2 = r32
            goto L2de
        L282:
            r0 = move-exception
            r2 = r32
            goto L37a
        L287:
            r0 = move-exception
            goto L2de
        L289:
            r0 = move-exception
            goto L37a
        L28c:
            r0 = move-exception
            goto L2df
        L28e:
            r0 = move-exception
            goto L37b
        L291:
            r0 = move-exception
            r13 = r4
            goto L2df
        L294:
            r0 = move-exception
            r13 = r4
            goto L37b
        L298:
            com.ss.android.socialbase.downloader.segment.StreamClosedException r0 = new com.ss.android.socialbase.downloader.segment.StreamClosedException     // Catch: java.lang.Throwable -> L2a0 com.ss.android.socialbase.downloader.exception.BaseException -> L2a4
            java.lang.String r6 = "probe"
            r0.<init>(r6)     // Catch: java.lang.Throwable -> L2a0 com.ss.android.socialbase.downloader.exception.BaseException -> L2a4
            throw r0     // Catch: java.lang.Throwable -> L2a0 com.ss.android.socialbase.downloader.exception.BaseException -> L2a4
        L2a0:
            r0 = move-exception
            r13 = r4
            r9 = 0
            goto L2df
        L2a4:
            r0 = move-exception
            r13 = r4
            r9 = 0
            goto L37b
        L2a9:
            com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException r0 = new com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
            r6 = 1004(0x3ec, float:1.407E-42)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
            r7.<init>()     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
            java.lang.String r8 = "the content-length is 0, contentLength = "
            r7.append(r8)     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
            r7.append(r11)     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
            r0.<init>(r6, r7)     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
            throw r0     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
        L2c2:
            r0 = move-exception
            r13 = r4
            r9 = 0
            goto L2de
        L2c6:
            r0 = move-exception
            r13 = r4
            r9 = 0
            goto L37a
        L2cb:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
            r6 = 1042(0x412, float:1.46E-42)
            java.io.IOException r7 = new java.io.IOException     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
            java.lang.String r8 = "inputStream is null"
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
            r0.<init>(r6, r7)     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
            throw r0     // Catch: java.lang.Throwable -> L2c2 com.ss.android.socialbase.downloader.exception.BaseException -> L2c6
        L2da:
            r0 = move-exception
            r13 = r4
            r9 = 0
            r10 = 0
        L2de:
            r15 = 0
        L2df:
            java.lang.String r6 = "SegmentReader"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L37e
            r7.<init>()     // Catch: java.lang.Throwable -> L37e
            java.lang.String r8 = "loopAndRead: "
            r7.append(r8)     // Catch: java.lang.Throwable -> L37e
            r7.append(r0)     // Catch: java.lang.Throwable -> L37e
            java.lang.String r8 = ",stack = "
            r7.append(r8)     // Catch: java.lang.Throwable -> L37e
            java.lang.String r8 = android.util.Log.getStackTraceString(r0)     // Catch: java.lang.Throwable -> L37e
            r7.append(r8)     // Catch: java.lang.Throwable -> L37e
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L37e
            com.ss.android.socialbase.downloader.logger.Logger.e(r6, r7)     // Catch: java.lang.Throwable -> L37e
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L37e
            java.lang.String r6 = "loopAndRead"
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r0, r6)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L372 java.lang.Throwable -> L37e
            r6 = 1
            java.io.Closeable[] r0 = new java.io.Closeable[r6]
            r6 = 0
            r0[r6] = r10
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r0)
            if (r9 == 0) goto L322
            if (r15 != 0) goto L31a
            com.ss.android.socialbase.downloader.segment.Buffer r15 = r3.obtain()     // Catch: java.lang.Throwable -> L322
        L31a:
            r6 = -1
            r15.size = r6     // Catch: java.lang.Throwable -> L322
            r9.write(r15)     // Catch: java.lang.Throwable -> L322
            r9 = 0
            goto L323
        L322:
            r9 = r15
        L323:
            if (r9 == 0) goto L328
            r3.recycle(r9)
        L328:
            long r6 = java.lang.System.currentTimeMillis()
            r1.readEndTime = r6
            int r0 = (r13 > r4 ? 1 : (r13 == r4 ? 0 : -1))
            if (r0 <= 0) goto L36c
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = r1.setting
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r1.downloadInfo
            java.lang.String r6 = r1.curUrl
            java.lang.String r7 = r1.curHostIp
            java.lang.String r8 = r1.curHostRealIp
            boolean r9 = r1.closed
            if (r9 != 0) goto L348
            boolean r9 = r1.reconnect
            if (r9 == 0) goto L345
            goto L348
        L345:
            r24 = 0
            goto L34a
        L348:
            r24 = 1
        L34a:
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r9 = r1.httpConnection
            com.ss.android.socialbase.downloader.exception.BaseException r10 = r1.failedException
            long r27 = r13 - r4
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS
            long r11 = r1.readEndTime
            long r13 = r1.readStartTime
            long r11 = r11 - r13
            long r29 = r4.toNanos(r11)
            r19 = r0
            r20 = r3
            r21 = r6
            r22 = r7
            r23 = r8
            r25 = r9
            r26 = r10
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSegmentIO(r19, r20, r21, r22, r23, r24, r25, r26, r27, r29)
        L36c:
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r0 = r1.host
        L36e:
            r0.unApplySegment(r1, r2)
            return
        L372:
            r0 = move-exception
            r1.failedException = r0     // Catch: java.lang.Throwable -> L37e
            throw r0     // Catch: java.lang.Throwable -> L37e
        L376:
            r0 = move-exception
            r13 = r4
            r9 = 0
            r10 = 0
        L37a:
            r15 = 0
        L37b:
            r1.failedException = r0     // Catch: java.lang.Throwable -> L37e
            throw r0     // Catch: java.lang.Throwable -> L37e
        L37e:
            r0 = move-exception
            r6 = 1
            java.io.Closeable[] r7 = new java.io.Closeable[r6]
            r8 = 0
            r7[r8] = r10
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r7)
            if (r9 == 0) goto L398
            if (r15 != 0) goto L390
            com.ss.android.socialbase.downloader.segment.Buffer r15 = r3.obtain()     // Catch: java.lang.Throwable -> L398
        L390:
            r7 = -1
            r15.size = r7     // Catch: java.lang.Throwable -> L398
            r9.write(r15)     // Catch: java.lang.Throwable -> L398
            r9 = 0
            goto L399
        L398:
            r9 = r15
        L399:
            if (r9 == 0) goto L39e
            r3.recycle(r9)
        L39e:
            long r9 = java.lang.System.currentTimeMillis()
            r1.readEndTime = r9
            int r3 = (r13 > r4 ? 1 : (r13 == r4 ? 0 : -1))
            if (r3 <= 0) goto L3e0
            com.ss.android.socialbase.downloader.setting.DownloadSetting r15 = r1.setting
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r1.downloadInfo
            java.lang.String r7 = r1.curUrl
            java.lang.String r9 = r1.curHostIp
            java.lang.String r10 = r1.curHostRealIp
            boolean r11 = r1.closed
            if (r11 != 0) goto L3be
            boolean r11 = r1.reconnect
            if (r11 == 0) goto L3bb
            goto L3be
        L3bb:
            r20 = r8
            goto L3c0
        L3be:
            r20 = r6
        L3c0:
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r6 = r1.httpConnection
            com.ss.android.socialbase.downloader.exception.BaseException r8 = r1.failedException
            long r23 = r13 - r4
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS
            long r11 = r1.readEndTime
            long r13 = r1.readStartTime
            long r11 = r11 - r13
            long r25 = r4.toNanos(r11)
            r16 = r3
            r17 = r7
            r18 = r9
            r19 = r10
            r21 = r6
            r22 = r8
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSegmentIO(r15, r16, r17, r18, r19, r20, r21, r22, r23, r25)
        L3e0:
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r3 = r1.host
            r3.unApplySegment(r1, r2)
            throw r0
    }

    private com.ss.android.socialbase.downloader.segment.Buffer probeFirstBuffer(com.ss.android.socialbase.downloader.segment.IBufferPool r6, java.io.InputStream r7) throws java.lang.InterruptedException, com.ss.android.socialbase.downloader.exception.BaseException, java.io.IOException {
            r5 = this;
            com.ss.android.socialbase.downloader.segment.Buffer r0 = r6.obtain()
            r1 = -1
            byte[] r2 = r0.data     // Catch: java.lang.Throwable -> L21
            int r7 = r7.read(r2)     // Catch: java.lang.Throwable -> L21
            if (r7 == r1) goto L17
            r0.size = r7     // Catch: java.lang.Throwable -> L15
            if (r7 != r1) goto L14
            r6.recycle(r0)
        L14:
            return r0
        L15:
            r2 = move-exception
            goto L23
        L17:
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L15
            r3 = 1073(0x431, float:1.504E-42)
            java.lang.String r4 = "probe"
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L15
            throw r2     // Catch: java.lang.Throwable -> L15
        L21:
            r2 = move-exception
            r7 = r1
        L23:
            if (r7 != r1) goto L28
            r6.recycle(r0)
        L28:
            throw r2
    }

    private long refreshSegmentEndOffset() {
            r4 = this;
            long r0 = r4.segmentNewEndOffset
            r2 = 0
            r4.segmentNewEndOffset = r2
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 > 0) goto Lf
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
        Lf:
            return r0
    }

    private void releaseDownload() {
            r2 = this;
            long r0 = r2.connectStartTime
            r2.lastConnectStartTime = r0
            r0 = -1
            r2.connectStartTime = r0
            r2.connectEndTime = r0
            r2.readStartTime = r0
            r2.readEndTime = r0
            r2.closeConnection()
            return
    }

    private void resetRetryTimes() {
            r1 = this;
            com.ss.android.socialbase.downloader.segment.UrlRecord r0 = r1.urlRecord
            boolean r0 = r0.isMainUrl
            if (r0 == 0) goto Ld
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo
            int r0 = r0.getRetryCount()
            goto L13
        Ld:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo
            int r0 = r0.getBackUpUrlRetryCount()
        L13:
            r1.retryCount = r0
            r0 = 0
            r1.curRetryCount = r0
            return
    }

    public boolean adjustSegmentEndOffset(long r7) {
            r6 = this;
            long r0 = r6.endOffsetInConnection
            r2 = 0
            int r4 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            r5 = 0
            if (r4 > 0) goto Le
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto Le
            return r5
        Le:
            int r4 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r4 <= 0) goto L17
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L17
            return r5
        L17:
            r6.segmentNewEndOffset = r7
            r7 = 1
            r6.threadDirty = r7
            return r7
    }

    public void close() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "close: threadIndex = "
            r0.append(r1)
            int r1 = r3.threadIndex
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SegmentReader"
            com.ss.android.socialbase.downloader.logger.Logger.i(r1, r0)
            monitor-enter(r3)
            r0 = 1
            r3.closed = r0     // Catch: java.lang.Throwable -> L32
            r3.threadDirty = r0     // Catch: java.lang.Throwable -> L32
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L32
            r3.closeConnection()
            java.util.concurrent.Future r1 = r3.future
            if (r1 == 0) goto L31
            r2 = 0
            r3.future = r2
            r1.cancel(r0)     // Catch: java.lang.Throwable -> L2d
            goto L31
        L2d:
            r0 = move-exception
            r0.printStackTrace()
        L31:
            return
        L32:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L32
            throw r0
    }

    int getCurRetryCount() {
            r1 = this;
            int r0 = r1.curRetryCount
            return r0
    }

    long getCurSegmentDownloadSpeed(long r8) {
            r7 = this;
            long r0 = r7.readStartTime
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r5 = -1
            if (r4 > 0) goto Lb
            return r5
        Lb:
            long r8 = r8 - r0
            int r0 = (r8 > r2 ? 1 : (r8 == r2 ? 0 : -1))
            if (r0 > 0) goto L11
            return r5
        L11:
            long r0 = r7.curSegmentReadOffset
            long r4 = r7.startOffsetInConnection
            int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r6 < 0) goto L20
            int r6 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r6 < 0) goto L20
            long r0 = r0 - r4
            long r0 = r0 / r8
            return r0
        L20:
            return r2
    }

    public long getCurSegmentReadOffset() {
            r2 = this;
            long r0 = r2.curSegmentReadOffset
            return r0
    }

    com.ss.android.socialbase.downloader.exception.BaseException getFailedException() {
            r1 = this;
            com.ss.android.socialbase.downloader.exception.BaseException r0 = r1.failedException
            return r0
    }

    public long getReadBytes() {
            r5 = this;
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r0 = r5.host
            monitor-enter(r0)
            long r1 = r5.readBytes     // Catch: java.lang.Throwable -> Lc
            long r3 = r5.getReadingBytes()     // Catch: java.lang.Throwable -> Lc
            long r1 = r1 + r3
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            return r1
        Lc:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            throw r1
    }

    public long getReadingBytes() {
            r8 = this;
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r0 = r8.host
            monitor-enter(r0)
            long r1 = r8.curSegmentReadOffset     // Catch: java.lang.Throwable -> L16
            long r3 = r8.startOffsetInConnection     // Catch: java.lang.Throwable -> L16
            r5 = 0
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 < 0) goto L14
            int r7 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r7 <= 0) goto L14
            long r1 = r1 - r3
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r1
        L14:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r5
        L16:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r1
    }

    long getRecentDownloadSpeed(long r2, long r4) {
            r1 = this;
            com.ss.android.socialbase.downloader.utils.DownloadStenographer r0 = r1.stenographer
            if (r0 != 0) goto L7
            r2 = -1
            return r2
        L7:
            long r2 = r0.getRecentDownloadSpeed(r2, r4)
            return r2
    }

    int getRetryCount() {
            r1 = this;
            int r0 = r1.retryCount
            return r0
    }

    long getStartOffsetInConnection() {
            r2 = this;
            long r0 = r2.startOffsetInConnection
            return r0
    }

    public boolean isExited() {
            r1 = this;
            boolean r0 = r1.exited
            return r0
    }

    boolean isFailed() {
            r1 = this;
            boolean r0 = r1.failed
            return r0
    }

    void markProgress(long r6) {
            r5 = this;
            long r0 = r5.curSegmentReadOffset
            com.ss.android.socialbase.downloader.utils.DownloadStenographer r2 = r5.stenographer
            r3 = 0
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 < 0) goto L30
            if (r2 != 0) goto Ld
            goto L30
        Ld:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "markProgress: curSegmentReadOffset = "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r4 = ", threadIndex = "
            r3.append(r4)
            int r4 = r5.threadIndex
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "SegmentReader"
            android.util.Log.i(r4, r3)
            r2.markProgress(r0, r6)
        L30:
            return
    }

    public void reconnect() {
            r1 = this;
            r0 = 0
            r1.reconnect(r0)
            return
    }

    public void reconnect(boolean r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "reconnect: threadIndex = "
            r0.append(r1)
            int r1 = r3.threadIndex
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SegmentReader"
            com.ss.android.socialbase.downloader.logger.Logger.i(r1, r0)
            monitor-enter(r3)
            r3.changeSegment = r4     // Catch: java.lang.Throwable -> L44
            r4 = 1
            r3.reconnect = r4     // Catch: java.lang.Throwable -> L44
            r3.threadDirty = r4     // Catch: java.lang.Throwable -> L44
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L44
            r3.closeConnection()
            java.lang.Thread r4 = r3.thread
            if (r4 == 0) goto L43
            java.lang.String r0 = "SegmentReader"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L43
            r1.<init>()     // Catch: java.lang.Throwable -> L43
            java.lang.String r2 = "reconnect: t.interrupt threadIndex = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L43
            int r2 = r3.threadIndex     // Catch: java.lang.Throwable -> L43
            r1.append(r2)     // Catch: java.lang.Throwable -> L43
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L43
            android.util.Log.i(r0, r1)     // Catch: java.lang.Throwable -> L43
            r4.interrupt()     // Catch: java.lang.Throwable -> L43
        L43:
            return
        L44:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L44
            throw r4
    }

    @Override
    public void run() {
            r6 = this;
            r0 = 10
            android.os.Process.setThreadPriority(r0)
            r0 = 0
            java.lang.Thread r1 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> Le1
            r6.thread = r1     // Catch: java.lang.Throwable -> Le1
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r1 = r6.host     // Catch: java.lang.Throwable -> Le1
            r1.onReaderRun(r6)     // Catch: java.lang.Throwable -> Le1
            com.ss.android.socialbase.downloader.segment.UrlRecord r1 = r6.urlRecord     // Catch: java.lang.Throwable -> Le1
            r1.recordUse(r6)     // Catch: java.lang.Throwable -> Le1
        L16:
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r1 = r6.host     // Catch: java.lang.Throwable -> Le1
            com.ss.android.socialbase.downloader.segment.UrlRecord r2 = r6.urlRecord     // Catch: java.lang.Throwable -> Le1
            com.ss.android.socialbase.downloader.segment.Segment r1 = r1.obtainSegment(r6, r2)     // Catch: java.lang.Throwable -> Le1
            java.lang.String r2 = "SegmentReader"
            if (r1 != 0) goto L3a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le1
            r1.<init>()     // Catch: java.lang.Throwable -> Le1
            java.lang.String r3 = "no more segment, thread_index = "
            r1.append(r3)     // Catch: java.lang.Throwable -> Le1
            int r3 = r6.threadIndex     // Catch: java.lang.Throwable -> Le1
            r1.append(r3)     // Catch: java.lang.Throwable -> Le1
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Le1
            com.ss.android.socialbase.downloader.logger.Logger.i(r2, r1)     // Catch: java.lang.Throwable -> Le1
            goto Lc5
        L3a:
            r6.curSegment = r1     // Catch: java.lang.Throwable -> Le1
            boolean r3 = r6.download(r1)     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
            if (r3 == 0) goto L4f
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r3 = r6.succeedSegments     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
            r3.add(r1)     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
            r6.curSegment = r0     // Catch: java.lang.Throwable -> Le1
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r2 = r6.host     // Catch: java.lang.Throwable -> Le1
        L4b:
            r2.unObtainSegment(r6, r1)     // Catch: java.lang.Throwable -> Le1
            goto L16
        L4f:
            boolean r3 = r6.closed     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
            if (r3 != 0) goto L7b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
            r3.<init>()     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
            java.lang.String r4 = "download segment failed, segment = "
            r3.append(r4)     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
            r3.append(r1)     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
            java.lang.String r4 = ", thread_index = "
            r3.append(r4)     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
            int r4 = r6.threadIndex     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
            r3.append(r4)     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
            java.lang.String r4 = ", failedException = "
            r3.append(r4)     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
            com.ss.android.socialbase.downloader.exception.BaseException r4 = r6.failedException     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
            r3.append(r4)     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
            com.ss.android.socialbase.downloader.logger.Logger.e(r2, r3)     // Catch: java.lang.Throwable -> L83 com.ss.android.socialbase.downloader.segment.SegmentApplyException -> L85
        L7b:
            r6.curSegment = r0     // Catch: java.lang.Throwable -> Le1
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r2 = r6.host     // Catch: java.lang.Throwable -> Le1
        L7f:
            r2.unObtainSegment(r6, r1)     // Catch: java.lang.Throwable -> Le1
            goto Lc5
        L83:
            r2 = move-exception
            goto Ld9
        L85:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L83
            r4.<init>()     // Catch: java.lang.Throwable -> L83
            java.lang.String r5 = "run: SegmentApplyException, e = "
            r4.append(r5)     // Catch: java.lang.Throwable -> L83
            r4.append(r3)     // Catch: java.lang.Throwable -> L83
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L83
            com.ss.android.socialbase.downloader.logger.Logger.e(r2, r3)     // Catch: java.lang.Throwable -> L83
            int r3 = r6.segmentApplyRetryTimes     // Catch: java.lang.Throwable -> L83
            r4 = 50
            if (r3 < r4) goto Lcd
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L83
            r3.<init>()     // Catch: java.lang.Throwable -> L83
            java.lang.String r4 = "segment apply failed "
            r3.append(r4)     // Catch: java.lang.Throwable -> L83
            int r4 = r6.segmentApplyRetryTimes     // Catch: java.lang.Throwable -> L83
            r3.append(r4)     // Catch: java.lang.Throwable -> L83
            java.lang.String r4 = "times, thread_index = "
            r3.append(r4)     // Catch: java.lang.Throwable -> L83
            int r4 = r6.threadIndex     // Catch: java.lang.Throwable -> L83
            r3.append(r4)     // Catch: java.lang.Throwable -> L83
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L83
            com.ss.android.socialbase.downloader.logger.Logger.e(r2, r3)     // Catch: java.lang.Throwable -> L83
            r6.curSegment = r0     // Catch: java.lang.Throwable -> Le1
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r2 = r6.host     // Catch: java.lang.Throwable -> Le1
            goto L7f
        Lc5:
            com.ss.android.socialbase.downloader.segment.UrlRecord r1 = r6.urlRecord     // Catch: java.lang.Throwable -> Lef
            r1.recordUnUse(r6)     // Catch: java.lang.Throwable -> Lef
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r1 = r6.host     // Catch: java.lang.Throwable -> Lef
            goto Lec
        Lcd:
            int r2 = r6.segmentApplyRetryTimes     // Catch: java.lang.Throwable -> L83
            int r2 = r2 + 1
            r6.segmentApplyRetryTimes = r2     // Catch: java.lang.Throwable -> L83
            r6.curSegment = r0     // Catch: java.lang.Throwable -> Le1
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r2 = r6.host     // Catch: java.lang.Throwable -> Le1
            goto L4b
        Ld9:
            r6.curSegment = r0     // Catch: java.lang.Throwable -> Le1
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r3 = r6.host     // Catch: java.lang.Throwable -> Le1
            r3.unObtainSegment(r6, r1)     // Catch: java.lang.Throwable -> Le1
            throw r2     // Catch: java.lang.Throwable -> Le1
        Le1:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> Lf2
            com.ss.android.socialbase.downloader.segment.UrlRecord r1 = r6.urlRecord     // Catch: java.lang.Throwable -> Lef
            r1.recordUnUse(r6)     // Catch: java.lang.Throwable -> Lef
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r1 = r6.host     // Catch: java.lang.Throwable -> Lef
        Lec:
            r1.onReaderExit(r6)     // Catch: java.lang.Throwable -> Lef
        Lef:
            r6.thread = r0
            return
        Lf2:
            r1 = move-exception
            com.ss.android.socialbase.downloader.segment.UrlRecord r2 = r6.urlRecord     // Catch: java.lang.Throwable -> Lfd
            r2.recordUnUse(r6)     // Catch: java.lang.Throwable -> Lfd
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r2 = r6.host     // Catch: java.lang.Throwable -> Lfd
            r2.onReaderExit(r6)     // Catch: java.lang.Throwable -> Lfd
        Lfd:
            r6.thread = r0
            throw r1
    }

    public void setExited(boolean r1) {
            r0 = this;
            r0.exited = r1
            return
    }

    void setFailed(boolean r1) {
            r0 = this;
            r0.failed = r1
            return
    }

    void setFuture(java.util.concurrent.Future r1) {
            r0 = this;
            r0.future = r1
            return
    }

    boolean switchUrlRecord(com.ss.android.socialbase.downloader.segment.UrlRecord r3) {
            r2 = this;
            int r0 = r2.switchUrlTimes
            r1 = 30
            if (r0 < r1) goto L8
            r3 = 0
            return r3
        L8:
            r1 = 1
            int r0 = r0 + r1
            r2.switchUrlTimes = r0
            com.ss.android.socialbase.downloader.segment.UrlRecord r0 = r2.urlRecord
            if (r0 == 0) goto L13
            r0.recordUnUse(r2)
        L13:
            r3.recordUse(r2)
            r2.urlRecord = r3
            r2.resetRetryTimes()
            return r1
    }

    void updateReadBytes() {
            r6 = this;
            com.ss.android.socialbase.downloader.segment.UrlRecord r0 = r6.urlRecord
            com.ss.android.socialbase.downloader.segment.ISegmentCallback r1 = r6.host     // Catch: java.lang.Throwable -> L20
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L20
            long r2 = r6.getReadingBytes()     // Catch: java.lang.Throwable -> L1d
            r4 = 0
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 <= 0) goto L17
            long r4 = r6.readBytes     // Catch: java.lang.Throwable -> L1d
            long r4 = r4 + r2
            r6.readBytes = r4     // Catch: java.lang.Throwable -> L1d
            r0.increaseDownloadBytes(r2)     // Catch: java.lang.Throwable -> L1d
        L17:
            r2 = -1
            r6.curSegmentReadOffset = r2     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1d
            goto L20
        L1d:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1d
            throw r0     // Catch: java.lang.Throwable -> L20
        L20:
            return
    }
}
