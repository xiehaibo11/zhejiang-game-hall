package com.kwad.sdk.core.b.a;

public final class bm implements com.kwad.sdk.core.d<com.kwad.sdk.core.report.k> {
    public bm() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.report.k r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "llsid"
            long r0 = r3.optLong(r0)
            r2.llsid = r0
            java.lang.String r0 = "creative_id"
            long r0 = r3.optLong(r0)
            r2.creativeId = r0
            java.lang.String r0 = "score"
            int r0 = r3.optInt(r0)
            r2.score = r0
            java.lang.String r0 = "is_bidding"
            int r0 = r3.optInt(r0)
            r2.aqZ = r0
            java.lang.String r0 = "source"
            java.lang.String r3 = r3.optString(r0)
            r2.source = r3
            java.lang.String r3 = r2.source
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r3 != r0) goto L35
            java.lang.String r3 = ""
            r2.source = r3
        L35:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.report.k r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            long r0 = r5.llsid
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r5.llsid
            java.lang.String r4 = "llsid"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L16:
            long r0 = r5.creativeId
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L23
            long r0 = r5.creativeId
            java.lang.String r2 = "creative_id"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L23:
            int r0 = r5.score
            if (r0 == 0) goto L2e
            int r0 = r5.score
            java.lang.String r1 = "score"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L2e:
            int r0 = r5.aqZ
            if (r0 == 0) goto L39
            int r0 = r5.aqZ
            java.lang.String r1 = "is_bidding"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L39:
            java.lang.String r0 = r5.source
            if (r0 == 0) goto L4e
            java.lang.String r0 = r5.source
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L4e
            java.lang.String r5 = r5.source
            java.lang.String r0 = "source"
            com.kwad.sdk.utils.t.putValue(r6, r0, r5)
        L4e:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.report.k r1 = (com.kwad.sdk.core.report.k) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.report.k r1 = (com.kwad.sdk.core.report.k) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
