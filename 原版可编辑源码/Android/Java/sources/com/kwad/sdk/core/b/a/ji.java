package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class ji implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.y> {
    private static void a(com.kwad.components.core.webview.b.b.y yVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        yVar.nM = jSONObject.optInt("currentTime");
        yVar.Xk = jSONObject.optBoolean("failed");
        yVar.Xg = jSONObject.optBoolean("finished");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.y yVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (yVar.nM != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "currentTime", yVar.nM);
        }
        if (yVar.Xk) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "failed", yVar.Xk);
        }
        if (yVar.Xg) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "finished", yVar.Xg);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.y) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.y) bVar, jSONObject);
    }
}
