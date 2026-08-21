package com.kwad.sdk.core.b.a;

public final class ib implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.u> {
    public ib() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.b.b.u r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "currentTime"
            int r0 = r2.optInt(r0)
            r1.nM = r0
            java.lang.String r0 = "finished"
            boolean r2 = r2.optBoolean(r0)
            r1.Xg = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.b.b.u r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.nM
            if (r0 == 0) goto L12
            int r0 = r2.nM
            java.lang.String r1 = "currentTime"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            boolean r0 = r2.Xg
            if (r0 == 0) goto L1d
            boolean r2 = r2.Xg
            java.lang.String r0 = "finished"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L1d:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.b.b.u r1 = (com.kwad.components.core.webview.b.b.u) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.b.b.u r1 = (com.kwad.components.core.webview.b.b.u) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
