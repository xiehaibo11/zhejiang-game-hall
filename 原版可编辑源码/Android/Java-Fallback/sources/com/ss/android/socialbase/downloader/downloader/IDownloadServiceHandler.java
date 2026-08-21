package com.ss.android.socialbase.downloader.downloader;

import com.ss.android.socialbase.downloader.downloader.DownloadService;

public interface IDownloadServiceHandler<T extends com.ss.android.socialbase.downloader.downloader.DownloadService> {
    boolean isServiceAlive();

    boolean isServiceForeground();

    android.os.IBinder onBind(android.content.Intent r1);

    void onDestroy();

    void onStartCommand(android.content.Intent r1, int r2, int r3);

    void onStartCommandOnMainThread();

    void pendDownloadTask(com.ss.android.socialbase.downloader.model.DownloadTask r1);

    void setDownloadService(java.lang.ref.WeakReference<T> r1);

    void setLogLevel(int r1);

    void setServiceConnectionListener(com.ss.android.socialbase.downloader.downloader.IDownloadServiceConnectionListener r1);

    void startForeground(int r1, android.app.Notification r2);

    void startService();

    void stopForeground(boolean r1);

    void tryDownload(com.ss.android.socialbase.downloader.model.DownloadTask r1);

    void tryDownloadWithEngine(com.ss.android.socialbase.downloader.model.DownloadTask r1);
}
