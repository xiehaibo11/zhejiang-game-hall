package com.kwad.sdk.core.b.a;

public final class gx implements com.kwad.sdk.core.d<com.kwad.sdk.core.webview.d.b.a> {
    public gx() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.webview.d.b.a r3, org.json.JSONObject r4) {
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
            java.lang.String r0 = "method"
            java.lang.String r0 = r4.optString(r0)
            r3.method = r0
            java.lang.String r0 = r3.method
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.method = r2
        L25:
            java.lang.String r0 = "params"
            java.lang.String r4 = r4.optString(r0)
            r3.params = r4
            java.lang.String r4 = r3.params
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L35
            r3.params = r2
        L35:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.webview.d.b.a r3, org.json.JSONObject r4) {
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
            java.lang.String r0 = r3.method
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.method
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.method
            java.lang.String r2 = "method"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L2f:
            java.lang.String r0 = r3.params
            if (r0 == 0) goto L42
            java.lang.String r0 = r3.params
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r3 = r3.params
            java.lang.String r0 = "params"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L42:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.webview.d.b$a r1 = (com.kwad.sdk.core.webview.d.b.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.webview.d.b$a r1 = (com.kwad.sdk.core.webview.d.b.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
