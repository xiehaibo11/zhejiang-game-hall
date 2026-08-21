package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class ez implements com.kwad.sdk.core.d<com.kwad.components.ad.reward.c.b> {
    private static void a(com.kwad.components.ad.reward.c.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.rv = jSONObject.optInt("extraRewardType", new Integer("2").intValue());
        bVar.rw = jSONObject.optInt("extraRewardStatus");
    }

    private static JSONObject b(com.kwad.components.ad.reward.c.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "extraRewardType", bVar.rv);
        if (bVar.rw != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "extraRewardStatus", bVar.rw);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.ad.reward.c.b) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.ad.reward.c.b) bVar, jSONObject);
    }
}
