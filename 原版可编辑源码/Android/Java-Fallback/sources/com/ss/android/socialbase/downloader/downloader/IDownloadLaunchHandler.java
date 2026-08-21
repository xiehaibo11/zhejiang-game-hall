package com.ss.android.socialbase.downloader.downloader;

public interface IDownloadLaunchHandler {
    java.util.List<java.lang.String> getResumeMimeTypes();

    void onLaunchResume(java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> r1, int r2);
}
