package com.ss.android.downloadlib.utils;

import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.socialbase.appdownloader.fw;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class pp {
    public static void rg(DownloadInfo downloadInfo, JSONObject jSONObject) {
        try {
            q(downloadInfo, jSONObject);
            com.ss.android.downloadad.api.rg.df dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo);
            if (dfVarRg == null) {
                return;
            }
            jSONObject.put(EventConstants.ExtraJson.KEY_IS_UPDATE_DOWNLOAD, dfVarRg.fl() ? 1 : 2);
            rg(dfVarRg, jSONObject);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void df(DownloadInfo downloadInfo, JSONObject jSONObject) {
        com.ss.android.downloadad.api.rg.df dfVarRg;
        if (jSONObject == null || (dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo)) == null) {
            return;
        }
        try {
            q(downloadInfo, jSONObject);
            jSONObject.putOpt(EventConstants.ExtraJson.TIME_AFTER_CLICK, Long.valueOf(System.currentTimeMillis() - dfVarRg.s()));
            jSONObject.putOpt(EventConstants.ExtraJson.CLICK_DOWNLOAD_SIZE, Long.valueOf(dfVarRg.su()));
            jSONObject.putOpt(EventConstants.ExtraJson.DOWNLOAD_LENGTH, Long.valueOf(downloadInfo.getCurBytes()));
            jSONObject.putOpt(EventConstants.ExtraJson.DOWNLOAD_APK_SIZE, Long.valueOf(downloadInfo.getTotalBytes()));
            dfVarRg.i();
            com.ss.android.downloadlib.addownload.model.ux.rg().rg(dfVarRg);
            jSONObject.put(EventConstants.ExtraJson.KEY_CLICK_PAUSE_TIMES, dfVarRg.p());
            long totalBytes = downloadInfo.getTotalBytes();
            long curBytes = downloadInfo.getCurBytes();
            jSONObject.put("download_percent", (curBytes < 0 || totalBytes <= 0) ? 0.0d : curBytes / totalBytes);
            jSONObject.put("download_status", downloadInfo.getRealStatus());
            long jCurrentTimeMillis = System.currentTimeMillis();
            long jBj = dfVarRg.bj();
            if (jBj > 0) {
                jSONObject.put(EventConstants.ExtraJson.KEY_TIME_FROM_START_DOWNLOAD, jCurrentTimeMillis - jBj);
            }
            long jLc = dfVarRg.lc();
            if (jLc > 0) {
                jSONObject.put(EventConstants.ExtraJson.KEY_TIME_FROM_DOWNLOAD_RESUME, jCurrentTimeMillis - jLc);
            }
            jSONObject.putOpt(EventConstants.ExtraJson.FAIL_STATUS, Integer.valueOf(dfVarRg.go()));
            jSONObject.putOpt(EventConstants.ExtraJson.FAIL_MSG, dfVarRg.k());
            jSONObject.put(EventConstants.ExtraJson.KEY_DOWNLOAD_FAILED_TIMES, dfVarRg.re());
            jSONObject.put(EventConstants.ExtraJson.KEY_CAN_SHOW_NOTIFICATION, com.ss.android.socialbase.appdownloader.pp.pt.rg() ? 1 : 2);
            jSONObject.put(EventConstants.ExtraJson.KEY_FIRST_SPEED_TIME, downloadInfo.getFirstSpeedTime());
            jSONObject.put(EventConstants.ExtraJson.KEY_ALL_CONNECT_TIME, downloadInfo.getAllConnectTime());
            jSONObject.put(EventConstants.ExtraJson.KEY_DOWNLOAD_PREPARE_TIME, downloadInfo.getDownloadPrepareTime());
            jSONObject.put("download_time", downloadInfo.getRealDownloadTime() + downloadInfo.getAllConnectTime() + downloadInfo.getDownloadPrepareTime());
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void q(DownloadInfo downloadInfo, JSONObject jSONObject) {
        if (downloadInfo != null) {
            try {
                jSONObject.putOpt("total_bytes", Long.valueOf(downloadInfo.getTotalBytes()));
                jSONObject.putOpt("cur_bytes", Long.valueOf(downloadInfo.getCurBytes()));
                jSONObject.putOpt("chunk_count", Integer.valueOf(downloadInfo.getChunkCount()));
                jSONObject.putOpt("app_name", downloadInfo.getTitle());
                jSONObject.putOpt("network_quality", downloadInfo.getNetworkQuality());
                jSONObject.putOpt("save_path", downloadInfo.getSavePath());
                jSONObject.putOpt("file_name", downloadInfo.getName());
                jSONObject.putOpt("download_status", Integer.valueOf(downloadInfo.getRealStatus()));
                com.ss.android.downloadad.api.rg.df dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo.getId());
                if (dfVarRg != null) {
                    jSONObject.putOpt(EventConstants.ExtraJson.CLICK_DOWNLOAD_TIME, Long.valueOf(dfVarRg.s()));
                    jSONObject.putOpt(EventConstants.ExtraJson.CLICK_DOWNLOAD_SIZE, Long.valueOf(dfVarRg.su()));
                }
            } catch (Exception e) {
                e.printStackTrace();
                return;
            }
        }
        int i = 1;
        jSONObject.putOpt(EventConstants.ExtraJson.PERMISSION_NOTIFICATION, Integer.valueOf(com.ss.android.socialbase.appdownloader.pp.pt.rg() ? 1 : 2));
        jSONObject.putOpt(EventConstants.ExtraJson.NETWORK_AVAILABLE, Integer.valueOf(DownloadUtils.isNetworkConnected(com.ss.android.downloadlib.addownload.bm.getContext()) ? 1 : 2));
        if (!DownloadUtils.isWifi(com.ss.android.downloadlib.addownload.bm.getContext())) {
            i = 2;
        }
        jSONObject.putOpt(EventConstants.ExtraJson.NETWORK_IS_WIFI, Integer.valueOf(i));
    }

    public static void rg(com.ss.android.downloadad.api.rg.df dfVar, JSONObject jSONObject) {
        if (jSONObject == null || dfVar == null) {
            return;
        }
        try {
            jSONObject.put(EventConstants.ExtraJson.KEY_IS_PATCH_APPLY_HANDLED, dfVar.j() ? 1 : 0);
            jSONObject.put(EventConstants.ExtraJson.KEY_ORIGIN_MIME_TYPE, dfVar.h());
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void rg(JSONObject jSONObject, int i) {
        if (jSONObject == null) {
            return;
        }
        JSONArray jSONArrayOptJSONArray = DownloadSetting.obtain(i).optJSONArray("ah_report_config");
        if (jSONArrayOptJSONArray != null) {
            for (int i2 = 0; i2 < jSONArrayOptJSONArray.length(); i2++) {
                try {
                    String string = jSONArrayOptJSONArray.getString(i2);
                    fw.rg rgVarRg = com.ss.android.socialbase.appdownloader.c.rg.rg(string);
                    if (rgVarRg != null) {
                        jSONObject.put(string.replaceAll("\\.", "_"), rgVarRg.c() + "_" + rgVarRg.fw());
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        }
        try {
            jSONObject.put(EventConstants.ExtraJson.KEY_IS_UNKNOWN_SOURCE_ENABLED, com.ss.android.socialbase.appdownloader.df.rg(DownloadComponentManager.getAppContext()) ? 1 : 2);
        } catch (Throwable unused) {
        }
    }

    public static JSONObject rg(JSONObject jSONObject, com.ss.android.downloadad.api.rg.rg rgVar) {
        b.rg(jSONObject, EventConstants.ExtraJson.OPEN_URL, b.rg(rgVar.c(), "open_url_not_exist"));
        return jSONObject;
    }

    public static JSONObject df(JSONObject jSONObject, com.ss.android.downloadad.api.rg.rg rgVar) {
        b.rg(jSONObject, com.ss.android.socialbase.appdownloader.c.pt.rz().replaceAll("\\.", "_"), Integer.valueOf(b.df(com.ss.android.downloadlib.addownload.bm.getContext(), com.ss.android.socialbase.appdownloader.c.pt.rz())));
        return jSONObject;
    }
}
