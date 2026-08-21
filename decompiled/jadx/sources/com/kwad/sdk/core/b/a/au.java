package com.kwad.sdk.core.b.a;

import com.kwad.components.core.p.a.c;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class au implements com.kwad.sdk.core.d<c.a> {
    private static void a(c.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.streamType = jSONObject.optInt("streamType");
        aVar.Qo = jSONObject.optInt("maxVolume");
        aVar.Qp = jSONObject.optInt("minVolume");
        aVar.Qq = jSONObject.optInt("currentVolume");
    }

    private static JSONObject b(c.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.streamType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "streamType", aVar.streamType);
        }
        if (aVar.Qo != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "maxVolume", aVar.Qo);
        }
        if (aVar.Qp != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "minVolume", aVar.Qp);
        }
        if (aVar.Qq != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "currentVolume", aVar.Qq);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((c.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((c.a) bVar, jSONObject);
    }
}
