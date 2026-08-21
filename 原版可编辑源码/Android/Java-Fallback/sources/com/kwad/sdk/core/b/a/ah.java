package com.kwad.sdk.core.b.a;

public final class ah implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdStyleInfo> {
    public ah() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdStyleInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo
            r0.<init>()
            r2.playDetailInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo r0 = r2.playDetailInfo
            java.lang.String r1 = "playDetailInfo"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo
            r0.<init>()
            r2.playEndInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo r0 = r2.playEndInfo
            java.lang.String r1 = "playEndInfo"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdStyleInfo$FeedAdInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$FeedAdInfo
            r0.<init>()
            r2.feedAdInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$FeedAdInfo r0 = r2.feedAdInfo
            java.lang.String r1 = "feedAdInfo"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdStyleInfo$AdBrowseInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$AdBrowseInfo
            r0.<init>()
            r2.adBrowseInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$AdBrowseInfo r0 = r2.adBrowseInfo
            java.lang.String r1 = "adBrowseInfo"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdStyleInfo$ExtraDisplayInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$ExtraDisplayInfo
            r0.<init>()
            r2.extraDisplayInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$ExtraDisplayInfo r0 = r2.extraDisplayInfo
            java.lang.String r1 = "extraDisplayInfo"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.String r0 = "playableExtraData"
            java.lang.String r0 = r3.optString(r0)
            r2.playableExtraData = r0
            java.lang.String r0 = r2.playableExtraData
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L6f
            java.lang.String r0 = ""
            r2.playableExtraData = r0
        L6f:
            java.lang.String r0 = "slideClick"
            boolean r3 = r3.optBoolean(r0)
            r2.slideClick = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdStyleInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo r0 = r2.playDetailInfo
            java.lang.String r1 = "playDetailInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo r0 = r2.playEndInfo
            java.lang.String r1 = "playEndInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdStyleInfo$FeedAdInfo r0 = r2.feedAdInfo
            java.lang.String r1 = "feedAdInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdStyleInfo$AdBrowseInfo r0 = r2.adBrowseInfo
            java.lang.String r1 = "adBrowseInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdStyleInfo$ExtraDisplayInfo r0 = r2.extraDisplayInfo
            java.lang.String r1 = "extraDisplayInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            java.lang.String r0 = r2.playableExtraData
            if (r0 == 0) goto L3f
            java.lang.String r0 = r2.playableExtraData
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3f
            java.lang.String r0 = r2.playableExtraData
            java.lang.String r1 = "playableExtraData"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L3f:
            boolean r0 = r2.slideClick
            if (r0 == 0) goto L4a
            boolean r2 = r2.slideClick
            java.lang.String r0 = "slideClick"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L4a:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
