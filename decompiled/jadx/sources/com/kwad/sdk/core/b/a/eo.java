package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class eo implements com.kwad.sdk.core.d<com.kwad.components.ad.interstitial.c.a> {
    private static void a(com.kwad.components.ad.interstitial.c.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.iX = jSONObject.optLong("lastShowCardTimeStamp");
        aVar.iY = jSONObject.optInt("cardShowCount");
    }

    private static JSONObject b(com.kwad.components.ad.interstitial.c.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.iX != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "lastShowCardTimeStamp", aVar.iX);
        }
        if (aVar.iY != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "cardShowCount", aVar.iY);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.ad.interstitial.c.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.ad.interstitial.c.a) bVar, jSONObject);
    }
}
