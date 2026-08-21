package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.tencent.connect.common.Constants;
import org.json.JSONObject;

public final class hd implements com.kwad.sdk.core.d<AdMatrixInfo.RewardVideoTaskInfo> {
    private static void a(AdMatrixInfo.RewardVideoTaskInfo rewardVideoTaskInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        rewardVideoTaskInfo.templateId = jSONObject.optString("templateId");
        if (rewardVideoTaskInfo.templateId == JSONObject.NULL) {
            rewardVideoTaskInfo.templateId = "";
        }
        rewardVideoTaskInfo.showTime = jSONObject.optInt("showTime", new Integer(Constants.VIA_REPORT_TYPE_WPA_STATE).intValue());
        rewardVideoTaskInfo.duration = jSONObject.optInt(com.tkay.expressad.foundation.d.r.ag, new Integer("10").intValue());
        rewardVideoTaskInfo.taskType = jSONObject.optInt("taskType", new Integer("0").intValue());
        rewardVideoTaskInfo.thresholdTime = jSONObject.optInt("thresholdTime", new Integer("10").intValue());
    }

    private static JSONObject b(AdMatrixInfo.RewardVideoTaskInfo rewardVideoTaskInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (rewardVideoTaskInfo.templateId != null && !rewardVideoTaskInfo.templateId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "templateId", rewardVideoTaskInfo.templateId);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "showTime", rewardVideoTaskInfo.showTime);
        com.kwad.sdk.utils.t.putValue(jSONObject, com.tkay.expressad.foundation.d.r.ag, rewardVideoTaskInfo.duration);
        com.kwad.sdk.utils.t.putValue(jSONObject, "taskType", rewardVideoTaskInfo.taskType);
        com.kwad.sdk.utils.t.putValue(jSONObject, "thresholdTime", rewardVideoTaskInfo.thresholdTime);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo.RewardVideoTaskInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo.RewardVideoTaskInfo) bVar, jSONObject);
    }
}
