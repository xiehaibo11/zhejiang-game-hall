package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ih implements com.kwad.sdk.core.d<com.kwad.sdk.ranger.b.a.c> {
    private static void a(com.kwad.sdk.ranger.b.a.c cVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        cVar.name = jSONObject.optString("name");
        if (cVar.name == JSONObject.NULL) {
            cVar.name = "";
        }
        cVar.aHs = jSONObject.optString("detect_info");
        if (cVar.aHs == JSONObject.NULL) {
            cVar.aHs = "";
        }
    }

    private static JSONObject b(com.kwad.sdk.ranger.b.a.c cVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (cVar.name != null && !cVar.name.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "name", cVar.name);
        }
        if (cVar.aHs != null && !cVar.aHs.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "detect_info", cVar.aHs);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.ranger.b.a.c) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.ranger.b.a.c) bVar, jSONObject);
    }
}
