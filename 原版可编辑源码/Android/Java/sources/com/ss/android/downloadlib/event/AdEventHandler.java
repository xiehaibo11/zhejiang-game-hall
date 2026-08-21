package com.ss.android.downloadlib.event;

import android.os.Build;
import com.ss.android.download.api.download.DownloadController;
import com.ss.android.download.api.download.DownloadEventConfig;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.download.api.model.df;
import com.ss.android.downloadad.api.download.AdDownloadModel;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.addownload.model.c;
import com.ss.android.downloadlib.addownload.model.pp;
import com.ss.android.downloadlib.addownload.model.ux;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.exception.q;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.appdownloader.pp.pt;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import org.json.JSONException;
import org.json.JSONObject;

public class AdEventHandler {

    public @interface EventType {
        public static final int CLICK_CONTINUE = 4;
        public static final int CLICK_INSTALL = 5;
        public static final int CLICK_PAUSE = 3;
        public static final int CLICK_START = 2;
        public static final int STORAGE_DENY = 1;
    }

    private static class rg {
        private static AdEventHandler rg = new AdEventHandler();
    }

    public static AdEventHandler rg() {
        return rg.rg;
    }

    private AdEventHandler() {
    }

    public void rg(long j, int i) {
        pp ppVarPp = c.rg().pp(j);
        if (ppVarPp.re()) {
            q.rg().rg("sendClickEvent ModelBox notValid");
            return;
        }
        if (ppVarPp.q.isEnableClickEvent()) {
            int i2 = 1;
            DownloadEventConfig downloadEventConfig = ppVarPp.q;
            String clickItemTag = i == 1 ? downloadEventConfig.getClickItemTag() : downloadEventConfig.getClickButtonTag();
            String strRg = b.rg(ppVarPp.q.getClickLabel(), "click");
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.putOpt(EventConstants.ExtraJson.CLICK_TYPE, Integer.valueOf(i));
                jSONObject.putOpt(EventConstants.ExtraJson.PERMISSION_NOTIFICATION, Integer.valueOf(pt.rg() ? 1 : 2));
                if (!DownloadUtils.isNetworkConnected(bm.getContext())) {
                    i2 = 2;
                }
                jSONObject.putOpt(EventConstants.ExtraJson.NETWORK_AVAILABLE, Integer.valueOf(i2));
            } catch (JSONException e) {
                e.printStackTrace();
            }
            rg(clickItemTag, strRg, jSONObject, ppVarPp);
            if (!"click".equals(strRg) || ppVarPp.df == null) {
                return;
            }
            df.rg().rg(j, ppVarPp.df.getLogExtra());
        }
    }

    public void rg(long j, int i, DownloadInfo downloadInfo) {
        pp ppVarPp = c.rg().pp(j);
        if (ppVarPp.re()) {
            q.rg().rg("sendEvent ModelBox notValid");
            return;
        }
        String strRg = null;
        JSONObject jSONObject = new JSONObject();
        b.rg(jSONObject, EventConstants.ExtraJson.DOWNLOAD_SCENE, Integer.valueOf(ppVarPp.n()));
        if (i == 1) {
            strRg = b.rg(ppVarPp.q.getStorageDenyLabel(), EventConstants.Label.STORAGE_DENY);
        } else if (i == 2) {
            strRg = b.rg(ppVarPp.q.getClickStartLabel(), EventConstants.Label.CLICK_START);
            com.ss.android.downloadlib.utils.pp.rg(downloadInfo, jSONObject);
        } else if (i == 3) {
            strRg = b.rg(ppVarPp.q.getClickPauseLabel(), EventConstants.Label.CLICK_PAUSE);
            com.ss.android.downloadlib.utils.pp.df(downloadInfo, jSONObject);
        } else if (i == 4) {
            strRg = b.rg(ppVarPp.q.getClickContinueLabel(), EventConstants.Label.CLICK_CONTINUE);
            com.ss.android.downloadlib.utils.pp.q(downloadInfo, jSONObject);
        } else if (i == 5) {
            if (downloadInfo != null) {
                try {
                    com.ss.android.downloadlib.utils.pp.rg(jSONObject, downloadInfo.getId());
                    com.ss.android.downloadlib.rg.df(jSONObject, downloadInfo);
                } catch (Throwable unused) {
                }
            }
            strRg = b.rg(ppVarPp.q.getClickInstallLabel(), EventConstants.Label.CLICK_INSTALL);
        }
        rg(null, strRg, jSONObject, 0L, 1, ppVarPp);
    }

    public void df(long j, int i) {
        rg(j, i, (DownloadInfo) null);
    }

    public void rg(String str, int i, pp ppVar) {
        rg(null, str, null, i, 0, ppVar);
    }

    public void rg(long j, boolean z, int i) {
        pp ppVarPp = c.rg().pp(j);
        if (ppVarPp.re()) {
            q.rg().rg("sendQuickAppEvent ModelBox notValid");
            return;
        }
        if (ppVarPp.df.getQuickAppModel() == null) {
            return;
        }
        if (ppVarPp.df instanceof AdDownloadModel) {
            ((AdDownloadModel) ppVarPp.df).setFunnelType(3);
        }
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.putOpt(EventConstants.ExtraJson.CLICK_TYPE, Integer.valueOf(i));
        } catch (JSONException e) {
            e.printStackTrace();
        }
        df(z ? EventConstants.Label.DEEPLINK_QUICKAPP_SUCCESS : EventConstants.Label.DEEPLINK_QUICKAPP_FAILED, jSONObject, ppVarPp);
    }

    public void rg(long j, BaseException baseException) {
        pp ppVarPp = c.rg().pp(j);
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.putOpt("download_time", 0);
            if (baseException != null) {
                jSONObject.putOpt(EventConstants.ExtraJson.FAIL_STATUS, Integer.valueOf(baseException.getErrorCode()));
                jSONObject.putOpt(EventConstants.ExtraJson.FAIL_MSG, baseException.getErrorMessage());
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
        df("download_failed", jSONObject, ppVarPp);
    }

    public void rg(DownloadInfo downloadInfo) {
        com.ss.android.downloadad.api.rg.df dfVarRg = c.rg().rg(downloadInfo);
        if (dfVarRg == null) {
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject();
            com.ss.android.downloadlib.utils.pp.q(downloadInfo, jSONObject);
            dfVarRg.rg(System.currentTimeMillis());
            rg(dfVarRg.bm(), EventConstants.Label.DOWNLOAD_RESUME, jSONObject, dfVarRg);
            ux.rg().rg(dfVarRg);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public void rg(JSONObject jSONObject, com.ss.android.downloadad.api.rg.df dfVar) {
        rg(dfVar.bm(), EventConstants.Label.INSTALL_FINISH, jSONObject, dfVar);
    }

    public void rg(DownloadInfo downloadInfo, BaseException baseException) {
        com.ss.android.downloadad.api.rg.df dfVarRg;
        if (downloadInfo == null || (dfVarRg = c.rg().rg(downloadInfo)) == null || dfVarRg.q.get()) {
            return;
        }
        JSONObject jSONObject = new JSONObject();
        try {
            com.ss.android.downloadlib.rg.rg(jSONObject, downloadInfo);
            jSONObject.putOpt(EventConstants.ExtraJson.FAIL_STATUS, Integer.valueOf(dfVarRg.go()));
            jSONObject.putOpt(EventConstants.ExtraJson.FAIL_MSG, dfVarRg.k());
            jSONObject.put(EventConstants.ExtraJson.KEY_DOWNLOAD_FAILED_TIMES, dfVarRg.re());
            if (downloadInfo.getTotalBytes() > 0) {
                jSONObject.put("download_percent", downloadInfo.getCurBytes() / downloadInfo.getTotalBytes());
            }
            jSONObject.put("download_status", downloadInfo.getRealStatus());
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (dfVarRg.bj() > 0) {
                jSONObject.put(EventConstants.ExtraJson.KEY_TIME_FROM_START_DOWNLOAD, jCurrentTimeMillis - dfVarRg.bj());
            }
            if (dfVarRg.lc() > 0) {
                jSONObject.put(EventConstants.ExtraJson.KEY_TIME_FROM_DOWNLOAD_RESUME, jCurrentTimeMillis - dfVarRg.lc());
            }
            int i = 1;
            jSONObject.put(EventConstants.ExtraJson.KEY_IS_UPDATE_DOWNLOAD, dfVarRg.fl() ? 1 : 2);
            jSONObject.put(EventConstants.ExtraJson.KEY_CAN_SHOW_NOTIFICATION, pt.rg() ? 1 : 2);
            if (!dfVarRg.pt.get()) {
                i = 2;
            }
            jSONObject.put(EventConstants.ExtraJson.KEY_HAS_SEND_DOWNLOAD_FAILED_FINALLY, i);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        rg(dfVarRg.bm(), EventConstants.Label.DOWNLOAD_CANCEL, jSONObject, dfVarRg);
    }

    public void df(DownloadInfo downloadInfo, BaseException baseException) {
        if (downloadInfo == null) {
            return;
        }
        com.ss.android.downloadad.api.rg.df dfVarRg = c.rg().rg(downloadInfo);
        if (dfVarRg == null) {
            q.rg().rg("sendDownloadFailedEvent nativeModel null");
            return;
        }
        if (dfVarRg.q.get()) {
            return;
        }
        JSONObject jSONObject = new JSONObject();
        try {
            com.ss.android.downloadlib.utils.pp.q(downloadInfo, jSONObject);
            com.ss.android.downloadlib.rg.rg(jSONObject, downloadInfo);
            if (baseException != null) {
                jSONObject.putOpt(EventConstants.ExtraJson.FAIL_STATUS, Integer.valueOf(baseException.getErrorCode()));
                jSONObject.putOpt(EventConstants.ExtraJson.FAIL_MSG, baseException.getErrorMessage());
                dfVarRg.pt(baseException.getErrorCode());
                dfVarRg.rg(baseException.getErrorMessage());
            }
            dfVarRg.l();
            jSONObject.put(EventConstants.ExtraJson.KEY_DOWNLOAD_FAILED_TIMES, dfVarRg.re());
            if (downloadInfo.getTotalBytes() > 0) {
                jSONObject.put("download_percent", downloadInfo.getCurBytes() / downloadInfo.getTotalBytes());
            }
            int i = 1;
            jSONObject.put(EventConstants.ExtraJson.KEY_HAS_SEND_DOWNLOAD_FAILED_FINALLY, dfVarRg.pt.get() ? 1 : 2);
            com.ss.android.downloadlib.utils.pp.rg(dfVarRg, jSONObject);
            if (!dfVarRg.fl()) {
                i = 2;
            }
            jSONObject.put(EventConstants.ExtraJson.KEY_IS_UPDATE_DOWNLOAD, i);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        rg(dfVarRg.bm(), "download_failed", jSONObject, dfVarRg);
        ux.rg().rg(dfVarRg);
    }

    public void rg(String str, com.ss.android.downloadad.api.rg.rg rgVar) {
        rg(str, (JSONObject) null, rgVar);
    }

    public void rg(String str, JSONObject jSONObject, long j) {
        com.ss.android.downloadad.api.rg.rg rgVarPt = c.rg().pt(j);
        if (rgVarPt != null) {
            rg(str, jSONObject, rgVarPt);
            return;
        }
        pp ppVarPp = c.rg().pp(j);
        if (ppVarPp.re()) {
            q.rg().rg("sendUnityEvent ModelBox notValid");
        } else {
            rg(str, jSONObject, ppVarPp);
        }
    }

    public void rg(String str, JSONObject jSONObject, com.ss.android.downloadad.api.rg.rg rgVar) {
        JSONObject jSONObject2 = new JSONObject();
        b.rg(jSONObject2, EventConstants.ExtraJson.UNITY_LABEL, str);
        rg(EventConstants.Tag.EMBEDED_AD, EventConstants.Label.UNITY, b.rg(jSONObject, jSONObject2), rgVar);
    }

    public void rg(String str, DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController) {
        df(str, new pp(downloadModel.getId(), downloadModel, downloadEventConfig, downloadController));
    }

    public void rg(String str, long j) {
        com.ss.android.downloadad.api.rg.df dfVarPt = c.rg().pt(j);
        if (dfVarPt != null) {
            df(str, dfVarPt);
        } else {
            df(str, c.rg().pp(j));
        }
    }

    public void df(String str, com.ss.android.downloadad.api.rg.rg rgVar) {
        rg((String) null, str, rgVar);
    }

    public void df(String str, JSONObject jSONObject, com.ss.android.downloadad.api.rg.rg rgVar) {
        rg((String) null, str, jSONObject, rgVar);
    }

    public void rg(String str, String str2, com.ss.android.downloadad.api.rg.rg rgVar) {
        rg(str, str2, (JSONObject) null, rgVar);
    }

    public void rg(String str, String str2, JSONObject jSONObject, com.ss.android.downloadad.api.rg.rg rgVar) {
        rg(str, str2, jSONObject, 0L, 0, rgVar);
    }

    private void rg(String str, String str2, JSONObject jSONObject, long j, int i, com.ss.android.downloadad.api.rg.rg rgVar) {
        if (rgVar == null) {
            q.rg().rg("onEvent data null");
            return;
        }
        if ((rgVar instanceof pp) && ((pp) rgVar).re()) {
            q.rg().rg("onEvent ModelBox notValid");
            return;
        }
        try {
            df.rg rgVarQ = new df.rg().rg(b.rg(str, rgVar.bm(), EventConstants.Tag.EMBEDED_AD)).df(str2).df(rgVar.q()).rg(rgVar.df()).q(rgVar.pt());
            if (j <= 0) {
                j = rgVar.hq();
            }
            df.rg rgVarRg = rgVarQ.df(j).pt(rgVar.rz()).rg(rgVar.f()).rg(b.rg(rg(rgVar), jSONObject)).df(rgVar.b()).rg(rgVar.v());
            if (i <= 0) {
                i = 2;
            }
            rg(rgVarRg.rg(i).rg(rgVar.oh()).rg());
        } catch (Exception e) {
            q.rg().rg(e, "onEvent");
        }
    }

    private JSONObject rg(com.ss.android.downloadad.api.rg.rg rgVar) {
        JSONObject jSONObject = new JSONObject();
        try {
            b.rg(rgVar.fw(), jSONObject);
            b.rg(rgVar.un(), jSONObject);
            jSONObject.putOpt("download_url", rgVar.rg());
            jSONObject.putOpt("package_name", rgVar.pp());
            jSONObject.putOpt(EventConstants.ExtraJson.ANDROID_INT, Integer.valueOf(Build.VERSION.SDK_INT));
            jSONObject.putOpt(EventConstants.ExtraJson.ROM_NAME, com.ss.android.socialbase.appdownloader.c.pt.fw());
            jSONObject.putOpt(EventConstants.ExtraJson.ROM_VERSION, com.ss.android.socialbase.appdownloader.c.pt.ux());
            jSONObject.putOpt(EventConstants.ExtraJson.TTDOWNLOADER, 1);
            jSONObject.putOpt(EventConstants.ExtraJson.FUNNEL_TYPE, Integer.valueOf(rgVar.ux()));
            if (rgVar.ux() == 2) {
                com.ss.android.downloadlib.utils.pp.df(jSONObject, rgVar);
            }
        } catch (Exception e) {
            bm.qx().rg(e, "getBaseJson");
        }
        return jSONObject;
    }

    private void rg(com.ss.android.download.api.model.df dfVar) {
        if (bm.rg() == null) {
            return;
        }
        if (dfVar.oh()) {
            bm.rg().rg(dfVar);
        } else {
            bm.rg().df(dfVar);
        }
    }
}
