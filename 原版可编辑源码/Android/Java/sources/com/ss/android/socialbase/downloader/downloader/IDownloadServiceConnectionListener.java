package com.ss.android.socialbase.downloader.downloader;

import android.os.IBinder;

public interface IDownloadServiceConnectionListener {
    void onServiceConnection(IBinder iBinder);

    void onServiceDisConnection();
}
