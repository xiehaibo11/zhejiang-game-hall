package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class fz implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.n> {
    private static void a(com.kwad.components.core.webview.b.b.n nVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        nVar.url = jSONObject.optString("url");
        if (nVar.url == JSONObject.NULL) {
            nVar.url = "";
        }
        nVar.title = jSONObject.optString("title");
        if (nVar.title == JSONObject.NULL) {
            nVar.title = "";
        }
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.n nVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (nVar.url != null && !nVar.url.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "url", nVar.url);
        }
        if (nVar.title != null && !nVar.title.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "title", nVar.title);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.n) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.n) bVar, jSONObject);
    }
}
