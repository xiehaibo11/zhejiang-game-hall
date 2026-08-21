package com.kwad.sdk.core.b.a;

public final class dx implements com.kwad.sdk.core.d<com.kwad.components.core.webview.jshandler.ad.b> {
    public dx() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.jshandler.ad.b r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.Long r0 = new java.lang.Long
            java.lang.String r1 = "-1"
            r0.<init>(r1)
            long r0 = r0.longValue()
            java.lang.String r2 = "creativeId"
            long r0 = r4.optLong(r2, r0)
            r3.creativeId = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.jshandler.ad.b r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            long r0 = r2.creativeId
            java.lang.String r2 = "creativeId"
            com.kwad.sdk.utils.t.putValue(r3, r2, r0)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.ad$b r1 = (com.kwad.components.core.webview.jshandler.ad.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.ad$b r1 = (com.kwad.components.core.webview.jshandler.ad.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
