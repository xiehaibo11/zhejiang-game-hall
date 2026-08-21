package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.ae;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class et implements com.kwad.sdk.core.d<ae.a> {
    private static void a(ae.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.UY = jSONObject.optString("adTemplate");
        if (aVar.UY == JSONObject.NULL) {
            aVar.UY = "";
        }
    }

    private static JSONObject b(ae.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.UY != null && !aVar.UY.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adTemplate", aVar.UY);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((ae.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((ae.a) bVar, jSONObject);
    }
}
