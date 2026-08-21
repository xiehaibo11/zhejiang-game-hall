package com.ss.android.socialbase.downloader.depend;

import com.ss.android.socialbase.downloader.model.DownloadInfo;

public interface IDownloadExtListener extends IDownloadListener {
    void onWaitingDownloadCompleteHandler(DownloadInfo downloadInfo);
}
