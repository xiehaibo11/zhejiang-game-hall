package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class fb implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.l> {
    private static void a(com.kwad.components.core.webview.b.b.l lVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        lVar.WZ = jSONObject.optString("landingPageUrl");
        if (lVar.WZ == JSONObject.NULL) {
            lVar.WZ = "";
        }
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.l lVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (lVar.WZ != null && !lVar.WZ.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "landingPageUrl", lVar.WZ);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.l) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.l) bVar, jSONObject);
    }
}
