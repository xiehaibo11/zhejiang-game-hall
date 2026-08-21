package com.kwad.sdk.core.b.a;

public final class as implements com.kwad.sdk.core.d<com.kwad.components.core.webview.jshandler.aj.b> {
    public as() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.jshandler.aj.b r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "appName"
            java.lang.String r0 = r4.optString(r0)
            r3.appName = r0
            java.lang.String r0 = r3.appName
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.appName = r2
        L15:
            java.lang.String r0 = "pkgName"
            java.lang.String r0 = r4.optString(r0)
            r3.UA = r0
            java.lang.String r0 = r3.UA
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.UA = r2
        L25:
            java.lang.String r0 = "version"
            java.lang.String r0 = r4.optString(r0)
            r3.version = r0
            java.lang.String r0 = r3.version
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35
            r3.version = r2
        L35:
            java.lang.String r0 = "versionCode"
            int r0 = r4.optInt(r0)
            r3.versionCode = r0
            java.lang.String r0 = "appSize"
            long r0 = r4.optLong(r0)
            r3.Vm = r0
            java.lang.String r0 = "md5"
            java.lang.String r0 = r4.optString(r0)
            r3.UC = r0
            java.lang.String r0 = r3.UC
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L55
            r3.UC = r2
        L55:
            java.lang.String r0 = "url"
            java.lang.String r0 = r4.optString(r0)
            r3.url = r0
            java.lang.String r0 = r3.url
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L65
            r3.url = r2
        L65:
            java.lang.String r0 = "icon"
            java.lang.String r0 = r4.optString(r0)
            r3.icon = r0
            java.lang.String r0 = r3.icon
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L75
            r3.icon = r2
        L75:
            java.lang.String r0 = "desc"
            java.lang.String r4 = r4.optString(r0)
            r3.qm = r4
            java.lang.String r4 = r3.qm
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L85
            r3.qm = r2
        L85:
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.jshandler.aj.b r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            java.lang.String r0 = r6.appName
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r6.appName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r6.appName
            java.lang.String r2 = "appName"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1c:
            java.lang.String r0 = r6.UA
            if (r0 == 0) goto L2f
            java.lang.String r0 = r6.UA
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r6.UA
            java.lang.String r2 = "pkgName"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L2f:
            java.lang.String r0 = r6.version
            if (r0 == 0) goto L42
            java.lang.String r0 = r6.version
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = r6.version
            java.lang.String r2 = "version"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L42:
            int r0 = r6.versionCode
            if (r0 == 0) goto L4d
            int r0 = r6.versionCode
            java.lang.String r2 = "versionCode"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L4d:
            long r2 = r6.Vm
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L5c
            long r2 = r6.Vm
            java.lang.String r0 = "appSize"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L5c:
            java.lang.String r0 = r6.UC
            if (r0 == 0) goto L6f
            java.lang.String r0 = r6.UC
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L6f
            java.lang.String r0 = r6.UC
            java.lang.String r2 = "md5"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L6f:
            java.lang.String r0 = r6.url
            if (r0 == 0) goto L82
            java.lang.String r0 = r6.url
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L82
            java.lang.String r0 = r6.url
            java.lang.String r2 = "url"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L82:
            java.lang.String r0 = r6.icon
            if (r0 == 0) goto L95
            java.lang.String r0 = r6.icon
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L95
            java.lang.String r0 = r6.icon
            java.lang.String r2 = "icon"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L95:
            java.lang.String r0 = r6.qm
            if (r0 == 0) goto La8
            java.lang.String r0 = r6.qm
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto La8
            java.lang.String r6 = r6.qm
            java.lang.String r0 = "desc"
            com.kwad.sdk.utils.t.putValue(r7, r0, r6)
        La8:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.aj$b r1 = (com.kwad.components.core.webview.jshandler.aj.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.aj$b r1 = (com.kwad.components.core.webview.jshandler.aj.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
