package com.ss.android.socialbase.downloader.downloader;

import android.os.SystemClock;
import com.ss.android.socialbase.downloader.common.AppStatusManager;
import com.ss.android.socialbase.downloader.constants.DownloadConstants;
import com.ss.android.socialbase.downloader.constants.DownloadErrorCode;
import com.ss.android.socialbase.downloader.db.SqlDownloadCache;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.exception.DownloadOnlyWifiException;
import com.ss.android.socialbase.downloader.exception.DownloadPauseReserveWifiException;
import com.ss.android.socialbase.downloader.exception.DownloadRetryNeedlessException;
import com.ss.android.socialbase.downloader.impls.DefaultDownloadCache;
import com.ss.android.socialbase.downloader.impls.DownloadCache;
import com.ss.android.socialbase.downloader.impls.DownloadProxy;
import com.ss.android.socialbase.downloader.logger.Logger;
import com.ss.android.socialbase.downloader.model.DownloadChunk;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.model.RandomAccessOutputStream;
import com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper;
import com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection;
import com.ss.android.socialbase.downloader.network.IDownloadHttpConnection;
import com.ss.android.socialbase.downloader.reader.AsyncStreamReader;
import com.ss.android.socialbase.downloader.reader.IStreamReader;
import com.ss.android.socialbase.downloader.reader.SyncStreamReader;
import com.ss.android.socialbase.downloader.segment.Buffer;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import com.ss.android.socialbase.downloader.thread.IDownloadRunnableCallback;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import java.util.concurrent.ExecutorService;

public class DownloadResponseHandler {
    private static final boolean DEBUG = false;
    public static final int MIN_SYNC_STEP_BYTE = 65536;
    public static final long MIN_SYNC_TIME_MS = 500;
    private static String TAG = "ResponseHandler";
    private final AppStatusManager appStatusManager;
    private final boolean bugfixCancelThenUpdate;
    private final IDownloadRunnableCallback callback;
    private volatile boolean canceled;
    private long curOffset;
    private IDownloadCache customCache;
    private long debugReadTimeNs;
    private long debugSyncTimeNs;
    private long debugTotalTimeNs;
    private long debugWriteTimeNs;
    private DownloadCache downloadCache;
    private final DownloadChunk downloadChunk;
    private volatile long downloadChunkContentLen;
    private final DownloadInfo downloadInfo;
    private volatile long endOffset;
    private BaseException exception;
    private long handleStartOffset;
    private final boolean hasSyncStrategy;
    private final IDownloadHttpConnection httpConnection;
    private final boolean isMonitorRw;
    private RandomAccessOutputStream outputStream;
    private volatile boolean paused;
    private boolean rwConcurrent;
    private final DownloadSetting setting;
    private ISqlDownloadCache sqlDownloadCache;
    private final long syncIntervalMsBg;
    private final long syncIntervalMsFg;
    private final String url;
    boolean openLimitSpeed = false;
    private volatile long lastSyncBytes = 0;
    private volatile long lastSyncTimestamp = 0;

    private boolean isNeedSync(long j, long j2) {
        return j > 65536 && j2 > 500;
    }

    public DownloadResponseHandler(DownloadInfo downloadInfo, String str, IDownloadHttpConnection iDownloadHttpConnection, DownloadChunk downloadChunk, IDownloadRunnableCallback iDownloadRunnableCallback) {
        this.downloadInfo = downloadInfo;
        this.url = str;
        IDownloadCache downloadCache = DownloadComponentManager.getDownloadCache();
        this.customCache = downloadCache;
        if (downloadCache instanceof DefaultDownloadCache) {
            DefaultDownloadCache defaultDownloadCache = (DefaultDownloadCache) downloadCache;
            this.downloadCache = defaultDownloadCache.getDownloadCache();
            this.sqlDownloadCache = defaultDownloadCache.getSqlDownloadCache();
        }
        this.httpConnection = iDownloadHttpConnection;
        this.downloadChunk = downloadChunk;
        this.callback = iDownloadRunnableCallback;
        long currentOffset = downloadChunk.getCurrentOffset();
        this.curOffset = currentOffset;
        this.handleStartOffset = currentOffset;
        if (downloadChunk.isHostChunk()) {
            this.downloadChunkContentLen = downloadChunk.getContentLength();
        } else {
            this.downloadChunkContentLen = downloadChunk.getRetainLength(false);
        }
        this.endOffset = downloadChunk.getEndOffset();
        this.appStatusManager = AppStatusManager.getInstance();
        DownloadSetting downloadSettingObtain = DownloadSetting.obtain(downloadInfo.getId());
        this.setting = downloadSettingObtain;
        boolean z = downloadSettingObtain.optInt(DownloadSettingKeys.SYNC_STRATEGY, 0) == 1;
        this.hasSyncStrategy = z;
        if (z) {
            long jOptInt = this.setting.optInt(DownloadSettingKeys.SYNC_INTERVAL_MS_FG, 5000);
            long jOptInt2 = this.setting.optInt(DownloadSettingKeys.SYNC_INTERVAL_MS_BG, 1000);
            this.syncIntervalMsFg = Math.max(jOptInt, 500L);
            this.syncIntervalMsBg = Math.max(jOptInt2, 500L);
        } else {
            this.syncIntervalMsFg = 0L;
            this.syncIntervalMsBg = 0L;
        }
        this.isMonitorRw = this.setting.optInt(DownloadSettingKeys.MONITOR_RW) == 1;
        this.bugfixCancelThenUpdate = DownloadExpSwitchCode.isSwitchEnable(65536);
    }

    public long getCurOffset() {
        return this.curOffset;
    }

    private boolean isStoppedStatus() {
        return this.paused || this.canceled;
    }

    public void pause() {
        if (this.paused) {
            return;
        }
        this.paused = true;
        cancelConnection();
    }

    public void cancel() {
        if (this.canceled) {
            return;
        }
        synchronized (this.callback) {
            this.canceled = true;
        }
        cancelConnection();
    }

    private void cancelConnection() {
        ExecutorService cPUThreadExecutor;
        if (this.httpConnection == null || (cPUThreadExecutor = DownloadComponentManager.getCPUThreadExecutor()) == null) {
            return;
        }
        cPUThreadExecutor.execute(new Runnable() {
            @Override
            public void run() {
                try {
                    DownloadResponseHandler.this.httpConnection.end();
                } catch (Throwable unused) {
                }
            }
        });
    }

    private boolean canReuseConnection() {
        return this.downloadInfo.isNeedReuseFirstConnection() && this.downloadChunk.isReuseingFirstConnection();
    }

    public void setChunkOffset(long j, long j2, long j3) {
        this.curOffset = j;
        this.handleStartOffset = j;
        this.endOffset = j2;
        this.downloadChunkContentLen = j3;
    }

    public void setEndOffset(long j, long j2) {
        this.endOffset = j;
        this.downloadChunkContentLen = j2;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:190:0x02fc A[Catch: all -> 0x04f6, TRY_ENTER, TryCatch #11 {all -> 0x04f6, blocks: (B:190:0x02fc, B:191:0x0303, B:220:0x037c, B:222:0x0382, B:223:0x0385, B:264:0x0471, B:265:0x0473, B:269:0x047a, B:271:0x049a, B:299:0x04ea, B:301:0x04f0, B:302:0x04f3, B:303:0x04f5), top: B:342:0x002b, inners: #16 }] */
    /* JADX WARN: Removed duplicated region for block: B:193:0x031f  */
    /* JADX WARN: Removed duplicated region for block: B:220:0x037c A[Catch: all -> 0x04f6, TRY_ENTER, TryCatch #11 {all -> 0x04f6, blocks: (B:190:0x02fc, B:191:0x0303, B:220:0x037c, B:222:0x0382, B:223:0x0385, B:264:0x0471, B:265:0x0473, B:269:0x047a, B:271:0x049a, B:299:0x04ea, B:301:0x04f0, B:302:0x04f3, B:303:0x04f5), top: B:342:0x002b, inners: #16 }] */
    /* JADX WARN: Removed duplicated region for block: B:249:0x0403 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:250:0x0404  */
    /* JADX WARN: Removed duplicated region for block: B:301:0x04f0 A[Catch: all -> 0x04f6, TryCatch #11 {all -> 0x04f6, blocks: (B:190:0x02fc, B:191:0x0303, B:220:0x037c, B:222:0x0382, B:223:0x0385, B:264:0x0471, B:265:0x0473, B:269:0x047a, B:271:0x049a, B:299:0x04ea, B:301:0x04f0, B:302:0x04f3, B:303:0x04f5), top: B:342:0x002b, inners: #16 }] */
    /* JADX WARN: Type inference failed for: r14v0 */
    /* JADX WARN: Type inference failed for: r14v15 */
    /* JADX WARN: Type inference failed for: r14v17 */
    /* JADX WARN: Type inference failed for: r14v18 */
    /* JADX WARN: Type inference failed for: r14v6 */
    /* JADX WARN: Type inference failed for: r14v7 */
    /* JADX WARN: Type inference failed for: r14v8, types: [int] */
    /* JADX WARN: Type inference failed for: r32v0 */
    /* JADX WARN: Type inference failed for: r32v10 */
    /* JADX WARN: Type inference failed for: r32v11 */
    /* JADX WARN: Type inference failed for: r32v12 */
    /* JADX WARN: Type inference failed for: r32v13 */
    /* JADX WARN: Type inference failed for: r32v14 */
    /* JADX WARN: Type inference failed for: r32v15 */
    /* JADX WARN: Type inference failed for: r32v16 */
    /* JADX WARN: Type inference failed for: r32v17 */
    /* JADX WARN: Type inference failed for: r32v18 */
    /* JADX WARN: Type inference failed for: r32v19 */
    /* JADX WARN: Type inference failed for: r32v2 */
    /* JADX WARN: Type inference failed for: r32v20 */
    /* JADX WARN: Type inference failed for: r32v21 */
    /* JADX WARN: Type inference failed for: r32v22 */
    /* JADX WARN: Type inference failed for: r32v23 */
    /* JADX WARN: Type inference failed for: r32v3, types: [long] */
    /* JADX WARN: Type inference failed for: r32v6 */
    /* JADX WARN: Type inference failed for: r32v7 */
    /* JADX WARN: Type inference failed for: r32v8 */
    /* JADX WARN: Type inference failed for: r32v9 */
    /* JADX WARN: Type inference failed for: r6v0, types: [long] */
    /* JADX WARN: Type inference failed for: r6v1 */
    /* JADX WARN: Type inference failed for: r6v11 */
    /* JADX WARN: Type inference failed for: r6v12 */
    /* JADX WARN: Type inference failed for: r6v13 */
    /* JADX WARN: Type inference failed for: r6v14 */
    /* JADX WARN: Type inference failed for: r6v15 */
    /* JADX WARN: Type inference failed for: r6v16 */
    /* JADX WARN: Type inference failed for: r6v17 */
    /* JADX WARN: Type inference failed for: r6v18 */
    /* JADX WARN: Type inference failed for: r6v19 */
    /* JADX WARN: Type inference failed for: r6v2 */
    /* JADX WARN: Type inference failed for: r6v20 */
    /* JADX WARN: Type inference failed for: r6v22 */
    /* JADX WARN: Type inference failed for: r6v28 */
    /* JADX WARN: Type inference failed for: r6v29 */
    /* JADX WARN: Type inference failed for: r6v3, types: [int] */
    /* JADX WARN: Type inference failed for: r6v4 */
    /* JADX WARN: Type inference failed for: r6v40 */
    /* JADX WARN: Type inference failed for: r6v41 */
    /* JADX WARN: Type inference failed for: r6v42 */
    /* JADX WARN: Type inference failed for: r6v5 */
    /* JADX WARN: Type inference failed for: r6v6, types: [int] */
    /* JADX WARN: Type inference failed for: r6v7, types: [int] */
    /* JADX WARN: Type inference failed for: r6v8 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void handleResponse() throws BaseException {
        long j;
        ?? r32;
        boolean z;
        char c;
        IStreamReader iStreamReaderCreateStreamReader;
        DownloadSetting downloadSetting;
        DownloadInfo downloadInfo;
        String str;
        IDownloadHttpConnection iDownloadHttpConnection;
        boolean z2;
        boolean z3;
        boolean z4;
        IDownloadHttpConnection iDownloadHttpConnection2;
        String str2;
        DownloadInfo downloadInfo2;
        DownloadSetting downloadSetting2;
        ?? r322;
        ?? r6;
        int i;
        InputStream inputStream;
        long j2;
        long j3;
        long jCurrentTimeMillis;
        long jNanoTime;
        long j4;
        ?? r323;
        if (isStoppedStatus() || this.downloadChunk == null) {
            return;
        }
        long contentLength = DownloadUtils.getContentLength(this.httpConnection);
        if (contentLength == 0) {
            throw new DownloadRetryNeedlessException(1004, "the content-length is 0");
        }
        int startOffset = this.downloadChunk.getStartOffset();
        long jNanoTime2 = System.nanoTime();
        boolean z5 = this.isMonitorRw;
        boolean z6 = this.httpConnection instanceof AbsDownloadHttpConnection;
        int i2 = 1;
        i2 = 1;
        i2 = 1;
        try {
            try {
                i = -1;
                RandomAccessOutputStream randomAccessOutputStreamCreateOutputStream = DownloadUtils.createOutputStream(this.downloadInfo, this.downloadInfo.getTempPath(), this.downloadInfo.getTempName(), this.setting.optInt(DownloadSettingKeys.FLUSH_BUFFER_SIZE_BYTE, -1));
                this.outputStream = randomAccessOutputStreamCreateOutputStream;
                try {
                    try {
                        randomAccessOutputStreamCreateOutputStream.seek(this.curOffset);
                        inputStream = this.httpConnection.getInputStream();
                    } catch (IOException e) {
                        throw new BaseException(DownloadErrorCode.ERROR_RANDOM_ACCESS_SEEK_IO, e);
                    }
                } catch (BaseException e2) {
                    e = e2;
                    iStreamReaderCreateStreamReader = null;
                } catch (Throwable th) {
                    th = th;
                    iStreamReaderCreateStreamReader = null;
                    if (z6) {
                    }
                    Logger.w(TAG, "handleResponse: e = " + th);
                    if (!isStoppedStatus()) {
                    }
                }
            } catch (Throwable th2) {
                IDownloadHttpConnection iDownloadHttpConnection3 = this.httpConnection;
                if (iDownloadHttpConnection3 != null) {
                    iDownloadHttpConnection3.end();
                }
                if (iStreamReaderCreateStreamReader != null) {
                    iStreamReaderCreateStreamReader.close();
                }
                try {
                    if (this.bugfixCancelThenUpdate) {
                        synchronized (this.callback) {
                            if (!this.canceled) {
                                updateDownloadChunk(this.downloadCache);
                                if (this.outputStream != null) {
                                    sync();
                                }
                            }
                        }
                    } else {
                        updateDownloadChunk(this.downloadCache);
                        if (this.outputStream != null) {
                            sync();
                        }
                    }
                    Closeable[] closeableArr = new Closeable[startOffset];
                    closeableArr[c] = this.outputStream;
                    DownloadUtils.safeClose(closeableArr);
                    this.debugTotalTimeNs = System.nanoTime() - jNanoTime2;
                    DownloadMonitorHelper.monitorDownloadIO(this.setting, this.downloadInfo, this.url, this.httpConnection, this.paused, this.canceled, this.exception, this.curOffset - this.handleStartOffset, this.debugTotalTimeNs, z, this.debugReadTimeNs, this.debugWriteTimeNs, this.debugSyncTimeNs, null);
                    throw th2;
                } catch (Throwable th3) {
                    Closeable[] closeableArr2 = new Closeable[startOffset];
                    closeableArr2[c] = this.outputStream;
                    DownloadUtils.safeClose(closeableArr2);
                    throw th3;
                }
            }
        } catch (BaseException e3) {
            e = e3;
            startOffset = 1;
            z = z5;
            c = 0;
        } catch (Throwable th4) {
            th = th4;
            j = contentLength;
            r32 = startOffset;
            startOffset = 1;
            z = z5;
            c = 0;
        }
        if (inputStream == null) {
            throw new BaseException(1042, new IOException("inputStream is null"));
        }
        this.downloadInfo.updateRealStartDownloadTime();
        iStreamReaderCreateStreamReader = createStreamReader(inputStream);
        try {
            this.downloadInfo.setIsRwConcurrent(this.rwConcurrent);
            this.openLimitSpeed = this.downloadInfo.getOpenLimitSpeed();
            long j5 = DownloadConstants.LIMIT_SPEED_EVERTS_ECOND;
            j2 = DownloadConstants.LIMIT_INTERVSL;
            j3 = j5 / (1000 / j2);
            jCurrentTimeMillis = System.currentTimeMillis();
            jNanoTime = 0;
            j4 = 0;
            startOffset = startOffset;
        } catch (BaseException e4) {
            e = e4;
            startOffset = i2;
            z = z5;
        } catch (Throwable th5) {
            th = th5;
            j = contentLength;
            r32 = startOffset;
            startOffset = i2;
            z = z5;
        }
        while (!isStoppedStatus()) {
            z = z5;
            if (z) {
                try {
                    jNanoTime = System.nanoTime();
                } catch (BaseException e5) {
                    e = e5;
                    startOffset = i2;
                    c = 0;
                } catch (Throwable th6) {
                    th = th6;
                    j = contentLength;
                    r32 = startOffset;
                    startOffset = i2;
                    c = 0;
                    if (z6) {
                    }
                    Logger.w(TAG, "handleResponse: e = " + th);
                    if (!isStoppedStatus()) {
                    }
                }
            }
            Buffer buffer = iStreamReaderCreateStreamReader.read();
            if (z) {
                try {
                    try {
                        this.debugReadTimeNs += System.nanoTime() - jNanoTime;
                    } catch (BaseException e6) {
                        e = e6;
                        c = 0;
                        startOffset = 1;
                        Logger.w(TAG, "handleResponse: BaseException e = " + e);
                        if (this.setting.optBugFix(DownloadSettingKeys.BugFix.IGNORE_BASE_EX_ON_STOP_STATUS)) {
                        }
                        if (Logger.debug()) {
                        }
                        this.exception = e;
                        throw e;
                    }
                } catch (Throwable th7) {
                    th = th7;
                    j = contentLength;
                    r323 = startOffset;
                    c = 0;
                    r32 = r323;
                    startOffset = 1;
                    if (z6) {
                    }
                    Logger.w(TAG, "handleResponse: e = " + th);
                    if (!isStoppedStatus()) {
                    }
                }
            }
            int i3 = buffer.size;
            if (i3 == i) {
                j = contentLength;
                r32 = startOffset;
            } else {
                if (this.downloadInfo.isIgnoreDataVerify()) {
                    j = contentLength;
                    r32 = startOffset;
                } else {
                    r323 = startOffset;
                    try {
                        if (this.downloadChunkContentLen > this.curOffset - this.handleStartOffset) {
                            j = contentLength;
                            try {
                                r32 = r323;
                                if (this.downloadChunkContentLen < (this.curOffset - this.handleStartOffset) + ((long) i3)) {
                                    i3 = (int) (this.downloadChunkContentLen - (this.curOffset - this.handleStartOffset));
                                    r32 = r323;
                                }
                            } catch (Throwable th8) {
                                th = th8;
                                c = 0;
                                r32 = r323;
                                startOffset = 1;
                                if (z6) {
                                    ((AbsDownloadHttpConnection) this.httpConnection).onThrowable(th);
                                }
                                Logger.w(TAG, "handleResponse: e = " + th);
                                if (!isStoppedStatus()) {
                                    IDownloadHttpConnection iDownloadHttpConnection4 = this.httpConnection;
                                    if (iDownloadHttpConnection4 != null) {
                                        iDownloadHttpConnection4.end();
                                    }
                                    if (iStreamReaderCreateStreamReader != null) {
                                        iStreamReaderCreateStreamReader.close();
                                    }
                                    try {
                                        if (this.bugfixCancelThenUpdate) {
                                            synchronized (this.callback) {
                                                if (!this.canceled) {
                                                    updateDownloadChunk(this.downloadCache);
                                                    if (this.outputStream != null) {
                                                        sync();
                                                    }
                                                }
                                            }
                                        } else {
                                            updateDownloadChunk(this.downloadCache);
                                            if (this.outputStream != null) {
                                                sync();
                                            }
                                        }
                                        Closeable[] closeableArr3 = new Closeable[startOffset];
                                        closeableArr3[c] = this.outputStream;
                                        DownloadUtils.safeClose(closeableArr3);
                                        this.debugTotalTimeNs = System.nanoTime() - jNanoTime2;
                                        downloadSetting2 = this.setting;
                                        downloadInfo2 = this.downloadInfo;
                                        str2 = this.url;
                                        iDownloadHttpConnection2 = this.httpConnection;
                                        z4 = this.paused;
                                        z3 = this.canceled;
                                        DownloadMonitorHelper.monitorDownloadIO(downloadSetting2, downloadInfo2, str2, iDownloadHttpConnection2, z4, z3, this.exception, this.curOffset - this.handleStartOffset, this.debugTotalTimeNs, z, this.debugReadTimeNs, this.debugWriteTimeNs, this.debugSyncTimeNs, null);
                                    } catch (Throwable th9) {
                                        Closeable[] closeableArr4 = new Closeable[startOffset];
                                        closeableArr4[c] = this.outputStream;
                                        DownloadUtils.safeClose(closeableArr4);
                                        throw th9;
                                    }
                                }
                                if (Logger.debug()) {
                                    th.printStackTrace();
                                }
                                try {
                                    DownloadUtils.parseException(th, "ResponseHandler");
                                    IDownloadHttpConnection iDownloadHttpConnection5 = this.httpConnection;
                                    if (iDownloadHttpConnection5 != null) {
                                        iDownloadHttpConnection5.end();
                                    }
                                    if (iStreamReaderCreateStreamReader != null) {
                                        iStreamReaderCreateStreamReader.close();
                                    }
                                    try {
                                        if (this.bugfixCancelThenUpdate) {
                                            synchronized (this.callback) {
                                                if (!this.canceled) {
                                                    updateDownloadChunk(this.downloadCache);
                                                    if (this.outputStream != null) {
                                                        sync();
                                                    }
                                                }
                                            }
                                        } else {
                                            updateDownloadChunk(this.downloadCache);
                                            if (this.outputStream != null) {
                                                sync();
                                            }
                                        }
                                        Closeable[] closeableArr5 = new Closeable[startOffset];
                                        closeableArr5[c] = this.outputStream;
                                        DownloadUtils.safeClose(closeableArr5);
                                        this.debugTotalTimeNs = System.nanoTime() - jNanoTime2;
                                        downloadSetting = this.setting;
                                        downloadInfo = this.downloadInfo;
                                        str = this.url;
                                        iDownloadHttpConnection = this.httpConnection;
                                        z2 = this.paused;
                                        r6 = startOffset;
                                        r322 = r32;
                                        DownloadMonitorHelper.monitorDownloadIO(downloadSetting, downloadInfo, str, iDownloadHttpConnection, z2, this.canceled, this.exception, this.curOffset - this.handleStartOffset, this.debugTotalTimeNs, z, this.debugReadTimeNs, this.debugWriteTimeNs, this.debugSyncTimeNs, null);
                                        if (this.downloadInfo.isIgnoreDataVerify()) {
                                        }
                                    } catch (Throwable th10) {
                                        Closeable[] closeableArr6 = new Closeable[startOffset];
                                        closeableArr6[c] = this.outputStream;
                                        DownloadUtils.safeClose(closeableArr6);
                                        throw th10;
                                    }
                                } catch (BaseException e7) {
                                    this.exception = e7;
                                    throw e7;
                                }
                            }
                        } else {
                            j = contentLength;
                            r32 = r323;
                        }
                    } catch (Throwable th11) {
                        th = th11;
                        j = contentLength;
                    }
                }
                if (z) {
                    jNanoTime = System.nanoTime();
                }
                try {
                    this.outputStream.write(buffer.data, 0, i3);
                    if (z) {
                        this.debugWriteTimeNs += System.nanoTime() - jNanoTime;
                    }
                    iStreamReaderCreateStreamReader.recycle(buffer);
                    long j6 = i3;
                    this.curOffset += j6;
                    j4 += j6;
                    synchronized (this.callback) {
                        try {
                            if (!this.bugfixCancelThenUpdate) {
                                boolean zOnProgress = this.callback.onProgress(j6);
                                updateDownloadChunk(this.downloadCache);
                                checkAndSync(zOnProgress);
                            } else if (!this.canceled) {
                                boolean zOnProgress2 = this.callback.onProgress(j6);
                                updateDownloadChunk(this.downloadCache);
                                checkAndSync(zOnProgress2);
                            }
                        } finally {
                            th = th;
                            while (true) {
                                try {
                                } catch (Throwable th12) {
                                    th = th12;
                                }
                            }
                        }
                    }
                    if (!this.downloadInfo.isDownloadWithWifiValid()) {
                        throw new DownloadOnlyWifiException();
                    }
                    if (!this.downloadInfo.isPauseReserveWithWifiValid()) {
                        throw new DownloadPauseReserveWifiException();
                    }
                    if (this.downloadInfo.isIgnoreDataVerify() || this.downloadChunkContentLen < 0 || this.downloadChunkContentLen > this.curOffset - this.handleStartOffset) {
                        try {
                            if (this.openLimitSpeed && j4 > j3) {
                                long jCurrentTimeMillis2 = System.currentTimeMillis() - jCurrentTimeMillis;
                                if (jCurrentTimeMillis2 < j2) {
                                    try {
                                        Thread.sleep(j2 - jCurrentTimeMillis2);
                                    } catch (InterruptedException e8) {
                                        e8.printStackTrace();
                                    }
                                }
                                jCurrentTimeMillis = System.currentTimeMillis();
                                j4 = 0;
                            }
                            i2 = startOffset;
                            z5 = z;
                            contentLength = j;
                            startOffset = r32;
                            i = -1;
                        } catch (BaseException e9) {
                            e = e9;
                        } catch (Throwable th13) {
                            th = th13;
                            if (z6) {
                            }
                            Logger.w(TAG, "handleResponse: e = " + th);
                            if (!isStoppedStatus()) {
                            }
                        }
                    }
                } catch (BaseException e10) {
                    e = e10;
                    c = 0;
                    startOffset = 1;
                } catch (Throwable th14) {
                    th = th14;
                    c = 0;
                    r32 = r32;
                    startOffset = 1;
                    if (z6) {
                    }
                    Logger.w(TAG, "handleResponse: e = " + th);
                    if (!isStoppedStatus()) {
                    }
                }
            }
            IDownloadHttpConnection iDownloadHttpConnection6 = this.httpConnection;
            if (iDownloadHttpConnection6 != null) {
                iDownloadHttpConnection6.end();
            }
            if (iStreamReaderCreateStreamReader != null) {
                iStreamReaderCreateStreamReader.close();
            }
            try {
                if (this.bugfixCancelThenUpdate) {
                    synchronized (this.callback) {
                        if (!this.canceled) {
                            updateDownloadChunk(this.downloadCache);
                            if (this.outputStream != null) {
                                sync();
                            }
                        }
                    }
                } else {
                    updateDownloadChunk(this.downloadCache);
                    if (this.outputStream != null) {
                        sync();
                    }
                }
                DownloadUtils.safeClose(this.outputStream);
                this.debugTotalTimeNs = System.nanoTime() - jNanoTime2;
                downloadSetting = this.setting;
                downloadInfo = this.downloadInfo;
                str = this.url;
                iDownloadHttpConnection = this.httpConnection;
                c = 0;
                z2 = this.paused;
                r6 = 1;
                r322 = r32;
                DownloadMonitorHelper.monitorDownloadIO(downloadSetting, downloadInfo, str, iDownloadHttpConnection, z2, this.canceled, this.exception, this.curOffset - this.handleStartOffset, this.debugTotalTimeNs, z, this.debugReadTimeNs, this.debugWriteTimeNs, this.debugSyncTimeNs, null);
                if (this.downloadInfo.isIgnoreDataVerify()) {
                    long j7 = this.curOffset - this.handleStartOffset;
                    if (j7 < 0 || this.downloadChunkContentLen < 0 || this.downloadChunkContentLen == j7) {
                        return;
                    }
                    Object[] objArr = new Object[7];
                    objArr[c] = Long.valueOf(j7);
                    objArr[r6] = Long.valueOf(j);
                    objArr[2] = Long.valueOf(this.downloadChunkContentLen);
                    objArr[3] = Long.valueOf((long) r322);
                    objArr[4] = Long.valueOf(this.endOffset);
                    objArr[5] = Long.valueOf(this.curOffset);
                    objArr[6] = Long.valueOf(this.handleStartOffset);
                    throw new BaseException(1051, String.format("handle data length[%d] != content length[%d] downloadChunkContentLen[%d], range[%d, %d) , current offset[%d] , handle start from %d", objArr));
                }
                return;
            } catch (Throwable th15) {
                DownloadUtils.safeClose(this.outputStream);
                throw th15;
            }
        }
        IDownloadHttpConnection iDownloadHttpConnection7 = this.httpConnection;
        if (iDownloadHttpConnection7 != null) {
            iDownloadHttpConnection7.end();
        }
        if (iStreamReaderCreateStreamReader != null) {
            iStreamReaderCreateStreamReader.close();
        }
        try {
            if (this.bugfixCancelThenUpdate) {
                synchronized (this.callback) {
                    if (!this.canceled) {
                        updateDownloadChunk(this.downloadCache);
                        if (this.outputStream != null) {
                            sync();
                        }
                    }
                }
            } else {
                updateDownloadChunk(this.downloadCache);
                if (this.outputStream != null) {
                    sync();
                }
            }
            Closeable[] closeableArr7 = new Closeable[i2];
            closeableArr7[0] = this.outputStream;
            DownloadUtils.safeClose(closeableArr7);
            this.debugTotalTimeNs = System.nanoTime() - jNanoTime2;
            downloadSetting2 = this.setting;
            downloadInfo2 = this.downloadInfo;
            str2 = this.url;
            iDownloadHttpConnection2 = this.httpConnection;
            z4 = this.paused;
            z = z5;
            z3 = this.canceled;
            DownloadMonitorHelper.monitorDownloadIO(downloadSetting2, downloadInfo2, str2, iDownloadHttpConnection2, z4, z3, this.exception, this.curOffset - this.handleStartOffset, this.debugTotalTimeNs, z, this.debugReadTimeNs, this.debugWriteTimeNs, this.debugSyncTimeNs, null);
        } catch (Throwable th16) {
            Closeable[] closeableArr8 = new Closeable[i2];
            closeableArr8[0] = this.outputStream;
            DownloadUtils.safeClose(closeableArr8);
            throw th16;
        }
        iStreamReaderCreateStreamReader = null;
        Logger.w(TAG, "handleResponse: BaseException e = " + e);
        if (this.setting.optBugFix(DownloadSettingKeys.BugFix.IGNORE_BASE_EX_ON_STOP_STATUS) || !isStoppedStatus()) {
            if (Logger.debug()) {
                e.printStackTrace();
            }
            this.exception = e;
            throw e;
        }
        IDownloadHttpConnection iDownloadHttpConnection8 = this.httpConnection;
        if (iDownloadHttpConnection8 != null) {
            iDownloadHttpConnection8.end();
        }
        if (iStreamReaderCreateStreamReader != null) {
            iStreamReaderCreateStreamReader.close();
        }
        try {
            if (this.bugfixCancelThenUpdate) {
                synchronized (this.callback) {
                    if (!this.canceled) {
                        updateDownloadChunk(this.downloadCache);
                        if (this.outputStream != null) {
                            sync();
                        }
                    }
                }
            } else {
                updateDownloadChunk(this.downloadCache);
                if (this.outputStream != null) {
                    sync();
                }
            }
            Closeable[] closeableArr9 = new Closeable[startOffset];
            closeableArr9[c] = this.outputStream;
            DownloadUtils.safeClose(closeableArr9);
            this.debugTotalTimeNs = System.nanoTime() - jNanoTime2;
            downloadSetting2 = this.setting;
            downloadInfo2 = this.downloadInfo;
            str2 = this.url;
            iDownloadHttpConnection2 = this.httpConnection;
            z4 = this.paused;
            z3 = this.canceled;
            DownloadMonitorHelper.monitorDownloadIO(downloadSetting2, downloadInfo2, str2, iDownloadHttpConnection2, z4, z3, this.exception, this.curOffset - this.handleStartOffset, this.debugTotalTimeNs, z, this.debugReadTimeNs, this.debugWriteTimeNs, this.debugSyncTimeNs, null);
        } catch (Throwable th17) {
            Closeable[] closeableArr10 = new Closeable[startOffset];
            closeableArr10[c] = this.outputStream;
            DownloadUtils.safeClose(closeableArr10);
            throw th17;
        }
    }

    private IStreamReader createStreamReader(InputStream inputStream) {
        int writeBufferSize = DownloadComponentManager.getWriteBufferSize();
        if (this.setting.optInt("rw_concurrent", 0) == 1 && this.downloadInfo.getChunkCount() == 1 && this.downloadInfo.getTotalBytes() > 20971520) {
            try {
                AsyncStreamReader asyncStreamReader = new AsyncStreamReader(inputStream, writeBufferSize, this.setting.optInt(DownloadSettingKeys.RW_CONCURRENT_MAX_BUFFER_COUNT, 4));
                this.rwConcurrent = true;
                return asyncStreamReader;
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        SyncStreamReader syncStreamReader = new SyncStreamReader(inputStream, writeBufferSize);
        this.rwConcurrent = false;
        return syncStreamReader;
    }

    private void checkAndSync(boolean z) {
        long jUptimeMillis = SystemClock.uptimeMillis();
        long j = jUptimeMillis - this.lastSyncTimestamp;
        if (this.hasSyncStrategy) {
            if (j > (this.appStatusManager.isAppForeground() ? this.syncIntervalMsFg : this.syncIntervalMsBg)) {
                sync();
                this.lastSyncTimestamp = jUptimeMillis;
                return;
            }
            return;
        }
        long j2 = this.curOffset - this.lastSyncBytes;
        if (z || isNeedSync(j2, j)) {
            sync();
            this.lastSyncTimestamp = jUptimeMillis;
        }
    }

    public long getLastSyncBytes() {
        return this.lastSyncBytes;
    }

    private void sync() {
        boolean z;
        long jNanoTime = this.isMonitorRw ? System.nanoTime() : 0L;
        try {
            this.outputStream.flushAndSync();
            z = true;
        } catch (Exception unused) {
            z = false;
        }
        if (z) {
            this.downloadInfo.updateRealDownloadTime(true);
            boolean z2 = this.downloadInfo.getChunkCount() > 1;
            IDownloadProxy iDownloadProxy = DownloadProxy.get(DownloadUtils.needNotifyDownloaderProcess());
            if (z2) {
                updateDownloadChunk(this.sqlDownloadCache);
                if (iDownloadProxy != null) {
                    iDownloadProxy.updateDownloadInfo(this.downloadInfo);
                } else {
                    this.sqlDownloadCache.OnDownloadTaskProgress(this.downloadInfo.getId(), this.downloadInfo.getCurBytes());
                }
            } else if (iDownloadProxy != null) {
                iDownloadProxy.updateDownloadInfo(this.downloadInfo);
            } else {
                this.sqlDownloadCache.OnDownloadTaskProgress(this.downloadChunk.getId(), this.curOffset);
            }
            this.lastSyncBytes = this.curOffset;
        }
        if (this.isMonitorRw) {
            this.debugSyncTimeNs += System.nanoTime() - jNanoTime;
        }
    }

    private void updateDownloadChunk(IDownloadCache iDownloadCache) {
        DownloadChunk firstReuseChunk;
        DownloadChunk downloadChunk;
        if (iDownloadCache == null) {
            return;
        }
        IDownloadProxy iDownloadProxy = null;
        boolean z = iDownloadCache instanceof SqlDownloadCache;
        if (z && (iDownloadProxy = DownloadProxy.get(DownloadUtils.needNotifyDownloaderProcess())) == null) {
            return;
        }
        IDownloadProxy iDownloadProxy2 = iDownloadProxy;
        if (this.downloadChunk.isHostChunk()) {
            firstReuseChunk = this.downloadChunk.getFirstReuseChunk();
        } else {
            firstReuseChunk = this.downloadChunk;
        }
        DownloadChunk downloadChunk2 = firstReuseChunk;
        if (downloadChunk2 != null) {
            downloadChunk2.setCurrentOffset(this.curOffset);
            if (z && iDownloadProxy2 != null) {
                iDownloadProxy2.updateSubDownloadChunk(downloadChunk2.getId(), downloadChunk2.getChunkIndex(), downloadChunk2.getHostChunkIndex(), this.curOffset);
                downloadChunk = downloadChunk2;
            } else {
                downloadChunk = downloadChunk2;
                iDownloadCache.updateSubDownloadChunk(downloadChunk2.getId(), downloadChunk2.getChunkIndex(), downloadChunk2.getHostChunkIndex(), this.curOffset);
            }
            if (downloadChunk.canRefreshCurOffsetForReuseChunk()) {
                boolean z2 = false;
                if (downloadChunk.hasNoBytesDownload()) {
                    long nextChunkCurOffset = downloadChunk.getNextChunkCurOffset();
                    if (nextChunkCurOffset > this.curOffset) {
                        if (z && iDownloadProxy2 != null) {
                            iDownloadProxy2.updateDownloadChunk(downloadChunk.getId(), downloadChunk.getHostChunkIndex(), nextChunkCurOffset);
                        } else {
                            iDownloadCache.updateDownloadChunk(downloadChunk.getId(), downloadChunk.getHostChunkIndex(), nextChunkCurOffset);
                        }
                        z2 = true;
                    }
                }
                if (z2) {
                    return;
                }
                if (z && iDownloadProxy2 != null) {
                    iDownloadProxy2.updateDownloadChunk(downloadChunk.getId(), downloadChunk.getHostChunkIndex(), this.curOffset);
                    return;
                } else {
                    iDownloadCache.updateDownloadChunk(downloadChunk.getId(), downloadChunk.getHostChunkIndex(), this.curOffset);
                    return;
                }
            }
            return;
        }
        if (this.downloadChunk.isHostChunk()) {
            if (z && iDownloadProxy2 != null) {
                iDownloadProxy2.updateDownloadChunk(this.downloadChunk.getId(), this.downloadChunk.getChunkIndex(), this.curOffset);
            } else {
                iDownloadCache.updateDownloadChunk(this.downloadChunk.getId(), this.downloadChunk.getChunkIndex(), this.curOffset);
            }
        }
    }
}
