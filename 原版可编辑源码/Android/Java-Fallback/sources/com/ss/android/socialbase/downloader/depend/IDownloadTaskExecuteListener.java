package com.ss.android.socialbase.downloader.depend;

public interface IDownloadTaskExecuteListener {
    void onFinish(com.ss.android.socialbase.downloader.model.DownloadTask r1, int r2);

    void onStart(com.ss.android.socialbase.downloader.model.DownloadTask r1, int r2);
}
