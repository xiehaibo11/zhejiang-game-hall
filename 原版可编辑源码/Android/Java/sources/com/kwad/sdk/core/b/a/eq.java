package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class eq implements com.kwad.sdk.core.d<com.kwad.components.ad.interstitial.b.b> {
    private static void a(com.kwad.components.ad.interstitial.b.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.gb = jSONObject.optLong("lastShowTimestamp");
        bVar.iV = jSONObject.optInt("currentDailyAdShowCount");
        bVar.iW = jSONObject.optInt("currentDailyRetainShowCount");
    }

    private static JSONObject b(com.kwad.components.ad.interstitial.b.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.gb != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "lastShowTimestamp", bVar.gb);
        }
        if (bVar.iV != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "currentDailyAdShowCount", bVar.iV);
        }
        if (bVar.iW != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "currentDailyRetainShowCount", bVar.iW);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.ad.interstitial.b.b) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.ad.interstitial.b.b) bVar, jSONObject);
    }
}
