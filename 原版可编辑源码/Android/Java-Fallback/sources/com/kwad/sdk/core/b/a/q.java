package com.kwad.sdk.core.b.a;

public final class q implements com.kwad.sdk.core.d<com.kwad.components.core.webview.jshandler.n.a> {
    public q() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.jshandler.n.a r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.Long r0 = new java.lang.Long
            java.lang.String r1 = "-1"
            r0.<init>(r1)
            long r2 = r0.longValue()
            java.lang.String r0 = "creativeId"
            long r2 = r5.optLong(r0, r2)
            r4.creativeId = r2
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "adStyle"
            int r5 = r5.optInt(r1, r0)
            r4.adStyle = r5
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.jshandler.n.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            long r0 = r3.creativeId
            java.lang.String r2 = "creativeId"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
            int r3 = r3.adStyle
            java.lang.String r0 = "adStyle"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.n$a r1 = (com.kwad.components.core.webview.jshandler.n.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.n$a r1 = (com.kwad.components.core.webview.jshandler.n.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
