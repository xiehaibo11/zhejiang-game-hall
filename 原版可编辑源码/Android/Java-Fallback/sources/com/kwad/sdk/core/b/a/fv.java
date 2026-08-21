package com.kwad.sdk.core.b.a;

public final class fv implements com.kwad.sdk.core.d<com.kwad.sdk.core.network.j> {
    public fv() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.network.j r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "url"
            java.lang.String r0 = r4.optString(r0)
            r3.url = r0
            java.lang.String r0 = r3.url
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.url = r2
        L15:
            java.lang.String r0 = "host"
            java.lang.String r0 = r4.optString(r0)
            r3.host = r0
            java.lang.String r0 = r3.host
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.host = r2
        L25:
            java.lang.String r0 = "http_code"
            int r0 = r4.optInt(r0)
            r3.httpCode = r0
            java.lang.String r0 = "error_msg"
            java.lang.String r0 = r4.optString(r0)
            r3.errorMsg = r0
            java.lang.String r0 = r3.errorMsg
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3d
            r3.errorMsg = r2
        L3d:
            java.lang.String r0 = "req_type"
            java.lang.String r0 = r4.optString(r0)
            r3.apg = r0
            java.lang.String r0 = r3.apg
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L4d
            r3.apg = r2
        L4d:
            java.lang.String r0 = "use_ip"
            int r0 = r4.optInt(r0)
            r3.aph = r0
            java.lang.String r0 = "ok_http_version"
            java.lang.String r4 = r4.optString(r0)
            r3.api = r4
            java.lang.String r4 = r3.api
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L65
            r3.api = r2
        L65:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.network.j r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.url
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.url
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.url
            java.lang.String r2 = "url"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.host
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.host
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.host
            java.lang.String r2 = "host"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L2f:
            int r0 = r3.httpCode
            if (r0 == 0) goto L3a
            int r0 = r3.httpCode
            java.lang.String r2 = "http_code"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L3a:
            java.lang.String r0 = r3.errorMsg
            if (r0 == 0) goto L4d
            java.lang.String r0 = r3.errorMsg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L4d
            java.lang.String r0 = r3.errorMsg
            java.lang.String r2 = "error_msg"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L4d:
            java.lang.String r0 = r3.apg
            if (r0 == 0) goto L60
            java.lang.String r0 = r3.apg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L60
            java.lang.String r0 = r3.apg
            java.lang.String r2 = "req_type"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L60:
            int r0 = r3.aph
            if (r0 == 0) goto L6b
            int r0 = r3.aph
            java.lang.String r2 = "use_ip"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L6b:
            java.lang.String r0 = r3.api
            if (r0 == 0) goto L7e
            java.lang.String r0 = r3.api
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L7e
            java.lang.String r3 = r3.api
            java.lang.String r0 = "ok_http_version"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L7e:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.network.j r1 = (com.kwad.sdk.core.network.j) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.network.j r1 = (com.kwad.sdk.core.network.j) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
