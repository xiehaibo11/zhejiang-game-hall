package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class fn implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.m> {
    private static void a(com.kwad.components.core.webview.b.b.m mVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        mVar.Xa = jSONObject.optBoolean("muted");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.m mVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (mVar.Xa) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "muted", mVar.Xa);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.m) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.m) bVar, jSONObject);
    }
}
