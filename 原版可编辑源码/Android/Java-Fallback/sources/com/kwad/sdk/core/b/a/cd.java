package com.kwad.sdk.core.b.a;

public final class cd implements com.kwad.sdk.core.d<com.kwad.sdk.crash.a> {
    public cd() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.crash.a r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L3
            return
        L3:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.azn = r0
            java.lang.String r0 = "appIdList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            r1 = 0
            if (r0 == 0) goto L28
            r2 = r1
        L14:
            int r3 = r0.length()
            if (r2 >= r3) goto L28
            java.util.List<java.lang.String> r3 = r5.azn
            java.lang.Object r4 = r0.opt(r2)
            java.lang.String r4 = (java.lang.String) r4
            r3.add(r4)
            int r2 = r2 + 1
            goto L14
        L28:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.azo = r0
            java.lang.String r0 = "sdkVersionList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            if (r0 == 0) goto L4c
            r2 = r1
        L38:
            int r3 = r0.length()
            if (r2 >= r3) goto L4c
            java.util.List<java.lang.String> r3 = r5.azo
            java.lang.Object r4 = r0.opt(r2)
            java.lang.String r4 = (java.lang.String) r4
            r3.add(r4)
            int r2 = r2 + 1
            goto L38
        L4c:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.azp = r0
            java.lang.String r0 = "stacktraceList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            if (r0 == 0) goto L6f
        L5b:
            int r2 = r0.length()
            if (r1 >= r2) goto L6f
            java.util.List<java.lang.String> r2 = r5.azp
            java.lang.Object r3 = r0.opt(r1)
            java.lang.String r3 = (java.lang.String) r3
            r2.add(r3)
            int r1 = r1 + 1
            goto L5b
        L6f:
            java.lang.Double r0 = new java.lang.Double
            java.lang.String r1 = "1.0"
            r0.<init>(r1)
            double r0 = r0.doubleValue()
            java.lang.String r2 = "crashUploadRate"
            double r0 = r6.optDouble(r2, r0)
            r5.azq = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.crash.a r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            java.util.List<java.lang.String> r0 = r2.azn
            java.lang.String r1 = "appIdList"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            java.util.List<java.lang.String> r0 = r2.azo
            java.lang.String r1 = "sdkVersionList"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            java.util.List<java.lang.String> r0 = r2.azp
            java.lang.String r1 = "stacktraceList"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            double r0 = r2.azq
            java.lang.String r2 = "crashUploadRate"
            com.kwad.sdk.utils.t.putValue(r3, r2, r0)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.a r1 = (com.kwad.sdk.crash.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.a r1 = (com.kwad.sdk.crash.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
