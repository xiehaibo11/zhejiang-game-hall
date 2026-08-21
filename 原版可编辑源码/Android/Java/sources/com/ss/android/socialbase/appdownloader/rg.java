package com.ss.android.socialbase.appdownloader;

import android.text.TextUtils;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import org.json.JSONObject;

public class rg {
    public int df = -1;
    public String pp;
    public String pt;
    public String q;
    public String rg;

    public String rg() {
        return df().toString();
    }

    public JSONObject df() {
        JSONObject jSONObject = new JSONObject();
        rg(jSONObject);
        return jSONObject;
    }

    public void rg(JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        try {
            jSONObject.put("ah_plan_type", this.rg);
            jSONObject.put("error_code", String.valueOf(this.df));
            jSONObject.put("error_msg", this.q);
            jSONObject.put("real_device_plan", this.pt);
            jSONObject.put(DownloadSettingKeys.AhPlans.KEY_AH_DEVICE_PLANS, this.pp);
        } catch (Throwable unused) {
        }
    }

    public static rg rg(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        rg rgVar = new rg();
        try {
            JSONObject jSONObject = new JSONObject(str);
            rgVar.pp = jSONObject.optString(DownloadSettingKeys.AhPlans.KEY_AH_DEVICE_PLANS, null);
            rgVar.pt = jSONObject.optString("real_device_plan", null);
            rgVar.q = jSONObject.optString("error_msg", null);
            rgVar.rg = jSONObject.optString("ah_plan_type", null);
            String strOptString = jSONObject.optString("error_code");
            if (TextUtils.isEmpty(strOptString)) {
                rgVar.df = -1;
            } else {
                rgVar.df = Integer.parseInt(strOptString);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return rgVar;
    }
}
