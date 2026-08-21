package com.ss.android.socialbase.downloader.depend;

public interface IDownloadListener {
    void onCanceled(com.ss.android.socialbase.downloader.model.DownloadInfo r1);

    void onFailed(com.ss.android.socialbase.downloader.model.DownloadInfo r1, com.ss.android.socialbase.downloader.exception.BaseException r2);

    void onFirstStart(com.ss.android.socialbase.downloader.model.DownloadInfo r1);

    void onFirstSuccess(com.ss.android.socialbase.downloader.model.DownloadInfo r1);

    void onPause(com.ss.android.socialbase.downloader.model.DownloadInfo r1);

    void onPrepare(com.ss.android.socialbase.downloader.model.DownloadInfo r1);

    void onProgress(com.ss.android.socialbase.downloader.model.DownloadInfo r1);

    void onRetry(com.ss.android.socialbase.downloader.model.DownloadInfo r1, com.ss.android.socialbase.downloader.exception.BaseException r2);

    void onRetryDelay(com.ss.android.socialbase.downloader.model.DownloadInfo r1, com.ss.android.socialbase.downloader.exception.BaseException r2);

    void onStart(com.ss.android.socialbase.downloader.model.DownloadInfo r1);

    void onSuccessed(com.ss.android.socialbase.downloader.model.DownloadInfo r1);
}
