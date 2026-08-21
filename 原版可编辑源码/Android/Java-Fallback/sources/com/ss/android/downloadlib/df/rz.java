package com.ss.android.downloadlib.df;

public class rz {
    public static boolean rg(com.ss.android.downloadad.api.rg.rg r3) {
            boolean r0 = com.ss.android.socialbase.appdownloader.c.pt.pt()
            r1 = 1
            if (r0 == 0) goto L30
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 29
            if (r0 >= r2) goto L30
            com.ss.android.download.api.config.df r0 = com.ss.android.downloadlib.addownload.bm.b()
            if (r0 == 0) goto L30
            com.ss.android.download.api.config.df r0 = com.ss.android.downloadlib.addownload.bm.b()
            boolean r0 = r0.rg()
            if (r0 == 0) goto L30
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.downloadlib.utils.pt.rg(r3)
            java.lang.String r2 = "invoke_app_form_background_switch"
            int r0 = r0.optInt(r2)
            if (r0 != r1) goto L30
            boolean r3 = r3.z()
            if (r3 == 0) goto L30
            goto L31
        L30:
            r1 = 0
        L31:
            return r1
    }
}
