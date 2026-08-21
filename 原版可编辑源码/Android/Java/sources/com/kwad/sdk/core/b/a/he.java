package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdMatrixInfo;
import org.json.JSONObject;

public final class he implements com.kwad.sdk.core.d<AdMatrixInfo.RewardWebTaskCloseInfo> {
    private static void a(AdMatrixInfo.RewardWebTaskCloseInfo rewardWebTaskCloseInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        rewardWebTaskCloseInfo.templateId = jSONObject.optString("templateId");
        if (rewardWebTaskCloseInfo.templateId == JSONObject.NULL) {
            rewardWebTaskCloseInfo.templateId = "";
        }
    }

    private static JSONObject b(AdMatrixInfo.RewardWebTaskCloseInfo rewardWebTaskCloseInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (rewardWebTaskCloseInfo.templateId != null && !rewardWebTaskCloseInfo.templateId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "templateId", rewardWebTaskCloseInfo.templateId);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo.RewardWebTaskCloseInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo.RewardWebTaskCloseInfo) bVar, jSONObject);
    }
}
