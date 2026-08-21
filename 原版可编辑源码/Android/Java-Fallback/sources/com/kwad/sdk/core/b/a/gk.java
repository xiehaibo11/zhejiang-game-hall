package com.kwad.sdk.core.b.a;

public final class gk implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo> {
    public gk() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "type"
            int r0 = r3.optInt(r0)
            r2.type = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailWebCardInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailWebCardInfo
            r0.<init>()
            r2.detailWebCardInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailWebCardInfo r0 = r2.detailWebCardInfo
            java.lang.String r1 = "detailWebCardInfo"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailTopToolBarInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailTopToolBarInfo
            r0.<init>()
            r2.detailTopToolBarInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailTopToolBarInfo r0 = r2.detailTopToolBarInfo
            java.lang.String r1 = "detailTopToolBarInfo"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$ActionBarInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$ActionBarInfo
            r0.<init>()
            r2.actionBarInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$ActionBarInfo r0 = r2.actionBarInfo
            java.lang.String r1 = "actionBarInfo"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$PatchAdInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$PatchAdInfo
            r0.<init>()
            r2.patchAdInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$PatchAdInfo r0 = r2.patchAdInfo
            java.lang.String r1 = "patchAdInfo"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailCommonInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailCommonInfo
            r0.<init>()
            r2.detailCommonInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailCommonInfo r0 = r2.detailCommonInfo
            java.lang.String r1 = "detailCommonInfo"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DrawAdInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DrawAdInfo
            r0.<init>()
            r2.drawAdInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DrawAdInfo r2 = r2.drawAdInfo
            java.lang.String r0 = "drawAdInfo"
            org.json.JSONObject r3 = r3.optJSONObject(r0)
            r2.parseJson(r3)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo r2, org.json.JSONObject r3) {
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
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailWebCardInfo r0 = r2.detailWebCardInfo
            java.lang.String r1 = "detailWebCardInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailTopToolBarInfo r0 = r2.detailTopToolBarInfo
            java.lang.String r1 = "detailTopToolBarInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$ActionBarInfo r0 = r2.actionBarInfo
            java.lang.String r1 = "actionBarInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$PatchAdInfo r0 = r2.patchAdInfo
            java.lang.String r1 = "patchAdInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailCommonInfo r0 = r2.detailCommonInfo
            java.lang.String r1 = "detailCommonInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DrawAdInfo r2 = r2.drawAdInfo
            java.lang.String r0 = "drawAdInfo"
            com.kwad.sdk.utils.t.a(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
