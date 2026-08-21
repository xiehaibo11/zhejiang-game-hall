package com.ss.android.socialbase.downloader.impls;

public class DefaultDownloadServiceHandler extends com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler {
    private static final java.lang.String TAG = null;

    static {
            java.lang.Class<com.ss.android.socialbase.downloader.impls.DefaultDownloadServiceHandler> r0 = com.ss.android.socialbase.downloader.impls.DefaultDownloadServiceHandler.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.impls.DefaultDownloadServiceHandler.TAG = r0
            return
    }

    public DefaultDownloadServiceHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onStartCommand(android.content.Intent r1, int r2, int r3) {
            r0 = this;
            boolean r1 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r1 == 0) goto Ld
            java.lang.String r1 = com.ss.android.socialbase.downloader.impls.DefaultDownloadServiceHandler.TAG
            java.lang.String r2 = "onStartCommand"
            com.ss.android.socialbase.downloader.logger.Logger.d(r1, r2)
        Ld:
            r1 = 262144(0x40000, float:3.67342E-40)
            boolean r1 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r1)
            if (r1 != 0) goto L18
            r1 = 1
            r0.isServiceAlive = r1
        L18:
            r0.resumePendingTask()
            return
    }

    @Override
    public void onStartCommandOnMainThread() {
            r2 = this;
            r0 = 262144(0x40000, float:3.67342E-40)
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r0)
            if (r0 == 0) goto L1b
            r0 = 1
            r2.isServiceAlive = r0
            r0 = 0
            r2.isInvokeStartService = r0
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L1b
            java.lang.String r0 = com.ss.android.socialbase.downloader.impls.DefaultDownloadServiceHandler.TAG
            java.lang.String r1 = "onStartCommandOnMainThread"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
        L1b:
            return
    }

    @Override
    public void startService(android.content.Context r2, android.content.ServiceConnection r3) {
            r1 = this;
            android.content.Intent r3 = new android.content.Intent     // Catch: java.lang.Throwable -> Lb
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadService> r0 = com.ss.android.socialbase.downloader.downloader.DownloadService.class
            r3.<init>(r2, r0)     // Catch: java.lang.Throwable -> Lb
            r2.startService(r3)     // Catch: java.lang.Throwable -> Lb
            goto Lf
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            return
    }

    @Override
    public void stopService(android.content.Context r2, android.content.ServiceConnection r3) {
            r1 = this;
            android.content.Intent r3 = new android.content.Intent
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadService> r0 = com.ss.android.socialbase.downloader.downloader.DownloadService.class
            r3.<init>(r2, r0)
            r2.stopService(r3)
            r2 = 0
            r1.isServiceAlive = r2
            return
    }
}
