package com.ss.android.downloadlib.addownload;

public class hq {
    private static com.ss.android.downloadlib.addownload.rg.q rg;


    public static com.ss.android.downloadlib.addownload.rg.q rg() {
            com.ss.android.downloadlib.addownload.rg.q r0 = com.ss.android.downloadlib.addownload.hq.rg
            return r0
    }

    public static void rg(com.ss.android.downloadlib.addownload.rg.q r0) {
            com.ss.android.downloadlib.addownload.hq.rg = r0
            return
    }

    public static boolean rg(int r2) {
            r0 = 1
            if (r2 == r0) goto L18
            r1 = 2
            if (r2 == r1) goto L18
            r1 = 3
            if (r2 == r1) goto L18
            r1 = 4
            if (r2 == r1) goto L18
            r1 = 5
            if (r2 == r1) goto L18
            r1 = 7
            if (r2 == r1) goto L18
            r1 = 8
            if (r2 != r1) goto L17
            goto L18
        L17:
            r0 = 0
        L18:
            return r0
    }

    public static boolean rg(com.ss.android.downloadad.api.rg.df r7, com.ss.android.socialbase.downloader.model.DownloadInfo r8, int r9, com.ss.android.downloadlib.addownload.q.q r10) {
            r0 = 0
            if (r7 != 0) goto Ld
            com.ss.android.downloadlib.exception.q r7 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r8 = "tryReverseWifi nativeModel null"
            r7.rg(r8)
            return r0
        Ld:
            if (r8 != 0) goto L19
            com.ss.android.downloadlib.exception.q r7 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r8 = "tryReverseWifi info null"
            r7.rg(r8)
            return r0
        L19:
            int r1 = r8.getId()
            boolean r2 = com.ss.android.downloadlib.utils.pt.df(r7)
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            r4 = 1
            java.lang.String r5 = "switch_status"
            if (r2 == 0) goto L2d
            r6 = r4
            goto L2e
        L2d:
            r6 = r0
        L2e:
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Exception -> L36
            r3.putOpt(r5, r6)     // Catch: java.lang.Exception -> L36
            goto L3a
        L36:
            r5 = move-exception
            r5.printStackTrace()
        L3a:
            com.ss.android.downloadlib.event.AdEventHandler r5 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r6 = "pause_reserve_wifi_switch_status"
            r5.rg(r6, r3, r7)
            if (r2 != 0) goto L46
            return r0
        L46:
            boolean r9 = rg(r9)
            if (r9 != 0) goto L4d
            return r0
        L4d:
            android.content.Context r9 = com.ss.android.downloadlib.addownload.bm.getContext()
            boolean r9 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isWifi(r9)
            if (r9 == 0) goto L58
            return r0
        L58:
            boolean r8 = r8.hasPauseReservedOnWifi()
            if (r8 != 0) goto L6a
            com.ss.android.downloadlib.addownload.hq$1 r8 = new com.ss.android.downloadlib.addownload.hq$1
            r8.<init>(r1, r7, r10)
            rg(r8)
            com.ss.android.downloadlib.activity.TTDelegateActivity.df(r7)
            return r4
        L6a:
            return r0
    }
}
