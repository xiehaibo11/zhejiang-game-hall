package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.report.r;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class bk implements com.kwad.sdk.core.d<r.a> {
    private static void a(r.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.asy = jSONObject.optInt("posIdWidth");
        aVar.asz = jSONObject.optInt("posIdHeight");
    }

    private static JSONObject b(r.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.asy != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "posIdWidth", aVar.asy);
        }
        if (aVar.asz != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "posIdHeight", aVar.asz);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((r.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((r.a) bVar, jSONObject);
    }
}
