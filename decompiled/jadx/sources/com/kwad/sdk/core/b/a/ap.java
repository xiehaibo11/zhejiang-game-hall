package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.ai;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ap implements com.kwad.sdk.core.d<ai.a> {
    private static void a(ai.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.id = jSONObject.optInt("id");
        aVar.status = jSONObject.optInt("status");
    }

    private static JSONObject b(ai.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.id != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "id", aVar.id);
        }
        if (aVar.status != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "status", aVar.status);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((ai.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((ai.a) bVar, jSONObject);
    }
}
