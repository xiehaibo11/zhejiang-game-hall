package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class fe implements com.kwad.sdk.core.d<com.kwad.components.ad.fullscreen.b.b> {
    private static void a(com.kwad.components.ad.fullscreen.b.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.gb = jSONObject.optLong("lastShowTimestamp");
        bVar.gc = jSONObject.optInt("currentDailyCount");
    }

    private static JSONObject b(com.kwad.components.ad.fullscreen.b.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.gb != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "lastShowTimestamp", bVar.gb);
        }
        if (bVar.gc != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "currentDailyCount", bVar.gc);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.ad.fullscreen.b.b) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.ad.fullscreen.b.b) bVar, jSONObject);
    }
}
