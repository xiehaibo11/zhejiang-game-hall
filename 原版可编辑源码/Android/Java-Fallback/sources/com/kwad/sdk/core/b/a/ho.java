package com.kwad.sdk.core.b.a;

public final class ho implements com.kwad.sdk.core.d<com.kwad.components.ad.reward.j.s.a> {
    public ho() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.ad.reward.j.s.a r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "needCloseNeo"
            boolean r2 = r2.optBoolean(r0)
            r1.xH = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.components.ad.reward.j.s.a r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L7
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
        L7:
            boolean r0 = r1.xH
            if (r0 == 0) goto L12
            boolean r1 = r1.xH
            java.lang.String r0 = "needCloseNeo"
            com.kwad.sdk.utils.t.putValue(r2, r0, r1)
        L12:
            return r2
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.reward.j.s$a r1 = (com.kwad.components.ad.reward.j.s.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.reward.j.s$a r1 = (com.kwad.components.ad.reward.j.s.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
