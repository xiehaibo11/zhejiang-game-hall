package com.kwad.sdk.crash.report.request;

public class CrashReportResult extends com.kwad.sdk.core.network.BaseResultData implements com.kwad.sdk.core.b {
    public CrashReportResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getErrorMsg() {
            r1 = this;
            java.lang.String r0 = r1.errorMsg
            return r0
    }

    public long getResult() {
            r2 = this;
            int r0 = r2.result
            long r0 = (long) r0
            return r0
    }

    @Override
    public void parseJson(org.json.JSONObject r1) {
            r0 = this;
            super.parseJson(r1)
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r1 = this;
            org.json.JSONObject r0 = super.toJson()
            return r0
    }
}
