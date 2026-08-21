package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class hr implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.t> {
    private static void a(com.kwad.components.core.webview.b.b.t tVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        tVar.Xe = jSONObject.optBoolean("needPromopt");
        tVar.JK = jSONObject.optBoolean("needReport");
        tVar.showTime = jSONObject.optInt("showTime");
        tVar.Xf = jSONObject.optLong("playDuration");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.t tVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (tVar.Xe) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "needPromopt", tVar.Xe);
        }
        if (tVar.JK) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "needReport", tVar.JK);
        }
        if (tVar.showTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "showTime", tVar.showTime);
        }
        if (tVar.Xf != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "playDuration", tVar.Xf);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.t) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.t) bVar, jSONObject);
    }
}
