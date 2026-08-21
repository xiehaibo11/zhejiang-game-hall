package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class bm implements com.kwad.sdk.core.d<com.kwad.sdk.core.report.k> {
    private static void a(com.kwad.sdk.core.report.k kVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        kVar.llsid = jSONObject.optLong("llsid");
        kVar.creativeId = jSONObject.optLong("creative_id");
        kVar.score = jSONObject.optInt("score");
        kVar.aqZ = jSONObject.optInt("is_bidding");
        kVar.source = jSONObject.optString("source");
        if (kVar.source == JSONObject.NULL) {
            kVar.source = "";
        }
    }

    private static JSONObject b(com.kwad.sdk.core.report.k kVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (kVar.llsid != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "llsid", kVar.llsid);
        }
        if (kVar.creativeId != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "creative_id", kVar.creativeId);
        }
        if (kVar.score != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "score", kVar.score);
        }
        if (kVar.aqZ != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "is_bidding", kVar.aqZ);
        }
        if (kVar.source != null && !kVar.source.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "source", kVar.source);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.core.report.k) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.core.report.k) bVar, jSONObject);
    }
}
