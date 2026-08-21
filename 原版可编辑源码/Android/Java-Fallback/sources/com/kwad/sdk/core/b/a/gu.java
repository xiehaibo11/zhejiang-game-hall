package com.kwad.sdk.core.b.a;

public final class gu implements com.kwad.sdk.core.d<com.kwad.sdk.ranger.d> {
    public gu() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.ranger.d r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "funcSwitch"
            long r0 = r6.optLong(r0)
            r5.aGF = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.aGG = r0
            java.lang.String r0 = "urlList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            r1 = 0
            if (r0 == 0) goto L30
            r2 = r1
        L1c:
            int r3 = r0.length()
            if (r2 >= r3) goto L30
            java.util.List<java.lang.String> r3 = r5.aGG
            java.lang.Object r4 = r0.opt(r2)
            java.lang.String r4 = (java.lang.String) r4
            r3.add(r4)
            int r2 = r2 + 1
            goto L1c
        L30:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.aGH = r0
            java.lang.String r0 = "actConfigList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            if (r0 == 0) goto L5a
            r2 = r1
        L40:
            int r3 = r0.length()
            if (r2 >= r3) goto L5a
            com.kwad.sdk.ranger.d$a r3 = new com.kwad.sdk.ranger.d$a
            r3.<init>()
            org.json.JSONObject r4 = r0.optJSONObject(r2)
            r3.parseJson(r4)
            java.util.List<com.kwad.sdk.ranger.d$a> r4 = r5.aGH
            r4.add(r3)
            int r2 = r2 + 1
            goto L40
        L5a:
            java.lang.String r0 = "byteCount"
            long r2 = r6.optLong(r0)
            r5.aGI = r2
            java.lang.String r0 = "sampleRate"
            double r2 = r6.optDouble(r0)
            r5.aGJ = r2
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.aGK = r0
            java.lang.String r0 = "anchorNodeList"
            org.json.JSONArray r6 = r6.optJSONArray(r0)
            if (r6 == 0) goto L93
        L79:
            int r0 = r6.length()
            if (r1 >= r0) goto L93
            com.kwad.sdk.ranger.a.a r0 = new com.kwad.sdk.ranger.a.a
            r0.<init>()
            org.json.JSONObject r2 = r6.optJSONObject(r1)
            r0.parseJson(r2)
            java.util.List<com.kwad.sdk.ranger.a.a> r2 = r5.aGK
            r2.add(r0)
            int r1 = r1 + 1
            goto L79
        L93:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.ranger.d r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            long r0 = r5.aGF
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r5.aGF
            java.lang.String r4 = "funcSwitch"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L16:
            java.util.List<java.lang.String> r0 = r5.aGG
            java.lang.String r1 = "urlList"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
            java.util.List<com.kwad.sdk.ranger.d$a> r0 = r5.aGH
            java.lang.String r1 = "actConfigList"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
            long r0 = r5.aGI
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L31
            long r0 = r5.aGI
            java.lang.String r2 = "byteCount"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L31:
            double r0 = r5.aGJ
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L40
            double r0 = r5.aGJ
            java.lang.String r2 = "sampleRate"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L40:
            java.util.List<com.kwad.sdk.ranger.a.a> r5 = r5.aGK
            java.lang.String r0 = "anchorNodeList"
            com.kwad.sdk.utils.t.putValue(r6, r0, r5)
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.ranger.d r1 = (com.kwad.sdk.ranger.d) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.ranger.d r1 = (com.kwad.sdk.ranger.d) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
