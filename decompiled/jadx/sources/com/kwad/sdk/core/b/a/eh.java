package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.config.item.j;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class eh implements com.kwad.sdk.core.d<j.a> {
    private static void a(j.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.amF = jSONObject.optInt("horizontalShowDuration", new Integer("180000").intValue());
        aVar.amG = jSONObject.optInt("verticalShowDuration", new Integer("90000").intValue());
    }

    private static JSONObject b(j.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "horizontalShowDuration", aVar.amF);
        com.kwad.sdk.utils.t.putValue(jSONObject, "verticalShowDuration", aVar.amG);
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((j.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((j.a) bVar, jSONObject);
    }
}
