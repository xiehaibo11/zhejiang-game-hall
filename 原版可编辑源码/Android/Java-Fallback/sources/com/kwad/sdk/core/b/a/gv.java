package com.kwad.sdk.core.b.a;

public final class gv implements com.kwad.sdk.core.d<com.kwad.sdk.ranger.b.a.b> {
    public gv() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.ranger.b.a.b r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "func_ratio_count"
            int r0 = r4.optInt(r0)
            r3.avp = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.aHr = r0
            java.lang.String r0 = "func_values"
            org.json.JSONArray r4 = r4.optJSONArray(r0)
            if (r4 == 0) goto L35
            r0 = 0
        L1b:
            int r1 = r4.length()
            if (r0 >= r1) goto L35
            com.kwad.sdk.ranger.b.a.a r1 = new com.kwad.sdk.ranger.b.a.a
            r1.<init>()
            org.json.JSONObject r2 = r4.optJSONObject(r0)
            r1.parseJson(r2)
            java.util.List<com.kwad.sdk.ranger.b.a.a> r2 = r3.aHr
            r2.add(r1)
            int r0 = r0 + 1
            goto L1b
        L35:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.ranger.b.a.b r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.avp
            if (r0 == 0) goto L12
            int r0 = r2.avp
            java.lang.String r1 = "func_ratio_count"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            java.util.List<com.kwad.sdk.ranger.b.a.a> r2 = r2.aHr
            java.lang.String r0 = "func_values"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.ranger.b.a.b r1 = (com.kwad.sdk.ranger.b.a.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.ranger.b.a.b r1 = (com.kwad.sdk.ranger.b.a.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
