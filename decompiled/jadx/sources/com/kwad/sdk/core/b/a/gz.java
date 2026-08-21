package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class gz implements com.kwad.sdk.core.d<com.kwad.components.ad.reward.g.b> {
    private static void a(com.kwad.components.ad.reward.g.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.gb = jSONObject.optLong("lastShowTimestamp");
        bVar.rL = jSONObject.optInt("jumpDirectCount");
    }

    private static JSONObject b(com.kwad.components.ad.reward.g.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.gb != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "lastShowTimestamp", bVar.gb);
        }
        if (bVar.rL != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "jumpDirectCount", bVar.rL);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.ad.reward.g.b) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.ad.reward.g.b) bVar, jSONObject);
    }
}
