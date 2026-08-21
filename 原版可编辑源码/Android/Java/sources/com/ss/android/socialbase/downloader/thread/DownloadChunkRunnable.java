package com.ss.android.socialbase.downloader.thread;

import android.os.Process;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.DownloadResponseHandler;
import com.ss.android.socialbase.downloader.downloader.IDownloadCache;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.exception.RetryCheckStatus;
import com.ss.android.socialbase.downloader.model.DownloadChunk;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.model.DownloadTask;
import com.ss.android.socialbase.downloader.model.HttpHeader;
import com.ss.android.socialbase.downloader.network.IDownloadHttpConnection;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.io.IOException;
import java.util.List;

public class DownloadChunkRunnable implements Runnable {
    private static final String TAG = DownloadChunkRunnable.class.getSimpleName();
    private final IDownloadRunnableCallback callback;
    private volatile boolean canceled;
    private DownloadChunk curDownloadChunk;
    private IDownloadCache downloadCache;
    private DownloadChunk downloadChunk;
    private DownloadInfo downloadInfo;
    private DownloadResponseHandler downloadResponseHandler;
    private final DownloadTask downloadTask;
    private IDownloadHttpConnection httpConnection;
    private boolean isHttpConnectionInject;
    private volatile boolean paused;

    public DownloadChunkRunnable(DownloadChunk downloadChunk, DownloadTask downloadTask, IDownloadRunnableCallback iDownloadRunnableCallback) {
        this.isHttpConnectionInject = false;
        this.downloadChunk = downloadChunk;
        this.downloadTask = downloadTask;
        if (downloadTask != null) {
            this.downloadInfo = downloadTask.getDownloadInfo();
        }
        this.callback = iDownloadRunnableCallback;
        this.downloadCache = DownloadComponentManager.getDownloadCache();
        this.downloadChunk.setChunkRunnable(this);
    }

    public DownloadChunkRunnable(DownloadChunk downloadChunk, DownloadTask downloadTask, IDownloadHttpConnection iDownloadHttpConnection, IDownloadRunnableCallback iDownloadRunnableCallback) {
        this(downloadChunk, downloadTask, iDownloadRunnableCallback);
        this.httpConnection = iDownloadHttpConnection;
    }

    public int getChunkIndex() {
        return this.downloadChunk.getChunkIndex();
    }

    private String getUrl() {
        return this.downloadInfo.getConnectionUrl();
    }

    /* JADX WARN: Code restructure failed: missing block: B:6:0x0017, code lost:
    
        r3.curDownloadChunk.setDownloading(false);
     */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void run() {
        Process.setThreadPriority(10);
        this.curDownloadChunk = this.downloadChunk;
        while (true) {
            try {
                this.curDownloadChunk.setChunkRunnable(this);
                if (!downloadChunkInner(this.curDownloadChunk)) {
                    break;
                }
                this.curDownloadChunk.setDownloading(false);
                if (isStoppedStatus()) {
                    break;
                }
                this.curDownloadChunk = this.callback.getUnCompletedSubChunk(this.curDownloadChunk.getChunkIndex());
                if (isStoppedStatus() || this.curDownloadChunk == null) {
                    break;
                }
                try {
                    Thread.sleep(50L);
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            } finally {
                DownloadChunk downloadChunk = this.curDownloadChunk;
                if (downloadChunk != null) {
                    downloadChunk.setDownloading(false);
                }
                closeConnection();
                this.callback.onCompleted(this);
            }
        }
    }

    public void refreshResponseHandleOffset(long j, long j2) {
        DownloadResponseHandler downloadResponseHandler = this.downloadResponseHandler;
        if (downloadResponseHandler == null) {
            return;
        }
        downloadResponseHandler.setEndOffset(j, j2);
    }

    /* JADX WARN: Removed duplicated region for block: B:215:0x00fa A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:64:0x00fe A[Catch: all -> 0x01b7, BaseException -> 0x01d3, TRY_ENTER, TryCatch #15 {BaseException -> 0x01d3, all -> 0x01b7, blocks: (B:22:0x004f, B:26:0x0059, B:30:0x0064, B:35:0x00b3, B:37:0x00b7, B:45:0x00ce, B:60:0x00f4, B:64:0x00fe, B:66:0x0102, B:77:0x0132, B:74:0x012a, B:76:0x0131, B:49:0x00d8, B:51:0x00dc), top: B:210:0x004f }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean downloadChunkInner(DownloadChunk downloadChunk) {
        boolean z;
        long j;
        long curOffset;
        Throwable th;
        DownloadChunk firstReuseChunk;
        while (true) {
            DownloadChunk downloadChunk2 = (downloadChunk.isHostChunk() && downloadChunk.hasChunkDivided() && (firstReuseChunk = downloadChunk.getFirstReuseChunk()) != null && firstReuseChunk.getChunkIndex() == downloadChunk.getChunkIndex()) ? firstReuseChunk : null;
            if (downloadChunk2 != null && downloadChunk2.hasNoBytesDownload()) {
                return true;
            }
            long currentOffset = downloadChunk.getCurrentOffset();
            long endOffset = downloadChunk.getEndOffset();
            long currentOffset2 = downloadChunk.getCurrentOffset();
            if (downloadChunk2 != null) {
                currentOffset2 = downloadChunk2.getCurrentOffset();
                currentOffset = downloadChunk2.getCurrentOffset();
                endOffset = downloadChunk2.getEndOffset();
            }
            long j2 = currentOffset;
            long j3 = endOffset;
            long curOffset2 = 0;
            boolean z2 = false;
            try {
                if (isStoppedStatus()) {
                    return false;
                }
                String url = getUrl();
                boolean z3 = this.httpConnection != null;
                this.isHttpConnectionInject = z3;
                downloadChunk.setReuseingFirstConnection(z3);
                try {
                    try {
                        if (!this.isHttpConnectionInject) {
                            List<HttpHeader> listAddRangeHeader = DownloadUtils.addRangeHeader(this.downloadInfo.getExtraHeaders(), this.downloadInfo.geteTag(), j2, j3);
                            listAddRangeHeader.add(new HttpHeader("Chunk-Index", String.valueOf(downloadChunk.getChunkIndex())));
                            DownloadUtils.addThrottleNetSpeed(listAddRangeHeader, this.downloadInfo);
                            DownloadUtils.addTTNetProtectTimeout(listAddRangeHeader, this.downloadInfo);
                            this.httpConnection = DownloadComponentManager.downloadWithConnection(this.downloadInfo.isNeedDefaultHttpServiceBackUp(), this.downloadInfo.getMaxBytes(), url, listAddRangeHeader);
                        }
                        if (this.httpConnection != null && this.callback != null) {
                            try {
                                int responseCode = this.httpConnection.getResponseCode();
                                if (responseCode < 200 || responseCode >= 300) {
                                    this.callback.setHttpResponseStatus(this.httpConnection);
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                th.printStackTrace();
                            }
                        }
                    } catch (Throwable th3) {
                        th = th3;
                        if (isStoppedStatus()) {
                            return true;
                        }
                        try {
                            DownloadUtils.parseException(th, "downloadChunkInner");
                        } catch (BaseException e) {
                            this.callback.onError(e);
                        }
                        return z;
                    }
                } catch (BaseException e2) {
                    try {
                        throw e2;
                    } catch (Throwable th4) {
                        th = th4;
                        th = th;
                        if (this.httpConnection != null) {
                            throw th;
                        }
                        throw th;
                    }
                } catch (Throwable th5) {
                    try {
                        DownloadUtils.parseException(th5, "ChunkRunnableConnection");
                        if (this.httpConnection != null && this.callback != null) {
                            try {
                                int responseCode2 = this.httpConnection.getResponseCode();
                                if (responseCode2 < 200 || responseCode2 >= 300) {
                                    this.callback.setHttpResponseStatus(this.httpConnection);
                                }
                            } catch (Throwable th6) {
                                th = th6;
                                th.printStackTrace();
                            }
                        }
                        if (!isStoppedStatus()) {
                        }
                    } catch (Throwable th7) {
                        th = th7;
                        th = th;
                        if (this.httpConnection != null || this.callback == null) {
                            throw th;
                        }
                        try {
                            int responseCode3 = this.httpConnection.getResponseCode();
                            if (responseCode3 >= 200 && responseCode3 < 300) {
                                throw th;
                            }
                            this.callback.setHttpResponseStatus(this.httpConnection);
                            throw th;
                        } catch (Throwable th8) {
                            th8.printStackTrace();
                            throw th;
                        }
                    }
                }
                if (!isStoppedStatus()) {
                    return false;
                }
                if (this.httpConnection == null) {
                    throw new BaseException(1022, new IOException("download can't continue, chunk connection is null"));
                }
                if (!this.isHttpConnectionInject) {
                    try {
                        int responseCode4 = this.httpConnection.getResponseCode();
                        if (!DownloadUtils.isResponseCodeValid(responseCode4)) {
                            throw new BaseException(1002, String.format("Http response error , code is : %s ", String.valueOf(responseCode4)));
                        }
                    } catch (BaseException e3) {
                        throw e3;
                    } catch (Throwable th9) {
                        DownloadUtils.parseException(th9, "ChunkRunnableGetResponseCode");
                    }
                }
                z = false;
                j = currentOffset2;
                try {
                    this.downloadResponseHandler = new DownloadResponseHandler(this.downloadInfo, url, this.httpConnection, downloadChunk, this.callback);
                    if (downloadChunk2 != null) {
                        long retainLength = downloadChunk2.getRetainLength(false);
                        if (j3 != 0 && j3 >= j2) {
                            retainLength = (j3 - j2) + 1;
                        }
                        this.downloadResponseHandler.setChunkOffset(downloadChunk2.getCurrentOffset(), downloadChunk2.getEndOffset(), retainLength);
                    }
                    try {
                        this.downloadResponseHandler.handleResponse();
                        return true;
                    } catch (BaseException e4) {
                        e = e4;
                        z2 = true;
                    }
                } catch (BaseException e5) {
                    e = e5;
                    z2 = false;
                }
            } catch (BaseException e6) {
                e = e6;
                z = false;
                j = currentOffset2;
            } catch (Throwable th10) {
                th = th10;
                z = false;
            }
            try {
                if (isStoppedStatus()) {
                    return true;
                }
                if (DownloadUtils.isResponseCodeError(e)) {
                    this.callback.onAllChunkRetryWithReset(e, z);
                    return z;
                }
                if (!this.callback.canRetry(e)) {
                    if (!this.downloadInfo.isNeedChunkDowngradeRetry() || this.downloadInfo.isChunkDowngradeRetryUsed() || this.downloadInfo.getChunkCount() <= 1 || !DownloadUtils.canChunkDowngradeRetry(e, this.downloadInfo)) {
                        this.callback.onError(e);
                        return z;
                    }
                    this.callback.onChunkDowngradeRetry(e);
                    return z;
                }
                if (DownloadUtils.isHttpDataDirtyError(e)) {
                    this.callback.onAllChunkRetryWithReset(e, true);
                    return z;
                }
                if (!z2) {
                    curOffset = curOffset2;
                } else {
                    if (this.downloadResponseHandler == null) {
                        this.callback.onError(e);
                        return z;
                    }
                    if (DownloadExpSwitchCode.isSwitchEnable(32)) {
                        curOffset = this.downloadResponseHandler.getCurOffset() - this.downloadResponseHandler.getLastSyncBytes();
                        if (curOffset > 0) {
                            revertDownloadChunk(downloadChunk, this.downloadResponseHandler.getLastSyncBytes());
                        } else if (curOffset < 0) {
                        }
                    } else {
                        curOffset2 = this.downloadResponseHandler.getCurOffset() - j;
                        revertDownloadChunk(downloadChunk, j);
                    }
                    curOffset = curOffset2;
                }
                if ((DownloadExpSwitchCode.isSwitchEnable(16) ? this.callback.onSingleChunkRetry(downloadChunk, e, curOffset) : this.callback.onRetry(e, curOffset)) == RetryCheckStatus.RETURN) {
                    return z;
                }
                downloadChunk.setReuseingFirstConnection(z);
                closeConnection();
            } finally {
                closeConnection();
            }
        }
    }

    private void revertDownloadChunk(DownloadChunk downloadChunk, long j) {
        DownloadChunk firstReuseChunk = downloadChunk.isHostChunk() ? downloadChunk.getFirstReuseChunk() : downloadChunk;
        if (firstReuseChunk != null) {
            if (firstReuseChunk.canRefreshCurOffsetForReuseChunk()) {
                this.downloadCache.updateDownloadChunk(firstReuseChunk.getId(), firstReuseChunk.getHostChunkIndex(), j);
            }
            firstReuseChunk.setCurrentOffset(j);
            this.downloadCache.updateSubDownloadChunk(firstReuseChunk.getId(), firstReuseChunk.getChunkIndex(), firstReuseChunk.getHostChunkIndex(), j);
            return;
        }
        if (downloadChunk.isHostChunk()) {
            this.downloadCache.updateDownloadChunk(downloadChunk.getId(), downloadChunk.getChunkIndex(), j);
        }
    }

    private void closeConnection() {
        IDownloadHttpConnection iDownloadHttpConnection = this.httpConnection;
        if (iDownloadHttpConnection != null) {
            iDownloadHttpConnection.end();
            this.httpConnection = null;
        }
    }

    private boolean isStoppedStatus() {
        return this.paused || this.canceled;
    }

    public void pause() {
        this.paused = true;
        DownloadResponseHandler downloadResponseHandler = this.downloadResponseHandler;
        if (downloadResponseHandler != null) {
            downloadResponseHandler.pause();
        }
    }

    public void cancel() {
        this.canceled = true;
        DownloadResponseHandler downloadResponseHandler = this.downloadResponseHandler;
        if (downloadResponseHandler != null) {
            downloadResponseHandler.cancel();
        }
    }
}
