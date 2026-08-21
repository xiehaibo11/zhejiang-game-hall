package com.kwad.sdk.core.b.a;

public final class ff implements com.kwad.sdk.core.d<com.kwad.sdk.core.webview.d.b.c> {
    public ff() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.webview.d.b.c r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "convertType"
            int r0 = r3.optInt(r0)
            r2.aze = r0
            java.lang.String r0 = "payload"
            java.lang.String r0 = r3.optString(r0)
            r2.UP = r0
            java.lang.String r0 = r2.UP
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L1d
            java.lang.String r0 = ""
            r2.UP = r0
        L1d:
            com.kwad.sdk.core.webview.d.b.b r0 = new com.kwad.sdk.core.webview.d.b.b
            r0.<init>()
            r2.azf = r0
            com.kwad.sdk.core.webview.d.b.b r2 = r2.azf
            java.lang.String r0 = "clickInfo"
            org.json.JSONObject r3 = r3.optJSONObject(r0)
            r2.parseJson(r3)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.webview.d.b.c r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.aze
            if (r0 == 0) goto L12
            int r0 = r2.aze
            java.lang.String r1 = "convertType"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            java.lang.String r0 = r2.UP
            if (r0 == 0) goto L27
            java.lang.String r0 = r2.UP
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L27
            java.lang.String r0 = r2.UP
            java.lang.String r1 = "payload"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L27:
            com.kwad.sdk.core.webview.d.b.b r2 = r2.azf
            java.lang.String r0 = "clickInfo"
            com.kwad.sdk.utils.t.a(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.webview.d.b.c r1 = (com.kwad.sdk.core.webview.d.b.c) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.webview.d.b.c r1 = (com.kwad.sdk.core.webview.d.b.c) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
