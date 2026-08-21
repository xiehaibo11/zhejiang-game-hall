package com.kwad.sdk.core.b.a;

public final class cs implements com.kwad.sdk.core.d<com.kwad.sdk.i.a.a> {
    public cs() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.i.a.a r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "run_sdk_version"
            java.lang.String r0 = r6.optString(r0)
            r5.sdkVersion = r0
            java.lang.String r0 = r5.sdkVersion
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r5.sdkVersion = r2
        L15:
            java.lang.Long r0 = new java.lang.Long
            java.lang.String r1 = "0"
            r0.<init>(r1)
            long r3 = r0.longValue()
            java.lang.String r0 = "trigger_count"
            long r3 = r6.optLong(r0, r3)
            r5.aCR = r3
            java.lang.Long r0 = new java.lang.Long
            r0.<init>(r1)
            long r3 = r0.longValue()
            java.lang.String r0 = "fail_count"
            long r3 = r6.optLong(r0, r3)
            r5.aCS = r3
            java.lang.Long r0 = new java.lang.Long
            r0.<init>(r1)
            long r0 = r0.longValue()
            java.lang.String r3 = "real_fail_count"
            long r0 = r6.optLong(r3, r0)
            r5.aCT = r0
            java.lang.String r0 = "business"
            java.lang.String r0 = r6.optString(r0)
            r5.aCU = r0
            java.lang.String r0 = r5.aCU
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L5a
            r5.aCU = r2
        L5a:
            java.lang.String r0 = "stage"
            java.lang.String r0 = r6.optString(r0)
            r5.aCV = r0
            java.lang.String r0 = r5.aCV
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L6a
            r5.aCV = r2
        L6a:
            java.lang.String r0 = "function"
            java.lang.String r6 = r6.optString(r0)
            r5.aCW = r6
            java.lang.String r6 = r5.aCW
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r6 != r0) goto L7a
            r5.aCW = r2
        L7a:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.i.a.a r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            java.lang.String r0 = r4.sdkVersion
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r4.sdkVersion
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r4.sdkVersion
            java.lang.String r2 = "run_sdk_version"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L1c:
            long r2 = r4.aCR
            java.lang.String r0 = "trigger_count"
            com.kwad.sdk.utils.t.putValue(r5, r0, r2)
            long r2 = r4.aCS
            java.lang.String r0 = "fail_count"
            com.kwad.sdk.utils.t.putValue(r5, r0, r2)
            long r2 = r4.aCT
            java.lang.String r0 = "real_fail_count"
            com.kwad.sdk.utils.t.putValue(r5, r0, r2)
            java.lang.String r0 = r4.aCU
            if (r0 == 0) goto L44
            java.lang.String r0 = r4.aCU
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L44
            java.lang.String r0 = r4.aCU
            java.lang.String r2 = "business"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L44:
            java.lang.String r0 = r4.aCV
            if (r0 == 0) goto L57
            java.lang.String r0 = r4.aCV
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L57
            java.lang.String r0 = r4.aCV
            java.lang.String r2 = "stage"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L57:
            java.lang.String r0 = r4.aCW
            if (r0 == 0) goto L6a
            java.lang.String r0 = r4.aCW
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L6a
            java.lang.String r4 = r4.aCW
            java.lang.String r0 = "function"
            com.kwad.sdk.utils.t.putValue(r5, r0, r4)
        L6a:
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.i.a$a r1 = (com.kwad.sdk.i.a.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.i.a$a r1 = (com.kwad.sdk.i.a.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
