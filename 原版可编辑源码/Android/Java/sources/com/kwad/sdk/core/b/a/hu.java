package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdMatrixInfo;
import org.json.JSONObject;

public final class hu implements com.kwad.sdk.core.d<AdMatrixInfo.SplashActionBarInfo> {
    private static void a(AdMatrixInfo.SplashActionBarInfo splashActionBarInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        splashActionBarInfo.title = jSONObject.optString("title");
        if (splashActionBarInfo.title == JSONObject.NULL) {
            splashActionBarInfo.title = "";
        }
        splashActionBarInfo.downloadTexts = new AdMatrixInfo.DownloadTexts();
        splashActionBarInfo.downloadTexts.parseJson(jSONObject.optJSONObject("downloadTexts"));
    }

    private static JSONObject b(AdMatrixInfo.SplashActionBarInfo splashActionBarInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (splashActionBarInfo.title != null && !splashActionBarInfo.title.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "title", splashActionBarInfo.title);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "downloadTexts", splashActionBarInfo.downloadTexts);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo.SplashActionBarInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo.SplashActionBarInfo) bVar, jSONObject);
    }
}
