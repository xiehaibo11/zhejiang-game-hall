package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class dv implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.i> {
    private static void a(com.kwad.components.core.webview.b.b.i iVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        iVar.rewardTime = jSONObject.optInt("rewardTime");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.i iVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (iVar.rewardTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "rewardTime", iVar.rewardTime);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.i) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.i) bVar, jSONObject);
    }
}
