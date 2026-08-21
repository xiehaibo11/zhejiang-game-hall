package com.kwad.sdk.core.b.a;

import com.kwad.components.ad.reward.j.f;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class bp implements com.kwad.sdk.core.d<f.a> {
    private static void a(f.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.xy = jSONObject.optBoolean("forceClose");
    }

    private static JSONObject b(f.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.xy) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "forceClose", aVar.xy);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((f.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((f.a) bVar, jSONObject);
    }
}
