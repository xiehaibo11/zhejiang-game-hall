package com.ss.android.downloadlib.q;

public class pp implements com.ss.android.socialbase.downloader.monitor.InnerEventListener {
    public pp() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onEvent(int r4, java.lang.String r5, org.json.JSONObject r6) {
            r3 = this;
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r0.getDownloadInfo(r4)
            if (r4 != 0) goto Lf
            return
        Lf:
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r0 = r0.rg(r4)
            if (r0 != 0) goto L1a
            return
        L1a:
            java.lang.String r1 = "install_view_result"
            boolean r1 = r1.equals(r5)
            if (r1 == 0) goto L36
            org.json.JSONObject r6 = com.ss.android.downloadlib.utils.b.rg(r6)
            com.ss.android.downloadlib.rg.rg(r6, r4)
            long r1 = r0.df()
            java.lang.Long r4 = java.lang.Long.valueOf(r1)
            java.lang.String r1 = "model_id"
            com.ss.android.downloadlib.utils.b.rg(r6, r1, r4)
        L36:
            com.ss.android.downloadlib.event.AdEventHandler r4 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            r4.df(r5, r6, r0)
            return
    }

    @Override
    public void onUnityEvent(int r2, java.lang.String r3, org.json.JSONObject r4) {
            r1 = this;
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.getDownloadInfo(r2)
            if (r2 != 0) goto Lf
            return
        Lf:
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r2 = r0.rg(r2)
            if (r2 != 0) goto L1a
            return
        L1a:
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            r0.rg(r3, r4, r2)
            return
    }
}
