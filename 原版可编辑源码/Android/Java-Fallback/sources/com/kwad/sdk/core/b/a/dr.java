package com.kwad.sdk.core.b.a;

public final class dr implements com.kwad.sdk.core.d<com.kwad.components.core.webview.jshandler.d.a> {
    public dr() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.jshandler.d.a r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "data"
            java.lang.String r2 = r2.optString(r0)
            r1.data = r2
            java.lang.String r2 = r1.data
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r2 != r0) goto L15
            java.lang.String r2 = ""
            r1.data = r2
        L15:
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.jshandler.d.a r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            java.lang.String r0 = r2.data
            if (r0 == 0) goto L1c
            java.lang.String r0 = r2.data
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r2 = r2.data
            java.lang.String r0 = "data"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L1c:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.d$a r1 = (com.kwad.components.core.webview.jshandler.d.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.d$a r1 = (com.kwad.components.core.webview.jshandler.d.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
