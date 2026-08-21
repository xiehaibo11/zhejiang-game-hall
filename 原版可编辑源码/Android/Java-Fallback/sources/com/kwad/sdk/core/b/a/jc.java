package com.kwad.sdk.core.b.a;

public final class jc implements com.kwad.sdk.core.d<com.kwad.components.core.webview.jshandler.y.a> {
    public jc() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.jshandler.y.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "type"
            int r0 = r4.optInt(r0)
            r3.type = r0
            java.lang.String r0 = "appName"
            java.lang.String r0 = r4.optString(r0)
            r3.appName = r0
            java.lang.String r0 = r3.appName
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L1d
            r3.appName = r2
        L1d:
            java.lang.String r0 = "pkgName"
            java.lang.String r0 = r4.optString(r0)
            r3.UA = r0
            java.lang.String r0 = r3.UA
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2d
            r3.UA = r2
        L2d:
            java.lang.String r0 = "version"
            java.lang.String r0 = r4.optString(r0)
            r3.version = r0
            java.lang.String r0 = r3.version
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3d
            r3.version = r2
        L3d:
            java.lang.String r0 = "versionCode"
            int r0 = r4.optInt(r0)
            r3.versionCode = r0
            java.lang.String r0 = "appSize"
            int r0 = r4.optInt(r0)
            r3.UB = r0
            java.lang.String r0 = "md5"
            java.lang.String r0 = r4.optString(r0)
            r3.UC = r0
            java.lang.String r0 = r3.UC
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L5d
            r3.UC = r2
        L5d:
            java.lang.String r0 = "url"
            java.lang.String r0 = r4.optString(r0)
            r3.url = r0
            java.lang.String r0 = r3.url
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L6d
            r3.url = r2
        L6d:
            java.lang.String r0 = "appLink"
            java.lang.String r0 = r4.optString(r0)
            r3.UD = r0
            java.lang.String r0 = r3.UD
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L7d
            r3.UD = r2
        L7d:
            java.lang.String r0 = "icon"
            java.lang.String r0 = r4.optString(r0)
            r3.icon = r0
            java.lang.String r0 = r3.icon
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L8d
            r3.icon = r2
        L8d:
            java.lang.String r0 = "desc"
            java.lang.String r0 = r4.optString(r0)
            r3.qm = r0
            java.lang.String r0 = r3.qm
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L9d
            r3.qm = r2
        L9d:
            java.lang.String r0 = "appId"
            java.lang.String r0 = r4.optString(r0)
            r3.appId = r0
            java.lang.String r0 = r3.appId
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lad
            r3.appId = r2
        Lad:
            java.lang.String r0 = "marketUri"
            java.lang.String r0 = r4.optString(r0)
            r3.UE = r0
            java.lang.String r0 = r3.UE
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lbd
            r3.UE = r2
        Lbd:
            java.lang.String r0 = "disableLandingPageDeepLink"
            boolean r0 = r4.optBoolean(r0)
            r3.UF = r0
            java.lang.String r0 = "isLandscapeSupported"
            boolean r0 = r4.optBoolean(r0)
            r3.UG = r0
            java.lang.String r0 = "isFromLive"
            boolean r4 = r4.optBoolean(r0)
            r3.UH = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.jshandler.y.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            int r0 = r3.type
            if (r0 == 0) goto L12
            int r0 = r3.type
            java.lang.String r1 = "type"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L12:
            java.lang.String r0 = r3.appName
            java.lang.String r1 = ""
            if (r0 == 0) goto L27
            java.lang.String r0 = r3.appName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L27
            java.lang.String r0 = r3.appName
            java.lang.String r2 = "appName"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L27:
            java.lang.String r0 = r3.UA
            if (r0 == 0) goto L3a
            java.lang.String r0 = r3.UA
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3a
            java.lang.String r0 = r3.UA
            java.lang.String r2 = "pkgName"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L3a:
            java.lang.String r0 = r3.version
            if (r0 == 0) goto L4d
            java.lang.String r0 = r3.version
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L4d
            java.lang.String r0 = r3.version
            java.lang.String r2 = "version"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L4d:
            int r0 = r3.versionCode
            if (r0 == 0) goto L58
            int r0 = r3.versionCode
            java.lang.String r2 = "versionCode"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L58:
            int r0 = r3.UB
            if (r0 == 0) goto L63
            int r0 = r3.UB
            java.lang.String r2 = "appSize"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L63:
            java.lang.String r0 = r3.UC
            if (r0 == 0) goto L76
            java.lang.String r0 = r3.UC
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L76
            java.lang.String r0 = r3.UC
            java.lang.String r2 = "md5"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L76:
            java.lang.String r0 = r3.url
            if (r0 == 0) goto L89
            java.lang.String r0 = r3.url
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L89
            java.lang.String r0 = r3.url
            java.lang.String r2 = "url"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L89:
            java.lang.String r0 = r3.UD
            if (r0 == 0) goto L9c
            java.lang.String r0 = r3.UD
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9c
            java.lang.String r0 = r3.UD
            java.lang.String r2 = "appLink"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L9c:
            java.lang.String r0 = r3.icon
            if (r0 == 0) goto Laf
            java.lang.String r0 = r3.icon
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Laf
            java.lang.String r0 = r3.icon
            java.lang.String r2 = "icon"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        Laf:
            java.lang.String r0 = r3.qm
            if (r0 == 0) goto Lc2
            java.lang.String r0 = r3.qm
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lc2
            java.lang.String r0 = r3.qm
            java.lang.String r2 = "desc"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        Lc2:
            java.lang.String r0 = r3.appId
            if (r0 == 0) goto Ld5
            java.lang.String r0 = r3.appId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Ld5
            java.lang.String r0 = r3.appId
            java.lang.String r2 = "appId"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        Ld5:
            java.lang.String r0 = r3.UE
            if (r0 == 0) goto Le8
            java.lang.String r0 = r3.UE
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Le8
            java.lang.String r0 = r3.UE
            java.lang.String r1 = "marketUri"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        Le8:
            boolean r0 = r3.UF
            if (r0 == 0) goto Lf3
            boolean r0 = r3.UF
            java.lang.String r1 = "disableLandingPageDeepLink"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        Lf3:
            boolean r0 = r3.UG
            if (r0 == 0) goto Lfe
            boolean r0 = r3.UG
            java.lang.String r1 = "isLandscapeSupported"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        Lfe:
            boolean r0 = r3.UH
            if (r0 == 0) goto L109
            boolean r3 = r3.UH
            java.lang.String r0 = "isFromLive"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L109:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.y$a r1 = (com.kwad.components.core.webview.jshandler.y.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.y$a r1 = (com.kwad.components.core.webview.jshandler.y.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
