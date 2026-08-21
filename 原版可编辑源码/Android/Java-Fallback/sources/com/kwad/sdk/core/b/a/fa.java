package com.kwad.sdk.core.b.a;

public final class fa implements com.kwad.sdk.core.d<com.kwad.sdk.utils.b.a> {
    public fa() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.utils.b.a r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "put_count"
            int r0 = r2.optInt(r0)
            r1.aLC = r0
            java.lang.String r0 = "get_failed_count"
            int r0 = r2.optInt(r0)
            r1.aLD = r0
            java.lang.String r0 = "get_success_count"
            int r2 = r2.optInt(r0)
            r1.aLE = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.utils.b.a r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.aLC
            if (r0 == 0) goto L12
            int r0 = r2.aLC
            java.lang.String r1 = "put_count"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.aLD
            if (r0 == 0) goto L1d
            int r0 = r2.aLD
            java.lang.String r1 = "get_failed_count"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1d:
            int r0 = r2.aLE
            if (r0 == 0) goto L28
            int r2 = r2.aLE
            java.lang.String r0 = "get_success_count"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L28:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.utils.b.a r1 = (com.kwad.sdk.utils.b.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.utils.b.a r1 = (com.kwad.sdk.utils.b.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
