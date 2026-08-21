package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class en implements com.kwad.sdk.core.d<com.kwad.components.ad.interstitial.b.a> {
    private static void a(com.kwad.components.ad.interstitial.b.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.gb = jSONObject.optLong("lastShowTimestamp");
        aVar.iU = jSONObject.optInt("aggregateAdShowCount");
    }

    private static JSONObject b(com.kwad.components.ad.interstitial.b.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.gb != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "lastShowTimestamp", aVar.gb);
        }
        if (aVar.iU != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "aggregateAdShowCount", aVar.iU);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.ad.interstitial.b.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.ad.interstitial.b.a) bVar, jSONObject);
    }
}
