package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class gl implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.p> {
    private static void a(com.kwad.components.core.webview.b.b.p pVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        pVar.Xc = jSONObject.optBoolean("isEnd");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.p pVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (pVar.Xc) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "isEnd", pVar.Xc);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.p) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.p) bVar, jSONObject);
    }
}
