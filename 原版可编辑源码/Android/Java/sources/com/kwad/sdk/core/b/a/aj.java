package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdInfo;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

public final class aj implements com.kwad.sdk.core.d<AdInfo.AdTrackInfo> {
    private static void a(AdInfo.AdTrackInfo adTrackInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        adTrackInfo.type = jSONObject.optInt("type");
        adTrackInfo.urls = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("url");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                adTrackInfo.urls.add((String) jSONArrayOptJSONArray.opt(i));
            }
        }
    }

    private static JSONObject b(AdInfo.AdTrackInfo adTrackInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (adTrackInfo.type != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "type", adTrackInfo.type);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "url", adTrackInfo.urls);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdInfo.AdTrackInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdInfo.AdTrackInfo) bVar, jSONObject);
    }
}
