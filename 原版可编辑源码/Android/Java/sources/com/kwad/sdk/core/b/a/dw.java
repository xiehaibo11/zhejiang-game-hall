package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdInfo;
import org.json.JSONObject;

public final class dw implements com.kwad.sdk.core.d<AdInfo.H5Config> {
    private static void a(AdInfo.H5Config h5Config, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        h5Config.apiMisTouch = jSONObject.optInt("apiMisTouch");
        h5Config.apiAdTag = jSONObject.optInt("apiAdTag");
        h5Config.apiBreathLamp = jSONObject.optInt("apiBreathLamp");
        h5Config.tagTip = jSONObject.optString("tagTip");
        if (h5Config.tagTip == JSONObject.NULL) {
            h5Config.tagTip = "";
        }
    }

    private static JSONObject b(AdInfo.H5Config h5Config, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (h5Config.apiMisTouch != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "apiMisTouch", h5Config.apiMisTouch);
        }
        if (h5Config.apiAdTag != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "apiAdTag", h5Config.apiAdTag);
        }
        if (h5Config.apiBreathLamp != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "apiBreathLamp", h5Config.apiBreathLamp);
        }
        if (h5Config.tagTip != null && !h5Config.tagTip.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "tagTip", h5Config.tagTip);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdInfo.H5Config) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdInfo.H5Config) bVar, jSONObject);
    }
}
