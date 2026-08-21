package com.ss.android.socialbase.downloader.thread;

public class DownloadChunkRunnable implements java.lang.Runnable {
    private static final java.lang.String TAG = null;
    private final com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback callback;
    private volatile boolean canceled;
    private com.ss.android.socialbase.downloader.model.DownloadChunk curDownloadChunk;
    private com.ss.android.socialbase.downloader.downloader.IDownloadCache downloadCache;
    private com.ss.android.socialbase.downloader.model.DownloadChunk downloadChunk;
    private com.ss.android.socialbase.downloader.model.DownloadInfo downloadInfo;
    private com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler downloadResponseHandler;
    private final com.ss.android.socialbase.downloader.model.DownloadTask downloadTask;
    private com.ss.android.socialbase.downloader.network.IDownloadHttpConnection httpConnection;
    private boolean isHttpConnectionInject;
    private volatile boolean paused;

    static {
            java.lang.Class<com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable> r0 = com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable.TAG = r0
            return
    }

    public DownloadChunkRunnable(com.ss.android.socialbase.downloader.model.DownloadChunk r1, com.ss.android.socialbase.downloader.model.DownloadTask r2, com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r3, com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r4) {
            r0 = this;
            r0.<init>(r1, r2, r4)
            r0.httpConnection = r3
            return
    }

    public DownloadChunkRunnable(com.ss.android.socialbase.downloader.model.DownloadChunk r2, com.ss.android.socialbase.downloader.model.DownloadTask r3, com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isHttpConnectionInject = r0
            r1.downloadChunk = r2
            r1.downloadTask = r3
            if (r3 == 0) goto L12
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r3.getDownloadInfo()
            r1.downloadInfo = r2
        L12:
            r1.callback = r4
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadCache()
            r1.downloadCache = r2
            com.ss.android.socialbase.downloader.model.DownloadChunk r2 = r1.downloadChunk
            r2.setChunkRunnable(r1)
            return
    }

    private void closeConnection() {
            r1 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection
            if (r0 == 0) goto La
            r0.end()
            r0 = 0
            r1.httpConnection = r0
        La:
            return
    }

    private boolean downloadChunkInner(com.ss.android.socialbase.downloader.model.DownloadChunk r31) {
            r30 = this;
            r1 = r30
            r8 = r31
        L4:
            r0 = 0
            boolean r2 = r31.isHostChunk()
            if (r2 == 0) goto L23
            boolean r2 = r31.hasChunkDivided()
            if (r2 == 0) goto L23
            com.ss.android.socialbase.downloader.model.DownloadChunk r2 = r31.getFirstReuseChunk()
            if (r2 == 0) goto L23
            int r3 = r2.getChunkIndex()
            int r4 = r31.getChunkIndex()
            if (r3 != r4) goto L23
            r9 = r2
            goto L24
        L23:
            r9 = r0
        L24:
            r10 = 1
            if (r9 == 0) goto L2e
            boolean r0 = r9.hasNoBytesDownload()
            if (r0 == 0) goto L2e
            return r10
        L2e:
            long r2 = r31.getCurrentOffset()
            long r4 = r31.getEndOffset()
            long r6 = r31.getCurrentOffset()
            if (r9 == 0) goto L48
            long r6 = r9.getCurrentOffset()
            long r2 = r9.getCurrentOffset()
            long r4 = r9.getEndOffset()
        L48:
            r17 = r2
            r19 = r4
            r21 = 0
            r5 = 0
            boolean r0 = r30.isStoppedStatus()     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            if (r0 == 0) goto L59
            r30.closeConnection()
            return r5
        L59:
            java.lang.String r4 = r30.getUrl()     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            if (r0 == 0) goto L63
            r0 = r10
            goto L64
        L63:
            r0 = r5
        L64:
            r1.isHttpConnectionInject = r0     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            r8.setReuseingFirstConnection(r0)     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            r2 = 300(0x12c, float:4.2E-43)
            r3 = 200(0xc8, float:2.8E-43)
            boolean r0 = r1.isHttpConnectionInject     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            if (r0 != 0) goto Lb3
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            java.util.List r11 = r0.getExtraHeaders()     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            java.lang.String r12 = r0.geteTag()     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            r13 = r17
            r15 = r19
            java.util.List r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.addRangeHeader(r11, r12, r13, r15)     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            com.ss.android.socialbase.downloader.model.HttpHeader r11 = new com.ss.android.socialbase.downloader.model.HttpHeader     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            java.lang.String r12 = "Chunk-Index"
            int r13 = r31.getChunkIndex()     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            java.lang.String r13 = java.lang.String.valueOf(r13)     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            r11.<init>(r12, r13)     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            r0.add(r11)     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r1.downloadInfo     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            com.ss.android.socialbase.downloader.utils.DownloadUtils.addThrottleNetSpeed(r0, r11)     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r1.downloadInfo     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            com.ss.android.socialbase.downloader.utils.DownloadUtils.addTTNetProtectTimeout(r0, r11)     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r1.downloadInfo     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            boolean r11 = r11.isNeedDefaultHttpServiceBackUp()     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            com.ss.android.socialbase.downloader.model.DownloadInfo r12 = r1.downloadInfo     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            int r12 = r12.getMaxBytes()     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadWithConnection(r11, r12, r4, r0)     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
            r1.httpConnection = r0     // Catch: java.lang.Throwable -> Ld2 com.ss.android.socialbase.downloader.exception.BaseException -> L18d
        Lb3:
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            if (r0 == 0) goto Lf4
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r0 = r1.callback     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            if (r0 == 0) goto Lf4
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection     // Catch: java.lang.Throwable -> Lcd
            int r0 = r0.getResponseCode()     // Catch: java.lang.Throwable -> Lcd
            if (r0 < r3) goto Lc5
            if (r0 < r2) goto Lf4
        Lc5:
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r0 = r1.callback     // Catch: java.lang.Throwable -> Lcd
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r2 = r1.httpConnection     // Catch: java.lang.Throwable -> Lcd
            r0.setHttpResponseStatus(r2)     // Catch: java.lang.Throwable -> Lcd
            goto Lf4
        Lcd:
            r0 = move-exception
        Lce:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            goto Lf4
        Ld2:
            r0 = move-exception
            java.lang.String r11 = "ChunkRunnableConnection"
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r0, r11)     // Catch: java.lang.Throwable -> L189
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            if (r0 == 0) goto Lf4
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r0 = r1.callback     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            if (r0 == 0) goto Lf4
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection     // Catch: java.lang.Throwable -> Lf2
            int r0 = r0.getResponseCode()     // Catch: java.lang.Throwable -> Lf2
            if (r0 < r3) goto Lea
            if (r0 < r2) goto Lf4
        Lea:
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r0 = r1.callback     // Catch: java.lang.Throwable -> Lf2
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r2 = r1.httpConnection     // Catch: java.lang.Throwable -> Lf2
            r0.setHttpResponseStatus(r2)     // Catch: java.lang.Throwable -> Lf2
            goto Lf4
        Lf2:
            r0 = move-exception
            goto Lce
        Lf4:
            boolean r0 = r30.isStoppedStatus()     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            if (r0 == 0) goto Lfe
            r30.closeConnection()
            return r5
        Lfe:
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            if (r0 == 0) goto L178
            boolean r0 = r1.isHttpConnectionInject     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            if (r0 != 0) goto L132
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection     // Catch: java.lang.Throwable -> L129 com.ss.android.socialbase.downloader.exception.BaseException -> L130
            int r0 = r0.getResponseCode()     // Catch: java.lang.Throwable -> L129 com.ss.android.socialbase.downloader.exception.BaseException -> L130
            boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isResponseCodeValid(r0)     // Catch: java.lang.Throwable -> L129 com.ss.android.socialbase.downloader.exception.BaseException -> L130
            if (r2 == 0) goto L113
            goto L132
        L113:
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L129 com.ss.android.socialbase.downloader.exception.BaseException -> L130
            r3 = 1002(0x3ea, float:1.404E-42)
            java.lang.String r11 = "Http response error , code is : %s "
            java.lang.Object[] r12 = new java.lang.Object[r10]     // Catch: java.lang.Throwable -> L129 com.ss.android.socialbase.downloader.exception.BaseException -> L130
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L129 com.ss.android.socialbase.downloader.exception.BaseException -> L130
            r12[r5] = r0     // Catch: java.lang.Throwable -> L129 com.ss.android.socialbase.downloader.exception.BaseException -> L130
            java.lang.String r0 = java.lang.String.format(r11, r12)     // Catch: java.lang.Throwable -> L129 com.ss.android.socialbase.downloader.exception.BaseException -> L130
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L129 com.ss.android.socialbase.downloader.exception.BaseException -> L130
            throw r2     // Catch: java.lang.Throwable -> L129 com.ss.android.socialbase.downloader.exception.BaseException -> L130
        L129:
            r0 = move-exception
            java.lang.String r2 = "ChunkRunnableGetResponseCode"
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r0, r2)     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            goto L132
        L130:
            r0 = move-exception
            throw r0     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
        L132:
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = new com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r1.downloadInfo     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r11 = r1.httpConnection     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r12 = r1.callback     // Catch: java.lang.Throwable -> L1b7 com.ss.android.socialbase.downloader.exception.BaseException -> L1d3
            r2 = r0
            r13 = r5
            r5 = r11
            r14 = r6
            r6 = r31
            r7 = r12
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
            r1.downloadResponseHandler = r0     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
            if (r9 == 0) goto L16b
            long r2 = r9.getRetainLength(r13)     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
            int r0 = (r19 > r21 ? 1 : (r19 == r21 ? 0 : -1))
            if (r0 == 0) goto L15a
            int r0 = (r19 > r17 ? 1 : (r19 == r17 ? 0 : -1))
            if (r0 < 0) goto L15a
            long r19 = r19 - r17
            r2 = 1
            long r2 = r19 + r2
        L15a:
            r28 = r2
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = r1.downloadResponseHandler     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
            long r24 = r9.getCurrentOffset()     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
            long r26 = r9.getEndOffset()     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
            r23 = r0
            r23.setChunkOffset(r24, r26, r28)     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
        L16b:
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = r1.downloadResponseHandler     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L174 java.lang.Throwable -> L1b2
            r0.handleResponse()     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L174 java.lang.Throwable -> L1b2
            r30.closeConnection()
            return r10
        L174:
            r0 = move-exception
            r5 = r10
            goto L1d6
        L178:
            r13 = r5
            r14 = r6
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
            r2 = 1022(0x3fe, float:1.432E-42)
            java.io.IOException r3 = new java.io.IOException     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
            java.lang.String r4 = "download can't continue, chunk connection is null"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
            r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
            throw r0     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
        L189:
            r0 = move-exception
            r13 = r5
            r14 = r6
            goto L192
        L18d:
            r0 = move-exception
            r13 = r5
            r14 = r6
            throw r0     // Catch: java.lang.Throwable -> L191
        L191:
            r0 = move-exception
        L192:
            r4 = r0
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
            if (r0 == 0) goto L1b1
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r0 = r1.callback     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
            if (r0 == 0) goto L1b1
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.httpConnection     // Catch: java.lang.Throwable -> L1ad
            int r0 = r0.getResponseCode()     // Catch: java.lang.Throwable -> L1ad
            if (r0 < r3) goto L1a5
            if (r0 < r2) goto L1b1
        L1a5:
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r0 = r1.callback     // Catch: java.lang.Throwable -> L1ad
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r2 = r1.httpConnection     // Catch: java.lang.Throwable -> L1ad
            r0.setHttpResponseStatus(r2)     // Catch: java.lang.Throwable -> L1ad
            goto L1b1
        L1ad:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
        L1b1:
            throw r4     // Catch: java.lang.Throwable -> L1b2 com.ss.android.socialbase.downloader.exception.BaseException -> L1b4
        L1b2:
            r0 = move-exception
            goto L1b9
        L1b4:
            r0 = move-exception
            r5 = r13
            goto L1d6
        L1b7:
            r0 = move-exception
            r13 = r5
        L1b9:
            boolean r2 = r30.isStoppedStatus()     // Catch: java.lang.Throwable -> L2a3
            if (r2 == 0) goto L1c3
            r30.closeConnection()
            return r10
        L1c3:
            java.lang.String r2 = "downloadChunkInner"
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r0, r2)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1c9 java.lang.Throwable -> L2a3
            goto L1cf
        L1c9:
            r0 = move-exception
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r2 = r1.callback     // Catch: java.lang.Throwable -> L2a3
            r2.onError(r0)     // Catch: java.lang.Throwable -> L2a3
        L1cf:
            r30.closeConnection()
            return r13
        L1d3:
            r0 = move-exception
            r13 = r5
            r14 = r6
        L1d6:
            boolean r2 = r30.isStoppedStatus()     // Catch: java.lang.Throwable -> L2a3
            if (r2 == 0) goto L1e0
            r30.closeConnection()
            return r10
        L1e0:
            boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isResponseCodeError(r0)     // Catch: java.lang.Throwable -> L2a3
            if (r2 == 0) goto L1ef
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r2 = r1.callback     // Catch: java.lang.Throwable -> L2a3
            r2.onAllChunkRetryWithReset(r0, r13)     // Catch: java.lang.Throwable -> L2a3
            r30.closeConnection()
            return r13
        L1ef:
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r2 = r1.callback     // Catch: java.lang.Throwable -> L2a3
            boolean r2 = r2.canRetry(r0)     // Catch: java.lang.Throwable -> L2a3
            if (r2 == 0) goto L271
            boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isHttpDataDirtyError(r0)     // Catch: java.lang.Throwable -> L2a3
            if (r2 == 0) goto L206
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r2 = r1.callback     // Catch: java.lang.Throwable -> L2a3
            r2.onAllChunkRetryWithReset(r0, r10)     // Catch: java.lang.Throwable -> L2a3
            r30.closeConnection()
            return r13
        L206:
            if (r5 == 0) goto L247
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r2 = r1.downloadResponseHandler     // Catch: java.lang.Throwable -> L2a3
            if (r2 == 0) goto L23e
            r2 = 32
            boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r2)     // Catch: java.lang.Throwable -> L2a3
            if (r2 == 0) goto L232
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r2 = r1.downloadResponseHandler     // Catch: java.lang.Throwable -> L2a3
            long r2 = r2.getCurOffset()     // Catch: java.lang.Throwable -> L2a3
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r4 = r1.downloadResponseHandler     // Catch: java.lang.Throwable -> L2a3
            long r4 = r4.getLastSyncBytes()     // Catch: java.lang.Throwable -> L2a3
            long r2 = r2 - r4
            int r4 = (r2 > r21 ? 1 : (r2 == r21 ? 0 : -1))
            if (r4 <= 0) goto L22f
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r4 = r1.downloadResponseHandler     // Catch: java.lang.Throwable -> L2a3
            long r4 = r4.getLastSyncBytes()     // Catch: java.lang.Throwable -> L2a3
            r1.revertDownloadChunk(r8, r4)     // Catch: java.lang.Throwable -> L2a3
            goto L249
        L22f:
            if (r4 >= 0) goto L249
            goto L247
        L232:
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r2 = r1.downloadResponseHandler     // Catch: java.lang.Throwable -> L2a3
            long r2 = r2.getCurOffset()     // Catch: java.lang.Throwable -> L2a3
            long r21 = r2 - r14
            r1.revertDownloadChunk(r8, r14)     // Catch: java.lang.Throwable -> L2a3
            goto L247
        L23e:
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r2 = r1.callback     // Catch: java.lang.Throwable -> L2a3
            r2.onError(r0)     // Catch: java.lang.Throwable -> L2a3
            r30.closeConnection()
            return r13
        L247:
            r2 = r21
        L249:
            r4 = 16
            boolean r4 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r4)     // Catch: java.lang.Throwable -> L2a3
            if (r4 == 0) goto L258
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r4 = r1.callback     // Catch: java.lang.Throwable -> L2a3
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r0 = r4.onSingleChunkRetry(r8, r0, r2)     // Catch: java.lang.Throwable -> L2a3
            goto L25e
        L258:
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r4 = r1.callback     // Catch: java.lang.Throwable -> L2a3
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r0 = r4.onRetry(r0, r2)     // Catch: java.lang.Throwable -> L2a3
        L25e:
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r2 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN     // Catch: java.lang.Throwable -> L2a3
            if (r0 != r2) goto L266
            r30.closeConnection()
            return r13
        L266:
            r8.setReuseingFirstConnection(r13)     // Catch: java.lang.Throwable -> L2a3
            r30.closeConnection()     // Catch: java.lang.Throwable -> L2a3
            r30.closeConnection()
            goto L4
        L271:
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.downloadInfo     // Catch: java.lang.Throwable -> L2a3
            boolean r2 = r2.isNeedChunkDowngradeRetry()     // Catch: java.lang.Throwable -> L2a3
            if (r2 == 0) goto L29a
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.downloadInfo     // Catch: java.lang.Throwable -> L2a3
            boolean r2 = r2.isChunkDowngradeRetryUsed()     // Catch: java.lang.Throwable -> L2a3
            if (r2 != 0) goto L29a
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.downloadInfo     // Catch: java.lang.Throwable -> L2a3
            int r2 = r2.getChunkCount()     // Catch: java.lang.Throwable -> L2a3
            if (r2 <= r10) goto L29a
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.downloadInfo     // Catch: java.lang.Throwable -> L2a3
            boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.canChunkDowngradeRetry(r0, r2)     // Catch: java.lang.Throwable -> L2a3
            if (r2 == 0) goto L29a
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r2 = r1.callback     // Catch: java.lang.Throwable -> L2a3
            r2.onChunkDowngradeRetry(r0)     // Catch: java.lang.Throwable -> L2a3
            r30.closeConnection()
            return r13
        L29a:
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r2 = r1.callback     // Catch: java.lang.Throwable -> L2a3
            r2.onError(r0)     // Catch: java.lang.Throwable -> L2a3
            r30.closeConnection()
            return r13
        L2a3:
            r0 = move-exception
            r30.closeConnection()
            throw r0
    }

    private java.lang.String getUrl() {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.downloadInfo
            java.lang.String r0 = r0.getConnectionUrl()
            return r0
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

    private void revertDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r10, long r11) {
            r9 = this;
            boolean r0 = r10.isHostChunk()
            if (r0 == 0) goto Lb
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = r10.getFirstReuseChunk()
            goto Lc
        Lb:
            r0 = r10
        Lc:
            if (r0 == 0) goto L37
            boolean r10 = r0.canRefreshCurOffsetForReuseChunk()
            if (r10 == 0) goto L21
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r10 = r9.downloadCache
            int r1 = r0.getId()
            int r2 = r0.getHostChunkIndex()
            r10.updateDownloadChunk(r1, r2, r11)
        L21:
            r0.setCurrentOffset(r11)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r3 = r9.downloadCache
            int r4 = r0.getId()
            int r5 = r0.getChunkIndex()
            int r6 = r0.getHostChunkIndex()
            r7 = r11
            r3.updateSubDownloadChunk(r4, r5, r6, r7)
            goto L4a
        L37:
            boolean r0 = r10.isHostChunk()
            if (r0 == 0) goto L4a
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r9.downloadCache
            int r1 = r10.getId()
            int r10 = r10.getChunkIndex()
            r0.updateDownloadChunk(r1, r10, r11)
        L4a:
            return
    }

    public void cancel() {
            r1 = this;
            r0 = 1
            r1.canceled = r0
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = r1.downloadResponseHandler
            if (r0 == 0) goto La
            r0.cancel()
        La:
            return
    }

    public int getChunkIndex() {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = r1.downloadChunk
            int r0 = r0.getChunkIndex()
            return r0
    }

    public void pause() {
            r1 = this;
            r0 = 1
            r1.paused = r0
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = r1.downloadResponseHandler
            if (r0 == 0) goto La
            r0.pause()
        La:
            return
    }

    public void refreshResponseHandleOffset(long r2, long r4) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler r0 = r1.downloadResponseHandler
            if (r0 != 0) goto L5
            return
        L5:
            r0.setEndOffset(r2, r4)
            return
    }

    @Override
    public void run() {
            r3 = this;
            r0 = 10
            android.os.Process.setThreadPriority(r0)
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = r3.downloadChunk
            r3.curDownloadChunk = r0
        L9:
            r0 = 0
            com.ss.android.socialbase.downloader.model.DownloadChunk r1 = r3.curDownloadChunk     // Catch: java.lang.Throwable -> L5d
            r1.setChunkRunnable(r3)     // Catch: java.lang.Throwable -> L5d
            com.ss.android.socialbase.downloader.model.DownloadChunk r1 = r3.curDownloadChunk     // Catch: java.lang.Throwable -> L5d
            boolean r1 = r3.downloadChunkInner(r1)     // Catch: java.lang.Throwable -> L5d
            if (r1 != 0) goto L1d
            com.ss.android.socialbase.downloader.model.DownloadChunk r1 = r3.curDownloadChunk     // Catch: java.lang.Throwable -> L5d
            r1.setDownloading(r0)     // Catch: java.lang.Throwable -> L5d
            goto L4d
        L1d:
            com.ss.android.socialbase.downloader.model.DownloadChunk r1 = r3.curDownloadChunk     // Catch: java.lang.Throwable -> L5d
            r1.setDownloading(r0)     // Catch: java.lang.Throwable -> L5d
            boolean r1 = r3.isStoppedStatus()     // Catch: java.lang.Throwable -> L5d
            if (r1 == 0) goto L29
            goto L4d
        L29:
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r1 = r3.callback     // Catch: java.lang.Throwable -> L5d
            com.ss.android.socialbase.downloader.model.DownloadChunk r2 = r3.curDownloadChunk     // Catch: java.lang.Throwable -> L5d
            int r2 = r2.getChunkIndex()     // Catch: java.lang.Throwable -> L5d
            com.ss.android.socialbase.downloader.model.DownloadChunk r1 = r1.getUnCompletedSubChunk(r2)     // Catch: java.lang.Throwable -> L5d
            r3.curDownloadChunk = r1     // Catch: java.lang.Throwable -> L5d
            boolean r1 = r3.isStoppedStatus()     // Catch: java.lang.Throwable -> L5d
            if (r1 != 0) goto L4d
            com.ss.android.socialbase.downloader.model.DownloadChunk r1 = r3.curDownloadChunk     // Catch: java.lang.Throwable -> L5d
            if (r1 != 0) goto L42
            goto L4d
        L42:
            r1 = 50
            java.lang.Thread.sleep(r1)     // Catch: java.lang.Throwable -> L48
            goto L9
        L48:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L5d
            goto L9
        L4d:
            com.ss.android.socialbase.downloader.model.DownloadChunk r1 = r3.curDownloadChunk
            if (r1 == 0) goto L54
            r1.setDownloading(r0)
        L54:
            r3.closeConnection()
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r0 = r3.callback
            r0.onCompleted(r3)
            return
        L5d:
            r1 = move-exception
            com.ss.android.socialbase.downloader.model.DownloadChunk r2 = r3.curDownloadChunk
            if (r2 == 0) goto L65
            r2.setDownloading(r0)
        L65:
            r3.closeConnection()
            com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback r0 = r3.callback
            r0.onCompleted(r3)
            throw r1
    }
}
