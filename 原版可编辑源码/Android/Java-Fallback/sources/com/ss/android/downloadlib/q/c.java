package com.ss.android.downloadlib.q;

public class c implements com.ss.android.socialbase.appdownloader.q.pt {
    private android.content.Context rg;

    public c(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.rg = r1
            return
    }

    @Override
    public void rg(int r14, int r15, java.lang.String r16, int r17, long r18) {
            r13 = this;
            r0 = r15
            r1 = r13
            android.content.Context r2 = r1.rg
            if (r2 != 0) goto L7
            return
        L7:
            com.ss.android.socialbase.downloader.downloader.Downloader r2 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r2)
            r3 = r14
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r2.getDownloadInfo(r14)
            if (r4 == 0) goto L96
            int r2 = r4.getStatus()
            if (r2 != 0) goto L1a
            goto L96
        L1a:
            com.ss.android.downloadlib.addownload.model.c r2 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r2 = r2.rg(r4)
            if (r2 != 0) goto L25
            return
        L25:
            r3 = 1
            if (r0 == r3) goto L68
            r3 = 3
            java.lang.String r5 = "download_notification"
            if (r0 == r3) goto L55
            r3 = 5
            if (r0 == r3) goto L4b
            r3 = 6
            if (r0 == r3) goto L41
            r3 = 7
            if (r0 == r3) goto L37
            goto L96
        L37:
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r3 = "download_notification_click"
            r0.rg(r5, r3, r2)
            goto L96
        L41:
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r3 = "download_notification_continue"
            r0.rg(r5, r3, r2)
            goto L96
        L4b:
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r3 = "download_notification_pause"
            r0.rg(r5, r3, r2)
            goto L96
        L55:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r0 = com.ss.android.downloadlib.rg.df(r0, r4)
            com.ss.android.downloadlib.event.AdEventHandler r3 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r4 = "download_notification_install"
            r3.rg(r5, r4, r0, r2)
            goto L96
        L68:
            com.ss.android.downloadlib.rg.rg(r4, r2)
            java.lang.String r0 = r4.getMimeType()
            java.lang.String r3 = "application/vnd.android.package-archive"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L96
            com.ss.android.downloadlib.addownload.rg r3 = com.ss.android.downloadlib.addownload.rg.rg()
            long r5 = r2.df()
            long r7 = r2.hq()
            java.lang.String r9 = r2.pp()
            java.lang.String r10 = r4.getTitle()
            java.lang.String r11 = r2.pt()
            java.lang.String r12 = r4.getTargetFilePath()
            r3.rg(r4, r5, r7, r9, r10, r11, r12)
        L96:
            return
    }

    @Override
    public void rg(int r1, int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            android.content.Context r2 = r0.rg
            if (r2 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.downloader.Downloader r2 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r2)
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r2.getDownloadInfo(r1)
            if (r1 == 0) goto L23
            int r2 = r1.getStatus()
            r3 = -3
            if (r2 == r3) goto L17
            goto L23
        L17:
            r1.setPackageName(r4)
            com.ss.android.downloadlib.addownload.df r2 = com.ss.android.downloadlib.addownload.df.rg()
            android.content.Context r3 = r0.rg
            r2.rg(r3, r1)
        L23:
            return
    }

    @Override
    public void rg(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            com.ss.android.downloadlib.rg r1 = com.ss.android.downloadlib.rg.rg()
            r1.rg(r2)
            return
    }

    @Override
    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r5) {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            com.ss.android.downloadlib.fw r0 = com.ss.android.downloadlib.fw.rg()
            r0.rg(r5)
            int r0 = r5.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            r1 = 1
            java.lang.String r2 = "report_download_cancel"
            int r0 = r0.optInt(r2, r1)
            java.lang.String r2 = ""
            r3 = 1012(0x3f4, float:1.418E-42)
            if (r0 != r1) goto L2c
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1.<init>(r3, r2)
            r0.rg(r5, r1)
            goto L38
        L2c:
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1.<init>(r3, r2)
            r0.df(r5, r1)
        L38:
            return
    }

    @Override
    public boolean rg() {
            r1 = this;
            com.ss.android.downloadlib.addownload.df r0 = com.ss.android.downloadlib.addownload.df.rg()
            boolean r0 = r0.df()
            return r0
    }

    @Override
    public boolean rg(int r1, boolean r2) {
            r0 = this;
            com.ss.android.download.api.config.pt r1 = com.ss.android.downloadlib.addownload.bm.f()
            if (r1 == 0) goto Lf
            com.ss.android.download.api.config.pt r1 = com.ss.android.downloadlib.addownload.bm.f()
            boolean r1 = r1.rg(r2)
            goto L10
        Lf:
            r1 = 0
        L10:
            return r1
    }
}
