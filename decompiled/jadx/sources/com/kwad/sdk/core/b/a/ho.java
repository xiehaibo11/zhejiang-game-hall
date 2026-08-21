package com.kwad.sdk.core.b.a;

import com.kwad.components.ad.reward.j.s;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ho implements com.kwad.sdk.core.d<s.a> {
    private static void a(s.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.xH = jSONObject.optBoolean("needCloseNeo");
    }

    private static JSONObject b(s.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.xH) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "needCloseNeo", aVar.xH);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((s.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((s.a) bVar, jSONObject);
    }
}
