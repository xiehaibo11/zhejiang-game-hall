package com.ss.android.socialbase.downloader.downloader;

import java.lang.ref.WeakReference;

public class IndependentProcessDownloadService extends DownloadService {
    @Override
    public void onCreate() {
        super.onCreate();
        DownloadComponentManager.setAppContext(this);
        if (DownloadComponentManager.getIndependentHolderCreator() == null) {
            DownloadComponentManager.setIndependentServiceCreator(new MultiProcCreater());
        }
        this.downloadServiceHandler = DownloadComponentManager.getIndependentDownloadServiceHandler();
        this.downloadServiceHandler.setDownloadService(new WeakReference(this));
    }
}
