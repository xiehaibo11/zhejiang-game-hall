package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class jd implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.w> {
    private static void a(com.kwad.components.core.webview.b.b.w wVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        wVar.Xi = jSONObject.optInt("videoCloseTime", new Integer("0").intValue());
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.w wVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "videoCloseTime", wVar.Xi);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.w) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.w) bVar, jSONObject);
    }
}
