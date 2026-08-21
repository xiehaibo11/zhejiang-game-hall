package com.ss.android.downloadlib.addownload.compliance;

class pp {
    public static void df(java.lang.String r1, long r2) {
            r0 = 0
            rg(r1, r0, r2)
            return
    }

    public static void rg(int r2, long r3) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "error_code"
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> Lf
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> Lf
            goto L13
        Lf:
            r2 = move-exception
            r2.printStackTrace()
        L13:
            com.ss.android.downloadlib.event.AdEventHandler r2 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            com.ss.android.downloadlib.addownload.model.c r1 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadlib.addownload.model.pp r3 = r1.pp(r3)
            java.lang.String r4 = "lp_compliance_error"
            r2.df(r4, r0, r3)
            return
    }

    public static void rg(int r2, com.ss.android.downloadlib.addownload.model.pp r3) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "error_code"
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> Lf
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> Lf
            goto L13
        Lf:
            r2 = move-exception
            r2.printStackTrace()
        L13:
            com.ss.android.downloadlib.event.AdEventHandler r2 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r1 = "lp_compliance_error"
            r2.df(r1, r0, r3)
            return
    }

    public static void rg(java.lang.String r1, long r2) {
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadlib.addownload.model.pp r2 = r0.pp(r2)
            boolean r3 = r2.re()
            if (r3 != 0) goto L1c
            com.ss.android.download.api.download.DownloadEventConfig r3 = r2.q
            r3.setRefer(r1)
            com.ss.android.downloadlib.event.AdEventHandler r1 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r3 = "lp_app_dialog_click"
            r1.df(r3, r2)
        L1c:
            return
    }

    public static void rg(java.lang.String r1, com.ss.android.downloadlib.addownload.model.pp r2) {
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            r0.df(r1, r2)
            return
    }

    public static void rg(java.lang.String r2, org.json.JSONObject r3, long r4) {
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            com.ss.android.downloadlib.addownload.model.c r1 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadlib.addownload.model.pp r4 = r1.pp(r4)
            r0.df(r2, r3, r4)
            return
    }
}
