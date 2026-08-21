package com.kwad.sdk.core.report;

public class b extends com.kwad.sdk.core.response.a.a {
    public java.lang.String aqC;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void afterParseJson(org.json.JSONObject r2) {
            r1 = this;
            super.afterParseJson(r2)
            if (r2 == 0) goto Ld
            java.lang.String r0 = "adTrackLog"
            java.lang.String r2 = r2.optString(r0)
            r1.aqC = r2
        Ld:
            return
    }

    @Override
    public void afterToJson(org.json.JSONObject r3) {
            r2 = this;
            super.afterToJson(r3)
            java.lang.String r0 = r2.aqC
            java.lang.String r1 = "adTrackLog"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            return
    }
}
