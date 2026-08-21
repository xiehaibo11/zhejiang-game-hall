package com.ss.android.socialbase.downloader.segment;

public class SegmentDispatcher implements com.ss.android.socialbase.downloader.network.DownloadDnsManager.Callback, com.ss.android.socialbase.downloader.segment.ISegmentCallback {
    private static final int READ_WATCH_TIME = 2000;
    private static final java.lang.String TAG = "SegmentDispatcher";
    private volatile boolean allReaderFailed;
    private final com.ss.android.socialbase.downloader.segment.BufferQueue bufferQueue;
    private volatile boolean canceled;
    private long connectTimeout;
    private final com.ss.android.socialbase.downloader.thread.DownloadWatchDog.IWatcher connectWatcher;
    private final boolean debug;
    private final java.util.List<com.ss.android.socialbase.downloader.segment.Segment> dispatchedSegments;
    private final com.ss.android.socialbase.downloader.model.DownloadInfo downloadInfo;
    private com.ss.android.socialbase.downloader.exception.BaseException failedException;
    private com.ss.android.socialbase.downloader.model.HttpResponse firstBackupUrlHttpResponse;
    private final java.lang.Object firstConnectionLock;
    private final com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback hostCallback;
    private volatile boolean isAllContentDownloaded;
    private long lastReconnectTime;
    private com.ss.android.socialbase.downloader.model.HttpResponse mainUrlHttpResponse;
    private volatile boolean needWaitDnsResolve;
    private volatile boolean paused;
    private float poorSpeedRatio;
    private long readTimeout;
    private final com.ss.android.socialbase.downloader.thread.DownloadWatchDog.IWatcher readWatcher;
    private final java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> readers;
    private int reconnectCount;
    private final com.ss.android.socialbase.downloader.utils.DownloadStenographer stenographer;
    private final com.ss.android.socialbase.downloader.segment.SegmentStrategy strategy;
    private final java.util.LinkedList<com.ss.android.socialbase.downloader.segment.Segment> toDispatchSegments;
    private long totalLength;
    private int urlIndex;
    private final java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> urlRecords;
    private final com.ss.android.socialbase.downloader.thread.DownloadWatchDog watchDog;
    private final com.ss.android.socialbase.downloader.segment.MultiSegmentWriter writer;



    public SegmentDispatcher(com.ss.android.socialbase.downloader.model.DownloadInfo r5, com.ss.android.socialbase.downloader.segment.SegmentStrategy r6, com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r7) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.canceled = r0
            r4.paused = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r4.readers = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r4.urlRecords = r1
            r1 = 1
            r4.needWaitDnsResolve = r1
            java.util.LinkedList r2 = new java.util.LinkedList
            r2.<init>()
            r4.toDispatchSegments = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r4.dispatchedSegments = r2
            java.lang.Object r2 = new java.lang.Object
            r2.<init>()
            r4.firstConnectionLock = r2
            r4.allReaderFailed = r0
            com.ss.android.socialbase.downloader.segment.SegmentDispatcher$1 r2 = new com.ss.android.socialbase.downloader.segment.SegmentDispatcher$1
            r2.<init>(r4)
            r4.connectWatcher = r2
            com.ss.android.socialbase.downloader.segment.SegmentDispatcher$2 r2 = new com.ss.android.socialbase.downloader.segment.SegmentDispatcher$2
            r2.<init>(r4)
            r4.readWatcher = r2
            r4.downloadInfo = r5
            r4.strategy = r6
            com.ss.android.socialbase.downloader.segment.BufferQueue r2 = new com.ss.android.socialbase.downloader.segment.BufferQueue
            int r6 = r6.getBufferCount()
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r3 = r4.strategy
            int r3 = r3.getBufferSize()
            r2.<init>(r6, r3)
            r4.bufferQueue = r2
            r4.hostCallback = r7
            com.ss.android.socialbase.downloader.segment.MultiSegmentWriter r6 = new com.ss.android.socialbase.downloader.segment.MultiSegmentWriter
            r6.<init>(r5, r7, r2)
            r4.writer = r6
            com.ss.android.socialbase.downloader.thread.DownloadWatchDog r6 = new com.ss.android.socialbase.downloader.thread.DownloadWatchDog
            r6.<init>()
            r4.watchDog = r6
            com.ss.android.socialbase.downloader.utils.DownloadStenographer r6 = new com.ss.android.socialbase.downloader.utils.DownloadStenographer
            r6.<init>()
            r4.stenographer = r6
            int r5 = r5.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r5 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r5)
            java.lang.String r6 = "debug"
            int r5 = r5.optInt(r6)
            if (r5 != r1) goto L7b
            r0 = r1
        L7b:
            r4.debug = r0
            return
    }

    static boolean access$000(com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0) {
            boolean r0 = r0.canceled
            return r0
    }

    static boolean access$100(com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0) {
            boolean r0 = r0.paused
            return r0
    }

    static com.ss.android.socialbase.downloader.model.HttpResponse access$200(com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0) {
            com.ss.android.socialbase.downloader.model.HttpResponse r0 = r0.mainUrlHttpResponse
            return r0
    }

    static com.ss.android.socialbase.downloader.model.HttpResponse access$300(com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0) {
            com.ss.android.socialbase.downloader.model.HttpResponse r0 = r0.firstBackupUrlHttpResponse
            return r0
    }

    static long access$400(com.ss.android.socialbase.downloader.segment.SegmentDispatcher r2) {
            long r0 = r2.connectTimeout
            return r0
    }

    static com.ss.android.socialbase.downloader.segment.SegmentReader access$500(com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0, boolean r1, long r2, long r4) {
            com.ss.android.socialbase.downloader.segment.SegmentReader r0 = r0.findEarliestConnectTimeoutReader(r1, r2, r4)
            return r0
    }

    static boolean access$600(com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0, com.ss.android.socialbase.downloader.segment.SegmentReader r1) {
            boolean r0 = r0.trySwitchNextUrlForReader(r1)
            return r0
    }

    static java.util.List access$700(com.ss.android.socialbase.downloader.segment.SegmentDispatcher r0) {
            java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> r0 = r0.urlRecords
            return r0
    }

    static long access$800(com.ss.android.socialbase.downloader.segment.SegmentDispatcher r2) {
            long r0 = r2.scheduleWatchRead()
            return r0
    }

    private void addIpListLocked(java.lang.String r5, java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> r6) {
            r4 = this;
            boolean r0 = r4.debug
            if (r0 == 0) goto L2b
            java.util.Iterator r0 = r6.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2b
            java.lang.Object r1 = r0.next()
            com.ss.android.socialbase.downloader.segment.UrlRecord r1 = (com.ss.android.socialbase.downloader.segment.UrlRecord) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "addIpListLocked: urlRecord = "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "SegmentDispatcher"
            android.util.Log.i(r2, r1)
            goto L8
        L2b:
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r0 = r4.strategy
            int r0 = r0.getIpStrategy()
            r1 = 1
            if (r0 == r1) goto L37
            r2 = 3
            if (r0 != r2) goto L4c
        L37:
            int r5 = r4.indexOfUrl(r5)
            if (r5 < 0) goto L4c
            java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> r0 = r4.urlRecords
            int r0 = r0.size()
            if (r5 >= r0) goto L4c
            java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> r0 = r4.urlRecords
            int r5 = r5 + r1
            r0.addAll(r5, r6)
            return
        L4c:
            java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> r5 = r4.urlRecords
            r5.addAll(r6)
            return
    }

    private void applySegmentLocked(com.ss.android.socialbase.downloader.segment.SegmentReader r22, com.ss.android.socialbase.downloader.segment.Segment r23) throws com.ss.android.socialbase.downloader.segment.SegmentApplyException {
            r21 = this;
            r0 = r21
            r1 = r22
            r2 = r23
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "applySegment: start "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "SegmentDispatcher"
            com.ss.android.socialbase.downloader.logger.Logger.i(r4, r3)
            com.ss.android.socialbase.downloader.segment.SegmentReader r3 = r2.owner
            java.lang.String r5 = "applySegment: "
            if (r3 != r1) goto L3d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r5)
            r3.append(r1)
            java.lang.String r1 = " is already the owner of "
            r3.append(r1)
            r3.append(r2)
            java.lang.String r1 = r3.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r4, r1)
            return
        L3d:
            com.ss.android.socialbase.downloader.segment.SegmentReader r3 = r2.owner
            if (r3 != 0) goto L2bb
            long r7 = r22.getStartOffsetInConnection()
            long r9 = r23.getCurrentOffsetRead()
            int r3 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r3 != 0) goto L2b2
            long r7 = r23.getStartOffset()
            int r3 = r0.indexOfSegmentLocked(r7)
            r9 = 2
            r10 = -1
            if (r3 == r10) goto L290
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r10 = r0.dispatchedSegments
            java.lang.Object r10 = r10.get(r3)
            com.ss.android.socialbase.downloader.segment.Segment r10 = (com.ss.android.socialbase.downloader.segment.Segment) r10
            if (r10 == 0) goto L290
            r11 = 0
            if (r10 == r2) goto L129
            long r14 = r10.getStartOffset()
            long r16 = r23.getStartOffset()
            int r14 = (r14 > r16 ? 1 : (r14 == r16 ? 0 : -1))
            if (r14 != 0) goto L101
            long r14 = r0.getRemainReadBytes(r10)
            int r16 = (r14 > r11 ? 1 : (r14 == r11 ? 0 : -1))
            if (r16 <= 0) goto L101
            com.ss.android.socialbase.downloader.segment.SegmentReader r13 = r10.owner
            if (r13 == 0) goto Lbb
            r17 = 524288(0x80000, double:2.590327E-318)
            int r17 = (r14 > r17 ? 1 : (r14 == r17 ? 0 : -1))
            if (r17 >= 0) goto La4
            long r11 = r1.readStartTime
            r19 = r7
            long r6 = r13.readStartTime
            long r11 = r11 - r6
            r6 = 1000(0x3e8, double:4.94E-321)
            int r6 = (r11 > r6 ? 1 : (r11 == r6 ? 0 : -1))
            if (r6 <= 0) goto La6
            long r6 = r10.getCurrentOffsetRead()
            long r11 = r23.getCurrentOffsetRead()
            long r6 = r6 - r11
            r11 = 2
            long r14 = r14 / r11
            int r6 = (r6 > r14 ? 1 : (r6 == r14 ? 0 : -1))
            if (r6 >= 0) goto La6
            goto Lbd
        La4:
            r19 = r7
        La6:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "applySegmentLocked: has same segment, but owner is normal, abort. segmentInList = "
            r6.append(r7)
            r6.append(r10)
            java.lang.String r6 = r6.toString()
            android.util.Log.i(r4, r6)
            goto L103
        Lbb:
            r19 = r7
        Lbd:
            if (r13 == 0) goto Ld8
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "applySegmentLocked: has same segment,and owner too slow, segmentInList = "
            r6.append(r7)
            r6.append(r10)
            java.lang.String r6 = r6.toString()
            android.util.Log.i(r4, r6)
            r6 = 1
            r13.reconnect(r6)
            goto Lec
        Ld8:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "applySegmentLocked: has same segment and no owner, segmentInList = "
            r6.append(r7)
            r6.append(r10)
            java.lang.String r6 = r6.toString()
            android.util.Log.i(r4, r6)
        Lec:
            long r6 = r10.getEndOffset()
            r2.setEndOffset(r6)
            int r6 = r10.getCompetitor()
            r2.setCompetitor(r6)
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r6 = r0.dispatchedSegments
            r6.set(r3, r2)
            r13 = 1
            goto L104
        L101:
            r19 = r7
        L103:
            r13 = 0
        L104:
            if (r13 == 0) goto L107
            goto L12b
        L107:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            r1.append(r2)
            java.lang.String r2 = " not exist! but has another same segment, segmentInList = "
            r1.append(r2)
            r1.append(r10)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.e(r4, r1)
            com.ss.android.socialbase.downloader.segment.SegmentApplyException r1 = new com.ss.android.socialbase.downloader.segment.SegmentApplyException
            java.lang.String r2 = "segment not exist, but has another same segment"
            r1.<init>(r9, r2)
            throw r1
        L129:
            r19 = r7
        L12b:
            long r6 = r23.getDownloadBytes()
            int r8 = r3 + (-1)
        L131:
            r9 = 1
            if (r8 < 0) goto L1f2
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r11 = r0.dispatchedSegments
            java.lang.Object r11 = r11.get(r8)
            com.ss.android.socialbase.downloader.segment.Segment r11 = (com.ss.android.socialbase.downloader.segment.Segment) r11
            long r12 = r11.getEndOffset()
            r14 = 0
            int r16 = (r12 > r14 ? 1 : (r12 == r14 ? 0 : -1))
            if (r16 <= 0) goto L14b
            int r12 = (r12 > r19 ? 1 : (r12 == r19 ? 0 : -1))
            if (r12 < 0) goto L1af
        L14b:
            int r12 = (r6 > r14 ? 1 : (r6 == r14 ? 0 : -1))
            if (r12 > 0) goto L182
            long r12 = r11.getCurrentOffsetRead()
            int r12 = (r12 > r19 ? 1 : (r12 == r19 ? 0 : -1))
            if (r12 > 0) goto L158
            goto L182
        L158:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "applySegment:prev's current has over this start, prev = "
            r1.append(r3)
            r1.append(r11)
            java.lang.String r3 = ", segment = "
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.e(r4, r1)
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r1 = r0.dispatchedSegments
            r1.remove(r2)
            com.ss.android.socialbase.downloader.segment.SegmentApplyException r1 = new com.ss.android.socialbase.downloader.segment.SegmentApplyException
            r2 = 3
            java.lang.String r3 = "prev overstep"
            r1.<init>(r2, r3)
            throw r1
        L182:
            com.ss.android.socialbase.downloader.segment.SegmentReader r12 = r11.owner
            if (r12 != 0) goto L1b3
            long r12 = r19 - r9
            r11.setEndOffset(r12)
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "applySegment: prev set end, prev = "
            r12.append(r13)
            r12.append(r11)
            java.lang.String r12 = r12.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r4, r12)
            long r11 = r11.getDownloadBytes()
            r13 = 0
            int r11 = (r11 > r13 ? 1 : (r11 == r13 ? 0 : -1))
            if (r11 <= 0) goto L1af
            java.lang.String r6 = "applySegmentLocked:q break"
            android.util.Log.d(r4, r6)
            goto L1f2
        L1af:
            int r8 = r8 + (-1)
            goto L131
        L1b3:
            com.ss.android.socialbase.downloader.segment.SegmentReader r6 = r11.owner
            long r7 = r19 - r9
            boolean r6 = r6.adjustSegmentEndOffset(r7)
            if (r6 == 0) goto L1d5
            r11.setEndOffset(r7)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "applySegment: adjustSegmentEndOffset succeed, prev = "
            r6.append(r7)
            r6.append(r11)
            java.lang.String r6 = r6.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r4, r6)
            goto L1f2
        L1d5:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "applySegment: adjustSegmentEndOffset filed, prev = "
            r1.append(r2)
            r1.append(r11)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.e(r4, r1)
            com.ss.android.socialbase.downloader.segment.SegmentApplyException r1 = new com.ss.android.socialbase.downloader.segment.SegmentApplyException
            r2 = 4
            java.lang.String r3 = "prev end adjust fail"
            r1.<init>(r2, r3)
            throw r1
        L1f2:
            r6 = 1
            int r3 = r3 + r6
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r6 = r0.dispatchedSegments
            int r6 = r6.size()
        L1fa:
            if (r3 >= r6) goto L24c
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r7 = r0.dispatchedSegments
            java.lang.Object r7 = r7.get(r3)
            com.ss.android.socialbase.downloader.segment.Segment r7 = (com.ss.android.socialbase.downloader.segment.Segment) r7
            long r11 = r7.getDownloadBytes()
            r13 = 0
            int r8 = (r11 > r13 ? 1 : (r11 == r13 ? 0 : -1))
            if (r8 > 0) goto L216
            com.ss.android.socialbase.downloader.segment.SegmentReader r8 = r7.owner
            if (r8 == 0) goto L213
            goto L216
        L213:
            int r3 = r3 + 1
            goto L1fa
        L216:
            long r11 = r23.getEndOffset()
            long r15 = r7.getStartOffset()
            int r3 = (r11 > r13 ? 1 : (r11 == r13 ? 0 : -1))
            if (r3 <= 0) goto L226
            int r3 = (r11 > r15 ? 1 : (r11 == r15 ? 0 : -1))
            if (r3 < 0) goto L247
        L226:
            long r8 = r15 - r9
            r2.setEndOffset(r8)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r6 = "applySegment: segment set end:"
            r3.append(r6)
            r3.append(r8)
            java.lang.String r6 = ", later = "
            r3.append(r6)
            r3.append(r7)
            java.lang.String r3 = r3.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r4, r3)
        L247:
            java.lang.String r3 = "applySegmentLocked: break 2"
            android.util.Log.d(r4, r3)
        L24c:
            long r6 = r23.getEndOffset()
            r8 = 0
            int r3 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r3 <= 0) goto L279
            int r3 = (r19 > r6 ? 1 : (r19 == r6 ? 0 : -1))
            if (r3 > 0) goto L263
            long r8 = r23.getCurrentOffsetRead()
            int r3 = (r8 > r6 ? 1 : (r8 == r6 ? 0 : -1))
            if (r3 > 0) goto L263
            goto L279
        L263:
            com.ss.android.socialbase.downloader.segment.SegmentApplyException r1 = new com.ss.android.socialbase.downloader.segment.SegmentApplyException
            r3 = 6
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r1.<init>(r3, r2)
            throw r1
        L279:
            r2.owner = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "applySegment: OK "
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r4, r1)
            return
        L290:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            r1.append(r2)
            java.lang.String r2 = " not exist! segmentIndex = "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.e(r4, r1)
            com.ss.android.socialbase.downloader.segment.SegmentApplyException r1 = new com.ss.android.socialbase.downloader.segment.SegmentApplyException
            java.lang.String r2 = "segment not exist"
            r1.<init>(r9, r2)
            throw r1
        L2b2:
            com.ss.android.socialbase.downloader.segment.SegmentApplyException r1 = new com.ss.android.socialbase.downloader.segment.SegmentApplyException
            r2 = 5
            java.lang.String r3 = "applySegment"
            r1.<init>(r2, r3)
            throw r1
        L2bb:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            r1.append(r2)
            java.lang.String r3 = " is already has an owner:"
            r1.append(r3)
            com.ss.android.socialbase.downloader.segment.SegmentReader r2 = r2.owner
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.e(r4, r1)
            com.ss.android.socialbase.downloader.segment.SegmentApplyException r1 = new com.ss.android.socialbase.downloader.segment.SegmentApplyException
            java.lang.String r2 = "segment already has an owner"
            r3 = 1
            r1.<init>(r3, r2)
            throw r1
    }

    private void arrangeSegmentLocked(java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r7, com.ss.android.socialbase.downloader.segment.Segment r8, boolean r9) {
            r6 = this;
            long r0 = r8.getStartOffset()
            int r2 = r7.size()
            r3 = 0
        L9:
            if (r3 >= r2) goto L1c
            java.lang.Object r4 = r7.get(r3)
            com.ss.android.socialbase.downloader.segment.Segment r4 = (com.ss.android.socialbase.downloader.segment.Segment) r4
            long r4 = r4.getStartOffset()
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 < 0) goto L1c
            int r3 = r3 + 1
            goto L9
        L1c:
            r7.add(r3, r8)
            if (r9 == 0) goto L24
            r8.setIndex(r2)
        L24:
            return
    }

    private java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> assembleIpAddress(java.lang.String r8, java.util.List<java.net.InetAddress> r9) {
            r7 = this;
            r0 = 0
            if (r9 == 0) goto La3
            boolean r1 = r9.isEmpty()
            if (r1 == 0) goto Lb
            goto La3
        Lb:
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.util.Iterator r9 = r9.iterator()
            r2 = 0
            r3 = r2
        L16:
            boolean r4 = r9.hasNext()
            if (r4 == 0) goto L67
            java.lang.Object r4 = r9.next()
            java.net.InetAddress r4 = (java.net.InetAddress) r4
            if (r4 == 0) goto L16
            java.lang.String r4 = r4.getHostAddress()
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L16
            boolean r5 = r7.debug
            if (r5 == 0) goto L48
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "onDnsResolved: ip = "
            r5.append(r6)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "SegmentDispatcher"
            android.util.Log.i(r6, r5)
        L48:
            com.ss.android.socialbase.downloader.segment.UrlRecord r5 = new com.ss.android.socialbase.downloader.segment.UrlRecord
            r5.<init>(r8, r4)
            java.lang.String r4 = r5.ipFamily
            java.lang.Object r4 = r1.get(r4)
            java.util.LinkedList r4 = (java.util.LinkedList) r4
            if (r4 != 0) goto L61
            java.util.LinkedList r4 = new java.util.LinkedList
            r4.<init>()
            java.lang.String r6 = r5.ipFamily
            r1.put(r6, r4)
        L61:
            r4.add(r5)
            int r3 = r3 + 1
            goto L16
        L67:
            if (r3 <= 0) goto La3
            java.util.ArrayList r8 = new java.util.ArrayList
            r8.<init>()
        L6e:
            java.util.Set r9 = r1.entrySet()
            java.util.Iterator r9 = r9.iterator()
            r0 = r2
        L77:
            boolean r4 = r9.hasNext()
            if (r4 == 0) goto L9e
            java.lang.Object r4 = r9.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.Object r4 = r4.getValue()
            java.util.LinkedList r4 = (java.util.LinkedList) r4
            if (r4 == 0) goto L77
            boolean r5 = r4.isEmpty()
            if (r5 != 0) goto L77
            java.lang.Object r0 = r4.pollFirst()
            com.ss.android.socialbase.downloader.segment.UrlRecord r0 = (com.ss.android.socialbase.downloader.segment.UrlRecord) r0
            r8.add(r0)
            int r3 = r3 + (-1)
            r0 = 1
            goto L77
        L9e:
            if (r3 <= 0) goto La2
            if (r0 != 0) goto L6e
        La2:
            return r8
        La3:
            return r0
    }

    private void checkDownloadedBytesLocked(java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r7) {
            r6 = this;
            long r0 = com.ss.android.socialbase.downloader.segment.SegmentUtils.getDownloadedBytes(r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r2 = "checkDownloadBytes: getCurBytes = "
            r7.append(r2)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r6.downloadInfo
            long r2 = r2.getCurBytes()
            r7.append(r2)
            java.lang.String r2 = ", totalBytes = "
            r7.append(r2)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r6.downloadInfo
            long r2 = r2.getTotalBytes()
            r7.append(r2)
            java.lang.String r2 = ", downloadedBytes = "
            r7.append(r2)
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            java.lang.String r2 = "SegmentDispatcher"
            com.ss.android.socialbase.downloader.logger.Logger.i(r2, r7)
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r6.downloadInfo
            long r2 = r7.getTotalBytes()
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 <= 0) goto L52
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r6.downloadInfo
            long r2 = r7.getTotalBytes()
            r4 = 0
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 <= 0) goto L52
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r6.downloadInfo
            long r0 = r7.getTotalBytes()
        L52:
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r6.downloadInfo
            long r2 = r7.getCurBytes()
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r6.downloadInfo
            long r4 = r7.getTotalBytes()
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 == 0) goto L71
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r6.downloadInfo
            long r2 = r7.getCurBytes()
            int r7 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r7 == 0) goto L71
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r6.downloadInfo
            r7.setCurBytes(r0)
        L71:
            return
    }

    private void checkSegmentHttpResponseLocked(com.ss.android.socialbase.downloader.segment.SegmentReader r10, com.ss.android.socialbase.downloader.segment.Segment r11, com.ss.android.socialbase.downloader.segment.UrlRecord r12, com.ss.android.socialbase.downloader.model.HttpResponse r13) throws com.ss.android.socialbase.downloader.exception.BaseException, com.ss.android.socialbase.downloader.exception.RetryThrowable {
            r9 = this;
            com.ss.android.socialbase.downloader.segment.SegmentReader r0 = r11.owner
            if (r0 == 0) goto L10
            if (r0 != r10) goto L7
            goto L10
        L7:
            com.ss.android.socialbase.downloader.segment.SegmentApplyException r10 = new com.ss.android.socialbase.downloader.segment.SegmentApplyException
            r11 = 1
            java.lang.String r12 = "segment already has an owner"
            r10.<init>(r11, r12)
            throw r10
        L10:
            long r0 = r10.getStartOffsetInConnection()
            long r2 = r11.getCurrentOffsetRead()
            int r10 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r10 != 0) goto L138
            boolean r10 = r13.acceptPartial()
            r0 = 0
            if (r10 != 0) goto L95
            long r2 = r11.getCurrentOffsetRead()
            int r10 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            r2 = 1004(0x3ec, float:1.407E-42)
            if (r10 > 0) goto L72
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r3 = "parseHttpResponse: segment.getCurrentOffsetRead = "
            r10.append(r3)
            long r3 = r11.getCurrentOffsetRead()
            r10.append(r3)
            java.lang.String r10 = r10.toString()
            java.lang.String r3 = "SegmentDispatcher"
            com.ss.android.socialbase.downloader.logger.Logger.e(r3, r10)
            boolean r10 = r13.isResponseDataFromBegin()
            if (r10 == 0) goto L4f
            goto L95
        L4f:
            com.ss.android.socialbase.downloader.exception.DownloadHttpException r10 = new com.ss.android.socialbase.downloader.exception.DownloadHttpException
            int r12 = r13.responseCode
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "2: response code error : "
            r0.append(r1)
            int r13 = r13.responseCode
            r0.append(r13)
            java.lang.String r13 = " segment="
            r0.append(r13)
            r0.append(r11)
            java.lang.String r11 = r0.toString()
            r10.<init>(r2, r12, r11)
            throw r10
        L72:
            com.ss.android.socialbase.downloader.exception.DownloadHttpException r10 = new com.ss.android.socialbase.downloader.exception.DownloadHttpException
            int r12 = r13.responseCode
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "1: response code error : "
            r0.append(r1)
            int r13 = r13.responseCode
            r0.append(r13)
            java.lang.String r13 = " segment="
            r0.append(r13)
            r0.append(r11)
            java.lang.String r11 = r0.toString()
            r10.<init>(r2, r12, r11)
            throw r10
        L95:
            boolean r10 = r12.isMainUrl
            if (r10 == 0) goto Lee
            com.ss.android.socialbase.downloader.model.HttpResponse r10 = r9.mainUrlHttpResponse
            if (r10 != 0) goto L137
            r9.mainUrlHttpResponse = r13
            java.lang.Object r10 = r9.firstConnectionLock
            monitor-enter(r10)
            java.lang.Object r2 = r9.firstConnectionLock     // Catch: java.lang.Throwable -> Leb
            r2.notify()     // Catch: java.lang.Throwable -> Leb
            monitor-exit(r10)     // Catch: java.lang.Throwable -> Leb
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r10 = r9.hostCallback
            if (r10 == 0) goto Lb7
            java.lang.String r12 = r12.url
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r2 = r13.connection
            long r3 = r11.getCurrentOffsetRead()
            r10.handleFirstConnection(r12, r2, r3)
        Lb7:
            long r10 = r13.getTotalLength()
            int r12 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r12 <= 0) goto L137
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r12 = r9.dispatchedSegments
            java.util.Iterator r12 = r12.iterator()
        Lc5:
            boolean r13 = r12.hasNext()
            if (r13 == 0) goto L137
            java.lang.Object r13 = r12.next()
            com.ss.android.socialbase.downloader.segment.Segment r13 = (com.ss.android.socialbase.downloader.segment.Segment) r13
            long r2 = r13.getEndOffset()
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            r3 = 1
            if (r2 <= 0) goto Le5
            long r5 = r13.getEndOffset()
            long r7 = r10 - r3
            int r2 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r2 <= 0) goto Lc5
        Le5:
            long r2 = r10 - r3
            r13.setEndOffset(r2)
            goto Lc5
        Leb:
            r11 = move-exception
            monitor-exit(r10)     // Catch: java.lang.Throwable -> Leb
            throw r11
        Lee:
            r9.validateHttpResponse(r13)
            com.ss.android.socialbase.downloader.model.HttpResponse r10 = r9.firstBackupUrlHttpResponse
            if (r10 != 0) goto L137
            r9.firstBackupUrlHttpResponse = r13
            com.ss.android.socialbase.downloader.model.DownloadInfo r10 = r9.downloadInfo
            long r10 = r10.getTotalBytes()
            int r10 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r10 > 0) goto L12a
            long r10 = r13.getTotalLength()
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r0 = "checkSegmentHttpResponse:len="
            r13.append(r0)
            r13.append(r10)
            java.lang.String r0 = ",url="
            r13.append(r0)
            java.lang.String r12 = r12.url
            r13.append(r12)
            java.lang.String r12 = r13.toString()
            java.lang.String r13 = "SegmentDispatcher"
            com.ss.android.socialbase.downloader.logger.Logger.i(r13, r12)
            com.ss.android.socialbase.downloader.model.DownloadInfo r12 = r9.downloadInfo
            r12.setTotalBytes(r10)
        L12a:
            java.lang.Object r10 = r9.firstConnectionLock
            monitor-enter(r10)
            java.lang.Object r11 = r9.firstConnectionLock     // Catch: java.lang.Throwable -> L134
            r11.notify()     // Catch: java.lang.Throwable -> L134
            monitor-exit(r10)     // Catch: java.lang.Throwable -> L134
            goto L137
        L134:
            r11 = move-exception
            monitor-exit(r10)     // Catch: java.lang.Throwable -> L134
            throw r11
        L137:
            return
        L138:
            com.ss.android.socialbase.downloader.segment.SegmentApplyException r10 = new com.ss.android.socialbase.downloader.segment.SegmentApplyException
            r11 = 5
            java.lang.String r12 = "applySegment"
            r10.<init>(r11, r12)
            throw r10
    }

    private void clearCoveredSegmentLocked() {
            r14 = this;
            long r0 = r14.totalLength
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L9
            return
        L9:
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r0 = r14.dispatchedSegments
            int r0 = r0.size()
            r1 = 1
            if (r0 > r1) goto L13
            return
        L13:
            r4 = 0
            r5 = 0
            r6 = r1
        L16:
            java.lang.String r7 = "SegmentDispatcher"
            if (r6 >= r0) goto L7e
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r8 = r14.dispatchedSegments
            java.lang.Object r8 = r8.get(r5)
            com.ss.android.socialbase.downloader.segment.Segment r8 = (com.ss.android.socialbase.downloader.segment.Segment) r8
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r9 = r14.dispatchedSegments
            java.lang.Object r9 = r9.get(r6)
            com.ss.android.socialbase.downloader.segment.Segment r9 = (com.ss.android.socialbase.downloader.segment.Segment) r9
            long r10 = r8.getCurrentOffsetRead()
            long r12 = r9.getStartOffset()
            int r10 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
            if (r10 <= 0) goto L6d
            long r10 = r9.getDownloadBytes()
            int r10 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r10 > 0) goto L6d
            com.ss.android.socialbase.downloader.segment.SegmentReader r10 = r9.owner
            if (r10 != 0) goto L6d
            if (r4 != 0) goto L49
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>(r1)
        L49:
            r4.add(r9)
            boolean r10 = r14.debug
            if (r10 == 0) goto L7b
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "clearCovered, covered = "
            r10.append(r11)
            r10.append(r9)
            java.lang.String r9 = ", prev = "
            r10.append(r9)
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            android.util.Log.w(r7, r8)
            goto L7b
        L6d:
            long r9 = r9.getCurrentOffsetRead()
            long r7 = r8.getCurrentOffsetRead()
            int r7 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r7 <= 0) goto L7b
            int r5 = r5 + 1
        L7b:
            int r6 = r6 + 1
            goto L16
        L7e:
            if (r4 == 0) goto Ld1
            java.util.Iterator r0 = r4.iterator()
        L84:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto Ld1
            java.lang.Object r2 = r0.next()
            com.ss.android.socialbase.downloader.segment.Segment r2 = (com.ss.android.socialbase.downloader.segment.Segment) r2
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r3 = r14.dispatchedSegments
            r3.remove(r2)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r3 = r14.readers
            java.util.Iterator r3 = r3.iterator()
        L9b:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L84
            java.lang.Object r4 = r3.next()
            com.ss.android.socialbase.downloader.segment.SegmentReader r4 = (com.ss.android.socialbase.downloader.segment.SegmentReader) r4
            com.ss.android.socialbase.downloader.segment.Segment r5 = r4.curSegment
            if (r5 != r2) goto L9b
            boolean r5 = r14.debug
            if (r5 == 0) goto Lcd
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "clearCoveredSegmentLocked: reconnect, segment = "
            r5.append(r6)
            r5.append(r2)
            java.lang.String r6 = ", threadIndex = "
            r5.append(r6)
            int r6 = r4.threadIndex
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            android.util.Log.w(r7, r5)
        Lcd:
            r4.reconnect(r1)
            goto L9b
        Ld1:
            return
    }

    private void dispatchReadThread() {
            r6 = this;
            long r0 = r6.totalLength
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 1
            if (r0 <= 0) goto L22
            boolean r0 = r6.needWaitDnsResolve
            if (r0 == 0) goto Le
            goto L22
        Le:
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r0 = r6.strategy
            int r0 = r0.getThreadCount()
            long r2 = r6.totalLength
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r4 = r6.strategy
            long r4 = r4.getSegmentMinInitSize()
            long r2 = r2 / r4
            int r2 = (int) r2
            if (r0 <= r2) goto L23
            r0 = r2
            goto L23
        L22:
            r0 = r1
        L23:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "dispatchReadThread: totalLength = "
            r2.append(r3)
            long r3 = r6.totalLength
            r2.append(r3)
            java.lang.String r3 = ", threadCount = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "SegmentDispatcher"
            com.ss.android.socialbase.downloader.logger.Logger.i(r3, r2)
            if (r0 > 0) goto L46
            goto L47
        L46:
            r1 = r0
        L47:
            monitor-enter(r6)
        L48:
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r0 = r6.readers     // Catch: java.lang.Throwable -> L6d
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L6d
            if (r0 >= r1) goto L6b
            boolean r0 = r6.paused     // Catch: java.lang.Throwable -> L6d
            if (r0 != 0) goto L69
            boolean r0 = r6.canceled     // Catch: java.lang.Throwable -> L6d
            if (r0 == 0) goto L59
            goto L69
        L59:
            com.ss.android.socialbase.downloader.segment.UrlRecord r0 = r6.obtainUrl()     // Catch: java.lang.Throwable -> L6d
            r6.dispatchReadThreadOnce(r0)     // Catch: java.lang.Throwable -> L6d
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r0 = r6.strategy     // Catch: java.lang.Throwable -> L6d
            boolean r0 = r0.segmentOneByOne()     // Catch: java.lang.Throwable -> L6d
            if (r0 == 0) goto L48
            goto L6b
        L69:
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L6d
            return
        L6b:
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L6d
            return
        L6d:
            r0 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L6d
            throw r0
    }

    private void dispatchReadThreadOnce(com.ss.android.socialbase.downloader.segment.UrlRecord r8) {
            r7 = this;
            com.ss.android.socialbase.downloader.segment.SegmentReader r6 = new com.ss.android.socialbase.downloader.segment.SegmentReader
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r7.downloadInfo
            com.ss.android.socialbase.downloader.segment.BufferQueue r3 = r7.bufferQueue
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r0 = r7.readers
            int r5 = r0.size()
            r0 = r6
            r2 = r7
            r4 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r8 = r7.readers
            r8.add(r6)
            java.util.concurrent.ExecutorService r8 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getChunkDownloadThreadExecutorService()
            java.util.concurrent.Future r8 = r8.submit(r6)
            r6.setFuture(r8)
            return
    }

    private com.ss.android.socialbase.downloader.segment.SegmentReader findEarliestConnectTimeoutReader(boolean r8, long r9, long r11) {
            r7 = this;
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r0 = r7.readers
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
        L7:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L3d
            java.lang.Object r2 = r0.next()
            com.ss.android.socialbase.downloader.segment.SegmentReader r2 = (com.ss.android.socialbase.downloader.segment.SegmentReader) r2
            int r3 = r2.threadIndex
            if (r3 != 0) goto L1a
            if (r8 != 0) goto L1a
            goto L7
        L1a:
            long r3 = r2.connectStartTime
            r5 = 0
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 <= 0) goto L7
            long r3 = r2.connectEndTime
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 > 0) goto L7
            long r3 = r2.connectStartTime
            long r3 = r9 - r3
            int r3 = (r3 > r11 ? 1 : (r3 == r11 ? 0 : -1))
            if (r3 <= 0) goto L7
            if (r1 != 0) goto L34
        L32:
            r1 = r2
            goto L7
        L34:
            long r3 = r2.connectStartTime
            long r5 = r1.connectStartTime
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 >= 0) goto L7
            goto L32
        L3d:
            return r1
    }

    private com.ss.android.socialbase.downloader.segment.UrlRecord findNextUrlLocked(com.ss.android.socialbase.downloader.segment.SegmentReader r6) {
            r5 = this;
            java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> r0 = r5.urlRecords
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
            r2 = r1
        L8:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L28
            java.lang.Object r3 = r0.next()
            com.ss.android.socialbase.downloader.segment.UrlRecord r3 = (com.ss.android.socialbase.downloader.segment.UrlRecord) r3
            com.ss.android.socialbase.downloader.segment.UrlRecord r4 = r6.urlRecord
            if (r3 == r4) goto L8
            boolean r4 = r3.isCurrentFailed()
            if (r4 != 0) goto L8
            if (r2 != 0) goto L21
            r2 = r3
        L21:
            int r4 = r3.getCurrentUsers()
            if (r4 > 0) goto L8
            goto L29
        L28:
            r3 = r1
        L29:
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r6 = r5.strategy
            boolean r6 = r6.urlBalance()
            if (r6 == 0) goto L3d
            if (r3 == 0) goto L34
            return r3
        L34:
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r6 = r5.strategy
            boolean r6 = r6.urlBalanceStrictly()
            if (r6 == 0) goto L3d
            return r1
        L3d:
            return r2
    }

    private com.ss.android.socialbase.downloader.segment.SegmentReader findPoorReadThread(long r19, long r21, long r23, int r25) {
            r18 = this;
            r0 = r18
            r1 = r19
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r3 = r0.readers
            java.util.Iterator r3 = r3.iterator()
            r5 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r7 = 0
            r8 = 0
        L11:
            boolean r9 = r3.hasNext()
            java.lang.String r10 = ", threadIndex = "
            java.lang.String r11 = "SegmentDispatcher"
            if (r9 == 0) goto L74
            java.lang.Object r9 = r3.next()
            com.ss.android.socialbase.downloader.segment.SegmentReader r9 = (com.ss.android.socialbase.downloader.segment.SegmentReader) r9
            long r12 = r9.readStartTime
            r14 = 0
            int r12 = (r12 > r14 ? 1 : (r12 == r14 ? 0 : -1))
            if (r12 <= 0) goto L6f
            int r7 = r7 + 1
            long r12 = r9.readStartTime
            int r12 = (r12 > r1 ? 1 : (r12 == r1 ? 0 : -1))
            if (r12 >= 0) goto L68
            r12 = r21
            r16 = r5
            long r4 = r9.getRecentDownloadSpeed(r1, r12)
            boolean r6 = r0.debug
            if (r6 == 0) goto L5c
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r14 = "findPoorReadThread: speed = "
            r6.append(r14)
            r6.append(r4)
            r6.append(r10)
            int r10 = r9.threadIndex
            r6.append(r10)
            java.lang.String r6 = r6.toString()
            android.util.Log.i(r11, r6)
            r10 = 0
            goto L5d
        L5c:
            r10 = r14
        L5d:
            int r6 = (r4 > r10 ? 1 : (r4 == r10 ? 0 : -1))
            if (r6 < 0) goto L6c
            int r6 = (r4 > r16 ? 1 : (r4 == r16 ? 0 : -1))
            if (r6 >= 0) goto L6c
            r5 = r4
            r8 = r9
            goto L11
        L68:
            r12 = r21
            r16 = r5
        L6c:
            r5 = r16
            goto L11
        L6f:
            r12 = r21
            r16 = r5
            goto L11
        L74:
            r16 = r5
            if (r8 == 0) goto L9f
            r1 = r25
            if (r7 < r1) goto L9f
            int r1 = (r16 > r23 ? 1 : (r16 == r23 ? 0 : -1))
            if (r1 >= 0) goto L9f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "findPoorReadThread: ----------- minSpeed = "
            r1.append(r2)
            r5 = r16
            r1.append(r5)
            r1.append(r10)
            int r2 = r8.threadIndex
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r11, r1)
            return r8
        L9f:
            r1 = 0
            return r1
    }

    private boolean findPoorReadThreadAndReconnect(long r10, long r12) {
            r9 = this;
            com.ss.android.socialbase.downloader.utils.DownloadStenographer r0 = r9.stenographer
            long r2 = r10 - r12
            long r0 = r0.getRecentDownloadSpeed(r2, r10)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r4 = r9.readers
            int r4 = r4.size()
            if (r4 <= 0) goto L12
            long r5 = (long) r4
            long r0 = r0 / r5
        L12:
            r5 = 1092616192(0x41200000, float:10.0)
            float r0 = (float) r0
            float r1 = r9.poorSpeedRatio
            float r0 = r0 * r1
            float r0 = java.lang.Math.max(r5, r0)
            long r6 = (long) r0
            int r8 = r4 / 2
            r1 = r9
            r4 = r10
            com.ss.android.socialbase.downloader.segment.SegmentReader r0 = r1.findPoorReadThread(r2, r4, r6, r8)
            r1 = 1
            java.lang.String r2 = "SegmentDispatcher"
            if (r0 == 0) goto L47
            r9.trySwitchNextUrlForReader(r0)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "handlePoorReadThread: reconnect for poor speed, threadIndex = "
            r10.append(r11)
            int r11 = r0.threadIndex
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            com.ss.android.socialbase.downloader.logger.Logger.w(r2, r10)
            r0.reconnect()
            return r1
        L47:
            r4 = 1
            r3 = r9
            r5 = r10
            r7 = r12
            com.ss.android.socialbase.downloader.segment.SegmentReader r10 = r3.findEarliestConnectTimeoutReader(r4, r5, r7)
            if (r10 == 0) goto L6e
            r9.trySwitchNextUrlForReader(r10)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "handlePoorReadThread: reconnect for connect timeout, threadIndex = "
            r11.append(r12)
            int r12 = r10.threadIndex
            r11.append(r12)
            java.lang.String r11 = r11.toString()
            com.ss.android.socialbase.downloader.logger.Logger.w(r2, r11)
            r10.reconnect()
            return r1
        L6e:
            r10 = 0
            return r10
    }

    private void fixSegmentsLocked(java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r15) {
            r14 = this;
            r0 = 0
            java.lang.Object r0 = r15.get(r0)
            com.ss.android.socialbase.downloader.segment.Segment r0 = (com.ss.android.socialbase.downloader.segment.Segment) r0
            long r1 = r0.getStartOffset()
            r3 = 0
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            r6 = 1
            java.lang.String r7 = "SegmentDispatcher"
            r8 = 1
            if (r5 <= 0) goto L3b
            com.ss.android.socialbase.downloader.segment.Segment r5 = new com.ss.android.socialbase.downloader.segment.Segment
            long r1 = r1 - r8
            r5.<init>(r3, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "fixSegmentsLocked: first = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = ", add new first = "
            r1.append(r0)
            r1.append(r5)
            java.lang.String r0 = r1.toString()
            android.util.Log.w(r7, r0)
            r14.arrangeSegmentLocked(r15, r5, r6)
        L3b:
            java.util.Iterator r0 = r15.iterator()
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L8f
            java.lang.Object r1 = r0.next()
            com.ss.android.socialbase.downloader.segment.Segment r1 = (com.ss.android.socialbase.downloader.segment.Segment) r1
        L4b:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L8f
            java.lang.Object r2 = r0.next()
            com.ss.android.socialbase.downloader.segment.Segment r2 = (com.ss.android.socialbase.downloader.segment.Segment) r2
            long r10 = r1.getEndOffset()
            long r12 = r2.getStartOffset()
            long r12 = r12 - r8
            int r5 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
            if (r5 >= 0) goto L8d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r10 = "fixSegment: segment = "
            r5.append(r10)
            r5.append(r1)
            java.lang.String r10 = ", new end = "
            r5.append(r10)
            long r10 = r2.getStartOffset()
            long r10 = r10 - r8
            r5.append(r10)
            java.lang.String r5 = r5.toString()
            com.ss.android.socialbase.downloader.logger.Logger.w(r7, r5)
            long r10 = r2.getStartOffset()
            long r10 = r10 - r8
            r1.setEndOffset(r10)
        L8d:
            r1 = r2
            goto L4b
        L8f:
            int r0 = r15.size()
            int r0 = r0 - r6
            java.lang.Object r15 = r15.get(r0)
            com.ss.android.socialbase.downloader.segment.Segment r15 = (com.ss.android.socialbase.downloader.segment.Segment) r15
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r14.downloadInfo
            long r0 = r0.getTotalBytes()
            int r2 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            r3 = -1
            if (r2 <= 0) goto Lb7
            long r5 = r15.getEndOffset()
            int r2 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r2 == 0) goto Ld3
            long r5 = r15.getEndOffset()
            long r0 = r0 - r8
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 >= 0) goto Ld3
        Lb7:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "fixSegment: last segment = "
            r0.append(r1)
            r0.append(r15)
            java.lang.String r1 = ", new end=-1"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.ss.android.socialbase.downloader.logger.Logger.w(r7, r0)
            r15.setEndOffset(r3)
        Ld3:
            return
    }

    private float getDownloadRatio(com.ss.android.socialbase.downloader.segment.SegmentReader r6, com.ss.android.socialbase.downloader.segment.UrlRecord r7) {
            r5 = this;
            long r0 = r6.getReadBytes()
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r7 = r5.readers
            int r7 = r7.size()
            r2 = 1
            if (r7 > r2) goto L13
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r7 = r5.strategy
            int r7 = r7.getThreadCount()
        L13:
            r3 = 0
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            r4 = 1065353216(0x3f800000, float:1.0)
            if (r3 > 0) goto L39
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r0 = r5.strategy
            float r0 = r0.getMainRatio()
            r1 = 0
            int r1 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r1 <= 0) goto L2a
            int r1 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r1 < 0) goto L2d
        L2a:
            float r0 = (float) r7
            float r0 = r4 / r0
        L2d:
            int r6 = r6.threadIndex
            if (r6 != 0) goto L32
            return r0
        L32:
            if (r7 <= r2) goto L36
            float r4 = r4 - r0
            int r7 = r7 - r2
        L36:
            float r6 = (float) r7
            float r4 = r4 / r6
            return r4
        L39:
            long r2 = r5.getTotalReadBytes()
            int r6 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r6 <= 0) goto L36
            float r6 = (float) r0
            float r7 = (float) r2
            float r6 = r6 / r7
            return r6
    }

    private long getRemainReadBytes(com.ss.android.socialbase.downloader.segment.Segment r7) {
            r6 = this;
            long r0 = r7.getRemainReadBytes()
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L18
            long r2 = r6.totalLength
            r4 = 0
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 <= 0) goto L18
            long r0 = r7.getCurrentOffsetRead()
            long r0 = r2 - r0
        L18:
            return r0
    }

    private long getTotalReadBytes() {
            r5 = this;
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r0 = r5.readers
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
        L8:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L1a
            java.lang.Object r3 = r0.next()
            com.ss.android.socialbase.downloader.segment.SegmentReader r3 = (com.ss.android.socialbase.downloader.segment.SegmentReader) r3
            long r3 = r3.getReadBytes()
            long r1 = r1 + r3
            goto L8
        L1a:
            return r1
    }

    private long getUnconfirmedRemainBytes(int r6, int r7) {
            r5 = this;
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r0 = r5.dispatchedSegments
            java.lang.Object r0 = r0.get(r6)
            com.ss.android.socialbase.downloader.segment.Segment r0 = (com.ss.android.socialbase.downloader.segment.Segment) r0
            long r1 = r5.getRemainReadBytes(r0)
            int r6 = r6 + 1
            if (r6 >= r7) goto L19
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r7 = r5.dispatchedSegments
            java.lang.Object r6 = r7.get(r6)
            com.ss.android.socialbase.downloader.segment.Segment r6 = (com.ss.android.socialbase.downloader.segment.Segment) r6
            goto L1a
        L19:
            r6 = 0
        L1a:
            if (r6 != 0) goto L1d
            return r1
        L1d:
            long r6 = r6.getStartOffset()
            long r3 = r0.getCurrentOffsetRead()
            long r6 = r6 - r3
            r3 = -1
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 != 0) goto L2d
            return r6
        L2d:
            long r6 = java.lang.Math.min(r1, r6)
            return r6
    }

    private int indexOfSegmentLocked(long r6) {
            r5 = this;
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r0 = r5.dispatchedSegments
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L26
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r2 = r5.dispatchedSegments
            java.lang.Object r2 = r2.get(r1)
            com.ss.android.socialbase.downloader.segment.Segment r2 = (com.ss.android.socialbase.downloader.segment.Segment) r2
            long r3 = r2.getStartOffset()
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 != 0) goto L1a
            return r1
        L1a:
            long r2 = r2.getStartOffset()
            int r2 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r2 <= 0) goto L23
            goto L26
        L23:
            int r1 = r1 + 1
            goto L7
        L26:
            r6 = -1
            return r6
    }

    private int indexOfUrl(java.lang.String r4) {
            r3 = this;
            java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> r0 = r3.urlRecords
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L1d
            java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> r2 = r3.urlRecords
            java.lang.Object r2 = r2.get(r1)
            com.ss.android.socialbase.downloader.segment.UrlRecord r2 = (com.ss.android.socialbase.downloader.segment.UrlRecord) r2
            java.lang.String r2 = r2.url
            boolean r2 = android.text.TextUtils.equals(r2, r4)
            if (r2 == 0) goto L1a
            return r1
        L1a:
            int r1 = r1 + 1
            goto L7
        L1d:
            r4 = -1
            return r4
    }

    private void initDns() {
            r6 = this;
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r0 = r6.strategy
            int r0 = r0.getIpStrategy()
            if (r0 > 0) goto Lf
            r0 = 0
            r6.needWaitDnsResolve = r0
            r6.dispatchReadThread()
            return
        Lf:
            com.ss.android.socialbase.downloader.network.DownloadDnsManager r1 = com.ss.android.socialbase.downloader.network.DownloadDnsManager.getInstance()
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r6.downloadInfo
            java.lang.String r2 = r2.getUrl()
            r3 = 2000(0x7d0, double:9.88E-321)
            r1.resolveDnsAsync(r2, r6, r3)
            r2 = 2
            if (r0 <= r2) goto L43
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r6.downloadInfo
            java.util.List r0 = r0.getBackUpUrls()
            if (r0 == 0) goto L43
            java.util.Iterator r0 = r0.iterator()
        L2d:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L43
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            boolean r5 = android.text.TextUtils.isEmpty(r2)
            if (r5 != 0) goto L2d
            r1.resolveDnsAsync(r2, r6, r3)
            goto L2d
        L43:
            return
    }

    private void initSegments(java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r7) {
            r6 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r6.downloadInfo
            long r0 = r0.getTotalBytes()
            r6.totalLength = r0
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L2e
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r6.downloadInfo
            long r0 = r0.getExpectFileLength()
            r6.totalLength = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "initSegments: getExpectFileLength = "
            r0.append(r1)
            long r4 = r6.totalLength
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SegmentDispatcher"
            com.ss.android.socialbase.downloader.logger.Logger.i(r1, r0)
        L2e:
            monitor-enter(r6)
            java.util.LinkedList<com.ss.android.socialbase.downloader.segment.Segment> r0 = r6.toDispatchSegments     // Catch: java.lang.Throwable -> L8a
            r0.clear()     // Catch: java.lang.Throwable -> L8a
            r0 = 0
            if (r7 == 0) goto L64
            boolean r1 = r7.isEmpty()     // Catch: java.lang.Throwable -> L8a
            if (r1 == 0) goto L3e
            goto L64
        L3e:
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> L8a
        L42:
            boolean r1 = r7.hasNext()     // Catch: java.lang.Throwable -> L8a
            if (r1 == 0) goto L59
            java.lang.Object r1 = r7.next()     // Catch: java.lang.Throwable -> L8a
            com.ss.android.socialbase.downloader.segment.Segment r1 = (com.ss.android.socialbase.downloader.segment.Segment) r1     // Catch: java.lang.Throwable -> L8a
            java.util.LinkedList<com.ss.android.socialbase.downloader.segment.Segment> r2 = r6.toDispatchSegments     // Catch: java.lang.Throwable -> L8a
            com.ss.android.socialbase.downloader.segment.Segment r3 = new com.ss.android.socialbase.downloader.segment.Segment     // Catch: java.lang.Throwable -> L8a
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L8a
            r6.arrangeSegmentLocked(r2, r3, r0)     // Catch: java.lang.Throwable -> L8a
            goto L42
        L59:
            java.util.LinkedList<com.ss.android.socialbase.downloader.segment.Segment> r7 = r6.toDispatchSegments     // Catch: java.lang.Throwable -> L8a
            r6.fixSegmentsLocked(r7)     // Catch: java.lang.Throwable -> L8a
            java.util.LinkedList<com.ss.android.socialbase.downloader.segment.Segment> r7 = r6.toDispatchSegments     // Catch: java.lang.Throwable -> L8a
            r6.checkDownloadedBytesLocked(r7)     // Catch: java.lang.Throwable -> L8a
            goto L70
        L64:
            java.util.LinkedList<com.ss.android.socialbase.downloader.segment.Segment> r7 = r6.toDispatchSegments     // Catch: java.lang.Throwable -> L8a
            com.ss.android.socialbase.downloader.segment.Segment r1 = new com.ss.android.socialbase.downloader.segment.Segment     // Catch: java.lang.Throwable -> L8a
            r4 = -1
            r1.<init>(r2, r4)     // Catch: java.lang.Throwable -> L8a
            r6.arrangeSegmentLocked(r7, r1, r0)     // Catch: java.lang.Throwable -> L8a
        L70:
            java.lang.String r7 = "SegmentDispatcher"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8a
            r0.<init>()     // Catch: java.lang.Throwable -> L8a
            java.lang.String r1 = "initSegments: totalLength = "
            r0.append(r1)     // Catch: java.lang.Throwable -> L8a
            long r1 = r6.totalLength     // Catch: java.lang.Throwable -> L8a
            r0.append(r1)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L8a
            com.ss.android.socialbase.downloader.logger.Logger.i(r7, r0)     // Catch: java.lang.Throwable -> L8a
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L8a
            return
        L8a:
            r7 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L8a
            throw r7
    }

    private void initUrlRecords() {
            r5 = this;
            java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> r0 = r5.urlRecords
            com.ss.android.socialbase.downloader.segment.UrlRecord r1 = new com.ss.android.socialbase.downloader.segment.UrlRecord
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r5.downloadInfo
            java.lang.String r2 = r2.getUrl()
            r3 = 1
            r1.<init>(r2, r3)
            r0.add(r1)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.downloadInfo
            java.util.List r0 = r0.getBackUpUrls()
            if (r0 == 0) goto L3b
            java.util.Iterator r0 = r0.iterator()
        L1d:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3b
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L1d
            java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> r2 = r5.urlRecords
            com.ss.android.socialbase.downloader.segment.UrlRecord r3 = new com.ss.android.socialbase.downloader.segment.UrlRecord
            r4 = 0
            r3.<init>(r1, r4)
            r2.add(r3)
            goto L1d
        L3b:
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r0 = r5.strategy
            java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> r1 = r5.urlRecords
            int r1 = r1.size()
            r0.updateUrlCount(r1)
            return
    }

    private void initWatchDog() {
            r5 = this;
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r0 = r5.strategy
            long r1 = r0.getConnectTimeout()
            r5.connectTimeout = r1
            long r1 = r0.getReadTimeout()
            r5.readTimeout = r1
            float r0 = r0.getPoorSpeedRatio()
            r5.poorSpeedRatio = r0
            int r0 = r5.reconnectCount
            if (r0 <= 0) goto L20
            com.ss.android.socialbase.downloader.thread.DownloadWatchDog r1 = r5.watchDog
            com.ss.android.socialbase.downloader.thread.DownloadWatchDog$IWatcher r2 = r5.connectWatcher
            long r3 = (long) r0
            r1.addWatcher(r2, r3)
        L20:
            return
    }

    private void initWatchDog2() {
            r4 = this;
            long r0 = r4.readTimeout
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L15
            long r0 = java.lang.System.currentTimeMillis()
            r4.lastReconnectTime = r0
            com.ss.android.socialbase.downloader.thread.DownloadWatchDog r0 = r4.watchDog
            com.ss.android.socialbase.downloader.thread.DownloadWatchDog$IWatcher r1 = r4.readWatcher
            r0.addWatcher(r1, r2)
        L15:
            return
    }

    private boolean isAllContentDownloaded() {
            r8 = this;
            long r0 = r8.totalLength
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r3 = 0
            if (r2 > 0) goto Lc
            r8.isAllContentDownloaded = r3
            return r3
        Lc:
            monitor-enter(r8)
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r2 = r8.dispatchedSegments     // Catch: java.lang.Throwable -> L36
            long r4 = com.ss.android.socialbase.downloader.segment.SegmentUtils.getFirstOffset(r2)     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = "SegmentDispatcher"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L36
            r6.<init>()     // Catch: java.lang.Throwable -> L36
            java.lang.String r7 = "isAllContentDownloaded: firstOffset = "
            r6.append(r7)     // Catch: java.lang.Throwable -> L36
            r6.append(r4)     // Catch: java.lang.Throwable -> L36
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L36
            com.ss.android.socialbase.downloader.logger.Logger.i(r2, r6)     // Catch: java.lang.Throwable -> L36
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto L32
            r0 = 1
            r8.isAllContentDownloaded = r0     // Catch: java.lang.Throwable -> L36
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L36
            return r0
        L32:
            r8.isAllContentDownloaded = r3     // Catch: java.lang.Throwable -> L36
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L36
            return r3
        L36:
            r0 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L36
            throw r0
    }

    private boolean isAllReaderFailedLocked() {
            r2 = this;
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r0 = r2.readers
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1a
            java.lang.Object r1 = r0.next()
            com.ss.android.socialbase.downloader.segment.SegmentReader r1 = (com.ss.android.socialbase.downloader.segment.SegmentReader) r1
            boolean r1 = r1.isFailed()
            if (r1 != 0) goto L6
            r0 = 0
            return r0
        L1a:
            r0 = 1
            return r0
    }

    private boolean isDownloadSpeedPoor(com.ss.android.socialbase.downloader.segment.SegmentReader r7, long r8, long r10, long r12, double r14) {
            r6 = this;
            long r0 = r7.readStartTime
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L64
            com.ss.android.socialbase.downloader.utils.DownloadStenographer r0 = r6.stenographer
            long r0 = r0.getRecentDownloadSpeed(r8, r10)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r2 = r6.readers
            int r2 = r2.size()
            if (r2 <= 0) goto L1a
            long r2 = (long) r2
            long r2 = r0 / r2
            goto L1b
        L1a:
            r2 = r0
        L1b:
            long r8 = r7.getRecentDownloadSpeed(r8, r10)
            int r10 = (r8 > r12 ? 1 : (r8 == r12 ? 0 : -1))
            if (r10 < 0) goto L2a
            double r10 = (double) r8
            double r4 = (double) r2
            double r4 = r4 * r14
            int r10 = (r10 > r4 ? 1 : (r10 == r4 ? 0 : -1))
            if (r10 >= 0) goto L64
        L2a:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "isDownloadSpeedPoor: totalSpeed = "
            r10.append(r11)
            r10.append(r0)
            java.lang.String r11 = ", threadAvgSpeed = "
            r10.append(r11)
            r10.append(r2)
            java.lang.String r11 = ", poorSpeed = "
            r10.append(r11)
            r10.append(r12)
            java.lang.String r11 = ", speed = "
            r10.append(r11)
            r10.append(r8)
            java.lang.String r8 = ",threadIndex = "
            r10.append(r8)
            int r7 = r7.threadIndex
            r10.append(r7)
            java.lang.String r7 = r10.toString()
            java.lang.String r8 = "SegmentDispatcher"
            android.util.Log.i(r8, r7)
            r7 = 1
            return r7
        L64:
            r7 = 0
            return r7
    }

    private void markProgress(long r4) {
            r3 = this;
            com.ss.android.socialbase.downloader.utils.DownloadStenographer r0 = r3.stenographer
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r3.downloadInfo
            long r1 = r1.getCurBytes()
            r0.markProgress(r1, r4)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r0 = r3.readers
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()
            com.ss.android.socialbase.downloader.segment.SegmentReader r1 = (com.ss.android.socialbase.downloader.segment.SegmentReader) r1
            r1.markProgress(r4)
            goto L11
        L21:
            return
    }

    private com.ss.android.socialbase.downloader.segment.Segment obtainChildSegmentFromMaxRemain(com.ss.android.socialbase.downloader.segment.SegmentReader r30, com.ss.android.socialbase.downloader.segment.UrlRecord r31) {
            r29 = this;
            r0 = r29
            r1 = r30
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r2 = r0.dispatchedSegments
            int r2 = r2.size()
            r3 = -1
            r5 = -1
            r6 = 0
        Le:
            if (r6 >= r2) goto L1d
            long r7 = r0.getUnconfirmedRemainBytes(r6, r2)
            int r9 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r9 <= 0) goto L1a
            r5 = r6
            r3 = r7
        L1a:
            int r6 = r6 + 1
            goto Le
        L1d:
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r2 = r0.strategy
            long r6 = r2.getSegmentMinSize()
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r2 = r0.strategy
            long r8 = r2.getSegmentMaxSize()
            if (r5 < 0) goto L1e7
            int r2 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r2 <= 0) goto L1e7
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r2 = r0.dispatchedSegments
            java.lang.Object r2 = r2.get(r5)
            com.ss.android.socialbase.downloader.segment.Segment r2 = (com.ss.android.socialbase.downloader.segment.Segment) r2
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r5 = r0.dispatchedSegments
            int r5 = r5.size()
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r10 = r0.readers
            int r10 = r10.size()
            if (r5 >= r10) goto L47
            r5 = 2
            goto L4d
        L47:
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r5 = r0.strategy
            int r5 = r5.getRatioSegmentStrategy()
        L4d:
            java.lang.String r10 = ", threadIndex = "
            java.lang.String r12 = ", ratio = "
            java.lang.String r13 = ", childLength = "
            java.lang.String r14 = ", maxRemainBytes = "
            java.lang.String r15 = ", child = "
            java.lang.String r11 = "obtainSegment: parent = "
            java.lang.String r0 = "SegmentDispatcher"
            r18 = 2
            r20 = 0
            r22 = r0
            r0 = 1
            if (r5 != r0) goto L126
            com.ss.android.socialbase.downloader.segment.SegmentReader r0 = r2.owner
            if (r0 == 0) goto L121
            r16 = r12
            r17 = r13
            long r12 = java.lang.System.currentTimeMillis()
            r23 = 4000(0xfa0, double:1.9763E-320)
            r25 = r14
            r26 = r15
            long r14 = r12 - r23
            long r23 = r0.getRecentDownloadSpeed(r14, r12)
            long r12 = r1.getRecentDownloadSpeed(r14, r12)
            int r5 = (r23 > r20 ? 1 : (r23 == r20 ? 0 : -1))
            r14 = -1082130432(0xffffffffbf800000, float:-1.0)
            if (r5 <= 0) goto L90
            int r5 = (r12 > r20 ? 1 : (r12 == r20 ? 0 : -1))
            if (r5 <= 0) goto L90
            float r5 = (float) r12
            long r12 = r23 + r12
            float r12 = (float) r12
            float r5 = r5 / r12
            goto L91
        L90:
            r5 = r14
        L91:
            int r12 = (r5 > r14 ? 1 : (r5 == r14 ? 0 : -1))
            if (r12 != 0) goto Laa
            long r12 = r0.getReadBytes()
            long r14 = r30.getReadBytes()
            int r0 = (r12 > r20 ? 1 : (r12 == r20 ? 0 : -1))
            if (r0 <= 0) goto Laa
            int r0 = (r14 > r20 ? 1 : (r14 == r20 ? 0 : -1))
            if (r0 <= 0) goto Laa
            float r0 = (float) r14
            long r12 = r12 + r14
            float r5 = (float) r12
            float r5 = r0 / r5
        Laa:
            r0 = 0
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 <= 0) goto L121
            r0 = 1063675494(0x3f666666, float:0.9)
            float r5 = r5 * r0
            float r0 = (float) r3
            float r0 = r0 * r5
            long r12 = (long) r0
            int r0 = (r12 > r6 ? 1 : (r12 == r6 ? 0 : -1))
            if (r0 >= 0) goto Lbb
            r12 = r6
        Lbb:
            int r0 = (r8 > r20 ? 1 : (r8 == r20 ? 0 : -1))
            if (r0 <= 0) goto Lc4
            int r0 = (r12 > r8 ? 1 : (r12 == r8 ? 0 : -1))
            if (r0 <= 0) goto Lc4
            goto Lc5
        Lc4:
            r8 = r12
        Lc5:
            long r6 = r6 / r18
            long r12 = r3 - r6
            int r0 = (r8 > r12 ? 1 : (r8 == r12 ? 0 : -1))
            if (r0 <= 0) goto Lcf
            r8 = r12
            goto Ld4
        Lcf:
            int r0 = (r8 > r6 ? 1 : (r8 == r6 ? 0 : -1))
            if (r0 >= 0) goto Ld4
            r8 = r6
        Ld4:
            com.ss.android.socialbase.downloader.segment.Segment r0 = new com.ss.android.socialbase.downloader.segment.Segment
            long r6 = r2.getCurrentOffsetRead()
            long r12 = r3 - r8
            long r6 = r6 + r12
            long r12 = r2.getEndOffset()
            r0.<init>(r6, r12)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r11)
            r6.append(r2)
            r12 = r26
            r6.append(r12)
            r6.append(r0)
            r13 = r25
            r6.append(r13)
            r6.append(r3)
            r14 = r17
            r6.append(r14)
            r6.append(r8)
            r15 = r16
            r6.append(r15)
            r6.append(r5)
            r6.append(r10)
            int r1 = r1.threadIndex
            r6.append(r1)
            java.lang.String r1 = r6.toString()
            r5 = r22
            com.ss.android.socialbase.downloader.logger.Logger.i(r5, r1)
            return r0
        L121:
            r5 = r22
            r1 = r5
            goto L1bc
        L126:
            r16 = r22
            r0 = 2
            r27 = r15
            r15 = r12
            r12 = r27
            r28 = r14
            r14 = r13
            r13 = r28
            if (r5 != r0) goto L1ba
            r0 = r29
            r17 = r14
            r5 = r16
            r16 = r15
            long r14 = r0.totalLength
            r22 = r5
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r0.downloadInfo
            long r23 = r5.getCurBytes()
            long r14 = r14 - r23
            float r5 = r29.getDownloadRatio(r30, r31)
            float r14 = (float) r14
            float r14 = r14 * r5
            long r14 = (long) r14
            int r23 = (r14 > r6 ? 1 : (r14 == r6 ? 0 : -1))
            if (r23 >= 0) goto L155
            r14 = r6
        L155:
            int r20 = (r8 > r20 ? 1 : (r8 == r20 ? 0 : -1))
            if (r20 <= 0) goto L15e
            int r20 = (r14 > r8 ? 1 : (r14 == r8 ? 0 : -1))
            if (r20 <= 0) goto L15e
            goto L15f
        L15e:
            r8 = r14
        L15f:
            long r6 = r6 / r18
            long r14 = r3 - r6
            int r18 = (r8 > r14 ? 1 : (r8 == r14 ? 0 : -1))
            if (r18 <= 0) goto L169
            r8 = r14
            goto L16e
        L169:
            int r14 = (r8 > r6 ? 1 : (r8 == r6 ? 0 : -1))
            if (r14 >= 0) goto L16e
            r8 = r6
        L16e:
            com.ss.android.socialbase.downloader.segment.Segment r6 = new com.ss.android.socialbase.downloader.segment.Segment
            long r14 = r2.getCurrentOffsetRead()
            long r18 = r3 - r8
            long r14 = r14 + r18
            long r0 = r2.getEndOffset()
            r6.<init>(r14, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r11)
            r0.append(r2)
            r0.append(r12)
            r0.append(r6)
            r0.append(r13)
            r0.append(r3)
            r1 = r17
            r0.append(r1)
            r0.append(r8)
            r1 = r16
            r0.append(r1)
            r0.append(r5)
            r0.append(r10)
            r1 = r30
            int r1 = r1.threadIndex
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = r22
            com.ss.android.socialbase.downloader.logger.Logger.i(r1, r0)
            return r6
        L1ba:
            r1 = r16
        L1bc:
            com.ss.android.socialbase.downloader.segment.Segment r0 = new com.ss.android.socialbase.downloader.segment.Segment
            long r5 = r2.getCurrentOffsetRead()
            long r3 = r3 / r18
            long r5 = r5 + r3
            long r3 = r2.getEndOffset()
            r0.<init>(r5, r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r11)
            r3.append(r2)
            java.lang.String r2 = ",child = "
            r3.append(r2)
            r3.append(r0)
            java.lang.String r2 = r3.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r1, r2)
            return r0
        L1e7:
            r0 = 0
            return r0
    }

    private com.ss.android.socialbase.downloader.segment.Segment obtainLeastCompetitorSegment() {
            r8 = this;
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r0 = r8.dispatchedSegments
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
            r2 = 2147483647(0x7fffffff, float:NaN)
        La:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L29
            java.lang.Object r3 = r0.next()
            com.ss.android.socialbase.downloader.segment.Segment r3 = (com.ss.android.socialbase.downloader.segment.Segment) r3
            long r4 = r8.getRemainReadBytes(r3)
            r6 = 0
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto La
            int r4 = r3.getCompetitor()
            if (r4 >= r2) goto La
            r1 = r3
            r2 = r4
            goto La
        L29:
            return r1
    }

    private com.ss.android.socialbase.downloader.segment.Segment obtainSegmentLocked(com.ss.android.socialbase.downloader.segment.SegmentReader r7, com.ss.android.socialbase.downloader.segment.UrlRecord r8) {
            r6 = this;
        L0:
            java.util.LinkedList<com.ss.android.socialbase.downloader.segment.Segment> r0 = r6.toDispatchSegments
            boolean r0 = r0.isEmpty()
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L2a
            java.util.LinkedList<com.ss.android.socialbase.downloader.segment.Segment> r0 = r6.toDispatchSegments
            java.lang.Object r0 = r0.poll()
            com.ss.android.socialbase.downloader.segment.Segment r0 = (com.ss.android.socialbase.downloader.segment.Segment) r0
            if (r0 != 0) goto L16
            goto L0
        L16:
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r4 = r6.dispatchedSegments
            r6.arrangeSegmentLocked(r4, r0, r1)
            long r4 = r6.getRemainReadBytes(r0)
            int r1 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r1 > 0) goto L29
            long r4 = r6.totalLength
            int r1 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r1 > 0) goto L0
        L29:
            return r0
        L2a:
            r6.clearCoveredSegmentLocked()
            com.ss.android.socialbase.downloader.segment.Segment r7 = r6.obtainChildSegmentFromMaxRemain(r7, r8)
            if (r7 == 0) goto L41
            long r4 = r6.getRemainReadBytes(r7)
            int r8 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r8 <= 0) goto L41
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r8 = r6.dispatchedSegments
            r6.arrangeSegmentLocked(r8, r7, r1)
            return r7
        L41:
            com.ss.android.socialbase.downloader.segment.Segment r7 = r6.obtainSegmentWhenNoNewSegment()
            if (r7 == 0) goto L48
            return r7
        L48:
            r7 = 0
            return r7
    }

    private com.ss.android.socialbase.downloader.segment.Segment obtainSegmentWhenNoNewSegment() {
            r15 = this;
            r0 = 0
        L1:
            com.ss.android.socialbase.downloader.segment.Segment r1 = r15.obtainLeastCompetitorSegment()
            r2 = 0
            if (r1 != 0) goto L9
            return r2
        L9:
            com.ss.android.socialbase.downloader.segment.SegmentReader r13 = r1.owner
            if (r13 != 0) goto Le
            return r1
        Le:
            int r3 = r1.getCompetitor()
            r14 = 2
            if (r3 < r14) goto L16
            return r2
        L16:
            long r7 = java.lang.System.currentTimeMillis()
            r15.markProgress(r7)
            long r3 = r13.readStartTime
            long r3 = r7 - r3
            r5 = 2000(0x7d0, double:9.88E-321)
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 <= 0) goto L5a
            long r5 = r7 - r5
            r9 = 500(0x1f4, double:2.47E-321)
            r11 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            r3 = r15
            r4 = r13
            boolean r3 = r3.isDownloadSpeedPoor(r4, r5, r7, r9, r11)
            if (r3 == 0) goto L5a
            boolean r0 = r15.debug
            if (r0 == 0) goto L59
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "obtainSegmentWhenNoNewSegment: isDownloadSpeedPoor segment = "
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", owner.threadIndex = "
            r0.append(r2)
            int r2 = r13.threadIndex
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "SegmentDispatcher"
            android.util.Log.i(r2, r0)
        L59:
            return r1
        L5a:
            int r3 = r0 + 1
            if (r0 <= r14) goto L79
            boolean r0 = r15.debug
            if (r0 == 0) goto L78
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "obtainSegmentWhenNoNewSegment: waitCount > 2, return segment = "
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "SegmentDispatcher"
            android.util.Log.i(r2, r0)
        L78:
            return r1
        L79:
            monitor-enter(r15)     // Catch: java.lang.InterruptedException -> L86
            r0 = 500(0x1f4, double:2.47E-321)
            r15.wait(r0)     // Catch: java.lang.Throwable -> L83
            monitor-exit(r15)     // Catch: java.lang.Throwable -> L83
            r0 = r3
            goto L1
        L83:
            r0 = move-exception
            monitor-exit(r15)     // Catch: java.lang.Throwable -> L83
            throw r0     // Catch: java.lang.InterruptedException -> L86
        L86:
            return r2
    }

    private com.ss.android.socialbase.downloader.segment.UrlRecord obtainUrl() {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.urlIndex     // Catch: java.lang.Throwable -> L22
            java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> r1 = r2.urlRecords     // Catch: java.lang.Throwable -> L22
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L22
            int r0 = r0 % r1
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r1 = r2.strategy     // Catch: java.lang.Throwable -> L22
            boolean r1 = r1.urlBalance()     // Catch: java.lang.Throwable -> L22
            if (r1 == 0) goto L18
            int r1 = r2.urlIndex     // Catch: java.lang.Throwable -> L22
            int r1 = r1 + 1
            r2.urlIndex = r1     // Catch: java.lang.Throwable -> L22
        L18:
            java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> r1 = r2.urlRecords     // Catch: java.lang.Throwable -> L22
            java.lang.Object r0 = r1.get(r0)     // Catch: java.lang.Throwable -> L22
            com.ss.android.socialbase.downloader.segment.UrlRecord r0 = (com.ss.android.socialbase.downloader.segment.UrlRecord) r0     // Catch: java.lang.Throwable -> L22
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L22
            return r0
        L22:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L22
            throw r0
    }

    private void onComplete() {
            r2 = this;
            java.lang.String r0 = "SegmentDispatcher"
            java.lang.String r1 = "onComplete"
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r1)
            com.ss.android.socialbase.downloader.segment.BufferQueue r0 = r2.bufferQueue
            r0.close()
            java.lang.Object r0 = r2.firstConnectionLock
            monitor-enter(r0)
            java.lang.Object r1 = r2.firstConnectionLock     // Catch: java.lang.Throwable -> L16
            r1.notify()     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return
        L16:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r1
    }

    private void onError(com.ss.android.socialbase.downloader.exception.BaseException r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onError, e = "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SegmentDispatcher"
            com.ss.android.socialbase.downloader.logger.Logger.e(r1, r0)
            r2.failedException = r3
            com.ss.android.socialbase.downloader.segment.BufferQueue r3 = r2.bufferQueue
            r3.close()
            monitor-enter(r2)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r3 = r2.readers     // Catch: java.lang.Throwable -> L36
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L36
        L24:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Throwable -> L36
            if (r0 == 0) goto L34
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Throwable -> L36
            com.ss.android.socialbase.downloader.segment.SegmentReader r0 = (com.ss.android.socialbase.downloader.segment.SegmentReader) r0     // Catch: java.lang.Throwable -> L36
            r0.close()     // Catch: java.lang.Throwable -> L36
            goto L24
        L34:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L36
            return
        L36:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L36
            throw r3
    }

    private long scheduleWatchRead() {
            r8 = this;
            boolean r0 = r8.canceled
            if (r0 != 0) goto L3e
            boolean r0 = r8.paused
            if (r0 == 0) goto L9
            goto L3e
        L9:
            long r0 = java.lang.System.currentTimeMillis()
            monitor-enter(r8)
            r8.markProgress(r0)     // Catch: java.lang.Throwable -> L3b
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r2 = r8.strategy     // Catch: java.lang.Throwable -> L3b
            long r2 = r2.getReadTimeout()     // Catch: java.lang.Throwable -> L3b
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L37
            long r6 = r8.lastReconnectTime     // Catch: java.lang.Throwable -> L3b
            int r4 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r4 <= 0) goto L37
            long r4 = r0 - r6
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 <= 0) goto L37
            boolean r2 = r8.findPoorReadThreadAndReconnect(r0, r2)     // Catch: java.lang.Throwable -> L3b
            if (r2 == 0) goto L37
            r8.lastReconnectTime = r0     // Catch: java.lang.Throwable -> L3b
            int r0 = r8.reconnectCount     // Catch: java.lang.Throwable -> L3b
            int r0 = r0 + 1
            r8.reconnectCount = r0     // Catch: java.lang.Throwable -> L3b
        L37:
            r0 = 2000(0x7d0, double:9.88E-321)
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L3b
            return r0
        L3b:
            r0 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L3b
            throw r0
        L3e:
            r0 = -1
            return r0
    }

    private void switchToNextUrl() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.urlIndex     // Catch: java.lang.Throwable -> L9
            int r0 = r0 + 1
            r1.urlIndex = r0     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L9
            return
        L9:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L9
            throw r0
    }

    private boolean trySwitchNextUrlForReader(com.ss.android.socialbase.downloader.segment.SegmentReader r2) {
            r1 = this;
            monitor-enter(r1)
            com.ss.android.socialbase.downloader.segment.UrlRecord r0 = r1.findNextUrlLocked(r2)     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto La
            r2 = 0
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L10
            return r2
        La:
            boolean r2 = r2.switchUrlRecord(r0)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L10
            return r2
        L10:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L10
            throw r2
    }

    private void validateHttpResponse(com.ss.android.socialbase.downloader.model.HttpResponse r11) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r10 = this;
            com.ss.android.socialbase.downloader.model.HttpResponse r0 = r10.mainUrlHttpResponse
            if (r0 != 0) goto L9
            com.ss.android.socialbase.downloader.model.HttpResponse r0 = r10.firstBackupUrlHttpResponse
            if (r0 != 0) goto L9
            return
        L9:
            long r1 = r11.getTotalLength()
            long r3 = r0.getTotalLength()
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            r6 = 1074(0x432, float:1.505E-42)
            java.lang.String r7 = "SegmentDispatcher"
            if (r5 == 0) goto L86
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r8 = "total len not equals,len="
            r5.append(r8)
            r5.append(r1)
            java.lang.String r8 = ",sLen="
            r5.append(r8)
            r5.append(r3)
            java.lang.String r8 = ",code="
            r5.append(r8)
            int r8 = r11.responseCode
            r5.append(r8)
            java.lang.String r8 = ",sCode="
            r5.append(r8)
            int r8 = r0.responseCode
            r5.append(r8)
            java.lang.String r8 = ",range="
            r5.append(r8)
            java.lang.String r8 = r11.getContentRange()
            r5.append(r8)
            java.lang.String r8 = ",sRange = "
            r5.append(r8)
            java.lang.String r8 = r0.getContentRange()
            r5.append(r8)
            java.lang.String r8 = ",url = "
            r5.append(r8)
            java.lang.String r8 = r11.url
            r5.append(r8)
            java.lang.String r8 = ",sUrl="
            r5.append(r8)
            java.lang.String r8 = r0.url
            r5.append(r8)
            java.lang.String r5 = r5.toString()
            com.ss.android.socialbase.downloader.logger.Logger.e(r7, r5)
            r8 = 0
            int r1 = (r1 > r8 ? 1 : (r1 == r8 ? 0 : -1))
            if (r1 <= 0) goto L86
            int r1 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r1 > 0) goto L80
            goto L86
        L80:
            com.ss.android.socialbase.downloader.exception.BaseException r11 = new com.ss.android.socialbase.downloader.exception.BaseException
            r11.<init>(r6, r5)
            throw r11
        L86:
            java.lang.String r11 = r11.getEtag()
            java.lang.String r0 = r0.getEtag()
            boolean r1 = android.text.TextUtils.equals(r11, r0)
            if (r1 != 0) goto Lc9
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "etag not equals with main url, etag = "
            r1.append(r2)
            r1.append(r11)
            java.lang.String r2 = ", mainEtag = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.e(r7, r1)
            boolean r2 = android.text.TextUtils.isEmpty(r11)
            if (r2 != 0) goto Lc9
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto Lc9
            boolean r11 = r11.equalsIgnoreCase(r0)
            if (r11 == 0) goto Lc3
            goto Lc9
        Lc3:
            com.ss.android.socialbase.downloader.exception.BaseException r11 = new com.ss.android.socialbase.downloader.exception.BaseException
            r11.<init>(r6, r1)
            throw r11
        Lc9:
            return
    }

    private void waitFirstConnection() throws com.ss.android.socialbase.downloader.exception.BaseException, java.lang.InterruptedException {
            r2 = this;
            java.lang.Object r0 = r2.firstConnectionLock
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.model.HttpResponse r1 = r2.mainUrlHttpResponse     // Catch: java.lang.Throwable -> L20
            if (r1 != 0) goto L10
            com.ss.android.socialbase.downloader.model.HttpResponse r1 = r2.firstBackupUrlHttpResponse     // Catch: java.lang.Throwable -> L20
            if (r1 != 0) goto L10
            java.lang.Object r1 = r2.firstConnectionLock     // Catch: java.lang.Throwable -> L20
            r1.wait()     // Catch: java.lang.Throwable -> L20
        L10:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            com.ss.android.socialbase.downloader.model.HttpResponse r0 = r2.mainUrlHttpResponse
            if (r0 != 0) goto L1f
            com.ss.android.socialbase.downloader.model.HttpResponse r0 = r2.firstBackupUrlHttpResponse
            if (r0 != 0) goto L1f
            com.ss.android.socialbase.downloader.exception.BaseException r0 = r2.failedException
            if (r0 != 0) goto L1e
            goto L1f
        L1e:
            throw r0
        L1f:
            return
        L20:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            throw r1
    }

    private void writeSegments() throws com.ss.android.socialbase.downloader.exception.BaseException {
            r4 = this;
            com.ss.android.socialbase.downloader.segment.MultiSegmentWriter r0 = r4.writer     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L8 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L23
            com.ss.android.socialbase.downloader.segment.BufferQueue r1 = r4.bufferQueue     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L8 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L23
            r0.loopAndWrite(r1)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L8 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L23
            goto L23
        L8:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "dispatchSegments: loopAndWrite e = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "SegmentDispatcher"
            com.ss.android.socialbase.downloader.logger.Logger.e(r2, r1)
            r4.onError(r0)
            throw r0
        L23:
            boolean r0 = r4.paused
            if (r0 != 0) goto L97
            boolean r0 = r4.canceled
            if (r0 == 0) goto L2c
            goto L97
        L2c:
            monitor-enter(r4)     // Catch: java.lang.Throwable -> L51
        L2d:
            java.util.LinkedList<com.ss.android.socialbase.downloader.segment.Segment> r0 = r4.toDispatchSegments     // Catch: java.lang.Throwable -> L4e
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L4e
            if (r0 != 0) goto L47
            java.util.LinkedList<com.ss.android.socialbase.downloader.segment.Segment> r0 = r4.toDispatchSegments     // Catch: java.lang.Throwable -> L4e
            java.lang.Object r0 = r0.poll()     // Catch: java.lang.Throwable -> L4e
            com.ss.android.socialbase.downloader.segment.Segment r0 = (com.ss.android.socialbase.downloader.segment.Segment) r0     // Catch: java.lang.Throwable -> L4e
            if (r0 != 0) goto L40
            goto L2d
        L40:
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r1 = r4.dispatchedSegments     // Catch: java.lang.Throwable -> L4e
            r2 = 1
            r4.arrangeSegmentLocked(r1, r0, r2)     // Catch: java.lang.Throwable -> L4e
            goto L2d
        L47:
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r0 = r4.dispatchedSegments     // Catch: java.lang.Throwable -> L4e
            r4.checkDownloadedBytesLocked(r0)     // Catch: java.lang.Throwable -> L4e
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L4e
            goto L55
        L4e:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L4e
            throw r0     // Catch: java.lang.Throwable -> L51
        L51:
            r0 = move-exception
            r0.printStackTrace()
        L55:
            boolean r0 = r4.allReaderFailed
            if (r0 == 0) goto L79
            com.ss.android.socialbase.downloader.exception.BaseException r0 = r4.failedException
            if (r0 != 0) goto L5e
            goto L79
        L5e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "dispatchSegments: loopAndWrite  failedException = "
            r0.append(r1)
            com.ss.android.socialbase.downloader.exception.BaseException r1 = r4.failedException
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SegmentDispatcher"
            com.ss.android.socialbase.downloader.logger.Logger.e(r1, r0)
            com.ss.android.socialbase.downloader.exception.BaseException r0 = r4.failedException
            throw r0
        L79:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            long r0 = r0.getCurBytes()
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r4.downloadInfo
            long r2 = r2.getTotalBytes()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L90
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.downloadInfo
            java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r1 = r4.dispatchedSegments
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSegmentsError(r0, r1)
        L90:
            java.lang.String r0 = "SegmentDispatcher"
            java.lang.String r1 = "dispatchSegments::download finished"
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r1)
        L97:
            return
    }

    @Override
    public void applySegment(com.ss.android.socialbase.downloader.segment.SegmentReader r1, com.ss.android.socialbase.downloader.segment.Segment r2) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r0 = this;
            monitor-enter(r0)
            r0.applySegmentLocked(r1, r2)     // Catch: java.lang.Throwable -> L6
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6
            throw r1
    }

    public void cancel() {
            r2 = this;
            java.lang.String r0 = "SegmentDispatcher"
            java.lang.String r1 = "cancel"
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r1)
            r0 = 1
            r2.canceled = r0
            monitor-enter(r2)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r0 = r2.readers     // Catch: java.lang.Throwable -> L2d
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2d
        L11:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2d
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2d
            com.ss.android.socialbase.downloader.segment.SegmentReader r1 = (com.ss.android.socialbase.downloader.segment.SegmentReader) r1     // Catch: java.lang.Throwable -> L2d
            r1.close()     // Catch: java.lang.Throwable -> L2d
            goto L11
        L21:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2d
            com.ss.android.socialbase.downloader.segment.MultiSegmentWriter r0 = r2.writer
            r0.cancel()
            com.ss.android.socialbase.downloader.segment.BufferQueue r0 = r2.bufferQueue
            r0.close()
            return
        L2d:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2d
            throw r0
    }

    @Override
    public com.ss.android.socialbase.downloader.segment.IOutput createOutput(com.ss.android.socialbase.downloader.segment.SegmentReader r3, com.ss.android.socialbase.downloader.segment.Segment r4) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r2 = this;
            monitor-enter(r2)
            com.ss.android.socialbase.downloader.segment.SegmentOutput r3 = new com.ss.android.socialbase.downloader.segment.SegmentOutput     // Catch: java.lang.Throwable -> L15
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.downloadInfo     // Catch: java.lang.Throwable -> L15
            com.ss.android.socialbase.downloader.segment.BufferQueue r1 = r2.bufferQueue     // Catch: java.lang.Throwable -> L15
            r3.<init>(r0, r1, r4)     // Catch: java.lang.Throwable -> L15
            com.ss.android.socialbase.downloader.segment.MultiSegmentWriter r4 = r2.writer     // Catch: java.lang.Throwable -> L15
            r4.assignOutput(r3)     // Catch: java.lang.Throwable -> L15
            com.ss.android.socialbase.downloader.segment.IOutput r3 = r3.getStub()     // Catch: java.lang.Throwable -> L15
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L15
            return r3
        L15:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L15
            throw r3
    }

    public boolean downloadSegments(java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r7) throws com.ss.android.socialbase.downloader.exception.BaseException, java.lang.InterruptedException {
            r6 = this;
            java.lang.String r0 = "finally pause"
            java.lang.String r1 = "SegmentDispatcher"
            r6.initUrlRecords()     // Catch: java.lang.Throwable -> L79
            r6.initSegments(r7)     // Catch: java.lang.Throwable -> L79
            r6.dispatchReadThread()     // Catch: java.lang.Throwable -> L79
            r6.initWatchDog()     // Catch: java.lang.Throwable -> L79
            r6.initDns()     // Catch: java.lang.Throwable -> L79
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L79
            r6.waitFirstConnection()     // Catch: java.lang.Throwable -> L68
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L79
            long r4 = r4 - r2
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r6.downloadInfo     // Catch: java.lang.Throwable -> L79
            r7.increaseAllConnectTime(r4)     // Catch: java.lang.Throwable -> L79
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r6.downloadInfo     // Catch: java.lang.Throwable -> L79
            r7.setFirstSpeedTime(r4)     // Catch: java.lang.Throwable -> L79
            boolean r7 = r6.paused     // Catch: java.lang.Throwable -> L79
            r2 = 1
            if (r7 != 0) goto L54
            boolean r7 = r6.canceled     // Catch: java.lang.Throwable -> L79
            if (r7 == 0) goto L33
            goto L54
        L33:
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r7 = r6.hostCallback     // Catch: java.lang.Throwable -> L79
            long r3 = r6.totalLength     // Catch: java.lang.Throwable -> L79
            r7.checkSpaceOverflow(r3)     // Catch: java.lang.Throwable -> L79
            r6.initWatchDog2()     // Catch: java.lang.Throwable -> L79
            r6.writeSegments()     // Catch: java.lang.Throwable -> L79
            boolean r7 = r6.paused
            if (r7 != 0) goto L4e
            boolean r7 = r6.canceled
            if (r7 != 0) goto L4e
            com.ss.android.socialbase.downloader.logger.Logger.i(r1, r0)
            r6.pause()
        L4e:
            com.ss.android.socialbase.downloader.thread.DownloadWatchDog r7 = r6.watchDog
            r7.release()
            return r2
        L54:
            boolean r7 = r6.paused
            if (r7 != 0) goto L62
            boolean r7 = r6.canceled
            if (r7 != 0) goto L62
            com.ss.android.socialbase.downloader.logger.Logger.i(r1, r0)
            r6.pause()
        L62:
            com.ss.android.socialbase.downloader.thread.DownloadWatchDog r7 = r6.watchDog
            r7.release()
            return r2
        L68:
            r7 = move-exception
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L79
            long r4 = r4 - r2
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r6.downloadInfo     // Catch: java.lang.Throwable -> L79
            r2.increaseAllConnectTime(r4)     // Catch: java.lang.Throwable -> L79
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r6.downloadInfo     // Catch: java.lang.Throwable -> L79
            r2.setFirstSpeedTime(r4)     // Catch: java.lang.Throwable -> L79
            throw r7     // Catch: java.lang.Throwable -> L79
        L79:
            r7 = move-exception
            boolean r2 = r6.paused
            if (r2 != 0) goto L88
            boolean r2 = r6.canceled
            if (r2 != 0) goto L88
            com.ss.android.socialbase.downloader.logger.Logger.i(r1, r0)
            r6.pause()
        L88:
            com.ss.android.socialbase.downloader.thread.DownloadWatchDog r0 = r6.watchDog
            r0.release()
            throw r7
    }

    @Override
    public com.ss.android.socialbase.downloader.segment.Segment obtainSegment(com.ss.android.socialbase.downloader.segment.SegmentReader r2, com.ss.android.socialbase.downloader.segment.UrlRecord r3) {
            r1 = this;
            boolean r0 = r1.canceled
            if (r0 != 0) goto L26
            boolean r0 = r1.paused
            if (r0 == 0) goto L9
            goto L26
        L9:
            monitor-enter(r1)
            com.ss.android.socialbase.downloader.segment.Segment r2 = r1.obtainSegmentLocked(r2, r3)     // Catch: java.lang.Throwable -> L23
            if (r2 == 0) goto L21
            r2.increaseCompetitor()     // Catch: java.lang.Throwable -> L23
            int r3 = r2.getCompetitor()     // Catch: java.lang.Throwable -> L23
            r0 = 1
            if (r3 <= r0) goto L21
            com.ss.android.socialbase.downloader.segment.Segment r3 = new com.ss.android.socialbase.downloader.segment.Segment     // Catch: java.lang.Throwable -> L23
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L23
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L23
            return r3
        L21:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L23
            return r2
        L23:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L23
            throw r2
        L26:
            r2 = 0
            return r2
    }

    @Override
    public void onDnsResolved(java.lang.String r2, java.util.List<java.net.InetAddress> r3) {
            r1 = this;
            boolean r0 = r1.paused
            if (r0 != 0) goto L36
            boolean r0 = r1.canceled
            if (r0 == 0) goto L9
            goto L36
        L9:
            r0 = 0
            java.util.List r0 = r1.assembleIpAddress(r2, r3)     // Catch: java.lang.Throwable -> Lf
            goto L13
        Lf:
            r3 = move-exception
            r3.printStackTrace()
        L13:
            monitor-enter(r1)
            if (r0 == 0) goto L19
            r1.addIpListLocked(r2, r0)     // Catch: java.lang.Throwable -> L33
        L19:
            r2 = 0
            r1.needWaitDnsResolve = r2     // Catch: java.lang.Throwable -> L33
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r2 = r1.strategy     // Catch: java.lang.Throwable -> L33
            java.util.List<com.ss.android.socialbase.downloader.segment.UrlRecord> r3 = r1.urlRecords     // Catch: java.lang.Throwable -> L33
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L33
            r2.updateUrlCount(r3)     // Catch: java.lang.Throwable -> L33
            java.lang.String r2 = "SegmentDispatcher"
            java.lang.String r3 = "onDnsResolved: dispatchReadThread"
            android.util.Log.i(r2, r3)     // Catch: java.lang.Throwable -> L33
            r1.dispatchReadThread()     // Catch: java.lang.Throwable -> L33
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L33
            return
        L33:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L33
            throw r2
        L36:
            return
    }

    @Override
    public void onReaderExit(com.ss.android.socialbase.downloader.segment.SegmentReader r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onReaderExit: threadIndex = "
            r0.append(r1)
            int r1 = r3.threadIndex
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SegmentDispatcher"
            com.ss.android.socialbase.downloader.logger.Logger.i(r1, r0)
            monitor-enter(r2)
            r0 = 1
            r3.setExited(r0)     // Catch: java.lang.Throwable -> L59
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r0 = r2.readers     // Catch: java.lang.Throwable -> L59
            r0.remove(r3)     // Catch: java.lang.Throwable -> L59
            r2.clearCoveredSegmentLocked()     // Catch: java.lang.Throwable -> L59
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r3 = r2.readers     // Catch: java.lang.Throwable -> L59
            boolean r3 = r3.isEmpty()     // Catch: java.lang.Throwable -> L59
            if (r3 == 0) goto L31
            r2.onComplete()     // Catch: java.lang.Throwable -> L59
            goto L57
        L31:
            boolean r3 = r2.isAllContentDownloaded()     // Catch: java.lang.Throwable -> L59
            if (r3 == 0) goto L57
            java.lang.String r3 = "SegmentDispatcher"
            java.lang.String r0 = "onReaderExit: allContentDownloaded"
            android.util.Log.i(r3, r0)     // Catch: java.lang.Throwable -> L59
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r3 = r2.readers     // Catch: java.lang.Throwable -> L59
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L59
        L44:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Throwable -> L59
            if (r0 == 0) goto L54
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Throwable -> L59
            com.ss.android.socialbase.downloader.segment.SegmentReader r0 = (com.ss.android.socialbase.downloader.segment.SegmentReader) r0     // Catch: java.lang.Throwable -> L59
            r0.close()     // Catch: java.lang.Throwable -> L59
            goto L44
        L54:
            r2.onComplete()     // Catch: java.lang.Throwable -> L59
        L57:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L59
            return
        L59:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L59
            throw r3
    }

    @Override
    public void onReaderRun(com.ss.android.socialbase.downloader.segment.SegmentReader r3) {
            r2 = this;
            boolean r0 = r2.debug
            if (r0 == 0) goto L1c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onReaderRun, threadIndex = "
            r0.append(r1)
            int r3 = r3.threadIndex
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "SegmentDispatcher"
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r3)
        L1c:
            return
    }

    @Override
    public void onSegmentConnected(com.ss.android.socialbase.downloader.segment.SegmentReader r3, com.ss.android.socialbase.downloader.segment.Segment r4, com.ss.android.socialbase.downloader.segment.UrlRecord r5, com.ss.android.socialbase.downloader.model.HttpResponse r6) throws com.ss.android.socialbase.downloader.exception.BaseException, com.ss.android.socialbase.downloader.exception.RetryThrowable {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.canceled     // Catch: java.lang.Throwable -> L43
            if (r0 != 0) goto L3b
            boolean r0 = r2.paused     // Catch: java.lang.Throwable -> L43
            if (r0 != 0) goto L3b
            r2.checkSegmentHttpResponseLocked(r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L43
            r4 = 0
            r3.setFailed(r4)     // Catch: java.lang.Throwable -> L43
            long r3 = r2.totalLength     // Catch: java.lang.Throwable -> L43
            r0 = 0
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 > 0) goto L2e
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r2.downloadInfo     // Catch: java.lang.Throwable -> L43
            long r3 = r3.getTotalBytes()     // Catch: java.lang.Throwable -> L43
            r2.totalLength = r3     // Catch: java.lang.Throwable -> L43
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 > 0) goto L2a
            long r3 = r6.getTotalLength()     // Catch: java.lang.Throwable -> L43
            r2.totalLength = r3     // Catch: java.lang.Throwable -> L43
        L2a:
            r2.dispatchReadThread()     // Catch: java.lang.Throwable -> L43
            goto L39
        L2e:
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r3 = r2.strategy     // Catch: java.lang.Throwable -> L43
            boolean r3 = r3.segmentOneByOne()     // Catch: java.lang.Throwable -> L43
            if (r3 == 0) goto L39
            r2.dispatchReadThread()     // Catch: java.lang.Throwable -> L43
        L39:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L43
            return
        L3b:
            com.ss.android.socialbase.downloader.segment.StreamClosedException r3 = new com.ss.android.socialbase.downloader.segment.StreamClosedException     // Catch: java.lang.Throwable -> L43
            java.lang.String r4 = "connected"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L43
            throw r3     // Catch: java.lang.Throwable -> L43
        L43:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L43
            throw r3
    }

    @Override
    public void onSegmentFailed(com.ss.android.socialbase.downloader.segment.SegmentReader r3, com.ss.android.socialbase.downloader.segment.UrlRecord r4, com.ss.android.socialbase.downloader.segment.Segment r5, com.ss.android.socialbase.downloader.exception.BaseException r6) {
            r2 = this;
            monitor-enter(r2)
            java.lang.String r4 = "SegmentDispatcher"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3e
            r0.<init>()     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = "onSegmentFailed: segment = "
            r0.append(r1)     // Catch: java.lang.Throwable -> L3e
            r0.append(r5)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r5 = ", e = "
            r0.append(r5)     // Catch: java.lang.Throwable -> L3e
            r0.append(r6)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> L3e
            com.ss.android.socialbase.downloader.logger.Logger.e(r4, r5)     // Catch: java.lang.Throwable -> L3e
            r4 = 1
            r3.setFailed(r4)     // Catch: java.lang.Throwable -> L3e
            int r3 = r3.threadIndex     // Catch: java.lang.Throwable -> L3e
            if (r3 != 0) goto L29
            r2.failedException = r6     // Catch: java.lang.Throwable -> L3e
        L29:
            boolean r3 = r2.isAllReaderFailedLocked()     // Catch: java.lang.Throwable -> L3e
            if (r3 == 0) goto L3c
            com.ss.android.socialbase.downloader.exception.BaseException r3 = r2.failedException     // Catch: java.lang.Throwable -> L3e
            if (r3 != 0) goto L35
            r2.failedException = r6     // Catch: java.lang.Throwable -> L3e
        L35:
            r2.allReaderFailed = r4     // Catch: java.lang.Throwable -> L3e
            com.ss.android.socialbase.downloader.exception.BaseException r3 = r2.failedException     // Catch: java.lang.Throwable -> L3e
            r2.onError(r3)     // Catch: java.lang.Throwable -> L3e
        L3c:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L3e
            return
        L3e:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L3e
            throw r3
    }

    @Override
    public void onSegmentRetry(com.ss.android.socialbase.downloader.segment.SegmentReader r1, com.ss.android.socialbase.downloader.segment.UrlRecord r2, com.ss.android.socialbase.downloader.segment.Segment r3, com.ss.android.socialbase.downloader.exception.BaseException r4, int r5, int r6) {
            r0 = this;
            boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isResponseCodeError(r4)
            int r3 = r4.getErrorCode()
            r4 = 1047(0x417, float:1.467E-42)
            if (r3 == r4) goto L14
            r4 = 1074(0x432, float:1.505E-42)
            if (r3 == r4) goto L14
            r4 = 1055(0x41f, float:1.478E-42)
            if (r3 != r4) goto L15
        L14:
            r2 = 1
        L15:
            if (r2 != 0) goto L19
            if (r5 < r6) goto L1c
        L19:
            r0.trySwitchNextUrlForReader(r1)
        L1c:
            return
    }

    public void pause() {
            r2 = this;
            java.lang.String r0 = "SegmentDispatcher"
            java.lang.String r1 = "pause1"
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r1)
            r0 = 1
            r2.paused = r0
            monitor-enter(r2)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r0 = r2.readers     // Catch: java.lang.Throwable -> L2d
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2d
        L11:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2d
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2d
            com.ss.android.socialbase.downloader.segment.SegmentReader r1 = (com.ss.android.socialbase.downloader.segment.SegmentReader) r1     // Catch: java.lang.Throwable -> L2d
            r1.close()     // Catch: java.lang.Throwable -> L2d
            goto L11
        L21:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2d
            com.ss.android.socialbase.downloader.segment.MultiSegmentWriter r0 = r2.writer
            r0.pause()
            com.ss.android.socialbase.downloader.segment.BufferQueue r0 = r2.bufferQueue
            r0.close()
            return
        L2d:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2d
            throw r0
    }

    @Override
    public void unApplySegment(com.ss.android.socialbase.downloader.segment.SegmentReader r4, com.ss.android.socialbase.downloader.segment.Segment r5) {
            r3 = this;
            monitor-enter(r3)
            com.ss.android.socialbase.downloader.segment.SegmentReader r0 = r5.owner     // Catch: java.lang.Throwable -> L2a
            if (r0 != r4) goto L28
            java.lang.String r0 = "SegmentDispatcher"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2a
            r1.<init>()     // Catch: java.lang.Throwable -> L2a
            java.lang.String r2 = "unApplySegment "
            r1.append(r2)     // Catch: java.lang.Throwable -> L2a
            r1.append(r5)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L2a
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r1)     // Catch: java.lang.Throwable -> L2a
            long r0 = r4.getCurSegmentReadOffset()     // Catch: java.lang.Throwable -> L2a
            r5.setCurrentOffsetRead(r0)     // Catch: java.lang.Throwable -> L2a
            r0 = 0
            r5.owner = r0     // Catch: java.lang.Throwable -> L2a
            r4.updateReadBytes()     // Catch: java.lang.Throwable -> L2a
        L28:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L2a
            return
        L2a:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L2a
            throw r4
    }

    @Override
    public void unObtainSegment(com.ss.android.socialbase.downloader.segment.SegmentReader r1, com.ss.android.socialbase.downloader.segment.Segment r2) {
            r0 = this;
            monitor-enter(r0)
            r2.decreaseCompetitor()     // Catch: java.lang.Throwable -> L6
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6
            throw r1
    }
}
