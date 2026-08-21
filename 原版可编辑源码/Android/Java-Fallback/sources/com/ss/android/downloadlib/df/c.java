package com.ss.android.downloadlib.df;

public class c {
    private static android.os.Handler rg;



    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.ss.android.downloadlib.df.c.rg = r0
            return
    }

    private static int bm(com.ss.android.downloadad.api.rg.df r2) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = com.ss.android.downloadlib.utils.pt.rg(r2)
            java.lang.String r0 = "app_link_check_count"
            r1 = 10
            int r2 = r2.optInt(r0, r1)
            return r2
    }

    static long c(com.ss.android.downloadad.api.rg.df r2) {
            long r0 = ux(r2)
            return r0
    }

    private static void df(com.ss.android.downloadad.api.rg.df r3, int r4) {
            if (r4 > 0) goto L3
            return
        L3:
            int r0 = rz(r3)
            int r0 = r0 * 1000
            com.ss.android.downloadlib.pt r1 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.df.c$2 r2 = new com.ss.android.downloadlib.df.c$2
            r2.<init>(r3, r4)
            long r3 = (long) r0
            r1.rg(r2, r3)
            return
    }

    public static boolean df(com.ss.android.downloadad.api.rg.df r1) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.downloadlib.utils.pt.rg(r1)
            java.lang.String r0 = "app_link_opt_install_switch"
            int r1 = r1.optInt(r0)
            r0 = 1
            if (r1 != r0) goto Le
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    static int fw(com.ss.android.downloadad.api.rg.df r0) {
            int r0 = bm(r0)
            return r0
    }

    public static long pp(com.ss.android.downloadad.api.rg.df r2) {
            if (r2 != 0) goto L5
            r0 = 3000(0xbb8, double:1.482E-320)
            return r0
        L5:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = com.ss.android.downloadlib.utils.pt.rg(r2)
            r0 = 3
            java.lang.String r1 = "app_link_opt_back_time_limit"
            int r2 = r2.optInt(r1, r0)
            int r2 = r2 * 1000
            long r0 = (long) r2
            return r0
    }

    public static boolean pt(com.ss.android.downloadad.api.rg.df r1) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.downloadlib.utils.pt.rg(r1)
            java.lang.String r0 = "app_link_opt_dialog_switch"
            int r1 = r1.optInt(r0)
            r0 = 1
            if (r1 != r0) goto Le
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    public static boolean q(com.ss.android.downloadad.api.rg.df r1) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.downloadlib.utils.pt.rg(r1)
            java.lang.String r0 = "app_link_opt_invoke_switch"
            int r1 = r1.optInt(r0)
            r0 = 1
            if (r1 != r0) goto Le
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    static void rg(com.ss.android.downloadad.api.rg.df r0, int r1) {
            df(r0, r1)
            return
    }

    public static void rg(com.ss.android.downloadad.api.rg.df r4, com.ss.android.downloadlib.df.ux r5) {
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
            if (r0 != 0) goto L21
            if (r1 == 0) goto L21
            r0 = 1
            goto L22
        L21:
            r0 = 0
        L22:
            if (r4 == 0) goto L27
            r4.hq(r0)
        L27:
            r5.rg(r0)
            if (r4 != 0) goto L2d
            return
        L2d:
            int r0 = bm(r4)
            df(r4, r0)
            if (r1 == 0) goto L37
            return
        L37:
            long r0 = java.lang.System.currentTimeMillis()
            com.ss.android.socialbase.downloader.common.AppStatusManager r2 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            com.ss.android.downloadlib.df.c$1 r3 = new com.ss.android.downloadlib.df.c$1
            r3.<init>(r4, r0, r5)
            r2.registerAppSwitchListener(r3)
            return
    }

    public static boolean rg(com.ss.android.downloadad.api.rg.df r1) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.downloadlib.utils.pt.rg(r1)
            java.lang.String r0 = "app_link_opt_switch"
            int r1 = r1.optInt(r0)
            r0 = 1
            if (r1 == r0) goto Lf
            r1 = 0
            return r1
        Lf:
            return r0
    }

    private static int rz(com.ss.android.downloadad.api.rg.df r2) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = com.ss.android.downloadlib.utils.pt.rg(r2)
            java.lang.String r0 = "app_link_check_delay"
            r1 = 1
            int r2 = r2.optInt(r0, r1)
            return r2
    }

    private static long ux(com.ss.android.downloadad.api.rg.df r3) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.downloadlib.utils.pt.rg(r3)
            java.lang.String r0 = "app_link_check_timeout"
            r1 = 300000(0x493e0, double:1.482197E-318)
            long r0 = r3.optLong(r0, r1)
            return r0
    }
}
