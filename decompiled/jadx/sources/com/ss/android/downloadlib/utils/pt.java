package com.ss.android.downloadlib.utils;

import com.heytap.mcssdk.constant.a;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.downloadlib.OrderDownloader;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class pt {
    public static JSONObject rg() {
        return com.ss.android.downloadlib.addownload.bm.rz().optJSONObject(OrderDownloader.BizType.AD);
    }

    public static JSONObject rg(DownloadModel downloadModel) {
        if (downloadModel == null) {
            return null;
        }
        if (downloadModel.isAd()) {
            return rg();
        }
        return downloadModel.getDownloadSettings();
    }

    public static DownloadSetting df(DownloadModel downloadModel) {
        return DownloadSetting.obtain(rg(downloadModel));
    }

    public static DownloadSetting rg(com.ss.android.downloadad.api.rg.rg rgVar) {
        if (rgVar == null) {
            return DownloadSetting.obtainGlobal();
        }
        if (rgVar.qx() != 0) {
            return DownloadSetting.obtain(rgVar.qx());
        }
        if (rgVar.q()) {
            return DownloadSetting.obtain(rg());
        }
        if (rgVar.r() != null) {
            return DownloadSetting.obtain(rgVar.r());
        }
        return DownloadSetting.obtainGlobal();
    }

    public static int rg(DownloadSetting downloadSetting) {
        return downloadSetting.optInt("external_storage_permission_path_type", 0);
    }

    public static int q(DownloadModel downloadModel) {
        return rg(df(downloadModel));
    }

    public static boolean df(com.ss.android.downloadad.api.rg.rg rgVar) {
        return rg(rgVar).optInt("pause_reserve_on_wifi", 0) == 1 && rgVar.z();
    }

    public static double rg(int i) {
        return DownloadSetting.obtain(i).optDouble("clean_min_install_size", 0.0d);
    }

    public static long df(int i) {
        return DownloadSetting.obtain(i).optLong("storage_min_size", 0L);
    }

    public static long q(int i) {
        return DownloadSetting.obtain(i).optLong("clean_fetch_apk_head_time_out", 800L);
    }

    public static boolean pt(int i) {
        return DownloadSetting.obtain(i).optLong("clean_fetch_apk_switch", 0L) == 1;
    }

    public static boolean pp(int i) {
        return DownloadSetting.obtain(i).optLong("clean_space_before_download_switch", 0L) == 1;
    }

    public static boolean c(int i) {
        return DownloadSetting.obtain(i).optInt("clean_space_switch", 0) == 1;
    }

    public static boolean fw(int i) {
        return DownloadSetting.obtain(i).optInt("clean_app_cache_dir", 0) == 1;
    }

    public static boolean df(DownloadSetting downloadSetting) {
        return downloadSetting != null && downloadSetting.optInt("kllk_need_rename_apk", 0) == 1;
    }

    public static boolean df() {
        return DownloadSetting.obtainGlobal().optBugFix("fix_notification_anr");
    }

    public static boolean q() {
        return com.ss.android.downloadlib.addownload.bm.rz().optInt("is_enable_start_install_again") == 1;
    }

    public static long pt() {
        long jOptLong = com.ss.android.downloadlib.addownload.bm.rz().optLong("start_install_interval");
        if (jOptLong == 0) {
            return 300000L;
        }
        return jOptLong;
    }

    public static long pp() {
        long jOptLong = com.ss.android.downloadlib.addownload.bm.rz().optLong("next_install_min_interval");
        return jOptLong == 0 ? a.q : jOptLong;
    }
}
