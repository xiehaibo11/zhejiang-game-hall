package com.kwad.sdk.core.b.a;

import com.kwad.components.ad.reward.j.m;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class az implements com.kwad.sdk.core.d<m.a> {
    private static void a(m.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.name = jSONObject.optString("name");
        if (aVar.name == JSONObject.NULL) {
            aVar.name = "";
        }
    }

    private static JSONObject b(m.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.name != null && !aVar.name.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "name", aVar.name);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((m.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((m.a) bVar, jSONObject);
    }
}
