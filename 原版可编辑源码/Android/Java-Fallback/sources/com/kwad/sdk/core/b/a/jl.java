package com.kwad.sdk.core.b.a;

public final class jl implements com.kwad.sdk.core.d<com.kwad.sdk.commercial.model.WebViewCommercialMsg> {
    public jl() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.commercial.model.WebViewCommercialMsg r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "category"
            java.lang.String r0 = r4.optString(r0)
            r3.category = r0
            java.lang.String r0 = r3.category
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.category = r2
        L15:
            java.lang.String r0 = "tag"
            java.lang.String r0 = r4.optString(r0)
            r3.tag = r0
            java.lang.String r0 = r3.tag
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.tag = r2
        L25:
            java.lang.String r0 = "msg"
            org.json.JSONObject r0 = r4.optJSONObject(r0)
            r3.msg = r0
            java.lang.String r0 = "extraParam"
            org.json.JSONObject r0 = r4.optJSONObject(r0)
            r3.extraParam = r0
            java.lang.String r0 = "event_id"
            java.lang.String r0 = r4.optString(r0)
            r3.eventId = r0
            java.lang.String r0 = r3.eventId
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L45
            r3.eventId = r2
        L45:
            java.lang.String r0 = "rate"
            double r0 = r4.optDouble(r0)
            r3.rate = r0
            java.lang.String r0 = "suffixRatio"
            java.lang.String r4 = r4.optString(r0)
            r3.suffixRatio = r4
            java.lang.String r4 = r3.suffixRatio
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L5d
            r3.suffixRatio = r2
        L5d:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.commercial.model.WebViewCommercialMsg r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            java.lang.String r0 = r6.category
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r6.category
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r6.category
            java.lang.String r2 = "category"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1c:
            java.lang.String r0 = r6.tag
            if (r0 == 0) goto L2f
            java.lang.String r0 = r6.tag
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r6.tag
            java.lang.String r2 = "tag"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L2f:
            org.json.JSONObject r0 = r6.msg
            java.lang.String r2 = "msg"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            org.json.JSONObject r0 = r6.extraParam
            java.lang.String r2 = "extraParam"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            java.lang.String r0 = r6.eventId
            if (r0 == 0) goto L50
            java.lang.String r0 = r6.eventId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L50
            java.lang.String r0 = r6.eventId
            java.lang.String r2 = "event_id"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L50:
            double r2 = r6.rate
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L5f
            double r2 = r6.rate
            java.lang.String r0 = "rate"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L5f:
            java.lang.String r0 = r6.suffixRatio
            if (r0 == 0) goto L72
            java.lang.String r0 = r6.suffixRatio
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L72
            java.lang.String r6 = r6.suffixRatio
            java.lang.String r0 = "suffixRatio"
            com.kwad.sdk.utils.t.putValue(r7, r0, r6)
        L72:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.commercial.model.WebViewCommercialMsg r1 = (com.kwad.sdk.commercial.model.WebViewCommercialMsg) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.commercial.model.WebViewCommercialMsg r1 = (com.kwad.sdk.commercial.model.WebViewCommercialMsg) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
