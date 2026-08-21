package com.kwad.sdk.core.b.a;

public final class cr implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DrawAdInfo> {
    public cr() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DrawAdInfo r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "forcedWatch"
            boolean r2 = r2.optBoolean(r0)
            r1.forcedWatch = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DrawAdInfo r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L7
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
        L7:
            boolean r0 = r1.forcedWatch
            if (r0 == 0) goto L12
            boolean r1 = r1.forcedWatch
            java.lang.String r0 = "forcedWatch"
            com.kwad.sdk.utils.t.putValue(r2, r0, r1)
        L12:
            return r2
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DrawAdInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DrawAdInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DrawAdInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DrawAdInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
