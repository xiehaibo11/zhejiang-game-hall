package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.z;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class eb implements com.kwad.sdk.core.d<z.a> {
    private static void a(z.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.type = jSONObject.optInt("type");
        aVar.UJ = jSONObject.optInt("playDuration");
    }

    private static JSONObject b(z.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.type != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "type", aVar.type);
        }
        if (aVar.UJ != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "playDuration", aVar.UJ);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((z.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((z.a) bVar, jSONObject);
    }
}
