package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class at implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.b> {
    private static void a(com.kwad.components.core.webview.b.b.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.WR = jSONObject.optInt("hasInstalled");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.WR != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "hasInstalled", bVar.WR);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.b) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.b) bVar, jSONObject);
    }
}
