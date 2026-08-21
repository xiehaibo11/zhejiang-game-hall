package com.kwad.sdk.core.b.a;

public final class jf implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.x> {
    public jf() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.b.b.x r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "status"
            java.lang.String r0 = r4.optString(r0)
            r3.Xj = r0
            java.lang.String r0 = r3.Xj
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.Xj = r2
        L15:
            java.lang.String r0 = "errorCode"
            int r0 = r4.optInt(r0)
            r3.errorCode = r0
            java.lang.String r0 = "errorReason"
            java.lang.String r0 = r4.optString(r0)
            r3.errorReason = r0
            java.lang.String r0 = r3.errorReason
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2d
            r3.errorReason = r2
        L2d:
            java.lang.String r0 = "currentTime"
            int r4 = r4.optInt(r0)
            r3.nM = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.b.b.x r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.Xj
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.Xj
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.Xj
            java.lang.String r2 = "status"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            int r0 = r3.errorCode
            if (r0 == 0) goto L27
            int r0 = r3.errorCode
            java.lang.String r2 = "errorCode"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L27:
            java.lang.String r0 = r3.errorReason
            if (r0 == 0) goto L3a
            java.lang.String r0 = r3.errorReason
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3a
            java.lang.String r0 = r3.errorReason
            java.lang.String r1 = "errorReason"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L3a:
            int r0 = r3.nM
            if (r0 == 0) goto L45
            int r3 = r3.nM
            java.lang.String r0 = "currentTime"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L45:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.b.b.x r1 = (com.kwad.components.core.webview.b.b.x) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.b.b.x r1 = (com.kwad.components.core.webview.b.b.x) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
