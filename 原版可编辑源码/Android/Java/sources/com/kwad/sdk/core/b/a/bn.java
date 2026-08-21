package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class bn implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.f> {
    private static void a(com.kwad.components.core.webview.b.b.f fVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        fVar.WU = jSONObject.optInt("closeDelaySeconds");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.f fVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (fVar.WU != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "closeDelaySeconds", fVar.WU);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.f) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.f) bVar, jSONObject);
    }
}
