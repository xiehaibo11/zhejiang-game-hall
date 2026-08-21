package com.ss.android.downloadlib.addownload.q;

import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import org.json.JSONException;
import org.json.JSONObject;

public class pp implements pt {
    @Override
    public boolean rg(com.ss.android.downloadad.api.rg.df dfVar, int i, q qVar) {
        if (dfVar == null || !df(dfVar.qx())) {
            return false;
        }
        if (System.currentTimeMillis() - dfVar.s() > rg(dfVar.qx())) {
            return false;
        }
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.putOpt(EventConstants.ExtraJson.PAUSE_OPTIMISE_TYPE, "mistake_click");
        } catch (JSONException e) {
            e.printStackTrace();
        }
        AdEventHandler.rg().rg(EventConstants.UnityLabel.PAUSE_OPTIMISE, jSONObject, dfVar);
        return true;
    }

    private long rg(int i) {
        return DownloadSetting.obtain(i).optInt("pause_optimise_mistake_click_interval", 300);
    }

    private boolean df(int i) {
        return DownloadSetting.obtain(i).optInt("pause_optimise_mistake_click_interval_switch", 0) == 1;
    }
}
