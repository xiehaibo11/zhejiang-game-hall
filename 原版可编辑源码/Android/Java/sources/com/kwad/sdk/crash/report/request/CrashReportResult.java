package com.kwad.sdk.crash.report.request;

import com.kwad.sdk.core.network.BaseResultData;
import org.json.JSONObject;

public class CrashReportResult extends BaseResultData implements com.kwad.sdk.core.b {
    public String getErrorMsg() {
        return this.errorMsg;
    }

    public long getResult() {
        return this.result;
    }

    @Override
    public void parseJson(JSONObject jSONObject) {
        super.parseJson(jSONObject);
    }

    @Override
    public JSONObject toJson() {
        return super.toJson();
    }
}
