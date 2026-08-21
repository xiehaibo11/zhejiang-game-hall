package com.kwad.sdk.core.b.a;

public final class dt implements com.kwad.sdk.core.d<com.kwad.components.core.webview.jshandler.e.b> {
    public dt() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.jshandler.e.b r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "playableSrc"
            int r0 = r2.optInt(r0)
            r1.Ty = r0
            java.lang.String r0 = "isMiddleEnd"
            int r0 = r2.optInt(r0)
            r1.Tz = r0
            java.lang.String r0 = "adType"
            int r2 = r2.optInt(r0)
            r1.KR = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.jshandler.e.b r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.Ty
            if (r0 == 0) goto L12
            int r0 = r2.Ty
            java.lang.String r1 = "playableSrc"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.Tz
            if (r0 == 0) goto L1d
            int r0 = r2.Tz
            java.lang.String r1 = "isMiddleEnd"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1d:
            int r0 = r2.KR
            if (r0 == 0) goto L28
            int r2 = r2.KR
            java.lang.String r0 = "adType"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L28:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.e$b r1 = (com.kwad.components.core.webview.jshandler.e.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.e$b r1 = (com.kwad.components.core.webview.jshandler.e.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
