package com.ss.android.downloadlib.addownload.q;

public class pp implements com.ss.android.downloadlib.addownload.q.pt {
    public pp() {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean df(int r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)
            r0 = 0
            java.lang.String r1 = "pause_optimise_mistake_click_interval_switch"
            int r3 = r3.optInt(r1, r0)
            r1 = 1
            if (r3 != r1) goto Lf
            r0 = r1
        Lf:
            return r0
    }

    private long rg(int r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)
            java.lang.String r0 = "pause_optimise_mistake_click_interval"
            r1 = 300(0x12c, float:4.2E-43)
            int r3 = r3.optInt(r0, r1)
            long r0 = (long) r3
            return r0
    }

    @Override
    public boolean rg(com.ss.android.downloadad.api.rg.df r5, int r6, com.ss.android.downloadlib.addownload.q.q r7) {
            r4 = this;
            r6 = 0
            if (r5 != 0) goto L4
            return r6
        L4:
            int r7 = r5.qx()
            boolean r7 = r4.df(r7)
            if (r7 != 0) goto Lf
            return r6
        Lf:
            long r0 = r5.s()
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r0
            int r7 = r5.qx()
            long r0 = r4.rg(r7)
            int r7 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r7 > 0) goto L40
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
            java.lang.String r7 = "pause_optimise_type"
            java.lang.String r0 = "mistake_click"
            r6.putOpt(r7, r0)     // Catch: org.json.JSONException -> L31
            goto L35
        L31:
            r7 = move-exception
            r7.printStackTrace()
        L35:
            com.ss.android.downloadlib.event.AdEventHandler r7 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r0 = "pause_optimise"
            r7.rg(r0, r6, r5)
            r5 = 1
            return r5
        L40:
            return r6
    }
}
