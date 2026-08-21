package com.ss.android.downloadlib.addownload.model;

public class fw {
    private static volatile com.ss.android.downloadlib.addownload.model.fw rg;

    private fw() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ss.android.downloadlib.addownload.model.fw rg() {
            com.ss.android.downloadlib.addownload.model.fw r0 = com.ss.android.downloadlib.addownload.model.fw.rg
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.downloadlib.addownload.model.pt> r0 = com.ss.android.downloadlib.addownload.model.pt.class
            monitor-enter(r0)
            com.ss.android.downloadlib.addownload.model.fw r1 = com.ss.android.downloadlib.addownload.model.fw.rg     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.downloadlib.addownload.model.fw r1 = new com.ss.android.downloadlib.addownload.model.fw     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.downloadlib.addownload.model.fw.rg = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.downloadlib.addownload.model.fw r0 = com.ss.android.downloadlib.addownload.model.fw.rg
            return r0
    }

    public void rg(int r4, int r5, com.ss.android.downloadad.api.rg.df r6) {
            r3 = this;
            if (r6 != 0) goto L3
            return
        L3:
            int r0 = r6.qx()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            r1 = 0
            java.lang.String r2 = "report_api_hijack"
            int r1 = r0.optInt(r2, r1)
            if (r1 != 0) goto L15
            return
        L15:
            int r1 = r5 - r4
            if (r4 <= 0) goto L46
            r4 = 500(0x1f4, float:7.0E-43)
            java.lang.String r2 = "check_api_hijack_version_code_diff"
            int r4 = r0.optInt(r2, r4)
            if (r1 <= r4) goto L46
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            java.lang.String r0 = "version_code_diff"
            r4.put(r0, r1)     // Catch: org.json.JSONException -> L39
            java.lang.String r0 = "installed_version_code"
            r4.put(r0, r5)     // Catch: org.json.JSONException -> L39
            java.lang.String r5 = "hijack_type"
            r0 = 1
            r4.put(r5, r0)     // Catch: org.json.JSONException -> L39
            goto L3d
        L39:
            r5 = move-exception
            r5.printStackTrace()
        L3d:
            com.ss.android.downloadlib.event.AdEventHandler r5 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r0 = "api_hijack"
            r5.df(r0, r4, r6)
        L46:
            return
    }
}
