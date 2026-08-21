package com.ss.android.downloadlib.addownload.df;

public class df implements java.lang.Runnable {
    private com.ss.android.socialbase.downloader.model.DownloadInfo rg;


    public df(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            r0 = this;
            r0.<init>()
            r0.rg = r1
            return
    }

    @Override
    public void run() {
            r12 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r12.rg
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r12.rg
            com.ss.android.downloadad.api.rg.df r0 = r0.rg(r1)
            if (r0 != 0) goto L12
            return
        L12:
            com.ss.android.downloadlib.event.AdEventHandler r1 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r2 = "cleanspace_task"
            r1.rg(r2, r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r12.rg
            int r1 = r1.getId()
            double r1 = com.ss.android.downloadlib.utils.pt.rg(r1)
            r3 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r1 = r1 + r3
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r12.rg
            long r3 = r3.getTotalBytes()
            double r3 = (double) r3
            double r1 = r1 * r3
            java.lang.Double r1 = java.lang.Double.valueOf(r1)
            long r1 = r1.longValue()
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r12.rg
            long r3 = r3.getCurBytes()
            long r9 = r1 - r3
            r1 = 0
            long r3 = com.ss.android.downloadlib.utils.b.rg(r1)
            com.ss.android.download.api.config.f r5 = com.ss.android.downloadlib.addownload.bm.hq()
            if (r5 == 0) goto L53
            com.ss.android.download.api.config.f r5 = com.ss.android.downloadlib.addownload.bm.hq()
            r5.pp()
        L53:
            com.ss.android.downloadlib.addownload.df.q.rg()
            com.ss.android.downloadlib.addownload.df.q.df()
            int r5 = r0.qx()
            boolean r5 = com.ss.android.downloadlib.utils.pt.fw(r5)
            if (r5 == 0) goto L6a
            android.content.Context r5 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.downloadlib.addownload.df.q.rg(r5)
        L6a:
            long r1 = com.ss.android.downloadlib.utils.b.rg(r1)
            int r5 = (r1 > r9 ? 1 : (r1 == r9 ? 0 : -1))
            r11 = 1
            r6 = 0
            if (r5 < 0) goto L76
            r5 = r11
            goto L77
        L76:
            r5 = r6
        L77:
            if (r5 == 0) goto Lb4
            java.lang.String r5 = "1"
            r0.hq(r5)
            com.ss.android.downloadlib.addownload.model.ux r5 = com.ss.android.downloadlib.addownload.model.ux.rg()
            r5.rg(r0)
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            java.lang.String r6 = "quite_clean_size"
            long r1 = r1 - r3
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: org.json.JSONException -> L95
            r5.putOpt(r6, r1)     // Catch: org.json.JSONException -> L95
            goto L99
        L95:
            r1 = move-exception
            r1.printStackTrace()
        L99:
            com.ss.android.downloadlib.event.AdEventHandler r1 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r2 = "cleanspace_download_after_quite_clean"
            r1.rg(r2, r5, r0)
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r12.rg
            int r1 = r1.getId()
            r0.restart(r1)
            goto L105
        Lb4:
            com.ss.android.download.api.config.f r1 = com.ss.android.downloadlib.addownload.bm.hq()
            if (r1 == 0) goto Le8
            r0.pt(r6)
            com.ss.android.downloadlib.addownload.df.pt r1 = com.ss.android.downloadlib.addownload.df.pt.rg()
            java.lang.String r2 = r0.rg()
            com.ss.android.downloadlib.addownload.df.df$1 r3 = new com.ss.android.downloadlib.addownload.df.df$1
            r3.<init>(r12, r0)
            r1.rg(r2, r3)
            com.ss.android.download.api.config.f r5 = com.ss.android.downloadlib.addownload.bm.hq()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r12.rg
            int r6 = r1.getId()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r12.rg
            java.lang.String r7 = r1.getUrl()
            r8 = 1
            boolean r1 = r5.rg(r6, r7, r8, r9)
            if (r1 == 0) goto L105
            r0.pp(r11)
            goto L105
        Le8:
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r2 = "show_dialog_result"
            r3 = 3
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: org.json.JSONException -> Lf8
            r1.putOpt(r2, r3)     // Catch: org.json.JSONException -> Lf8
            goto Lfc
        Lf8:
            r2 = move-exception
            r2.printStackTrace()
        Lfc:
            com.ss.android.downloadlib.event.AdEventHandler r2 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r3 = "cleanspace_window_show"
            r2.rg(r3, r1, r0)
        L105:
            return
    }
}
