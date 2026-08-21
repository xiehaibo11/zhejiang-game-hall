package com.kwad.sdk.core.b.a;

public final class e implements com.kwad.sdk.core.d<com.kwad.sdk.core.webview.d.b.a> {
    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.webview.d.b.a r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "clickActionButton"
            boolean r0 = r5.optBoolean(r0)
            r4.UX = r0
            java.lang.String r0 = "area"
            int r0 = r5.optInt(r0)
            r4.UZ = r0
            java.lang.String r0 = "itemClickType"
            int r0 = r5.optInt(r0)
            r4.jG = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "-1"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r2 = "convertPageType"
            int r0 = r5.optInt(r2, r0)
            r4.azc = r0
            com.kwad.sdk.core.webview.d.b.c r0 = new com.kwad.sdk.core.webview.d.b.c
            r0.<init>()
            r4.Va = r0
            com.kwad.sdk.core.webview.d.b.c r0 = r4.Va
            java.lang.String r2 = "logParam"
            org.json.JSONObject r2 = r5.optJSONObject(r2)
            r0.parseJson(r2)
            java.lang.Boolean r0 = new java.lang.Boolean
            java.lang.String r2 = "true"
            r0.<init>(r2)
            boolean r0 = r0.booleanValue()
            java.lang.String r2 = "needReport"
            boolean r0 = r5.optBoolean(r2, r0)
            r4.JK = r0
            java.lang.Long r0 = new java.lang.Long
            r0.<init>(r1)
            long r2 = r0.longValue()
            java.lang.String r0 = "creativeId"
            long r2 = r5.optLong(r0, r2)
            r4.creativeId = r2
            java.lang.String r0 = "liveItemId"
            java.lang.String r0 = r5.optString(r0)
            r4.JT = r0
            java.lang.String r0 = r4.JT
            java.lang.Object r2 = org.json.JSONObject.NULL
            if (r0 != r2) goto L76
            java.lang.String r0 = ""
            r4.JT = r0
        L76:
            java.lang.String r0 = "sceneType"
            int r0 = r5.optInt(r0)
            r4.azd = r0
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "adStyle"
            int r5 = r5.optInt(r1, r0)
            r4.adStyle = r5
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.webview.d.b.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            boolean r0 = r3.UX
            if (r0 == 0) goto L12
            boolean r0 = r3.UX
            java.lang.String r1 = "clickActionButton"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L12:
            int r0 = r3.UZ
            if (r0 == 0) goto L1d
            int r0 = r3.UZ
            java.lang.String r1 = "area"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L1d:
            int r0 = r3.jG
            if (r0 == 0) goto L28
            int r0 = r3.jG
            java.lang.String r1 = "itemClickType"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L28:
            int r0 = r3.azc
            java.lang.String r1 = "convertPageType"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            com.kwad.sdk.core.webview.d.b.c r0 = r3.Va
            java.lang.String r1 = "logParam"
            com.kwad.sdk.utils.t.a(r4, r1, r0)
            boolean r0 = r3.JK
            java.lang.String r1 = "needReport"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            long r0 = r3.creativeId
            java.lang.String r2 = "creativeId"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
            java.lang.String r0 = r3.JT
            if (r0 == 0) goto L59
            java.lang.String r0 = r3.JT
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L59
            java.lang.String r0 = r3.JT
            java.lang.String r1 = "liveItemId"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L59:
            int r0 = r3.azd
            if (r0 == 0) goto L64
            int r0 = r3.azd
            java.lang.String r1 = "sceneType"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L64:
            int r3 = r3.adStyle
            java.lang.String r0 = "adStyle"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.webview.d.b.a r1 = (com.kwad.sdk.core.webview.d.b.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.webview.d.b.a r1 = (com.kwad.sdk.core.webview.d.b.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
