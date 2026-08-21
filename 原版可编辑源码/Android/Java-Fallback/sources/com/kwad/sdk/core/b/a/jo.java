package com.kwad.sdk.core.b.a;

public final class jo implements com.kwad.sdk.core.d<com.kwad.sdk.m.k.a> {
    public jo() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.m.k.a r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L3
            return
        L3:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.aML = r0
            java.lang.String r0 = "c_cns"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            r1 = 0
            if (r0 == 0) goto L28
            r2 = r1
        L14:
            int r3 = r0.length()
            if (r2 >= r3) goto L28
            java.util.List<java.lang.String> r3 = r5.aML
            java.lang.Object r4 = r0.opt(r2)
            java.lang.String r4 = (java.lang.String) r4
            r3.add(r4)
            int r2 = r2 + 1
            goto L14
        L28:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.aMM = r0
            java.lang.String r0 = "s_cns"
            org.json.JSONArray r6 = r6.optJSONArray(r0)
            if (r6 == 0) goto L51
        L37:
            int r0 = r6.length()
            if (r1 >= r0) goto L51
            com.kwad.sdk.m.k$a$a r0 = new com.kwad.sdk.m.k$a$a
            r0.<init>()
            org.json.JSONObject r2 = r6.optJSONObject(r1)
            r0.parseJson(r2)
            java.util.List<com.kwad.sdk.m.k$a$a> r2 = r5.aMM
            r2.add(r0)
            int r1 = r1 + 1
            goto L37
        L51:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.m.k.a r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            java.util.List<java.lang.String> r0 = r2.aML
            java.lang.String r1 = "c_cns"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            java.util.List<com.kwad.sdk.m.k$a$a> r2 = r2.aMM
            java.lang.String r0 = "s_cns"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.m.k$a r1 = (com.kwad.sdk.m.k.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.m.k$a r1 = (com.kwad.sdk.m.k.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
