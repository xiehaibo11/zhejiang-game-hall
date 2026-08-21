package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class p implements com.kwad.sdk.core.d<com.kwad.components.core.k.a> {
    private static void a(com.kwad.components.core.k.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.Le = jSONObject.optInt("currentActiveCount");
        aVar.Lf = jSONObject.optLong("lastForceActiveTimestamp");
    }

    private static JSONObject b(com.kwad.components.core.k.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.Le != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "currentActiveCount", aVar.Le);
        }
        if (aVar.Lf != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "lastForceActiveTimestamp", aVar.Lf);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.k.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.k.a) bVar, jSONObject);
    }
}
