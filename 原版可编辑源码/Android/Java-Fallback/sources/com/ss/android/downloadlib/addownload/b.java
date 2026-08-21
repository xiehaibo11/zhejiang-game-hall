package com.ss.android.downloadlib.addownload;

public class b implements com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onStatusChanged(com.ss.android.socialbase.downloader.model.DownloadInfo r3, int r4, int r5) {
            r2 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r3 = r0.rg(r3)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "reserve_wifi_source"
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: org.json.JSONException -> L20
            r0.putOpt(r1, r5)     // Catch: org.json.JSONException -> L20
            java.lang.String r5 = "reserve_wifi_status"
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: org.json.JSONException -> L20
            r0.putOpt(r5, r4)     // Catch: org.json.JSONException -> L20
            goto L24
        L20:
            r4 = move-exception
            r4.printStackTrace()
        L24:
            com.ss.android.downloadlib.event.AdEventHandler r4 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r5 = "pause_reserve_wifi"
            r4.rg(r5, r0, r3)
            return
    }
}
