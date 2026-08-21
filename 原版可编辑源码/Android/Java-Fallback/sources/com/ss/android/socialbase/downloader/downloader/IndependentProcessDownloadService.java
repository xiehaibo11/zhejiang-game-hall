package com.ss.android.socialbase.downloader.downloader;

public class IndependentProcessDownloadService extends com.ss.android.socialbase.downloader.downloader.DownloadService {
    public IndependentProcessDownloadService() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onCreate() {
            r2 = this;
            super.onCreate()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setAppContext(r2)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$IndependentHolderCreator r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getIndependentHolderCreator()
            if (r0 != 0) goto L14
            com.ss.android.socialbase.downloader.downloader.MultiProcCreater r0 = new com.ss.android.socialbase.downloader.downloader.MultiProcCreater
            r0.<init>()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setIndependentServiceCreator(r0)
        L14:
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getIndependentDownloadServiceHandler()
            r2.downloadServiceHandler = r0
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = r2.downloadServiceHandler
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r2)
            r0.setDownloadService(r1)
            return
    }
}
