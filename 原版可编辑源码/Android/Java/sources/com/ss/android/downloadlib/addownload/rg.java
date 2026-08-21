package com.ss.android.downloadlib.addownload;

import android.os.Looper;
import android.os.Message;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.utils.hq;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import com.ss.android.socialbase.downloader.utils.SystemUtils;
import org.json.JSONObject;

public class rg implements hq.rg {
    private static rg df;
    private static final String rg = rg.class.getSimpleName();
    private long pt;
    private com.ss.android.downloadlib.utils.hq q = new com.ss.android.downloadlib.utils.hq(Looper.getMainLooper(), this);

    public static rg rg() {
        if (df == null) {
            synchronized (rg.class) {
                if (df == null) {
                    df = new rg();
                }
            }
        }
        return df;
    }

    private rg() {
    }

    public void rg(DownloadInfo downloadInfo, long j, long j2, String str, String str2, String str3, String str4) {
        com.ss.android.downloadlib.addownload.model.rg rgVar = new com.ss.android.downloadlib.addownload.model.rg(downloadInfo.getId(), j, j2, str, str2, str3, str4);
        if (DownloadSetting.obtain(downloadInfo.getId()).optInt("back_miui_silent_install", 1) == 0 && ((com.ss.android.socialbase.appdownloader.c.pt.hq() || com.ss.android.socialbase.appdownloader.c.pt.oh()) && SystemUtils.checkServiceExists(bm.getContext(), "com.miui.securitycore", "com.miui.enterprise.service.EntInstallService"))) {
            if (DownloadUtils.getBoolean(downloadInfo.getTempCacheData().get("extra_silent_install_succeed"), false)) {
                Message messageObtainMessage = this.q.obtainMessage(200, rgVar);
                messageObtainMessage.arg1 = 2;
                this.q.sendMessageDelayed(messageObtainMessage, r1.optInt("check_silent_install_interval", BaseConstants.Time.MINUTE));
                return;
            }
            com.ss.android.downloadad.api.rg.df dfVarPt = com.ss.android.downloadlib.addownload.model.c.rg().pt(rgVar.df);
            JSONObject jSONObject = new JSONObject();
            int i = -1;
            try {
                jSONObject.put(EventConstants.ExtraJson.KEY_TYPE, "miui_silent_install");
                jSONObject.put(EventConstants.ExtraJson.KEY_MESSAGE, "miui_silent_install_failed: has not started service");
                i = 5;
            } catch (Exception unused) {
            }
            bm.c().rg(null, new BaseException(i, jSONObject.toString()), i);
            AdEventHandler.rg().rg(EventConstants.Tag.EMBEDED_AD, EventConstants.Label.ANTI_HIJACK_RESULT, jSONObject, dfVarPt);
        }
        if (com.ss.android.downloadlib.utils.pt.q()) {
            long jCurrentTimeMillis = System.currentTimeMillis() - this.pt;
            long jPt = com.ss.android.downloadlib.utils.pt.pt();
            if (jCurrentTimeMillis < com.ss.android.downloadlib.utils.pt.pp()) {
                long jPp = com.ss.android.downloadlib.utils.pt.pp() - jCurrentTimeMillis;
                jPt += jPp;
                this.pt = System.currentTimeMillis() + jPp;
            } else {
                this.pt = System.currentTimeMillis();
            }
            com.ss.android.downloadlib.utils.hq hqVar = this.q;
            hqVar.sendMessageDelayed(hqVar.obtainMessage(200, rgVar), jPt);
        }
    }

    private void rg(com.ss.android.downloadlib.addownload.model.rg rgVar, int i) {
        if (bm.b() == null || bm.b().rg() || rgVar == null) {
            return;
        }
        if (2 == i) {
            com.ss.android.downloadad.api.rg.df dfVarPt = com.ss.android.downloadlib.addownload.model.c.rg().pt(rgVar.df);
            JSONObject jSONObject = new JSONObject();
            int i2 = -1;
            try {
                jSONObject.put(EventConstants.ExtraJson.KEY_TYPE, "miui_silent_install");
                if (com.ss.android.downloadlib.utils.b.pt(bm.getContext(), rgVar.pt)) {
                    jSONObject.put(EventConstants.ExtraJson.KEY_MESSAGE, "miui_silent_install_succeed");
                    i2 = 4;
                } else {
                    jSONObject.put(EventConstants.ExtraJson.KEY_MESSAGE, "miui_silent_install_failed: has started service");
                    i2 = 5;
                }
            } catch (Exception unused) {
            }
            bm.c().rg(null, new BaseException(i2, jSONObject.toString()), i2);
            AdEventHandler.rg().rg(EventConstants.Tag.EMBEDED_AD, EventConstants.Label.ANTI_HIJACK_RESULT, jSONObject, dfVarPt);
        }
        if (com.ss.android.downloadlib.utils.b.pt(bm.getContext(), rgVar.pt)) {
            AdEventHandler.rg().rg(EventConstants.Label.DELAY_INSTALLED, rgVar.df);
            return;
        }
        if (!com.ss.android.downloadlib.utils.b.rg(rgVar.fw)) {
            AdEventHandler.rg().rg(EventConstants.Label.DELAY_INSTALL_LOST, rgVar.df);
        } else if (com.ss.android.downloadlib.addownload.rg.rg.rg().rg(rgVar.pt)) {
            AdEventHandler.rg().rg(EventConstants.Label.DELAY_INSTALL_CONFLICT, rgVar.df);
        } else {
            AdEventHandler.rg().rg(EventConstants.Label.DELAY_INSTALL_START, rgVar.df);
            com.ss.android.socialbase.appdownloader.pt.rg(bm.getContext(), (int) rgVar.rg);
        }
    }

    @Override
    public void rg(Message message) {
        if (message.what != 200) {
            return;
        }
        rg((com.ss.android.downloadlib.addownload.model.rg) message.obj, message.arg1);
    }
}
