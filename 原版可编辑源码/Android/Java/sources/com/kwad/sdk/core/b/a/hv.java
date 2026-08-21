package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.request.model.StatusInfo;
import org.json.JSONObject;

public final class hv implements com.kwad.sdk.core.d<StatusInfo.SplashAdInfo> {
    private static void a(StatusInfo.SplashAdInfo splashAdInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        splashAdInfo.dailyShowCount = jSONObject.optInt("dailyShowCount");
        splashAdInfo.splashStyleControl = new StatusInfo.SplashStyleControl();
        splashAdInfo.splashStyleControl.parseJson(jSONObject.optJSONObject("splashStyleControl"));
    }

    private static JSONObject b(StatusInfo.SplashAdInfo splashAdInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (splashAdInfo.dailyShowCount != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "dailyShowCount", splashAdInfo.dailyShowCount);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "splashStyleControl", splashAdInfo.splashStyleControl);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((StatusInfo.SplashAdInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((StatusInfo.SplashAdInfo) bVar, jSONObject);
    }
}
