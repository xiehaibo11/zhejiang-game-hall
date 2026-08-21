package com.ss.android.downloadlib.q;

public class ux {




    private static class rg {
        private static com.ss.android.downloadlib.q.ux rg;

        static {
                com.ss.android.downloadlib.q.ux r0 = new com.ss.android.downloadlib.q.ux
                r1 = 0
                r0.<init>(r1)
                com.ss.android.downloadlib.q.ux.rg.rg = r0
                return
        }

        static com.ss.android.downloadlib.q.ux rg() {
                com.ss.android.downloadlib.q.ux r0 = com.ss.android.downloadlib.q.ux.rg.rg
                return r0
        }
    }

    private ux() {
            r0 = this;
            r0.<init>()
            return
    }

    ux(com.ss.android.downloadlib.q.ux.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private void df(com.ss.android.downloadad.api.rg.df r6, long r7) {
            r5 = this;
            int r0 = r6.qx()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            java.lang.String r2 = "notification_opt_2"
            int r1 = r1.optInt(r2)
            r2 = 1
            if (r1 == r2) goto L12
            return
        L12:
            r5.rg(r0)
            com.ss.android.downloadlib.pt r1 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.q.ux$1 r2 = new com.ss.android.downloadlib.q.ux$1
            r2.<init>(r5, r0, r6)
            r3 = 1000(0x3e8, double:4.94E-321)
            long r7 = r7 * r3
            r1.rg(r2, r7)
            return
    }

    private void q(com.ss.android.downloadad.api.rg.df r6, long r7) {
            r5 = this;
            int r0 = r6.qx()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            java.lang.String r2 = "notification_opt_2"
            int r1 = r1.optInt(r2)
            r2 = 1
            if (r1 == r2) goto L12
            return
        L12:
            r5.rg(r0)
            com.ss.android.downloadlib.pt r1 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.q.ux$2 r2 = new com.ss.android.downloadlib.q.ux$2
            r2.<init>(r5, r0, r6)
            r3 = 1000(0x3e8, double:4.94E-321)
            long r7 = r7 * r3
            r1.rg(r2, r7)
            return
    }

    public static com.ss.android.downloadlib.q.ux rg() {
            com.ss.android.downloadlib.q.ux r0 = com.ss.android.downloadlib.q.ux.rg.rg()
            return r0
    }

    private void rg(int r10, com.ss.android.downloadad.api.rg.df r11, org.json.JSONObject r12) {
            r9 = this;
            boolean r0 = com.ss.android.socialbase.appdownloader.pp.pt.rg()
            java.lang.String r1 = "error_code"
            if (r0 != 0) goto L12
            r10 = 1004(0x3ec, float:1.407E-42)
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            com.ss.android.downloadlib.utils.b.rg(r12, r1, r10)
            return
        L12:
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo(r10)
            if (r0 != 0) goto L2a
            r10 = 1005(0x3ed, float:1.408E-42)
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            com.ss.android.downloadlib.utils.b.rg(r12, r1, r10)
            return
        L2a:
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r1 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r1 = r1.getNotificationItem(r10)
            if (r1 == 0) goto L3b
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r1 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            r1.cancelNotification(r10)
        L3b:
            com.ss.android.socialbase.appdownloader.pp.rg r1 = new com.ss.android.socialbase.appdownloader.pp.rg
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.String r5 = r0.getTitle()
            java.lang.String r6 = r0.getSavePath()
            java.lang.String r7 = r0.getName()
            java.lang.String r8 = r0.getExtra()
            r2 = r1
            r4 = r10
            r2.<init>(r3, r4, r5, r6, r7, r8)
            long r2 = r0.getCurBytes()
            r1.setCurBytes(r2)
            long r2 = r0.getTotalBytes()
            r1.setTotalBytes(r2)
            int r10 = r0.getStatus()
            r0 = 0
            r2 = 0
            r1.refreshStatus(r10, r0, r2, r2)
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r10 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            r10.addNotification(r1)
            r1.updateNotification(r0, r2)
            com.ss.android.downloadlib.event.AdEventHandler r10 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r0 = "download_notification_show"
            r10.df(r0, r12, r11)
            return
    }

    static void rg(com.ss.android.downloadlib.q.ux r0, int r1, com.ss.android.downloadad.api.rg.df r2, org.json.JSONObject r3) {
            r0.rg(r1, r2, r3)
            return
    }

    public void c(com.ss.android.downloadad.api.rg.df r4) {
            r3 = this;
            int r0 = r4.qx()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            java.lang.String r1 = "noti_open_delay_secs"
            r2 = 5
            int r0 = r0.optInt(r1, r2)
            long r0 = (long) r0
            r3.rg(r4, r0)
            return
    }

    public void df(com.ss.android.downloadad.api.rg.df r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            int r0 = r4.qx()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            r1 = 5
            java.lang.String r2 = "noti_continue_delay_secs"
            int r0 = r0.optInt(r2, r1)
            long r0 = (long) r0
            r3.df(r4, r0)
            return
    }

    public void pp(com.ss.android.downloadad.api.rg.df r3) {
            r2 = this;
            r0 = 5
            r2.rg(r3, r0)
            return
    }

    public void pt(com.ss.android.downloadad.api.rg.df r4) {
            r3 = this;
            int r0 = r4.qx()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            java.lang.String r1 = "noti_install_delay_secs"
            r2 = 5
            int r0 = r0.optInt(r1, r2)
            long r0 = (long) r0
            r3.q(r4, r0)
            return
    }

    public void q(com.ss.android.downloadad.api.rg.df r3) {
            r2 = this;
            r0 = 5
            r2.q(r3, r0)
            return
    }

    public void rg(int r3) {
            r2 = this;
            com.ss.android.socialbase.appdownloader.pp.q r0 = com.ss.android.socialbase.appdownloader.pp.q.rg()
            android.graphics.Bitmap r0 = r0.rg(r3)
            if (r0 != 0) goto L23
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo(r3)
            if (r0 == 0) goto L23
            com.ss.android.socialbase.appdownloader.pp.q r1 = com.ss.android.socialbase.appdownloader.pp.q.rg()
            java.lang.String r0 = r0.getIconUrl()
            r1.rg(r3, r0)
        L23:
            return
    }

    public void rg(com.ss.android.downloadad.api.rg.df r3) {
            r2 = this;
            r0 = 5
            r2.df(r3, r0)
            return
    }

    public void rg(com.ss.android.downloadad.api.rg.df r6, long r7) {
            r5 = this;
            int r0 = r6.qx()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            java.lang.String r2 = "notification_opt_2"
            int r1 = r1.optInt(r2)
            r2 = 1
            if (r1 == r2) goto L12
            return
        L12:
            r5.rg(r0)
            com.ss.android.downloadlib.pt r1 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.q.ux$3 r2 = new com.ss.android.downloadlib.q.ux$3
            r2.<init>(r5, r0, r6)
            r3 = 1000(0x3e8, double:4.94E-321)
            long r7 = r7 * r3
            r1.rg(r2, r7)
            return
    }
}
