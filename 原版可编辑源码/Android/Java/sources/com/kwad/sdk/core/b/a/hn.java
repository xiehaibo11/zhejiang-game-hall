package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class hn implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.q> {
    private static void a(com.kwad.components.core.webview.b.b.q qVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        qVar.Xd = jSONObject.optBoolean("userForce");
        qVar.type = jSONObject.optInt("type");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.q qVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (qVar.Xd) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "userForce", qVar.Xd);
        }
        if (qVar.type != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "type", qVar.type);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.q) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.q) bVar, jSONObject);
    }
}
