package com.kwad.sdk.core.response.model;

public class BatchReportResult extends com.kwad.sdk.core.network.BaseResultData implements com.kwad.sdk.core.b {
    private long interval;

    public BatchReportResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getErrorMsg() {
            r1 = this;
            java.lang.String r0 = r1.errorMsg
            return r0
    }

    public long getInterval() {
            r2 = this;
            long r0 = r2.interval
            return r0
    }

    public long getResult() {
            r2 = this;
            int r0 = r2.result
            long r0 = (long) r0
            return r0
    }

    @Override
    public void parseJson(org.json.JSONObject r3) {
            r2 = this;
            super.parseJson(r3)
            if (r3 != 0) goto L6
            return
        L6:
            java.lang.String r0 = "interval"
            long r0 = r3.optLong(r0)
            r2.interval = r0
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r4 = this;
            org.json.JSONObject r0 = super.toJson()
            long r1 = r4.interval
            java.lang.String r3 = "interval"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            return r0
    }
}
