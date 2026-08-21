package com.kwad.sdk.core.b.a;

public final class gb implements com.kwad.sdk.core.d<com.kwad.sdk.h.a.a> {
    public gb() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.h.a.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "sceneId"
            java.lang.String r0 = r4.optString(r0)
            r3.sceneId = r0
            java.lang.String r0 = r3.sceneId
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L15
            java.lang.String r0 = ""
            r3.sceneId = r0
        L15:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.aCa = r0
            java.lang.String r0 = "packages"
            org.json.JSONArray r4 = r4.optJSONArray(r0)
            if (r4 == 0) goto L3f
            r0 = 0
        L25:
            int r1 = r4.length()
            if (r0 >= r1) goto L3f
            com.kwad.sdk.h.a.b r1 = new com.kwad.sdk.h.a.b
            r1.<init>()
            org.json.JSONObject r2 = r4.optJSONObject(r0)
            r1.parseJson(r2)
            java.util.List<com.kwad.sdk.h.a.b> r2 = r3.aCa
            r2.add(r1)
            int r0 = r0 + 1
            goto L25
        L3f:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.h.a.a r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            java.lang.String r0 = r2.sceneId
            if (r0 == 0) goto L1c
            java.lang.String r0 = r2.sceneId
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r2.sceneId
            java.lang.String r1 = "sceneId"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1c:
            java.util.List<com.kwad.sdk.h.a.b> r2 = r2.aCa
            java.lang.String r0 = "packages"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.h.a.a r1 = (com.kwad.sdk.h.a.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.h.a.a r1 = (com.kwad.sdk.h.a.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
