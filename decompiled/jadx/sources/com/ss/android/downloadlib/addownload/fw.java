package com.ss.android.downloadlib.addownload;

import android.content.Context;
import android.os.Environment;
import android.os.Message;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.ss.android.download.api.config.n;
import com.ss.android.download.api.download.DownloadStatusChangeListener;
import com.ss.android.download.api.model.DownloadShortInfo;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.utils.hq;
import com.ss.android.downloadlib.utils.rz;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.ss.android.socialbase.downloader.depend.AbsDownloadExtListener;
import com.ss.android.socialbase.downloader.depend.IDownloadListener;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.model.HttpHeader;
import com.ss.android.socialbase.downloader.notification.DownloadNotificationManager;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.io.File;
import java.lang.ref.SoftReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class fw implements hq.rg {
    private com.ss.android.downloadlib.addownload.model.pp df;
    private df pp;
    private pp pt;
    private boolean q = false;
    private long rg;

    public interface df {
        void rg(DownloadInfo downloadInfo);
    }

    @Override // com.ss.android.downloadlib.utils.hq.rg
    public void rg(Message message) {
    }

    public fw(pp ppVar) {
        this.pt = ppVar;
    }

    public void rg(long j) {
        this.rg = j;
        com.ss.android.downloadlib.addownload.model.pp ppVarPp = com.ss.android.downloadlib.addownload.model.c.rg().pp(j);
        this.df = ppVarPp;
        if (ppVarPp.re()) {
            com.ss.android.downloadlib.exception.q.rg().rg("setAdId ModelBox notValid");
        }
    }

    public void rg(DownloadInfo downloadInfo) {
        this.q = false;
        df(downloadInfo);
    }

    public void df(DownloadInfo downloadInfo) {
        df dfVar = this.pp;
        if (dfVar != null) {
            dfVar.rg(downloadInfo);
            this.pp = null;
        }
    }

    boolean rg(Context context, int i, boolean z) {
        if (com.ss.android.downloadlib.utils.b.rg(this.df.df)) {
            com.ss.android.downloadad.api.rg.df dfVarPt = com.ss.android.downloadlib.addownload.model.c.rg().pt(this.df.rg);
            if (dfVarPt != null) {
                DownloadNotificationManager.getInstance().cancelNotification(dfVarPt.qx());
            }
            return com.ss.android.downloadlib.df.rg.rg(this.df);
        }
        if (rg(i) && !TextUtils.isEmpty(this.df.df.getPackageName()) && bm.rz().optInt("disable_market") != 1) {
            if (com.ss.android.downloadlib.df.rg.rg(this.df, i)) {
                return true;
            }
            return this.pt.rz() && this.pt.pt(true);
        }
        if (!z || this.df.pt.getDownloadMode() != 4 || this.pt.pp()) {
            return false;
        }
        this.pt.q(true);
        return true;
    }

    private boolean rg(int i) {
        if (this.df.pt.getDownloadMode() == 2 && i == 2) {
            return true;
        }
        return this.df.pt.getDownloadMode() == 2 && i == 1 && bm.rz().optInt("disable_lp_if_market", 0) == 1;
    }

    boolean rg(boolean z) {
        return !z && this.df.pt.getDownloadMode() == 1;
    }

    private boolean q() {
        return pt() && pp();
    }

    private boolean pt() {
        return (this.df.df == null || TextUtils.isEmpty(this.df.df.getPackageName()) || TextUtils.isEmpty(this.df.df.getDownloadUrl())) ? false : true;
    }

    private boolean pp() {
        return this.df.pt.isAddToDownloadManage();
    }

    void rg(final n nVar) {
        if (!TextUtils.isEmpty(this.df.df.getFilePath())) {
            String filePath = this.df.df.getFilePath();
            if (filePath.startsWith(Environment.getDataDirectory().getAbsolutePath())) {
                nVar.rg();
                return;
            } else {
                try {
                    if (filePath.startsWith(bm.getContext().getExternalCacheDir().getParent())) {
                        nVar.rg();
                        return;
                    }
                } catch (Exception unused) {
                }
            }
        }
        df(new n() { // from class: com.ss.android.downloadlib.addownload.fw.1
            @Override // com.ss.android.download.api.config.n
            public void rg() {
                nVar.rg();
            }

            @Override // com.ss.android.download.api.config.n
            public void rg(String str) {
                bm.q().rg(1, bm.getContext(), fw.this.df.df, "您已禁止使用存储权限，请授权后再下载", null, 1);
                AdEventHandler.rg().df(fw.this.rg, 1);
                nVar.rg(str);
            }
        });
    }

    private void df(final n nVar) {
        if (!com.ss.android.downloadlib.utils.rz.df("android.permission.WRITE_EXTERNAL_STORAGE")) {
            com.ss.android.downloadlib.utils.rz.rg(new String[]{"android.permission.WRITE_EXTERNAL_STORAGE"}, new rz.rg() { // from class: com.ss.android.downloadlib.addownload.fw.2
                @Override // com.ss.android.downloadlib.utils.rz.rg
                public void rg() {
                    n nVar2 = nVar;
                    if (nVar2 != null) {
                        nVar2.rg();
                    }
                }

                @Override // com.ss.android.downloadlib.utils.rz.rg
                public void rg(String str) {
                    n nVar2 = nVar;
                    if (nVar2 != null) {
                        nVar2.rg(str);
                    }
                }
            });
        } else if (nVar != null) {
            nVar.rg();
        }
    }

    void rg(Message message, DownloadShortInfo downloadShortInfo, Map<Integer, Object> map) {
        df dfVar;
        if (message == null || message.what != 3) {
            return;
        }
        DownloadInfo downloadInfo = (DownloadInfo) message.obj;
        if (message.arg1 != 1 && message.arg1 != 6 && message.arg1 == 2) {
            if (downloadInfo.getIsFirstDownload()) {
                com.ss.android.downloadlib.fw.rg().rg(this.df.df, this.df.pt, this.df.q);
                downloadInfo.setFirstDownload(false);
            }
            AdEventHandler.rg().rg(downloadInfo);
        }
        downloadShortInfo.updateFromNewDownloadInfo(downloadInfo);
        rz.rg(downloadShortInfo);
        int iRg = com.ss.android.socialbase.appdownloader.q.rg(downloadInfo.getStatus());
        long totalBytes = downloadInfo.getTotalBytes();
        int curBytes = totalBytes > 0 ? (int) ((downloadInfo.getCurBytes() * 100) / totalBytes) : 0;
        if ((totalBytes > 0 || DownloadSetting.obtainGlobal().optBugFix("fix_click_start")) && (dfVar = this.pp) != null) {
            dfVar.rg(downloadInfo);
            this.pp = null;
        }
        for (DownloadStatusChangeListener downloadStatusChangeListener : rg(map)) {
            if (iRg != 1) {
                if (iRg == 2) {
                    downloadStatusChangeListener.onDownloadPaused(downloadShortInfo, rz.rg(downloadInfo.getId(), curBytes));
                } else if (iRg == 3) {
                    if (downloadInfo.getStatus() == -4) {
                        downloadStatusChangeListener.onIdle();
                    } else if (downloadInfo.getStatus() == -1) {
                        downloadStatusChangeListener.onDownloadFailed(downloadShortInfo);
                    } else if (downloadInfo.getStatus() == -3) {
                        if (com.ss.android.downloadlib.utils.b.rg(this.df.df)) {
                            downloadStatusChangeListener.onInstalled(downloadShortInfo);
                        } else {
                            downloadStatusChangeListener.onDownloadFinished(downloadShortInfo);
                        }
                    }
                }
            } else if (downloadInfo.getStatus() != 11) {
                downloadStatusChangeListener.onDownloadActive(downloadShortInfo, rz.rg(downloadInfo.getId(), curBytes));
            } else {
                Iterator<com.ss.android.download.api.download.rg> it = df(map).iterator();
                while (it.hasNext()) {
                    it.next().rg(downloadInfo);
                }
            }
        }
    }

    void q(DownloadInfo downloadInfo) {
        if (!ux.rg(this.df.df) || this.q) {
            return;
        }
        AdEventHandler.rg().rg(EventConstants.Label.FILE_STATUS, (downloadInfo == null || !com.ss.android.downloadlib.utils.b.df(downloadInfo.getTargetFilePath())) ? 2 : 1, this.df);
        this.q = true;
    }

    void rg() {
        if (this.pp == null) {
            this.pp = new df() { // from class: com.ss.android.downloadlib.addownload.fw.3
                @Override // com.ss.android.downloadlib.addownload.fw.df
                public void rg(DownloadInfo downloadInfo) {
                    AdEventHandler.rg().rg(fw.this.rg, 2, downloadInfo);
                }
            };
        }
    }

    boolean pt(DownloadInfo downloadInfo) {
        return c() || pp(downloadInfo);
    }

    private boolean pp(DownloadInfo downloadInfo) {
        return !com.ss.android.downloadlib.utils.b.rg(this.df.df) && c(downloadInfo);
    }

    private boolean c() {
        return com.ss.android.downloadlib.utils.b.rg(this.df.df) && ux.rg(this.df.pt.getLinkMode());
    }

    private boolean c(DownloadInfo downloadInfo) {
        return downloadInfo != null && downloadInfo.getStatus() == -3 && DownloadUtils.isFileExist(downloadInfo.getSavePath(), downloadInfo.getName());
    }

    int rg(Context context, IDownloadListener iDownloadListener) {
        HttpHeader httpHeaderRg;
        if (context == null) {
            return 0;
        }
        Map<String, String> headers = this.df.df.getHeaders();
        ArrayList arrayList = new ArrayList();
        if (bm.rz().optInt("enable_send_click_id_in_apk", 1) == 1 && !TextUtils.isEmpty(this.df.df.getLogExtra()) && (httpHeaderRg = rg(this.df.df.getLogExtra())) != null) {
            arrayList.add(httpHeaderRg);
        }
        if (headers != null) {
            for (Map.Entry<String, String> entry : headers.entrySet()) {
                if (entry != null) {
                    arrayList.add(new HttpHeader(entry.getKey(), entry.getValue()));
                }
            }
        }
        String strRg = com.ss.android.downloadlib.utils.q.rg(String.valueOf(this.df.df.getId()), this.df.df.getNotificationJumpUrl(), this.df.df.isShowToast(), String.valueOf(this.df.df.getModelType()));
        DownloadSetting downloadSettingDf = com.ss.android.downloadlib.utils.pt.df(this.df.df);
        JSONObject jSONObjectRg = com.ss.android.downloadlib.utils.pt.rg(this.df.df);
        if (!this.df.pt.enableAH()) {
            jSONObjectRg = com.ss.android.downloadlib.utils.b.rg(jSONObjectRg);
            com.ss.android.downloadlib.utils.b.rg(jSONObjectRg, DownloadSettingKeys.KEY_AH_PLANS, new JSONArray());
        }
        int executorGroup = this.df.df.getExecutorGroup();
        if (this.df.df.isAd() || ux.df(this.df.df)) {
            executorGroup = 4;
        }
        String strRg2 = rg(downloadSettingDf);
        DownloadInfo downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(DownloadComponentManager.getDownloadId(this.df.df.getDownloadUrl(), strRg2));
        if (downloadInfo != null && 3 == this.df.df.getModelType()) {
            downloadInfo.setFirstDownload(true);
        }
        com.ss.android.socialbase.appdownloader.c cVarV = new com.ss.android.socialbase.appdownloader.c(context, this.df.df.getDownloadUrl()).df(this.df.df.getBackupUrls()).rg(this.df.df.getName()).pt(strRg).rg(arrayList).rg(this.df.df.isShowNotification()).q(this.df.df.isNeedWifi()).df(this.df.df.getFileName()).q(strRg2).bm(this.df.df.getAppIcon()).fw(this.df.df.getMd5()).rz(this.df.df.getSdkMonitorScene()).rg(this.df.df.getExpectFileLength()).rg(iDownloadListener).hq(this.df.df.needIndependentProcess() || downloadSettingDf.optInt(MonitorConstants.EXTRA_DOWNLOAD_NEED_INDEPENDENT_PROCESS, 0) == 1).rg(this.df.df.getDownloadFileUriProvider()).df(this.df.df.autoInstallWithoutNotification()).c(this.df.df.getPackageName()).pt(1000).pp(100).rg(jSONObjectRg).rz(true).bm(true).df(downloadSettingDf.optInt("retry_count", 5)).q(downloadSettingDf.optInt("backup_url_retry_count", 0)).bm(true).oh(downloadSettingDf.optInt("need_head_connection", 0) == 1).pt(downloadSettingDf.optInt("need_https_to_http_retry", 0) == 1).ux(downloadSettingDf.optInt(MonitorConstants.EXTRA_NEED_CHUNK_DOWNGRADE_RETRY, 1) == 1).fw(downloadSettingDf.optInt(MonitorConstants.EXTRA_DOWNLOAD_NEED_RETRY_DELAY, 0) == 1).ux(downloadSettingDf.optString("retry_delay_time_array")).b(downloadSettingDf.optInt("need_reuse_runnable", 0) == 1).c(executorGroup).un(this.df.df.isAutoInstall()).v(this.df.df.distinctDir());
        if (!TextUtils.isEmpty(this.df.df.getMimeType())) {
            cVarV.pp(this.df.df.getMimeType());
        } else {
            cVarV.pp(AdBaseConstants.MIME_APK);
        }
        if (downloadSettingDf.optInt("notification_opt_2", 0) == 1) {
            cVarV.rg(false);
            cVarV.df(true);
        }
        com.ss.android.downloadlib.addownload.df.rg rgVar = null;
        if (downloadSettingDf.optInt("clear_space_use_disk_handler", 0) == 1) {
            rgVar = new com.ss.android.downloadlib.addownload.df.rg();
            cVarV.rg(rgVar);
        }
        int iRg = ux.rg(this.df, q(), cVarV);
        if (rgVar != null) {
            rgVar.rg(iRg);
        }
        return iRg;
    }

    private String rg(DownloadSetting downloadSetting) {
        if (!TextUtils.isEmpty(this.df.df.getFilePath())) {
            return this.df.df.getFilePath();
        }
        DownloadInfo downloadInfoRg = com.ss.android.socialbase.appdownloader.pt.bm().rg(bm.getContext(), this.df.df.getDownloadUrl());
        boolean zDf = com.ss.android.downloadlib.utils.rz.df("android.permission.WRITE_EXTERNAL_STORAGE");
        String strDf = df();
        if (downloadInfoRg != null && !TextUtils.isEmpty(downloadInfoRg.getSavePath())) {
            String savePath = downloadInfoRg.getSavePath();
            if (zDf || savePath.startsWith(Environment.getDataDirectory().getAbsolutePath())) {
                return savePath;
            }
            try {
                if (!TextUtils.isEmpty(strDf)) {
                    if (savePath.startsWith(strDf)) {
                        return savePath;
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
            Downloader.getInstance(DownloadComponentManager.getAppContext()).cancel(downloadInfoRg.getId());
        }
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.putOpt(EventConstants.ExtraJson.KEY_CODE, Integer.valueOf(zDf ? 1 : 2));
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        AdEventHandler.rg().rg(EventConstants.UnityLabel.LABEL_EXTERNAL_PERMISSION, jSONObject, this.df);
        String strDf2 = null;
        try {
            strDf2 = com.ss.android.socialbase.appdownloader.q.df();
        } catch (Exception unused) {
        }
        int iRg = com.ss.android.downloadlib.utils.pt.rg(downloadSetting);
        if (iRg != 0) {
            if (iRg == 4 || (!zDf && iRg == 2)) {
                File filesDir = bm.getContext().getFilesDir();
                if (!filesDir.exists()) {
                    filesDir.mkdirs();
                }
                if (filesDir.exists()) {
                    return filesDir.getAbsolutePath();
                }
            } else if ((iRg == 3 || (!zDf && iRg == 1)) && !TextUtils.isEmpty(strDf)) {
                return strDf;
            }
        }
        return strDf2;
    }

    public String df() {
        File externalFilesDir = bm.getContext().getExternalFilesDir(Environment.DIRECTORY_DOWNLOADS);
        if (externalFilesDir == null) {
            return null;
        }
        if (!externalFilesDir.exists()) {
            externalFilesDir.mkdirs();
        }
        if (externalFilesDir.exists()) {
            return externalFilesDir.getAbsolutePath();
        }
        return null;
    }

    void rg(DownloadInfo downloadInfo, boolean z) {
        if (this.df.df == null || downloadInfo == null || downloadInfo.getId() == 0) {
            return;
        }
        int status = downloadInfo.getStatus();
        if (status == -1 || status == -4 || ux.rg(this.df.df)) {
            AdEventHandler.rg().rg(this.rg, 2);
        } else if (z && com.ss.android.downloadlib.event.df.rg().q() && (status == -2 || status == -3)) {
            AdEventHandler.rg().rg(this.rg, 2);
        }
        switch (status) {
            case -4:
            case -1:
                rg();
                com.ss.android.downloadlib.addownload.model.c.rg().rg(new com.ss.android.downloadad.api.rg.df(this.df.df, this.df.q, this.df.pt, downloadInfo.getId()));
                break;
            case -3:
                if (com.ss.android.downloadlib.utils.b.rg(this.df.df)) {
                    com.ss.android.downloadlib.exception.q.rg().df("SUCCESSED isInstalledApp");
                    break;
                } else {
                    AdEventHandler.rg().rg(this.rg, 5, downloadInfo);
                    if (z && com.ss.android.downloadlib.event.df.rg().df() && !com.ss.android.downloadlib.event.df.rg().df(this.rg, this.df.df.getLogExtra())) {
                        AdEventHandler.rg().rg(this.rg, 2);
                        break;
                    }
                }
                break;
            case -2:
                AdEventHandler.rg().rg(this.rg, 4, downloadInfo);
                if (z && com.ss.android.downloadlib.event.df.rg().df() && !com.ss.android.downloadlib.event.df.rg().df(this.rg, this.df.df.getLogExtra())) {
                    AdEventHandler.rg().rg(this.rg, 2);
                    break;
                }
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 7:
            case 8:
                AdEventHandler.rg().rg(this.rg, 3, downloadInfo);
                break;
        }
    }

    void rg(DownloadInfo downloadInfo, DownloadShortInfo downloadShortInfo, List<DownloadStatusChangeListener> list) {
        if (list.isEmpty()) {
            return;
        }
        if (downloadInfo == null || downloadShortInfo == null) {
            Iterator<DownloadStatusChangeListener> it = list.iterator();
            while (it.hasNext()) {
                it.next().onIdle();
            }
            return;
        }
        try {
        } catch (Exception e) {
            e.printStackTrace();
        }
        int curBytes = downloadInfo.getTotalBytes() > 0 ? (int) ((downloadInfo.getCurBytes() * 100) / downloadInfo.getTotalBytes()) : 0;
        int i = curBytes >= 0 ? curBytes : 0;
        downloadShortInfo.updateFromNewDownloadInfo(downloadInfo);
        rz.rg(downloadShortInfo);
        for (DownloadStatusChangeListener downloadStatusChangeListener : list) {
            switch (downloadInfo.getStatus()) {
                case -4:
                case 0:
                    if (com.ss.android.downloadlib.utils.b.rg(this.df.df)) {
                        downloadShortInfo.status = -3;
                        downloadStatusChangeListener.onInstalled(downloadShortInfo);
                    } else {
                        downloadStatusChangeListener.onIdle();
                    }
                    break;
                case -3:
                    if (com.ss.android.downloadlib.utils.b.rg(this.df.df)) {
                        downloadStatusChangeListener.onInstalled(downloadShortInfo);
                    } else {
                        downloadStatusChangeListener.onDownloadFinished(downloadShortInfo);
                    }
                    break;
                case -2:
                    downloadStatusChangeListener.onDownloadPaused(downloadShortInfo, rz.rg(downloadInfo.getId(), i));
                    break;
                case -1:
                    downloadStatusChangeListener.onDownloadFailed(downloadShortInfo);
                    break;
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 7:
                case 8:
                    downloadStatusChangeListener.onDownloadActive(downloadShortInfo, rz.rg(downloadInfo.getId(), i));
                    break;
                case 11:
                    if (downloadStatusChangeListener instanceof com.ss.android.download.api.download.rg) {
                        ((com.ss.android.download.api.download.rg) downloadStatusChangeListener).rg(downloadInfo);
                    } else {
                        downloadStatusChangeListener.onDownloadActive(downloadShortInfo, rz.rg(downloadInfo.getId(), i));
                    }
                    break;
            }
        }
    }

    static class rg extends AbsDownloadExtListener {
        private com.ss.android.downloadlib.utils.hq rg;

        rg(com.ss.android.downloadlib.utils.hq hqVar) {
            this.rg = hqVar;
        }

        @Override // com.ss.android.socialbase.downloader.depend.AbsDownloadListener, com.ss.android.socialbase.downloader.depend.IDownloadListener
        public void onPrepare(DownloadInfo downloadInfo) {
            rg(downloadInfo, 1);
        }

        @Override // com.ss.android.socialbase.downloader.depend.AbsDownloadListener, com.ss.android.socialbase.downloader.depend.IDownloadListener
        public void onStart(DownloadInfo downloadInfo) {
            rg(downloadInfo, 2);
        }

        @Override // com.ss.android.socialbase.downloader.depend.AbsDownloadListener, com.ss.android.socialbase.downloader.depend.IDownloadListener
        public void onProgress(DownloadInfo downloadInfo) {
            rg(downloadInfo, 4);
        }

        @Override // com.ss.android.socialbase.downloader.depend.AbsDownloadListener, com.ss.android.socialbase.downloader.depend.IDownloadListener
        public void onPause(DownloadInfo downloadInfo) {
            rg(downloadInfo, -2);
        }

        @Override // com.ss.android.socialbase.downloader.depend.AbsDownloadListener, com.ss.android.socialbase.downloader.depend.IDownloadListener
        public void onSuccessed(DownloadInfo downloadInfo) {
            rg(downloadInfo, -3);
        }

        @Override // com.ss.android.socialbase.downloader.depend.AbsDownloadListener, com.ss.android.socialbase.downloader.depend.IDownloadListener
        public void onFailed(DownloadInfo downloadInfo, BaseException baseException) {
            rg(downloadInfo, -1);
        }

        @Override // com.ss.android.socialbase.downloader.depend.AbsDownloadListener, com.ss.android.socialbase.downloader.depend.IDownloadListener
        public void onCanceled(DownloadInfo downloadInfo) {
            rg(downloadInfo, -4);
        }

        @Override // com.ss.android.socialbase.downloader.depend.AbsDownloadExtListener, com.ss.android.socialbase.downloader.depend.IDownloadExtListener
        public void onWaitingDownloadCompleteHandler(DownloadInfo downloadInfo) {
            rg(downloadInfo, 11);
        }

        private void rg(DownloadInfo downloadInfo, int i) {
            Message messageObtain = Message.obtain();
            messageObtain.what = 3;
            messageObtain.obj = downloadInfo;
            messageObtain.arg1 = i;
            this.rg.sendMessage(messageObtain);
        }
    }

    public static List<DownloadStatusChangeListener> rg(Map<Integer, Object> map) {
        ArrayList arrayList = new ArrayList();
        if (map != null && !map.isEmpty()) {
            for (Object obj : map.values()) {
                if (obj instanceof DownloadStatusChangeListener) {
                    arrayList.add((DownloadStatusChangeListener) obj);
                } else if (obj instanceof SoftReference) {
                    SoftReference softReference = (SoftReference) obj;
                    if (softReference.get() instanceof DownloadStatusChangeListener) {
                        arrayList.add((DownloadStatusChangeListener) softReference.get());
                    }
                }
            }
        }
        return arrayList;
    }

    public static List<com.ss.android.download.api.download.rg> df(Map<Integer, Object> map) {
        ArrayList arrayList = new ArrayList();
        if (map != null && !map.isEmpty()) {
            for (Object obj : map.values()) {
                if (obj instanceof com.ss.android.download.api.download.rg) {
                    arrayList.add((com.ss.android.download.api.download.rg) obj);
                } else if (obj instanceof SoftReference) {
                    SoftReference softReference = (SoftReference) obj;
                    if (softReference.get() instanceof com.ss.android.download.api.download.rg) {
                        arrayList.add((com.ss.android.download.api.download.rg) softReference.get());
                    }
                }
            }
        }
        return arrayList;
    }

    private HttpHeader rg(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            return new HttpHeader(MBridgeConstans.DYNAMIC_VIEW_WX_CLICKID, new JSONObject(str).optString(MBridgeConstans.DYNAMIC_VIEW_WX_CLICKID));
        } catch (JSONException e) {
            bm.qx().rg(e, "parseLogExtra Error");
            return null;
        }
    }
}
