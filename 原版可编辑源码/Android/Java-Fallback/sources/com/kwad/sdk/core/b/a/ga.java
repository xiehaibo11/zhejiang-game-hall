package com.kwad.sdk.core.b.a;

public final class ga implements com.kwad.sdk.core.d<com.kwad.components.core.webview.a.c> {
    public ga() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.a.c r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "originalID"
            java.lang.String r0 = r4.optString(r0)
            r3.Ts = r0
            java.lang.String r0 = r3.Ts
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.Ts = r2
        L15:
            java.lang.String r0 = "path"
            java.lang.String r4 = r4.optString(r0)
            r3.Tt = r4
            java.lang.String r4 = r3.Tt
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L25
            r3.Tt = r2
        L25:
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.a.c r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.Ts
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.Ts
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.Ts
            java.lang.String r2 = "originalID"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.Tt
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.Tt
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r3 = r3.Tt
            java.lang.String r0 = "path"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L2f:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.a.c r1 = (com.kwad.components.core.webview.a.c) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.a.c r1 = (com.kwad.components.core.webview.a.c) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
