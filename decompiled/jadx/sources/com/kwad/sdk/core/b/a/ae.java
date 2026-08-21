package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdInfo;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ae implements com.kwad.sdk.core.d<AdInfo.AdSplashInfo> {
    private static void a(AdInfo.AdSplashInfo adSplashInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        adSplashInfo.logoPosition = jSONObject.optInt("logoPosition", new Integer("1").intValue());
        adSplashInfo.mute = jSONObject.optInt("mute", new Integer("1").intValue());
        adSplashInfo.skipType = jSONObject.optInt("skipType");
        adSplashInfo.skipTips = jSONObject.optString("skipTips");
        if (adSplashInfo.skipTips == JSONObject.NULL) {
            adSplashInfo.skipTips = "";
        }
        adSplashInfo.speakerMuteIconUrl = jSONObject.optString("speakerMuteIconUrl");
        if (adSplashInfo.speakerMuteIconUrl == JSONObject.NULL) {
            adSplashInfo.speakerMuteIconUrl = "";
        }
        adSplashInfo.speakerIconUrl = jSONObject.optString("speakerIconUrl");
        if (adSplashInfo.speakerIconUrl == JSONObject.NULL) {
            adSplashInfo.speakerIconUrl = "";
        }
        adSplashInfo.imageDisplaySecond = jSONObject.optInt("imageDisplaySecond", new Integer("5").intValue());
        adSplashInfo.videoDisplaySecond = jSONObject.optInt("videoDisplaySecond", new Integer("5").intValue());
        adSplashInfo.countdownShow = jSONObject.optInt("countdownShow");
        adSplashInfo.fullScreenClickSwitch = jSONObject.optInt("fullScreenClickSwitch");
        adSplashInfo.skipButtonPosition = jSONObject.optInt("skipButtonPosition");
        adSplashInfo.splashShowClickButtonSwitch = jSONObject.optInt("splashShowClickButtonSwitch", new Integer("1").intValue());
        adSplashInfo.skipSecond = jSONObject.optInt("skipSecond");
        adSplashInfo.impressionStatisticalChangeSwitch = jSONObject.optBoolean("impressionStatisticalChangeSwitch");
        adSplashInfo.impressionLimitSize = jSONObject.optDouble("impressionLimitSize");
        adSplashInfo.cutRuleInfo = new AdInfo.CutRuleInfo();
        adSplashInfo.cutRuleInfo.parseJson(jSONObject.optJSONObject("cutRuleInfo"));
    }

    private static JSONObject b(AdInfo.AdSplashInfo adSplashInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "logoPosition", adSplashInfo.logoPosition);
        com.kwad.sdk.utils.t.putValue(jSONObject, "mute", adSplashInfo.mute);
        if (adSplashInfo.skipType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "skipType", adSplashInfo.skipType);
        }
        if (adSplashInfo.skipTips != null && !adSplashInfo.skipTips.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "skipTips", adSplashInfo.skipTips);
        }
        if (adSplashInfo.speakerMuteIconUrl != null && !adSplashInfo.speakerMuteIconUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "speakerMuteIconUrl", adSplashInfo.speakerMuteIconUrl);
        }
        if (adSplashInfo.speakerIconUrl != null && !adSplashInfo.speakerIconUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "speakerIconUrl", adSplashInfo.speakerIconUrl);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "imageDisplaySecond", adSplashInfo.imageDisplaySecond);
        com.kwad.sdk.utils.t.putValue(jSONObject, "videoDisplaySecond", adSplashInfo.videoDisplaySecond);
        if (adSplashInfo.countdownShow != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "countdownShow", adSplashInfo.countdownShow);
        }
        if (adSplashInfo.fullScreenClickSwitch != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "fullScreenClickSwitch", adSplashInfo.fullScreenClickSwitch);
        }
        if (adSplashInfo.skipButtonPosition != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "skipButtonPosition", adSplashInfo.skipButtonPosition);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "splashShowClickButtonSwitch", adSplashInfo.splashShowClickButtonSwitch);
        if (adSplashInfo.skipSecond != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "skipSecond", adSplashInfo.skipSecond);
        }
        if (adSplashInfo.impressionStatisticalChangeSwitch) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "impressionStatisticalChangeSwitch", adSplashInfo.impressionStatisticalChangeSwitch);
        }
        if (adSplashInfo.impressionLimitSize != 0.0d) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "impressionLimitSize", adSplashInfo.impressionLimitSize);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "cutRuleInfo", adSplashInfo.cutRuleInfo);
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdInfo.AdSplashInfo) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdInfo.AdSplashInfo) bVar, jSONObject);
    }
}
