package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class ff implements com.kwad.sdk.core.d<com.kwad.sdk.core.webview.d.b.c> {
    private static void a(com.kwad.sdk.core.webview.d.b.c cVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        cVar.aze = jSONObject.optInt("convertType");
        cVar.UP = jSONObject.optString("payload");
        if (cVar.UP == JSONObject.NULL) {
            cVar.UP = "";
        }
        cVar.azf = new com.kwad.sdk.core.webview.d.b.b();
        cVar.azf.parseJson(jSONObject.optJSONObject("clickInfo"));
    }

    private static JSONObject b(com.kwad.sdk.core.webview.d.b.c cVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (cVar.aze != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "convertType", cVar.aze);
        }
        if (cVar.UP != null && !cVar.UP.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "payload", cVar.UP);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "clickInfo", cVar.azf);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.core.webview.d.b.c) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.core.webview.d.b.c) bVar, jSONObject);
    }
}
