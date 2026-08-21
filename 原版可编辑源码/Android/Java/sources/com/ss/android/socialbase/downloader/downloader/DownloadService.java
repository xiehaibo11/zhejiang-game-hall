package com.ss.android.socialbase.downloader.downloader;

import android.app.Service;
import android.content.Intent;
import android.os.IBinder;
import com.ss.android.socialbase.downloader.logger.Logger;
import java.lang.ref.WeakReference;
import java.util.concurrent.ExecutorService;

public class DownloadService extends Service {
    private static final String TAG = DownloadService.class.getSimpleName();
    protected IDownloadServiceHandler downloadServiceHandler;

    @Override
    public void onCreate() {
        super.onCreate();
        DownloadComponentManager.setAppContext(this);
        IDownloadServiceHandler downloadServiceHandler = DownloadComponentManager.getDownloadServiceHandler();
        this.downloadServiceHandler = downloadServiceHandler;
        downloadServiceHandler.setDownloadService(new WeakReference(this));
    }

    @Override
    public IBinder onBind(Intent intent) {
        String str = TAG;
        StringBuilder sb = new StringBuilder();
        sb.append("onBind downloadServiceHandler != null:");
        sb.append(this.downloadServiceHandler != null);
        Logger.d(str, sb.toString());
        IDownloadServiceHandler iDownloadServiceHandler = this.downloadServiceHandler;
        if (iDownloadServiceHandler != null) {
            return iDownloadServiceHandler.onBind(intent);
        }
        return null;
    }

    @Override
    public int onStartCommand(final Intent intent, final int i, final int i2) {
        if (Logger.debug()) {
            Logger.d(TAG, "DownloadService onStartCommand");
        }
        this.downloadServiceHandler.onStartCommandOnMainThread();
        ExecutorService cPUThreadExecutor = DownloadComponentManager.getCPUThreadExecutor();
        if (cPUThreadExecutor != null) {
            cPUThreadExecutor.execute(new Runnable() {
                @Override
                public void run() {
                    if (DownloadService.this.downloadServiceHandler != null) {
                        DownloadService.this.downloadServiceHandler.onStartCommand(intent, i, i2);
                    }
                }
            });
        }
        return DownloadComponentManager.notAutoRebootService() ? 2 : 3;
    }

    @Override
    public void onDestroy() {
        if (Logger.debug()) {
            Logger.d(TAG, "Service onDestroy");
        }
        IDownloadServiceHandler iDownloadServiceHandler = this.downloadServiceHandler;
        if (iDownloadServiceHandler != null) {
            iDownloadServiceHandler.onDestroy();
            this.downloadServiceHandler = null;
        }
        super.onDestroy();
    }
}
