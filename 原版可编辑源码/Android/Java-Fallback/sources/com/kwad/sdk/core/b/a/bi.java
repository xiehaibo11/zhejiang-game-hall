package com.kwad.sdk.core.b.a;

public final class bi implements com.kwad.sdk.core.d<com.kwad.sdk.core.webview.d.b.b> {
    public bi() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.webview.d.b.b r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "x"
            double r0 = r3.optDouble(r0)
            r2.x = r0
            java.lang.String r0 = "y"
            double r0 = r3.optDouble(r0)
            r2.y = r0
            java.lang.String r0 = "width"
            int r0 = r3.optInt(r0)
            r2.width = r0
            java.lang.String r0 = "height"
            int r3 = r3.optInt(r0)
            r2.height = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.webview.d.b.b r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            double r0 = r5.x
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            double r0 = r5.x
            java.lang.String r4 = "x"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L16:
            double r0 = r5.y
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L23
            double r0 = r5.y
            java.lang.String r2 = "y"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L23:
            int r0 = r5.width
            if (r0 == 0) goto L2e
            int r0 = r5.width
            java.lang.String r1 = "width"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L2e:
            int r0 = r5.height
            if (r0 == 0) goto L39
            int r5 = r5.height
            java.lang.String r0 = "height"
            com.kwad.sdk.utils.t.putValue(r6, r0, r5)
        L39:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.webview.d.b.b r1 = (com.kwad.sdk.core.webview.d.b.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.webview.d.b.b r1 = (com.kwad.sdk.core.webview.d.b.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
