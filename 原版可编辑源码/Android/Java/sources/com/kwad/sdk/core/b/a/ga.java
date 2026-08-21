package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class ga implements com.kwad.sdk.core.d<com.kwad.components.core.webview.a.c> {
    private static void a(com.kwad.components.core.webview.a.c cVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        cVar.Ts = jSONObject.optString("originalID");
        if (cVar.Ts == JSONObject.NULL) {
            cVar.Ts = "";
        }
        cVar.Tt = jSONObject.optString("path");
        if (cVar.Tt == JSONObject.NULL) {
            cVar.Tt = "";
        }
    }

    private static JSONObject b(com.kwad.components.core.webview.a.c cVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (cVar.Ts != null && !cVar.Ts.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "originalID", cVar.Ts);
        }
        if (cVar.Tt != null && !cVar.Tt.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "path", cVar.Tt);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.a.c) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.a.c) bVar, jSONObject);
    }
}
