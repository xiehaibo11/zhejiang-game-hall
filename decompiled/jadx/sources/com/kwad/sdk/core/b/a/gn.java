package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.b.a.h;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class gn implements com.kwad.sdk.core.d<h.b> {
    private static void a(h.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.Wz = jSONObject.optInt("playEndType");
    }

    private static JSONObject b(h.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.Wz != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "playEndType", bVar.Wz);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((h.b) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((h.b) bVar, jSONObject);
    }
}
