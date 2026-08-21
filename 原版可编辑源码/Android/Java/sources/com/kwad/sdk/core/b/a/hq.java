package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class hq implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.s> {
    private static void a(com.kwad.components.core.webview.b.b.s sVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        sVar.message = jSONObject.optString("message");
        if (sVar.message == JSONObject.NULL) {
            sVar.message = "";
        }
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.s sVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (sVar.message != null && !sVar.message.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "message", sVar.message);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.s) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.s) bVar, jSONObject);
    }
}
