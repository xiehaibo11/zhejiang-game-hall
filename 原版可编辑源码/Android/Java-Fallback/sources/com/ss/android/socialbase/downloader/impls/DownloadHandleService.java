package com.ss.android.socialbase.downloader.impls;

public class DownloadHandleService extends android.app.Service {
    private static final java.lang.String TAG = null;


    static {
            java.lang.Class<com.ss.android.socialbase.downloader.impls.DownloadHandleService> r0 = com.ss.android.socialbase.downloader.impls.DownloadHandleService.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.impls.DownloadHandleService.TAG = r0
            return
    }

    public DownloadHandleService() {
            r0 = this;
            r0.<init>()
            return
    }

    private void handleIntent(android.content.Intent r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = r4.getAction()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Le
            return
        Le:
            r1 = 0
            java.lang.String r2 = "extra_download_id"
            int r4 = r4.getIntExtra(r2, r1)
            if (r4 != 0) goto L18
            return
        L18:
            java.lang.String r1 = "com.ss.android.downloader.action.DOWNLOAD_WAKEUP"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L2d
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getCPUThreadExecutor()
            com.ss.android.socialbase.downloader.impls.DownloadHandleService$1 r1 = new com.ss.android.socialbase.downloader.impls.DownloadHandleService$1
            r1.<init>(r3, r4)
            r0.execute(r1)
            goto L48
        L2d:
            java.lang.String r1 = "com.ss.android.downloader.action.PROCESS_NOTIFY"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L3d
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r0.recordTaskProcessIndependent(r4)
            goto L48
        L3d:
            java.lang.String r4 = "com.ss.android.downloader.action.MULTI_PROCESS_NOTIFY"
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L48
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setDownloadInMultiProcess()
        L48:
            return
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void onCreate() {
            r0 = this;
            super.onCreate()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setAppContext(r0)
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r1, int r2, int r3) {
            r0 = this;
            super.onStartCommand(r1, r2, r3)
            r0.handleIntent(r1)
            r1 = 2
            return r1
    }
}
