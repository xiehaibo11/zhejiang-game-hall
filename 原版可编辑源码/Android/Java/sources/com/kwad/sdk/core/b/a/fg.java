package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class fg implements com.kwad.sdk.core.d<com.kwad.sdk.core.webview.b.a.b> {
    private static void a(com.kwad.sdk.core.webview.b.a.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.status = jSONObject.optInt("Status");
        bVar.contentEncoding = jSONObject.optString("Content-Encoding");
        if (bVar.contentEncoding == JSONObject.NULL) {
            bVar.contentEncoding = "";
        }
        bVar.ayL = jSONObject.optString("Cache-Control");
        if (bVar.ayL == JSONObject.NULL) {
            bVar.ayL = "";
        }
        bVar.ayJ = jSONObject.optString("Content-Type");
        if (bVar.ayJ == JSONObject.NULL) {
            bVar.ayJ = "";
        }
        bVar.ayM = new com.kwad.sdk.core.webview.b.a.a();
        bVar.ayM.parseJson(jSONObject.optJSONObject("headers"));
    }

    private static JSONObject b(com.kwad.sdk.core.webview.b.a.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.status != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "Status", bVar.status);
        }
        if (bVar.contentEncoding != null && !bVar.contentEncoding.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "Content-Encoding", bVar.contentEncoding);
        }
        if (bVar.ayL != null && !bVar.ayL.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "Cache-Control", bVar.ayL);
        }
        if (bVar.ayJ != null && !bVar.ayJ.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "Content-Type", bVar.ayJ);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "headers", bVar.ayM);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.core.webview.b.a.b) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.core.webview.b.a.b) bVar, jSONObject);
    }
}
