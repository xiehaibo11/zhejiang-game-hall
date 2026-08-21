package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdInfo;
import org.json.JSONObject;

public final class s implements com.kwad.sdk.core.d<AdInfo.AdInsertScreenInfo> {
    private static void a(AdInfo.AdInsertScreenInfo adInsertScreenInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        adInsertScreenInfo.cycleAggregateSwitch = jSONObject.optBoolean("cycleAggregateSwitch");
        adInsertScreenInfo.cycleAggregateDailyShowCount = jSONObject.optInt("cycleAggregateDailyShowCount", new Integer("10").intValue());
        adInsertScreenInfo.cycleAggregateStyle = jSONObject.optInt("cycleAggregateStyle");
        adInsertScreenInfo.cycleAggregateInterval = jSONObject.optInt("cycleAggregateInterval", new Integer("10").intValue());
        adInsertScreenInfo.autoCloseTime = jSONObject.optInt("autoCloseTime");
        adInsertScreenInfo.retainWindowStyle = jSONObject.optInt("retainWindowStyle");
        adInsertScreenInfo.retainWindowText = jSONObject.optString("retainWindowText");
        if (adInsertScreenInfo.retainWindowText == JSONObject.NULL) {
            adInsertScreenInfo.retainWindowText = "";
        }
        adInsertScreenInfo.retainWindowBasedAdShowCount = jSONObject.optInt("retainWindowBasedAdShowCount");
        adInsertScreenInfo.retainWindowDailyShowCount = jSONObject.optInt("retainWindowDailyShowCount");
        adInsertScreenInfo.guideShowStyle = jSONObject.optInt("guideShowStyle");
        adInsertScreenInfo.guideShowTime = jSONObject.optInt("guideShowTime", new Integer("5").intValue());
    }

    private static JSONObject b(AdInfo.AdInsertScreenInfo adInsertScreenInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (adInsertScreenInfo.cycleAggregateSwitch) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "cycleAggregateSwitch", adInsertScreenInfo.cycleAggregateSwitch);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "cycleAggregateDailyShowCount", adInsertScreenInfo.cycleAggregateDailyShowCount);
        if (adInsertScreenInfo.cycleAggregateStyle != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "cycleAggregateStyle", adInsertScreenInfo.cycleAggregateStyle);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "cycleAggregateInterval", adInsertScreenInfo.cycleAggregateInterval);
        if (adInsertScreenInfo.autoCloseTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "autoCloseTime", adInsertScreenInfo.autoCloseTime);
        }
        if (adInsertScreenInfo.retainWindowStyle != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "retainWindowStyle", adInsertScreenInfo.retainWindowStyle);
        }
        if (adInsertScreenInfo.retainWindowText != null && !adInsertScreenInfo.retainWindowText.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "retainWindowText", adInsertScreenInfo.retainWindowText);
        }
        if (adInsertScreenInfo.retainWindowBasedAdShowCount != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "retainWindowBasedAdShowCount", adInsertScreenInfo.retainWindowBasedAdShowCount);
        }
        if (adInsertScreenInfo.retainWindowDailyShowCount != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "retainWindowDailyShowCount", adInsertScreenInfo.retainWindowDailyShowCount);
        }
        if (adInsertScreenInfo.guideShowStyle != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "guideShowStyle", adInsertScreenInfo.guideShowStyle);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "guideShowTime", adInsertScreenInfo.guideShowTime);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdInfo.AdInsertScreenInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdInfo.AdInsertScreenInfo) bVar, jSONObject);
    }
}
