package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdInfo;
import com.sigmob.sdk.base.mta.PointType;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ac implements com.kwad.sdk.core.d<AdInfo.AdRewardInfo> {
    private static void a(AdInfo.AdRewardInfo adRewardInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        adRewardInfo.skipShowTime = jSONObject.optInt("skipShowTime", new Integer(PointType.DOWNLOAD_TRACKING).intValue());
        adRewardInfo.rewardTime = jSONObject.optInt("rewardTime", new Integer(PointType.DOWNLOAD_TRACKING).intValue());
        adRewardInfo.showLandingPage = jSONObject.optInt("showLandingPage");
        adRewardInfo.rewardVideoEndCardSwitch = jSONObject.optBoolean("rewardVideoEndCardSwitch");
        adRewardInfo.recommendAggregateSwitch = jSONObject.optBoolean("recommendAggregateSwitch");
        adRewardInfo.callBackStrategyInfo = new AdInfo.CallBackStrategyInfo();
        adRewardInfo.callBackStrategyInfo.parseJson(jSONObject.optJSONObject("callBackStrategyInfo"));
    }

    private static JSONObject b(AdInfo.AdRewardInfo adRewardInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "skipShowTime", adRewardInfo.skipShowTime);
        com.kwad.sdk.utils.t.putValue(jSONObject, "rewardTime", adRewardInfo.rewardTime);
        if (adRewardInfo.showLandingPage != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "showLandingPage", adRewardInfo.showLandingPage);
        }
        if (adRewardInfo.rewardVideoEndCardSwitch) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "rewardVideoEndCardSwitch", adRewardInfo.rewardVideoEndCardSwitch);
        }
        if (adRewardInfo.recommendAggregateSwitch) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "recommendAggregateSwitch", adRewardInfo.recommendAggregateSwitch);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "callBackStrategyInfo", adRewardInfo.callBackStrategyInfo);
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdInfo.AdRewardInfo) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdInfo.AdRewardInfo) bVar, jSONObject);
    }
}
