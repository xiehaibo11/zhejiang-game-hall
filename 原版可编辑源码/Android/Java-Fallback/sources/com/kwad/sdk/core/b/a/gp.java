package com.kwad.sdk.core.b.a;

public final class gp implements com.kwad.sdk.core.d<com.kwad.components.core.webview.jshandler.w.a> {
    public gp() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.jshandler.w.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "SDKVersion"
            java.lang.String r0 = r4.optString(r0)
            r3.Uh = r0
            java.lang.String r0 = r3.Uh
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.Uh = r2
        L15:
            java.lang.String r0 = "SDKVersionCode"
            int r0 = r4.optInt(r0)
            r3.Ui = r0
            java.lang.String r0 = "sdkApiVersion"
            java.lang.String r0 = r4.optString(r0)
            r3.Uj = r0
            java.lang.String r0 = r3.Uj
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2d
            r3.Uj = r2
        L2d:
            java.lang.String r0 = "sdkApiVersionCode"
            int r0 = r4.optInt(r0)
            r3.Uk = r0
            java.lang.String r0 = "sdkType"
            int r0 = r4.optInt(r0)
            r3.Ul = r0
            java.lang.String r0 = "appVersion"
            java.lang.String r0 = r4.optString(r0)
            r3.appVersion = r0
            java.lang.String r0 = r3.appVersion
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L4d
            r3.appVersion = r2
        L4d:
            java.lang.String r0 = "appName"
            java.lang.String r0 = r4.optString(r0)
            r3.appName = r0
            java.lang.String r0 = r3.appName
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L5d
            r3.appName = r2
        L5d:
            java.lang.String r0 = "appId"
            java.lang.String r0 = r4.optString(r0)
            r3.appId = r0
            java.lang.String r0 = r3.appId
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L6d
            r3.appId = r2
        L6d:
            java.lang.String r0 = "networkType"
            java.lang.String r0 = r4.optString(r0)
            r3.Um = r0
            java.lang.String r0 = r3.Um
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L7d
            r3.Um = r2
        L7d:
            java.lang.String r0 = "manufacturer"
            java.lang.String r0 = r4.optString(r0)
            r3.Un = r0
            java.lang.String r0 = r3.Un
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L8d
            r3.Un = r2
        L8d:
            java.lang.String r0 = "model"
            java.lang.String r0 = r4.optString(r0)
            r3.model = r0
            java.lang.String r0 = r3.model
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L9d
            r3.model = r2
        L9d:
            java.lang.String r0 = "deviceBrand"
            java.lang.String r0 = r4.optString(r0)
            r3.Uo = r0
            java.lang.String r0 = r3.Uo
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lad
            r3.Uo = r2
        Lad:
            java.lang.String r0 = "osType"
            int r0 = r4.optInt(r0)
            r3.Up = r0
            java.lang.String r0 = "systemVersion"
            java.lang.String r0 = r4.optString(r0)
            r3.Uq = r0
            java.lang.String r0 = r3.Uq
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lc5
            r3.Uq = r2
        Lc5:
            java.lang.String r0 = "osApi"
            int r0 = r4.optInt(r0)
            r3.Ur = r0
            java.lang.String r0 = "language"
            java.lang.String r0 = r4.optString(r0)
            r3.Us = r0
            java.lang.String r0 = r3.Us
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Ldd
            r3.Us = r2
        Ldd:
            java.lang.String r0 = "locale"
            java.lang.String r0 = r4.optString(r0)
            r3.Ut = r0
            java.lang.String r0 = r3.Ut
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Led
            r3.Ut = r2
        Led:
            java.lang.String r0 = "screenWidth"
            int r0 = r4.optInt(r0)
            r3.Uu = r0
            java.lang.String r0 = "screenHeight"
            int r0 = r4.optInt(r0)
            r3.Uv = r0
            java.lang.String r0 = "statusBarHeight"
            int r0 = r4.optInt(r0)
            r3.Uw = r0
            java.lang.String r0 = "titleBarHeight"
            int r4 = r4.optInt(r0)
            r3.Ux = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.jshandler.w.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.Uh
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.Uh
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.Uh
            java.lang.String r2 = "SDKVersion"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            int r0 = r3.Ui
            if (r0 == 0) goto L27
            int r0 = r3.Ui
            java.lang.String r2 = "SDKVersionCode"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L27:
            java.lang.String r0 = r3.Uj
            if (r0 == 0) goto L3a
            java.lang.String r0 = r3.Uj
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3a
            java.lang.String r0 = r3.Uj
            java.lang.String r2 = "sdkApiVersion"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L3a:
            int r0 = r3.Uk
            if (r0 == 0) goto L45
            int r0 = r3.Uk
            java.lang.String r2 = "sdkApiVersionCode"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L45:
            int r0 = r3.Ul
            if (r0 == 0) goto L50
            int r0 = r3.Ul
            java.lang.String r2 = "sdkType"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L50:
            java.lang.String r0 = r3.appVersion
            if (r0 == 0) goto L63
            java.lang.String r0 = r3.appVersion
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L63
            java.lang.String r0 = r3.appVersion
            java.lang.String r2 = "appVersion"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L63:
            java.lang.String r0 = r3.appName
            if (r0 == 0) goto L76
            java.lang.String r0 = r3.appName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L76
            java.lang.String r0 = r3.appName
            java.lang.String r2 = "appName"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L76:
            java.lang.String r0 = r3.appId
            if (r0 == 0) goto L89
            java.lang.String r0 = r3.appId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L89
            java.lang.String r0 = r3.appId
            java.lang.String r2 = "appId"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L89:
            java.lang.String r0 = r3.Um
            if (r0 == 0) goto L9c
            java.lang.String r0 = r3.Um
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9c
            java.lang.String r0 = r3.Um
            java.lang.String r2 = "networkType"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L9c:
            java.lang.String r0 = r3.Un
            if (r0 == 0) goto Laf
            java.lang.String r0 = r3.Un
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Laf
            java.lang.String r0 = r3.Un
            java.lang.String r2 = "manufacturer"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        Laf:
            java.lang.String r0 = r3.model
            if (r0 == 0) goto Lc2
            java.lang.String r0 = r3.model
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lc2
            java.lang.String r0 = r3.model
            java.lang.String r2 = "model"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        Lc2:
            java.lang.String r0 = r3.Uo
            if (r0 == 0) goto Ld5
            java.lang.String r0 = r3.Uo
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Ld5
            java.lang.String r0 = r3.Uo
            java.lang.String r2 = "deviceBrand"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        Ld5:
            int r0 = r3.Up
            if (r0 == 0) goto Le0
            int r0 = r3.Up
            java.lang.String r2 = "osType"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        Le0:
            java.lang.String r0 = r3.Uq
            if (r0 == 0) goto Lf3
            java.lang.String r0 = r3.Uq
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lf3
            java.lang.String r0 = r3.Uq
            java.lang.String r2 = "systemVersion"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        Lf3:
            int r0 = r3.Ur
            if (r0 == 0) goto Lfe
            int r0 = r3.Ur
            java.lang.String r2 = "osApi"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        Lfe:
            java.lang.String r0 = r3.Us
            if (r0 == 0) goto L111
            java.lang.String r0 = r3.Us
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L111
            java.lang.String r0 = r3.Us
            java.lang.String r2 = "language"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L111:
            java.lang.String r0 = r3.Ut
            if (r0 == 0) goto L124
            java.lang.String r0 = r3.Ut
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L124
            java.lang.String r0 = r3.Ut
            java.lang.String r1 = "locale"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L124:
            int r0 = r3.Uu
            if (r0 == 0) goto L12f
            int r0 = r3.Uu
            java.lang.String r1 = "screenWidth"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L12f:
            int r0 = r3.Uv
            if (r0 == 0) goto L13a
            int r0 = r3.Uv
            java.lang.String r1 = "screenHeight"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L13a:
            int r0 = r3.Uw
            if (r0 == 0) goto L145
            int r0 = r3.Uw
            java.lang.String r1 = "statusBarHeight"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L145:
            int r0 = r3.Ux
            if (r0 == 0) goto L150
            int r3 = r3.Ux
            java.lang.String r0 = "titleBarHeight"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L150:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.w$a r1 = (com.kwad.components.core.webview.jshandler.w.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.w$a r1 = (com.kwad.components.core.webview.jshandler.w.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
