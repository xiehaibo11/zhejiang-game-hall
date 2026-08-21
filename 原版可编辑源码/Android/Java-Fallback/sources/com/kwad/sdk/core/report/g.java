package com.kwad.sdk.core.report;

public abstract class g extends com.kwad.sdk.core.response.a.a {
    public java.lang.String actionId;
    private org.json.JSONObject mMergeJsonData;

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void afterParseJson(org.json.JSONObject r2) {
            r1 = this;
            super.afterParseJson(r2)
            if (r2 == 0) goto Ld
            java.lang.String r0 = "mMergeJsonData"
            org.json.JSONObject r2 = r2.optJSONObject(r0)
            r1.mMergeJsonData = r2
        Ld:
            return
    }

    @Override
    public void afterToJson(org.json.JSONObject r3) {
            r2 = this;
            super.afterToJson(r3)
            org.json.JSONObject r0 = r2.mMergeJsonData
            if (r0 == 0) goto Lc
            java.lang.String r1 = "mMergeJsonData"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        Lc:
            return
    }

    public org.json.JSONObject buildReportData() {
            r2 = this;
            org.json.JSONObject r0 = r2.toJson()
            org.json.JSONObject r1 = r2.mMergeJsonData
            if (r1 == 0) goto L12
            java.lang.String r1 = "mMergeJsonData"
            r0.remove(r1)
            org.json.JSONObject r1 = r2.mMergeJsonData
            com.kwad.sdk.utils.u.merge(r0, r1)
        L12:
            return r0
    }

    public void setJsonMergeData(org.json.JSONObject r1) {
            r0 = this;
            r0.mMergeJsonData = r1
            return
    }
}
