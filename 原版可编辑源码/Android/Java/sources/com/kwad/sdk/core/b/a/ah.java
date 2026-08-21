package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdStyleInfo;
import org.json.JSONObject;

public final class ah implements com.kwad.sdk.core.d<AdStyleInfo> {
    private static void a(AdStyleInfo adStyleInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        adStyleInfo.playDetailInfo = new AdStyleInfo.PlayDetailInfo();
        adStyleInfo.playDetailInfo.parseJson(jSONObject.optJSONObject("playDetailInfo"));
        adStyleInfo.playEndInfo = new AdStyleInfo.PlayEndInfo();
        adStyleInfo.playEndInfo.parseJson(jSONObject.optJSONObject("playEndInfo"));
        adStyleInfo.feedAdInfo = new AdStyleInfo.FeedAdInfo();
        adStyleInfo.feedAdInfo.parseJson(jSONObject.optJSONObject("feedAdInfo"));
        adStyleInfo.adBrowseInfo = new AdStyleInfo.AdBrowseInfo();
        adStyleInfo.adBrowseInfo.parseJson(jSONObject.optJSONObject("adBrowseInfo"));
        adStyleInfo.extraDisplayInfo = new AdStyleInfo.ExtraDisplayInfo();
        adStyleInfo.extraDisplayInfo.parseJson(jSONObject.optJSONObject("extraDisplayInfo"));
        adStyleInfo.playableExtraData = jSONObject.optString("playableExtraData");
        if (adStyleInfo.playableExtraData == JSONObject.NULL) {
            adStyleInfo.playableExtraData = "";
        }
        adStyleInfo.slideClick = jSONObject.optBoolean("slideClick");
    }

    private static JSONObject b(AdStyleInfo adStyleInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.a(jSONObject, "playDetailInfo", adStyleInfo.playDetailInfo);
        com.kwad.sdk.utils.t.a(jSONObject, "playEndInfo", adStyleInfo.playEndInfo);
        com.kwad.sdk.utils.t.a(jSONObject, "feedAdInfo", adStyleInfo.feedAdInfo);
        com.kwad.sdk.utils.t.a(jSONObject, "adBrowseInfo", adStyleInfo.adBrowseInfo);
        com.kwad.sdk.utils.t.a(jSONObject, "extraDisplayInfo", adStyleInfo.extraDisplayInfo);
        if (adStyleInfo.playableExtraData != null && !adStyleInfo.playableExtraData.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "playableExtraData", adStyleInfo.playableExtraData);
        }
        if (adStyleInfo.slideClick) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "slideClick", adStyleInfo.slideClick);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdStyleInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdStyleInfo) bVar, jSONObject);
    }
}
