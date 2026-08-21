package com.ss.android.downloadlib.df;

public class q {


    public static void rg(com.ss.android.downloadad.api.rg.df r3, com.ss.android.downloadlib.guide.install.rg r4) {
            com.ss.android.socialbase.downloader.common.AppStatusManager r0 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            boolean r0 = r0.isAppForeground()
            if (r0 != 0) goto L13
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 29
            if (r1 < r2) goto L13
            com.ss.android.downloadlib.utils.b.df()
        L13:
            com.ss.android.socialbase.downloader.common.AppStatusManager r1 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            boolean r1 = r1.isAppForeground()
            if (r0 != 0) goto L25
            if (r1 == 0) goto L25
            if (r3 == 0) goto L25
            r0 = 1
            r3.hq(r0)
        L25:
            r4.rg()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "AppInstallOptimiseHelper-->isAppForegroundSecond:::"
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "AppInstallOptimiseHelper"
            com.ss.android.socialbase.downloader.logger.Logger.d(r2, r0)
            if (r1 != 0) goto L4c
            com.ss.android.socialbase.downloader.common.AppStatusManager r0 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            com.ss.android.downloadlib.df.q$1 r1 = new com.ss.android.downloadlib.df.q$1
            r1.<init>(r3, r4)
            r0.registerAppSwitchListener(r1)
        L4c:
            return
    }
}
