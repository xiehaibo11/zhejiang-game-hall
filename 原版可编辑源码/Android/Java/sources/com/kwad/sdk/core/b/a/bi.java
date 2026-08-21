package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class bi implements com.kwad.sdk.core.d<com.kwad.sdk.core.webview.d.b.b> {
    private static void a(com.kwad.sdk.core.webview.d.b.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.x = jSONObject.optDouble("x");
        bVar.y = jSONObject.optDouble("y");
        bVar.width = jSONObject.optInt("width");
        bVar.height = jSONObject.optInt("height");
    }

    private static JSONObject b(com.kwad.sdk.core.webview.d.b.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.x != 0.0d) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "x", bVar.x);
        }
        if (bVar.y != 0.0d) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "y", bVar.y);
        }
        if (bVar.width != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "width", bVar.width);
        }
        if (bVar.height != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "height", bVar.height);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.core.webview.d.b.b) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.core.webview.d.b.b) bVar, jSONObject);
    }
}
