package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class fm implements com.kwad.sdk.core.d<com.kwad.sdk.crash.online.monitor.a.c> {
    private static void a(com.kwad.sdk.crash.online.monitor.a.c cVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        cVar.aBi = new com.kwad.sdk.crash.online.monitor.a.a();
        cVar.aBi.parseJson(jSONObject.optJSONObject("blockConfig"));
    }

    private static JSONObject b(com.kwad.sdk.crash.online.monitor.a.c cVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.a(jSONObject, "blockConfig", cVar.aBi);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.crash.online.monitor.a.c) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.crash.online.monitor.a.c) bVar, jSONObject);
    }
}
