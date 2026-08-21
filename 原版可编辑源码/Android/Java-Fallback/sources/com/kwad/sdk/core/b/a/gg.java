package com.kwad.sdk.core.b.a;

public final class gg implements com.kwad.sdk.core.d<com.kwad.sdk.ranger.a.a.a> {
    public gg() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.ranger.a.a.a r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "typeStr"
            java.lang.String r0 = r7.optString(r0)
            r6.aHh = r0
            java.lang.String r0 = r6.aHh
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r6.aHh = r2
        L15:
            java.lang.String r0 = "valueStr"
            java.lang.String r0 = r7.optString(r0)
            r6.aHi = r0
            java.lang.String r0 = r6.aHi
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r6.aHi = r2
        L25:
            java.lang.String r0 = "listValueType"
            java.lang.String r0 = r7.optString(r0)
            r6.aHj = r0
            java.lang.String r0 = r6.aHj
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35
            r6.aHj = r2
        L35:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r6.aHk = r0
            java.lang.String r0 = "valueStrList"
            org.json.JSONArray r0 = r7.optJSONArray(r0)
            r1 = 0
            if (r0 == 0) goto L5a
            r3 = r1
        L46:
            int r4 = r0.length()
            if (r3 >= r4) goto L5a
            java.util.List<java.lang.String> r4 = r6.aHk
            java.lang.Object r5 = r0.opt(r3)
            java.lang.String r5 = (java.lang.String) r5
            r4.add(r5)
            int r3 = r3 + 1
            goto L46
        L5a:
            java.lang.String r0 = "fieldName"
            java.lang.String r0 = r7.optString(r0)
            r6.fieldName = r0
            java.lang.String r0 = r6.fieldName
            java.lang.Object r3 = org.json.JSONObject.NULL
            if (r0 != r3) goto L6a
            r6.fieldName = r2
        L6a:
            java.lang.String r0 = "className"
            java.lang.String r0 = r7.optString(r0)
            r6.className = r0
            java.lang.String r0 = r6.className
            java.lang.Object r3 = org.json.JSONObject.NULL
            if (r0 != r3) goto L7a
            r6.className = r2
        L7a:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r6.aHl = r0
            java.lang.String r0 = "childParamList"
            org.json.JSONArray r7 = r7.optJSONArray(r0)
            if (r7 == 0) goto La3
        L89:
            int r0 = r7.length()
            if (r1 >= r0) goto La3
            com.kwad.sdk.ranger.a.a$a r0 = new com.kwad.sdk.ranger.a.a$a
            r0.<init>()
            org.json.JSONObject r2 = r7.optJSONObject(r1)
            r0.parseJson(r2)
            java.util.List<com.kwad.sdk.ranger.a.a$a> r2 = r6.aHl
            r2.add(r0)
            int r1 = r1 + 1
            goto L89
        La3:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.ranger.a.a.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.aHh
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.aHh
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.aHh
            java.lang.String r2 = "typeStr"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.aHi
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.aHi
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.aHi
            java.lang.String r2 = "valueStr"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L2f:
            java.lang.String r0 = r3.aHj
            if (r0 == 0) goto L42
            java.lang.String r0 = r3.aHj
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = r3.aHj
            java.lang.String r2 = "listValueType"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L42:
            java.util.List<java.lang.String> r0 = r3.aHk
            java.lang.String r2 = "valueStrList"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
            java.lang.String r0 = r3.fieldName
            if (r0 == 0) goto L5c
            java.lang.String r0 = r3.fieldName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L5c
            java.lang.String r0 = r3.fieldName
            java.lang.String r2 = "fieldName"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L5c:
            java.lang.String r0 = r3.className
            if (r0 == 0) goto L6f
            java.lang.String r0 = r3.className
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L6f
            java.lang.String r0 = r3.className
            java.lang.String r1 = "className"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L6f:
            java.util.List<com.kwad.sdk.ranger.a.a$a> r3 = r3.aHl
            java.lang.String r0 = "childParamList"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.ranger.a.a$a r1 = (com.kwad.sdk.ranger.a.a.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.ranger.a.a$a r1 = (com.kwad.sdk.ranger.a.a.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
