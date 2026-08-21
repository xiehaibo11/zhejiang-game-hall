package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class aw implements com.kwad.sdk.core.d<com.kwad.components.ad.reward.model.b> {
    private static void a(com.kwad.components.ad.reward.model.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.iX = jSONObject.optLong("lastShowCardTimeStamp");
        bVar.iY = jSONObject.optInt("cardShowCount");
    }

    private static JSONObject b(com.kwad.components.ad.reward.model.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.iX != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "lastShowCardTimeStamp", bVar.iX);
        }
        if (bVar.iY != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "cardShowCount", bVar.iY);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.ad.reward.model.b) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.ad.reward.model.b) bVar, jSONObject);
    }
}
