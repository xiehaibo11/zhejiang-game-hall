package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class ib implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.u> {
    private static void a(com.kwad.components.core.webview.b.b.u uVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        uVar.nM = jSONObject.optInt("currentTime");
        uVar.Xg = jSONObject.optBoolean("finished");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.u uVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (uVar.nM != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "currentTime", uVar.nM);
        }
        if (uVar.Xg) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "finished", uVar.Xg);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.u) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.u) bVar, jSONObject);
    }
}
