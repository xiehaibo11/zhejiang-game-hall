package com.kwad.sdk.core.b.a;

public final class eu implements com.kwad.sdk.core.d<com.kwad.components.core.webview.jshandler.ae.b> {
    public eu() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.jshandler.ae.b r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "progress"
            double r0 = r3.optDouble(r0)
            r2.Vf = r0
            java.lang.String r0 = "status"
            int r0 = r3.optInt(r0)
            r2.status = r0
            java.lang.String r0 = "totalBytes"
            long r0 = r3.optLong(r0)
            r2.totalBytes = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.jshandler.ae.b r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            double r0 = r4.Vf
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            double r0 = r4.Vf
            java.lang.String r2 = "progress"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L16:
            int r0 = r4.status
            if (r0 == 0) goto L21
            int r0 = r4.status
            java.lang.String r1 = "status"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L21:
            long r0 = r4.totalBytes
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L30
            long r0 = r4.totalBytes
            java.lang.String r4 = "totalBytes"
            com.kwad.sdk.utils.t.putValue(r5, r4, r0)
        L30:
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.ae$b r1 = (com.kwad.components.core.webview.jshandler.ae.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.ae$b r1 = (com.kwad.components.core.webview.jshandler.ae.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
