package com.ss.android.socialbase.downloader.downloader;

public class DownloadService extends android.app.Service {
    private static final java.lang.String TAG = null;
    protected com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler downloadServiceHandler;


    static {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadService> r0 = com.ss.android.socialbase.downloader.downloader.DownloadService.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.downloader.DownloadService.TAG = r0
            return
    }

    public DownloadService() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r4) {
            r3 = this;
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.DownloadService.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onBind downloadServiceHandler != null:"
            r1.append(r2)
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r2 = r3.downloadServiceHandler
            if (r2 == 0) goto L12
            r2 = 1
            goto L13
        L12:
            r2 = 0
        L13:
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = r3.downloadServiceHandler
            if (r0 == 0) goto L26
            android.os.IBinder r4 = r0.onBind(r4)
            return r4
        L26:
            r4 = 0
            return r4
    }

    @Override
    public void onCreate() {
            r2 = this;
            super.onCreate()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setAppContext(r2)
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadServiceHandler()
            r2.downloadServiceHandler = r0
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r2)
            r0.setDownloadService(r1)
            return
    }

    @Override
    public void onDestroy() {
            r2 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto Ld
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.DownloadService.TAG
            java.lang.String r1 = "Service onDestroy"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
        Ld:
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = r2.downloadServiceHandler
            if (r0 == 0) goto L17
            r0.onDestroy()
            r0 = 0
            r2.downloadServiceHandler = r0
        L17:
            super.onDestroy()
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r3, int r4, int r5) {
            r2 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto Ld
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.DownloadService.TAG
            java.lang.String r1 = "DownloadService onStartCommand"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
        Ld:
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = r2.downloadServiceHandler
            r0.onStartCommandOnMainThread()
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getCPUThreadExecutor()
            if (r0 == 0) goto L20
            com.ss.android.socialbase.downloader.downloader.DownloadService$1 r1 = new com.ss.android.socialbase.downloader.downloader.DownloadService$1
            r1.<init>(r2, r3, r4, r5)
            r0.execute(r1)
        L20:
            boolean r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.notAutoRebootService()
            if (r3 == 0) goto L28
            r3 = 2
            return r3
        L28:
            r3 = 3
            return r3
    }
}
