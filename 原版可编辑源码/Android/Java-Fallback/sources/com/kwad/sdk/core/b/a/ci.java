package com.kwad.sdk.core.b.a;

public final class ci implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailCommonInfo> {
    public ci() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailCommonInfo r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "middleEndcardShowTime"
            int r0 = r2.optInt(r0)
            r1.middleEndcardShowTime = r0
            java.lang.String r0 = "rewardFullClickSwitch"
            int r0 = r2.optInt(r0)
            r1.rewardFullClickSwitch = r0
            java.lang.String r0 = "rewardInteractionType"
            int r2 = r2.optInt(r0)
            r1.rewardInteractionType = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailCommonInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.middleEndcardShowTime
            if (r0 == 0) goto L12
            int r0 = r2.middleEndcardShowTime
            java.lang.String r1 = "middleEndcardShowTime"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.rewardFullClickSwitch
            if (r0 == 0) goto L1d
            int r0 = r2.rewardFullClickSwitch
            java.lang.String r1 = "rewardFullClickSwitch"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1d:
            int r0 = r2.rewardInteractionType
            if (r0 == 0) goto L28
            int r2 = r2.rewardInteractionType
            java.lang.String r0 = "rewardInteractionType"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L28:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailCommonInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailCommonInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailCommonInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailCommonInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
