package com.kwad.sdk.core.b.a;

public final class hm implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.ShakeInfo> {
    public hm() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.ShakeInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "title"
            java.lang.String r0 = r4.optString(r0)
            r3.title = r0
            java.lang.String r0 = r3.title
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.title = r2
        L15:
            java.lang.String r0 = "subtitle"
            java.lang.String r0 = r4.optString(r0)
            r3.subtitle = r0
            java.lang.String r0 = r3.subtitle
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.subtitle = r2
        L25:
            java.lang.String r0 = "acceleration"
            int r0 = r4.optInt(r0)
            r3.acceleration = r0
            java.lang.String r0 = "clickDisabled"
            boolean r0 = r4.optBoolean(r0)
            r3.clickDisabled = r0
            java.lang.String r0 = "componentIndex"
            int r4 = r4.optInt(r0)
            r3.componentIndex = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.ShakeInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.title
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.title
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.title
            java.lang.String r2 = "title"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.subtitle
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.subtitle
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.subtitle
            java.lang.String r1 = "subtitle"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L2f:
            int r0 = r3.acceleration
            if (r0 == 0) goto L3a
            int r0 = r3.acceleration
            java.lang.String r1 = "acceleration"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L3a:
            boolean r0 = r3.clickDisabled
            if (r0 == 0) goto L45
            boolean r0 = r3.clickDisabled
            java.lang.String r1 = "clickDisabled"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L45:
            int r0 = r3.componentIndex
            if (r0 == 0) goto L50
            int r3 = r3.componentIndex
            java.lang.String r0 = "componentIndex"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L50:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.ShakeInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.ShakeInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
