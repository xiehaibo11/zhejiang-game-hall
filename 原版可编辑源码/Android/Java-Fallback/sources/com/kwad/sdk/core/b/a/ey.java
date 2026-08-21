package com.kwad.sdk.core.b.a;

public final class ey implements com.kwad.sdk.core.d<com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler.VideoPosition.KSAdJSCornerModel> {
    public ey() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler.VideoPosition.KSAdJSCornerModel r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "topLeft"
            double r0 = r3.optDouble(r0)
            r2.topLeft = r0
            java.lang.String r0 = "topRight"
            double r0 = r3.optDouble(r0)
            r2.topRight = r0
            java.lang.String r0 = "bottomRight"
            double r0 = r3.optDouble(r0)
            r2.bottomRight = r0
            java.lang.String r0 = "bottomLeft"
            double r0 = r3.optDouble(r0)
            r2.bottomLeft = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler.VideoPosition.KSAdJSCornerModel r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            double r0 = r5.topLeft
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            double r0 = r5.topLeft
            java.lang.String r4 = "topLeft"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L16:
            double r0 = r5.topRight
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L23
            double r0 = r5.topRight
            java.lang.String r4 = "topRight"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L23:
            double r0 = r5.bottomRight
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L30
            double r0 = r5.bottomRight
            java.lang.String r4 = "bottomRight"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L30:
            double r0 = r5.bottomLeft
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L3d
            double r0 = r5.bottomLeft
            java.lang.String r5 = "bottomLeft"
            com.kwad.sdk.utils.t.putValue(r6, r5, r0)
        L3d:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel r1 = (com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler.VideoPosition.KSAdJSCornerModel) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel r1 = (com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler.VideoPosition.KSAdJSCornerModel) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
