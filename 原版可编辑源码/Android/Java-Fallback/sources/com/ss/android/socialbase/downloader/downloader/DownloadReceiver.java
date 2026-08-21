package com.ss.android.socialbase.downloader.downloader;

public class DownloadReceiver extends android.content.BroadcastReceiver {
    private static final java.lang.String TAG = null;


    static {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadReceiver> r0 = com.ss.android.socialbase.downloader.downloader.DownloadReceiver.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.downloader.DownloadReceiver.TAG = r0
            return
    }

    public DownloadReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    private void autoRefreshUnsuccessDownloadTask(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.needAutoRefreshUnSuccessTask()
            if (r0 != 0) goto L7
            return
        L7:
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.ss.android.socialbase.downloader.downloader.DownloadReceiver$1 r1 = new com.ss.android.socialbase.downloader.downloader.DownloadReceiver$1
            r1.<init>(r2, r3, r4)
            r3 = 2000(0x7d0, double:9.88E-321)
            r0.postDelayed(r1, r3)
            return
    }

    private void forceStopAllDownloadTask(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> Le
            java.lang.Class<com.ss.android.socialbase.downloader.notification.DownloadNotificationService> r1 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.class
            r0.<init>(r3, r1)     // Catch: java.lang.Throwable -> Le
            r0.setAction(r4)     // Catch: java.lang.Throwable -> Le
            r3.startService(r0)     // Catch: java.lang.Throwable -> Le
            goto L12
        Le:
            r3 = move-exception
            r3.printStackTrace()
        L12:
            return
    }

    @Override
    public void onReceive(android.content.Context r3, android.content.Intent r4) {
            r2 = this;
            if (r3 == 0) goto L4c
            if (r4 != 0) goto L5
            goto L4c
        L5:
            java.lang.String r4 = r4.getAction()
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L10
            return
        L10:
            java.lang.String r0 = "android.net.conn.CONNECTIVITY_CHANGE"
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L29
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L25
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.DownloadReceiver.TAG
            java.lang.String r1 = "Received broadcast intent for android.net.conn.CONNECTIVITY_CHANGE"
            com.ss.android.socialbase.downloader.logger.Logger.v(r0, r1)
        L25:
            r2.autoRefreshUnsuccessDownloadTask(r3, r4)
            goto L4c
        L29:
            java.lang.String r0 = "android.intent.action.MEDIA_UNMOUNTED"
            boolean r0 = r4.equals(r0)
            if (r0 != 0) goto L49
            java.lang.String r0 = "android.intent.action.MEDIA_REMOVED"
            boolean r0 = r4.equals(r0)
            if (r0 != 0) goto L49
            java.lang.String r0 = "android.intent.action.MEDIA_BAD_REMOVAL"
            boolean r0 = r4.equals(r0)
            if (r0 != 0) goto L49
            java.lang.String r0 = "android.intent.action.MEDIA_EJECT"
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L4c
        L49:
            r2.forceStopAllDownloadTask(r3, r4)
        L4c:
            return
    }
}
