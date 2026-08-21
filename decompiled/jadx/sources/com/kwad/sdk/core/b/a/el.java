package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class el implements com.kwad.sdk.core.d<com.kwad.sdk.a.a.a.a> {
    private static void a(com.kwad.sdk.a.a.a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.gb = jSONObject.optLong("lastShowTimestamp");
        aVar.WS = jSONObject.optInt("showCount");
    }

    private static JSONObject b(com.kwad.sdk.a.a.a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.gb != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "lastShowTimestamp", aVar.gb);
        }
        if (aVar.WS != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "showCount", aVar.WS);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.a.a.a.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.a.a.a.a) bVar, jSONObject);
    }
}
