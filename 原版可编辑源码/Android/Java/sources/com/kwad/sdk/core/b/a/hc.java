package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.tencent.connect.common.Constants;
import org.json.JSONObject;

public final class hc implements com.kwad.sdk.core.d<AdMatrixInfo.RewardVideoInteractInfo> {
    private static void a(AdMatrixInfo.RewardVideoInteractInfo rewardVideoInteractInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        rewardVideoInteractInfo.templateId = jSONObject.optString("templateId");
        if (rewardVideoInteractInfo.templateId == JSONObject.NULL) {
            rewardVideoInteractInfo.templateId = "";
        }
        rewardVideoInteractInfo.showTime = jSONObject.optInt("showTime", new Integer(Constants.VIA_REPORT_TYPE_WPA_STATE).intValue());
        rewardVideoInteractInfo.duration = jSONObject.optInt(com.tkay.expressad.foundation.d.r.ag, new Integer("10").intValue());
        rewardVideoInteractInfo.rewardTime = jSONObject.optInt("rewardTime", new Integer("5").intValue());
        rewardVideoInteractInfo.intervalShow = jSONObject.optInt("intervalShow", new Integer("3").intValue());
        rewardVideoInteractInfo.dayMaxLimit = jSONObject.optInt("dayMaxLimit", new Integer("2").intValue());
        rewardVideoInteractInfo.style = jSONObject.optInt("style");
        rewardVideoInteractInfo.successfulMsg = jSONObject.optString("successfulMsg");
        if (rewardVideoInteractInfo.successfulMsg == JSONObject.NULL) {
            rewardVideoInteractInfo.successfulMsg = "";
        }
        rewardVideoInteractInfo.errorMsg = jSONObject.optString("errorMsg");
        if (rewardVideoInteractInfo.errorMsg == JSONObject.NULL) {
            rewardVideoInteractInfo.errorMsg = "";
        }
        rewardVideoInteractInfo.styleInfo = new AdMatrixInfo.StyleInfo();
        rewardVideoInteractInfo.styleInfo.parseJson(jSONObject.optJSONObject("styleInfo"));
    }

    private static JSONObject b(AdMatrixInfo.RewardVideoInteractInfo rewardVideoInteractInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (rewardVideoInteractInfo.templateId != null && !rewardVideoInteractInfo.templateId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "templateId", rewardVideoInteractInfo.templateId);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "showTime", rewardVideoInteractInfo.showTime);
        com.kwad.sdk.utils.t.putValue(jSONObject, com.tkay.expressad.foundation.d.r.ag, rewardVideoInteractInfo.duration);
        com.kwad.sdk.utils.t.putValue(jSONObject, "rewardTime", rewardVideoInteractInfo.rewardTime);
        com.kwad.sdk.utils.t.putValue(jSONObject, "intervalShow", rewardVideoInteractInfo.intervalShow);
        com.kwad.sdk.utils.t.putValue(jSONObject, "dayMaxLimit", rewardVideoInteractInfo.dayMaxLimit);
        if (rewardVideoInteractInfo.style != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "style", rewardVideoInteractInfo.style);
        }
        if (rewardVideoInteractInfo.successfulMsg != null && !rewardVideoInteractInfo.successfulMsg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "successfulMsg", rewardVideoInteractInfo.successfulMsg);
        }
        if (rewardVideoInteractInfo.errorMsg != null && !rewardVideoInteractInfo.errorMsg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "errorMsg", rewardVideoInteractInfo.errorMsg);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "styleInfo", rewardVideoInteractInfo.styleInfo);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo.RewardVideoInteractInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo.RewardVideoInteractInfo) bVar, jSONObject);
    }
}
