package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class hx implements com.kwad.sdk.core.d<com.kwad.sdk.internal.api.b> {
    private static void a(com.kwad.sdk.internal.api.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.disableShake = jSONObject.optBoolean("disableShake");
        bVar.disableRotate = jSONObject.optBoolean("disableRotate");
        bVar.disableSlide = jSONObject.optBoolean("disableSlide");
    }

    private static JSONObject b(com.kwad.sdk.internal.api.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.disableShake) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "disableShake", bVar.disableShake);
        }
        if (bVar.disableRotate) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "disableRotate", bVar.disableRotate);
        }
        if (bVar.disableSlide) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "disableSlide", bVar.disableSlide);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.internal.api.b) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.internal.api.b) bVar, jSONObject);
    }
}
