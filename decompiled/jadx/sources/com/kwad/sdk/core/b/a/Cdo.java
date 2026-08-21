package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: renamed from: com.kwad.sdk.core.b.a.do, reason: invalid class name */
/* JADX INFO: loaded from: classes2.dex */
public final class Cdo implements com.kwad.sdk.core.d<com.kwad.sdk.ranger.b.a.a> {
    private static void a(com.kwad.sdk.ranger.b.a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.key = jSONObject.optString("key");
        if (aVar.key == JSONObject.NULL) {
            aVar.key = "";
        }
        aVar.value = jSONObject.optInt("value");
    }

    private static JSONObject b(com.kwad.sdk.ranger.b.a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.key != null && !aVar.key.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "key", aVar.key);
        }
        if (aVar.value != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "value", aVar.value);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.ranger.b.a.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.ranger.b.a.a) bVar, jSONObject);
    }
}
