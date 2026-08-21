package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdMatrixInfo;
import org.json.JSONObject;

public final class id implements com.kwad.sdk.core.d<AdMatrixInfo.SplashSlideInfo> {
    private static void a(AdMatrixInfo.SplashSlideInfo splashSlideInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        splashSlideInfo.title = jSONObject.optString("title");
        if (splashSlideInfo.title == JSONObject.NULL) {
            splashSlideInfo.title = "";
        }
        splashSlideInfo.subtitle = jSONObject.optString("subtitle");
        if (splashSlideInfo.subtitle == JSONObject.NULL) {
            splashSlideInfo.subtitle = "";
        }
        splashSlideInfo.style = jSONObject.optInt("style");
        splashSlideInfo.convertDistance = jSONObject.optInt("convertDistance");
        splashSlideInfo.downloadTexts = new AdMatrixInfo.DownloadTexts();
        splashSlideInfo.downloadTexts.parseJson(jSONObject.optJSONObject("downloadTexts"));
    }

    private static JSONObject b(AdMatrixInfo.SplashSlideInfo splashSlideInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (splashSlideInfo.title != null && !splashSlideInfo.title.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "title", splashSlideInfo.title);
        }
        if (splashSlideInfo.subtitle != null && !splashSlideInfo.subtitle.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "subtitle", splashSlideInfo.subtitle);
        }
        if (splashSlideInfo.style != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "style", splashSlideInfo.style);
        }
        if (splashSlideInfo.convertDistance != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "convertDistance", splashSlideInfo.convertDistance);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "downloadTexts", splashSlideInfo.downloadTexts);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo.SplashSlideInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo.SplashSlideInfo) bVar, jSONObject);
    }
}
