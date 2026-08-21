package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdStyleInfo;
import org.json.JSONObject;

public final class cj implements com.kwad.sdk.core.d<AdStyleInfo.PlayDetailInfo.DetailTopToolBarInfo> {
    private static void a(AdStyleInfo.PlayDetailInfo.DetailTopToolBarInfo detailTopToolBarInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        detailTopToolBarInfo.callButtonShowTime = jSONObject.optLong("callButtonShowTime");
        detailTopToolBarInfo.callButtonDescription = jSONObject.optString("callButtonDescription");
        if (detailTopToolBarInfo.callButtonDescription == JSONObject.NULL) {
            detailTopToolBarInfo.callButtonDescription = "";
        }
        detailTopToolBarInfo.rewardIconUrl = jSONObject.optString("rewardIconUrl");
        if (detailTopToolBarInfo.rewardIconUrl == JSONObject.NULL) {
            detailTopToolBarInfo.rewardIconUrl = "";
        }
        detailTopToolBarInfo.rewardCallDescription = jSONObject.optString("rewardCallDescription");
        if (detailTopToolBarInfo.rewardCallDescription == JSONObject.NULL) {
            detailTopToolBarInfo.rewardCallDescription = "";
        }
        detailTopToolBarInfo.style = jSONObject.optInt("style");
        detailTopToolBarInfo.maxTimeOut = jSONObject.optLong("maxTimeOut");
    }

    private static JSONObject b(AdStyleInfo.PlayDetailInfo.DetailTopToolBarInfo detailTopToolBarInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (detailTopToolBarInfo.callButtonShowTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "callButtonShowTime", detailTopToolBarInfo.callButtonShowTime);
        }
        if (detailTopToolBarInfo.callButtonDescription != null && !detailTopToolBarInfo.callButtonDescription.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "callButtonDescription", detailTopToolBarInfo.callButtonDescription);
        }
        if (detailTopToolBarInfo.rewardIconUrl != null && !detailTopToolBarInfo.rewardIconUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "rewardIconUrl", detailTopToolBarInfo.rewardIconUrl);
        }
        if (detailTopToolBarInfo.rewardCallDescription != null && !detailTopToolBarInfo.rewardCallDescription.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "rewardCallDescription", detailTopToolBarInfo.rewardCallDescription);
        }
        if (detailTopToolBarInfo.style != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "style", detailTopToolBarInfo.style);
        }
        if (detailTopToolBarInfo.maxTimeOut != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "maxTimeOut", detailTopToolBarInfo.maxTimeOut);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdStyleInfo.PlayDetailInfo.DetailTopToolBarInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdStyleInfo.PlayDetailInfo.DetailTopToolBarInfo) bVar, jSONObject);
    }
}
