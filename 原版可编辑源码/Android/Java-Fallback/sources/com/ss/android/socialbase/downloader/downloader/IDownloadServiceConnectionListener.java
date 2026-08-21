package com.ss.android.socialbase.downloader.downloader;

public interface IDownloadServiceConnectionListener {
    void onServiceConnection(android.os.IBinder r1);

    void onServiceDisConnection();
}
