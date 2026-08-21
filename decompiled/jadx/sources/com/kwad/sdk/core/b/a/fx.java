package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class fx implements com.kwad.sdk.core.d<com.kwad.components.core.offline.b> {
    private static void a(com.kwad.components.core.offline.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.Lk = jSONObject.optInt("load_module");
        bVar.Ll = jSONObject.optLong("load_status");
        bVar.Lm = jSONObject.optLong("load_duration_ms");
        bVar.Ln = jSONObject.optLong("error_code");
        bVar.Lo = jSONObject.optLong("error_msg");
    }

    private static JSONObject b(com.kwad.components.core.offline.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.Lk != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "load_module", bVar.Lk);
        }
        if (bVar.Ll != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "load_status", bVar.Ll);
        }
        if (bVar.Lm != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "load_duration_ms", bVar.Lm);
        }
        if (bVar.Ln != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "error_code", bVar.Ln);
        }
        if (bVar.Lo != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "error_msg", bVar.Lo);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.offline.b) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.offline.b) bVar, jSONObject);
    }
}
