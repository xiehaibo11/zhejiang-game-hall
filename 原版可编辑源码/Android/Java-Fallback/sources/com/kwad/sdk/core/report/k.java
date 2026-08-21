package com.kwad.sdk.core.report;

public class k extends com.kwad.sdk.core.response.a.a {
    public int aqZ;
    public long creativeId;
    public long llsid;
    public int score;
    public java.lang.String source;

    public k() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "union"
            r1.source = r0
            return
    }

    public static com.kwad.sdk.core.report.k aJ(com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.sdk.core.report.k r0 = new com.kwad.sdk.core.report.k
            r0.<init>()
            long r1 = com.kwad.sdk.core.response.b.d.cq(r3)
            r0.creativeId = r1
            long r1 = com.kwad.sdk.core.response.b.d.cd(r3)
            r0.llsid = r1
            int r3 = com.kwad.sdk.core.response.b.d.cv(r3)
            r0.score = r3
            if (r3 <= 0) goto L1b
            r3 = 1
            goto L1c
        L1b:
            r3 = 0
        L1c:
            r0.aqZ = r3
            return r0
    }

    public final java.lang.String Cc() {
            r1 = this;
            org.json.JSONObject r0 = r1.toJson()
            java.lang.String r0 = r0.toString()
            return r0
    }
}
