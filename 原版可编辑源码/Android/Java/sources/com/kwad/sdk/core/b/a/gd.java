package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class gd implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.o> {
    private static void a(com.kwad.components.core.webview.b.b.o oVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        oVar.Xb = jSONObject.optInt("scene");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.o oVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (oVar.Xb != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "scene", oVar.Xb);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.o) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.o) bVar, jSONObject);
    }
}
