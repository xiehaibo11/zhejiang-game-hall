package com.kwad.sdk.core.b.a;

public final class ao implements com.kwad.sdk.core.d<com.kwad.sdk.ranger.a.a> {
    public ao() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.ranger.a.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "nodeClassName"
            java.lang.String r0 = r4.optString(r0)
            r3.aHb = r0
            java.lang.String r0 = r3.aHb
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.aHb = r2
        L15:
            java.lang.String r0 = "childFieldName"
            java.lang.String r0 = r4.optString(r0)
            r3.aHc = r0
            java.lang.String r0 = r3.aHc
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.aHc = r2
        L25:
            java.lang.String r0 = "childFieldIsStatic"
            boolean r0 = r4.optBoolean(r0)
            r3.aHd = r0
            java.lang.String r0 = "reportKey"
            java.lang.String r0 = r4.optString(r0)
            r3.aHe = r0
            java.lang.String r0 = r3.aHe
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3d
            r3.aHe = r2
        L3d:
            com.kwad.sdk.ranger.a.a$b r0 = new com.kwad.sdk.ranger.a.a$b
            r0.<init>()
            r3.aHf = r0
            com.kwad.sdk.ranger.a.a$b r0 = r3.aHf
            java.lang.String r1 = "childMethod"
            org.json.JSONObject r1 = r4.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.ranger.a.a r0 = new com.kwad.sdk.ranger.a.a
            r0.<init>()
            r3.aHg = r0
            com.kwad.sdk.ranger.a.a r3 = r3.aHg
            java.lang.String r0 = "deepNode"
            org.json.JSONObject r4 = r4.optJSONObject(r0)
            r3.parseJson(r4)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.ranger.a.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.aHb
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.aHb
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.aHb
            java.lang.String r2 = "nodeClassName"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.aHc
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.aHc
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.aHc
            java.lang.String r2 = "childFieldName"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L2f:
            boolean r0 = r3.aHd
            if (r0 == 0) goto L3a
            boolean r0 = r3.aHd
            java.lang.String r2 = "childFieldIsStatic"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L3a:
            java.lang.String r0 = r3.aHe
            if (r0 == 0) goto L4d
            java.lang.String r0 = r3.aHe
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L4d
            java.lang.String r0 = r3.aHe
            java.lang.String r1 = "reportKey"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L4d:
            com.kwad.sdk.ranger.a.a$b r0 = r3.aHf
            java.lang.String r1 = "childMethod"
            com.kwad.sdk.utils.t.a(r4, r1, r0)
            com.kwad.sdk.ranger.a.a r3 = r3.aHg
            java.lang.String r0 = "deepNode"
            com.kwad.sdk.utils.t.a(r4, r0, r3)
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.ranger.a.a r1 = (com.kwad.sdk.ranger.a.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.ranger.a.a r1 = (com.kwad.sdk.ranger.a.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
