package com.kwad.sdk.core.b.a;

public final class hj implements com.kwad.sdk.core.d<com.kwad.sdk.i.b.a> {
    public hj() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.i.b.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ds"
            int r0 = r4.optInt(r0)
            r3.aCX = r0
            java.lang.String r0 = "sv"
            java.lang.String r0 = r4.optString(r0)
            r3.sdkVersion = r0
            java.lang.String r0 = r3.sdkVersion
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L1d
            r3.sdkVersion = r2
        L1d:
            java.lang.String r0 = "spv"
            java.lang.String r4 = r4.optString(r0)
            r3.aCY = r4
            java.lang.String r4 = r3.aCY
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L2d
            r3.aCY = r2
        L2d:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.i.b.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            int r0 = r3.aCX
            if (r0 == 0) goto L12
            int r0 = r3.aCX
            java.lang.String r1 = "ds"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L12:
            java.lang.String r0 = r3.sdkVersion
            java.lang.String r1 = ""
            if (r0 == 0) goto L27
            java.lang.String r0 = r3.sdkVersion
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L27
            java.lang.String r0 = r3.sdkVersion
            java.lang.String r2 = "sv"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L27:
            java.lang.String r0 = r3.aCY
            if (r0 == 0) goto L3a
            java.lang.String r0 = r3.aCY
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3a
            java.lang.String r3 = r3.aCY
            java.lang.String r0 = "spv"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L3a:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.i.b$a r1 = (com.kwad.sdk.i.b.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.i.b$a r1 = (com.kwad.sdk.i.b.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
