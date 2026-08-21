package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class bg implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.e> {
    private static void a(com.kwad.components.core.webview.b.b.e eVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        eVar.height = jSONObject.optInt("height");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.e eVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (eVar.height != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "height", eVar.height);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.e) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.e) bVar, jSONObject);
    }
}
