package com.ss.android.socialbase.appdownloader;

public class DownloadReceiver extends android.content.BroadcastReceiver {
    private static final java.lang.String rg = null;
    private android.os.Handler df;



    static {
            java.lang.Class<com.ss.android.socialbase.appdownloader.DownloadReceiver> r0 = com.ss.android.socialbase.appdownloader.DownloadReceiver.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.appdownloader.DownloadReceiver.rg = r0
            return
    }

    public DownloadReceiver() {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.df = r0
            return
    }

    static android.os.Handler rg(com.ss.android.socialbase.appdownloader.DownloadReceiver r0) {
            android.os.Handler r0 = r0.df
            return r0
    }

    private void rg(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.needAutoRefreshUnSuccessTask()
            if (r0 != 0) goto L7
            return
        L7:
            android.os.Handler r0 = r2.df
            com.ss.android.socialbase.appdownloader.DownloadReceiver$2 r1 = new com.ss.android.socialbase.appdownloader.DownloadReceiver$2
            r1.<init>(r2, r3, r4)
            r3 = 2000(0x7d0, double:9.88E-321)
            r0.postDelayed(r1, r3)
            return
    }

    @Override
    public void onReceive(android.content.Context r4, android.content.Intent r5) {
            r3 = this;
            if (r4 == 0) goto L6e
            if (r5 != 0) goto L5
            goto L6e
        L5:
            java.lang.String r0 = r5.getAction()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L10
            return
        L10:
            com.ss.android.socialbase.appdownloader.pt r1 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.q r1 = r1.rg()
            java.lang.String r2 = "android.intent.action.BOOT_COMPLETED"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L39
            if (r1 == 0) goto L28
            boolean r1 = r1.rg()
            if (r1 == 0) goto L39
        L28:
            boolean r5 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r5 == 0) goto L35
            java.lang.String r5 = com.ss.android.socialbase.appdownloader.DownloadReceiver.rg
            java.lang.String r1 = "Received broadcast intent for android.intent.action.BOOT_COMPLETED"
            com.ss.android.socialbase.downloader.logger.Logger.v(r5, r1)
        L35:
            r3.rg(r4, r0)
            goto L6e
        L39:
            java.lang.String r1 = "android.intent.action.MEDIA_MOUNTED"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L52
            boolean r5 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r5 == 0) goto L4e
            java.lang.String r5 = com.ss.android.socialbase.appdownloader.DownloadReceiver.rg
            java.lang.String r1 = "Received broadcast intent for android.intent.action.MEDIA_MOUNTED"
            com.ss.android.socialbase.downloader.logger.Logger.v(r5, r1)
        L4e:
            r3.rg(r4, r0)
            goto L6e
        L52:
            java.lang.String r1 = "android.intent.action.PACKAGE_ADDED"
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L62
            java.lang.String r1 = "android.intent.action.PACKAGE_REPLACED"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L6e
        L62:
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getCPUThreadExecutor()
            com.ss.android.socialbase.appdownloader.DownloadReceiver$1 r1 = new com.ss.android.socialbase.appdownloader.DownloadReceiver$1
            r1.<init>(r3, r5, r4)
            r0.execute(r1)
        L6e:
            return
    }
}
