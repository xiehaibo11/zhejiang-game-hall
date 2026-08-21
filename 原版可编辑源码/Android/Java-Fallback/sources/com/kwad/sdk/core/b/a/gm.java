package com.kwad.sdk.core.b.a;

public final class gm implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdStyleInfo.PlayEndInfo> {
    public gm() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdStyleInfo.PlayEndInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "type"
            int r0 = r3.optInt(r0)
            r2.type = r0
            java.lang.String r0 = "showLandingPage3"
            int r0 = r3.optInt(r0)
            r2.showLandingPage3 = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo$AdWebCardInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo$AdWebCardInfo
            r0.<init>()
            r2.adWebCardInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo$AdWebCardInfo r0 = r2.adWebCardInfo
            java.lang.String r1 = "adWebCardInfo"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo$EndTopToolBarInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo$EndTopToolBarInfo
            r0.<init>()
            r2.endTopToolBarInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo$EndTopToolBarInfo r2 = r2.endTopToolBarInfo
            java.lang.String r0 = "endTopToolBarInfo"
            org.json.JSONObject r3 = r3.optJSONObject(r0)
            r2.parseJson(r3)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdStyleInfo.PlayEndInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.type
            if (r0 == 0) goto L12
            int r0 = r2.type
            java.lang.String r1 = "type"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.showLandingPage3
            if (r0 == 0) goto L1d
            int r0 = r2.showLandingPage3
            java.lang.String r1 = "showLandingPage3"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1d:
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo$AdWebCardInfo r0 = r2.adWebCardInfo
            java.lang.String r1 = "adWebCardInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo$EndTopToolBarInfo r2 = r2.endTopToolBarInfo
            java.lang.String r0 = "endTopToolBarInfo"
            com.kwad.sdk.utils.t.a(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayEndInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayEndInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
