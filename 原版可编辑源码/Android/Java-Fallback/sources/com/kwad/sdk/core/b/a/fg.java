package com.kwad.sdk.core.b.a;

public final class fg implements com.kwad.sdk.core.d<com.kwad.sdk.core.webview.b.a.b> {
    public fg() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.webview.b.a.b r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "Status"
            int r0 = r4.optInt(r0)
            r3.status = r0
            java.lang.String r0 = "Content-Encoding"
            java.lang.String r0 = r4.optString(r0)
            r3.contentEncoding = r0
            java.lang.String r0 = r3.contentEncoding
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L1d
            r3.contentEncoding = r2
        L1d:
            java.lang.String r0 = "Cache-Control"
            java.lang.String r0 = r4.optString(r0)
            r3.ayL = r0
            java.lang.String r0 = r3.ayL
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2d
            r3.ayL = r2
        L2d:
            java.lang.String r0 = "Content-Type"
            java.lang.String r0 = r4.optString(r0)
            r3.ayJ = r0
            java.lang.String r0 = r3.ayJ
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3d
            r3.ayJ = r2
        L3d:
            com.kwad.sdk.core.webview.b.a.a r0 = new com.kwad.sdk.core.webview.b.a.a
            r0.<init>()
            r3.ayM = r0
            com.kwad.sdk.core.webview.b.a.a r3 = r3.ayM
            java.lang.String r0 = "headers"
            org.json.JSONObject r4 = r4.optJSONObject(r0)
            r3.parseJson(r4)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.webview.b.a.b r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            int r0 = r3.status
            if (r0 == 0) goto L12
            int r0 = r3.status
            java.lang.String r1 = "Status"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L12:
            java.lang.String r0 = r3.contentEncoding
            java.lang.String r1 = ""
            if (r0 == 0) goto L27
            java.lang.String r0 = r3.contentEncoding
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L27
            java.lang.String r0 = r3.contentEncoding
            java.lang.String r2 = "Content-Encoding"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L27:
            java.lang.String r0 = r3.ayL
            if (r0 == 0) goto L3a
            java.lang.String r0 = r3.ayL
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3a
            java.lang.String r0 = r3.ayL
            java.lang.String r2 = "Cache-Control"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L3a:
            java.lang.String r0 = r3.ayJ
            if (r0 == 0) goto L4d
            java.lang.String r0 = r3.ayJ
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L4d
            java.lang.String r0 = r3.ayJ
            java.lang.String r1 = "Content-Type"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L4d:
            com.kwad.sdk.core.webview.b.a.a r3 = r3.ayM
            java.lang.String r0 = "headers"
            com.kwad.sdk.utils.t.a(r4, r0, r3)
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.webview.b.a.b r1 = (com.kwad.sdk.core.webview.b.a.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.webview.b.a.b r1 = (com.kwad.sdk.core.webview.b.a.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
