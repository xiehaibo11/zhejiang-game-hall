package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.config.item.h;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ef implements com.kwad.sdk.core.d<h.a> {
    private static void a(h.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.amD = jSONObject.optString("imei");
        if (aVar.amD == JSONObject.NULL) {
            aVar.amD = "";
        }
        aVar.amE = jSONObject.optString("oaid");
        if (aVar.amE == JSONObject.NULL) {
            aVar.amE = "";
        }
    }

    private static JSONObject b(h.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.amD != null && !aVar.amD.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "imei", aVar.amD);
        }
        if (aVar.amE != null && !aVar.amE.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "oaid", aVar.amE);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((h.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((h.a) bVar, jSONObject);
    }
}
