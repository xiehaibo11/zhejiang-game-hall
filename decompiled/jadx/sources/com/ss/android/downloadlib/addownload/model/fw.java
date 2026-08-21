package com.ss.android.downloadlib.addownload.model;

import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class fw {
    private static volatile fw rg;

    private fw() {
    }

    public static fw rg() {
        if (rg == null) {
            synchronized (pt.class) {
                if (rg == null) {
                    rg = new fw();
                }
            }
        }
        return rg;
    }

    public void rg(int i, int i2, com.ss.android.downloadad.api.rg.df dfVar) {
        if (dfVar == null) {
            return;
        }
        DownloadSetting downloadSettingObtain = DownloadSetting.obtain(dfVar.qx());
        if (downloadSettingObtain.optInt("report_api_hijack", 0) == 0) {
            return;
        }
        int i3 = i2 - i;
        if (i <= 0 || i3 <= downloadSettingObtain.optInt("check_api_hijack_version_code_diff", 500)) {
            return;
        }
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(EventConstants.ExtraJson.KEY_VERSION_CODE_DIFF, i3);
            jSONObject.put(EventConstants.ExtraJson.KEY_INSTALLED_VERSION_CODE, i2);
            jSONObject.put(EventConstants.ExtraJson.KEY_HIJACK_TYPE, 1);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        AdEventHandler.rg().df(EventConstants.Label.API_HIJACK, jSONObject, dfVar);
    }
}
