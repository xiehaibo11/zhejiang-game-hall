package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class ev implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.j> {
    private static void a(com.kwad.components.core.webview.b.b.j jVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        jVar.data = jSONObject.optString("data");
        if (jVar.data == JSONObject.NULL) {
            jVar.data = "";
        }
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.j jVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (jVar.data != null && !jVar.data.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "data", jVar.data);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.j) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.j) bVar, jSONObject);
    }
}
