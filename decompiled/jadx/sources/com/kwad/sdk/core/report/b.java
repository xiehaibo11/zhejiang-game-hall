package com.kwad.sdk.core.report;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class b extends com.kwad.sdk.core.response.a.a {
    public String aqC;

    @Override // com.kwad.sdk.core.response.a.a
    public void afterParseJson(JSONObject jSONObject) {
        super.afterParseJson(jSONObject);
        if (jSONObject != null) {
            this.aqC = jSONObject.optString("adTrackLog");
        }
    }

    @Override // com.kwad.sdk.core.response.a.a
    public void afterToJson(JSONObject jSONObject) {
        super.afterToJson(jSONObject);
        com.kwad.sdk.utils.t.putValue(jSONObject, "adTrackLog", this.aqC);
    }
}
