package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class jb implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.v> {
    private static void a(com.kwad.components.core.webview.b.b.v vVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        vVar.Xh = jSONObject.optInt("rewardTaskState");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.v vVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (vVar.Xh != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "rewardTaskState", vVar.Xh);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.v) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.v) bVar, jSONObject);
    }
}
