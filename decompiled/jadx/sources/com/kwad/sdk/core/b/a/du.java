package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.g;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class du implements com.kwad.sdk.core.d<g.a> {
    private static void a(g.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.data = jSONObject.optString("data");
        if (aVar.data == JSONObject.NULL) {
            aVar.data = "";
        }
    }

    private static JSONObject b(g.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.data != null && !aVar.data.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "data", aVar.data);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((g.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((g.a) bVar, jSONObject);
    }
}
