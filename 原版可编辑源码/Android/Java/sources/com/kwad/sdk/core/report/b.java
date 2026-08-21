package com.kwad.sdk.core.report;

import org.json.JSONObject;

public class b extends com.kwad.sdk.core.response.a.a {
    public String aqC;

    @Override
    public void afterParseJson(JSONObject jSONObject) {
        super.afterParseJson(jSONObject);
        if (jSONObject != null) {
            this.aqC = jSONObject.optString("adTrackLog");
        }
    }

    @Override
    public void afterToJson(JSONObject jSONObject) {
        super.afterToJson(jSONObject);
        com.kwad.sdk.utils.t.putValue(jSONObject, "adTrackLog", this.aqC);
    }
}
