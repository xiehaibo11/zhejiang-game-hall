package com.ss.android.download.api.download;

public interface DownloadStatusChangeListener {
    void onDownloadActive(com.ss.android.download.api.model.DownloadShortInfo r1, int r2);

    void onDownloadFailed(com.ss.android.download.api.model.DownloadShortInfo r1);

    void onDownloadFinished(com.ss.android.download.api.model.DownloadShortInfo r1);

    void onDownloadPaused(com.ss.android.download.api.model.DownloadShortInfo r1, int r2);

    void onDownloadStart(com.ss.android.download.api.download.DownloadModel r1, com.ss.android.download.api.download.DownloadController r2);

    void onIdle();

    void onInstalled(com.ss.android.download.api.model.DownloadShortInfo r1);
}
