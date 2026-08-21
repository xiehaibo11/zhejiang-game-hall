package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdInfo;
import org.json.JSONObject;

public final class h implements com.kwad.sdk.core.d<AdInfo.AdAggregateInfo> {
    private static void a(AdInfo.AdAggregateInfo adAggregateInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        adAggregateInfo.aggregateAdType = jSONObject.optInt("aggregateAdType");
        adAggregateInfo.upperTab = jSONObject.optString("upperTab");
        if (adAggregateInfo.upperTab == JSONObject.NULL) {
            adAggregateInfo.upperTab = "";
        }
        adAggregateInfo.hotTagUrl = jSONObject.optString("hotTagUrl");
        if (adAggregateInfo.hotTagUrl == JSONObject.NULL) {
            adAggregateInfo.hotTagUrl = "";
        }
    }

    private static JSONObject b(AdInfo.AdAggregateInfo adAggregateInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (adAggregateInfo.aggregateAdType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "aggregateAdType", adAggregateInfo.aggregateAdType);
        }
        if (adAggregateInfo.upperTab != null && !adAggregateInfo.upperTab.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "upperTab", adAggregateInfo.upperTab);
        }
        if (adAggregateInfo.hotTagUrl != null && !adAggregateInfo.hotTagUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "hotTagUrl", adAggregateInfo.hotTagUrl);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdInfo.AdAggregateInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdInfo.AdAggregateInfo) bVar, jSONObject);
    }
}
