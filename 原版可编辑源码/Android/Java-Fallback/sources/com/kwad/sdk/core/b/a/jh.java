package com.kwad.sdk.core.b.a;

public final class jh implements com.kwad.sdk.core.d<com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler.VideoPosition> {
    public jh() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler.VideoPosition r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "leftMarginRation"
            double r0 = r3.optDouble(r0)
            r2.leftMarginRation = r0
            java.lang.String r0 = "topMarginRation"
            double r0 = r3.optDouble(r0)
            r2.topMarginRation = r0
            java.lang.String r0 = "widthRation"
            double r0 = r3.optDouble(r0)
            r2.widthRation = r0
            java.lang.String r0 = "heightWidthRation"
            double r0 = r3.optDouble(r0)
            r2.heightWidthRation = r0
            java.lang.String r0 = "leftMargin"
            int r0 = r3.optInt(r0)
            r2.leftMargin = r0
            java.lang.String r0 = "topMargin"
            int r0 = r3.optInt(r0)
            r2.topMargin = r0
            java.lang.String r0 = "width"
            int r0 = r3.optInt(r0)
            r2.width = r0
            java.lang.String r0 = "height"
            int r0 = r3.optInt(r0)
            r2.height = r0
            java.lang.String r0 = "borderRadius"
            int r3 = r3.optInt(r0)
            r2.borderRadius = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler.VideoPosition r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            double r0 = r5.leftMarginRation
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            double r0 = r5.leftMarginRation
            java.lang.String r4 = "leftMarginRation"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L16:
            double r0 = r5.topMarginRation
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L23
            double r0 = r5.topMarginRation
            java.lang.String r4 = "topMarginRation"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L23:
            double r0 = r5.widthRation
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L30
            double r0 = r5.widthRation
            java.lang.String r4 = "widthRation"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L30:
            double r0 = r5.heightWidthRation
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L3d
            double r0 = r5.heightWidthRation
            java.lang.String r2 = "heightWidthRation"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L3d:
            int r0 = r5.leftMargin
            if (r0 == 0) goto L48
            int r0 = r5.leftMargin
            java.lang.String r1 = "leftMargin"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L48:
            int r0 = r5.topMargin
            if (r0 == 0) goto L53
            int r0 = r5.topMargin
            java.lang.String r1 = "topMargin"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L53:
            int r0 = r5.width
            if (r0 == 0) goto L5e
            int r0 = r5.width
            java.lang.String r1 = "width"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L5e:
            int r0 = r5.height
            if (r0 == 0) goto L69
            int r0 = r5.height
            java.lang.String r1 = "height"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L69:
            int r0 = r5.borderRadius
            if (r0 == 0) goto L74
            int r5 = r5.borderRadius
            java.lang.String r0 = "borderRadius"
            com.kwad.sdk.utils.t.putValue(r6, r0, r5)
        L74:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler$VideoPosition r1 = (com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler.VideoPosition) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler$VideoPosition r1 = (com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler.VideoPosition) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
