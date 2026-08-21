package com.ss.android.socialbase.downloader.segment;

class MultiSegmentWriter {
    private static final boolean DEBUG = false;
    private static final int MIN_CACHE_BYTES = 65536;
    private static final int MIN_CACHE_TIME_MS = 100;
    private static final int MIN_SYNC_STEP_BYTE = 65536;
    private static final long MIN_SYNC_TIME_MS = 500;
    private static final java.lang.String TAG = "MultiSegmentWriter";
    private final com.ss.android.socialbase.downloader.common.AppStatusManager appStatusManager;
    private final com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback callback;
    private volatile boolean canceled;
    private final java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> doneOutputs;
    private final com.ss.android.socialbase.downloader.downloader.IDownloadCache downloadCache;
    private final com.ss.android.socialbase.downloader.model.DownloadInfo downloadInfo;
    private com.ss.android.socialbase.downloader.exception.BaseException exception;
    private final boolean hasSyncStrategy;
    private final boolean isMonitorRw;
    private volatile long lastSyncBytes;
    private volatile long lastSyncTimestamp;
    private final java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> outputs;
    private volatile boolean paused;
    private final com.ss.android.socialbase.downloader.segment.IBufferPool pool;
    private final com.ss.android.socialbase.downloader.setting.DownloadSetting setting;
    private final long syncIntervalMsBg;
    private final long syncIntervalMsFg;
    private long syncTimeNs;
    private volatile boolean threadDirty;

    MultiSegmentWriter(com.ss.android.socialbase.downloader.model.DownloadInfo r8, com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r9, com.ss.android.socialbase.downloader.segment.IBufferPool r10) {
            r7 = this;
            r7.<init>()
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r7.outputs = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r7.doneOutputs = r0
            r0 = 0
            r7.threadDirty = r0
            r7.paused = r0
            r7.canceled = r0
            r1 = 0
            r7.lastSyncBytes = r1
            r7.lastSyncTimestamp = r1
            r7.downloadInfo = r8
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadCache()
            r7.downloadCache = r3
            r7.callback = r9
            r7.pool = r10
            com.ss.android.socialbase.downloader.common.AppStatusManager r9 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            r7.appStatusManager = r9
            int r8 = r8.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r8 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r8)
            r7.setting = r8
            java.lang.String r9 = "sync_strategy"
            int r8 = r8.optInt(r9, r0)
            r9 = 1
            if (r8 != r9) goto L45
            r8 = r9
            goto L46
        L45:
            r8 = r0
        L46:
            r7.hasSyncStrategy = r8
            if (r8 == 0) goto L6f
            com.ss.android.socialbase.downloader.setting.DownloadSetting r8 = r7.setting
            r10 = 5000(0x1388, float:7.006E-42)
            java.lang.String r1 = "sync_interval_ms_fg"
            int r8 = r8.optInt(r1, r10)
            long r1 = (long) r8
            com.ss.android.socialbase.downloader.setting.DownloadSetting r8 = r7.setting
            r10 = 1000(0x3e8, float:1.401E-42)
            java.lang.String r3 = "sync_interval_ms_bg"
            int r8 = r8.optInt(r3, r10)
            long r3 = (long) r8
            r5 = 500(0x1f4, double:2.47E-321)
            long r1 = java.lang.Math.max(r1, r5)
            r7.syncIntervalMsFg = r1
            long r1 = java.lang.Math.max(r3, r5)
            r7.syncIntervalMsBg = r1
            goto L73
        L6f:
            r7.syncIntervalMsFg = r1
            r7.syncIntervalMsBg = r1
        L73:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r8 = r7.setting
            java.lang.String r10 = "monitor_rw"
            int r8 = r8.optInt(r10)
            if (r8 != r9) goto L7e
            r0 = r9
        L7e:
            r7.isMonitorRw = r0
            return
    }

    private void checkAndSync(long r7, boolean r9) throws java.io.IOException {
            r6 = this;
            long r0 = r6.lastSyncTimestamp
            long r0 = r7 - r0
            boolean r2 = r6.hasSyncStrategy
            if (r2 == 0) goto L1f
            com.ss.android.socialbase.downloader.common.AppStatusManager r9 = r6.appStatusManager
            boolean r9 = r9.isAppForeground()
            if (r9 == 0) goto L13
            long r2 = r6.syncIntervalMsFg
            goto L15
        L13:
            long r2 = r6.syncIntervalMsBg
        L15:
            int r9 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r9 <= 0) goto L35
            r6.flushAndSync()
            r6.lastSyncTimestamp = r7
            goto L35
        L1f:
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r6.downloadInfo
            long r2 = r2.getCurBytes()
            long r4 = r6.lastSyncBytes
            long r2 = r2 - r4
            if (r9 != 0) goto L30
            boolean r9 = r6.isNeedSync(r2, r0)
            if (r9 == 0) goto L35
        L30:
            r6.flushAndSync()
            r6.lastSyncTimestamp = r7
        L35:
            return
    }

    private void close(java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r2) {
            r1 = this;
            java.util.Iterator r2 = r2.iterator()
        L4:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L14
            java.lang.Object r0 = r2.next()
            com.ss.android.socialbase.downloader.segment.SegmentOutput r0 = (com.ss.android.socialbase.downloader.segment.SegmentOutput) r0
            r0.close()
            goto L4
        L14:
            return
    }

    private void flush(java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r2) throws java.io.IOException {
            r1 = this;
            java.util.Iterator r2 = r2.iterator()
        L4:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L14
            java.lang.Object r0 = r2.next()
            com.ss.android.socialbase.downloader.segment.SegmentOutput r0 = (com.ss.android.socialbase.downloader.segment.SegmentOutput) r0
            r0.flush()
            goto L4
        L14:
            return
    }

    private void flushAndSync() throws java.io.IOException {
            r11 = this;
            boolean r0 = r11.isMonitorRw
            if (r0 == 0) goto L9
            long r1 = java.lang.System.nanoTime()
            goto Lb
        L9:
            r1 = 0
        Lb:
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r11.downloadInfo
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r4 = r11.downloadCache
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r5 = r11.outputs
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r6 = r11.doneOutputs
            int r7 = r3.getId()
            java.util.Map r7 = r4.getSegmentMap(r7)
            if (r7 != 0) goto L23
            java.util.HashMap r7 = new java.util.HashMap
            r8 = 4
            r7.<init>(r8)
        L23:
            r8 = 0
            monitor-enter(r11)
            r11.flush(r5)     // Catch: java.lang.Throwable -> L67
            r9 = 1
            r11.sync(r5)     // Catch: java.lang.Throwable -> L2e
            r8 = r9
            goto L32
        L2e:
            r10 = move-exception
            r10.printStackTrace()     // Catch: java.lang.Throwable -> L67
        L32:
            r11.updateSegmentToMap(r5, r7)     // Catch: java.lang.Throwable -> L67
            int r10 = r6.size()     // Catch: java.lang.Throwable -> L67
            if (r10 <= 0) goto L44
            r11.close(r6)     // Catch: java.lang.Throwable -> L67
            r5.removeAll(r6)     // Catch: java.lang.Throwable -> L67
            r6.clear()     // Catch: java.lang.Throwable -> L67
        L44:
            monitor-exit(r11)     // Catch: java.lang.Throwable -> L67
            if (r8 == 0) goto L5a
            r3.updateRealDownloadTime(r9)
            int r5 = r3.getId()
            r4.updateSegments(r5, r7)
            r4.updateDownloadInfo(r3)
            long r3 = r3.getCurBytes()
            r11.lastSyncBytes = r3
        L5a:
            if (r0 == 0) goto L66
            long r3 = java.lang.System.nanoTime()
            long r3 = r3 - r1
            long r0 = r11.syncTimeNs
            long r0 = r0 + r3
            r11.syncTimeNs = r0
        L66:
            return
        L67:
            r0 = move-exception
            monitor-exit(r11)     // Catch: java.lang.Throwable -> L67
            throw r0
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

    private void outputDone(com.ss.android.socialbase.downloader.segment.IOutput r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r0 = r1.doneOutputs     // Catch: java.lang.Throwable -> La
            com.ss.android.socialbase.downloader.segment.SegmentOutput r2 = (com.ss.android.socialbase.downloader.segment.SegmentOutput) r2     // Catch: java.lang.Throwable -> La
            r0.add(r2)     // Catch: java.lang.Throwable -> La
            monitor-exit(r1)     // Catch: java.lang.Throwable -> La
            return
        La:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> La
            throw r2
    }

    private void sync(java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r2) throws java.io.IOException {
            r1 = this;
            java.util.Iterator r2 = r2.iterator()
        L4:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L14
            java.lang.Object r0 = r2.next()
            com.ss.android.socialbase.downloader.segment.SegmentOutput r0 = (com.ss.android.socialbase.downloader.segment.SegmentOutput) r0
            r0.sync()
            goto L4
        L14:
            return
    }

    private void updateSegmentToMap(java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r5, java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment> r6) {
            r4 = this;
            java.util.Iterator r5 = r5.iterator()
        L4:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L44
            java.lang.Object r0 = r5.next()
            com.ss.android.socialbase.downloader.segment.SegmentOutput r0 = (com.ss.android.socialbase.downloader.segment.SegmentOutput) r0
            com.ss.android.socialbase.downloader.segment.Segment r0 = r0.getSegment()
            long r1 = r0.getStartOffset()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.Object r1 = r6.get(r1)
            com.ss.android.socialbase.downloader.segment.Segment r1 = (com.ss.android.socialbase.downloader.segment.Segment) r1
            if (r1 != 0) goto L35
            com.ss.android.socialbase.downloader.segment.Segment r1 = new com.ss.android.socialbase.downloader.segment.Segment
            r1.<init>(r0)
            long r2 = r0.getStartOffset()
            java.lang.Long r0 = java.lang.Long.valueOf(r2)
            r6.put(r0, r1)
            goto L4
        L35:
            long r2 = r0.getCurrentOffset()
            r1.setCurrentOffset(r2)
            long r2 = r0.getEndOffset()
            r1.setEndOffset(r2)
            goto L4
        L44:
            return
    }

    void assignOutput(com.ss.android.socialbase.downloader.segment.SegmentOutput r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r0 = r1.outputs     // Catch: java.lang.Throwable -> L8
            r0.add(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L8
            throw r2
    }

    public void cancel() {
            r1 = this;
            r0 = 1
            r1.canceled = r0
            r1.threadDirty = r0
            return
    }

    public long getLastSyncBytes() {
            r2 = this;
            long r0 = r2.lastSyncBytes
            return r0
    }

    void loopAndWrite(com.ss.android.socialbase.downloader.segment.IInput r31) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r30 = this;
            r1 = r30
            boolean r0 = r1.paused
            if (r0 != 0) goto L466
            boolean r0 = r1.canceled
            if (r0 == 0) goto Lc
            goto L466
        Lc:
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.updateWifiStatus()
            r2 = 0
            r1.exception = r2
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r1.downloadInfo
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r3 = r1.callback
            com.ss.android.socialbase.downloader.segment.IBufferPool r0 = r1.pool
            long r5 = r4.getCurBytes()
            long r7 = java.lang.System.nanoTime()
            boolean r14 = r1.isMonitorRw
            r9 = 0
            r22 = 1
            r15 = 0
            r4.updateRealStartDownloadTime()     // Catch: java.lang.Throwable -> L1ee com.ss.android.socialbase.downloader.exception.BaseException -> L31f com.ss.android.socialbase.downloader.segment.StreamClosedException -> L3d9
            r11 = r9
            r16 = r11
            r18 = r16
            r13 = r15
        L30:
            if (r14 == 0) goto L53
            long r11 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L37 com.ss.android.socialbase.downloader.exception.BaseException -> L41 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L4b
            goto L53
        L37:
            r0 = move-exception
            r23 = r9
        L3a:
            r27 = r15
            r17 = r16
        L3e:
            r15 = r13
            goto L1f5
        L41:
            r0 = move-exception
            r23 = r9
        L44:
            r27 = r15
            r17 = r16
        L48:
            r15 = r13
            goto L326
        L4b:
            r0 = move-exception
            r27 = r15
            r25 = r16
        L50:
            r15 = r13
            goto L3de
        L53:
            com.ss.android.socialbase.downloader.segment.Buffer r2 = r31.read()     // Catch: java.lang.Throwable -> L1d3 com.ss.android.socialbase.downloader.exception.BaseException -> L1dc com.ss.android.socialbase.downloader.segment.StreamClosedException -> L1e6
            if (r14 == 0) goto L61
            long r23 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L37 com.ss.android.socialbase.downloader.exception.BaseException -> L41 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L4b
            long r23 = r23 - r11
            long r9 = r9 + r23
        L61:
            r23 = r9
            int r9 = r2.size     // Catch: java.lang.Throwable -> L1c1 com.ss.android.socialbase.downloader.exception.BaseException -> L1c5 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L1c9
            r10 = -1
            if (r9 != r10) goto L80
            com.ss.android.socialbase.downloader.segment.IOutput r9 = r2.output     // Catch: java.lang.Throwable -> L74 com.ss.android.socialbase.downloader.exception.BaseException -> L76 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L78
            r1.outputDone(r9)     // Catch: java.lang.Throwable -> L74 com.ss.android.socialbase.downloader.exception.BaseException -> L76 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L78
            r0.recycle(r2)     // Catch: java.lang.Throwable -> L74 com.ss.android.socialbase.downloader.exception.BaseException -> L76 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L78
            r9 = r23
        L72:
            r2 = 0
            goto L30
        L74:
            r0 = move-exception
            goto L3a
        L76:
            r0 = move-exception
            goto L44
        L78:
            r0 = move-exception
            r27 = r15
            r25 = r16
        L7d:
            r9 = r23
            goto L50
        L80:
            if (r14 == 0) goto L87
            long r10 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L74 com.ss.android.socialbase.downloader.exception.BaseException -> L76 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L78
            r11 = r10
        L87:
            com.ss.android.socialbase.downloader.segment.IOutput r10 = r2.output     // Catch: java.lang.Throwable -> L1c1 com.ss.android.socialbase.downloader.exception.BaseException -> L1c5 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L1c9
            r10.write(r2)     // Catch: java.lang.Throwable -> L1c1 com.ss.android.socialbase.downloader.exception.BaseException -> L1c5 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L1c9
            if (r14 == 0) goto L96
            long r25 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L74 com.ss.android.socialbase.downloader.exception.BaseException -> L76 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L78
            long r25 = r25 - r11
            long r16 = r16 + r25
        L96:
            r25 = r16
            r0.recycle(r2)     // Catch: java.lang.Throwable -> L1ad com.ss.android.socialbase.downloader.exception.BaseException -> L1b4 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L1bc
            boolean r2 = r1.threadDirty     // Catch: java.lang.Throwable -> L1ad com.ss.android.socialbase.downloader.exception.BaseException -> L1b4 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L1bc
            if (r2 == 0) goto L13c
            boolean r2 = r1.paused     // Catch: java.lang.Throwable -> L1ad com.ss.android.socialbase.downloader.exception.BaseException -> L1b4 com.ss.android.socialbase.downloader.segment.StreamClosedException -> L1bc
            if (r2 != 0) goto Lbc
            boolean r2 = r1.canceled     // Catch: java.lang.Throwable -> Lac com.ss.android.socialbase.downloader.exception.BaseException -> Lb2 com.ss.android.socialbase.downloader.segment.StreamClosedException -> Lb8
            if (r2 == 0) goto La8
            goto Lbc
        La8:
            r1.threadDirty = r15     // Catch: java.lang.Throwable -> Lac com.ss.android.socialbase.downloader.exception.BaseException -> Lb2 com.ss.android.socialbase.downloader.segment.StreamClosedException -> Lb8
            goto L13c
        Lac:
            r0 = move-exception
            r27 = r15
            r17 = r25
            goto L3e
        Lb2:
            r0 = move-exception
            r27 = r15
            r17 = r25
            goto L48
        Lb8:
            r0 = move-exception
            r27 = r15
            goto L7d
        Lbc:
            if (r13 <= 0) goto Lc2
            long r9 = (long) r13
            r3.onProgress(r9)     // Catch: java.lang.Throwable -> Lc2
        Lc2:
            boolean r0 = r1.canceled
            if (r0 != 0) goto Le3
            r30.flushAndSync()     // Catch: java.lang.Throwable -> Lca
            goto Le3
        Lca:
            r0 = move-exception
            r2 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "loopAndWrite: finally sync, e = "
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "MultiSegmentWriter"
            com.ss.android.socialbase.downloader.logger.Logger.w(r3, r0)
            goto Le4
        Le3:
            r2 = 0
        Le4:
            monitor-enter(r30)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r0 = r1.outputs     // Catch: java.lang.Throwable -> L139
            r1.close(r0)     // Catch: java.lang.Throwable -> L139
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r0 = r1.outputs     // Catch: java.lang.Throwable -> L139
            r0.clear()     // Catch: java.lang.Throwable -> L139
            monitor-exit(r30)     // Catch: java.lang.Throwable -> L139
            long r9 = r4.getCurBytes()
            long r10 = r9 - r5
            long r5 = java.lang.System.nanoTime()
            long r12 = r5 - r7
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = r1.setting
            java.lang.String r5 = r4.getUrl()
            r6 = 0
            boolean r7 = r1.paused
            boolean r8 = r1.canceled
            com.ss.android.socialbase.downloader.exception.BaseException r9 = r1.exception
            r0 = r7
            long r6 = r1.syncTimeNs
            r19 = r6
            r21 = 0
            r27 = r15
            r15 = r23
            r17 = r25
            r7 = r0
            r6 = 0
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorDownloadIO(r3, r4, r5, r6, r7, r8, r9, r10, r12, r14, r15, r17, r19, r21)
            if (r2 == 0) goto L138
            boolean r0 = r1.paused
            if (r0 != 0) goto L12c
            boolean r0 = r1.canceled
            if (r0 != 0) goto L12c
            com.ss.android.socialbase.downloader.exception.BaseException r0 = r1.exception
            if (r0 == 0) goto L12a
            goto L12c
        L12a:
            r22 = r27
        L12c:
            if (r22 != 0) goto L138
            java.lang.String r0 = "loopAndWrite_finally"
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r2, r0)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L134
            goto L138
        L134:
            r0 = move-exception
            r1.exception = r0
            throw r0
        L138:
            return
        L139:
            r0 = move-exception
            monitor-exit(r30)     // Catch: java.lang.Throwable -> L139
            throw r0
        L13c:
            r27 = r15
            int r13 = r13 + r9
            r2 = 65536(0x10000, float:9.1835E-41)
            if (r13 < r2) goto L1a1
            long r9 = android.os.SystemClock.uptimeMillis()     // Catch: java.lang.Throwable -> L19b com.ss.android.socialbase.downloader.exception.BaseException -> L19d com.ss.android.socialbase.downloader.segment.StreamClosedException -> L19f
            long r15 = r9 - r18
            r28 = 100
            int r2 = (r15 > r28 ? 1 : (r15 == r28 ? 0 : -1))
            if (r2 <= 0) goto L1a1
            r28 = r11
            long r11 = (long) r13     // Catch: java.lang.Throwable -> L19b com.ss.android.socialbase.downloader.exception.BaseException -> L19d com.ss.android.socialbase.downloader.segment.StreamClosedException -> L19f
            boolean r2 = r3.onProgress(r11)     // Catch: java.lang.Throwable -> L19b com.ss.android.socialbase.downloader.exception.BaseException -> L19d com.ss.android.socialbase.downloader.segment.StreamClosedException -> L19f
            r1.checkAndSync(r9, r2)     // Catch: java.lang.Throwable -> L186 com.ss.android.socialbase.downloader.exception.BaseException -> L18d com.ss.android.socialbase.downloader.segment.StreamClosedException -> L194
            boolean r2 = com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.isWifi     // Catch: java.lang.Throwable -> L186 com.ss.android.socialbase.downloader.exception.BaseException -> L18d com.ss.android.socialbase.downloader.segment.StreamClosedException -> L194
            if (r2 != 0) goto L17c
            boolean r2 = r4.isOnlyWifi()     // Catch: java.lang.Throwable -> L186 com.ss.android.socialbase.downloader.exception.BaseException -> L18d com.ss.android.socialbase.downloader.segment.StreamClosedException -> L194
            if (r2 != 0) goto L176
            boolean r2 = r4.isDownloadFromReserveWifi()     // Catch: java.lang.Throwable -> L186 com.ss.android.socialbase.downloader.exception.BaseException -> L18d com.ss.android.socialbase.downloader.segment.StreamClosedException -> L194
            if (r2 == 0) goto L17c
            boolean r2 = r4.isPauseReserveOnWifi()     // Catch: java.lang.Throwable -> L186 com.ss.android.socialbase.downloader.exception.BaseException -> L18d com.ss.android.socialbase.downloader.segment.StreamClosedException -> L194
            if (r2 != 0) goto L170
            goto L17c
        L170:
            com.ss.android.socialbase.downloader.exception.DownloadPauseReserveWifiException r0 = new com.ss.android.socialbase.downloader.exception.DownloadPauseReserveWifiException     // Catch: java.lang.Throwable -> L186 com.ss.android.socialbase.downloader.exception.BaseException -> L18d com.ss.android.socialbase.downloader.segment.StreamClosedException -> L194
            r0.<init>()     // Catch: java.lang.Throwable -> L186 com.ss.android.socialbase.downloader.exception.BaseException -> L18d com.ss.android.socialbase.downloader.segment.StreamClosedException -> L194
            throw r0     // Catch: java.lang.Throwable -> L186 com.ss.android.socialbase.downloader.exception.BaseException -> L18d com.ss.android.socialbase.downloader.segment.StreamClosedException -> L194
        L176:
            com.ss.android.socialbase.downloader.exception.DownloadOnlyWifiException r0 = new com.ss.android.socialbase.downloader.exception.DownloadOnlyWifiException     // Catch: java.lang.Throwable -> L186 com.ss.android.socialbase.downloader.exception.BaseException -> L18d com.ss.android.socialbase.downloader.segment.StreamClosedException -> L194
            r0.<init>()     // Catch: java.lang.Throwable -> L186 com.ss.android.socialbase.downloader.exception.BaseException -> L18d com.ss.android.socialbase.downloader.segment.StreamClosedException -> L194
            throw r0     // Catch: java.lang.Throwable -> L186 com.ss.android.socialbase.downloader.exception.BaseException -> L18d com.ss.android.socialbase.downloader.segment.StreamClosedException -> L194
        L17c:
            r18 = r9
            r9 = r23
            r16 = r25
            r13 = r27
            r15 = r13
            goto L1a9
        L186:
            r0 = move-exception
            r17 = r25
            r15 = r27
            goto L1f5
        L18d:
            r0 = move-exception
            r17 = r25
            r15 = r27
            goto L326
        L194:
            r0 = move-exception
            r9 = r23
            r15 = r27
            goto L3de
        L19b:
            r0 = move-exception
            goto L1b0
        L19d:
            r0 = move-exception
            goto L1b7
        L19f:
            r0 = move-exception
            goto L1bf
        L1a1:
            r28 = r11
            r9 = r23
            r16 = r25
            r15 = r27
        L1a9:
            r11 = r28
            goto L72
        L1ad:
            r0 = move-exception
            r27 = r15
        L1b0:
            r15 = r13
            r17 = r25
            goto L1f5
        L1b4:
            r0 = move-exception
            r27 = r15
        L1b7:
            r15 = r13
            r17 = r25
            goto L326
        L1bc:
            r0 = move-exception
            r27 = r15
        L1bf:
            r15 = r13
            goto L1cf
        L1c1:
            r0 = move-exception
            r27 = r15
            goto L1d8
        L1c5:
            r0 = move-exception
            r27 = r15
            goto L1e1
        L1c9:
            r0 = move-exception
            r27 = r15
            r15 = r13
            r25 = r16
        L1cf:
            r9 = r23
            goto L3de
        L1d3:
            r0 = move-exception
            r27 = r15
            r23 = r9
        L1d8:
            r15 = r13
            r17 = r16
            goto L1f5
        L1dc:
            r0 = move-exception
            r27 = r15
            r23 = r9
        L1e1:
            r15 = r13
            r17 = r16
            goto L326
        L1e6:
            r0 = move-exception
            r27 = r15
            r15 = r13
            r25 = r16
            goto L3de
        L1ee:
            r0 = move-exception
            r27 = r15
            r17 = r9
            r23 = r17
        L1f5:
            boolean r2 = r1.paused     // Catch: java.lang.Throwable -> L3d6
            if (r2 != 0) goto L2a3
            boolean r2 = r1.canceled     // Catch: java.lang.Throwable -> L3d6
            if (r2 == 0) goto L1ff
            goto L2a3
        L1ff:
            boolean r2 = com.ss.android.socialbase.downloader.logger.Logger.debug()     // Catch: java.lang.Throwable -> L3d6
            if (r2 == 0) goto L208
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L3d6
        L208:
            java.lang.String r2 = "MultiSegmentWriter"
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d6
            r9.<init>()     // Catch: java.lang.Throwable -> L3d6
            java.lang.String r10 = "loopAndWrite:  e = "
            r9.append(r10)     // Catch: java.lang.Throwable -> L3d6
            r9.append(r0)     // Catch: java.lang.Throwable -> L3d6
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L3d6
            com.ss.android.socialbase.downloader.logger.Logger.w(r2, r9)     // Catch: java.lang.Throwable -> L3d6
            java.lang.String r2 = "loopAndWrite"
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r0, r2)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L29f java.lang.Throwable -> L3d6
            if (r15 <= 0) goto L229
            long r9 = (long) r15
            r3.onProgress(r9)     // Catch: java.lang.Throwable -> L229
        L229:
            boolean r0 = r1.canceled
            if (r0 != 0) goto L24a
            r30.flushAndSync()     // Catch: java.lang.Throwable -> L231
            goto L24a
        L231:
            r0 = move-exception
            r2 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "loopAndWrite: finally sync, e = "
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "MultiSegmentWriter"
            com.ss.android.socialbase.downloader.logger.Logger.w(r3, r0)
            goto L24b
        L24a:
            r2 = 0
        L24b:
            monitor-enter(r30)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r0 = r1.outputs     // Catch: java.lang.Throwable -> L29c
            r1.close(r0)     // Catch: java.lang.Throwable -> L29c
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r0 = r1.outputs     // Catch: java.lang.Throwable -> L29c
            r0.clear()     // Catch: java.lang.Throwable -> L29c
            monitor-exit(r30)     // Catch: java.lang.Throwable -> L29c
            long r9 = r4.getCurBytes()
            long r10 = r9 - r5
            long r5 = java.lang.System.nanoTime()
            long r12 = r5 - r7
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = r1.setting
            java.lang.String r5 = r4.getUrl()
            r6 = 0
            boolean r7 = r1.paused
            boolean r8 = r1.canceled
            com.ss.android.socialbase.downloader.exception.BaseException r9 = r1.exception
            r0 = r7
            long r6 = r1.syncTimeNs
            r19 = r6
            r21 = 0
            r15 = r23
            r7 = r0
            r6 = 0
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorDownloadIO(r3, r4, r5, r6, r7, r8, r9, r10, r12, r14, r15, r17, r19, r21)
            if (r2 == 0) goto L29b
            boolean r0 = r1.paused
            if (r0 != 0) goto L28f
            boolean r0 = r1.canceled
            if (r0 != 0) goto L28f
            com.ss.android.socialbase.downloader.exception.BaseException r0 = r1.exception
            if (r0 == 0) goto L28d
            goto L28f
        L28d:
            r22 = r27
        L28f:
            if (r22 != 0) goto L29b
            java.lang.String r0 = "loopAndWrite_finally"
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r2, r0)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L297
            goto L29b
        L297:
            r0 = move-exception
            r1.exception = r0
            throw r0
        L29b:
            return
        L29c:
            r0 = move-exception
            monitor-exit(r30)     // Catch: java.lang.Throwable -> L29c
            throw r0
        L29f:
            r0 = move-exception
            r1.exception = r0     // Catch: java.lang.Throwable -> L3d6
            throw r0     // Catch: java.lang.Throwable -> L3d6
        L2a3:
            if (r15 <= 0) goto L2a9
            long r9 = (long) r15
            r3.onProgress(r9)     // Catch: java.lang.Throwable -> L2a9
        L2a9:
            boolean r0 = r1.canceled
            if (r0 != 0) goto L2ca
            r30.flushAndSync()     // Catch: java.lang.Throwable -> L2b1
            goto L2ca
        L2b1:
            r0 = move-exception
            r2 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "loopAndWrite: finally sync, e = "
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "MultiSegmentWriter"
            com.ss.android.socialbase.downloader.logger.Logger.w(r3, r0)
            goto L2cb
        L2ca:
            r2 = 0
        L2cb:
            monitor-enter(r30)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r0 = r1.outputs     // Catch: java.lang.Throwable -> L31c
            r1.close(r0)     // Catch: java.lang.Throwable -> L31c
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r0 = r1.outputs     // Catch: java.lang.Throwable -> L31c
            r0.clear()     // Catch: java.lang.Throwable -> L31c
            monitor-exit(r30)     // Catch: java.lang.Throwable -> L31c
            long r9 = r4.getCurBytes()
            long r10 = r9 - r5
            long r5 = java.lang.System.nanoTime()
            long r12 = r5 - r7
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = r1.setting
            java.lang.String r5 = r4.getUrl()
            r6 = 0
            boolean r7 = r1.paused
            boolean r8 = r1.canceled
            com.ss.android.socialbase.downloader.exception.BaseException r9 = r1.exception
            r0 = r7
            long r6 = r1.syncTimeNs
            r19 = r6
            r21 = 0
            r15 = r23
            r7 = r0
            r6 = 0
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorDownloadIO(r3, r4, r5, r6, r7, r8, r9, r10, r12, r14, r15, r17, r19, r21)
            if (r2 == 0) goto L31b
            boolean r0 = r1.paused
            if (r0 != 0) goto L30f
            boolean r0 = r1.canceled
            if (r0 != 0) goto L30f
            com.ss.android.socialbase.downloader.exception.BaseException r0 = r1.exception
            if (r0 == 0) goto L30d
            goto L30f
        L30d:
            r22 = r27
        L30f:
            if (r22 != 0) goto L31b
            java.lang.String r0 = "loopAndWrite_finally"
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r2, r0)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L317
            goto L31b
        L317:
            r0 = move-exception
            r1.exception = r0
            throw r0
        L31b:
            return
        L31c:
            r0 = move-exception
            monitor-exit(r30)     // Catch: java.lang.Throwable -> L31c
            throw r0
        L31f:
            r0 = move-exception
            r27 = r15
            r17 = r9
            r23 = r17
        L326:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = r1.setting     // Catch: java.lang.Throwable -> L3d6
            java.lang.String r9 = "ignore_base_ex_on_stop_status"
            boolean r2 = r2.optBugFix(r9)     // Catch: java.lang.Throwable -> L3d6
            if (r2 == 0) goto L3b4
            boolean r2 = r1.paused     // Catch: java.lang.Throwable -> L3d6
            if (r2 != 0) goto L338
            boolean r2 = r1.canceled     // Catch: java.lang.Throwable -> L3d6
            if (r2 == 0) goto L3b4
        L338:
            if (r15 <= 0) goto L33e
            long r9 = (long) r15
            r3.onProgress(r9)     // Catch: java.lang.Throwable -> L33e
        L33e:
            boolean r0 = r1.canceled
            if (r0 != 0) goto L35f
            r30.flushAndSync()     // Catch: java.lang.Throwable -> L346
            goto L35f
        L346:
            r0 = move-exception
            r2 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "loopAndWrite: finally sync, e = "
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "MultiSegmentWriter"
            com.ss.android.socialbase.downloader.logger.Logger.w(r3, r0)
            goto L360
        L35f:
            r2 = 0
        L360:
            monitor-enter(r30)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r0 = r1.outputs     // Catch: java.lang.Throwable -> L3b1
            r1.close(r0)     // Catch: java.lang.Throwable -> L3b1
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r0 = r1.outputs     // Catch: java.lang.Throwable -> L3b1
            r0.clear()     // Catch: java.lang.Throwable -> L3b1
            monitor-exit(r30)     // Catch: java.lang.Throwable -> L3b1
            long r9 = r4.getCurBytes()
            long r10 = r9 - r5
            long r5 = java.lang.System.nanoTime()
            long r12 = r5 - r7
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = r1.setting
            java.lang.String r5 = r4.getUrl()
            r6 = 0
            boolean r7 = r1.paused
            boolean r8 = r1.canceled
            com.ss.android.socialbase.downloader.exception.BaseException r9 = r1.exception
            r0 = r7
            long r6 = r1.syncTimeNs
            r19 = r6
            r21 = 0
            r15 = r23
            r7 = r0
            r6 = 0
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorDownloadIO(r3, r4, r5, r6, r7, r8, r9, r10, r12, r14, r15, r17, r19, r21)
            if (r2 == 0) goto L3b0
            boolean r0 = r1.paused
            if (r0 != 0) goto L3a4
            boolean r0 = r1.canceled
            if (r0 != 0) goto L3a4
            com.ss.android.socialbase.downloader.exception.BaseException r0 = r1.exception
            if (r0 == 0) goto L3a2
            goto L3a4
        L3a2:
            r22 = r27
        L3a4:
            if (r22 != 0) goto L3b0
            java.lang.String r0 = "loopAndWrite_finally"
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r2, r0)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L3ac
            goto L3b0
        L3ac:
            r0 = move-exception
            r1.exception = r0
            throw r0
        L3b0:
            return
        L3b1:
            r0 = move-exception
            monitor-exit(r30)     // Catch: java.lang.Throwable -> L3b1
            throw r0
        L3b4:
            boolean r2 = com.ss.android.socialbase.downloader.logger.Logger.debug()     // Catch: java.lang.Throwable -> L3d6
            if (r2 == 0) goto L3bd
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L3d6
        L3bd:
            java.lang.String r2 = "MultiSegmentWriter"
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d6
            r9.<init>()     // Catch: java.lang.Throwable -> L3d6
            java.lang.String r10 = "loopAndWrite:  BaseException e = "
            r9.append(r10)     // Catch: java.lang.Throwable -> L3d6
            r9.append(r0)     // Catch: java.lang.Throwable -> L3d6
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L3d6
            com.ss.android.socialbase.downloader.logger.Logger.w(r2, r9)     // Catch: java.lang.Throwable -> L3d6
            r1.exception = r0     // Catch: java.lang.Throwable -> L3d6
            throw r0     // Catch: java.lang.Throwable -> L3d6
        L3d6:
            r0 = move-exception
            r2 = r0
            goto L3e7
        L3d9:
            r0 = move-exception
            r27 = r15
            r25 = r9
        L3de:
            r1.exception = r0     // Catch: java.lang.Throwable -> L3e1
            throw r0     // Catch: java.lang.Throwable -> L3e1
        L3e1:
            r0 = move-exception
            r2 = r0
            r23 = r9
            r17 = r25
        L3e7:
            if (r15 <= 0) goto L3ed
            long r9 = (long) r15
            r3.onProgress(r9)     // Catch: java.lang.Throwable -> L3ed
        L3ed:
            boolean r0 = r1.canceled
            if (r0 != 0) goto L40f
            r30.flushAndSync()     // Catch: java.lang.Throwable -> L3f5
            goto L40f
        L3f5:
            r0 = move-exception
            r3 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r9 = "loopAndWrite: finally sync, e = "
            r0.append(r9)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r9 = "MultiSegmentWriter"
            com.ss.android.socialbase.downloader.logger.Logger.w(r9, r0)
            r0 = r3
            goto L410
        L40f:
            r0 = 0
        L410:
            monitor-enter(r30)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r3 = r1.outputs     // Catch: java.lang.Throwable -> L463
            r1.close(r3)     // Catch: java.lang.Throwable -> L463
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentOutput> r3 = r1.outputs     // Catch: java.lang.Throwable -> L463
            r3.clear()     // Catch: java.lang.Throwable -> L463
            monitor-exit(r30)     // Catch: java.lang.Throwable -> L463
            long r9 = r4.getCurBytes()
            long r10 = r9 - r5
            long r5 = java.lang.System.nanoTime()
            long r12 = r5 - r7
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = r1.setting
            java.lang.String r5 = r4.getUrl()
            r6 = 0
            boolean r7 = r1.paused
            boolean r8 = r1.canceled
            com.ss.android.socialbase.downloader.exception.BaseException r9 = r1.exception
            r25 = r7
            long r6 = r1.syncTimeNs
            r19 = r6
            r21 = 0
            r15 = r23
            r7 = r25
            r6 = 0
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorDownloadIO(r3, r4, r5, r6, r7, r8, r9, r10, r12, r14, r15, r17, r19, r21)
            if (r0 == 0) goto L462
            boolean r3 = r1.paused
            if (r3 != 0) goto L456
            boolean r3 = r1.canceled
            if (r3 != 0) goto L456
            com.ss.android.socialbase.downloader.exception.BaseException r3 = r1.exception
            if (r3 == 0) goto L454
            goto L456
        L454:
            r22 = r27
        L456:
            if (r22 != 0) goto L462
            java.lang.String r3 = "loopAndWrite_finally"
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r0, r3)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L45e
            goto L462
        L45e:
            r0 = move-exception
            r1.exception = r0
            throw r0
        L462:
            throw r2
        L463:
            r0 = move-exception
            monitor-exit(r30)     // Catch: java.lang.Throwable -> L463
            throw r0
        L466:
            return
    }

    public void pause() {
            r1 = this;
            r0 = 1
            r1.paused = r0
            r1.threadDirty = r0
            return
    }
}
