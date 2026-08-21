package com.ss.android.downloadlib;

import android.content.Intent;
import android.content.pm.PackageInfo;
import android.os.Environment;
import android.os.SystemClock;
import android.text.TextUtils;
import android.util.Pair;
import com.heytap.mcssdk.constant.a;
import com.kwad.library.solder.lib.ext.PluginError;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.addownload.model.pt;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.appdownloader.df;
import com.ss.android.socialbase.downloader.common.AppStatusManager;
import com.ss.android.socialbase.downloader.constants.DownloadStatus;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.ss.android.socialbase.downloader.depend.IOpenInstallerListener;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.logger.Logger;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.network.NetTrafficManager;
import com.ss.android.socialbase.downloader.notification.DownloadNotificationManager;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.io.File;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class rg implements com.ss.android.downloadad.api.rg, df.q, AppStatusManager.AppStatusChangeListener, IOpenInstallerListener {
    private static volatile rg pt;
    private static String rg = rg.class.getSimpleName();
    private long df;
    private df q;

    private rg() {
        com.ss.android.socialbase.appdownloader.df.rg(this);
        AppStatusManager.getInstance().registerAppSwitchListener(this);
    }

    public static rg rg() {
        if (pt == null) {
            synchronized (rg.class) {
                if (pt == null) {
                    pt = new rg();
                }
            }
        }
        return pt;
    }

    public static synchronized void rg(DownloadInfo downloadInfo, com.ss.android.downloadad.api.rg.df dfVar) {
        if (downloadInfo == null) {
            com.ss.android.downloadlib.exception.q.rg().rg("onDownloadFinish info null");
            return;
        }
        if (dfVar == null) {
            com.ss.android.downloadlib.exception.q.rg().rg("onDownloadFinish nativeModel null");
            return;
        }
        if (dfVar.lu() != 1) {
            return;
        }
        com.ss.android.downloadlib.q.ux.rg().pt(dfVar);
        String strQ = q(downloadInfo, dfVar);
        com.ss.android.downloadlib.addownload.model.c.rg().df(downloadInfo.getUrl(), strQ);
        Map<Long, com.ss.android.downloadad.api.rg.df> mapRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo.getUrl(), strQ);
        dfVar.c(System.currentTimeMillis());
        dfVar.pp(2);
        dfVar.df(strQ);
        mapRg.put(Long.valueOf(dfVar.df()), dfVar);
        com.ss.android.downloadlib.addownload.model.ux.rg().rg(mapRg.values());
        df(dfVar);
        fw.rg().rg(downloadInfo, strQ);
        if (AdBaseConstants.MIME_APK.equals(downloadInfo.getMimeType())) {
            rg().rg(dfVar);
            rg().df(downloadInfo, dfVar);
            if (dfVar.cd()) {
                com.ss.android.downloadlib.addownload.rg.rg.rg().rg(downloadInfo.getId(), dfVar.df(), dfVar.hq(), strQ, downloadInfo.getTitle(), dfVar.pt(), downloadInfo.getTargetFilePath());
            }
            com.ss.android.downloadlib.addownload.pt.rg.rg(downloadInfo, dfVar.df(), dfVar.pt(), strQ);
        }
    }

    public synchronized void rg(final String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (b.rg()) {
            throw new RuntimeException("handleAppInstalled in main thread.");
        }
        final com.ss.android.downloadad.api.rg.df dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(str);
        if (dfVarRg == null) {
            com.ss.android.downloadlib.addownload.model.pt.rg().rg(str);
            return;
        }
        com.ss.android.downloadlib.addownload.pp ppVarRg = fw.rg().rg(dfVarRg.rg());
        if (ppVarRg != null) {
            ppVarRg.c();
        }
        if (dfVarRg.q.get()) {
            return;
        }
        if (DownloadSetting.obtain(dfVarRg.qx()).optInt("notification_opt_2") == 1) {
            DownloadNotificationManager.getInstance().cancelNotification(dfVarRg.qx());
        }
        new com.ss.android.downloadlib.df.df().rg(dfVarRg, new com.ss.android.downloadlib.df.fw() {
            @Override
            public void rg(boolean z) {
                Logger.d(rg.rg, "appBackForeground->" + z);
                if (z) {
                    if (!(com.ss.android.downloadlib.df.c.q(dfVarRg) ? com.ss.android.downloadlib.df.rg.rg(str, dfVarRg) : false) && com.ss.android.downloadlib.df.c.pt(dfVarRg) && dfVarRg.ev() == 4) {
                        com.ss.android.downloadlib.addownload.rg.rg.rg().rg(dfVarRg);
                        return;
                    }
                    return;
                }
                if (com.ss.android.downloadlib.df.rg.rg(str, dfVarRg) || dfVarRg.ev() != 4) {
                    return;
                }
                com.ss.android.downloadlib.addownload.rg.rg.rg().rg(dfVarRg);
            }
        }, com.ss.android.downloadlib.utils.pt.rg(dfVarRg).optInt("try_applink_delay_after_installed", 0));
        com.ss.android.downloadlib.q.ux.rg().c(dfVarRg);
        rg(str, dfVarRg);
        com.ss.android.downloadlib.addownload.rg.rg.rg().df(str);
        DownloadInfo downloadInfoRg = rg((List<DownloadInfo>) Downloader.getInstance(bm.getContext()).getSuccessedDownloadInfosWithMimeType(AdBaseConstants.MIME_APK), str);
        if (downloadInfoRg != null) {
            if (DownloadSetting.obtain(downloadInfoRg.getId()).optInt(DownloadSettingKeys.NO_HIDE_NOTIFICATION) != 1) {
                DownloadNotificationManager.getInstance().hideNotification(downloadInfoRg.getId());
            }
            fw.rg().df(downloadInfoRg, str);
            com.ss.android.downloadlib.addownload.df.pt.rg(downloadInfoRg);
        } else {
            fw.rg().df(null, str);
        }
    }

    void rg(DownloadInfo downloadInfo, com.ss.android.downloadad.api.rg.df dfVar, int i) {
        long jMax;
        if (downloadInfo == null || dfVar == null) {
            return;
        }
        df();
        long jCurrentTimeMillis = System.currentTimeMillis();
        dfVar.df(jCurrentTimeMillis);
        dfVar.fw(b.rg(Environment.getDataDirectory(), -1L));
        if (i != 2000) {
            jMax = 2000;
        } else {
            long jOptLong = DownloadSetting.obtain(downloadInfo.getId()).optLong("check_install_failed_delay_time", 120000L);
            if (jOptLong < 0) {
                return;
            } else {
                jMax = Math.max(jOptLong, 30000L);
            }
        }
        long j = jMax;
        df dfVar2 = new df(dfVar.df(), downloadInfo.getId(), jCurrentTimeMillis, i);
        pt.rg().rg(dfVar2, j);
        this.q = dfVar2;
        com.ss.android.downloadlib.addownload.model.ux.rg().rg(dfVar);
    }

    private static class df implements Runnable {
        private int df;
        private long pp;
        private int pt;
        private long q;
        private long rg;

        private df(long j, int i, long j2, int i2) {
            this.rg = j;
            this.df = i;
            this.q = j2;
            this.pt = i2;
        }

        private void df() {
            this.pp = System.currentTimeMillis();
        }

        @Override
        public void run() {
            try {
                if (rg()) {
                    rg.rg().rg(this.rg, this.df);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }

        /* JADX WARN: Can't wrap try/catch for region: R(21:12|(1:19)(20:16|(0)|21|52|22|23|54|24|(1:26)|27|(1:29)(1:30)|31|(1:34)|35|(1:37)(1:38)|39|(1:41)|42|49|50)|20|21|52|22|23|54|24|(0)|27|(0)(0)|31|(1:34)|35|(0)(0)|39|(0)|42|49|50) */
        /* JADX WARN: Code restructure failed: missing block: B:44:0x00f1, code lost:
        
            r0 = e;
         */
        /* JADX WARN: Code restructure failed: missing block: B:46:0x00f3, code lost:
        
            r0 = e;
         */
        /* JADX WARN: Code restructure failed: missing block: B:47:0x00f4, code lost:
        
            r3 = r6;
         */
        /* JADX WARN: Code restructure failed: missing block: B:48:0x00f6, code lost:
        
            r0.printStackTrace();
         */
        /* JADX WARN: Removed duplicated region for block: B:26:0x00ad A[Catch: Exception -> 0x00f1, TryCatch #1 {Exception -> 0x00f1, blocks: (B:24:0x008c, B:26:0x00ad, B:31:0x00c0, B:34:0x00cd, B:39:0x00dc, B:42:0x00ed), top: B:54:0x008c }] */
        /* JADX WARN: Removed duplicated region for block: B:29:0x00bc  */
        /* JADX WARN: Removed duplicated region for block: B:30:0x00bf  */
        /* JADX WARN: Removed duplicated region for block: B:37:0x00d8  */
        /* JADX WARN: Removed duplicated region for block: B:38:0x00db  */
        /* JADX WARN: Removed duplicated region for block: B:41:0x00eb  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        boolean rg() {
            DownloadInfo downloadInfo;
            double d;
            JSONObject jSONObject;
            com.ss.android.downloadad.api.rg.df dfVarPt = com.ss.android.downloadlib.addownload.model.c.rg().pt(this.rg);
            boolean z = false;
            if (dfVarPt == null || b.df(dfVarPt) || dfVarPt.q.get() || (downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(dfVarPt.qx())) == null) {
                return false;
            }
            long jAx = dfVarPt.ax();
            long jRg = b.rg(Environment.getDataDirectory());
            long jMin = Math.min(524288000L, jRg / 10);
            long totalBytes = downloadInfo.getTotalBytes();
            double d2 = totalBytes;
            double d3 = jMin + (2.5d * d2);
            if (jAx > -1 && totalBytes > -1) {
                d = d2;
                if (jAx >= d3) {
                }
                boolean zRg = com.ss.android.socialbase.appdownloader.df.rg(bm.getContext());
                JSONObject jSONObject2 = new JSONObject();
                int iRg = rg(z, dfVarPt, downloadInfo, zRg, jSONObject2);
                this.pt = iRg;
                jSONObject = jSONObject2;
                jSONObject.putOpt(EventConstants.ExtraJson.FAIL_STATUS, Integer.valueOf(iRg));
                jSONObject.putOpt("available_space", Long.valueOf(jAx / 1048576));
                jSONObject.putOpt(EventConstants.ExtraJson.TOTAL_SPACE, Long.valueOf(jRg / 1048576));
                if (totalBytes > 0) {
                    jSONObject.putOpt("package_size", Long.valueOf(totalBytes / 1048576));
                }
                jSONObject.putOpt(EventConstants.ExtraJson.SPACE_ENOUGH, Integer.valueOf(!z ? 1 : 2));
                if (jAx > 0 && totalBytes > 0) {
                    jSONObject.put(EventConstants.ExtraJson.KEY_AVAILABLE_SPACE_RATIO, jAx / d);
                }
                jSONObject.putOpt(EventConstants.ExtraJson.PERMISSION_UNKNOWN_SOURCE_INSTALL, Integer.valueOf(!zRg ? 1 : 2));
                jSONObject.put(EventConstants.ExtraJson.KEY_IS_UPDATE_DOWNLOAD, dfVarPt.fl() ? 1 : 2);
                AdEventHandler.rg().df(EventConstants.Label.INSTALL_FAILED, jSONObject, dfVarPt);
                return true;
            }
            d = d2;
            z = true;
            boolean zRg2 = com.ss.android.socialbase.appdownloader.df.rg(bm.getContext());
            JSONObject jSONObject22 = new JSONObject();
            int iRg2 = rg(z, dfVarPt, downloadInfo, zRg2, jSONObject22);
            this.pt = iRg2;
            jSONObject = jSONObject22;
            jSONObject.putOpt(EventConstants.ExtraJson.FAIL_STATUS, Integer.valueOf(iRg2));
            jSONObject.putOpt("available_space", Long.valueOf(jAx / 1048576));
            jSONObject.putOpt(EventConstants.ExtraJson.TOTAL_SPACE, Long.valueOf(jRg / 1048576));
            if (totalBytes > 0) {
            }
            jSONObject.putOpt(EventConstants.ExtraJson.SPACE_ENOUGH, Integer.valueOf(!z ? 1 : 2));
            if (jAx > 0) {
                jSONObject.put(EventConstants.ExtraJson.KEY_AVAILABLE_SPACE_RATIO, jAx / d);
            }
            jSONObject.putOpt(EventConstants.ExtraJson.PERMISSION_UNKNOWN_SOURCE_INSTALL, Integer.valueOf(!zRg2 ? 1 : 2));
            jSONObject.put(EventConstants.ExtraJson.KEY_IS_UPDATE_DOWNLOAD, dfVarPt.fl() ? 1 : 2);
            AdEventHandler.rg().df(EventConstants.Label.INSTALL_FAILED, jSONObject, dfVarPt);
            return true;
        }

        private int rg(boolean z, com.ss.android.downloadad.api.rg.df dfVar, DownloadInfo downloadInfo, boolean z2, JSONObject jSONObject) {
            DownloadSetting downloadSettingObtain = DownloadSetting.obtain(downloadInfo.getId());
            int i = 1;
            if (downloadSettingObtain.optInt("install_failed_check_ttmd5", 1) == 1) {
                int iCheckMd5Status = downloadInfo.checkMd5Status();
                try {
                    jSONObject.put(EventConstants.ExtraJson.TTMD5_STATUS, iCheckMd5Status);
                } catch (Throwable unused) {
                }
                if (!DownloadUtils.isMd5Valid(iCheckMd5Status)) {
                    return 2005;
                }
            }
            int i2 = this.pt;
            if (i2 != 2000) {
                return i2;
            }
            if (downloadSettingObtain.optInt("install_failed_check_signature", 1) == 1 && b.pt(bm.getContext(), dfVar.pp())) {
                if (!b.rg(b.ux(bm.getContext(), downloadInfo.getTargetFilePath()), b.fw(bm.getContext(), dfVar.pp()))) {
                    return PluginError.ERROR_UPD_REQUEST;
                }
            }
            if (!z) {
                return 2002;
            }
            long j = this.pp;
            long j2 = this.q;
            if (j <= j2) {
                return 2000;
            }
            try {
                jSONObject.put(EventConstants.ExtraJson.KEY_INSTALL_TIME, j - j2);
                if (dfVar.d() <= this.q) {
                    i = 0;
                }
                jSONObject.put(EventConstants.ExtraJson.KEY_INSTALL_AGAIN, i);
            } catch (Throwable unused2) {
            }
            return !z2 ? 2003 : 2004;
        }
    }

    public void rg(final long j, int i) {
        long jOptLong = DownloadSetting.obtain(i).optLong("check_install_finish_hijack_delay_time", a.h);
        if (jOptLong < 0) {
            return;
        }
        pt.rg().rg(new Runnable() {
            @Override
            public void run() {
                rg.rg().rg(j);
            }
        }, Math.max(jOptLong, 300000L));
    }

    public void rg(long j) {
        pt.rg rgVarRg;
        int iIntValue;
        try {
            com.ss.android.downloadad.api.rg.df dfVarPt = com.ss.android.downloadlib.addownload.model.c.rg().pt(j);
            if (dfVarPt != null && !b.df(dfVarPt) && !dfVarPt.q.get()) {
                Pair<pt.rg, Integer> pairDf = com.ss.android.downloadlib.addownload.model.pt.rg().df(dfVarPt);
                if (pairDf != null) {
                    rgVarRg = (pt.rg) pairDf.first;
                    iIntValue = ((Integer) pairDf.second).intValue();
                } else {
                    rgVarRg = com.ss.android.downloadlib.addownload.model.pt.rg().rg(dfVarPt);
                    iIntValue = -1;
                }
                if (rgVarRg == null) {
                    return;
                }
                com.ss.android.downloadlib.addownload.model.pt.rg().df(rgVarRg.rg);
                JSONObject jSONObject = new JSONObject();
                jSONObject.put(EventConstants.ExtraJson.KEY_INSTALLED_APP_NAME, rgVarRg.pt);
                jSONObject.put(EventConstants.ExtraJson.KEY_INSTALLED_PKG_NAME, rgVarRg.rg);
                if (iIntValue != -1) {
                    jSONObject.put("error_code", iIntValue);
                    com.ss.android.downloadlib.utils.pp.rg(jSONObject, dfVarPt.qx());
                    AdEventHandler.rg().df(EventConstants.Label.INSTALL_FINISH_HIJACK, jSONObject, dfVarPt);
                    return;
                }
                AdEventHandler.rg().df(EventConstants.Label.INSTALL_FINISH_MAY_HIJACK, jSONObject, dfVarPt);
            }
        } catch (Throwable th) {
            com.ss.android.downloadlib.exception.q.rg().rg(th, "trySendInstallFinishHijack");
        }
    }

    public void rg(String str, com.ss.android.downloadad.api.rg.df dfVar) {
        if (dfVar != null && b.df(dfVar) && dfVar.q.compareAndSet(false, true)) {
            AdEventHandler.rg().rg(dfVar.bm(), EventConstants.Label.INSTALL_FINISH, rg(dfVar, str, dfVar.ev() != 4 ? 3 : 4), dfVar);
            com.ss.android.downloadlib.addownload.model.ux.rg().rg(dfVar);
        }
    }

    private static DownloadInfo rg(List<DownloadInfo> list, String str) {
        if (list != null && !list.isEmpty() && !TextUtils.isEmpty(str)) {
            for (DownloadInfo downloadInfo : list) {
                if (downloadInfo != null) {
                    if (str.equals(downloadInfo.getPackageName())) {
                        return downloadInfo;
                    }
                    if (b.rg(bm.getContext(), downloadInfo.getTargetFilePath(), str)) {
                        return downloadInfo;
                    }
                }
            }
        }
        return null;
    }

    public static JSONObject rg(JSONObject jSONObject, DownloadInfo downloadInfo) {
        if (jSONObject != null && downloadInfo != null) {
            int i = 1;
            if (DownloadSetting.obtain(downloadInfo.getId()).optInt("download_event_opt", 1) == 0) {
                return jSONObject;
            }
            try {
                jSONObject.put("download_id", downloadInfo.getId());
                jSONObject.put("name", downloadInfo.getName());
                jSONObject.put("cur_bytes", downloadInfo.getCurBytes());
                jSONObject.put("total_bytes", downloadInfo.getTotalBytes());
                jSONObject.put("network_quality", downloadInfo.getNetworkQuality());
                jSONObject.put(MonitorConstants.EXTRA_CUR_NETWORK_QUALITY, NetTrafficManager.getInstance().getCurrentNetworkQuality().name());
                jSONObject.put(MonitorConstants.EXTRA_DOWNLOAD_ONLY_WIFI, downloadInfo.isOnlyWifi() ? 1 : 0);
                jSONObject.put(MonitorConstants.EXTRA_DOWNLOAD_NEED_HTTPS_DEGRADE, downloadInfo.isNeedHttpsToHttpRetry() ? 1 : 0);
                jSONObject.put(MonitorConstants.EXTRA_DOWNLOAD_HTTPS_DEGRADE_RETRY_USED, downloadInfo.isHttpsToHttpRetryUsed() ? 1 : 0);
                jSONObject.put("chunk_count", downloadInfo.getChunkCount());
                jSONObject.put("retry_count", downloadInfo.getRetryCount());
                jSONObject.put(MonitorConstants.EXTRA_DOWNLOAD_CUR_RETRY_TIME, downloadInfo.getCurRetryTime());
                jSONObject.put(MonitorConstants.EXTRA_DOWNLOAD_NEED_RETRY_DELAY, downloadInfo.isNeedRetryDelay() ? 1 : 0);
                jSONObject.put(MonitorConstants.EXTRA_DOWNLOAD_BACKUP_URL_USED, downloadInfo.isBackUpUrlUsed() ? 1 : 0);
                jSONObject.put(MonitorConstants.EXTRA_DOWNLOAD_HEAD_CONNECTION_ERROR_MSG, downloadInfo.getHeadConnectionException() != null ? downloadInfo.getHeadConnectionException() : "");
                jSONObject.put(MonitorConstants.EXTRA_DOWNLOAD_NEED_INDEPENDENT_PROCESS, downloadInfo.isNeedIndependentProcess() ? 1 : 0);
                jSONObject.put(MonitorConstants.EXTRA_TOTAL_RETRY_COUNT, downloadInfo.getTotalRetryCount());
                jSONObject.put(MonitorConstants.EXTRA_CUR_RETRY_TIME_IN_TOTAL, downloadInfo.getCurRetryTimeInTotal());
                jSONObject.put(MonitorConstants.EXTRA_REAL_DOWNLOAD_TIME, downloadInfo.getRealDownloadTime());
                jSONObject.put(EventConstants.ExtraJson.KEY_FIRST_SPEED_TIME, downloadInfo.getFirstSpeedTime());
                jSONObject.put(EventConstants.ExtraJson.KEY_ALL_CONNECT_TIME, downloadInfo.getAllConnectTime());
                jSONObject.put(EventConstants.ExtraJson.KEY_DOWNLOAD_PREPARE_TIME, downloadInfo.getDownloadPrepareTime());
                jSONObject.put("download_time", downloadInfo.getRealDownloadTime() + downloadInfo.getAllConnectTime() + downloadInfo.getDownloadPrepareTime());
                jSONObject.put(MonitorConstants.EXTRA_CHUNK_DOWNGRADE_UESD, downloadInfo.isChunkDowngradeRetryUsed() ? 1 : 0);
                jSONObject.put(MonitorConstants.EXTRA_NEED_CHUNK_DOWNGRADE_RETRY, downloadInfo.isNeedChunkDowngradeRetry() ? 1 : 0);
                jSONObject.put("failed_resume_count", downloadInfo.getFailedResumeCount());
                jSONObject.put(MonitorConstants.EXTRA_PRECONNECT_LEVEL, downloadInfo.getPreconnectLevel());
                jSONObject.put("md5", downloadInfo.getMd5());
                jSONObject.put(EventConstants.ExtraJson.EXPECT_FILE_LENGTH, downloadInfo.getExpectFileLength());
                jSONObject.put("retry_schedule_count", downloadInfo.getRetryScheduleCount());
                jSONObject.put("rw_concurrent", downloadInfo.isRwConcurrent() ? 1 : 0);
                double curBytes = downloadInfo.getCurBytes() / 1048576.0d;
                double realDownloadTime = downloadInfo.getRealDownloadTime() / 1000.0d;
                if (curBytes > 0.0d && realDownloadTime > 0.0d) {
                    double d = curBytes / realDownloadTime;
                    try {
                        jSONObject.put("download_speed", d);
                    } catch (Exception unused) {
                    }
                    Logger.d(rg, "download speed : " + d + "MB/s");
                }
                try {
                    jSONObject.put(EventConstants.ExtraJson.KEY_IS_DOWNLOAD_SERVICE_FOREGROUND, Downloader.getInstance(bm.getContext()).isDownloadServiceForeground(downloadInfo.getId()) ? 1 : 0);
                } catch (Exception e) {
                    e.printStackTrace();
                }
                if (downloadInfo.getBackUpUrls() != null) {
                    jSONObject.put(MonitorConstants.EXTRA_DOWNLOAD_BACKUP_URL_COUNT, downloadInfo.getBackUpUrls().size());
                    jSONObject.put(MonitorConstants.EXTRA_DOWNLOAD_CUR_BACKUP_URL_INDEX, downloadInfo.getCurBackUpUrlIndex());
                }
                jSONObject.put(EventConstants.ExtraJson.KEY_CLEAR_SPACE_RESTART_TIMES, com.ss.android.downloadlib.addownload.df.pt.rg().df(downloadInfo.getUrl()));
                jSONObject.put(EventConstants.ExtraJson.MIME_TYPE, downloadInfo.getMimeType());
                if (!DownloadUtils.isNetworkConnected(bm.getContext())) {
                    i = 2;
                }
                jSONObject.put(EventConstants.ExtraJson.NETWORK_AVAILABLE, i);
                jSONObject.put("status_code", downloadInfo.getHttpStatusCode());
                df(jSONObject, downloadInfo);
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return jSONObject;
    }

    public static JSONObject df(JSONObject jSONObject, DownloadInfo downloadInfo) {
        if (jSONObject == null || downloadInfo == null || DownloadSetting.obtain(downloadInfo.getId()).optInt("download_event_opt", 1) == 0) {
            return jSONObject;
        }
        try {
            long jRg = b.rg(0L);
            double d = jRg;
            jSONObject.put("available_space", d / 1048576.0d);
            long totalBytes = downloadInfo.getTotalBytes();
            double d2 = totalBytes;
            jSONObject.put(EventConstants.ExtraJson.APK_SIZE, d2 / 1048576.0d);
            if (jRg > 0 && totalBytes > 0) {
                jSONObject.put(EventConstants.ExtraJson.KEY_AVAILABLE_SPACE_RATIO, d / d2);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return jSONObject;
    }

    public void df(DownloadInfo downloadInfo, final com.ss.android.downloadad.api.rg.df dfVar) {
        if (downloadInfo == null || dfVar == null || DownloadSetting.obtain(downloadInfo.getId()).optInt("install_finish_check_ttmd5", 1) == 0) {
            return;
        }
        final String targetFilePath = downloadInfo.getTargetFilePath();
        if (TextUtils.isEmpty(targetFilePath)) {
            return;
        }
        pt.rg().df(new Runnable() {
            @Override
            public void run() {
                String strRg = com.ss.android.downloadlib.utils.rg.rg(targetFilePath);
                if (TextUtils.isEmpty(strRg)) {
                    return;
                }
                bm.getContext().getSharedPreferences("sp_ttdownloader_md5", 0).edit().putString(String.valueOf(dfVar.df()), strRg).apply();
            }
        });
    }

    private static void df(com.ss.android.downloadad.api.rg.df dfVar) {
        if (dfVar == null) {
            return;
        }
        String strM = TextUtils.isEmpty(dfVar.m()) ? "" : dfVar.m();
        DownloadInfo downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(dfVar.qx());
        dfVar.hq("");
        com.ss.android.downloadlib.addownload.model.ux.rg().rg(dfVar);
        JSONObject jSONObjectRg = rg(new JSONObject(), downloadInfo);
        int i = 1;
        try {
            jSONObjectRg.putOpt(EventConstants.ExtraJson.DOWNLOAD_FINISH_REASON, strM);
            jSONObjectRg.putOpt(EventConstants.ExtraJson.FINISH_FROM_RESERVE_WIFI, Integer.valueOf(downloadInfo.isDownloadFromReserveWifi() ? 1 : 0));
        } catch (JSONException e) {
            e.printStackTrace();
        }
        com.ss.android.downloadad.api.rg.df dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo);
        com.ss.android.downloadlib.utils.pp.rg(jSONObjectRg, downloadInfo.getId());
        try {
            jSONObjectRg.put(EventConstants.ExtraJson.KEY_DOWNLOAD_FAILED_TIMES, dfVarRg.re());
            jSONObjectRg.put(EventConstants.ExtraJson.KEY_CAN_SHOW_NOTIFICATION, com.ss.android.socialbase.appdownloader.pp.pt.rg() ? 1 : 2);
            if (downloadInfo.getExpectFileLength() > 0 && downloadInfo.getTotalBytes() > 0) {
                jSONObjectRg.put(EventConstants.ExtraJson.KEY_FILE_LENGTH_GAP, downloadInfo.getExpectFileLength() - downloadInfo.getTotalBytes());
            }
            jSONObjectRg.put(EventConstants.ExtraJson.TTMD5_STATUS, downloadInfo.getTTMd5CheckStatus());
            jSONObjectRg.put(EventConstants.ExtraJson.KEY_HAS_SEND_DOWNLOAD_FAILED_FINALLY, dfVarRg.pt.get() ? 1 : 2);
            if (!dfVarRg.fl()) {
                i = 2;
            }
            jSONObjectRg.put(EventConstants.ExtraJson.KEY_IS_UPDATE_DOWNLOAD, i);
            com.ss.android.downloadlib.utils.pp.rg(dfVarRg, jSONObjectRg);
        } catch (Throwable th) {
            th.printStackTrace();
        }
        AdEventHandler.rg().df(EventConstants.Label.DOWNLOAD_FINISH, jSONObjectRg, dfVar);
    }

    private void q(com.ss.android.downloadad.api.rg.df dfVar) {
        SystemClock.sleep(20000L);
        int i = 15;
        while (i > 0) {
            if (b.df(dfVar)) {
                rg(dfVar.pp());
                return;
            }
            i--;
            if (i == 0) {
                return;
            } else {
                SystemClock.sleep(20000L);
            }
        }
    }

    private int rg(com.ss.android.downloadad.api.rg.df dfVar, DownloadInfo downloadInfo, String str, JSONObject jSONObject) {
        int iDf = com.ss.android.socialbase.appdownloader.q.df(bm.getContext(), downloadInfo);
        int iDf2 = b.df(bm.getContext(), str);
        if (iDf > 0 && iDf2 > 0 && iDf != iDf2) {
            return iDf2 > iDf ? 3011 : 3010;
        }
        if (DownloadSetting.obtain(dfVar.qx()).optInt("install_finish_check_ttmd5", 1) != 1) {
            return 3001;
        }
        String string = bm.getContext().getSharedPreferences("sp_ttdownloader_md5", 0).getString(String.valueOf(dfVar.df()), null);
        if (TextUtils.isEmpty(string) && downloadInfo != null) {
            string = com.ss.android.downloadlib.utils.rg.rg(downloadInfo.getTargetFilePath());
        }
        int iRg = com.ss.android.downloadlib.utils.rg.rg(string, com.ss.android.downloadlib.utils.rg.df(str));
        try {
            jSONObject.put(EventConstants.ExtraJson.TTMD5_STATUS, iRg);
        } catch (Throwable unused) {
        }
        if (iRg == 0) {
            return 3000;
        }
        return iRg == 1 ? 3002 : 3001;
    }

    public static String q(DownloadInfo downloadInfo, com.ss.android.downloadad.api.rg.df dfVar) {
        File file = new File(downloadInfo.getSavePath(), downloadInfo.getName());
        String str = null;
        if (file.exists()) {
            try {
                PackageInfo packageArchiveInfo = bm.getContext().getPackageManager().getPackageArchiveInfo(file.getAbsolutePath(), com.ss.android.socialbase.appdownloader.q.rg());
                if (packageArchiveInfo != null) {
                    str = packageArchiveInfo.packageName;
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        if (!TextUtils.isEmpty(str) && !str.equals(downloadInfo.getPackageName())) {
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.put(EventConstants.ExtraJson.REAL_PACKAGE_NAME, str);
                jSONObject.put(EventConstants.ExtraJson.INPUT_PACKAGE_NAME, downloadInfo.getPackageName());
            } catch (JSONException e2) {
                e2.printStackTrace();
            }
            AdEventHandler.rg().rg(EventConstants.Tag.EMBEDED_AD, EventConstants.Label.PACKAGE_NAME_ERROR, jSONObject, dfVar);
            return str;
        }
        return downloadInfo.getPackageName();
    }

    @Override
    public void onAppForeground() {
        Logger.d(rg, "onAppForeground()");
        df();
        rg(5);
    }

    @Override
    public void onAppBackground() {
        Logger.d(rg, "onAppBackground()");
        rg(6);
    }

    synchronized void df() {
        df dfVar = this.q;
        if (dfVar != null) {
            dfVar.df();
            this.q = null;
        }
    }

    @Override
    public void rg(int i) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (jCurrentTimeMillis - this.df < 120000) {
            return;
        }
        pt.rg().rg(new rg(i), this.df > 0 ? 2000L : 8000L);
        this.df = jCurrentTimeMillis;
    }

    private void rg(ConcurrentHashMap<Long, com.ss.android.downloadad.api.rg.df> concurrentHashMap, int i) {
        ArrayList arrayList = new ArrayList();
        long jCurrentTimeMillis = System.currentTimeMillis();
        for (com.ss.android.downloadad.api.rg.df dfVar : concurrentHashMap.values()) {
            if (dfVar.q.get()) {
                if (jCurrentTimeMillis - dfVar.bj() >= DownloadSetting.obtain(dfVar.qx()).optInt("start_event_expire_hours", 168) * 60 * 60 * 1000) {
                    arrayList.add(Long.valueOf(dfVar.df()));
                }
            } else if (dfVar.lu() == 1) {
                if (pt(dfVar) <= 0 && jCurrentTimeMillis - dfVar.bj() >= DownloadSetting.obtain(dfVar.qx()).optInt("start_event_expire_hours", 168) * 60 * 60 * 1000) {
                    arrayList.add(Long.valueOf(dfVar.df()));
                }
            } else if (dfVar.lu() == 2) {
                if (!dfVar.ka()) {
                    if (b.df(dfVar)) {
                        if (dfVar.ev() == 4) {
                            i = dfVar.ev();
                        }
                        AdEventHandler.rg().rg(rg(dfVar, dfVar.pp(), i), dfVar);
                        arrayList.add(Long.valueOf(dfVar.df()));
                        com.ss.android.downloadlib.addownload.df.pt.rg(dfVar);
                    } else if (jCurrentTimeMillis - dfVar.bj() >= DownloadSetting.obtain(dfVar.qx()).optInt("finish_event_expire_hours", 168) * 60 * 60 * 1000) {
                        arrayList.add(Long.valueOf(dfVar.df()));
                    } else if (TextUtils.isEmpty(dfVar.pp())) {
                        arrayList.add(Long.valueOf(dfVar.df()));
                    }
                }
            } else {
                arrayList.add(Long.valueOf(dfVar.df()));
            }
        }
        com.ss.android.downloadlib.addownload.model.c.rg().rg(arrayList);
    }

    @Override
    public void rg(DownloadInfo downloadInfo, com.ss.android.socialbase.appdownloader.rg rgVar) {
        JSONObject jSONObjectDf;
        if (downloadInfo == null || rgVar == null) {
            return;
        }
        JSONArray jSONArrayOptJSONArray = DownloadSetting.obtain(downloadInfo.getId()).optJSONArray("ah_report_config");
        if (rgVar.df != 0) {
            downloadInfo.getTempCacheData().remove("intent");
        }
        if (jSONArrayOptJSONArray == null || (jSONObjectDf = df(downloadInfo, rgVar)) == null) {
            return;
        }
        downloadInfo.getTempCacheData().put("ah_ext_json", jSONObjectDf);
    }

    @Override
    public void onOpenInstaller(final DownloadInfo downloadInfo, String str) {
        if (downloadInfo == null) {
            com.ss.android.downloadlib.exception.q.rg().rg("info is null");
        } else if ((DownloadSetting.obtain(downloadInfo).optInt("check_applink_mode") & 2) != 0) {
            final JSONObject jSONObject = (JSONObject) downloadInfo.getTempCacheData().get("ah_ext_json");
            com.ss.android.downloadlib.df.pp.rg().df(new com.ss.android.downloadlib.df.pt() {
                @Override
                public void rg(boolean z) {
                    if (!z) {
                        Intent intent = (Intent) downloadInfo.getTempCacheData().get("intent");
                        if (intent != null) {
                            downloadInfo.getTempCacheData().remove("intent");
                            com.ss.android.socialbase.appdownloader.q.rg(bm.getContext(), intent);
                            b.rg(jSONObject, "backup", (Object) 1);
                        } else {
                            b.rg(jSONObject, "backup", (Object) 2);
                        }
                    }
                    com.ss.android.downloadad.api.rg.df dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo);
                    if (dfVarRg != null) {
                        AdEventHandler.rg().rg(z ? EventConstants.UnityLabel.INSTALLER_DELAY_SUCCESS : EventConstants.UnityLabel.INSTALLER_DELAY_FAILED, jSONObject, dfVarRg);
                    } else {
                        com.ss.android.downloadlib.exception.q.rg().df("ah nativeModel=null");
                    }
                    if (z) {
                        bm.n().rg(bm.getContext(), null, null, null, null, 1);
                    }
                }
            });
        }
    }

    private int pt(com.ss.android.downloadad.api.rg.df dfVar) {
        int realStatus;
        double dOptDouble = DownloadSetting.obtain(dfVar.qx()).optDouble("download_failed_finally_hours", 48.0d);
        if (dOptDouble <= 0.0d) {
            return -1;
        }
        if (System.currentTimeMillis() - dfVar.bj() < dOptDouble * 60.0d * 60.0d * 1000.0d) {
            return 1;
        }
        if (dfVar.pt.get()) {
            return 0;
        }
        DownloadInfo downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(dfVar.qx());
        if (downloadInfo == null || (realStatus = downloadInfo.getRealStatus()) == -3 || realStatus == -4) {
            return -1;
        }
        if (!DownloadStatus.isDownloading(realStatus) && dfVar.pt.compareAndSet(false, true)) {
            try {
                JSONObject jSONObject = new JSONObject();
                rg(jSONObject, downloadInfo);
                jSONObject.putOpt("download_status", Integer.valueOf(realStatus));
                jSONObject.putOpt(EventConstants.ExtraJson.FAIL_STATUS, Integer.valueOf(dfVar.go()));
                jSONObject.putOpt(EventConstants.ExtraJson.FAIL_MSG, dfVar.k());
                jSONObject.put(EventConstants.ExtraJson.KEY_DOWNLOAD_FAILED_TIMES, dfVar.re());
                if (downloadInfo.getTotalBytes() > 0) {
                    jSONObject.put("download_percent", downloadInfo.getCurBytes() / downloadInfo.getTotalBytes());
                }
                jSONObject.put(EventConstants.ExtraJson.KEY_IS_UPDATE_DOWNLOAD, dfVar.fl() ? 1 : 2);
                AdEventHandler.rg().rg(dfVar.bm(), EventConstants.Label.DOWNLOAD_FAILED_FINALLY, jSONObject, dfVar);
                com.ss.android.downloadlib.addownload.model.ux.rg().rg(dfVar);
                return 0;
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return 1;
    }

    private JSONObject df(DownloadInfo downloadInfo, com.ss.android.socialbase.appdownloader.rg rgVar) {
        com.ss.android.downloadad.api.rg.df dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo);
        if (dfVarRg == null) {
            return null;
        }
        JSONObject jSONObject = new JSONObject();
        rgVar.rg(jSONObject);
        try {
            jSONObject.put("download_id", downloadInfo.getId());
            jSONObject.put("name", downloadInfo.getName());
        } catch (Throwable th) {
            th.printStackTrace();
        }
        com.ss.android.downloadlib.utils.pp.rg(jSONObject, downloadInfo.getId());
        AdEventHandler.rg().rg(EventConstants.Tag.EMBEDED_AD, EventConstants.Label.ANTI_HIJACK_RESULT, jSONObject, dfVarRg);
        return jSONObject;
    }

    public void rg(com.ss.android.downloadad.api.rg.df dfVar) {
        pt.rg().rg(new q(dfVar));
    }

    private class q implements Runnable {
        private final com.ss.android.downloadad.api.rg.df df;

        public q(com.ss.android.downloadad.api.rg.df dfVar) {
            this.df = dfVar;
        }

        @Override
        public void run() {
            try {
                try {
                    this.df.bm(true);
                    rg.this.q(this.df);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            } finally {
                this.df.bm(false);
            }
        }
    }

    private class rg implements Runnable {
        private final int df;

        public rg(int i) {
            this.df = i;
        }

        @Override
        public void run() {
            try {
                com.ss.android.downloadlib.addownload.model.c.rg().df();
                ConcurrentHashMap<Long, com.ss.android.downloadad.api.rg.df> concurrentHashMapQ = com.ss.android.downloadlib.addownload.model.c.rg().q();
                if (concurrentHashMapQ == null || concurrentHashMapQ.isEmpty()) {
                    return;
                }
                rg.this.rg(concurrentHashMapQ, this.df);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    private JSONObject rg(com.ss.android.downloadad.api.rg.df dfVar, String str, int i) {
        com.ss.android.socialbase.appdownloader.rg rgVarRg;
        JSONObject jSONObject = new JSONObject();
        try {
            DownloadInfo downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(dfVar.qx());
            jSONObject.putOpt("scene", Integer.valueOf(i));
            com.ss.android.downloadlib.utils.pp.rg(jSONObject, dfVar.qx());
            com.ss.android.downloadlib.utils.pp.rg(dfVar, jSONObject);
            jSONObject.put(EventConstants.ExtraJson.KEY_IS_UPDATE_DOWNLOAD, dfVar.fl() ? 1 : 2);
            jSONObject.put(EventConstants.ExtraJson.KEY_INSTALL_AFTER_BACK_APP, dfVar.xv() ? 1 : 2);
            jSONObject.putOpt(EventConstants.ExtraJson.CLEAN_SPACE_INSTALL_PARAMS, dfVar.bl() ? "1" : "2");
            if (downloadInfo != null) {
                rg(jSONObject, downloadInfo);
                try {
                    jSONObject.put(EventConstants.ExtraJson.KEY_UNINSTALL_RESUME_COUNT, downloadInfo.getUninstallResumeCount());
                    if (dfVar.d() > 0) {
                        jSONObject.put(EventConstants.ExtraJson.KEY_INSTALL_TIME, System.currentTimeMillis() - dfVar.d());
                    }
                } catch (Throwable unused) {
                }
                String string = DownloadUtils.getString(downloadInfo.getTempCacheData().get("ah_attempt"), null);
                if (!TextUtils.isEmpty(string) && (rgVarRg = com.ss.android.socialbase.appdownloader.rg.rg(string)) != null) {
                    rgVarRg.rg(jSONObject);
                }
            }
            int iRg = rg(dfVar, downloadInfo, str, jSONObject);
            jSONObject.put(EventConstants.ExtraJson.FAIL_STATUS, iRg);
            if (iRg == 3000) {
                jSONObject.put("hijack", 2);
            } else if (iRg == 3001) {
                jSONObject.put("hijack", 0);
            } else {
                jSONObject.put("hijack", 1);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return jSONObject;
    }

    public void rg(DownloadInfo downloadInfo, long j, long j2, long j3, long j4, long j5, boolean z) {
        com.ss.android.downloadad.api.rg.df dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo);
        if (dfVarRg == null) {
            com.ss.android.downloadlib.exception.q.rg().rg("trySendClearSpaceEvent nativeModel null");
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.putOpt(EventConstants.ExtraJson.KEY_SPACE_BEFORE, Double.valueOf(j / 1048576.0d));
            jSONObject.putOpt(EventConstants.ExtraJson.KEY_SPACE_CLEANED, Double.valueOf((j2 - j) / 1048576.0d));
            jSONObject.putOpt(EventConstants.ExtraJson.KEY_CLEAN_UP_TIME_COST, Long.valueOf(j4));
            jSONObject.putOpt(EventConstants.ExtraJson.KEY_IS_DOWNLOAD_RESTARTED, Integer.valueOf(z ? 1 : 0));
            jSONObject.putOpt(EventConstants.ExtraJson.KEY_BYTE_REQUIRED, Long.valueOf(j3));
            jSONObject.putOpt(EventConstants.ExtraJson.KEY_BYTE_REQUIRED_AFTER, Double.valueOf((j3 - j2) / 1048576.0d));
            jSONObject.putOpt(EventConstants.ExtraJson.KEY_CLEAR_SLEEP_TIME, Long.valueOf(j5));
            com.ss.android.downloadlib.utils.pp.q(downloadInfo, jSONObject);
            AdEventHandler.rg().rg(EventConstants.UnityLabel.OPTIMIZATION_CLEAN, jSONObject, dfVarRg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
