package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class m implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.a> {
    private static void a(com.kwad.components.core.webview.b.b.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.WQ = jSONObject.optInt("hasConverted");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.WQ != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "hasConverted", aVar.WQ);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.a) bVar, jSONObject);
    }
}
