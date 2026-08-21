package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class gr implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.a> {
    private static void a(com.kwad.sdk.core.response.model.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.posId = jSONObject.optLong("posId");
        aVar.auA = jSONObject.optInt("adPhotoCountForMedia");
        aVar.auB = jSONObject.optBoolean("enablePreload");
        aVar.auC = jSONObject.optLong("increaseAdLoadTime", new Long("10000").longValue());
        aVar.auD = jSONObject.optInt("adLoadStrategy");
        aVar.auE = jSONObject.optInt("drawAdForcedWatchTimes", new Integer("3").intValue());
    }

    private static JSONObject b(com.kwad.sdk.core.response.model.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.posId != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "posId", aVar.posId);
        }
        if (aVar.auA != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adPhotoCountForMedia", aVar.auA);
        }
        if (aVar.auB) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "enablePreload", aVar.auB);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "increaseAdLoadTime", aVar.auC);
        if (aVar.auD != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adLoadStrategy", aVar.auD);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "drawAdForcedWatchTimes", aVar.auE);
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.core.response.model.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.core.response.model.a) bVar, jSONObject);
    }
}
