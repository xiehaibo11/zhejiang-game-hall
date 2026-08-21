package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdInfo;
import org.json.JSONObject;

public final class dn implements com.kwad.sdk.core.d<AdInfo.FullScreenVideoInfo> {
    private static void a(AdInfo.FullScreenVideoInfo fullScreenVideoInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        fullScreenVideoInfo.fullScreenEndCardSwitch = jSONObject.optBoolean("fullScreenEndCardSwitch");
        fullScreenVideoInfo.showLandingPage = jSONObject.optInt("showLandingPage");
    }

    private static JSONObject b(AdInfo.FullScreenVideoInfo fullScreenVideoInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (fullScreenVideoInfo.fullScreenEndCardSwitch) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "fullScreenEndCardSwitch", fullScreenVideoInfo.fullScreenEndCardSwitch);
        }
        if (fullScreenVideoInfo.showLandingPage != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "showLandingPage", fullScreenVideoInfo.showLandingPage);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdInfo.FullScreenVideoInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdInfo.FullScreenVideoInfo) bVar, jSONObject);
    }
}
