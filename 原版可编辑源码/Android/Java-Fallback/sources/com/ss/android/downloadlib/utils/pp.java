package com.ss.android.downloadlib.utils;

public class pp {
    public static org.json.JSONObject df(org.json.JSONObject r2, com.ss.android.downloadad.api.rg.rg r3) {
            java.lang.String r3 = com.ss.android.socialbase.appdownloader.c.pt.rz()
            java.lang.String r0 = "\\."
            java.lang.String r1 = "_"
            java.lang.String r3 = r3.replaceAll(r0, r1)
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.String r1 = com.ss.android.socialbase.appdownloader.c.pt.rz()
            int r0 = com.ss.android.downloadlib.utils.b.df(r0, r1)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.ss.android.downloadlib.utils.b.rg(r2, r3, r0)
            return r2
    }

    public static void df(com.ss.android.socialbase.downloader.model.DownloadInfo r8, org.json.JSONObject r9) {
            if (r9 != 0) goto L3
            return
        L3:
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r0 = r0.rg(r8)
            if (r0 != 0) goto Le
            return
        Le:
            q(r8, r9)     // Catch: java.lang.Throwable -> L100
            java.lang.String r1 = "time_after_click"
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L100
            long r4 = r0.s()     // Catch: java.lang.Throwable -> L100
            long r2 = r2 - r4
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L100
            r9.putOpt(r1, r2)     // Catch: java.lang.Throwable -> L100
            java.lang.String r1 = "click_download_size"
            long r2 = r0.su()     // Catch: java.lang.Throwable -> L100
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L100
            r9.putOpt(r1, r2)     // Catch: java.lang.Throwable -> L100
            java.lang.String r1 = "download_length"
            long r2 = r8.getCurBytes()     // Catch: java.lang.Throwable -> L100
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L100
            r9.putOpt(r1, r2)     // Catch: java.lang.Throwable -> L100
            java.lang.String r1 = "download_apk_size"
            long r2 = r8.getTotalBytes()     // Catch: java.lang.Throwable -> L100
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L100
            r9.putOpt(r1, r2)     // Catch: java.lang.Throwable -> L100
            r0.i()     // Catch: java.lang.Throwable -> L100
            com.ss.android.downloadlib.addownload.model.ux r1 = com.ss.android.downloadlib.addownload.model.ux.rg()     // Catch: java.lang.Throwable -> L100
            r1.rg(r0)     // Catch: java.lang.Throwable -> L100
            java.lang.String r1 = "click_pause_times"
            int r2 = r0.p()     // Catch: java.lang.Throwable -> L100
            r9.put(r1, r2)     // Catch: java.lang.Throwable -> L100
            long r1 = r8.getTotalBytes()     // Catch: java.lang.Throwable -> L100
            long r3 = r8.getCurBytes()     // Catch: java.lang.Throwable -> L100
            r5 = 0
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 < 0) goto L73
            int r7 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r7 <= 0) goto L73
            double r3 = (double) r3     // Catch: java.lang.Throwable -> L100
            double r1 = (double) r1     // Catch: java.lang.Throwable -> L100
            double r3 = r3 / r1
            goto L75
        L73:
            r3 = 0
        L75:
            java.lang.String r1 = "download_percent"
            r9.put(r1, r3)     // Catch: java.lang.Throwable -> L100
            java.lang.String r1 = "download_status"
            int r2 = r8.getRealStatus()     // Catch: java.lang.Throwable -> L100
            r9.put(r1, r2)     // Catch: java.lang.Throwable -> L100
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L100
            long r3 = r0.bj()     // Catch: java.lang.Throwable -> L100
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 <= 0) goto L96
            java.lang.String r7 = "time_from_start_download"
            long r3 = r1 - r3
            r9.put(r7, r3)     // Catch: java.lang.Throwable -> L100
        L96:
            long r3 = r0.lc()     // Catch: java.lang.Throwable -> L100
            int r5 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r5 <= 0) goto La4
            java.lang.String r5 = "time_from_download_resume"
            long r1 = r1 - r3
            r9.put(r5, r1)     // Catch: java.lang.Throwable -> L100
        La4:
            java.lang.String r1 = "fail_status"
            int r2 = r0.go()     // Catch: java.lang.Throwable -> L100
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L100
            r9.putOpt(r1, r2)     // Catch: java.lang.Throwable -> L100
            java.lang.String r1 = "fail_msg"
            java.lang.String r2 = r0.k()     // Catch: java.lang.Throwable -> L100
            r9.putOpt(r1, r2)     // Catch: java.lang.Throwable -> L100
            java.lang.String r1 = "download_failed_times"
            int r0 = r0.re()     // Catch: java.lang.Throwable -> L100
            r9.put(r1, r0)     // Catch: java.lang.Throwable -> L100
            java.lang.String r0 = "can_show_notification"
            boolean r1 = com.ss.android.socialbase.appdownloader.pp.pt.rg()     // Catch: java.lang.Throwable -> L100
            if (r1 == 0) goto Lcd
            r1 = 1
            goto Lce
        Lcd:
            r1 = 2
        Lce:
            r9.put(r0, r1)     // Catch: java.lang.Throwable -> L100
            java.lang.String r0 = "first_speed_time"
            long r1 = r8.getFirstSpeedTime()     // Catch: java.lang.Throwable -> L100
            r9.put(r0, r1)     // Catch: java.lang.Throwable -> L100
            java.lang.String r0 = "all_connect_time"
            long r1 = r8.getAllConnectTime()     // Catch: java.lang.Throwable -> L100
            r9.put(r0, r1)     // Catch: java.lang.Throwable -> L100
            java.lang.String r0 = "download_prepare_time"
            long r1 = r8.getDownloadPrepareTime()     // Catch: java.lang.Throwable -> L100
            r9.put(r0, r1)     // Catch: java.lang.Throwable -> L100
            java.lang.String r0 = "download_time"
            long r1 = r8.getRealDownloadTime()     // Catch: java.lang.Throwable -> L100
            long r3 = r8.getAllConnectTime()     // Catch: java.lang.Throwable -> L100
            long r1 = r1 + r3
            long r3 = r8.getDownloadPrepareTime()     // Catch: java.lang.Throwable -> L100
            long r1 = r1 + r3
            r9.put(r0, r1)     // Catch: java.lang.Throwable -> L100
            goto L104
        L100:
            r8 = move-exception
            r8.printStackTrace()
        L104:
            return
    }

    public static void q(com.ss.android.socialbase.downloader.model.DownloadInfo r3, org.json.JSONObject r4) {
            if (r3 == 0) goto L82
            java.lang.String r0 = "total_bytes"
            long r1 = r3.getTotalBytes()     // Catch: java.lang.Exception -> Lc2
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Exception -> Lc2
            r4.putOpt(r0, r1)     // Catch: java.lang.Exception -> Lc2
            java.lang.String r0 = "cur_bytes"
            long r1 = r3.getCurBytes()     // Catch: java.lang.Exception -> Lc2
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Exception -> Lc2
            r4.putOpt(r0, r1)     // Catch: java.lang.Exception -> Lc2
            java.lang.String r0 = "chunk_count"
            int r1 = r3.getChunkCount()     // Catch: java.lang.Exception -> Lc2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> Lc2
            r4.putOpt(r0, r1)     // Catch: java.lang.Exception -> Lc2
            java.lang.String r0 = "app_name"
            java.lang.String r1 = r3.getTitle()     // Catch: java.lang.Exception -> Lc2
            r4.putOpt(r0, r1)     // Catch: java.lang.Exception -> Lc2
            java.lang.String r0 = "network_quality"
            java.lang.String r1 = r3.getNetworkQuality()     // Catch: java.lang.Exception -> Lc2
            r4.putOpt(r0, r1)     // Catch: java.lang.Exception -> Lc2
            java.lang.String r0 = "save_path"
            java.lang.String r1 = r3.getSavePath()     // Catch: java.lang.Exception -> Lc2
            r4.putOpt(r0, r1)     // Catch: java.lang.Exception -> Lc2
            java.lang.String r0 = "file_name"
            java.lang.String r1 = r3.getName()     // Catch: java.lang.Exception -> Lc2
            r4.putOpt(r0, r1)     // Catch: java.lang.Exception -> Lc2
            java.lang.String r0 = "download_status"
            int r1 = r3.getRealStatus()     // Catch: java.lang.Exception -> Lc2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> Lc2
            r4.putOpt(r0, r1)     // Catch: java.lang.Exception -> Lc2
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()     // Catch: java.lang.Exception -> Lc2
            int r3 = r3.getId()     // Catch: java.lang.Exception -> Lc2
            com.ss.android.downloadad.api.rg.df r3 = r0.rg(r3)     // Catch: java.lang.Exception -> Lc2
            if (r3 == 0) goto L82
            java.lang.String r0 = "click_download_time"
            long r1 = r3.s()     // Catch: java.lang.Exception -> Lc2
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Exception -> Lc2
            r4.putOpt(r0, r1)     // Catch: java.lang.Exception -> Lc2
            java.lang.String r0 = "click_download_size"
            long r1 = r3.su()     // Catch: java.lang.Exception -> Lc2
            java.lang.Long r3 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Exception -> Lc2
            r4.putOpt(r0, r3)     // Catch: java.lang.Exception -> Lc2
        L82:
            java.lang.String r3 = "permission_notification"
            boolean r0 = com.ss.android.socialbase.appdownloader.pp.pt.rg()     // Catch: java.lang.Exception -> Lc2
            r1 = 1
            r2 = 2
            if (r0 == 0) goto L8e
            r0 = r1
            goto L8f
        L8e:
            r0 = r2
        L8f:
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> Lc2
            r4.putOpt(r3, r0)     // Catch: java.lang.Exception -> Lc2
            java.lang.String r3 = "network_available"
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> Lc2
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isNetworkConnected(r0)     // Catch: java.lang.Exception -> Lc2
            if (r0 == 0) goto La4
            r0 = r1
            goto La5
        La4:
            r0 = r2
        La5:
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> Lc2
            r4.putOpt(r3, r0)     // Catch: java.lang.Exception -> Lc2
            java.lang.String r3 = "network_is_wifi"
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> Lc2
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isWifi(r0)     // Catch: java.lang.Exception -> Lc2
            if (r0 == 0) goto Lb9
            goto Lba
        Lb9:
            r1 = r2
        Lba:
            java.lang.Integer r0 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> Lc2
            r4.putOpt(r3, r0)     // Catch: java.lang.Exception -> Lc2
            goto Lc6
        Lc2:
            r3 = move-exception
            r3.printStackTrace()
        Lc6:
            return
    }

    public static org.json.JSONObject rg(org.json.JSONObject r2, com.ss.android.downloadad.api.rg.rg r3) {
            r0 = 2
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.String r3 = r3.c()
            r1 = 0
            r0[r1] = r3
            r3 = 1
            java.lang.String r1 = "open_url_not_exist"
            r0[r3] = r1
            java.lang.String r3 = com.ss.android.downloadlib.utils.b.rg(r0)
            java.lang.String r0 = "open_url"
            com.ss.android.downloadlib.utils.b.rg(r2, r0, r3)
            return r2
    }

    public static void rg(com.ss.android.downloadad.api.rg.df r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            if (r2 != 0) goto L6
            return
        L6:
            java.lang.String r0 = "is_patch_apply_handled"
            boolean r1 = r2.j()     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto L10
            r1 = 1
            goto L11
        L10:
            r1 = 0
        L11:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r0 = "origin_mime_type"
            java.lang.String r2 = r2.h()     // Catch: java.lang.Throwable -> L1e
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> L1e
            goto L22
        L1e:
            r2 = move-exception
            r2.printStackTrace()
        L22:
            return
    }

    public static void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r2, org.json.JSONObject r3) {
            q(r2, r3)     // Catch: java.lang.Throwable -> L20
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()     // Catch: java.lang.Throwable -> L20
            com.ss.android.downloadad.api.rg.df r2 = r0.rg(r2)     // Catch: java.lang.Throwable -> L20
            if (r2 != 0) goto Le
            return
        Le:
            java.lang.String r0 = "is_update_download"
            boolean r1 = r2.fl()     // Catch: java.lang.Throwable -> L20
            if (r1 == 0) goto L18
            r1 = 1
            goto L19
        L18:
            r1 = 2
        L19:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L20
            rg(r2, r3)     // Catch: java.lang.Throwable -> L20
            goto L24
        L20:
            r2 = move-exception
            r2.printStackTrace()
        L24:
            return
    }

    public static void rg(org.json.JSONObject r6, int r7) {
            java.lang.String r0 = "_"
            if (r6 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r7 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r7)
            java.lang.String r1 = "ah_report_config"
            org.json.JSONArray r7 = r7.optJSONArray(r1)
            if (r7 == 0) goto L4c
            r1 = 0
        L12:
            int r2 = r7.length()     // Catch: java.lang.Throwable -> L48
            if (r1 >= r2) goto L4c
            java.lang.String r2 = r7.getString(r1)     // Catch: java.lang.Throwable -> L48
            com.ss.android.socialbase.appdownloader.fw$rg r3 = com.ss.android.socialbase.appdownloader.c.rg.rg(r2)     // Catch: java.lang.Throwable -> L48
            if (r3 == 0) goto L45
            java.lang.String r4 = "\\."
            java.lang.String r2 = r2.replaceAll(r4, r0)     // Catch: java.lang.Throwable -> L48
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L48
            r4.<init>()     // Catch: java.lang.Throwable -> L48
            int r5 = r3.c()     // Catch: java.lang.Throwable -> L48
            r4.append(r5)     // Catch: java.lang.Throwable -> L48
            r4.append(r0)     // Catch: java.lang.Throwable -> L48
            java.lang.String r3 = r3.fw()     // Catch: java.lang.Throwable -> L48
            r4.append(r3)     // Catch: java.lang.Throwable -> L48
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L48
            r6.put(r2, r3)     // Catch: java.lang.Throwable -> L48
        L45:
            int r1 = r1 + 1
            goto L12
        L48:
            r7 = move-exception
            r7.printStackTrace()
        L4c:
            android.content.Context r7 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Throwable -> L5e
            boolean r7 = com.ss.android.socialbase.appdownloader.df.rg(r7)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r0 = "is_unknown_source_enabled"
            if (r7 == 0) goto L5a
            r7 = 1
            goto L5b
        L5a:
            r7 = 2
        L5b:
            r6.put(r0, r7)     // Catch: java.lang.Throwable -> L5e
        L5e:
            return
    }
}
