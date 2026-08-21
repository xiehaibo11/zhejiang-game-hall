package com.ss.android.socialbase.downloader.depend;

public interface IDownloadCompleteHandler {
    void handle(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws com.ss.android.socialbase.downloader.exception.BaseException;

    boolean needHandle(com.ss.android.socialbase.downloader.model.DownloadInfo r1);
}
