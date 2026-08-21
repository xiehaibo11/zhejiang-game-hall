package com.kwad.sdk.core.b.a;

public final class cw implements com.kwad.sdk.core.d<com.kwad.sdk.core.report.a.a> {
    public cw() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.report.a.a r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "code"
            int r0 = r2.optInt(r0)
            r1.code = r0
            java.lang.String r0 = "msg"
            java.lang.String r2 = r2.optString(r0)
            r1.msg = r2
            java.lang.String r2 = r1.msg
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r2 != r0) goto L1d
            java.lang.String r2 = ""
            r1.msg = r2
        L1d:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.report.a.a r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.code
            if (r0 == 0) goto L12
            int r0 = r2.code
            java.lang.String r1 = "code"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            java.lang.String r0 = r2.msg
            if (r0 == 0) goto L27
            java.lang.String r0 = r2.msg
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L27
            java.lang.String r2 = r2.msg
            java.lang.String r0 = "msg"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L27:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.report.a$a r1 = (com.kwad.sdk.core.report.a.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.report.a$a r1 = (com.kwad.sdk.core.report.a.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
