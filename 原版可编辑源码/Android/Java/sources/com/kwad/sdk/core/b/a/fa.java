package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class fa implements com.kwad.sdk.core.d<com.kwad.sdk.utils.b.a> {
    private static void a(com.kwad.sdk.utils.b.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.aLC = jSONObject.optInt("put_count");
        aVar.aLD = jSONObject.optInt("get_failed_count");
        aVar.aLE = jSONObject.optInt("get_success_count");
    }

    private static JSONObject b(com.kwad.sdk.utils.b.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.aLC != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "put_count", aVar.aLC);
        }
        if (aVar.aLD != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "get_failed_count", aVar.aLD);
        }
        if (aVar.aLE != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "get_success_count", aVar.aLE);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.utils.b.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.utils.b.a) bVar, jSONObject);
    }
}
