package com.ss.android.socialbase.downloader.depend;

import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;

public interface IDownloadCompleteHandler {
    void handle(DownloadInfo downloadInfo) throws BaseException;

    boolean needHandle(DownloadInfo downloadInfo);
}
