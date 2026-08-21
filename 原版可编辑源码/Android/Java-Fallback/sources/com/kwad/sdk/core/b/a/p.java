package com.kwad.sdk.core.b.a;

public final class p implements com.kwad.sdk.core.d<com.kwad.components.core.k.a> {
    public p() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.k.a r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "currentActiveCount"
            int r0 = r3.optInt(r0)
            r2.Le = r0
            java.lang.String r0 = "lastForceActiveTimestamp"
            long r0 = r3.optLong(r0)
            r2.Lf = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.k.a r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            int r0 = r4.Le
            if (r0 == 0) goto L12
            int r0 = r4.Le
            java.lang.String r1 = "currentActiveCount"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L12:
            long r0 = r4.Lf
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L21
            long r0 = r4.Lf
            java.lang.String r4 = "lastForceActiveTimestamp"
            com.kwad.sdk.utils.t.putValue(r5, r4, r0)
        L21:
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.k.a r1 = (com.kwad.components.core.k.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.k.a r1 = (com.kwad.components.core.k.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
