package com.ss.android.socialbase.appdownloader.c;

public class df {


    private static void df(com.ss.android.socialbase.downloader.model.DownloadInfo r5) {
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            boolean r1 = r5.isAutoResumed()
            r2 = 1
            r3 = 0
            if (r1 == 0) goto L12
            boolean r1 = r5.isShowNotificationForNetworkResumed()
            if (r1 == 0) goto L32
        L12:
            java.lang.String r1 = r5.getExtra()
            boolean r1 = com.ss.android.socialbase.appdownloader.q.df(r1)
            if (r1 != 0) goto L32
            java.lang.String r1 = r5.getMimeType()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L32
            java.lang.String r1 = r5.getMimeType()
            java.lang.String r4 = "application/vnd.android.package-archive"
            boolean r1 = r1.equals(r4)
            if (r1 != 0) goto L43
        L32:
            int r1 = r5.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)
            java.lang.String r4 = "auto_install_when_resume"
            int r1 = r1.optInt(r4, r3)
            if (r1 == r2) goto L43
            r2 = r3
        L43:
            if (r2 == 0) goto L4e
            int r1 = r5.getId()
            int r1 = com.ss.android.socialbase.appdownloader.q.rg(r0, r1, r3)
            goto L4f
        L4e:
            r1 = 2
        L4f:
            java.util.concurrent.ExecutorService r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getCPUThreadExecutor()
            com.ss.android.socialbase.appdownloader.c.df$1 r3 = new com.ss.android.socialbase.appdownloader.c.df$1
            r3.<init>(r0, r5, r1)
            r2.execute(r3)
            return
    }

    public static void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r0) {
            df(r0)
            return
    }
}
