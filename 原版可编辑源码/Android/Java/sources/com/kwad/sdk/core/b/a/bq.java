package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class bq implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.g> {
    private static void a(com.kwad.components.core.webview.b.b.g gVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        gVar.UP = jSONObject.optString("payload");
        if (gVar.UP == JSONObject.NULL) {
            gVar.UP = "";
        }
        gVar.UO = jSONObject.optInt("actionType");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.g gVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (gVar.UP != null && !gVar.UP.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "payload", gVar.UP);
        }
        if (gVar.UO != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "actionType", gVar.UO);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.g) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.g) bVar, jSONObject);
    }
}
