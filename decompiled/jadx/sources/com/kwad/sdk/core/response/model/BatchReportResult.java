package com.kwad.sdk.core.response.model;

import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.utils.t;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class BatchReportResult extends BaseResultData implements com.kwad.sdk.core.b {
    private long interval;

    public String getErrorMsg() {
        return this.errorMsg;
    }

    public long getInterval() {
        return this.interval;
    }

    public long getResult() {
        return this.result;
    }

    @Override // com.kwad.sdk.core.network.BaseResultData, com.kwad.sdk.core.b
    public void parseJson(JSONObject jSONObject) {
        super.parseJson(jSONObject);
        if (jSONObject == null) {
            return;
        }
        this.interval = jSONObject.optLong("interval");
    }

    @Override // com.kwad.sdk.core.network.BaseResultData, com.kwad.sdk.core.b
    public JSONObject toJson() {
        JSONObject json = super.toJson();
        t.putValue(json, "interval", this.interval);
        return json;
    }
}
