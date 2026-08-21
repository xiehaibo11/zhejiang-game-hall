package com.kwad.sdk.core.b.a;

import com.kwad.sdk.i.b;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class hj implements com.kwad.sdk.core.d<b.a> {
    private static void a(b.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.aCX = jSONObject.optInt("ds");
        aVar.sdkVersion = jSONObject.optString("sv");
        if (aVar.sdkVersion == JSONObject.NULL) {
            aVar.sdkVersion = "";
        }
        aVar.aCY = jSONObject.optString("spv");
        if (aVar.aCY == JSONObject.NULL) {
            aVar.aCY = "";
        }
    }

    private static JSONObject b(b.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.aCX != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "ds", aVar.aCX);
        }
        if (aVar.sdkVersion != null && !aVar.sdkVersion.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sv", aVar.sdkVersion);
        }
        if (aVar.aCY != null && !aVar.aCY.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "spv", aVar.aCY);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((b.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((b.a) bVar, jSONObject);
    }
}
