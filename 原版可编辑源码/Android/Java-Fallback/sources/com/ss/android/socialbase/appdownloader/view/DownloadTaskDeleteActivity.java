package com.ss.android.socialbase.appdownloader.view;

public class DownloadTaskDeleteActivity extends android.app.Activity {
    private android.content.Intent df;
    private com.ss.android.socialbase.appdownloader.q.b rg;




    public DownloadTaskDeleteActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private void df() {
            r13 = this;
            com.ss.android.socialbase.appdownloader.q.b r0 = r13.rg
            if (r0 != 0) goto Ldb
            android.content.Intent r0 = r13.df
            if (r0 != 0) goto La
            goto Ldb
        La:
            java.lang.String r1 = "extra_click_download_ids"
            r2 = 0
            int r0 = r0.getIntExtra(r1, r2)     // Catch: java.lang.Exception -> Ld7
            android.content.Context r1 = r13.getApplicationContext()     // Catch: java.lang.Exception -> Ld7
            com.ss.android.socialbase.downloader.downloader.Downloader r1 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r1)     // Catch: java.lang.Exception -> Ld7
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r1.getDownloadInfo(r0)     // Catch: java.lang.Exception -> Ld7
            if (r1 != 0) goto L20
            return
        L20:
            java.lang.String r3 = r1.getTitle()     // Catch: java.lang.Exception -> Ld7
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Ld7
            if (r4 == 0) goto L32
            java.lang.String r0 = "DeleteActivity"
            java.lang.String r1 = "Missing appName; skipping handle"
            android.util.Log.w(r0, r1)     // Catch: java.lang.Exception -> Ld7
            return
        L32:
            java.lang.String r4 = "tt_appdownloader_notification_download_delete"
            int r4 = com.ss.android.socialbase.appdownloader.rz.rg(r13, r4)     // Catch: java.lang.Exception -> Ld7
            java.lang.String r4 = r13.getString(r4)     // Catch: java.lang.Exception -> Ld7
            r5 = 1
            java.lang.Object[] r6 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> Ld7
            r6[r2] = r3     // Catch: java.lang.Exception -> Ld7
            java.lang.String r3 = java.lang.String.format(r4, r6)     // Catch: java.lang.Exception -> Ld7
            com.ss.android.socialbase.appdownloader.pt r4 = com.ss.android.socialbase.appdownloader.pt.bm()     // Catch: java.lang.Exception -> Ld7
            com.ss.android.socialbase.appdownloader.q.q r4 = r4.rg()     // Catch: java.lang.Exception -> Ld7
            r6 = 0
            if (r4 == 0) goto L54
            com.ss.android.socialbase.appdownloader.q.hq r6 = r4.rg(r13)     // Catch: java.lang.Exception -> Ld7
        L54:
            if (r6 != 0) goto L5b
            com.ss.android.socialbase.appdownloader.pt.rg r6 = new com.ss.android.socialbase.appdownloader.pt.rg     // Catch: java.lang.Exception -> Ld7
            r6.<init>(r13)     // Catch: java.lang.Exception -> Ld7
        L5b:
            if (r6 == 0) goto Ldb
            java.lang.String r4 = "tt_appdownloader_tip"
            int r4 = com.ss.android.socialbase.appdownloader.rz.rg(r13, r4)     // Catch: java.lang.Exception -> Ld7
            java.lang.String r7 = "tt_appdownloader_label_ok"
            int r7 = com.ss.android.socialbase.appdownloader.rz.rg(r13, r7)     // Catch: java.lang.Exception -> Ld7
            java.lang.String r8 = "tt_appdownloader_label_cancel"
            int r8 = com.ss.android.socialbase.appdownloader.rz.rg(r13, r8)     // Catch: java.lang.Exception -> Ld7
            int r9 = r1.getId()     // Catch: java.lang.Exception -> Ld7
            com.ss.android.socialbase.downloader.setting.DownloadSetting r9 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r9)     // Catch: java.lang.Exception -> Ld7
            java.lang.String r10 = "cancel_with_net_opt"
            int r9 = r9.optInt(r10, r2)     // Catch: java.lang.Exception -> Ld7
            if (r9 != r5) goto L92
            boolean r9 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isNoWifiAndInNet()     // Catch: java.lang.Exception -> Ld7
            if (r9 == 0) goto L92
            long r9 = r1.getCurBytes()     // Catch: java.lang.Exception -> Ld7
            long r11 = r1.getTotalBytes()     // Catch: java.lang.Exception -> Ld7
            int r9 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            if (r9 == 0) goto L92
            r2 = r5
        L92:
            if (r2 == 0) goto Lae
            java.lang.String r3 = "tt_appdownloader_label_reserve_wifi"
            int r7 = com.ss.android.socialbase.appdownloader.rz.rg(r13, r3)     // Catch: java.lang.Exception -> Ld7
            java.lang.String r3 = "tt_appdownloader_label_cancel_directly"
            int r8 = com.ss.android.socialbase.appdownloader.rz.rg(r13, r3)     // Catch: java.lang.Exception -> Ld7
            android.content.res.Resources r3 = r13.getResources()     // Catch: java.lang.Exception -> Ld7
            java.lang.String r5 = "tt_appdownloader_resume_in_wifi"
            int r5 = com.ss.android.socialbase.appdownloader.rz.rg(r13, r5)     // Catch: java.lang.Exception -> Ld7
            java.lang.String r3 = r3.getString(r5)     // Catch: java.lang.Exception -> Ld7
        Lae:
            com.ss.android.socialbase.appdownloader.q.hq r4 = r6.rg(r4)     // Catch: java.lang.Exception -> Ld7
            com.ss.android.socialbase.appdownloader.q.hq r3 = r4.rg(r3)     // Catch: java.lang.Exception -> Ld7
            com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity$3 r4 = new com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity$3     // Catch: java.lang.Exception -> Ld7
            r4.<init>(r13, r2, r1, r0)     // Catch: java.lang.Exception -> Ld7
            com.ss.android.socialbase.appdownloader.q.hq r3 = r3.rg(r7, r4)     // Catch: java.lang.Exception -> Ld7
            com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity$2 r4 = new com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity$2     // Catch: java.lang.Exception -> Ld7
            r4.<init>(r13, r2, r1, r0)     // Catch: java.lang.Exception -> Ld7
            com.ss.android.socialbase.appdownloader.q.hq r0 = r3.df(r8, r4)     // Catch: java.lang.Exception -> Ld7
            com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity$1 r1 = new com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity$1     // Catch: java.lang.Exception -> Ld7
            r1.<init>(r13)     // Catch: java.lang.Exception -> Ld7
            r0.rg(r1)     // Catch: java.lang.Exception -> Ld7
            com.ss.android.socialbase.appdownloader.q.b r0 = r6.rg()     // Catch: java.lang.Exception -> Ld7
            r13.rg = r0     // Catch: java.lang.Exception -> Ld7
            goto Ldb
        Ld7:
            r0 = move-exception
            r0.printStackTrace()
        Ldb:
            return
    }

    private void rg() {
            r3 = this;
            android.view.Window r0 = r3.getWindow()
            android.view.WindowManager$LayoutParams r1 = r0.getAttributes()
            r2 = 0
            r1.alpha = r2
            r0.setAttributes(r1)
            return
    }

    static void rg(com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity r0, com.ss.android.socialbase.downloader.model.DownloadInfo r1, int r2) {
            r0.rg(r1, r2)
            return
    }

    private void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r4, int r5) {
            r3 = this;
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.pt r0 = r0.df()
            if (r0 == 0) goto Ld
            r0.rg(r4)
        Ld:
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r0 = r0.getDownloadNotificationEventListener(r5)
            if (r0 == 0) goto L22
            r1 = 10
            java.lang.String r2 = ""
            r0.onNotificationEvent(r1, r4, r2, r2)
        L22:
            android.content.Context r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            if (r4 == 0) goto L33
            android.content.Context r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r4 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r4)
            r4.cancel(r5)
        L33:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r1) {
            r0 = this;
            super.onCreate(r1)
            r0.rg()
            return
    }

    @Override
    protected void onNewIntent(android.content.Intent r1) {
            r0 = this;
            super.onNewIntent(r1)
            r0.setIntent(r1)
            return
    }

    @Override
    protected void onResume() {
            r1 = this;
            super.onResume()
            android.content.Intent r0 = r1.getIntent()
            r1.df = r0
            r1.df()
            com.ss.android.socialbase.appdownloader.q.b r0 = r1.rg
            if (r0 == 0) goto L1c
            boolean r0 = r0.df()
            if (r0 != 0) goto L1c
            com.ss.android.socialbase.appdownloader.q.b r0 = r1.rg
            r0.rg()
            goto L23
        L1c:
            com.ss.android.socialbase.appdownloader.q.b r0 = r1.rg
            if (r0 != 0) goto L23
            r1.finish()
        L23:
            return
    }
}
