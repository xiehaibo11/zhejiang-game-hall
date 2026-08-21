package com.kwad.sdk.core.b.a;

public final class ep implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.InterstitialCardInfo> {
    public ep() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.InterstitialCardInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo
            r0.<init>()
            r2.interactionInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r2.interactionInfo
            java.lang.String r1 = "interactionInfo"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$CycleAggregateInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$CycleAggregateInfo
            r0.<init>()
            r2.cycleAggregateInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$CycleAggregateInfo r2 = r2.cycleAggregateInfo
            java.lang.String r0 = "cycleAggregateInfo"
            org.json.JSONObject r3 = r3.optJSONObject(r0)
            r2.parseJson(r3)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.InterstitialCardInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r2.interactionInfo
            java.lang.String r1 = "interactionInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$CycleAggregateInfo r2 = r2.cycleAggregateInfo
            java.lang.String r0 = "cycleAggregateInfo"
            com.kwad.sdk.utils.t.a(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.InterstitialCardInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.InterstitialCardInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
