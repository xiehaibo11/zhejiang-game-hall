package com.kwad.sdk.core.b.a;

public final class hr implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.t> {
    public hr() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.b.b.t r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "needPromopt"
            boolean r0 = r3.optBoolean(r0)
            r2.Xe = r0
            java.lang.String r0 = "needReport"
            boolean r0 = r3.optBoolean(r0)
            r2.JK = r0
            java.lang.String r0 = "showTime"
            int r0 = r3.optInt(r0)
            r2.showTime = r0
            java.lang.String r0 = "playDuration"
            long r0 = r3.optLong(r0)
            r2.Xf = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.b.b.t r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            boolean r0 = r4.Xe
            if (r0 == 0) goto L12
            boolean r0 = r4.Xe
            java.lang.String r1 = "needPromopt"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L12:
            boolean r0 = r4.JK
            if (r0 == 0) goto L1d
            boolean r0 = r4.JK
            java.lang.String r1 = "needReport"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L1d:
            int r0 = r4.showTime
            if (r0 == 0) goto L28
            int r0 = r4.showTime
            java.lang.String r1 = "showTime"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L28:
            long r0 = r4.Xf
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L37
            long r0 = r4.Xf
            java.lang.String r4 = "playDuration"
            com.kwad.sdk.utils.t.putValue(r5, r4, r0)
        L37:
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.b.b.t r1 = (com.kwad.components.core.webview.b.b.t) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.b.b.t r1 = (com.kwad.components.core.webview.b.b.t) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
