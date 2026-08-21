package com.kwad.sdk.core.b.a;

public final class iw implements com.kwad.sdk.core.d<com.kwad.components.ad.g.a.a.b.a> {
    public iw() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.ad.g.a.a.b.a r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "timerName"
            int r0 = r2.optInt(r0)
            r1.nJ = r0
            java.lang.String r0 = "time"
            int r2 = r2.optInt(r0)
            r1.nK = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.components.ad.g.a.a.b.a r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.nJ
            if (r0 == 0) goto L12
            int r0 = r2.nJ
            java.lang.String r1 = "timerName"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.nK
            if (r0 == 0) goto L1d
            int r2 = r2.nK
            java.lang.String r0 = "time"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L1d:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.g.a.a.b$a r1 = (com.kwad.components.ad.g.a.a.b.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.g.a.a.b$a r1 = (com.kwad.components.ad.g.a.a.b.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
