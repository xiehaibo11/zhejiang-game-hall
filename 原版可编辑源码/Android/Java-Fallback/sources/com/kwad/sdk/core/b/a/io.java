package com.kwad.sdk.core.b.a;

public final class io implements com.kwad.sdk.core.d<com.kwad.sdk.ranger.a.a.b> {
    public io() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.ranger.a.a.b r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "name"
            java.lang.String r0 = r4.optString(r0)
            r3.name = r0
            java.lang.String r0 = r3.name
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L15
            java.lang.String r0 = ""
            r3.name = r0
        L15:
            java.lang.String r0 = "isStatic"
            boolean r0 = r4.optBoolean(r0)
            r3.aHo = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.aHp = r0
            java.lang.String r0 = "paramList"
            org.json.JSONArray r4 = r4.optJSONArray(r0)
            if (r4 == 0) goto L47
            r0 = 0
        L2d:
            int r1 = r4.length()
            if (r0 >= r1) goto L47
            com.kwad.sdk.ranger.a.a$a r1 = new com.kwad.sdk.ranger.a.a$a
            r1.<init>()
            org.json.JSONObject r2 = r4.optJSONObject(r0)
            r1.parseJson(r2)
            java.util.List<com.kwad.sdk.ranger.a.a$a> r2 = r3.aHp
            r2.add(r1)
            int r0 = r0 + 1
            goto L2d
        L47:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.ranger.a.a.b r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            java.lang.String r0 = r2.name
            if (r0 == 0) goto L1c
            java.lang.String r0 = r2.name
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r2.name
            java.lang.String r1 = "name"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1c:
            boolean r0 = r2.aHo
            if (r0 == 0) goto L27
            boolean r0 = r2.aHo
            java.lang.String r1 = "isStatic"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L27:
            java.util.List<com.kwad.sdk.ranger.a.a$a> r2 = r2.aHp
            java.lang.String r0 = "paramList"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.ranger.a.a$b r1 = (com.kwad.sdk.ranger.a.a.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.ranger.a.a$b r1 = (com.kwad.sdk.ranger.a.a.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
