package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdMatrixInfo;
import org.json.JSONObject;

public final class dc implements com.kwad.sdk.core.d<AdMatrixInfo.FeedInfo> {
    private static void a(AdMatrixInfo.FeedInfo feedInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        feedInfo.interactionInfo = new AdMatrixInfo.AdInteractionInfo();
        feedInfo.interactionInfo.parseJson(jSONObject.optJSONObject("interactionInfo"));
    }

    private static JSONObject b(AdMatrixInfo.FeedInfo feedInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.a(jSONObject, "interactionInfo", feedInfo.interactionInfo);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo.FeedInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo.FeedInfo) bVar, jSONObject);
    }
}
