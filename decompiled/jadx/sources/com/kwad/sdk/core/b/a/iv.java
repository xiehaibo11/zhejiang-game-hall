package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class iv implements com.kwad.sdk.core.d<com.kwad.sdk.core.threads.d> {
    private static void a(com.kwad.sdk.core.threads.d dVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        dVar.avr = jSONObject.optInt("rate_reciprocal");
        dVar.avx = jSONObject.optInt("threshold");
        dVar.interval = jSONObject.optLong("interval");
    }

    private static JSONObject b(com.kwad.sdk.core.threads.d dVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (dVar.avr != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "rate_reciprocal", dVar.avr);
        }
        if (dVar.avx != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "threshold", dVar.avx);
        }
        if (dVar.interval != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "interval", dVar.interval);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.core.threads.d) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.core.threads.d) bVar, jSONObject);
    }
}
