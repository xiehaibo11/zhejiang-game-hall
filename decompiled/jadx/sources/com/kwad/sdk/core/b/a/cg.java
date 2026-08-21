package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class cg implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.h> {
    private static void a(com.kwad.components.core.webview.b.b.h hVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        hVar.WV = jSONObject.optInt("hasDeepReward");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.h hVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (hVar.WV != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "hasDeepReward", hVar.WV);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.h) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.h) bVar, jSONObject);
    }
}
