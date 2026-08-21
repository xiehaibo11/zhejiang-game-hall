package com.ss.android.downloadlib;

public class q implements com.ss.android.socialbase.appdownloader.q.ux {
    private static java.lang.String rg;
    private android.os.Handler df;




    static {
            java.lang.Class<com.ss.android.downloadlib.q> r0 = com.ss.android.downloadlib.q.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.downloadlib.q.rg = r0
            return
    }

    public q() {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.df = r0
            return
    }

    private void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            r2 = this;
            int r0 = r3.getId()
            boolean r0 = com.ss.android.downloadlib.utils.pt.c(r0)
            if (r0 != 0) goto Lb
            return
        Lb:
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.addownload.df.df r1 = new com.ss.android.downloadlib.addownload.df.df
            r1.<init>(r3)
            r0.df(r1)
            return
    }

    private void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r15, com.ss.android.downloadad.api.rg.df r16) {
            r14 = this;
            java.io.File r0 = android.os.Environment.getDataDirectory()
            r1 = -1
            long r6 = com.ss.android.downloadlib.utils.b.rg(r0, r1)
            java.io.File r0 = android.os.Environment.getDataDirectory()
            long r3 = com.ss.android.downloadlib.utils.b.rg(r0)
            r8 = 10
            long r3 = r3 / r8
            r8 = 524288000(0x1f400000, double:2.590326893E-315)
            long r3 = java.lang.Math.min(r8, r3)
            long r8 = r15.getTotalBytes()
            double r3 = (double) r3
            double r10 = (double) r8
            r12 = 4612811918334230528(0x4004000000000000, double:2.5)
            double r10 = r10 * r12
            double r10 = r10 + r3
            int r0 = (r6 > r1 ? 1 : (r6 == r1 ? 0 : -1))
            if (r0 <= 0) goto L45
            int r0 = (r8 > r1 ? 1 : (r8 == r1 ? 0 : -1))
            if (r0 <= 0) goto L45
            double r0 = (double) r6
            int r2 = (r0 > r10 ? 1 : (r0 == r10 ? 0 : -1))
            if (r2 >= 0) goto L45
            double r0 = r10 - r0
            long r2 = com.ss.android.downloadlib.addownload.pt.df()
            double r2 = (double) r2
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L45
            int r0 = r15.getId()
            com.ss.android.downloadlib.addownload.pt.rg(r0)
        L45:
            com.ss.android.socialbase.downloader.common.AppStatusManager r0 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            com.ss.android.downloadlib.q$3 r1 = new com.ss.android.downloadlib.q$3
            r3 = r1
            r4 = r14
            r5 = r16
            r12 = r15
            r3.<init>(r4, r5, r6, r8, r10, r12)
            r0.registerAppSwitchListener(r1)
            return
    }

    @Override
    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r6, com.ss.android.socialbase.downloader.exception.BaseException r7, int r8) {
            r5 = this;
            if (r6 != 0) goto L3
            return
        L3:
            r0 = -1
            if (r8 != r0) goto L1c
            if (r7 == 0) goto L1c
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            com.ss.android.downloadlib.utils.pp.q(r6, r1)
            com.ss.android.downloadlib.rg.rg(r1, r6)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "download_failed"
            com.ss.android.downloadlib.utils.bm.rg(r2, r1)
        L1c:
            com.ss.android.downloadlib.addownload.model.c r1 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r1 = r1.rg(r6)
            if (r1 != 0) goto L27
            return
        L27:
            if (r8 != r0) goto Lef
            r8 = 0
            if (r7 == 0) goto Lde
            int r8 = r6.getId()     // Catch: java.lang.Exception -> Lf6
            com.ss.android.socialbase.downloader.setting.DownloadSetting r8 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r8)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r0 = "toast_without_network"
            r2 = 0
            int r8 = r8.optInt(r0, r2)     // Catch: java.lang.Exception -> Lf6
            r0 = 1
            if (r8 != r0) goto L50
            int r8 = r7.getErrorCode()     // Catch: java.lang.Exception -> Lf6
            r3 = 1049(0x419, float:1.47E-42)
            if (r8 != r3) goto L50
            android.os.Handler r8 = r5.df     // Catch: java.lang.Exception -> Lf6
            com.ss.android.downloadlib.q$1 r3 = new com.ss.android.downloadlib.q$1     // Catch: java.lang.Exception -> Lf6
            r3.<init>(r5)     // Catch: java.lang.Exception -> Lf6
            r8.post(r3)     // Catch: java.lang.Exception -> Lf6
        L50:
            boolean r8 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isInsufficientSpaceError(r7)     // Catch: java.lang.Exception -> Lf6
            if (r8 == 0) goto Lc0
            com.ss.android.download.api.config.f r8 = com.ss.android.downloadlib.addownload.bm.hq()     // Catch: java.lang.Exception -> Lf6
            if (r8 == 0) goto L67
            com.ss.android.download.api.config.f r8 = com.ss.android.downloadlib.addownload.bm.hq()     // Catch: java.lang.Exception -> Lf6
            long r3 = r1.df()     // Catch: java.lang.Exception -> Lf6
            r8.rg(r3)     // Catch: java.lang.Exception -> Lf6
        L67:
            com.ss.android.downloadlib.event.AdEventHandler r8 = com.ss.android.downloadlib.event.AdEventHandler.rg()     // Catch: java.lang.Exception -> Lf6
            java.lang.String r3 = "download_failed_for_space"
            r8.rg(r3, r1)     // Catch: java.lang.Exception -> Lf6
            boolean r8 = r1.mc()     // Catch: java.lang.Exception -> Lf6
            if (r8 != 0) goto L82
            com.ss.android.downloadlib.event.AdEventHandler r8 = com.ss.android.downloadlib.event.AdEventHandler.rg()     // Catch: java.lang.Exception -> Lf6
            java.lang.String r3 = "download_can_restart"
            r8.rg(r3, r1)     // Catch: java.lang.Exception -> Lf6
            r5.rg(r6)     // Catch: java.lang.Exception -> Lf6
        L82:
            com.ss.android.download.api.config.f r8 = com.ss.android.downloadlib.addownload.bm.hq()     // Catch: java.lang.Exception -> Lf6
            if (r8 == 0) goto L92
            com.ss.android.download.api.config.f r8 = com.ss.android.downloadlib.addownload.bm.hq()     // Catch: java.lang.Exception -> Lf6
            boolean r8 = r8.pt()     // Catch: java.lang.Exception -> Lf6
            if (r8 != 0) goto Lc0
        L92:
            com.ss.android.downloadlib.addownload.model.c r8 = com.ss.android.downloadlib.addownload.model.c.rg()     // Catch: java.lang.Exception -> Lf6
            long r3 = r1.df()     // Catch: java.lang.Exception -> Lf6
            com.ss.android.download.api.download.DownloadModel r8 = r8.rg(r3)     // Catch: java.lang.Exception -> Lf6
            if (r8 == 0) goto Lc0
            boolean r1 = r8.isShowToast()     // Catch: java.lang.Exception -> Lf6
            if (r1 == 0) goto Lc0
            int r1 = r6.getId()     // Catch: java.lang.Exception -> Lf6
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r3 = "show_no_enough_space_toast"
            int r2 = r1.optInt(r3, r2)     // Catch: java.lang.Exception -> Lf6
            if (r2 != r0) goto Lc0
            android.os.Handler r0 = r5.df     // Catch: java.lang.Exception -> Lf6
            com.ss.android.downloadlib.q$2 r2 = new com.ss.android.downloadlib.q$2     // Catch: java.lang.Exception -> Lf6
            r2.<init>(r5, r1, r8)     // Catch: java.lang.Exception -> Lf6
            r0.post(r2)     // Catch: java.lang.Exception -> Lf6
        Lc0:
            org.json.JSONObject r8 = com.ss.android.downloadlib.addownload.bm.rz()     // Catch: java.lang.Exception -> Lf6
            java.lang.String r0 = "exception_msg_length"
            r1 = 500(0x1f4, float:7.0E-43)
            int r8 = r8.optInt(r0, r1)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r0 = r7.getMessage()     // Catch: java.lang.Exception -> Lf6
            java.lang.String r8 = com.ss.android.downloadlib.utils.b.rg(r0, r8)     // Catch: java.lang.Exception -> Lf6
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Exception -> Lf6
            int r1 = r7.getErrorCode()     // Catch: java.lang.Exception -> Lf6
            r0.<init>(r1, r8)     // Catch: java.lang.Exception -> Lf6
            r8 = r0
        Lde:
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()     // Catch: java.lang.Exception -> Lf6
            r0.df(r6, r8)     // Catch: java.lang.Exception -> Lf6
            com.ss.android.downloadlib.fw r8 = com.ss.android.downloadlib.fw.rg()     // Catch: java.lang.Exception -> Lf6
            java.lang.String r0 = ""
            r8.rg(r6, r7, r0)     // Catch: java.lang.Exception -> Lf6
            goto L124
        Lef:
            r7 = -3
            if (r8 != r7) goto Lf8
            com.ss.android.downloadlib.rg.rg(r6, r1)     // Catch: java.lang.Exception -> Lf6
            goto L124
        Lf6:
            r6 = move-exception
            goto L11b
        Lf8:
            r7 = 2001(0x7d1, float:2.804E-42)
            if (r8 != r7) goto L104
            com.ss.android.downloadlib.rg r8 = com.ss.android.downloadlib.rg.rg()     // Catch: java.lang.Exception -> Lf6
            r8.rg(r6, r1, r7)     // Catch: java.lang.Exception -> Lf6
            goto L124
        L104:
            r7 = 11
            if (r8 != r7) goto L124
            com.ss.android.downloadlib.rg r7 = com.ss.android.downloadlib.rg.rg()     // Catch: java.lang.Exception -> Lf6
            r8 = 2000(0x7d0, float:2.803E-42)
            r7.rg(r6, r1, r8)     // Catch: java.lang.Exception -> Lf6
            boolean r7 = r1.gk()     // Catch: java.lang.Exception -> Lf6
            if (r7 != 0) goto L124
            r5.rg(r6, r1)     // Catch: java.lang.Exception -> Lf6
            goto L124
        L11b:
            com.ss.android.download.api.df.rg r7 = com.ss.android.downloadlib.addownload.bm.qx()
            java.lang.String r8 = "onAppDownloadMonitorSend"
            r7.rg(r6, r8)
        L124:
            return
    }
}
