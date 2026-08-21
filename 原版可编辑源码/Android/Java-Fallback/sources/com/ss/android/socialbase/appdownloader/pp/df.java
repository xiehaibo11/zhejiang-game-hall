package com.ss.android.socialbase.appdownloader.pp;

public class df extends com.ss.android.socialbase.downloader.depend.AbsNotificationListener {
    private java.lang.String c;
    private int df;
    private com.ss.android.socialbase.downloader.notification.AbsNotificationItem fw;
    private java.lang.String pp;
    private java.lang.String pt;
    private java.lang.String q;
    private android.content.Context rg;

    public df(android.content.Context r1, int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto Lc
            android.content.Context r1 = r1.getApplicationContext()
            r0.rg = r1
            goto L12
        Lc:
            android.content.Context r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            r0.rg = r1
        L12:
            r0.df = r2
            r0.q = r3
            r0.pt = r4
            r0.pp = r5
            r0.c = r6
            return
    }

    public df(com.ss.android.socialbase.downloader.notification.AbsNotificationItem r2) {
            r1 = this;
            r1.<init>()
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            r1.rg = r0
            r1.fw = r2
            return
    }

    @Override
    public com.ss.android.socialbase.downloader.notification.AbsNotificationItem createNotificationItem() {
            r8 = this;
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r0 = r8.fw
            if (r0 != 0) goto L19
            android.content.Context r2 = r8.rg
            if (r2 == 0) goto L19
            com.ss.android.socialbase.appdownloader.pp.rg r0 = new com.ss.android.socialbase.appdownloader.pp.rg
            int r3 = r8.df
            java.lang.String r4 = r8.q
            java.lang.String r5 = r8.pt
            java.lang.String r6 = r8.pp
            java.lang.String r7 = r8.c
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            return r0
        L19:
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r0 = r8.fw
            return r0
    }

    @Override
    public void onFailed(com.ss.android.socialbase.downloader.model.DownloadInfo r2, com.ss.android.socialbase.downloader.exception.BaseException r3) {
            r1 = this;
            if (r2 == 0) goto L16
            android.content.Context r0 = r1.rg
            if (r0 == 0) goto L16
            boolean r0 = r2.canShowNotification()
            if (r0 == 0) goto L16
            boolean r0 = r2.isAutoInstallWithoutNotification()
            if (r0 == 0) goto L13
            goto L16
        L13:
            super.onFailed(r2, r3)
        L16:
            return
    }

    @Override
    public void onPause(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            if (r2 == 0) goto Lc
            boolean r0 = r2.isAutoInstallWithoutNotification()
            if (r0 == 0) goto L9
            goto Lc
        L9:
            super.onPause(r2)
        Lc:
            return
    }

    @Override
    public void onPrepare(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            if (r2 == 0) goto Lc
            boolean r0 = r2.isAutoInstallWithoutNotification()
            if (r0 == 0) goto L9
            goto Lc
        L9:
            super.onPrepare(r2)
        Lc:
            return
    }

    @Override
    public void onProgress(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            if (r2 == 0) goto Lc
            boolean r0 = r2.isAutoInstallWithoutNotification()
            if (r0 == 0) goto L9
            goto Lc
        L9:
            super.onProgress(r2)
        Lc:
            return
    }

    @Override
    public void onStart(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            if (r2 == 0) goto Lc
            boolean r0 = r2.isAutoInstallWithoutNotification()
            if (r0 == 0) goto L9
            goto Lc
        L9:
            super.onStart(r2)
        Lc:
            return
    }

    @Override
    public void onSuccessed(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            if (r2 == 0) goto L25
            android.content.Context r0 = r1.rg
            if (r0 != 0) goto L7
            goto L25
        L7:
            boolean r0 = r2.canShowNotification()
            if (r0 == 0) goto L1c
            boolean r0 = r2.isAutoInstallWithoutNotification()
            if (r0 == 0) goto L19
            boolean r0 = r2.isAutoInstall()
            if (r0 != 0) goto L1c
        L19:
            super.onSuccessed(r2)
        L1c:
            boolean r0 = r2.isAutoInstall()
            if (r0 == 0) goto L25
            com.ss.android.socialbase.appdownloader.c.df.rg(r2)
        L25:
            return
    }
}
