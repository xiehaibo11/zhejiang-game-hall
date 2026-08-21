package com.ss.android.socialbase.downloader.thread;

public interface IDownloadRunnableCallback {
    boolean canRetry(com.ss.android.socialbase.downloader.exception.BaseException r1);

    void checkSpaceOverflow(long r1) throws com.ss.android.socialbase.downloader.exception.BaseException;

    com.ss.android.socialbase.downloader.model.DownloadChunk getUnCompletedSubChunk(int r1);

    void handleFirstConnection(java.lang.String r1, com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r2, long r3) throws com.ss.android.socialbase.downloader.exception.BaseException, com.ss.android.socialbase.downloader.exception.RetryThrowable;

    void onAllChunkRetryWithReset(com.ss.android.socialbase.downloader.exception.BaseException r1, boolean r2);

    void onChunkDowngradeRetry(com.ss.android.socialbase.downloader.exception.BaseException r1);

    void onCompleted(com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable r1);

    void onError(com.ss.android.socialbase.downloader.exception.BaseException r1);

    boolean onProgress(long r1) throws com.ss.android.socialbase.downloader.exception.BaseException;

    com.ss.android.socialbase.downloader.exception.RetryCheckStatus onRetry(com.ss.android.socialbase.downloader.exception.BaseException r1, long r2);

    com.ss.android.socialbase.downloader.exception.RetryCheckStatus onSingleChunkRetry(com.ss.android.socialbase.downloader.model.DownloadChunk r1, com.ss.android.socialbase.downloader.exception.BaseException r2, long r3);

    void setHttpResponseStatus(com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r1);
}
