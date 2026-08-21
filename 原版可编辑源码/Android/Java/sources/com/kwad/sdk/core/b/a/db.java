package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdStyleInfo;
import org.json.JSONObject;

public final class db implements com.kwad.sdk.core.d<AdStyleInfo.FeedAdInfo> {
    private static void a(AdStyleInfo.FeedAdInfo feedAdInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        feedAdInfo.templateConfig = jSONObject.optString("templateConfig");
        if (feedAdInfo.templateConfig == JSONObject.NULL) {
            feedAdInfo.templateConfig = "";
        }
        feedAdInfo.heightRatio = jSONObject.optDouble("heightRatio");
    }

    private static JSONObject b(AdStyleInfo.FeedAdInfo feedAdInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (feedAdInfo.templateConfig != null && !feedAdInfo.templateConfig.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "templateConfig", feedAdInfo.templateConfig);
        }
        if (feedAdInfo.heightRatio != 0.0d) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "heightRatio", feedAdInfo.heightRatio);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdStyleInfo.FeedAdInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdStyleInfo.FeedAdInfo) bVar, jSONObject);
    }
}
