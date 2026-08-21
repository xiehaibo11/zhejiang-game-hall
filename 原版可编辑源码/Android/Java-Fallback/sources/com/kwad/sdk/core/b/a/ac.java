package com.kwad.sdk.core.b.a;

public final class ac implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.AdRewardInfo> {
    public ac() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.AdRewardInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "30"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r2 = "skipShowTime"
            int r0 = r4.optInt(r2, r0)
            r3.skipShowTime = r0
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "rewardTime"
            int r0 = r4.optInt(r1, r0)
            r3.rewardTime = r0
            java.lang.String r0 = "showLandingPage"
            int r0 = r4.optInt(r0)
            r3.showLandingPage = r0
            java.lang.String r0 = "rewardVideoEndCardSwitch"
            boolean r0 = r4.optBoolean(r0)
            r3.rewardVideoEndCardSwitch = r0
            java.lang.String r0 = "recommendAggregateSwitch"
            boolean r0 = r4.optBoolean(r0)
            r3.recommendAggregateSwitch = r0
            com.kwad.sdk.core.response.model.AdInfo$CallBackStrategyInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$CallBackStrategyInfo
            r0.<init>()
            r3.callBackStrategyInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$CallBackStrategyInfo r3 = r3.callBackStrategyInfo
            java.lang.String r0 = "callBackStrategyInfo"
            org.json.JSONObject r4 = r4.optJSONObject(r0)
            r3.parseJson(r4)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.AdRewardInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.skipShowTime
            java.lang.String r1 = "skipShowTime"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.rewardTime
            java.lang.String r1 = "rewardTime"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.showLandingPage
            if (r0 == 0) goto L20
            int r0 = r2.showLandingPage
            java.lang.String r1 = "showLandingPage"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L20:
            boolean r0 = r2.rewardVideoEndCardSwitch
            if (r0 == 0) goto L2b
            boolean r0 = r2.rewardVideoEndCardSwitch
            java.lang.String r1 = "rewardVideoEndCardSwitch"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L2b:
            boolean r0 = r2.recommendAggregateSwitch
            if (r0 == 0) goto L36
            boolean r0 = r2.recommendAggregateSwitch
            java.lang.String r1 = "recommendAggregateSwitch"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L36:
            com.kwad.sdk.core.response.model.AdInfo$CallBackStrategyInfo r2 = r2.callBackStrategyInfo
            java.lang.String r0 = "callBackStrategyInfo"
            com.kwad.sdk.utils.t.a(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdRewardInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdRewardInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
