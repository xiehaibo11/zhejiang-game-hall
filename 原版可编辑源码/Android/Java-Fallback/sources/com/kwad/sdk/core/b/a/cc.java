package com.kwad.sdk.core.b.a;

public final class cc implements com.kwad.sdk.core.d<com.kwad.components.core.webview.jshandler.ac.a> {
    public cc() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.jshandler.ac.a r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "clickActionButton"
            boolean r0 = r3.optBoolean(r0)
            r2.UX = r0
            java.lang.String r0 = "adTemplate"
            java.lang.String r0 = r3.optString(r0)
            r2.UY = r0
            java.lang.String r0 = r2.UY
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L1d
            java.lang.String r0 = ""
            r2.UY = r0
        L1d:
            java.lang.String r0 = "area"
            int r0 = r3.optInt(r0)
            r2.UZ = r0
            com.kwad.sdk.core.webview.d.b.c r0 = new com.kwad.sdk.core.webview.d.b.c
            r0.<init>()
            r2.Va = r0
            com.kwad.sdk.core.webview.d.b.c r2 = r2.Va
            java.lang.String r0 = "logParam"
            org.json.JSONObject r3 = r3.optJSONObject(r0)
            r2.parseJson(r3)
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.jshandler.ac.a r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            boolean r0 = r2.UX
            if (r0 == 0) goto L12
            boolean r0 = r2.UX
            java.lang.String r1 = "clickActionButton"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            java.lang.String r0 = r2.UY
            if (r0 == 0) goto L27
            java.lang.String r0 = r2.UY
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L27
            java.lang.String r0 = r2.UY
            java.lang.String r1 = "adTemplate"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L27:
            int r0 = r2.UZ
            if (r0 == 0) goto L32
            int r0 = r2.UZ
            java.lang.String r1 = "area"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L32:
            com.kwad.sdk.core.webview.d.b.c r2 = r2.Va
            java.lang.String r0 = "logParam"
            com.kwad.sdk.utils.t.a(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.ac$a r1 = (com.kwad.components.core.webview.jshandler.ac.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.ac$a r1 = (com.kwad.components.core.webview.jshandler.ac.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
