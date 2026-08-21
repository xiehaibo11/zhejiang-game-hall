package com.kwad.sdk.core.b.a;

public final class db implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdStyleInfo.FeedAdInfo> {
    public db() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdStyleInfo.FeedAdInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "templateConfig"
            java.lang.String r0 = r3.optString(r0)
            r2.templateConfig = r0
            java.lang.String r0 = r2.templateConfig
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L15
            java.lang.String r0 = ""
            r2.templateConfig = r0
        L15:
            java.lang.String r0 = "heightRatio"
            double r0 = r3.optDouble(r0)
            r2.heightRatio = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdStyleInfo.FeedAdInfo r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            java.lang.String r0 = r4.templateConfig
            if (r0 == 0) goto L1c
            java.lang.String r0 = r4.templateConfig
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r4.templateConfig
            java.lang.String r1 = "templateConfig"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L1c:
            double r0 = r4.heightRatio
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L2b
            double r0 = r4.heightRatio
            java.lang.String r4 = "heightRatio"
            com.kwad.sdk.utils.t.putValue(r5, r4, r0)
        L2b:
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$FeedAdInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.FeedAdInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$FeedAdInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.FeedAdInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
