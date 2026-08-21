package com.kwad.sdk.core.b.a;

public final class da implements com.kwad.sdk.core.d<com.kwad.sdk.crash.online.monitor.a.b> {
    public da() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.crash.online.monitor.a.b r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "appId"
            java.lang.String r0 = r4.optString(r0)
            r3.appId = r0
            java.lang.String r0 = r3.appId
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.appId = r2
        L15:
            java.lang.String r0 = "pluginListenerName"
            java.lang.String r0 = r4.optString(r0)
            r3.aBc = r0
            java.lang.String r0 = r3.aBc
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.aBc = r2
        L25:
            java.lang.String r0 = "reportMethodName"
            java.lang.String r0 = r4.optString(r0)
            r3.aBd = r0
            java.lang.String r0 = r3.aBd
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35
            r3.aBd = r2
        L35:
            java.lang.String r0 = "otherProxyClassName"
            java.lang.String r0 = r4.optString(r0)
            r3.aBe = r0
            java.lang.String r0 = r3.aBe
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L45
            r3.aBe = r2
        L45:
            java.lang.String r0 = "otherFieldName"
            java.lang.String r0 = r4.optString(r0)
            r3.aBf = r0
            java.lang.String r0 = r3.aBf
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L55
            r3.aBf = r2
        L55:
            java.lang.String r0 = "otherLevelFieldName"
            java.lang.String r0 = r4.optString(r0)
            r3.aBg = r0
            java.lang.String r0 = r3.aBg
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L65
            r3.aBg = r2
        L65:
            java.lang.String r0 = "blockTag"
            java.lang.String r4 = r4.optString(r0)
            r3.aBh = r4
            java.lang.String r4 = r3.aBh
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L75
            r3.aBh = r2
        L75:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.crash.online.monitor.a.b r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.appId
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.appId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.appId
            java.lang.String r2 = "appId"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.aBc
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.aBc
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.aBc
            java.lang.String r2 = "pluginListenerName"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L2f:
            java.lang.String r0 = r3.aBd
            if (r0 == 0) goto L42
            java.lang.String r0 = r3.aBd
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = r3.aBd
            java.lang.String r2 = "reportMethodName"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L42:
            java.lang.String r0 = r3.aBe
            if (r0 == 0) goto L55
            java.lang.String r0 = r3.aBe
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L55
            java.lang.String r0 = r3.aBe
            java.lang.String r2 = "otherProxyClassName"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L55:
            java.lang.String r0 = r3.aBf
            if (r0 == 0) goto L68
            java.lang.String r0 = r3.aBf
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L68
            java.lang.String r0 = r3.aBf
            java.lang.String r2 = "otherFieldName"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L68:
            java.lang.String r0 = r3.aBg
            if (r0 == 0) goto L7b
            java.lang.String r0 = r3.aBg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L7b
            java.lang.String r0 = r3.aBg
            java.lang.String r2 = "otherLevelFieldName"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L7b:
            java.lang.String r0 = r3.aBh
            if (r0 == 0) goto L8e
            java.lang.String r0 = r3.aBh
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L8e
            java.lang.String r3 = r3.aBh
            java.lang.String r0 = "blockTag"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L8e:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.online.monitor.a.b r1 = (com.kwad.sdk.crash.online.monitor.a.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.online.monitor.a.b r1 = (com.kwad.sdk.crash.online.monitor.a.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
