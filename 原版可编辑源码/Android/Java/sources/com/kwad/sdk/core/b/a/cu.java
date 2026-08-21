package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdStyleInfo;
import org.json.JSONObject;

public final class cu implements com.kwad.sdk.core.d<AdStyleInfo.PlayEndInfo.EndTopToolBarInfo> {
    private static void a(AdStyleInfo.PlayEndInfo.EndTopToolBarInfo endTopToolBarInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        endTopToolBarInfo.callButtonDescription = jSONObject.optString("callButtonDescription");
        if (endTopToolBarInfo.callButtonDescription == JSONObject.NULL) {
            endTopToolBarInfo.callButtonDescription = "";
        }
        endTopToolBarInfo.rewardIconUrl = jSONObject.optString("rewardIconUrl");
        if (endTopToolBarInfo.rewardIconUrl == JSONObject.NULL) {
            endTopToolBarInfo.rewardIconUrl = "";
        }
    }

    private static JSONObject b(AdStyleInfo.PlayEndInfo.EndTopToolBarInfo endTopToolBarInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (endTopToolBarInfo.callButtonDescription != null && !endTopToolBarInfo.callButtonDescription.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "callButtonDescription", endTopToolBarInfo.callButtonDescription);
        }
        if (endTopToolBarInfo.rewardIconUrl != null && !endTopToolBarInfo.rewardIconUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "rewardIconUrl", endTopToolBarInfo.rewardIconUrl);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdStyleInfo.PlayEndInfo.EndTopToolBarInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdStyleInfo.PlayEndInfo.EndTopToolBarInfo) bVar, jSONObject);
    }
}
