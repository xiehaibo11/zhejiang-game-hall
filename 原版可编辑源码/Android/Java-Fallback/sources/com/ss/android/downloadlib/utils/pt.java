package com.ss.android.downloadlib.utils;

public class pt {
    public static boolean c(int r2) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r2)
            r0 = 0
            java.lang.String r1 = "clean_space_switch"
            int r2 = r2.optInt(r1, r0)
            r1 = 1
            if (r2 != r1) goto Lf
            r0 = r1
        Lf:
            return r0
    }

    public static long df(int r3) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)
            java.lang.String r0 = "storage_min_size"
            r1 = 0
            long r0 = r3.optLong(r0, r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.setting.DownloadSetting df(com.ss.android.download.api.download.DownloadModel r0) {
            org.json.JSONObject r0 = rg(r0)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            return r0
    }

    public static boolean df() {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r1 = "fix_notification_anr"
            boolean r0 = r0.optBugFix(r1)
            if (r0 == 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public static boolean df(com.ss.android.downloadad.api.rg.rg r3) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = rg(r3)
            r1 = 0
            java.lang.String r2 = "pause_reserve_on_wifi"
            int r0 = r0.optInt(r2, r1)
            r2 = 1
            if (r0 != r2) goto L15
            boolean r3 = r3.z()
            if (r3 == 0) goto L15
            r1 = r2
        L15:
            return r1
    }

    public static boolean df(com.ss.android.socialbase.downloader.setting.DownloadSetting r2) {
            r0 = 0
            if (r2 == 0) goto Ld
            java.lang.String r1 = "kllk_need_rename_apk"
            int r2 = r2.optInt(r1, r0)
            r1 = 1
            if (r2 != r1) goto Ld
            return r1
        Ld:
            return r0
    }

    public static boolean fw(int r2) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r2)
            r0 = 0
            java.lang.String r1 = "clean_app_cache_dir"
            int r2 = r2.optInt(r1, r0)
            r1 = 1
            if (r2 != r1) goto Lf
            r0 = r1
        Lf:
            return r0
    }

    public static long pp() {
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "next_install_min_interval"
            long r0 = r0.optLong(r1)
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L12
            r0 = 10000(0x2710, double:4.9407E-320)
        L12:
            return r0
    }

    public static boolean pp(int r4) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r4)
            java.lang.String r0 = "clean_space_before_download_switch"
            r1 = 0
            long r0 = r4.optLong(r0, r1)
            r2 = 1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L14
            r4 = 1
            goto L15
        L14:
            r4 = 0
        L15:
            return r4
    }

    public static long pt() {
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "start_install_interval"
            long r0 = r0.optLong(r1)
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L13
            r0 = 300000(0x493e0, double:1.482197E-318)
        L13:
            return r0
    }

    public static boolean pt(int r4) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r4)
            java.lang.String r0 = "clean_fetch_apk_switch"
            r1 = 0
            long r0 = r4.optLong(r0, r1)
            r2 = 1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L14
            r4 = 1
            goto L15
        L14:
            r4 = 0
        L15:
            return r4
    }

    public static int q(com.ss.android.download.api.download.DownloadModel r0) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = df(r0)
            int r0 = rg(r0)
            return r0
    }

    public static long q(int r3) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)
            java.lang.String r0 = "clean_fetch_apk_head_time_out"
            r1 = 800(0x320, double:3.953E-321)
            long r0 = r3.optLong(r0, r1)
            return r0
    }

    public static boolean q() {
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "is_enable_start_install_again"
            int r0 = r0.optInt(r1)
            r1 = 1
            if (r0 != r1) goto Le
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    public static double rg(int r3) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)
            java.lang.String r0 = "clean_min_install_size"
            r1 = 0
            double r0 = r3.optDouble(r0, r1)
            return r0
    }

    public static int rg(com.ss.android.socialbase.downloader.setting.DownloadSetting r2) {
            java.lang.String r0 = "external_storage_permission_path_type"
            r1 = 0
            int r2 = r2.optInt(r0, r1)
            return r2
    }

    public static com.ss.android.socialbase.downloader.setting.DownloadSetting rg(com.ss.android.downloadad.api.rg.rg r1) {
            if (r1 != 0) goto L7
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            return r1
        L7:
            int r0 = r1.qx()
            if (r0 == 0) goto L16
            int r1 = r1.qx()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)
            return r1
        L16:
            boolean r0 = r1.q()
            if (r0 == 0) goto L25
            org.json.JSONObject r1 = rg()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)
            return r1
        L25:
            org.json.JSONObject r0 = r1.r()
            if (r0 == 0) goto L34
            org.json.JSONObject r1 = r1.r()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)
            return r1
        L34:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            return r1
    }

    public static org.json.JSONObject rg() {
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "ad"
            org.json.JSONObject r0 = r0.optJSONObject(r1)
            return r0
    }

    public static org.json.JSONObject rg(com.ss.android.download.api.download.DownloadModel r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            boolean r0 = r1.isAd()
            if (r0 == 0) goto Lf
            org.json.JSONObject r1 = rg()
            return r1
        Lf:
            org.json.JSONObject r1 = r1.getDownloadSettings()
            return r1
    }
}
