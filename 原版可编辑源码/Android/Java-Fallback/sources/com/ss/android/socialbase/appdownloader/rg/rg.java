package com.ss.android.socialbase.appdownloader.rg;

public abstract class rg implements com.ss.android.socialbase.appdownloader.rg.pp {
    protected final com.ss.android.socialbase.downloader.setting.DownloadSetting df;
    protected final java.lang.String q;
    protected final android.content.Context rg;

    public rg(android.content.Context r1, com.ss.android.socialbase.downloader.setting.DownloadSetting r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.rg = r1
            r0.df = r2
            r0.q = r3
            return
    }

    public boolean rg() {
            r4 = this;
            android.content.Context r0 = r4.rg
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            android.content.Intent r0 = r4.df()
            android.content.Context r2 = r4.rg     // Catch: java.lang.Throwable -> L18
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L18
            android.content.ComponentName r0 = r0.resolveActivity(r2)     // Catch: java.lang.Throwable -> L18
            if (r0 == 0) goto L26
            r0 = 1
            return r0
        L18:
            r0 = move-exception
            boolean r2 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r2 == 0) goto L26
            java.lang.String r2 = "AbsDevicePlan"
            java.lang.String r3 = "check is valid failed!"
            android.util.Log.e(r2, r3, r0)
        L26:
            return r1
    }
}
